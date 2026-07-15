// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyFileDialogBPLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeEasyFileDialogBPLibrary() {}

// ********** Begin Cross Module References ********************************************************
EASYFILEDIALOG_API UClass* Z_Construct_UClass_UEasyFileDialogBPLibrary();
EASYFILEDIALOG_API UClass* Z_Construct_UClass_UEasyFileDialogBPLibrary_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_EasyFileDialog();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UEasyFileDialogBPLibrary Function EasyFileDialogSampleFunction ***********
struct Z_Construct_UFunction_UEasyFileDialogBPLibrary_EasyFileDialogSampleFunction_Statics
{
	struct EasyFileDialogBPLibrary_eventEasyFileDialogSampleFunction_Parms
	{
		float Param;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EasyFileDialogTesting" },
		{ "DisplayName", "Execute Sample function" },
		{ "Keywords", "EasyFileDialog sample test testing" },
		{ "ModuleRelativePath", "Public/EasyFileDialogBPLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function EasyFileDialogSampleFunction constinit property declarations **********
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Param;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EasyFileDialogSampleFunction constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EasyFileDialogSampleFunction Property Definitions *********************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEasyFileDialogBPLibrary_EasyFileDialogSampleFunction_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyFileDialogBPLibrary_eventEasyFileDialogSampleFunction_Parms, Param), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEasyFileDialogBPLibrary_EasyFileDialogSampleFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EasyFileDialogBPLibrary_eventEasyFileDialogSampleFunction_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyFileDialogBPLibrary_EasyFileDialogSampleFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyFileDialogBPLibrary_EasyFileDialogSampleFunction_Statics::NewProp_Param,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyFileDialogBPLibrary_EasyFileDialogSampleFunction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyFileDialogBPLibrary_EasyFileDialogSampleFunction_Statics::PropPointers) < 2048);
// ********** End Function EasyFileDialogSampleFunction Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyFileDialogBPLibrary_EasyFileDialogSampleFunction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEasyFileDialogBPLibrary, nullptr, "EasyFileDialogSampleFunction", 	Z_Construct_UFunction_UEasyFileDialogBPLibrary_EasyFileDialogSampleFunction_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyFileDialogBPLibrary_EasyFileDialogSampleFunction_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UEasyFileDialogBPLibrary_EasyFileDialogSampleFunction_Statics::EasyFileDialogBPLibrary_eventEasyFileDialogSampleFunction_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyFileDialogBPLibrary_EasyFileDialogSampleFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEasyFileDialogBPLibrary_EasyFileDialogSampleFunction_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEasyFileDialogBPLibrary_EasyFileDialogSampleFunction_Statics::EasyFileDialogBPLibrary_eventEasyFileDialogSampleFunction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEasyFileDialogBPLibrary_EasyFileDialogSampleFunction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyFileDialogBPLibrary_EasyFileDialogSampleFunction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEasyFileDialogBPLibrary::execEasyFileDialogSampleFunction)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Param);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UEasyFileDialogBPLibrary::EasyFileDialogSampleFunction(Z_Param_Param);
	P_NATIVE_END;
}
// ********** End Class UEasyFileDialogBPLibrary Function EasyFileDialogSampleFunction *************

// ********** Begin Class UEasyFileDialogBPLibrary *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UEasyFileDialogBPLibrary;
UClass* UEasyFileDialogBPLibrary::GetPrivateStaticClass()
{
	using TClass = UEasyFileDialogBPLibrary;
	if (!Z_Registration_Info_UClass_UEasyFileDialogBPLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("EasyFileDialogBPLibrary"),
			Z_Registration_Info_UClass_UEasyFileDialogBPLibrary.InnerSingleton,
			StaticRegisterNativesUEasyFileDialogBPLibrary,
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
	return Z_Registration_Info_UClass_UEasyFileDialogBPLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UEasyFileDialogBPLibrary_NoRegister()
{
	return UEasyFileDialogBPLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEasyFileDialogBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "IncludePath", "EasyFileDialogBPLibrary.h" },
		{ "ModuleRelativePath", "Public/EasyFileDialogBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif // WITH_METADATA

// ********** Begin Class UEasyFileDialogBPLibrary constinit property declarations *****************
// ********** End Class UEasyFileDialogBPLibrary constinit property declarations *******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("EasyFileDialogSampleFunction"), .Pointer = &UEasyFileDialogBPLibrary::execEasyFileDialogSampleFunction },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEasyFileDialogBPLibrary_EasyFileDialogSampleFunction, "EasyFileDialogSampleFunction" }, // 1311405380
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEasyFileDialogBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UEasyFileDialogBPLibrary_Statics
UObject* (*const Z_Construct_UClass_UEasyFileDialogBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_EasyFileDialog,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEasyFileDialogBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEasyFileDialogBPLibrary_Statics::ClassParams = {
	&UEasyFileDialogBPLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEasyFileDialogBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UEasyFileDialogBPLibrary_Statics::Class_MetaDataParams)
};
void UEasyFileDialogBPLibrary::StaticRegisterNativesUEasyFileDialogBPLibrary()
{
	UClass* Class = UEasyFileDialogBPLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UEasyFileDialogBPLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_UEasyFileDialogBPLibrary()
{
	if (!Z_Registration_Info_UClass_UEasyFileDialogBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEasyFileDialogBPLibrary.OuterSingleton, Z_Construct_UClass_UEasyFileDialogBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEasyFileDialogBPLibrary.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UEasyFileDialogBPLibrary);
UEasyFileDialogBPLibrary::~UEasyFileDialogBPLibrary() {}
// ********** End Class UEasyFileDialogBPLibrary ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyFileDialog_Source_EasyFileDialog_Public_EasyFileDialogBPLibrary_h__Script_EasyFileDialog_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEasyFileDialogBPLibrary, UEasyFileDialogBPLibrary::StaticClass, TEXT("UEasyFileDialogBPLibrary"), &Z_Registration_Info_UClass_UEasyFileDialogBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEasyFileDialogBPLibrary), 4244629558U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyFileDialog_Source_EasyFileDialog_Public_EasyFileDialogBPLibrary_h__Script_EasyFileDialog_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyFileDialog_Source_EasyFileDialog_Public_EasyFileDialogBPLibrary_h__Script_EasyFileDialog_3904663324{
	TEXT("/Script/EasyFileDialog"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyFileDialog_Source_EasyFileDialog_Public_EasyFileDialogBPLibrary_h__Script_EasyFileDialog_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyFileDialog_Source_EasyFileDialog_Public_EasyFileDialogBPLibrary_h__Script_EasyFileDialog_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
