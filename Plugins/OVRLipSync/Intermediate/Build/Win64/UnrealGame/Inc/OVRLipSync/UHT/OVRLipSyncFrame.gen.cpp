// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OVRLipSyncFrame.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeOVRLipSyncFrame() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
OVRLIPSYNC_API UClass* Z_Construct_UClass_UOVRLipSyncFrameSequence();
OVRLIPSYNC_API UClass* Z_Construct_UClass_UOVRLipSyncFrameSequence_NoRegister();
OVRLIPSYNC_API UScriptStruct* Z_Construct_UScriptStruct_FOVRLipSyncFrame();
UPackage* Z_Construct_UPackage__Script_OVRLipSync();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FOVRLipSyncFrame **************************************************
struct Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FOVRLipSyncFrame); }
	static inline consteval int16 GetStructAlignment() { return alignof(FOVRLipSyncFrame); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OVRLipSyncFrame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisemeScores_MetaData[] = {
		{ "ModuleRelativePath", "Public/OVRLipSyncFrame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaughterScore_MetaData[] = {
		{ "ModuleRelativePath", "Public/OVRLipSyncFrame.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FOVRLipSyncFrame constinit property declarations ******************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VisemeScores_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VisemeScores;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LaughterScore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FOVRLipSyncFrame constinit property declarations ********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOVRLipSyncFrame>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOVRLipSyncFrame;
class UScriptStruct* FOVRLipSyncFrame::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FOVRLipSyncFrame.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FOVRLipSyncFrame.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOVRLipSyncFrame, (UObject*)Z_Construct_UPackage__Script_OVRLipSync(), TEXT("OVRLipSyncFrame"));
	}
	return Z_Registration_Info_UScriptStruct_FOVRLipSyncFrame.OuterSingleton;
	}

// ********** Begin ScriptStruct FOVRLipSyncFrame Property Definitions *****************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics::NewProp_VisemeScores_Inner = { "VisemeScores", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics::NewProp_VisemeScores = { "VisemeScores", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOVRLipSyncFrame, VisemeScores), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisemeScores_MetaData), NewProp_VisemeScores_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics::NewProp_LaughterScore = { "LaughterScore", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOVRLipSyncFrame, LaughterScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaughterScore_MetaData), NewProp_LaughterScore_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics::NewProp_VisemeScores_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics::NewProp_VisemeScores,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics::NewProp_LaughterScore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FOVRLipSyncFrame Property Definitions *******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OVRLipSync,
	nullptr,
	&NewStructOps,
	"OVRLipSyncFrame",
	Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics::PropPointers),
	sizeof(FOVRLipSyncFrame),
	alignof(FOVRLipSyncFrame),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOVRLipSyncFrame()
{
	if (!Z_Registration_Info_UScriptStruct_FOVRLipSyncFrame.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOVRLipSyncFrame.InnerSingleton, Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FOVRLipSyncFrame.InnerSingleton);
}
// ********** End ScriptStruct FOVRLipSyncFrame ****************************************************

// ********** Begin Class UOVRLipSyncFrameSequence *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UOVRLipSyncFrameSequence;
UClass* UOVRLipSyncFrameSequence::GetPrivateStaticClass()
{
	using TClass = UOVRLipSyncFrameSequence;
	if (!Z_Registration_Info_UClass_UOVRLipSyncFrameSequence.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OVRLipSyncFrameSequence"),
			Z_Registration_Info_UClass_UOVRLipSyncFrameSequence.InnerSingleton,
			StaticRegisterNativesUOVRLipSyncFrameSequence,
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
	return Z_Registration_Info_UClass_UOVRLipSyncFrameSequence.InnerSingleton;
}
UClass* Z_Construct_UClass_UOVRLipSyncFrameSequence_NoRegister()
{
	return UOVRLipSyncFrameSequence::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOVRLipSyncFrameSequence_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OVRLipSyncFrame.h" },
		{ "ModuleRelativePath", "Public/OVRLipSyncFrame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameSequence_MetaData[] = {
		{ "ModuleRelativePath", "Public/OVRLipSyncFrame.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOVRLipSyncFrameSequence constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_FrameSequence_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FrameSequence;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UOVRLipSyncFrameSequence constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOVRLipSyncFrameSequence>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UOVRLipSyncFrameSequence_Statics

// ********** Begin Class UOVRLipSyncFrameSequence Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOVRLipSyncFrameSequence_Statics::NewProp_FrameSequence_Inner = { "FrameSequence", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOVRLipSyncFrame, METADATA_PARAMS(0, nullptr) }; // 3196240642
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOVRLipSyncFrameSequence_Statics::NewProp_FrameSequence = { "FrameSequence", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOVRLipSyncFrameSequence, FrameSequence), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameSequence_MetaData), NewProp_FrameSequence_MetaData) }; // 3196240642
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOVRLipSyncFrameSequence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOVRLipSyncFrameSequence_Statics::NewProp_FrameSequence_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOVRLipSyncFrameSequence_Statics::NewProp_FrameSequence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOVRLipSyncFrameSequence_Statics::PropPointers) < 2048);
// ********** End Class UOVRLipSyncFrameSequence Property Definitions ******************************
UObject* (*const Z_Construct_UClass_UOVRLipSyncFrameSequence_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OVRLipSync,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOVRLipSyncFrameSequence_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOVRLipSyncFrameSequence_Statics::ClassParams = {
	&UOVRLipSyncFrameSequence::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOVRLipSyncFrameSequence_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOVRLipSyncFrameSequence_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOVRLipSyncFrameSequence_Statics::Class_MetaDataParams), Z_Construct_UClass_UOVRLipSyncFrameSequence_Statics::Class_MetaDataParams)
};
void UOVRLipSyncFrameSequence::StaticRegisterNativesUOVRLipSyncFrameSequence()
{
}
UClass* Z_Construct_UClass_UOVRLipSyncFrameSequence()
{
	if (!Z_Registration_Info_UClass_UOVRLipSyncFrameSequence.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOVRLipSyncFrameSequence.OuterSingleton, Z_Construct_UClass_UOVRLipSyncFrameSequence_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOVRLipSyncFrameSequence.OuterSingleton;
}
UOVRLipSyncFrameSequence::UOVRLipSyncFrameSequence(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOVRLipSyncFrameSequence);
UOVRLipSyncFrameSequence::~UOVRLipSyncFrameSequence() {}
// ********** End Class UOVRLipSyncFrameSequence ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncFrame_h__Script_OVRLipSync_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOVRLipSyncFrame::StaticStruct, Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics::NewStructOps, TEXT("OVRLipSyncFrame"),&Z_Registration_Info_UScriptStruct_FOVRLipSyncFrame, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOVRLipSyncFrame), 3196240642U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOVRLipSyncFrameSequence, UOVRLipSyncFrameSequence::StaticClass, TEXT("UOVRLipSyncFrameSequence"), &Z_Registration_Info_UClass_UOVRLipSyncFrameSequence, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOVRLipSyncFrameSequence), 3875738951U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncFrame_h__Script_OVRLipSync_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncFrame_h__Script_OVRLipSync_2364968321{
	TEXT("/Script/OVRLipSync"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncFrame_h__Script_OVRLipSync_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncFrame_h__Script_OVRLipSync_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncFrame_h__Script_OVRLipSync_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncFrame_h__Script_OVRLipSync_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
