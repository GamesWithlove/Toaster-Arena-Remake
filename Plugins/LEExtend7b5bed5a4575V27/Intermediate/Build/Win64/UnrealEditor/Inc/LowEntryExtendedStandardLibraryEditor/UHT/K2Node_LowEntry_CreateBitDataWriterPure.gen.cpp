// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_LowEntry_CreateBitDataWriterPure.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeK2Node_LowEntry_CreateBitDataWriterPure() {}

// ********** Begin Cross Module References ********************************************************
LOWENTRYEXTENDEDSTANDARDLIBRARYEDITOR_API UClass* Z_Construct_UClass_UK2Node_LowEntry_CreateBitDataWriterPure();
LOWENTRYEXTENDEDSTANDARDLIBRARYEDITOR_API UClass* Z_Construct_UClass_UK2Node_LowEntry_CreateBitDataWriterPure_NoRegister();
LOWENTRYEXTENDEDSTANDARDLIBRARYEDITOR_API UClass* Z_Construct_UClass_UK2Node_LowEntry_MakeCustomArray();
UPackage* Z_Construct_UPackage__Script_LowEntryExtendedStandardLibraryEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UK2Node_LowEntry_CreateBitDataWriterPure *********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UK2Node_LowEntry_CreateBitDataWriterPure;
UClass* UK2Node_LowEntry_CreateBitDataWriterPure::GetPrivateStaticClass()
{
	using TClass = UK2Node_LowEntry_CreateBitDataWriterPure;
	if (!Z_Registration_Info_UClass_UK2Node_LowEntry_CreateBitDataWriterPure.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("K2Node_LowEntry_CreateBitDataWriterPure"),
			Z_Registration_Info_UClass_UK2Node_LowEntry_CreateBitDataWriterPure.InnerSingleton,
			StaticRegisterNativesUK2Node_LowEntry_CreateBitDataWriterPure,
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
	return Z_Registration_Info_UClass_UK2Node_LowEntry_CreateBitDataWriterPure.InnerSingleton;
}
UClass* Z_Construct_UClass_UK2Node_LowEntry_CreateBitDataWriterPure_NoRegister()
{
	return UK2Node_LowEntry_CreateBitDataWriterPure::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UK2Node_LowEntry_CreateBitDataWriterPure_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Classes/K2Node_LowEntry_CreateBitDataWriterPure.h" },
		{ "ModuleRelativePath", "Public/Classes/K2Node_LowEntry_CreateBitDataWriterPure.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UK2Node_LowEntry_CreateBitDataWriterPure constinit property declarations *
// ********** End Class UK2Node_LowEntry_CreateBitDataWriterPure constinit property declarations ***
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_LowEntry_CreateBitDataWriterPure>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UK2Node_LowEntry_CreateBitDataWriterPure_Statics
UObject* (*const Z_Construct_UClass_UK2Node_LowEntry_CreateBitDataWriterPure_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UK2Node_LowEntry_MakeCustomArray,
	(UObject* (*)())Z_Construct_UPackage__Script_LowEntryExtendedStandardLibraryEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_LowEntry_CreateBitDataWriterPure_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_LowEntry_CreateBitDataWriterPure_Statics::ClassParams = {
	&UK2Node_LowEntry_CreateBitDataWriterPure::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_LowEntry_CreateBitDataWriterPure_Statics::Class_MetaDataParams), Z_Construct_UClass_UK2Node_LowEntry_CreateBitDataWriterPure_Statics::Class_MetaDataParams)
};
void UK2Node_LowEntry_CreateBitDataWriterPure::StaticRegisterNativesUK2Node_LowEntry_CreateBitDataWriterPure()
{
}
UClass* Z_Construct_UClass_UK2Node_LowEntry_CreateBitDataWriterPure()
{
	if (!Z_Registration_Info_UClass_UK2Node_LowEntry_CreateBitDataWriterPure.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_LowEntry_CreateBitDataWriterPure.OuterSingleton, Z_Construct_UClass_UK2Node_LowEntry_CreateBitDataWriterPure_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UK2Node_LowEntry_CreateBitDataWriterPure.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UK2Node_LowEntry_CreateBitDataWriterPure);
UK2Node_LowEntry_CreateBitDataWriterPure::~UK2Node_LowEntry_CreateBitDataWriterPure() {}
// ********** End Class UK2Node_LowEntry_CreateBitDataWriterPure ***********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_LEExtend7b5bed5a4575V27_Source_LowEntryExtendedStandardLibraryEditor_Public_Classes_K2Node_LowEntry_CreateBitDataWriterPure_h__Script_LowEntryExtendedStandardLibraryEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_LowEntry_CreateBitDataWriterPure, UK2Node_LowEntry_CreateBitDataWriterPure::StaticClass, TEXT("UK2Node_LowEntry_CreateBitDataWriterPure"), &Z_Registration_Info_UClass_UK2Node_LowEntry_CreateBitDataWriterPure, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_LowEntry_CreateBitDataWriterPure), 537823773U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_LEExtend7b5bed5a4575V27_Source_LowEntryExtendedStandardLibraryEditor_Public_Classes_K2Node_LowEntry_CreateBitDataWriterPure_h__Script_LowEntryExtendedStandardLibraryEditor_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_LEExtend7b5bed5a4575V27_Source_LowEntryExtendedStandardLibraryEditor_Public_Classes_K2Node_LowEntry_CreateBitDataWriterPure_h__Script_LowEntryExtendedStandardLibraryEditor_1429121804{
	TEXT("/Script/LowEntryExtendedStandardLibraryEditor"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_LEExtend7b5bed5a4575V27_Source_LowEntryExtendedStandardLibraryEditor_Public_Classes_K2Node_LowEntry_CreateBitDataWriterPure_h__Script_LowEntryExtendedStandardLibraryEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_LEExtend7b5bed5a4575V27_Source_LowEntryExtendedStandardLibraryEditor_Public_Classes_K2Node_LowEntry_CreateBitDataWriterPure_h__Script_LowEntryExtendedStandardLibraryEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
