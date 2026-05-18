// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReplayStructs.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeReplayStructs() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EViewTargetBlendFunction();
REPLAYSYSTEM_API UClass* Z_Construct_UClass_UReplayDataObject_NoRegister();
REPLAYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FBlendSettings();
REPLAYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FReplayBoolData();
REPLAYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FReplayByteData();
REPLAYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FReplayEvent();
REPLAYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FReplayFloatData();
REPLAYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FReplayInfo();
REPLAYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FReplayInt64Data();
REPLAYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FReplayIntData();
REPLAYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FReplayNameData();
REPLAYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FReplayObjectData();
REPLAYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FReplayRotatorData();
REPLAYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FReplayStringData();
REPLAYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FReplayTextData();
REPLAYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FReplayTransformData();
REPLAYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FReplayVectorData();
UPackage* Z_Construct_UPackage__Script_ReplaySystem();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FReplayInfo *******************************************************
struct Z_Construct_UScriptStruct_FReplayInfo_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FReplayInfo); }
	static inline consteval int16 GetStructAlignment() { return alignof(FReplayInfo); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ReplayStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FriendlyName_MetaData[] = {
		{ "Category", "Replay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The UI name of the replay\n" },
#endif
		{ "ModuleRelativePath", "Public/ReplayStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The UI name of the replay" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActualName_MetaData[] = {
		{ "Category", "Replay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The actual name of the replay on disk\n" },
#endif
		{ "ModuleRelativePath", "Public/ReplayStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The actual name of the replay on disk" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecordDate_MetaData[] = {
		{ "Category", "Replay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The date the replay was recorded\n" },
#endif
		{ "ModuleRelativePath", "Public/ReplayStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The date the replay was recorded" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LengthInMS_MetaData[] = {
		{ "Category", "Replay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The length of the replay in milliseconds\n" },
#endif
		{ "ModuleRelativePath", "Public/ReplayStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The length of the replay in milliseconds" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeInMb_MetaData[] = {
		{ "Category", "Replay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The size of the replay in Mb\n" },
#endif
		{ "ModuleRelativePath", "Public/ReplayStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The size of the replay in Mb" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FReplayInfo constinit property declarations ***********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FriendlyName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ActualName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RecordDate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LengthInMS;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SizeInMb;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FReplayInfo constinit property declarations *************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReplayInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FReplayInfo_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FReplayInfo;
class UScriptStruct* FReplayInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FReplayInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FReplayInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FReplayInfo, (UObject*)Z_Construct_UPackage__Script_ReplaySystem(), TEXT("ReplayInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FReplayInfo.OuterSingleton;
	}

// ********** Begin ScriptStruct FReplayInfo Property Definitions **********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FReplayInfo_Statics::NewProp_FriendlyName = { "FriendlyName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReplayInfo, FriendlyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FriendlyName_MetaData), NewProp_FriendlyName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FReplayInfo_Statics::NewProp_ActualName = { "ActualName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReplayInfo, ActualName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActualName_MetaData), NewProp_ActualName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReplayInfo_Statics::NewProp_RecordDate = { "RecordDate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReplayInfo, RecordDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecordDate_MetaData), NewProp_RecordDate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FReplayInfo_Statics::NewProp_LengthInMS = { "LengthInMS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReplayInfo, LengthInMS), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LengthInMS_MetaData), NewProp_LengthInMS_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FReplayInfo_Statics::NewProp_SizeInMb = { "SizeInMb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReplayInfo, SizeInMb), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeInMb_MetaData), NewProp_SizeInMb_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReplayInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplayInfo_Statics::NewProp_FriendlyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplayInfo_Statics::NewProp_ActualName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplayInfo_Statics::NewProp_RecordDate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplayInfo_Statics::NewProp_LengthInMS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplayInfo_Statics::NewProp_SizeInMb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplayInfo_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FReplayInfo Property Definitions ************************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReplayInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ReplaySystem,
	nullptr,
	&NewStructOps,
	"ReplayInfo",
	Z_Construct_UScriptStruct_FReplayInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplayInfo_Statics::PropPointers),
	sizeof(FReplayInfo),
	alignof(FReplayInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplayInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FReplayInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FReplayInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FReplayInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FReplayInfo.InnerSingleton, Z_Construct_UScriptStruct_FReplayInfo_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FReplayInfo.InnerSingleton);
}
// ********** End ScriptStruct FReplayInfo *********************************************************

// ********** Begin ScriptStruct FBlendSettings ****************************************************
struct Z_Construct_UScriptStruct_FBlendSettings_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FBlendSettings); }
	static inline consteval int16 GetStructAlignment() { return alignof(FBlendSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ReplayStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendTime_MetaData[] = {
		{ "Category", "Replay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The time taken to blend\n" },
#endif
		{ "ModuleRelativePath", "Public/ReplayStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The time taken to blend" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendFunction_MetaData[] = {
		{ "Category", "Replay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Cubic, Linear etc functions for blending\n" },
#endif
		{ "ModuleRelativePath", "Public/ReplayStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cubic, Linear etc functions for blending" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendExponent_MetaData[] = {
		{ "Category", "Replay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///Exponent used by certain blend functions to control the blend\n" },
#endif
		{ "ModuleRelativePath", "Public/ReplayStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Exponent used by certain blend functions to control the blend" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLockOutgoing_MetaData[] = {
		{ "Category", "Replay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//If true, lock outgoing view target to last frame's camera position for the remainder of the blend\n" },
#endif
		{ "ModuleRelativePath", "Public/ReplayStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, lock outgoing view target to last frame's camera position for the remainder of the blend" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FBlendSettings constinit property declarations ********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlendFunction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendExponent;
	static void NewProp_bLockOutgoing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockOutgoing;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FBlendSettings constinit property declarations **********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlendSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FBlendSettings_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FBlendSettings;
class UScriptStruct* FBlendSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FBlendSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FBlendSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlendSettings, (UObject*)Z_Construct_UPackage__Script_ReplaySystem(), TEXT("BlendSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FBlendSettings.OuterSingleton;
	}

// ********** Begin ScriptStruct FBlendSettings Property Definitions *******************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBlendSettings_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlendSettings, BlendTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendTime_MetaData), NewProp_BlendTime_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBlendSettings_Statics::NewProp_BlendFunction = { "BlendFunction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlendSettings, BlendFunction), Z_Construct_UEnum_Engine_EViewTargetBlendFunction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendFunction_MetaData), NewProp_BlendFunction_MetaData) }; // 3669781295
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBlendSettings_Statics::NewProp_BlendExponent = { "BlendExponent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlendSettings, BlendExponent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendExponent_MetaData), NewProp_BlendExponent_MetaData) };
void Z_Construct_UScriptStruct_FBlendSettings_Statics::NewProp_bLockOutgoing_SetBit(void* Obj)
{
	((FBlendSettings*)Obj)->bLockOutgoing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBlendSettings_Statics::NewProp_bLockOutgoing = { "bLockOutgoing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBlendSettings), &Z_Construct_UScriptStruct_FBlendSettings_Statics::NewProp_bLockOutgoing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLockOutgoing_MetaData), NewProp_bLockOutgoing_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlendSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendSettings_Statics::NewProp_BlendTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendSettings_Statics::NewProp_BlendFunction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendSettings_Statics::NewProp_BlendExponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendSettings_Statics::NewProp_bLockOutgoing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSettings_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FBlendSettings Property Definitions *********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlendSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ReplaySystem,
	nullptr,
	&NewStructOps,
	"BlendSettings",
	Z_Construct_UScriptStruct_FBlendSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSettings_Statics::PropPointers),
	sizeof(FBlendSettings),
	alignof(FBlendSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBlendSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBlendSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FBlendSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FBlendSettings.InnerSingleton, Z_Construct_UScriptStruct_FBlendSettings_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FBlendSettings.InnerSingleton);
}
// ********** End ScriptStruct FBlendSettings ******************************************************

// ********** Begin ScriptStruct FReplayEvent ******************************************************
struct Z_Construct_UScriptStruct_FReplayEvent_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FReplayEvent); }
	static inline consteval int16 GetStructAlignment() { return alignof(FReplayEvent); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ReplayStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventID_MetaData[] = {
		{ "Category", "Replay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The Event ID\n" },
#endif
		{ "ModuleRelativePath", "Public/ReplayStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Event ID" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[] = {
		{ "Category", "Replay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The group this event belongs to \n" },
#endif
		{ "ModuleRelativePath", "Public/ReplayStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The group this event belongs to" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeInMs_MetaData[] = {
		{ "Category", "Replay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The time the event was added at in milliseconds\n" },
#endif
		{ "ModuleRelativePath", "Public/ReplayStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The time the event was added at in milliseconds" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Category", "Replay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The event data\n" },
#endif
		{ "ModuleRelativePath", "Public/ReplayStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The event data" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FReplayEvent constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_EventID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Group;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TimeInMs;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FReplayEvent constinit property declarations ************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReplayEvent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FReplayEvent_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FReplayEvent;
class UScriptStruct* FReplayEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FReplayEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FReplayEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FReplayEvent, (UObject*)Z_Construct_UPackage__Script_ReplaySystem(), TEXT("ReplayEvent"));
	}
	return Z_Registration_Info_UScriptStruct_FReplayEvent.OuterSingleton;
	}

// ********** Begin ScriptStruct FReplayEvent Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FReplayEvent_Statics::NewProp_EventID = { "EventID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReplayEvent, EventID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventID_MetaData), NewProp_EventID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FReplayEvent_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReplayEvent, Group), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Group_MetaData), NewProp_Group_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FReplayEvent_Statics::NewProp_TimeInMs = { "TimeInMs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReplayEvent, TimeInMs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeInMs_MetaData), NewProp_TimeInMs_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FReplayEvent_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReplayEvent, Data), Z_Construct_UClass_UReplayDataObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReplayEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplayEvent_Statics::NewProp_EventID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplayEvent_Statics::NewProp_Group,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplayEvent_Statics::NewProp_TimeInMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplayEvent_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplayEvent_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FReplayEvent Property Definitions ***********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReplayEvent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ReplaySystem,
	nullptr,
	&NewStructOps,
	"ReplayEvent",
	Z_Construct_UScriptStruct_FReplayEvent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplayEvent_Statics::PropPointers),
	sizeof(FReplayEvent),
	alignof(FReplayEvent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplayEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FReplayEvent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FReplayEvent()
{
	if (!Z_Registration_Info_UScriptStruct_FReplayEvent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FReplayEvent.InnerSingleton, Z_Construct_UScriptStruct_FReplayEvent_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FReplayEvent.InnerSingleton);
}
// ********** End ScriptStruct FReplayEvent ********************************************************

// ********** Begin ScriptStruct FReplayBoolData ***************************************************
struct Z_Construct_UScriptStruct_FReplayBoolData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FReplayBoolData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FReplayBoolData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ReplayStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Public/ReplayStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Public/ReplayStructs.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FReplayBoolData constinit property declarations *******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FReplayBoolData constinit property declarations *********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReplayBoolData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FReplayBoolData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FReplayBoolData;
class UScriptStruct* FReplayBoolData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FReplayBoolData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FReplayBoolData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FReplayBoolData, (UObject*)Z_Construct_UPackage__Script_ReplaySystem(), TEXT("ReplayBoolData"));
	}
	return Z_Registration_Info_UScriptStruct_FReplayBoolData.OuterSingleton;
	}

// ********** Begin ScriptStruct FReplayBoolData Property Definitions ******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FReplayBoolData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReplayBoolData, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
void Z_Construct_UScriptStruct_FReplayBoolData_Statics::NewProp_Value_SetBit(void* Obj)
{
	((FReplayBoolData*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FReplayBoolData_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FReplayBoolData), &Z_Construct_UScriptStruct_FReplayBoolData_Statics::NewProp_Value_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReplayBoolData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplayBoolData_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplayBoolData_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplayBoolData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FReplayBoolData Property Definitions ********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReplayBoolData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ReplaySystem,
	nullptr,
	&NewStructOps,
	"ReplayBoolData",
	Z_Construct_UScriptStruct_FReplayBoolData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplayBoolData_Statics::PropPointers),
	sizeof(FReplayBoolData),
	alignof(FReplayBoolData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplayBoolData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FReplayBoolData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FReplayBoolData()
{
	if (!Z_Registration_Info_UScriptStruct_FReplayBoolData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FReplayBoolData.InnerSingleton, Z_Construct_UScriptStruct_FReplayBoolData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FReplayBoolData.InnerSingleton);
}
// ********** End ScriptStruct FReplayBoolData *****************************************************

// ********** Begin ScriptStruct FReplayByteData ***************************************************
struct Z_Construct_UScriptStruct_FReplayByteData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FReplayByteData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FReplayByteData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ReplayStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Public/ReplayStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Public/ReplayStructs.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FReplayByteData constinit property declarations *******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Value_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FReplayByteData constinit property declarations *********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReplayByteData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FReplayByteData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FReplayByteData;
class UScriptStruct* FReplayByteData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FReplayByteData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FReplayByteData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FReplayByteData, (UObject*)Z_Construct_UPackage__Script_ReplaySystem(), TEXT("ReplayByteData"));
	}
	return Z_Registration_Info_UScriptStruct_FReplayByteData.OuterSingleton;
	}

// ********** Begin ScriptStruct FReplayByteData Property Definitions ******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FReplayByteData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReplayByteData, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FReplayByteData_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FReplayByteData_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReplayByteData, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReplayByteData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplayByteData_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplayByteData_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplayByteData_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplayByteData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FReplayByteData Property Definitions ********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReplayByteData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ReplaySystem,
	nullptr,
	&NewStructOps,
	"ReplayByteData",
	Z_Construct_UScriptStruct_FReplayByteData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplayByteData_Statics::PropPointers),
	sizeof(FReplayByteData),
	alignof(FReplayByteData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplayByteData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FReplayByteData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FReplayByteData()
{
	if (!Z_Registration_Info_UScriptStruct_FReplayByteData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FReplayByteData.InnerSingleton, Z_Construct_UScriptStruct_FReplayByteData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FReplayByteData.InnerSingleton);
}
// ********** End ScriptStruct FReplayByteData *****************************************************

// ********** Begin ScriptStruct FReplayIntData ****************************************************
struct Z_Construct_UScriptStruct_FReplayIntData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FReplayIntData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FReplayIntData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ReplayStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Public/ReplayStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Public/ReplayStructs.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FReplayIntData constinit property declarations ********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FReplayIntData constinit property declarations **********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReplayIntData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FReplayIntData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FReplayIntData;
class UScriptStruct* FReplayIntData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FReplayIntData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FReplayIntData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FReplayIntData, (UObject*)Z_Construct_UPackage__Script_ReplaySystem(), TEXT("ReplayIntData"));
	}
	return Z_Registration_Info_UScriptStruct_FReplayIntData.OuterSingleton;
	}

// ********** Begin ScriptStruct FReplayIntData Property Definitions *******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FReplayIntData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReplayIntData, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FReplayIntData_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReplayIntData, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReplayIntData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplayIntData_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplayIntData_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplayIntData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FReplayIntData Property Definitions *********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReplayIntData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ReplaySystem,
	nullptr,
	&NewStructOps,
	"ReplayIntData",
	Z_Construct_UScriptStruct_FReplayIntData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplayIntData_Statics::PropPointers),
	sizeof(FReplayIntData),
	alignof(FReplayIntData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplayIntData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FReplayIntData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FReplayIntData()
{
	if (!Z_Registration_Info_UScriptStruct_FReplayIntData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FReplayIntData.InnerSingleton, Z_Construct_UScriptStruct_FReplayIntData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FReplayIntData.InnerSingleton);
}
// ********** End ScriptStruct FReplayIntData ******************************************************

// ********** Begin ScriptStruct FReplayInt64Data **************************************************
struct Z_Construct_UScriptStruct_FReplayInt64Data_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FReplayInt64Data); }
	static inline consteval int16 GetStructAlignment() { return alignof(FReplayInt64Data); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ReplayStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Public/ReplayStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Public/ReplayStructs.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FReplayInt64Data constinit property declarations ******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FReplayInt64Data constinit property declarations ********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReplayInt64Data>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FReplayInt64Data_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FReplayInt64Data;
class UScriptStruct* FReplayInt64Data::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FReplayInt64Data.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FReplayInt64Data.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FReplayInt64Data, (UObject*)Z_Construct_UPackage__Script_ReplaySystem(), TEXT("ReplayInt64Data"));
	}
	return Z_Registration_Info_UScriptStruct_FReplayInt64Data.OuterSingleton;
	}

// ********** Begin ScriptStruct FReplayInt64Data Property Definitions *****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FReplayInt64Data_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReplayInt64Data, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FReplayInt64Data_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReplayInt64Data, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReplayInt64Data_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplayInt64Data_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplayInt64Data_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplayInt64Data_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FReplayInt64Data Property Definitions *******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReplayInt64Data_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ReplaySystem,
	nullptr,
	&NewStructOps,
	"ReplayInt64Data",
	Z_Construct_UScriptStruct_FReplayInt64Data_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplayInt64Data_Statics::PropPointers),
	sizeof(FReplayInt64Data),
	alignof(FReplayInt64Data),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplayInt64Data_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FReplayInt64Data_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FReplayInt64Data()
{
	if (!Z_Registration_Info_UScriptStruct_FReplayInt64Data.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FReplayInt64Data.InnerSingleton, Z_Construct_UScriptStruct_FReplayInt64Data_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FReplayInt64Data.InnerSingleton);
}
// ********** End ScriptStruct FReplayInt64Data ****************************************************

// ********** Begin ScriptStruct FReplayFloatData **************************************************
struct Z_Construct_UScriptStruct_FReplayFloatData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FReplayFloatData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FReplayFloatData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ReplayStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Public/ReplayStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Public/ReplayStructs.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FReplayFloatData constinit property declarations ******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FReplayFloatData constinit property declarations ********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReplayFloatData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FReplayFloatData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FReplayFloatData;
class UScriptStruct* FReplayFloatData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FReplayFloatData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FReplayFloatData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FReplayFloatData, (UObject*)Z_Construct_UPackage__Script_ReplaySystem(), TEXT("ReplayFloatData"));
	}
	return Z_Registration_Info_UScriptStruct_FReplayFloatData.OuterSingleton;
	}

// ********** Begin ScriptStruct FReplayFloatData Property Definitions *****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FReplayFloatData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReplayFloatData, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FReplayFloatData_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReplayFloatData, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReplayFloatData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplayFloatData_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplayFloatData_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplayFloatData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FReplayFloatData Property Definitions *******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReplayFloatData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ReplaySystem,
	nullptr,
	&NewStructOps,
	"ReplayFloatData",
	Z_Construct_UScriptStruct_FReplayFloatData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplayFloatData_Statics::PropPointers),
	sizeof(FReplayFloatData),
	alignof(FReplayFloatData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplayFloatData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FReplayFloatData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FReplayFloatData()
{
	if (!Z_Registration_Info_UScriptStruct_FReplayFloatData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FReplayFloatData.InnerSingleton, Z_Construct_UScriptStruct_FReplayFloatData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FReplayFloatData.InnerSingleton);
}
// ********** End ScriptStruct FReplayFloatData ****************************************************

// ********** Begin ScriptStruct FReplayNameData ***************************************************
struct Z_Construct_UScriptStruct_FReplayNameData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FReplayNameData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FReplayNameData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ReplayStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Public/ReplayStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Public/ReplayStructs.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FReplayNameData constinit property declarations *******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FReplayNameData constinit property declarations *********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReplayNameData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FReplayNameData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FReplayNameData;
class UScriptStruct* FReplayNameData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FReplayNameData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FReplayNameData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FReplayNameData, (UObject*)Z_Construct_UPackage__Script_ReplaySystem(), TEXT("ReplayNameData"));
	}
	return Z_Registration_Info_UScriptStruct_FReplayNameData.OuterSingleton;
	}

// ********** Begin ScriptStruct FReplayNameData Property Definitions ******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FReplayNameData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReplayNameData, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FReplayNameData_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReplayNameData, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReplayNameData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplayNameData_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplayNameData_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplayNameData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FReplayNameData Property Definitions ********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReplayNameData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ReplaySystem,
	nullptr,
	&NewStructOps,
	"ReplayNameData",
	Z_Construct_UScriptStruct_FReplayNameData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplayNameData_Statics::PropPointers),
	sizeof(FReplayNameData),
	alignof(FReplayNameData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplayNameData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FReplayNameData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FReplayNameData()
{
	if (!Z_Registration_Info_UScriptStruct_FReplayNameData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FReplayNameData.InnerSingleton, Z_Construct_UScriptStruct_FReplayNameData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FReplayNameData.InnerSingleton);
}
// ********** End ScriptStruct FReplayNameData *****************************************************

// ********** Begin ScriptStruct FReplayStringData *************************************************
struct Z_Construct_UScriptStruct_FReplayStringData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FReplayStringData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FReplayStringData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ReplayStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Public/ReplayStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Public/ReplayStructs.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FReplayStringData constinit property declarations *****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FReplayStringData constinit property declarations *******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReplayStringData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FReplayStringData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FReplayStringData;
class UScriptStruct* FReplayStringData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FReplayStringData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FReplayStringData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FReplayStringData, (UObject*)Z_Construct_UPackage__Script_ReplaySystem(), TEXT("ReplayStringData"));
	}
	return Z_Registration_Info_UScriptStruct_FReplayStringData.OuterSingleton;
	}

