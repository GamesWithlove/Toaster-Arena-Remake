// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OVRLipSyncPlaybackActorComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeOVRLipSyncPlaybackActorComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
OVRLIPSYNC_API UClass* Z_Construct_UClass_UOVRLipSyncActorComponentBase();
OVRLIPSYNC_API UClass* Z_Construct_UClass_UOVRLipSyncFrameSequence_NoRegister();
OVRLIPSYNC_API UClass* Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent();
OVRLIPSYNC_API UClass* Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_OVRLipSync();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOVRLipSyncPlaybackActorComponent Function SetPlaybackSequence ***********
struct Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_SetPlaybackSequence_Statics
{
	struct OVRLipSyncPlaybackActorComponent_eventSetPlaybackSequence_Parms
	{
		UOVRLipSyncFrameSequence* InSequence;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LipSync" },
		{ "ModuleRelativePath", "Public/OVRLipSyncPlaybackActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Sets playback sequence property" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetPlaybackSequence constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSequence;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetPlaybackSequence constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetPlaybackSequence Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_SetPlaybackSequence_Statics::NewProp_InSequence = { "InSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OVRLipSyncPlaybackActorComponent_eventSetPlaybackSequence_Parms, InSequence), Z_Construct_UClass_UOVRLipSyncFrameSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_SetPlaybackSequence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_SetPlaybackSequence_Statics::NewProp_InSequence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_SetPlaybackSequence_Statics::PropPointers) < 2048);
// ********** End Function SetPlaybackSequence Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_SetPlaybackSequence_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent, nullptr, "SetPlaybackSequence", 	Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_SetPlaybackSequence_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_SetPlaybackSequence_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_SetPlaybackSequence_Statics::OVRLipSyncPlaybackActorComponent_eventSetPlaybackSequence_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_SetPlaybackSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_SetPlaybackSequence_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_SetPlaybackSequence_Statics::OVRLipSyncPlaybackActorComponent_eventSetPlaybackSequence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_SetPlaybackSequence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_SetPlaybackSequence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOVRLipSyncPlaybackActorComponent::execSetPlaybackSequence)
{
	P_GET_OBJECT(UOVRLipSyncFrameSequence,Z_Param_InSequence);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlaybackSequence(Z_Param_InSequence);
	P_NATIVE_END;
}
// ********** End Class UOVRLipSyncPlaybackActorComponent Function SetPlaybackSequence *************

// ********** Begin Class UOVRLipSyncPlaybackActorComponent Function Start *************************
struct Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Start_Statics
{
	struct OVRLipSyncPlaybackActorComponent_eventStart_Parms
	{
		UAudioComponent* InAudioComponent;
		UOVRLipSyncFrameSequence* InSequence;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LipSync" },
		{ "ModuleRelativePath", "Public/OVRLipSyncPlaybackActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Start playback of the canned sequence synchronized with AudioComponent" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAudioComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function Start constinit property declarations *********************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InAudioComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSequence;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Start constinit property declarations ***********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Start Property Definitions ********************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Start_Statics::NewProp_InAudioComponent = { "InAudioComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OVRLipSyncPlaybackActorComponent_eventStart_Parms, InAudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAudioComponent_MetaData), NewProp_InAudioComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Start_Statics::NewProp_InSequence = { "InSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OVRLipSyncPlaybackActorComponent_eventStart_Parms, InSequence), Z_Construct_UClass_UOVRLipSyncFrameSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Start_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Start_Statics::NewProp_InAudioComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Start_Statics::NewProp_InSequence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Start_Statics::PropPointers) < 2048);
// ********** End Function Start Property Definitions **********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Start_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent, nullptr, "Start", 	Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Start_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Start_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Start_Statics::OVRLipSyncPlaybackActorComponent_eventStart_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Start_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Start_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Start_Statics::OVRLipSyncPlaybackActorComponent_eventStart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Start()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Start_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOVRLipSyncPlaybackActorComponent::execStart)
{
	P_GET_OBJECT(UAudioComponent,Z_Param_InAudioComponent);
	P_GET_OBJECT(UOVRLipSyncFrameSequence,Z_Param_InSequence);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Start(Z_Param_InAudioComponent,Z_Param_InSequence);
	P_NATIVE_END;
}
// ********** End Class UOVRLipSyncPlaybackActorComponent Function Start ***************************

// ********** Begin Class UOVRLipSyncPlaybackActorComponent Function Stop **************************
struct Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Stop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LipSync" },
		{ "ModuleRelativePath", "Public/OVRLipSyncPlaybackActorComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Stop constinit property declarations **********************************
// ********** End Function Stop constinit property declarations ************************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Stop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent, nullptr, "Stop", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Stop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Stop_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Stop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Stop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOVRLipSyncPlaybackActorComponent::execStop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Stop();
	P_NATIVE_END;
}
// ********** End Class UOVRLipSyncPlaybackActorComponent Function Stop ****************************

// ********** Begin Class UOVRLipSyncPlaybackActorComponent ****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UOVRLipSyncPlaybackActorComponent;
UClass* UOVRLipSyncPlaybackActorComponent::GetPrivateStaticClass()
{
	using TClass = UOVRLipSyncPlaybackActorComponent;
	if (!Z_Registration_Info_UClass_UOVRLipSyncPlaybackActorComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OVRLipSyncPlaybackActorComponent"),
			Z_Registration_Info_UClass_UOVRLipSyncPlaybackActorComponent.InnerSingleton,
			StaticRegisterNativesUOVRLipSyncPlaybackActorComponent,
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
	return Z_Registration_Info_UClass_UOVRLipSyncPlaybackActorComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_NoRegister()
{
	return UOVRLipSyncPlaybackActorComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "OVRLipSyncPlaybackActorComponent.h" },
		{ "ModuleRelativePath", "Public/OVRLipSyncPlaybackActorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[] = {
		{ "Category", "LipSync" },
		{ "ModuleRelativePath", "Public/OVRLipSyncPlaybackActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "LipSync Sequence to be played" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[] = {
		{ "Category", "LipSync" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OVRLipSyncPlaybackActorComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOVRLipSyncPlaybackActorComponent constinit property declarations ********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UOVRLipSyncPlaybackActorComponent constinit property declarations **********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("SetPlaybackSequence"), .Pointer = &UOVRLipSyncPlaybackActorComponent::execSetPlaybackSequence },
		{ .NameUTF8 = UTF8TEXT("Start"), .Pointer = &UOVRLipSyncPlaybackActorComponent::execStart },
		{ .NameUTF8 = UTF8TEXT("Stop"), .Pointer = &UOVRLipSyncPlaybackActorComponent::execStop },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_SetPlaybackSequence, "SetPlaybackSequence" }, // 19117958
		{ &Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Start, "Start" }, // 2319632259
		{ &Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Stop, "Stop" }, // 1154857640
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOVRLipSyncPlaybackActorComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics

// ********** Begin Class UOVRLipSyncPlaybackActorComponent Property Definitions *******************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOVRLipSyncPlaybackActorComponent, Sequence), Z_Construct_UClass_UOVRLipSyncFrameSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sequence_MetaData), NewProp_Sequence_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOVRLipSyncPlaybackActorComponent, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioComponent_MetaData), NewProp_AudioComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics::NewProp_AudioComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics::PropPointers) < 2048);
// ********** End Class UOVRLipSyncPlaybackActorComponent Property Definitions *********************
UObject* (*const Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOVRLipSyncActorComponentBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OVRLipSync,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics::ClassParams = {
	&UOVRLipSyncPlaybackActorComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics::Class_MetaDataParams)
};
void UOVRLipSyncPlaybackActorComponent::StaticRegisterNativesUOVRLipSyncPlaybackActorComponent()
{
	UClass* Class = UOVRLipSyncPlaybackActorComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent()
{
	if (!Z_Registration_Info_UClass_UOVRLipSyncPlaybackActorComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOVRLipSyncPlaybackActorComponent.OuterSingleton, Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOVRLipSyncPlaybackActorComponent.OuterSingleton;
}
UOVRLipSyncPlaybackActorComponent::UOVRLipSyncPlaybackActorComponent() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOVRLipSyncPlaybackActorComponent);
UOVRLipSyncPlaybackActorComponent::~UOVRLipSyncPlaybackActorComponent() {}
// ********** End Class UOVRLipSyncPlaybackActorComponent ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncPlaybackActorComponent_h__Script_OVRLipSync_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent, UOVRLipSyncPlaybackActorComponent::StaticClass, TEXT("UOVRLipSyncPlaybackActorComponent"), &Z_Registration_Info_UClass_UOVRLipSyncPlaybackActorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOVRLipSyncPlaybackActorComponent), 1145144967U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncPlaybackActorComponent_h__Script_OVRLipSync_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncPlaybackActorComponent_h__Script_OVRLipSync_2267605400{
	TEXT("/Script/OVRLipSync"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncPlaybackActorComponent_h__Script_OVRLipSync_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncPlaybackActorComponent_h__Script_OVRLipSync_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
