// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OVRLipSyncLiveActorComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeOVRLipSyncLiveActorComponent() {}

// ********** Begin Cross Module References ********************************************************
OVRLIPSYNC_API UClass* Z_Construct_UClass_UOVRLipSyncActorComponent();
OVRLIPSYNC_API UClass* Z_Construct_UClass_UOVRLipSyncActorComponent_NoRegister();
OVRLIPSYNC_API UClass* Z_Construct_UClass_UOVRLipSyncActorComponentBase();
OVRLIPSYNC_API UEnum* Z_Construct_UEnum_OVRLipSync_OVRLipSyncProviderKind();
UPackage* Z_Construct_UPackage__Script_OVRLipSync();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum OVRLipSyncProviderKind ****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_OVRLipSyncProviderKind;
static UEnum* OVRLipSyncProviderKind_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_OVRLipSyncProviderKind.OuterSingleton)
	{
		Z_Registration_Info_UEnum_OVRLipSyncProviderKind.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRLipSync_OVRLipSyncProviderKind, (UObject*)Z_Construct_UPackage__Script_OVRLipSync(), TEXT("OVRLipSyncProviderKind"));
	}
	return Z_Registration_Info_UEnum_OVRLipSyncProviderKind.OuterSingleton;
}
template<> OVRLIPSYNC_NON_ATTRIBUTED_API UEnum* StaticEnum<OVRLipSyncProviderKind>()
{
	return OVRLipSyncProviderKind_StaticEnum();
}
struct Z_Construct_UEnum_OVRLipSync_OVRLipSyncProviderKind_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Enhanced.Name", "OVRLipSyncProviderKind::Enhanced" },
		{ "EnhancedWithLaughter.Name", "OVRLipSyncProviderKind::EnhancedWithLaughter" },
		{ "ModuleRelativePath", "Public/OVRLipSyncLiveActorComponent.h" },
		{ "Original.Name", "OVRLipSyncProviderKind::Original" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "OVRLipSyncProviderKind::Original", (int64)OVRLipSyncProviderKind::Original },
		{ "OVRLipSyncProviderKind::Enhanced", (int64)OVRLipSyncProviderKind::Enhanced },
		{ "OVRLipSyncProviderKind::EnhancedWithLaughter", (int64)OVRLipSyncProviderKind::EnhancedWithLaughter },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_OVRLipSync_OVRLipSyncProviderKind_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRLipSync_OVRLipSyncProviderKind_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRLipSync,
	nullptr,
	"OVRLipSyncProviderKind",
	"OVRLipSyncProviderKind",
	Z_Construct_UEnum_OVRLipSync_OVRLipSyncProviderKind_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRLipSync_OVRLipSyncProviderKind_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRLipSync_OVRLipSyncProviderKind_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRLipSync_OVRLipSyncProviderKind_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRLipSync_OVRLipSyncProviderKind()
{
	if (!Z_Registration_Info_UEnum_OVRLipSyncProviderKind.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_OVRLipSyncProviderKind.InnerSingleton, Z_Construct_UEnum_OVRLipSync_OVRLipSyncProviderKind_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_OVRLipSyncProviderKind.InnerSingleton;
}
// ********** End Enum OVRLipSyncProviderKind ******************************************************

// ********** Begin Class UOVRLipSyncActorComponent Function FeedAudio *****************************
struct Z_Construct_UFunction_UOVRLipSyncActorComponent_FeedAudio_Statics
{
	struct OVRLipSyncActorComponent_eventFeedAudio_Parms
	{
		TArray<uint8> AudioData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LipSync" },
		{ "ModuleRelativePath", "Public/OVRLipSyncLiveActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Feed AudioBuffer containing packaged mono 16-bit signed integer PCM values" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FeedAudio constinit property declarations *****************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_AudioData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AudioData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FeedAudio constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FeedAudio Property Definitions ****************************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOVRLipSyncActorComponent_FeedAudio_Statics::NewProp_AudioData_Inner = { "AudioData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOVRLipSyncActorComponent_FeedAudio_Statics::NewProp_AudioData = { "AudioData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OVRLipSyncActorComponent_eventFeedAudio_Parms, AudioData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioData_MetaData), NewProp_AudioData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOVRLipSyncActorComponent_FeedAudio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVRLipSyncActorComponent_FeedAudio_Statics::NewProp_AudioData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVRLipSyncActorComponent_FeedAudio_Statics::NewProp_AudioData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponent_FeedAudio_Statics::PropPointers) < 2048);
// ********** End Function FeedAudio Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOVRLipSyncActorComponent_FeedAudio_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOVRLipSyncActorComponent, nullptr, "FeedAudio", 	Z_Construct_UFunction_UOVRLipSyncActorComponent_FeedAudio_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponent_FeedAudio_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UOVRLipSyncActorComponent_FeedAudio_Statics::OVRLipSyncActorComponent_eventFeedAudio_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponent_FeedAudio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOVRLipSyncActorComponent_FeedAudio_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOVRLipSyncActorComponent_FeedAudio_Statics::OVRLipSyncActorComponent_eventFeedAudio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOVRLipSyncActorComponent_FeedAudio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOVRLipSyncActorComponent_FeedAudio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOVRLipSyncActorComponent::execFeedAudio)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_AudioData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FeedAudio(Z_Param_Out_AudioData);
	P_NATIVE_END;
}
// ********** End Class UOVRLipSyncActorComponent Function FeedAudio *******************************

// ********** Begin Class UOVRLipSyncActorComponent Function OnVoiceCaptureTimer *******************
struct Z_Construct_UFunction_UOVRLipSyncActorComponent_OnVoiceCaptureTimer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OVRLipSyncLiveActorComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnVoiceCaptureTimer constinit property declarations *******************
// ********** End Function OnVoiceCaptureTimer constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOVRLipSyncActorComponent_OnVoiceCaptureTimer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOVRLipSyncActorComponent, nullptr, "OnVoiceCaptureTimer", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponent_OnVoiceCaptureTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOVRLipSyncActorComponent_OnVoiceCaptureTimer_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UOVRLipSyncActorComponent_OnVoiceCaptureTimer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOVRLipSyncActorComponent_OnVoiceCaptureTimer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOVRLipSyncActorComponent::execOnVoiceCaptureTimer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnVoiceCaptureTimer();
	P_NATIVE_END;
}
// ********** End Class UOVRLipSyncActorComponent Function OnVoiceCaptureTimer *********************