// ********** Begin ScriptStruct FReplayStringData Property Definitions ****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FReplayStringData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReplayStringData, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FReplayStringData_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReplayStringData, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReplayStringData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplayStringData_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplayStringData_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplayStringData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FReplayStringData Property Definitions ******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReplayStringData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ReplaySystem,
	nullptr,
	&NewStructOps,
	"ReplayStringData",
	Z_Construct_UScriptStruct_FReplayStringData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplayStringData_Statics::PropPointers),
	sizeof(FReplayStringData),
	alignof(FReplayStringData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplayStringData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FReplayStringData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FReplayStringData()
{
	if (!Z_Registration_Info_UScriptStruct_FReplayStringData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FReplayStringData.InnerSingleton, Z_Construct_UScriptStruct_FReplayStringData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FReplayStringData.InnerSingleton);
}
// ********** End ScriptStruct FReplayStringData ***************************************************

// ********** Begin ScriptStruct FReplayTextData ***************************************************
struct Z_Construct_UScriptStruct_FReplayTextData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FReplayTextData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FReplayTextData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ReplayStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Public/ReplayStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Public/ReplayStructs.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FReplayTextData constinit property declarations *******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FReplayTextData constinit property declarations *********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReplayTextData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FReplayTextData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FReplayTextData;
class UScriptStruct* FReplayTextData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FReplayTextData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FReplayTextData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FReplayTextData, (UObject*)Z_Construct_UPackage__Script_ReplaySystem(), TEXT("ReplayTextData"));
	}
	return Z_Registration_Info_UScriptStruct_FReplayTextData.OuterSingleton;
	}

