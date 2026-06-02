// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_LowEntry_CreateBitDataWriter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeK2Node_LowEntry_CreateBitDataWriter() {}

// ********** Begin Cross Module References ********************************************************
LOWENTRYEXTENDEDSTANDARDLIBRARYEDITOR_API UClass* Z_Construct_UClass_UK2Node_LowEntry_CreateBitDataWriter();
LOWENTRYEXTENDEDSTANDARDLIBRARYEDITOR_API UClass* Z_Construct_UClass_UK2Node_LowEntry_CreateBitDataWriter_NoRegister();
LOWENTRYEXTENDEDSTANDARDLIBRARYEDITOR_API UClass* Z_Construct_UClass_UK2Node_LowEntry_MakeCustomArray();
UPackage* Z_Construct_UPackage__Script_LowEntryExtendedStandardLibraryEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UK2Node_LowEntry_CreateBitDataWriter *************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UK2Node_LowEntry_CreateBitDataWriter;
UClass* UK2Node_LowEntry_CreateBitDataWriter::GetPrivateStaticClass()
{
	using TClass = UK2Node_LowEntry_CreateBitDataWriter;
	if (!Z_Registration_Info_UClass_UK2Node_LowEntry_CreateBitDataWriter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("K2Node_LowEntry_CreateBitDataWriter"),
			Z_Registration_Info_UClass_UK2Node_LowEntry_CreateBitDataWriter.InnerSingleton,
			StaticRegisterNativesUK2Node_LowEntry_CreateBitDataWriter,
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
	return Z_Registration_Info_UClass_UK2Node_LowEntry_CreateBitDataWriter.InnerSingleton;
}
UClass* Z_Construct_UClass_UK2Node_LowEntry_CreateBitDataWriter_NoRegister()
{
	return UK2Node_LowEntry_CreateBitDataWriter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UK2Node_LowEntry_CreateBitDataWriter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Classes/K2Node_LowEntry_CreateBitDataWriter.h" },
		{ "ModuleRelativePath", "Public/Classes/K2Node_LowEntry_CreateBitDataWriter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UK2Node_LowEntry_CreateBitDataWriter constinit property declarations *****
// ********** End Class UK2Node_LowEntry_CreateBitDataWriter constinit property declarations *******
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_LowEntry_CreateBitDataWriter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UK2Node_LowEntry_CreateBitDataWriter_Statics
UObject* (*const Z_Construct_UClass_UK2Node_LowEntry_CreateBitDataWriter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UK2Node_LowEntry_MakeCustomArray,
	(UObject* (*)())Z_Construct_UPackage__Script_LowEntryExtendedStandardLibraryEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_LowEntry_CreateBitDataWriter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_LowEntry_CreateBitDataWriter_Statics::ClassParams = {
	&UK2Node_LowEntry_CreateBitDataWriter::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_LowEntry_CreateBitDataWriter_Statics::Class_MetaDataParams), Z_Construct_UClass_UK2Node_LowEntry_CreateBitDataWriter_Statics::Class_MetaDataParams)
};
void UK2Node_LowEntry_CreateBitDataWriter::StaticRegisterNativesUK2Node_LowEntry_CreateBitDataWriter()
{
}
UClass* Z_Construct_UClass_UK2Node_LowEntry_CreateBitDataWriter()
{
	if (!Z_Registration_Info_UClass_UK2Node_LowEntry_CreateBitDataWriter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_LowEntry_CreateBitDataWriter.OuterSingleton, Z_Construct_UClass_UK2Node_LowEntry_CreateBitDataWriter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UK2Node_LowEntry_CreateBitDataWriter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UK2Node_LowEntry_CreateBitDataWriter);
UK2Node_LowEntry_CreateBitDataWriter::~UK2Node_LowEntry_CreateBitDataWriter() {}
// ********** End Class UK2Node_LowEntry_CreateBitDataWriter ***************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibraryEditor_Public_Classes_K2Node_LowEntry_CreateBitDataWriter_h__Script_LowEntryExtendedStandardLibraryEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_LowEntry_CreateBitDataWriter, UK2Node_LowEntry_CreateBitDataWriter::StaticClass, TEXT("UK2Node_LowEntry_CreateBitDataWriter"), &Z_Registration_Info_UClass_UK2Node_LowEntry_CreateBitDataWriter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_LowEntry_CreateBitDataWriter), 558590512U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibraryEditor_Public_Classes_K2Node_LowEntry_CreateBitDataWriter_h__Script_LowEntryExtendedStandardLibraryEditor_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibraryEditor_Public_Classes_K2Node_LowEntry_CreateBitDataWriter_h__Script_LowEntryExtendedStandardLibraryEditor_331393498{
	TEXT("/Script/LowEntryExtendedStandardLibraryEditor"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibraryEditor_Public_Classes_K2Node_LowEntry_CreateBitDataWriter_h__Script_LowEntryExtendedStandardLibraryEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibraryEditor_Public_Classes_K2Node_LowEntry_CreateBitDataWriter_h__Script_LowEntryExtendedStandardLibraryEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
