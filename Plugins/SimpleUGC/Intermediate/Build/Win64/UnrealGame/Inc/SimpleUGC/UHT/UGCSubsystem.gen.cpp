// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UGCSubsystem.h"
#include "Engine/GameInstance.h"
#include "UGCRegistry.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeUGCSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
SIMPLEUGC_API UClass* Z_Construct_UClass_UUGCRegistry_NoRegister();
SIMPLEUGC_API UClass* Z_Construct_UClass_UUGCSubsystem();
SIMPLEUGC_API UClass* Z_Construct_UClass_UUGCSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleUGC();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UUGCSubsystem Function GetUgcRegistry ************************************
struct Z_Construct_UFunction_UUGCSubsystem_GetUgcRegistry_Statics
{
	struct UGCSubsystem_eventGetUgcRegistry_Parms
	{
		UUGCRegistry* UgcRegistry;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimpleUGC" },
		{ "ModuleRelativePath", "Public/UGCSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetUgcRegistry constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UgcRegistry;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetUgcRegistry constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetUgcRegistry Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUGCSubsystem_GetUgcRegistry_Statics::NewProp_UgcRegistry = { "UgcRegistry", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGCSubsystem_eventGetUgcRegistry_Parms, UgcRegistry), Z_Construct_UClass_UUGCRegistry_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGCSubsystem_GetUgcRegistry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCSubsystem_GetUgcRegistry_Statics::NewProp_UgcRegistry,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCSubsystem_GetUgcRegistry_Statics::PropPointers) < 2048);
// ********** End Function GetUgcRegistry Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCSubsystem_GetUgcRegistry_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGCSubsystem, nullptr, "GetUgcRegistry", 	Z_Construct_UFunction_UUGCSubsystem_GetUgcRegistry_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCSubsystem_GetUgcRegistry_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGCSubsystem_GetUgcRegistry_Statics::UGCSubsystem_eventGetUgcRegistry_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCSubsystem_GetUgcRegistry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGCSubsystem_GetUgcRegistry_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGCSubsystem_GetUgcRegistry_Statics::UGCSubsystem_eventGetUgcRegistry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGCSubsystem_GetUgcRegistry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGCSubsystem_GetUgcRegistry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUGCSubsystem::execGetUgcRegistry)
{
	P_GET_OBJECT_REF(UUGCRegistry,Z_Param_Out_UgcRegistry);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetUgcRegistry(P_ARG_GC_BARRIER(Z_Param_Out_UgcRegistry));
	P_NATIVE_END;
}
// ********** End Class UUGCSubsystem Function GetUgcRegistry **************************************

// ********** Begin Class UUGCSubsystem Function UgcRegistry ***************************************
struct Z_Construct_UFunction_UUGCSubsystem_UgcRegistry_Statics
{
	struct UGCSubsystem_eventUgcRegistry_Parms
	{
		UUGCRegistry* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimpleUGC" },
		{ "ModuleRelativePath", "Public/UGCSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function UgcRegistry constinit property declarations ***************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UgcRegistry constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UgcRegistry Property Definitions **************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUGCSubsystem_UgcRegistry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGCSubsystem_eventUgcRegistry_Parms, ReturnValue), Z_Construct_UClass_UUGCRegistry_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGCSubsystem_UgcRegistry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCSubsystem_UgcRegistry_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCSubsystem_UgcRegistry_Statics::PropPointers) < 2048);
// ********** End Function UgcRegistry Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCSubsystem_UgcRegistry_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGCSubsystem, nullptr, "UgcRegistry", 	Z_Construct_UFunction_UUGCSubsystem_UgcRegistry_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCSubsystem_UgcRegistry_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGCSubsystem_UgcRegistry_Statics::UGCSubsystem_eventUgcRegistry_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCSubsystem_UgcRegistry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGCSubsystem_UgcRegistry_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGCSubsystem_UgcRegistry_Statics::UGCSubsystem_eventUgcRegistry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGCSubsystem_UgcRegistry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGCSubsystem_UgcRegistry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUGCSubsystem::execUgcRegistry)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UUGCRegistry**)Z_Param__Result=P_THIS->UgcRegistry();
	P_NATIVE_END;
}
// ********** End Class UUGCSubsystem Function UgcRegistry *****************************************

// ********** Begin Class UUGCSubsystem ************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UUGCSubsystem;
UClass* UUGCSubsystem::GetPrivateStaticClass()
{
	using TClass = UUGCSubsystem;
	if (!Z_Registration_Info_UClass_UUGCSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("UGCSubsystem"),
			Z_Registration_Info_UClass_UUGCSubsystem.InnerSingleton,
			StaticRegisterNativesUUGCSubsystem,
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
	return Z_Registration_Info_UClass_UUGCSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UUGCSubsystem_NoRegister()
{
	return UUGCSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUGCSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UGCSubsystem.h" },
		{ "ModuleRelativePath", "Public/UGCSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UgcRegistryInstance_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Registry that holds information about UGC and assigned class overrides\n" },
#endif
		{ "ModuleRelativePath", "Public/UGCSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Registry that holds information about UGC and assigned class overrides" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UUGCSubsystem constinit property declarations ****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UgcRegistryInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UUGCSubsystem constinit property declarations ******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetUgcRegistry"), .Pointer = &UUGCSubsystem::execGetUgcRegistry },
		{ .NameUTF8 = UTF8TEXT("UgcRegistry"), .Pointer = &UUGCSubsystem::execUgcRegistry },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUGCSubsystem_GetUgcRegistry, "GetUgcRegistry" }, // 2254337253
		{ &Z_Construct_UFunction_UUGCSubsystem_UgcRegistry, "UgcRegistry" }, // 2869527831
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUGCSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UUGCSubsystem_Statics

// ********** Begin Class UUGCSubsystem Property Definitions ***************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUGCSubsystem_Statics::NewProp_UgcRegistryInstance = { "UgcRegistryInstance", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUGCSubsystem, UgcRegistryInstance), Z_Construct_UClass_UUGCRegistry_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UgcRegistryInstance_MetaData), NewProp_UgcRegistryInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUGCSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGCSubsystem_Statics::NewProp_UgcRegistryInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUGCSubsystem_Statics::PropPointers) < 2048);
// ********** End Class UUGCSubsystem Property Definitions *****************************************
UObject* (*const Z_Construct_UClass_UUGCSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleUGC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUGCSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUGCSubsystem_Statics::ClassParams = {
	&UUGCSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UUGCSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UUGCSubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUGCSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UUGCSubsystem_Statics::Class_MetaDataParams)
};
void UUGCSubsystem::StaticRegisterNativesUUGCSubsystem()
{
	UClass* Class = UUGCSubsystem::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UUGCSubsystem_Statics::Funcs));
}
UClass* Z_Construct_UClass_UUGCSubsystem()
{
	if (!Z_Registration_Info_UClass_UUGCSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUGCSubsystem.OuterSingleton, Z_Construct_UClass_UUGCSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUGCSubsystem.OuterSingleton;
}
UUGCSubsystem::UUGCSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UUGCSubsystem);
UUGCSubsystem::~UUGCSubsystem() {}
// ********** End Class UUGCSubsystem **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCSubsystem_h__Script_SimpleUGC_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUGCSubsystem, UUGCSubsystem::StaticClass, TEXT("UUGCSubsystem"), &Z_Registration_Info_UClass_UUGCSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUGCSubsystem), 2190517467U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCSubsystem_h__Script_SimpleUGC_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCSubsystem_h__Script_SimpleUGC_3435922364{
	TEXT("/Script/SimpleUGC"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCSubsystem_h__Script_SimpleUGC_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCSubsystem_h__Script_SimpleUGC_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