// ********** Begin ScriptStruct FReplayTextData Property Definitions ******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FReplayTextData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReplayTextData, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FReplayTextData_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReplayTextData, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReplayTextData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplayTextData_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplayTextData_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplayTextData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FReplayTextData Property Definitions ********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReplayTextData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ReplaySystem,
	nullptr,
	&NewStructOps,
	"ReplayTextData",
	Z_Construct_UScriptStruct_FReplayTextData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplayTextData_Statics::PropPointers),
	sizeof(FReplayTextData),
	alignof(FReplayTextData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplayTextData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FReplayTextData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FReplayTextData()
{
	if (!Z_Registration_Info_UScriptStruct_FReplayTextData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FReplayTextData.InnerSingleton, Z_Construct_UScriptStruct_FReplayTextData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FReplayTextData.InnerSingleton);
}
// ********** End ScriptStruct FReplayTextData *****************************************************

// ********** Begin ScriptStruct FReplayVectorData *************************************************
struct Z_Construct_UScriptStruct_FReplayVectorData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FReplayVectorData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FReplayVectorData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ReplayStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Public/ReplayStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Public/ReplayStructs.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FReplayVectorData constinit property declarations *****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FReplayVectorData constinit property declarations *******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReplayVectorData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FReplayVectorData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FReplayVectorData;
class UScriptStruct* FReplayVectorData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FReplayVectorData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FReplayVectorData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FReplayVectorData, (UObject*)Z_Construct_UPackage__Script_ReplaySystem(), TEXT("ReplayVectorData"));
	}
	return Z_Registration_Info_UScriptStruct_FReplayVectorData.OuterSingleton;
	}

