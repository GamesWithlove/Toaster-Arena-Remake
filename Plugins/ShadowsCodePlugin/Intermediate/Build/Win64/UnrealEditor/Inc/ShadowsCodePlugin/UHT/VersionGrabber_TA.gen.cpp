// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VersionGrabber_TA.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeVersionGrabber_TA() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
SHADOWSCODEPLUGIN_API UClass* Z_Construct_UClass_UVersionGrabber_TA();
SHADOWSCODEPLUGIN_API UClass* Z_Construct_UClass_UVersionGrabber_TA_NoRegister();
UPackage* Z_Construct_UPackage__Script_ShadowsCodePlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVersionGrabber_TA Function GetHardwareID ********************************
struct Z_Construct_UFunction_UVersionGrabber_TA_GetHardwareID_Statics
{
	struct VersionGrabber_TA_eventGetHardwareID_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "System Information" },
		{ "CompactnodeTittle", "HardwareID" },
		{ "DisplayName", "HardwareID" },
		{ "ModuleRelativePath", "Public/VersionGrabber_TA.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetHardwareID constinit property declarations *************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetHardwareID constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetHardwareID Property Definitions ************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVersionGrabber_TA_GetHardwareID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VersionGrabber_TA_eventGetHardwareID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVersionGrabber_TA_GetHardwareID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVersionGrabber_TA_GetHardwareID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVersionGrabber_TA_GetHardwareID_Statics::PropPointers) < 2048);
// ********** End Function GetHardwareID Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVersionGrabber_TA_GetHardwareID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVersionGrabber_TA, nullptr, "GetHardwareID", 	Z_Construct_UFunction_UVersionGrabber_TA_GetHardwareID_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UVersionGrabber_TA_GetHardwareID_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UVersionGrabber_TA_GetHardwareID_Statics::VersionGrabber_TA_eventGetHardwareID_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVersionGrabber_TA_GetHardwareID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVersionGrabber_TA_GetHardwareID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVersionGrabber_TA_GetHardwareID_Statics::VersionGrabber_TA_eventGetHardwareID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVersionGrabber_TA_GetHardwareID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVersionGrabber_TA_GetHardwareID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVersionGrabber_TA::execGetHardwareID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UVersionGrabber_TA::GetHardwareID();
	P_NATIVE_END;
}
// ********** End Class UVersionGrabber_TA Function GetHardwareID **********************************

// ********** Begin Class UVersionGrabber_TA Function GetProjectVersion ****************************
struct Z_Construct_UFunction_UVersionGrabber_TA_GetProjectVersion_Statics
{
	struct VersionGrabber_TA_eventGetProjectVersion_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "System Information" },
		{ "CompactnodeTittle", "GameVersion" },
		{ "DisplayName", "Game Version" },
		{ "ModuleRelativePath", "Public/VersionGrabber_TA.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetProjectVersion constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetProjectVersion constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetProjectVersion Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVersionGrabber_TA_GetProjectVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VersionGrabber_TA_eventGetProjectVersion_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVersionGrabber_TA_GetProjectVersion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVersionGrabber_TA_GetProjectVersion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVersionGrabber_TA_GetProjectVersion_Statics::PropPointers) < 2048);
// ********** End Function GetProjectVersion Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVersionGrabber_TA_GetProjectVersion_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVersionGrabber_TA, nullptr, "GetProjectVersion", 	Z_Construct_UFunction_UVersionGrabber_TA_GetProjectVersion_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UVersionGrabber_TA_GetProjectVersion_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UVersionGrabber_TA_GetProjectVersion_Statics::VersionGrabber_TA_eventGetProjectVersion_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVersionGrabber_TA_GetProjectVersion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVersionGrabber_TA_GetProjectVersion_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVersionGrabber_TA_GetProjectVersion_Statics::VersionGrabber_TA_eventGetProjectVersion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVersionGrabber_TA_GetProjectVersion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVersionGrabber_TA_GetProjectVersion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVersionGrabber_TA::execGetProjectVersion)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UVersionGrabber_TA::GetProjectVersion();
	P_NATIVE_END;
}
// ********** End Class UVersionGrabber_TA Function GetProjectVersion ******************************

