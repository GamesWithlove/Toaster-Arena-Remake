// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_LowEntry_CreateByteDataWriterPure.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeK2Node_LowEntry_CreateByteDataWriterPure() {}

// ********** Begin Cross Module References ********************************************************
LOWENTRYEXTENDEDSTANDARDLIBRARYEDITOR_API UClass* Z_Construct_UClass_UK2Node_LowEntry_CreateByteDataWriterPure();
LOWENTRYEXTENDEDSTANDARDLIBRARYEDITOR_API UClass* Z_Construct_UClass_UK2Node_LowEntry_CreateByteDataWriterPure_NoRegister();
LOWENTRYEXTENDEDSTANDARDLIBRARYEDITOR_API UClass* Z_Construct_UClass_UK2Node_LowEntry_MakeCustomArray();
UPackage* Z_Construct_UPackage__Script_LowEntryExtendedStandardLibraryEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UK2Node_LowEntry_CreateByteDataWriterPure ********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UK2Node_LowEntry_CreateByteDataWriterPure;
UClass* UK2Node_LowEntry_CreateByteDataWriterPure::GetPrivateStaticClass()
{
	using TClass = UK2Node_LowEntry_CreateByteDataWriterPure;
	if (!Z_Registration_Info_UClass_UK2Node_LowEntry_CreateByteDataWriterPure.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("K2Node_LowEntry_CreateByteDataWriterPure"),
			Z_Registration_Info_UClass_UK2Node_LowEntry_CreateByteDataWriterPure.InnerSingleton,
			StaticRegisterNativesUK2Node_LowEntry_CreateByteDataWriterPure,
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
	return Z_Registration_Info_UClass_UK2Node_LowEntry_CreateByteDataWriterPure.InnerSingleton;
}
UClass* Z_Construct_UClass_UK2Node_LowEntry_CreateByteDataWriterPure_NoRegister()
{
	return UK2Node_LowEntry_CreateByteDataWriterPure::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UK2Node_LowEntry_CreateByteDataWriterPure_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Classes/K2Node_LowEntry_CreateByteDataWriterPure.h" },
		{ "ModuleRelativePath", "Public/Classes/K2Node_LowEntry_CreateByteDataWriterPure.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UK2Node_LowEntry_CreateByteDataWriterPure constinit property declarations 
// ********** End Class UK2Node_LowEntry_CreateByteDataWriterPure constinit property declarations **
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_LowEntry_CreateByteDataWriterPure>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UK2Node_LowEntry_CreateByteDataWriterPure_Statics
UObject* (*const Z_Construct_UClass_UK2Node_LowEntry_CreateByteDataWriterPure_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UK2Node_LowEntry_MakeCustomArray,
	(UObject* (*)())Z_Construct_UPackage__Script_LowEntryExtendedStandardLibraryEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_LowEntry_CreateByteDataWriterPure_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_LowEntry_CreateByteDataWriterPure_Statics::ClassParams = {
	&UK2Node_LowEntry_CreateByteDataWriterPure::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_LowEntry_CreateByteDataWriterPure_Statics::Class_MetaDataParams), Z_Construct_UClass_UK2Node_LowEntry_CreateByteDataWriterPure_Statics::Class_MetaDataParams)
};
void UK2Node_LowEntry_CreateByteDataWriterPure::StaticRegisterNativesUK2Node_LowEntry_CreateByteDataWriterPure()
{
}
UClass* Z_Construct_UClass_UK2Node_LowEntry_CreateByteDataWriterPure()
{
	if (!Z_Registration_Info_UClass_UK2Node_LowEntry_CreateByteDataWriterPure.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_LowEntry_CreateByteDataWriterPure.OuterSingleton, Z_Construct_UClass_UK2Node_LowEntry_CreateByteDataWriterPure_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UK2Node_LowEntry_CreateByteDataWriterPure.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UK2Node_LowEntry_CreateByteDataWriterPure);
UK2Node_LowEntry_CreateByteDataWriterPure::~UK2Node_LowEntry_CreateByteDataWriterPure() {}
// ********** End Class UK2Node_LowEntry_CreateByteDataWriterPure **********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibraryEditor_Public_Classes_K2Node_LowEntry_CreateByteDataWriterPure_h__Script_LowEntryExtendedStandardLibraryEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_LowEntry_CreateByteDataWriterPure, UK2Node_LowEntry_CreateByteDataWriterPure::StaticClass, TEXT("UK2Node_LowEntry_CreateByteDataWriterPure"), &Z_Registration_Info_UClass_UK2Node_LowEntry_CreateByteDataWriterPure, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_LowEntry_CreateByteDataWriterPure), 1018578809U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibraryEditor_Public_Classes_K2Node_LowEntry_CreateByteDataWriterPure_h__Script_LowEntryExtendedStandardLibraryEditor_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibraryEditor_Public_Classes_K2Node_LowEntry_CreateByteDataWriterPure_h__Script_LowEntryExtendedStandardLibraryEditor_1366106359{
	TEXT("/Script/LowEntryExtendedStandardLibraryEditor"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibraryEditor_Public_Classes_K2Node_LowEntry_CreateByteDataWriterPure_h__Script_LowEntryExtendedStandardLibraryEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibraryEditor_Public_Classes_K2Node_LowEntry_CreateByteDataWriterPure_h__Script_LowEntryExtendedStandardLibraryEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
