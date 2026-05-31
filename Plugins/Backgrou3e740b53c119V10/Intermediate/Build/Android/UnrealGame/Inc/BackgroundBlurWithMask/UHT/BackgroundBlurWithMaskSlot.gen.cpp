// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BackgroundBlurWithMaskSlot.h"
#include "Layout/Margin.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBackgroundBlurWithMaskSlot() {}

// ********** Begin Cross Module References ********************************************************
BACKGROUNDBLURWITHMASK_API UClass* Z_Construct_UClass_UBackgroundBlurWithMaskSlot();
BACKGROUNDBLURWITHMASK_API UClass* Z_Construct_UClass_UBackgroundBlurWithMaskSlot_NoRegister();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
UMG_API UClass* Z_Construct_UClass_UPanelSlot();
UPackage* Z_Construct_UPackage__Script_BackgroundBlurWithMask();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBackgroundBlurWithMaskSlot Function SetHorizontalAlignment **************
struct Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetHorizontalAlignment_Statics
{
	struct BackgroundBlurWithMaskSlot_eventSetHorizontalAlignment_Parms
	{
		TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Layout|Background Blur Slot" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMaskSlot.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetHorizontalAlignment constinit property declarations ****************
	static const UECodeGen_Private::FBytePropertyParams NewProp_InHorizontalAlignment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetHorizontalAlignment constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetHorizontalAlignment Property Definitions ***************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment = { "InHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackgroundBlurWithMaskSlot_eventSetHorizontalAlignment_Parms, InHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(0, nullptr) }; // 990570535
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetHorizontalAlignment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetHorizontalAlignment_Statics::PropPointers) < 2048);
// ********** End Function SetHorizontalAlignment Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetHorizontalAlignment_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBackgroundBlurWithMaskSlot, nullptr, "SetHorizontalAlignment", 	Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetHorizontalAlignment_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetHorizontalAlignment_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetHorizontalAlignment_Statics::BackgroundBlurWithMaskSlot_eventSetHorizontalAlignment_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetHorizontalAlignment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetHorizontalAlignment_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetHorizontalAlignment_Statics::BackgroundBlurWithMaskSlot_eventSetHorizontalAlignment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetHorizontalAlignment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetHorizontalAlignment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBackgroundBlurWithMaskSlot::execSetHorizontalAlignment)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_InHorizontalAlignment);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHorizontalAlignment(EHorizontalAlignment(Z_Param_InHorizontalAlignment));
	P_NATIVE_END;
}
// ********** End Class UBackgroundBlurWithMaskSlot Function SetHorizontalAlignment ****************

// ********** Begin Class UBackgroundBlurWithMaskSlot Function SetPadding **************************
struct Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetPadding_Statics
{
	struct BackgroundBlurWithMaskSlot_eventSetPadding_Parms
	{
		FMargin InPadding;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Layout|Background Blur Slot" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMaskSlot.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetPadding constinit property declarations ****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InPadding;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetPadding constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetPadding Property Definitions ***************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetPadding_Statics::NewProp_InPadding = { "InPadding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackgroundBlurWithMaskSlot_eventSetPadding_Parms, InPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(0, nullptr) }; // 4099648758
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetPadding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetPadding_Statics::NewProp_InPadding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetPadding_Statics::PropPointers) < 2048);
// ********** End Function SetPadding Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetPadding_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBackgroundBlurWithMaskSlot, nullptr, "SetPadding", 	Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetPadding_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetPadding_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetPadding_Statics::BackgroundBlurWithMaskSlot_eventSetPadding_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetPadding_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetPadding_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetPadding_Statics::BackgroundBlurWithMaskSlot_eventSetPadding_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetPadding()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetPadding_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBackgroundBlurWithMaskSlot::execSetPadding)
{
	P_GET_STRUCT(FMargin,Z_Param_InPadding);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPadding(Z_Param_InPadding);
	P_NATIVE_END;
}
// ********** End Class UBackgroundBlurWithMaskSlot Function SetPadding ****************************