// ********** Begin Class UOVRLipSyncActorComponent Function PermissionCallback ********************
struct Z_Construct_UFunction_UOVRLipSyncActorComponent_PermissionCallback_Statics
{
	struct OVRLipSyncActorComponent_eventPermissionCallback_Parms
	{
		TArray<FString> Permissions;
		TArray<bool> GrantResults;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OVRLipSyncLiveActorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Permissions_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrantResults_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function PermissionCallback constinit property declarations ********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Permissions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Permissions;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_GrantResults_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantResults;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PermissionCallback constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PermissionCallback Property Definitions *******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOVRLipSyncActorComponent_PermissionCallback_Statics::NewProp_Permissions_Inner = { "Permissions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOVRLipSyncActorComponent_PermissionCallback_Statics::NewProp_Permissions = { "Permissions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OVRLipSyncActorComponent_eventPermissionCallback_Parms, Permissions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Permissions_MetaData), NewProp_Permissions_MetaData) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOVRLipSyncActorComponent_PermissionCallback_Statics::NewProp_GrantResults_Inner = { "GrantResults", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOVRLipSyncActorComponent_PermissionCallback_Statics::NewProp_GrantResults = { "GrantResults", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OVRLipSyncActorComponent_eventPermissionCallback_Parms, GrantResults), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrantResults_MetaData), NewProp_GrantResults_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOVRLipSyncActorComponent_PermissionCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVRLipSyncActorComponent_PermissionCallback_Statics::NewProp_Permissions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVRLipSyncActorComponent_PermissionCallback_Statics::NewProp_Permissions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVRLipSyncActorComponent_PermissionCallback_Statics::NewProp_GrantResults_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVRLipSyncActorComponent_PermissionCallback_Statics::NewProp_GrantResults,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponent_PermissionCallback_Statics::PropPointers) < 2048);
// ********** End Function PermissionCallback Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOVRLipSyncActorComponent_PermissionCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOVRLipSyncActorComponent, nullptr, "PermissionCallback", 	Z_Construct_UFunction_UOVRLipSyncActorComponent_PermissionCallback_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponent_PermissionCallback_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UOVRLipSyncActorComponent_PermissionCallback_Statics::OVRLipSyncActorComponent_eventPermissionCallback_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponent_PermissionCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOVRLipSyncActorComponent_PermissionCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOVRLipSyncActorComponent_PermissionCallback_Statics::OVRLipSyncActorComponent_eventPermissionCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOVRLipSyncActorComponent_PermissionCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOVRLipSyncActorComponent_PermissionCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOVRLipSyncActorComponent::execPermissionCallback)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_Permissions);
	P_GET_TARRAY_REF(bool,Z_Param_Out_GrantResults);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PermissionCallback(Z_Param_Out_Permissions,Z_Param_Out_GrantResults);
	P_NATIVE_END;
}
// ********** End Class UOVRLipSyncActorComponent Function PermissionCallback **********************