// ********** Begin ScriptStruct FReplayVectorData Property Definitions ****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FReplayVectorData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReplayVectorData, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReplayVectorData_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReplayVectorData, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReplayVectorData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplayVectorData_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplayVectorData_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplayVectorData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FReplayVectorData Property Definitions ******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReplayVectorData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ReplaySystem,
	nullptr,
	&NewStructOps,
	"ReplayVectorData",
	Z_Construct_UScriptStruct_FReplayVectorData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplayVectorData_Statics::PropPointers),
	sizeof(FReplayVectorData),
	alignof(FReplayVectorData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplayVectorData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FReplayVectorData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FReplayVectorData()
{
	if (!Z_Registration_Info_UScriptStruct_FReplayVectorData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FReplayVectorData.InnerSingleton, Z_Construct_UScriptStruct_FReplayVectorData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FReplayVectorData.InnerSingleton);
}
// ********** End ScriptStruct FReplayVectorData ***************************************************

// ********** Begin ScriptStruct FReplayRotatorData ************************************************
struct Z_Construct_UScriptStruct_FReplayRotatorData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FReplayRotatorData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FReplayRotatorData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ReplayStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Public/ReplayStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Public/ReplayStructs.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FReplayRotatorData constinit property declarations ****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FReplayRotatorData constinit property declarations ******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReplayRotatorData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FReplayRotatorData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FReplayRotatorData;
class UScriptStruct* FReplayRotatorData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FReplayRotatorData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FReplayRotatorData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FReplayRotatorData, (UObject*)Z_Construct_UPackage__Script_ReplaySystem(), TEXT("ReplayRotatorData"));
	}
	return Z_Registration_Info_UScriptStruct_FReplayRotatorData.OuterSingleton;
	}