// ********** Begin Class UBackgroundBlurWithMaskSlot Function SetVerticalAlignment ****************
struct Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetVerticalAlignment_Statics
{
	struct BackgroundBlurWithMaskSlot_eventSetVerticalAlignment_Parms
	{
		TEnumAsByte<EVerticalAlignment> InVerticalAlignment;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Layout|Background Blur Slot" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMaskSlot.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetVerticalAlignment constinit property declarations ******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_InVerticalAlignment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetVerticalAlignment constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetVerticalAlignment Property Definitions *****************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetVerticalAlignment_Statics::NewProp_InVerticalAlignment = { "InVerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackgroundBlurWithMaskSlot_eventSetVerticalAlignment_Parms, InVerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(0, nullptr) }; // 2496106429
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetVerticalAlignment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetVerticalAlignment_Statics::NewProp_InVerticalAlignment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetVerticalAlignment_Statics::PropPointers) < 2048);
// ********** End Function SetVerticalAlignment Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetVerticalAlignment_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBackgroundBlurWithMaskSlot, nullptr, "SetVerticalAlignment", 	Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetVerticalAlignment_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetVerticalAlignment_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetVerticalAlignment_Statics::BackgroundBlurWithMaskSlot_eventSetVerticalAlignment_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetVerticalAlignment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetVerticalAlignment_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetVerticalAlignment_Statics::BackgroundBlurWithMaskSlot_eventSetVerticalAlignment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetVerticalAlignment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetVerticalAlignment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBackgroundBlurWithMaskSlot::execSetVerticalAlignment)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_InVerticalAlignment);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVerticalAlignment(EVerticalAlignment(Z_Param_InVerticalAlignment));
	P_NATIVE_END;
}
// ********** End Class UBackgroundBlurWithMaskSlot Function SetVerticalAlignment ******************