// ********** Begin Class UOVRLipSyncActorComponent Function Start *********************************
struct Z_Construct_UFunction_UOVRLipSyncActorComponent_Start_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LipSync" },
		{ "ModuleRelativePath", "Public/OVRLipSyncLiveActorComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Start constinit property declarations *********************************
// ********** End Function Start constinit property declarations ***********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOVRLipSyncActorComponent_Start_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOVRLipSyncActorComponent, nullptr, "Start", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponent_Start_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOVRLipSyncActorComponent_Start_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UOVRLipSyncActorComponent_Start()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOVRLipSyncActorComponent_Start_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOVRLipSyncActorComponent::execStart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Start();
	P_NATIVE_END;
}
// ********** End Class UOVRLipSyncActorComponent Function Start ***********************************

// ********** Begin Class UOVRLipSyncActorComponent Function Stop **********************************
struct Z_Construct_UFunction_UOVRLipSyncActorComponent_Stop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LipSync" },
		{ "ModuleRelativePath", "Public/OVRLipSyncLiveActorComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Stop constinit property declarations **********************************
// ********** End Function Stop constinit property declarations ************************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOVRLipSyncActorComponent_Stop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOVRLipSyncActorComponent, nullptr, "Stop", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponent_Stop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOVRLipSyncActorComponent_Stop_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UOVRLipSyncActorComponent_Stop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOVRLipSyncActorComponent_Stop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOVRLipSyncActorComponent::execStop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Stop();
	P_NATIVE_END;
}
// ********** End Class UOVRLipSyncActorComponent Function Stop ************************************