// ********** Begin ScriptStruct FReplayRotatorData Property Definitions ***************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FReplayRotatorData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReplayRotatorData, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReplayRotatorData_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReplayRotatorData, Value), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReplayRotatorData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplayRotatorData_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplayRotatorData_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplayRotatorData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FReplayRotatorData Property Definitions *****************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReplayRotatorData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ReplaySystem,
	nullptr,
	&NewStructOps,
	"ReplayRotatorData",
	Z_Construct_UScriptStruct_FReplayRotatorData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplayRotatorData_Statics::PropPointers),
	sizeof(FReplayRotatorData),
	alignof(FReplayRotatorData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplayRotatorData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FReplayRotatorData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FReplayRotatorData()
{
	if (!Z_Registration_Info_UScriptStruct_FReplayRotatorData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FReplayRotatorData.InnerSingleton, Z_Construct_UScriptStruct_FReplayRotatorData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FReplayRotatorData.InnerSingleton);
}
// ********** End ScriptStruct FReplayRotatorData **************************************************

// ********** Begin ScriptStruct FReplayTransformData **********************************************
struct Z_Construct_UScriptStruct_FReplayTransformData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FReplayTransformData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FReplayTransformData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ReplayStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Public/ReplayStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Public/ReplayStructs.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FReplayTransformData constinit property declarations **************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FReplayTransformData constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReplayTransformData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FReplayTransformData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FReplayTransformData;
class UScriptStruct* FReplayTransformData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FReplayTransformData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FReplayTransformData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FReplayTransformData, (UObject*)Z_Construct_UPackage__Script_ReplaySystem(), TEXT("ReplayTransformData"));
	}
	return Z_Registration_Info_UScriptStruct_FReplayTransformData.OuterSingleton;
	}