// ********** Begin Class UBackgroundBlurWithMaskSlot **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UBackgroundBlurWithMaskSlot;
UClass* UBackgroundBlurWithMaskSlot::GetPrivateStaticClass()
{
	using TClass = UBackgroundBlurWithMaskSlot;
	if (!Z_Registration_Info_UClass_UBackgroundBlurWithMaskSlot.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BackgroundBlurWithMaskSlot"),
			Z_Registration_Info_UClass_UBackgroundBlurWithMaskSlot.InnerSingleton,
			StaticRegisterNativesUBackgroundBlurWithMaskSlot,
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
	return Z_Registration_Info_UClass_UBackgroundBlurWithMaskSlot.InnerSingleton;
}
UClass* Z_Construct_UClass_UBackgroundBlurWithMaskSlot_NoRegister()
{
	return UBackgroundBlurWithMaskSlot::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBackgroundBlurWithMaskSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The Slot for the UBackgroundBlurWithMaskSlot, contains the widget displayed in a BackgroundBlur's single slot\n */" },
		{ "IncludePath", "BackgroundBlurWithMaskSlot.h" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMaskSlot.h" },
		{ "ToolTip", "The Slot for the UBackgroundBlurWithMaskSlot, contains the widget displayed in a BackgroundBlur's single slot" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[] = {
		{ "Category", "Layout|Background Blur Slot" },
		{ "Comment", "/** The padding area between the slot and the content it contains. */" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMaskSlot.h" },
		{ "ToolTip", "The padding area between the slot and the content it contains." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[] = {
		{ "Category", "Layout|Background Blur Slot" },
		{ "Comment", "/** The alignment of the object horizontally. */" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMaskSlot.h" },
		{ "ToolTip", "The alignment of the object horizontally." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalAlignment_MetaData[] = {
		{ "Category", "Layout|Background Blur Slot" },
		{ "Comment", "/** The alignment of the object vertically. */" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMaskSlot.h" },
		{ "ToolTip", "The alignment of the object vertically." },
	};
#endif // WITH_METADATA

// ********** Begin Class UBackgroundBlurWithMaskSlot constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Padding;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VerticalAlignment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UBackgroundBlurWithMaskSlot constinit property declarations ****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("SetHorizontalAlignment"), .Pointer = &UBackgroundBlurWithMaskSlot::execSetHorizontalAlignment },
		{ .NameUTF8 = UTF8TEXT("SetPadding"), .Pointer = &UBackgroundBlurWithMaskSlot::execSetPadding },
		{ .NameUTF8 = UTF8TEXT("SetVerticalAlignment"), .Pointer = &UBackgroundBlurWithMaskSlot::execSetVerticalAlignment },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetHorizontalAlignment, "SetHorizontalAlignment" }, // 4136463858
		{ &Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetPadding, "SetPadding" }, // 3894856076
		{ &Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetVerticalAlignment, "SetVerticalAlignment" }, // 3204672143
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBackgroundBlurWithMaskSlot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UBackgroundBlurWithMaskSlot_Statics

// ********** Begin Class UBackgroundBlurWithMaskSlot Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBackgroundBlurWithMaskSlot_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackgroundBlurWithMaskSlot, Padding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Padding_MetaData), NewProp_Padding_MetaData) }; // 4099648758
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBackgroundBlurWithMaskSlot_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackgroundBlurWithMaskSlot, HorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalAlignment_MetaData), NewProp_HorizontalAlignment_MetaData) }; // 990570535
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBackgroundBlurWithMaskSlot_Statics::NewProp_VerticalAlignment = { "VerticalAlignment", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackgroundBlurWithMaskSlot, VerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalAlignment_MetaData), NewProp_VerticalAlignment_MetaData) }; // 2496106429
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBackgroundBlurWithMaskSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackgroundBlurWithMaskSlot_Statics::NewProp_Padding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackgroundBlurWithMaskSlot_Statics::NewProp_HorizontalAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackgroundBlurWithMaskSlot_Statics::NewProp_VerticalAlignment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBackgroundBlurWithMaskSlot_Statics::PropPointers) < 2048);
// ********** End Class UBackgroundBlurWithMaskSlot Property Definitions ***************************
UObject* (*const Z_Construct_UClass_UBackgroundBlurWithMaskSlot_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPanelSlot,
	(UObject* (*)())Z_Construct_UPackage__Script_BackgroundBlurWithMask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBackgroundBlurWithMaskSlot_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBackgroundBlurWithMaskSlot_Statics::Class_MetaDataParams), Z_Construct_UClass_UBackgroundBlurWithMaskSlot_Statics::Class_MetaDataParams)
};
void UBackgroundBlurWithMaskSlot::StaticRegisterNativesUBackgroundBlurWithMaskSlot()
{
	UClass* Class = UBackgroundBlurWithMaskSlot::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UBackgroundBlurWithMaskSlot_Statics::Funcs));
}
UClass* Z_Construct_UClass_UBackgroundBlurWithMaskSlot()
{
	if (!Z_Registration_Info_UClass_UBackgroundBlurWithMaskSlot.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBackgroundBlurWithMaskSlot.OuterSingleton, Z_Construct_UClass_UBackgroundBlurWithMaskSlot_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBackgroundBlurWithMaskSlot.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBackgroundBlurWithMaskSlot);
UBackgroundBlurWithMaskSlot::~UBackgroundBlurWithMaskSlot() {}
// ********** End Class UBackgroundBlurWithMaskSlot ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BackgroundBlurWithMask_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMaskSlot_h__Script_BackgroundBlurWithMask_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBackgroundBlurWithMaskSlot, UBackgroundBlurWithMaskSlot::StaticClass, TEXT("UBackgroundBlurWithMaskSlot"), &Z_Registration_Info_UClass_UBackgroundBlurWithMaskSlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBackgroundBlurWithMaskSlot), 84619572U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BackgroundBlurWithMask_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMaskSlot_h__Script_BackgroundBlurWithMask_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BackgroundBlurWithMask_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMaskSlot_h__Script_BackgroundBlurWithMask_976528753{
	TEXT("/Script/BackgroundBlurWithMask"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BackgroundBlurWithMask_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMaskSlot_h__Script_BackgroundBlurWithMask_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BackgroundBlurWithMask_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMaskSlot_h__Script_BackgroundBlurWithMask_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