// ********** Begin Class UVersionGrabber_TA *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UVersionGrabber_TA;
UClass* UVersionGrabber_TA::GetPrivateStaticClass()
{
	using TClass = UVersionGrabber_TA;
	if (!Z_Registration_Info_UClass_UVersionGrabber_TA.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("VersionGrabber_TA"),
			Z_Registration_Info_UClass_UVersionGrabber_TA.InnerSingleton,
			StaticRegisterNativesUVersionGrabber_TA,
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
	return Z_Registration_Info_UClass_UVersionGrabber_TA.InnerSingleton;
}
UClass* Z_Construct_UClass_UVersionGrabber_TA_NoRegister()
{
	return UVersionGrabber_TA::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVersionGrabber_TA_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "VersionGrabber_TA.h" },
		{ "ModuleRelativePath", "Public/VersionGrabber_TA.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UVersionGrabber_TA constinit property declarations ***********************
// ********** End Class UVersionGrabber_TA constinit property declarations *************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetHardwareID"), .Pointer = &UVersionGrabber_TA::execGetHardwareID },
		{ .NameUTF8 = UTF8TEXT("GetProjectVersion"), .Pointer = &UVersionGrabber_TA::execGetProjectVersion },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVersionGrabber_TA_GetHardwareID, "GetHardwareID" }, // 3547989380
		{ &Z_Construct_UFunction_UVersionGrabber_TA_GetProjectVersion, "GetProjectVersion" }, // 3573986532
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVersionGrabber_TA>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UVersionGrabber_TA_Statics
UObject* (*const Z_Construct_UClass_UVersionGrabber_TA_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_ShadowsCodePlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVersionGrabber_TA_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVersionGrabber_TA_Statics::ClassParams = {
	&UVersionGrabber_TA::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVersionGrabber_TA_Statics::Class_MetaDataParams), Z_Construct_UClass_UVersionGrabber_TA_Statics::Class_MetaDataParams)
};
void UVersionGrabber_TA::StaticRegisterNativesUVersionGrabber_TA()
{
	UClass* Class = UVersionGrabber_TA::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UVersionGrabber_TA_Statics::Funcs));
}
UClass* Z_Construct_UClass_UVersionGrabber_TA()
{
	if (!Z_Registration_Info_UClass_UVersionGrabber_TA.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVersionGrabber_TA.OuterSingleton, Z_Construct_UClass_UVersionGrabber_TA_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVersionGrabber_TA.OuterSingleton;
}
UVersionGrabber_TA::UVersionGrabber_TA(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UVersionGrabber_TA);
UVersionGrabber_TA::~UVersionGrabber_TA() {}
// ********** End Class UVersionGrabber_TA *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_ShadowsCodePlugin_Source_ShadowsCodePlugin_Public_VersionGrabber_TA_h__Script_ShadowsCodePlugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVersionGrabber_TA, UVersionGrabber_TA::StaticClass, TEXT("UVersionGrabber_TA"), &Z_Registration_Info_UClass_UVersionGrabber_TA, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVersionGrabber_TA), 2023109211U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_ShadowsCodePlugin_Source_ShadowsCodePlugin_Public_VersionGrabber_TA_h__Script_ShadowsCodePlugin_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_ShadowsCodePlugin_Source_ShadowsCodePlugin_Public_VersionGrabber_TA_h__Script_ShadowsCodePlugin_351220496{
	TEXT("/Script/ShadowsCodePlugin"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_ShadowsCodePlugin_Source_ShadowsCodePlugin_Public_VersionGrabber_TA_h__Script_ShadowsCodePlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_ShadowsCodePlugin_Source_ShadowsCodePlugin_Public_VersionGrabber_TA_h__Script_ShadowsCodePlugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
