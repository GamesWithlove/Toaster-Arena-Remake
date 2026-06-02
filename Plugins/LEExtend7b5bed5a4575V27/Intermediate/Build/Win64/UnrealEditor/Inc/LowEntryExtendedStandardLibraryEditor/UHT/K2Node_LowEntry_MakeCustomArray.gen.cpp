// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_LowEntry_MakeCustomArray.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeK2Node_LowEntry_MakeCustomArray() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
LOWENTRYEXTENDEDSTANDARDLIBRARYEDITOR_API UClass* Z_Construct_UClass_UK2Node_LowEntry_MakeContainer();
LOWENTRYEXTENDEDSTANDARDLIBRARYEDITOR_API UClass* Z_Construct_UClass_UK2Node_LowEntry_MakeCustomArray();
LOWENTRYEXTENDEDSTANDARDLIBRARYEDITOR_API UClass* Z_Construct_UClass_UK2Node_LowEntry_MakeCustomArray_NoRegister();
UPackage* Z_Construct_UPackage__Script_LowEntryExtendedStandardLibraryEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UK2Node_LowEntry_MakeCustomArray *****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UK2Node_LowEntry_MakeCustomArray;
UClass* UK2Node_LowEntry_MakeCustomArray::GetPrivateStaticClass()
{
	using TClass = UK2Node_LowEntry_MakeCustomArray;
	if (!Z_Registration_Info_UClass_UK2Node_LowEntry_MakeCustomArray.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("K2Node_LowEntry_MakeCustomArray"),
			Z_Registration_Info_UClass_UK2Node_LowEntry_MakeCustomArray.InnerSingleton,
			StaticRegisterNativesUK2Node_LowEntry_MakeCustomArray,
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
	return Z_Registration_Info_UClass_UK2Node_LowEntry_MakeCustomArray.InnerSingleton;
}
UClass* Z_Construct_UClass_UK2Node_LowEntry_MakeCustomArray_NoRegister()
{
	return UK2Node_LowEntry_MakeCustomArray::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UK2Node_LowEntry_MakeCustomArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Classes/K2Node_LowEntry_MakeCustomArray.h" },
		{ "ModuleRelativePath", "Public/Classes/K2Node_LowEntry_MakeCustomArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowEntry_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/K2Node_LowEntry_MakeCustomArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowEntry_Category_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/K2Node_LowEntry_MakeCustomArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowEntry_Tooltip_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/K2Node_LowEntry_MakeCustomArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowEntry_ResultPinName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/K2Node_LowEntry_MakeCustomArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowEntry_IsNodePure_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/K2Node_LowEntry_MakeCustomArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowEntry_InputType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/K2Node_LowEntry_MakeCustomArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowEntry_InputClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/K2Node_LowEntry_MakeCustomArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowEntry_OutputType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/K2Node_LowEntry_MakeCustomArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowEntry_OutputClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/K2Node_LowEntry_MakeCustomArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowEntry_ConverterClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/K2Node_LowEntry_MakeCustomArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowEntry_ConverterFunctionName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/K2Node_LowEntry_MakeCustomArray.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UK2Node_LowEntry_MakeCustomArray constinit property declarations *********
	static const UECodeGen_Private::FStrPropertyParams NewProp_LowEntry_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LowEntry_Category;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LowEntry_Tooltip;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LowEntry_ResultPinName;
	static void NewProp_LowEntry_IsNodePure_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LowEntry_IsNodePure;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LowEntry_InputType;
	static const UECodeGen_Private::FClassPropertyParams NewProp_LowEntry_InputClass;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LowEntry_OutputType;
	static const UECodeGen_Private::FClassPropertyParams NewProp_LowEntry_OutputClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_LowEntry_ConverterClass;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LowEntry_ConverterFunctionName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UK2Node_LowEntry_MakeCustomArray constinit property declarations ***********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_LowEntry_MakeCustomArray>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UK2Node_LowEntry_MakeCustomArray_Statics

// ********** Begin Class UK2Node_LowEntry_MakeCustomArray Property Definitions ********************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UK2Node_LowEntry_MakeCustomArray_Statics::NewProp_LowEntry_Name = { "LowEntry_Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UK2Node_LowEntry_MakeCustomArray, LowEntry_Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowEntry_Name_MetaData), NewProp_LowEntry_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UK2Node_LowEntry_MakeCustomArray_Statics::NewProp_LowEntry_Category = { "LowEntry_Category", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UK2Node_LowEntry_MakeCustomArray, LowEntry_Category), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowEntry_Category_MetaData), NewProp_LowEntry_Category_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UK2Node_LowEntry_MakeCustomArray_Statics::NewProp_LowEntry_Tooltip = { "LowEntry_Tooltip", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UK2Node_LowEntry_MakeCustomArray, LowEntry_Tooltip), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowEntry_Tooltip_MetaData), NewProp_LowEntry_Tooltip_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UK2Node_LowEntry_MakeCustomArray_Statics::NewProp_LowEntry_ResultPinName = { "LowEntry_ResultPinName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UK2Node_LowEntry_MakeCustomArray, LowEntry_ResultPinName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowEntry_ResultPinName_MetaData), NewProp_LowEntry_ResultPinName_MetaData) };
void Z_Construct_UClass_UK2Node_LowEntry_MakeCustomArray_Statics::NewProp_LowEntry_IsNodePure_SetBit(void* Obj)
{
	((UK2Node_LowEntry_MakeCustomArray*)Obj)->LowEntry_IsNodePure = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_LowEntry_MakeCustomArray_Statics::NewProp_LowEntry_IsNodePure = { "LowEntry_IsNodePure", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UK2Node_LowEntry_MakeCustomArray), &Z_Construct_UClass_UK2Node_LowEntry_MakeCustomArray_Statics::NewProp_LowEntry_IsNodePure_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowEntry_IsNodePure_MetaData), NewProp_LowEntry_IsNodePure_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UK2Node_LowEntry_MakeCustomArray_Statics::NewProp_LowEntry_InputType = { "LowEntry_InputType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UK2Node_LowEntry_MakeCustomArray, LowEntry_InputType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowEntry_InputType_MetaData), NewProp_LowEntry_InputType_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UK2Node_LowEntry_MakeCustomArray_Statics::NewProp_LowEntry_InputClass = { "LowEntry_InputClass", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UK2Node_LowEntry_MakeCustomArray, LowEntry_InputClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowEntry_InputClass_MetaData), NewProp_LowEntry_InputClass_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UK2Node_LowEntry_MakeCustomArray_Statics::NewProp_LowEntry_OutputType = { "LowEntry_OutputType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UK2Node_LowEntry_MakeCustomArray, LowEntry_OutputType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowEntry_OutputType_MetaData), NewProp_LowEntry_OutputType_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UK2Node_LowEntry_MakeCustomArray_Statics::NewProp_LowEntry_OutputClass = { "LowEntry_OutputClass", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UK2Node_LowEntry_MakeCustomArray, LowEntry_OutputClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowEntry_OutputClass_MetaData), NewProp_LowEntry_OutputClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UK2Node_LowEntry_MakeCustomArray_Statics::NewProp_LowEntry_ConverterClass = { "LowEntry_ConverterClass", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UK2Node_LowEntry_MakeCustomArray, LowEntry_ConverterClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowEntry_ConverterClass_MetaData), NewProp_LowEntry_ConverterClass_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UK2Node_LowEntry_MakeCustomArray_Statics::NewProp_LowEntry_ConverterFunctionName = { "LowEntry_ConverterFunctionName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UK2Node_LowEntry_MakeCustomArray, LowEntry_ConverterFunctionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowEntry_ConverterFunctionName_MetaData), NewProp_LowEntry_ConverterFunctionName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_LowEntry_MakeCustomArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_LowEntry_MakeCustomArray_Statics::NewProp_LowEntry_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_LowEntry_MakeCustomArray_Statics::NewProp_LowEntry_Category,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_LowEntry_MakeCustomArray_Statics::NewProp_LowEntry_Tooltip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_LowEntry_MakeCustomArray_Statics::NewProp_LowEntry_ResultPinName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_LowEntry_MakeCustomArray_Statics::NewProp_LowEntry_IsNodePure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_LowEntry_MakeCustomArray_Statics::NewProp_LowEntry_InputType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_LowEntry_MakeCustomArray_Statics::NewProp_LowEntry_InputClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_LowEntry_MakeCustomArray_Statics::NewProp_LowEntry_OutputType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_LowEntry_MakeCustomArray_Statics::NewProp_LowEntry_OutputClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_LowEntry_MakeCustomArray_Statics::NewProp_LowEntry_ConverterClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_LowEntry_MakeCustomArray_Statics::NewProp_LowEntry_ConverterFunctionName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_LowEntry_MakeCustomArray_Statics::PropPointers) < 2048);
// ********** End Class UK2Node_LowEntry_MakeCustomArray Property Definitions **********************
UObject* (*const Z_Construct_UClass_UK2Node_LowEntry_MakeCustomArray_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UK2Node_LowEntry_MakeContainer,
	(UObject* (*)())Z_Construct_UPackage__Script_LowEntryExtendedStandardLibraryEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_LowEntry_MakeCustomArray_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_LowEntry_MakeCustomArray_Statics::ClassParams = {
	&UK2Node_LowEntry_MakeCustomArray::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UK2Node_LowEntry_MakeCustomArray_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_LowEntry_MakeCustomArray_Statics::PropPointers),
	0,
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_LowEntry_MakeCustomArray_Statics::Class_MetaDataParams), Z_Construct_UClass_UK2Node_LowEntry_MakeCustomArray_Statics::Class_MetaDataParams)
};
void UK2Node_LowEntry_MakeCustomArray::StaticRegisterNativesUK2Node_LowEntry_MakeCustomArray()
{
}
UClass* Z_Construct_UClass_UK2Node_LowEntry_MakeCustomArray()
{
	if (!Z_Registration_Info_UClass_UK2Node_LowEntry_MakeCustomArray.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_LowEntry_MakeCustomArray.OuterSingleton, Z_Construct_UClass_UK2Node_LowEntry_MakeCustomArray_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UK2Node_LowEntry_MakeCustomArray.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UK2Node_LowEntry_MakeCustomArray);
UK2Node_LowEntry_MakeCustomArray::~UK2Node_LowEntry_MakeCustomArray() {}
// ********** End Class UK2Node_LowEntry_MakeCustomArray *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_LEExtend7b5bed5a4575V27_Source_LowEntryExtendedStandardLibraryEditor_Public_Classes_K2Node_LowEntry_MakeCustomArray_h__Script_LowEntryExtendedStandardLibraryEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_LowEntry_MakeCustomArray, UK2Node_LowEntry_MakeCustomArray::StaticClass, TEXT("UK2Node_LowEntry_MakeCustomArray"), &Z_Registration_Info_UClass_UK2Node_LowEntry_MakeCustomArray, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_LowEntry_MakeCustomArray), 395346157U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_LEExtend7b5bed5a4575V27_Source_LowEntryExtendedStandardLibraryEditor_Public_Classes_K2Node_LowEntry_MakeCustomArray_h__Script_LowEntryExtendedStandardLibraryEditor_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_LEExtend7b5bed5a4575V27_Source_LowEntryExtendedStandardLibraryEditor_Public_Classes_K2Node_LowEntry_MakeCustomArray_h__Script_LowEntryExtendedStandardLibraryEditor_2372125878{
	TEXT("/Script/LowEntryExtendedStandardLibraryEditor"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_LEExtend7b5bed5a4575V27_Source_LowEntryExtendedStandardLibraryEditor_Public_Classes_K2Node_LowEntry_MakeCustomArray_h__Script_LowEntryExtendedStandardLibraryEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_LEExtend7b5bed5a4575V27_Source_LowEntryExtendedStandardLibraryEditor_Public_Classes_K2Node_LowEntry_MakeCustomArray_h__Script_LowEntryExtendedStandardLibraryEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