// ********** Begin ScriptStruct FReplayTransformData Property Definitions *************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FReplayTransformData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReplayTransformData, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReplayTransformData_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReplayTransformData, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReplayTransformData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplayTransformData_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplayTransformData_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplayTransformData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FReplayTransformData Property Definitions ***************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReplayTransformData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ReplaySystem,
	nullptr,
	&NewStructOps,
	"ReplayTransformData",
	Z_Construct_UScriptStruct_FReplayTransformData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplayTransformData_Statics::PropPointers),
	sizeof(FReplayTransformData),
	alignof(FReplayTransformData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplayTransformData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FReplayTransformData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FReplayTransformData()
{
	if (!Z_Registration_Info_UScriptStruct_FReplayTransformData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FReplayTransformData.InnerSingleton, Z_Construct_UScriptStruct_FReplayTransformData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FReplayTransformData.InnerSingleton);
}
// ********** End ScriptStruct FReplayTransformData ************************************************

// ********** Begin ScriptStruct FReplayObjectData *************************************************
struct Z_Construct_UScriptStruct_FReplayObjectData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FReplayObjectData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FReplayObjectData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ReplayStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Public/ReplayStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Public/ReplayStructs.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FReplayObjectData constinit property declarations *****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FReplayObjectData constinit property declarations *******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReplayObjectData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FReplayObjectData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FReplayObjectData;
class UScriptStruct* FReplayObjectData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FReplayObjectData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FReplayObjectData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FReplayObjectData, (UObject*)Z_Construct_UPackage__Script_ReplaySystem(), TEXT("ReplayObjectData"));
	}
	return Z_Registration_Info_UScriptStruct_FReplayObjectData.OuterSingleton;
	}