// ********** Begin Class UOVRLipSyncActorComponent ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UOVRLipSyncActorComponent;
UClass* UOVRLipSyncActorComponent::GetPrivateStaticClass()
{
	using TClass = UOVRLipSyncActorComponent;
	if (!Z_Registration_Info_UClass_UOVRLipSyncActorComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OVRLipSyncActorComponent"),
			Z_Registration_Info_UClass_UOVRLipSyncActorComponent.InnerSingleton,
			StaticRegisterNativesUOVRLipSyncActorComponent,
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
	return Z_Registration_Info_UClass_UOVRLipSyncActorComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UOVRLipSyncActorComponent_NoRegister()
{
	return UOVRLipSyncActorComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOVRLipSyncActorComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "OVRLipSyncLiveActorComponent.h" },
		{ "ModuleRelativePath", "Public/OVRLipSyncLiveActorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultDeviceName_MetaData[] = {
		{ "Category", "LipSync" },
		{ "ModuleRelativePath", "Public/OVRLipSyncLiveActorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleRate_MetaData[] = {
		{ "Category", "LipSync" },
		{ "ModuleRelativePath", "Public/OVRLipSyncLiveActorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BufferSize_MetaData[] = {
		{ "Category", "LipSync" },
		{ "ModuleRelativePath", "Public/OVRLipSyncLiveActorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProviderKind_MetaData[] = {
		{ "Category", "LipSync" },
		{ "ModuleRelativePath", "Public/OVRLipSyncLiveActorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableHardwareAcceleration_MetaData[] = {
		{ "Category", "LipSync" },
		{ "ModuleRelativePath", "Public/OVRLipSyncLiveActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable hardware acceleration on supported platforms" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UOVRLipSyncActorComponent constinit property declarations ****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultDeviceName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SampleRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BufferSize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ProviderKind_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ProviderKind;
	static void NewProp_EnableHardwareAcceleration_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableHardwareAcceleration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UOVRLipSyncActorComponent constinit property declarations ******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("FeedAudio"), .Pointer = &UOVRLipSyncActorComponent::execFeedAudio },
		{ .NameUTF8 = UTF8TEXT("OnVoiceCaptureTimer"), .Pointer = &UOVRLipSyncActorComponent::execOnVoiceCaptureTimer },
		{ .NameUTF8 = UTF8TEXT("PermissionCallback"), .Pointer = &UOVRLipSyncActorComponent::execPermissionCallback },
		{ .NameUTF8 = UTF8TEXT("Start"), .Pointer = &UOVRLipSyncActorComponent::execStart },
		{ .NameUTF8 = UTF8TEXT("Stop"), .Pointer = &UOVRLipSyncActorComponent::execStop },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOVRLipSyncActorComponent_FeedAudio, "FeedAudio" }, // 643110876
		{ &Z_Construct_UFunction_UOVRLipSyncActorComponent_OnVoiceCaptureTimer, "OnVoiceCaptureTimer" }, // 4106142735
		{ &Z_Construct_UFunction_UOVRLipSyncActorComponent_PermissionCallback, "PermissionCallback" }, // 3453824720
		{ &Z_Construct_UFunction_UOVRLipSyncActorComponent_Start, "Start" }, // 3517421954
		{ &Z_Construct_UFunction_UOVRLipSyncActorComponent_Stop, "Stop" }, // 2647689481
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOVRLipSyncActorComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UOVRLipSyncActorComponent_Statics

// ********** Begin Class UOVRLipSyncActorComponent Property Definitions ***************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::NewProp_DefaultDeviceName = { "DefaultDeviceName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOVRLipSyncActorComponent, DefaultDeviceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultDeviceName_MetaData), NewProp_DefaultDeviceName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOVRLipSyncActorComponent, SampleRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleRate_MetaData), NewProp_SampleRate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::NewProp_BufferSize = { "BufferSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOVRLipSyncActorComponent, BufferSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BufferSize_MetaData), NewProp_BufferSize_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::NewProp_ProviderKind_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::NewProp_ProviderKind = { "ProviderKind", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOVRLipSyncActorComponent, ProviderKind), Z_Construct_UEnum_OVRLipSync_OVRLipSyncProviderKind, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProviderKind_MetaData), NewProp_ProviderKind_MetaData) }; // 516832318
void Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::NewProp_EnableHardwareAcceleration_SetBit(void* Obj)
{
	((UOVRLipSyncActorComponent*)Obj)->EnableHardwareAcceleration = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::NewProp_EnableHardwareAcceleration = { "EnableHardwareAcceleration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOVRLipSyncActorComponent), &Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::NewProp_EnableHardwareAcceleration_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableHardwareAcceleration_MetaData), NewProp_EnableHardwareAcceleration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::NewProp_DefaultDeviceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::NewProp_SampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::NewProp_BufferSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::NewProp_ProviderKind_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::NewProp_ProviderKind,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::NewProp_EnableHardwareAcceleration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::PropPointers) < 2048);
// ********** End Class UOVRLipSyncActorComponent Property Definitions *****************************
UObject* (*const Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOVRLipSyncActorComponentBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OVRLipSync,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::ClassParams = {
	&UOVRLipSyncActorComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::Class_MetaDataParams)
};
void UOVRLipSyncActorComponent::StaticRegisterNativesUOVRLipSyncActorComponent()
{
	UClass* Class = UOVRLipSyncActorComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_UOVRLipSyncActorComponent()
{
	if (!Z_Registration_Info_UClass_UOVRLipSyncActorComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOVRLipSyncActorComponent.OuterSingleton, Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOVRLipSyncActorComponent.OuterSingleton;
}
UOVRLipSyncActorComponent::UOVRLipSyncActorComponent() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOVRLipSyncActorComponent);
UOVRLipSyncActorComponent::~UOVRLipSyncActorComponent() {}
// ********** End Class UOVRLipSyncActorComponent **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncLiveActorComponent_h__Script_OVRLipSync_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ OVRLipSyncProviderKind_StaticEnum, TEXT("OVRLipSyncProviderKind"), &Z_Registration_Info_UEnum_OVRLipSyncProviderKind, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 516832318U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOVRLipSyncActorComponent, UOVRLipSyncActorComponent::StaticClass, TEXT("UOVRLipSyncActorComponent"), &Z_Registration_Info_UClass_UOVRLipSyncActorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOVRLipSyncActorComponent), 1306560618U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncLiveActorComponent_h__Script_OVRLipSync_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncLiveActorComponent_h__Script_OVRLipSync_4124962653{
	TEXT("/Script/OVRLipSync"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncLiveActorComponent_h__Script_OVRLipSync_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncLiveActorComponent_h__Script_OVRLipSync_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncLiveActorComponent_h__Script_OVRLipSync_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncLiveActorComponent_h__Script_OVRLipSync_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
