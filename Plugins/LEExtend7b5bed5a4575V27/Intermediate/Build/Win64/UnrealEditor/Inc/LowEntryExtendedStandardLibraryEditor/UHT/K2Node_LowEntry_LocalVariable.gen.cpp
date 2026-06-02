// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_LowEntry_LocalVariable.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeK2Node_LowEntry_LocalVariable() {}

// ********** Begin Cross Module References ********************************************************
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
LOWENTRYEXTENDEDSTANDARDLIBRARYEDITOR_API UClass* Z_Construct_UClass_UK2Node_LowEntry_LocalVariable();
LOWENTRYEXTENDEDSTANDARDLIBRARYEDITOR_API UClass* Z_Construct_UClass_UK2Node_LowEntry_LocalVariable_NoRegister();
UPackage* Z_Construct_UPackage__Script_LowEntryExtendedStandardLibraryEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UK2Node_LowEntry_LocalVariable *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UK2Node_LowEntry_LocalVariable;
UClass* UK2Node_LowEntry_LocalVariable::GetPrivateStaticClass()
{
	using TClass = UK2Node_LowEntry_LocalVariable;
	if (!Z_Registration_Info_UClass_UK2Node_LowEntry_LocalVariable.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("K2Node_LowEntry_LocalVariable"),
			Z_Registration_Info_UClass_UK2Node_LowEntry_LocalVariable.InnerSingleton,
			StaticRegisterNativesUK2Node_LowEntry_LocalVariable,
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
	return Z_Registration_Info_UClass_UK2Node_LowEntry_LocalVariable.InnerSingleton;
}
UClass* Z_Construct_UClass_UK2Node_LowEntry_LocalVariable_NoRegister()
{
	return UK2Node_LowEntry_LocalVariable::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UK2Node_LowEntry_LocalVariable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Classes/K2Node_LowEntry_LocalVariable.h" },
		{ "ModuleRelativePath", "Public/Classes/K2Node_LowEntry_LocalVariable.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UK2Node_LowEntry_LocalVariable constinit property declarations ***********
// ********** End Class UK2Node_LowEntry_LocalVariable constinit property declarations *************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_LowEntry_LocalVariable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UK2Node_LowEntry_LocalVariable_Statics
UObject* (*const Z_Construct_UClass_UK2Node_LowEntry_LocalVariable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UK2Node,
	(UObject* (*)())Z_Construct_UPackage__Script_LowEntryExtendedStandardLibraryEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_LowEntry_LocalVariable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_LowEntry_LocalVariable_Statics::ClassParams = {
	&UK2Node_LowEntry_LocalVariable::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_LowEntry_LocalVariable_Statics::Class_MetaDataParams), Z_Construct_UClass_UK2Node_LowEntry_LocalVariable_Statics::Class_MetaDataParams)
};
void UK2Node_LowEntry_LocalVariable::StaticRegisterNativesUK2Node_LowEntry_LocalVariable()
{
}
UClass* Z_Construct_UClass_UK2Node_LowEntry_LocalVariable()
{
	if (!Z_Registration_Info_UClass_UK2Node_LowEntry_LocalVariable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_LowEntry_LocalVariable.OuterSingleton, Z_Construct_UClass_UK2Node_LowEntry_LocalVariable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UK2Node_LowEntry_LocalVariable.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UK2Node_LowEntry_LocalVariable);
UK2Node_LowEntry_LocalVariable::~UK2Node_LowEntry_LocalVariable() {}
// ********** End Class UK2Node_LowEntry_LocalVariable *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_LEExtend7b5bed5a4575V27_Source_LowEntryExtendedStandardLibraryEditor_Public_Classes_K2Node_LowEntry_LocalVariable_h__Script_LowEntryExtendedStandardLibraryEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_LowEntry_LocalVariable, UK2Node_LowEntry_LocalVariable::StaticClass, TEXT("UK2Node_LowEntry_LocalVariable"), &Z_Registration_Info_UClass_UK2Node_LowEntry_LocalVariable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_LowEntry_LocalVariable), 1540871165U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_LEExtend7b5bed5a4575V27_Source_LowEntryExtendedStandardLibraryEditor_Public_Classes_K2Node_LowEntry_LocalVariable_h__Script_LowEntryExtendedStandardLibraryEditor_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_LEExtend7b5bed5a4575V27_Source_LowEntryExtendedStandardLibraryEditor_Public_Classes_K2Node_LowEntry_LocalVariable_h__Script_LowEntryExtendedStandardLibraryEditor_3974736336{
	TEXT("/Script/LowEntryExtendedStandardLibraryEditor"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_LEExtend7b5bed5a4575V27_Source_LowEntryExtendedStandardLibraryEditor_Public_Classes_K2Node_LowEntry_LocalVariable_h__Script_LowEntryExtendedStandardLibraryEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_LEExtend7b5bed5a4575V27_Source_LowEntryExtendedStandardLibraryEditor_Public_Classes_K2Node_LowEntry_LocalVariable_h__Script_LowEntryExtendedStandardLibraryEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
