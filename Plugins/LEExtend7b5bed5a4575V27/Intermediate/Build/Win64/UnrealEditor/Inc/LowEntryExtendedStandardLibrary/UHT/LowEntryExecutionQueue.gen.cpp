// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LowEntryExecutionQueue.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeLowEntryExecutionQueue() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryExecutionQueue();
LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryExecutionQueue_NoRegister();
UPackage* Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ULowEntryExecutionQueue **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ULowEntryExecutionQueue;
UClass* ULowEntryExecutionQueue::GetPrivateStaticClass()
{
	using TClass = ULowEntryExecutionQueue;
	if (!Z_Registration_Info_UClass_ULowEntryExecutionQueue.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("LowEntryExecutionQueue"),
			Z_Registration_Info_UClass_ULowEntryExecutionQueue.InnerSingleton,
			StaticRegisterNativesULowEntryExecutionQueue,
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
	return Z_Registration_Info_UClass_ULowEntryExecutionQueue.InnerSingleton;
}
UClass* Z_Construct_UClass_ULowEntryExecutionQueue_NoRegister()
{
	return ULowEntryExecutionQueue::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULowEntryExecutionQueue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Classes/LowEntryExecutionQueue.h" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryExecutionQueue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryExecutionQueue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Next_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryExecutionQueue.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ULowEntryExecutionQueue constinit property declarations ******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static void NewProp_Next_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Next;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ULowEntryExecutionQueue constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULowEntryExecutionQueue>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ULowEntryExecutionQueue_Statics

// ********** Begin Class ULowEntryExecutionQueue Property Definitions *****************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULowEntryExecutionQueue_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULowEntryExecutionQueue, Count), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Count_MetaData), NewProp_Count_MetaData) };
void Z_Construct_UClass_ULowEntryExecutionQueue_Statics::NewProp_Next_SetBit(void* Obj)
{
	((ULowEntryExecutionQueue*)Obj)->Next = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULowEntryExecutionQueue_Statics::NewProp_Next = { "Next", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULowEntryExecutionQueue), &Z_Construct_UClass_ULowEntryExecutionQueue_Statics::NewProp_Next_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Next_MetaData), NewProp_Next_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULowEntryExecutionQueue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryExecutionQueue_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryExecutionQueue_Statics::NewProp_Next,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryExecutionQueue_Statics::PropPointers) < 2048);
// ********** End Class ULowEntryExecutionQueue Property Definitions *******************************
UObject* (*const Z_Construct_UClass_ULowEntryExecutionQueue_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryExecutionQueue_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULowEntryExecutionQueue_Statics::ClassParams = {
	&ULowEntryExecutionQueue::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULowEntryExecutionQueue_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryExecutionQueue_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryExecutionQueue_Statics::Class_MetaDataParams), Z_Construct_UClass_ULowEntryExecutionQueue_Statics::Class_MetaDataParams)
};
void ULowEntryExecutionQueue::StaticRegisterNativesULowEntryExecutionQueue()
{
}
UClass* Z_Construct_UClass_ULowEntryExecutionQueue()
{
	if (!Z_Registration_Info_UClass_ULowEntryExecutionQueue.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULowEntryExecutionQueue.OuterSingleton, Z_Construct_UClass_ULowEntryExecutionQueue_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULowEntryExecutionQueue.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ULowEntryExecutionQueue);
ULowEntryExecutionQueue::~ULowEntryExecutionQueue() {}
// ********** End Class ULowEntryExecutionQueue ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_LEExtend7b5bed5a4575V27_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryExecutionQueue_h__Script_LowEntryExtendedStandardLibrary_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULowEntryExecutionQueue, ULowEntryExecutionQueue::StaticClass, TEXT("ULowEntryExecutionQueue"), &Z_Registration_Info_UClass_ULowEntryExecutionQueue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULowEntryExecutionQueue), 4069497428U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_LEExtend7b5bed5a4575V27_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryExecutionQueue_h__Script_LowEntryExtendedStandardLibrary_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_LEExtend7b5bed5a4575V27_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryExecutionQueue_h__Script_LowEntryExtendedStandardLibrary_1982920417{
	TEXT("/Script/LowEntryExtendedStandardLibrary"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_LEExtend7b5bed5a4575V27_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryExecutionQueue_h__Script_LowEntryExtendedStandardLibrary_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_LEExtend7b5bed5a4575V27_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryExecutionQueue_h__Script_LowEntryExtendedStandardLibrary_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
