// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UGCBlueprintLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeUGCBlueprintLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
SIMPLEUGC_API UClass* Z_Construct_UClass_UUGCBlueprintLibrary();
SIMPLEUGC_API UClass* Z_Construct_UClass_UUGCBlueprintLibrary_NoRegister();
SIMPLEUGC_API UClass* Z_Construct_UClass_UUGCRegistry_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleUGC();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UUGCBlueprintLibrary Function GetUGCRegistry *****************************
struct Z_Construct_UFunction_UUGCBlueprintLibrary_GetUGCRegistry_Statics
{
	struct UGCBlueprintLibrary_eventGetUGCRegistry_Parms
	{
		UObject* WorldContextObject;
		UUGCRegistry* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimpleUGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gets the UGC Registry found in the GameInstance\n" },
#endif
		{ "ModuleRelativePath", "Public/UGCBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the UGC Registry found in the GameInstance" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetUGCRegistry constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetUGCRegistry constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetUGCRegistry Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUGCBlueprintLibrary_GetUGCRegistry_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGCBlueprintLibrary_eventGetUGCRegistry_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUGCBlueprintLibrary_GetUGCRegistry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGCBlueprintLibrary_eventGetUGCRegistry_Parms, ReturnValue), Z_Construct_UClass_UUGCRegistry_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGCBlueprintLibrary_GetUGCRegistry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCBlueprintLibrary_GetUGCRegistry_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCBlueprintLibrary_GetUGCRegistry_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCBlueprintLibrary_GetUGCRegistry_Statics::PropPointers) < 2048);
// ********** End Function GetUGCRegistry Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCBlueprintLibrary_GetUGCRegistry_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGCBlueprintLibrary, nullptr, "GetUGCRegistry", 	Z_Construct_UFunction_UUGCBlueprintLibrary_GetUGCRegistry_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCBlueprintLibrary_GetUGCRegistry_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGCBlueprintLibrary_GetUGCRegistry_Statics::UGCBlueprintLibrary_eventGetUGCRegistry_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCBlueprintLibrary_GetUGCRegistry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGCBlueprintLibrary_GetUGCRegistry_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGCBlueprintLibrary_GetUGCRegistry_Statics::UGCBlueprintLibrary_eventGetUGCRegistry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGCBlueprintLibrary_GetUGCRegistry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGCBlueprintLibrary_GetUGCRegistry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUGCBlueprintLibrary::execGetUGCRegistry)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UUGCRegistry**)Z_Param__Result=UUGCBlueprintLibrary::GetUGCRegistry(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UUGCBlueprintLibrary Function GetUGCRegistry *******************************

// ********** Begin Class UUGCBlueprintLibrary *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UUGCBlueprintLibrary;
UClass* UUGCBlueprintLibrary::GetPrivateStaticClass()
{
	using TClass = UUGCBlueprintLibrary;
	if (!Z_Registration_Info_UClass_UUGCBlueprintLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("UGCBlueprintLibrary"),
			Z_Registration_Info_UClass_UUGCBlueprintLibrary.InnerSingleton,
			StaticRegisterNativesUUGCBlueprintLibrary,
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
	return Z_Registration_Info_UClass_UUGCBlueprintLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UUGCBlueprintLibrary_NoRegister()
{
	return UUGCBlueprintLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUGCBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UGCBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/UGCBlueprintLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UUGCBlueprintLibrary constinit property declarations *********************
// ********** End Class UUGCBlueprintLibrary constinit property declarations ***********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetUGCRegistry"), .Pointer = &UUGCBlueprintLibrary::execGetUGCRegistry },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUGCBlueprintLibrary_GetUGCRegistry, "GetUGCRegistry" }, // 2355734653
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUGCBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UUGCBlueprintLibrary_Statics
UObject* (*const Z_Construct_UClass_UUGCBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleUGC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUGCBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUGCBlueprintLibrary_Statics::ClassParams = {
	&UUGCBlueprintLibrary::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUGCBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UUGCBlueprintLibrary_Statics::Class_MetaDataParams)
};
void UUGCBlueprintLibrary::StaticRegisterNativesUUGCBlueprintLibrary()
{
	UClass* Class = UUGCBlueprintLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UUGCBlueprintLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_UUGCBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_UUGCBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUGCBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UUGCBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUGCBlueprintLibrary.OuterSingleton;
}
UUGCBlueprintLibrary::UUGCBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UUGCBlueprintLibrary);
UUGCBlueprintLibrary::~UUGCBlueprintLibrary() {}
// ********** End Class UUGCBlueprintLibrary *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCBlueprintLibrary_h__Script_SimpleUGC_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUGCBlueprintLibrary, UUGCBlueprintLibrary::StaticClass, TEXT("UUGCBlueprintLibrary"), &Z_Registration_Info_UClass_UUGCBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUGCBlueprintLibrary), 1050117371U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCBlueprintLibrary_h__Script_SimpleUGC_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCBlueprintLibrary_h__Script_SimpleUGC_3156139124{
	TEXT("/Script/SimpleUGC"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCBlueprintLibrary_h__Script_SimpleUGC_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCBlueprintLibrary_h__Script_SimpleUGC_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
