// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RamaColorPicker.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRamaColorPicker() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
UMG_API UClass* Z_Construct_UClass_UWidget();
UPackage* Z_Construct_UPackage__Script_VictoryBPLibrary();
VICTORYBPLIBRARY_API UClass* Z_Construct_UClass_URamaColorPicker();
VICTORYBPLIBRARY_API UClass* Z_Construct_UClass_URamaColorPicker_NoRegister();
VICTORYBPLIBRARY_API UFunction* Z_Construct_UDelegateFunction_VictoryBPLibrary_OnJoyColorChangedEvent__DelegateSignature();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnJoyColorChangedEvent ***********************************************
struct Z_Construct_UDelegateFunction_VictoryBPLibrary_OnJoyColorChangedEvent__DelegateSignature_Statics
{
	struct _Script_VictoryBPLibrary_eventOnJoyColorChangedEvent_Parms
	{
		FLinearColor NewColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RamaColorPicker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnJoyColorChangedEvent constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnJoyColorChangedEvent constinit property declarations *****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnJoyColorChangedEvent Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_VictoryBPLibrary_OnJoyColorChangedEvent__DelegateSignature_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VictoryBPLibrary_eventOnJoyColorChangedEvent_Parms, NewColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewColor_MetaData), NewProp_NewColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VictoryBPLibrary_OnJoyColorChangedEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VictoryBPLibrary_OnJoyColorChangedEvent__DelegateSignature_Statics::NewProp_NewColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VictoryBPLibrary_OnJoyColorChangedEvent__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnJoyColorChangedEvent Property Definitions ****************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_VictoryBPLibrary_OnJoyColorChangedEvent__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_VictoryBPLibrary, nullptr, "OnJoyColorChangedEvent__DelegateSignature", 	Z_Construct_UDelegateFunction_VictoryBPLibrary_OnJoyColorChangedEvent__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VictoryBPLibrary_OnJoyColorChangedEvent__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_VictoryBPLibrary_OnJoyColorChangedEvent__DelegateSignature_Statics::_Script_VictoryBPLibrary_eventOnJoyColorChangedEvent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VictoryBPLibrary_OnJoyColorChangedEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_VictoryBPLibrary_OnJoyColorChangedEvent__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_VictoryBPLibrary_OnJoyColorChangedEvent__DelegateSignature_Statics::_Script_VictoryBPLibrary_eventOnJoyColorChangedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_VictoryBPLibrary_OnJoyColorChangedEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VictoryBPLibrary_OnJoyColorChangedEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnJoyColorChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnJoyColorChangedEvent, FLinearColor const& NewColor)
{
	struct _Script_VictoryBPLibrary_eventOnJoyColorChangedEvent_Parms
	{
		FLinearColor NewColor;
	};
	_Script_VictoryBPLibrary_eventOnJoyColorChangedEvent_Parms Parms;
	Parms.NewColor=NewColor;
	OnJoyColorChangedEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnJoyColorChangedEvent *************************************************

// ********** Begin Class URamaColorPicker Function SetJoyColor ************************************
struct Z_Construct_UFunction_URamaColorPicker_SetJoyColor_Statics
{
	struct RamaColorPicker_eventSetJoyColor_Parms
	{
		FLinearColor NewColor;
		bool SkipAnimation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rama Color Picker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Directly sets the current color, for saving user preferences of chosen color, or loading existing color of an in-game clicked actor!\n\x09 * @param InColor The color to assign to the widget\n\x09 */" },
#endif
		{ "CPP_Default_SkipAnimation", "false" },
		{ "Keywords", "setcolor" },
		{ "ModuleRelativePath", "Public/RamaColorPicker.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Directly sets the current color, for saving user preferences of chosen color, or loading existing color of an in-game clicked actor!\n@param InColor The color to assign to the widget" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetJoyColor constinit property declarations ***************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewColor;
	static void NewProp_SkipAnimation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SkipAnimation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetJoyColor constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetJoyColor Property Definitions **************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URamaColorPicker_SetJoyColor_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RamaColorPicker_eventSetJoyColor_Parms, NewColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URamaColorPicker_SetJoyColor_Statics::NewProp_SkipAnimation_SetBit(void* Obj)
{
	((RamaColorPicker_eventSetJoyColor_Parms*)Obj)->SkipAnimation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URamaColorPicker_SetJoyColor_Statics::NewProp_SkipAnimation = { "SkipAnimation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RamaColorPicker_eventSetJoyColor_Parms), &Z_Construct_UFunction_URamaColorPicker_SetJoyColor_Statics::NewProp_SkipAnimation_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URamaColorPicker_SetJoyColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URamaColorPicker_SetJoyColor_Statics::NewProp_NewColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URamaColorPicker_SetJoyColor_Statics::NewProp_SkipAnimation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URamaColorPicker_SetJoyColor_Statics::PropPointers) < 2048);
// ********** End Function SetJoyColor Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URamaColorPicker_SetJoyColor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URamaColorPicker, nullptr, "SetJoyColor", 	Z_Construct_UFunction_URamaColorPicker_SetJoyColor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URamaColorPicker_SetJoyColor_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URamaColorPicker_SetJoyColor_Statics::RamaColorPicker_eventSetJoyColor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URamaColorPicker_SetJoyColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_URamaColorPicker_SetJoyColor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URamaColorPicker_SetJoyColor_Statics::RamaColorPicker_eventSetJoyColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URamaColorPicker_SetJoyColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URamaColorPicker_SetJoyColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URamaColorPicker::execSetJoyColor)
{
	P_GET_STRUCT(FLinearColor,Z_Param_NewColor);
	P_GET_UBOOL(Z_Param_SkipAnimation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetJoyColor(Z_Param_NewColor,Z_Param_SkipAnimation);
	P_NATIVE_END;
}
// ********** End Class URamaColorPicker Function SetJoyColor **************************************

// ********** Begin Class URamaColorPicker *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_URamaColorPicker;
UClass* URamaColorPicker::GetPrivateStaticClass()
{
	using TClass = URamaColorPicker;
	if (!Z_Registration_Info_UClass_URamaColorPicker.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RamaColorPicker"),
			Z_Registration_Info_UClass_URamaColorPicker.InnerSingleton,
			StaticRegisterNativesURamaColorPicker,
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
	return Z_Registration_Info_UClass_URamaColorPicker.InnerSingleton;
}
UClass* Z_Construct_UClass_URamaColorPicker_NoRegister()
{
	return URamaColorPicker::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URamaColorPicker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Rama Color Picker For You! \xe2\x99\xa5 Rama\n */" },
#endif
		{ "IncludePath", "RamaColorPicker.h" },
		{ "ModuleRelativePath", "Public/RamaColorPicker.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rama Color Picker For You! \xe2\x99\xa5 Rama" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JoyColor_MetaData[] = {
		{ "Category", "Rama Color Picker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The currently Chosen Color for this Color Picker! \xe2\x99\xa5 Rama*/" },
#endif
		{ "Keywords", "getcolor" },
		{ "ModuleRelativePath", "Public/RamaColorPicker.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The currently Chosen Color for this Color Picker! \xe2\x99\xa5 Rama" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnColorChanged_MetaData[] = {
		{ "Category", "Rama Color Picker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called whenever the color is changed programmatically or interactively by the user */" },
#endif
		{ "DisplayName", "OnColorChanged (Rama Color Picker)" },
		{ "ModuleRelativePath", "Public/RamaColorPicker.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called whenever the color is changed programmatically or interactively by the user" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class URamaColorPicker constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_JoyColor;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnColorChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URamaColorPicker constinit property declarations ***************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("SetJoyColor"), .Pointer = &URamaColorPicker::execSetJoyColor },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URamaColorPicker_SetJoyColor, "SetJoyColor" }, // 1904705729
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URamaColorPicker>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_URamaColorPicker_Statics

// ********** Begin Class URamaColorPicker Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URamaColorPicker_Statics::NewProp_JoyColor = { "JoyColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URamaColorPicker, JoyColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JoyColor_MetaData), NewProp_JoyColor_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URamaColorPicker_Statics::NewProp_OnColorChanged = { "OnColorChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URamaColorPicker, OnColorChanged), Z_Construct_UDelegateFunction_VictoryBPLibrary_OnJoyColorChangedEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnColorChanged_MetaData), NewProp_OnColorChanged_MetaData) }; // 1771301040
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URamaColorPicker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URamaColorPicker_Statics::NewProp_JoyColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URamaColorPicker_Statics::NewProp_OnColorChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URamaColorPicker_Statics::PropPointers) < 2048);
// ********** End Class URamaColorPicker Property Definitions **************************************
UObject* (*const Z_Construct_UClass_URamaColorPicker_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_VictoryBPLibrary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URamaColorPicker_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URamaColorPicker_Statics::ClassParams = {
	&URamaColorPicker::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URamaColorPicker_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URamaColorPicker_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URamaColorPicker_Statics::Class_MetaDataParams), Z_Construct_UClass_URamaColorPicker_Statics::Class_MetaDataParams)
};
void URamaColorPicker::StaticRegisterNativesURamaColorPicker()
{
	UClass* Class = URamaColorPicker::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_URamaColorPicker_Statics::Funcs));
}
UClass* Z_Construct_UClass_URamaColorPicker()
{
	if (!Z_Registration_Info_UClass_URamaColorPicker.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URamaColorPicker.OuterSingleton, Z_Construct_UClass_URamaColorPicker_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URamaColorPicker.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URamaColorPicker);
URamaColorPicker::~URamaColorPicker() {}
// ********** End Class URamaColorPicker ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_VictoryBPLibrary57_Source_VictoryBPLibrary_Public_RamaColorPicker_h__Script_VictoryBPLibrary_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URamaColorPicker, URamaColorPicker::StaticClass, TEXT("URamaColorPicker"), &Z_Registration_Info_UClass_URamaColorPicker, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URamaColorPicker), 2407458243U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_VictoryBPLibrary57_Source_VictoryBPLibrary_Public_RamaColorPicker_h__Script_VictoryBPLibrary_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_VictoryBPLibrary57_Source_VictoryBPLibrary_Public_RamaColorPicker_h__Script_VictoryBPLibrary_2320087591{
	TEXT("/Script/VictoryBPLibrary"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_VictoryBPLibrary57_Source_VictoryBPLibrary_Public_RamaColorPicker_h__Script_VictoryBPLibrary_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_VictoryBPLibrary57_Source_VictoryBPLibrary_Public_RamaColorPicker_h__Script_VictoryBPLibrary_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
