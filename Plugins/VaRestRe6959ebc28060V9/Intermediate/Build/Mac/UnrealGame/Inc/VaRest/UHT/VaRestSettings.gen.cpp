// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VaRestSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeVaRestSettings() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_VaRest();
VAREST_API UClass* Z_Construct_UClass_UVaRestSettings();
VAREST_API UClass* Z_Construct_UClass_UVaRestSettings_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVaRestSettings **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UVaRestSettings;
UClass* UVaRestSettings::GetPrivateStaticClass()
{
	using TClass = UVaRestSettings;
	if (!Z_Registration_Info_UClass_UVaRestSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("VaRestSettings"),
			Z_Registration_Info_UClass_UVaRestSettings.InnerSingleton,
			StaticRegisterNativesUVaRestSettings,
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
	return Z_Registration_Info_UClass_UVaRestSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UVaRestSettings_NoRegister()
{
	return UVaRestSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVaRestSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VaRestSettings.h" },
		{ "ModuleRelativePath", "Public/VaRestSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExtendedLog_MetaData[] = {
		{ "Category", "VaRest" },
		{ "Comment", "/** You can disable request content logging to avoid security vulnerability */" },
		{ "ModuleRelativePath", "Public/VaRestSettings.h" },
		{ "ToolTip", "You can disable request content logging to avoid security vulnerability" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseChunkedParser_MetaData[] = {
		{ "Category", "VaRest" },
		{ "Comment", "/** Use custom chunked parses (best for memory, but has issues with hex-encoded utf-8) */" },
		{ "ModuleRelativePath", "Public/VaRestSettings.h" },
		{ "ToolTip", "Use custom chunked parses (best for memory, but has issues with hex-encoded utf-8)" },
	};
#endif // WITH_METADATA

// ********** Begin Class UVaRestSettings constinit property declarations **************************
	static void NewProp_bExtendedLog_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExtendedLog;
	static void NewProp_bUseChunkedParser_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseChunkedParser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UVaRestSettings constinit property declarations ****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVaRestSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UVaRestSettings_Statics

// ********** Begin Class UVaRestSettings Property Definitions *************************************
void Z_Construct_UClass_UVaRestSettings_Statics::NewProp_bExtendedLog_SetBit(void* Obj)
{
	((UVaRestSettings*)Obj)->bExtendedLog = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVaRestSettings_Statics::NewProp_bExtendedLog = { "bExtendedLog", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVaRestSettings), &Z_Construct_UClass_UVaRestSettings_Statics::NewProp_bExtendedLog_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExtendedLog_MetaData), NewProp_bExtendedLog_MetaData) };
void Z_Construct_UClass_UVaRestSettings_Statics::NewProp_bUseChunkedParser_SetBit(void* Obj)
{
	((UVaRestSettings*)Obj)->bUseChunkedParser = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVaRestSettings_Statics::NewProp_bUseChunkedParser = { "bUseChunkedParser", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVaRestSettings), &Z_Construct_UClass_UVaRestSettings_Statics::NewProp_bUseChunkedParser_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseChunkedParser_MetaData), NewProp_bUseChunkedParser_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVaRestSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaRestSettings_Statics::NewProp_bExtendedLog,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaRestSettings_Statics::NewProp_bUseChunkedParser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestSettings_Statics::PropPointers) < 2048);
// ********** End Class UVaRestSettings Property Definitions ***************************************
UObject* (*const Z_Construct_UClass_UVaRestSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_VaRest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVaRestSettings_Statics::ClassParams = {
	&UVaRestSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVaRestSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UVaRestSettings_Statics::Class_MetaDataParams)
};
void UVaRestSettings::StaticRegisterNativesUVaRestSettings()
{
}
UClass* Z_Construct_UClass_UVaRestSettings()
{
	if (!Z_Registration_Info_UClass_UVaRestSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVaRestSettings.OuterSingleton, Z_Construct_UClass_UVaRestSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVaRestSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UVaRestSettings);
UVaRestSettings::~UVaRestSettings() {}
// ********** End Class UVaRestSettings ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestSettings_h__Script_VaRest_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVaRestSettings, UVaRestSettings::StaticClass, TEXT("UVaRestSettings"), &Z_Registration_Info_UClass_UVaRestSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVaRestSettings), 175998743U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestSettings_h__Script_VaRest_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestSettings_h__Script_VaRest_3145921664{
	TEXT("/Script/VaRest"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestSettings_h__Script_VaRest_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestSettings_h__Script_VaRest_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