// ********** Begin ScriptStruct FReplayObjectData Property Definitions ****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FReplayObjectData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReplayObjectData, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FReplayObjectData_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReplayObjectData, Value), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReplayObjectData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplayObjectData_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplayObjectData_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplayObjectData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FReplayObjectData Property Definitions ******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReplayObjectData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ReplaySystem,
	nullptr,
	&NewStructOps,
	"ReplayObjectData",
	Z_Construct_UScriptStruct_FReplayObjectData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplayObjectData_Statics::PropPointers),
	sizeof(FReplayObjectData),
	alignof(FReplayObjectData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplayObjectData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FReplayObjectData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FReplayObjectData()
{
	if (!Z_Registration_Info_UScriptStruct_FReplayObjectData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FReplayObjectData.InnerSingleton, Z_Construct_UScriptStruct_FReplayObjectData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FReplayObjectData.InnerSingleton);
}
// ********** End ScriptStruct FReplayObjectData ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplayStructs_h__Script_ReplaySystem_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FReplayInfo::StaticStruct, Z_Construct_UScriptStruct_FReplayInfo_Statics::NewStructOps, TEXT("ReplayInfo"),&Z_Registration_Info_UScriptStruct_FReplayInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FReplayInfo), 2733030706U) },
		{ FBlendSettings::StaticStruct, Z_Construct_UScriptStruct_FBlendSettings_Statics::NewStructOps, TEXT("BlendSettings"),&Z_Registration_Info_UScriptStruct_FBlendSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlendSettings), 3342006139U) },
		{ FReplayEvent::StaticStruct, Z_Construct_UScriptStruct_FReplayEvent_Statics::NewStructOps, TEXT("ReplayEvent"),&Z_Registration_Info_UScriptStruct_FReplayEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FReplayEvent), 3931045147U) },
		{ FReplayBoolData::StaticStruct, Z_Construct_UScriptStruct_FReplayBoolData_Statics::NewStructOps, TEXT("ReplayBoolData"),&Z_Registration_Info_UScriptStruct_FReplayBoolData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FReplayBoolData), 1880373492U) },
		{ FReplayByteData::StaticStruct, Z_Construct_UScriptStruct_FReplayByteData_Statics::NewStructOps, TEXT("ReplayByteData"),&Z_Registration_Info_UScriptStruct_FReplayByteData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FReplayByteData), 2926748907U) },
		{ FReplayIntData::StaticStruct, Z_Construct_UScriptStruct_FReplayIntData_Statics::NewStructOps, TEXT("ReplayIntData"),&Z_Registration_Info_UScriptStruct_FReplayIntData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FReplayIntData), 2356580046U) },
		{ FReplayInt64Data::StaticStruct, Z_Construct_UScriptStruct_FReplayInt64Data_Statics::NewStructOps, TEXT("ReplayInt64Data"),&Z_Registration_Info_UScriptStruct_FReplayInt64Data, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FReplayInt64Data), 2323279171U) },
		{ FReplayFloatData::StaticStruct, Z_Construct_UScriptStruct_FReplayFloatData_Statics::NewStructOps, TEXT("ReplayFloatData"),&Z_Registration_Info_UScriptStruct_FReplayFloatData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FReplayFloatData), 913037023U) },
		{ FReplayNameData::StaticStruct, Z_Construct_UScriptStruct_FReplayNameData_Statics::NewStructOps, TEXT("ReplayNameData"),&Z_Registration_Info_UScriptStruct_FReplayNameData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FReplayNameData), 3038587291U) },
		{ FReplayStringData::StaticStruct, Z_Construct_UScriptStruct_FReplayStringData_Statics::NewStructOps, TEXT("ReplayStringData"),&Z_Registration_Info_UScriptStruct_FReplayStringData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FReplayStringData), 1389081264U) },
		{ FReplayTextData::StaticStruct, Z_Construct_UScriptStruct_FReplayTextData_Statics::NewStructOps, TEXT("ReplayTextData"),&Z_Registration_Info_UScriptStruct_FReplayTextData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FReplayTextData), 709442466U) },
		{ FReplayVectorData::StaticStruct, Z_Construct_UScriptStruct_FReplayVectorData_Statics::NewStructOps, TEXT("ReplayVectorData"),&Z_Registration_Info_UScriptStruct_FReplayVectorData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FReplayVectorData), 890187188U) },
		{ FReplayRotatorData::StaticStruct, Z_Construct_UScriptStruct_FReplayRotatorData_Statics::NewStructOps, TEXT("ReplayRotatorData"),&Z_Registration_Info_UScriptStruct_FReplayRotatorData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FReplayRotatorData), 485414686U) },
		{ FReplayTransformData::StaticStruct, Z_Construct_UScriptStruct_FReplayTransformData_Statics::NewStructOps, TEXT("ReplayTransformData"),&Z_Registration_Info_UScriptStruct_FReplayTransformData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FReplayTransformData), 3311700228U) },
		{ FReplayObjectData::StaticStruct, Z_Construct_UScriptStruct_FReplayObjectData_Statics::NewStructOps, TEXT("ReplayObjectData"),&Z_Registration_Info_UScriptStruct_FReplayObjectData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FReplayObjectData), 108414102U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplayStructs_h__Script_ReplaySystem_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplayStructs_h__Script_ReplaySystem_3205726883{
	TEXT("/Script/ReplaySystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplayStructs_h__Script_ReplaySystem_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplayStructs_h__Script_ReplaySystem_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
