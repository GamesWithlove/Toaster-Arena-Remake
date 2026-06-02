// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LowEntryByteArray.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeLowEntryByteArray() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryByteArray();
LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryByteArray_NoRegister();
UPackage* Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ULowEntryByteArray *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ULowEntryByteArray;
UClass* ULowEntryByteArray::GetPrivateStaticClass()
{
	using TClass = ULowEntryByteArray;
	if (!Z_Registration_Info_UClass_ULowEntryByteArray.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("LowEntryByteArray"),
			Z_Registration_Info_UClass_ULowEntryByteArray.InnerSingleton,
			StaticRegisterNativesULowEntryByteArray,
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
	return Z_Registration_Info_UClass_ULowEntryByteArray.InnerSingleton;
}
UClass* Z_Construct_UClass_ULowEntryByteArray_NoRegister()
{
	return ULowEntryByteArray::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULowEntryByteArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Classes/LowEntryByteArray.h" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ByteArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryByteArray.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ULowEntryByteArray constinit property declarations ***********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ByteArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ByteArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ULowEntryByteArray constinit property declarations *************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULowEntryByteArray>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ULowEntryByteArray_Statics

// ********** Begin Class ULowEntryByteArray Property Definitions **********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULowEntryByteArray_Statics::NewProp_ByteArray_Inner = { "ByteArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULowEntryByteArray_Statics::NewProp_ByteArray = { "ByteArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULowEntryByteArray, ByteArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ByteArray_MetaData), NewProp_ByteArray_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULowEntryByteArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryByteArray_Statics::NewProp_ByteArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryByteArray_Statics::NewProp_ByteArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryByteArray_Statics::PropPointers) < 2048);
// ********** End Class ULowEntryByteArray Property Definitions ************************************
UObject* (*const Z_Construct_UClass_ULowEntryByteArray_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryByteArray_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULowEntryByteArray_Statics::ClassParams = {
	&ULowEntryByteArray::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULowEntryByteArray_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryByteArray_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryByteArray_Statics::Class_MetaDataParams), Z_Construct_UClass_ULowEntryByteArray_Statics::Class_MetaDataParams)
};
void ULowEntryByteArray::StaticRegisterNativesULowEntryByteArray()
{
}
UClass* Z_Construct_UClass_ULowEntryByteArray()
{
	if (!Z_Registration_Info_UClass_ULowEntryByteArray.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULowEntryByteArray.OuterSingleton, Z_Construct_UClass_ULowEntryByteArray_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULowEntryByteArray.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ULowEntryByteArray);
ULowEntryByteArray::~ULowEntryByteArray() {}
// ********** End Class ULowEntryByteArray *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryByteArray_h__Script_LowEntryExtendedStandardLibrary_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULowEntryByteArray, ULowEntryByteArray::StaticClass, TEXT("ULowEntryByteArray"), &Z_Registration_Info_UClass_ULowEntryByteArray, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULowEntryByteArray), 1669731778U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryByteArray_h__Script_LowEntryExtendedStandardLibrary_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryByteArray_h__Script_LowEntryExtendedStandardLibrary_1151106724{
	TEXT("/Script/LowEntryExtendedStandardLibrary"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryByteArray_h__Script_LowEntryExtendedStandardLibrary_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryByteArray_h__Script_LowEntryExtendedStandardLibrary_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
