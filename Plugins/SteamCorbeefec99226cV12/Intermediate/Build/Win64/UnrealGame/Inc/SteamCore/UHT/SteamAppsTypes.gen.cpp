// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamApps/SteamAppsTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSteamAppsTypes() {}

// ********** Begin Cross Module References ********************************************************
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamResult();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnDLCInstalled__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFileDetailsResult__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFileDetailsResultDelegate__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnNewUrlLaunchParametersDelegate__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnTimedTrialStatusDelegate__DelegateSignature();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDLCInstalled();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFileDetailsResult();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FTimedTrialStatus();
UPackage* Z_Construct_UPackage__Script_SteamCore();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FTimedTrialStatus *************************************************
struct Z_Construct_UScriptStruct_FTimedTrialStatus_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FTimedTrialStatus); }
	static inline consteval int16 GetStructAlignment() { return alignof(FTimedTrialStatus); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Structs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamAppsTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Structs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "Category", "Apps" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamAppsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsOffline_MetaData[] = {
		{ "Category", "Apps" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamAppsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondsAllowed_MetaData[] = {
		{ "Category", "Apps" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamAppsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondsPlayed_MetaData[] = {
		{ "Category", "Apps" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamAppsTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FTimedTrialStatus constinit property declarations *****************
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static void NewProp_bIsOffline_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOffline;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SecondsAllowed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SecondsPlayed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FTimedTrialStatus constinit property declarations *******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimedTrialStatus>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FTimedTrialStatus_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTimedTrialStatus;
class UScriptStruct* FTimedTrialStatus::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FTimedTrialStatus.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FTimedTrialStatus.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimedTrialStatus, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("TimedTrialStatus"));
	}
	return Z_Registration_Info_UScriptStruct_FTimedTrialStatus.OuterSingleton;
	}

// ********** Begin ScriptStruct FTimedTrialStatus Property Definitions ****************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTimedTrialStatus_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTimedTrialStatus, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
void Z_Construct_UScriptStruct_FTimedTrialStatus_Statics::NewProp_bIsOffline_SetBit(void* Obj)
{
	((FTimedTrialStatus*)Obj)->bIsOffline = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTimedTrialStatus_Statics::NewProp_bIsOffline = { "bIsOffline", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTimedTrialStatus), &Z_Construct_UScriptStruct_FTimedTrialStatus_Statics::NewProp_bIsOffline_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsOffline_MetaData), NewProp_bIsOffline_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTimedTrialStatus_Statics::NewProp_SecondsAllowed = { "SecondsAllowed", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTimedTrialStatus, SecondsAllowed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondsAllowed_MetaData), NewProp_SecondsAllowed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTimedTrialStatus_Statics::NewProp_SecondsPlayed = { "SecondsPlayed", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTimedTrialStatus, SecondsPlayed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondsPlayed_MetaData), NewProp_SecondsPlayed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTimedTrialStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimedTrialStatus_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimedTrialStatus_Statics::NewProp_bIsOffline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimedTrialStatus_Statics::NewProp_SecondsAllowed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimedTrialStatus_Statics::NewProp_SecondsPlayed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedTrialStatus_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FTimedTrialStatus Property Definitions ******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTimedTrialStatus_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"TimedTrialStatus",
	Z_Construct_UScriptStruct_FTimedTrialStatus_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedTrialStatus_Statics::PropPointers),
	sizeof(FTimedTrialStatus),
	alignof(FTimedTrialStatus),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedTrialStatus_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTimedTrialStatus_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTimedTrialStatus()
{
	if (!Z_Registration_Info_UScriptStruct_FTimedTrialStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTimedTrialStatus.InnerSingleton, Z_Construct_UScriptStruct_FTimedTrialStatus_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FTimedTrialStatus.InnerSingleton);
}
// ********** End ScriptStruct FTimedTrialStatus ***************************************************

// ********** Begin ScriptStruct FFileDetailsResult ************************************************
struct Z_Construct_UScriptStruct_FFileDetailsResult_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FFileDetailsResult); }
	static inline consteval int16 GetStructAlignment() { return alignof(FFileDetailsResult); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamAppsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Apps" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamAppsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileSize_MetaData[] = {
		{ "Category", "Apps" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamAppsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SHA_MetaData[] = {
		{ "Category", "Apps" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamAppsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[] = {
		{ "Category", "Apps" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamAppsTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FFileDetailsResult constinit property declarations ****************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FileSize;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SHA;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Flags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Flags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FFileDetailsResult constinit property declarations ******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFileDetailsResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FFileDetailsResult_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFileDetailsResult;
class UScriptStruct* FFileDetailsResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FFileDetailsResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FFileDetailsResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFileDetailsResult, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("FileDetailsResult"));
	}
	return Z_Registration_Info_UScriptStruct_FFileDetailsResult.OuterSingleton;
	}

// ********** Begin ScriptStruct FFileDetailsResult Property Definitions ***************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFileDetailsResult_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFileDetailsResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFileDetailsResult, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 1466539257
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFileDetailsResult_Statics::NewProp_FileSize = { "FileSize", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFileDetailsResult, FileSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileSize_MetaData), NewProp_FileSize_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFileDetailsResult_Statics::NewProp_SHA = { "SHA", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFileDetailsResult, SHA), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SHA_MetaData), NewProp_SHA_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFileDetailsResult_Statics::NewProp_Flags_Inner = { "Flags", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFileDetailsResult_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFileDetailsResult, Flags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Flags_MetaData), NewProp_Flags_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFileDetailsResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileDetailsResult_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileDetailsResult_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileDetailsResult_Statics::NewProp_FileSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileDetailsResult_Statics::NewProp_SHA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileDetailsResult_Statics::NewProp_Flags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileDetailsResult_Statics::NewProp_Flags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFileDetailsResult_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FFileDetailsResult Property Definitions *****************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFileDetailsResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"FileDetailsResult",
	Z_Construct_UScriptStruct_FFileDetailsResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFileDetailsResult_Statics::PropPointers),
	sizeof(FFileDetailsResult),
	alignof(FFileDetailsResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFileDetailsResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFileDetailsResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFileDetailsResult()
{
	if (!Z_Registration_Info_UScriptStruct_FFileDetailsResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFileDetailsResult.InnerSingleton, Z_Construct_UScriptStruct_FFileDetailsResult_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FFileDetailsResult.InnerSingleton);
}
// ********** End ScriptStruct FFileDetailsResult **************************************************

// ********** Begin ScriptStruct FDLCInstalled *****************************************************
struct Z_Construct_UScriptStruct_FDLCInstalled_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FDLCInstalled); }
	static inline consteval int16 GetStructAlignment() { return alignof(FDLCInstalled); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamAppsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppID_MetaData[] = {
		{ "Category", "Apps" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamAppsTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FDLCInstalled constinit property declarations *********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FDLCInstalled constinit property declarations ***********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDLCInstalled>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FDLCInstalled_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDLCInstalled;
class UScriptStruct* FDLCInstalled::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FDLCInstalled.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FDLCInstalled.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDLCInstalled, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("DLCInstalled"));
	}
	return Z_Registration_Info_UScriptStruct_FDLCInstalled.OuterSingleton;
	}

// ********** Begin ScriptStruct FDLCInstalled Property Definitions ********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDLCInstalled_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDLCInstalled, AppID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppID_MetaData), NewProp_AppID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDLCInstalled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDLCInstalled_Statics::NewProp_AppID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDLCInstalled_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FDLCInstalled Property Definitions **********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDLCInstalled_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"DLCInstalled",
	Z_Construct_UScriptStruct_FDLCInstalled_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDLCInstalled_Statics::PropPointers),
	sizeof(FDLCInstalled),
	alignof(FDLCInstalled),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDLCInstalled_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDLCInstalled_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDLCInstalled()
{
	if (!Z_Registration_Info_UScriptStruct_FDLCInstalled.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDLCInstalled.InnerSingleton, Z_Construct_UScriptStruct_FDLCInstalled_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FDLCInstalled.InnerSingleton);
}
// ********** End ScriptStruct FDLCInstalled *******************************************************

// ********** Begin Delegate FOnFileDetailsResult **************************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnFileDetailsResult__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnFileDetailsResult_Parms
	{
		FFileDetailsResult Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamAppsTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnFileDetailsResult constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnFileDetailsResult constinit property declarations ********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnFileDetailsResult Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnFileDetailsResult__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnFileDetailsResult_Parms, Data), Z_Construct_UScriptStruct_FFileDetailsResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2722116320
void Z_Construct_UDelegateFunction_SteamCore_OnFileDetailsResult__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCore_eventOnFileDetailsResult_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnFileDetailsResult__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnFileDetailsResult_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnFileDetailsResult__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnFileDetailsResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnFileDetailsResult__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnFileDetailsResult__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFileDetailsResult__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnFileDetailsResult Property Definitions *******************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnFileDetailsResult__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnFileDetailsResult__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnFileDetailsResult__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFileDetailsResult__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnFileDetailsResult__DelegateSignature_Statics::_Script_SteamCore_eventOnFileDetailsResult_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00520000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFileDetailsResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnFileDetailsResult__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnFileDetailsResult__DelegateSignature_Statics::_Script_SteamCore_eventOnFileDetailsResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFileDetailsResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnFileDetailsResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFileDetailsResult_DelegateWrapper(const FScriptDelegate& OnFileDetailsResult, FFileDetailsResult const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventOnFileDetailsResult_Parms
	{
		FFileDetailsResult Data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventOnFileDetailsResult_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnFileDetailsResult.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnFileDetailsResult ****************************************************

// ********** Begin Delegate FOnDLCInstalled *******************************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnDLCInstalled__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnDLCInstalled_Parms
	{
		FDLCInstalled Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamApps/SteamAppsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnDLCInstalled constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnDLCInstalled constinit property declarations *************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnDLCInstalled Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnDLCInstalled__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnDLCInstalled_Parms, Data), Z_Construct_UScriptStruct_FDLCInstalled, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3623181815
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnDLCInstalled__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnDLCInstalled__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnDLCInstalled__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnDLCInstalled Property Definitions ************************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnDLCInstalled__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnDLCInstalled__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnDLCInstalled__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnDLCInstalled__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnDLCInstalled__DelegateSignature_Statics::_Script_SteamCore_eventOnDLCInstalled_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnDLCInstalled__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnDLCInstalled__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnDLCInstalled__DelegateSignature_Statics::_Script_SteamCore_eventOnDLCInstalled_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnDLCInstalled__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnDLCInstalled__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDLCInstalled_DelegateWrapper(const FMulticastScriptDelegate& OnDLCInstalled, FDLCInstalled const& Data)
{
	struct _Script_SteamCore_eventOnDLCInstalled_Parms
	{
		FDLCInstalled Data;
	};
	_Script_SteamCore_eventOnDLCInstalled_Parms Parms;
	Parms.Data=Data;
	OnDLCInstalled.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnDLCInstalled *********************************************************

// ********** Begin Delegate FOnFileDetailsResultDelegate ******************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnFileDetailsResultDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnFileDetailsResultDelegate_Parms
	{
		FFileDetailsResult Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamApps/SteamAppsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnFileDetailsResultDelegate constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnFileDetailsResultDelegate constinit property declarations ************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnFileDetailsResultDelegate Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnFileDetailsResultDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnFileDetailsResultDelegate_Parms, Data), Z_Construct_UScriptStruct_FFileDetailsResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2722116320
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnFileDetailsResultDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnFileDetailsResultDelegate__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFileDetailsResultDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnFileDetailsResultDelegate Property Definitions ***********************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnFileDetailsResultDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnFileDetailsResultDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnFileDetailsResultDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFileDetailsResultDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnFileDetailsResultDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnFileDetailsResultDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFileDetailsResultDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnFileDetailsResultDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnFileDetailsResultDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnFileDetailsResultDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFileDetailsResultDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnFileDetailsResultDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFileDetailsResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnFileDetailsResultDelegate, FFileDetailsResult const& Data)
{
	struct _Script_SteamCore_eventOnFileDetailsResultDelegate_Parms
	{
		FFileDetailsResult Data;
	};
	_Script_SteamCore_eventOnFileDetailsResultDelegate_Parms Parms;
	Parms.Data=Data;
	OnFileDetailsResultDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnFileDetailsResultDelegate ********************************************

// ********** Begin Delegate FOnNewUrlLaunchParametersDelegate *************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnNewUrlLaunchParametersDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamApps/SteamAppsTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnNewUrlLaunchParametersDelegate constinit property declarations *****
// ********** End Delegate FOnNewUrlLaunchParametersDelegate constinit property declarations *******
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnNewUrlLaunchParametersDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnNewUrlLaunchParametersDelegate__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnNewUrlLaunchParametersDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnNewUrlLaunchParametersDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnNewUrlLaunchParametersDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnNewUrlLaunchParametersDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnNewUrlLaunchParametersDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnNewUrlLaunchParametersDelegate)
{
	OnNewUrlLaunchParametersDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnNewUrlLaunchParametersDelegate ***************************************

// ********** Begin Delegate FOnTimedTrialStatusDelegate *******************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnTimedTrialStatusDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnTimedTrialStatusDelegate_Parms
	{
		FTimedTrialStatus Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamApps/SteamAppsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnTimedTrialStatusDelegate constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnTimedTrialStatusDelegate constinit property declarations *************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnTimedTrialStatusDelegate Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnTimedTrialStatusDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnTimedTrialStatusDelegate_Parms, Data), Z_Construct_UScriptStruct_FTimedTrialStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1989074764
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnTimedTrialStatusDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnTimedTrialStatusDelegate__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnTimedTrialStatusDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnTimedTrialStatusDelegate Property Definitions ************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnTimedTrialStatusDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnTimedTrialStatusDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnTimedTrialStatusDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnTimedTrialStatusDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnTimedTrialStatusDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnTimedTrialStatusDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnTimedTrialStatusDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnTimedTrialStatusDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnTimedTrialStatusDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnTimedTrialStatusDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnTimedTrialStatusDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnTimedTrialStatusDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTimedTrialStatusDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnTimedTrialStatusDelegate, FTimedTrialStatus const& Data)
{
	struct _Script_SteamCore_eventOnTimedTrialStatusDelegate_Parms
	{
		FTimedTrialStatus Data;
	};
	_Script_SteamCore_eventOnTimedTrialStatusDelegate_Parms Parms;
	Parms.Data=Data;
	OnTimedTrialStatusDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnTimedTrialStatusDelegate *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamAppsTypes_h__Script_SteamCore_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTimedTrialStatus::StaticStruct, Z_Construct_UScriptStruct_FTimedTrialStatus_Statics::NewStructOps, TEXT("TimedTrialStatus"),&Z_Registration_Info_UScriptStruct_FTimedTrialStatus, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTimedTrialStatus), 1989074764U) },
		{ FFileDetailsResult::StaticStruct, Z_Construct_UScriptStruct_FFileDetailsResult_Statics::NewStructOps, TEXT("FileDetailsResult"),&Z_Registration_Info_UScriptStruct_FFileDetailsResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFileDetailsResult), 2722116320U) },
		{ FDLCInstalled::StaticStruct, Z_Construct_UScriptStruct_FDLCInstalled_Statics::NewStructOps, TEXT("DLCInstalled"),&Z_Registration_Info_UScriptStruct_FDLCInstalled, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDLCInstalled), 3623181815U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamAppsTypes_h__Script_SteamCore_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamAppsTypes_h__Script_SteamCore_3455537564{
	TEXT("/Script/SteamCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamAppsTypes_h__Script_SteamCore_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamAppsTypes_h__Script_SteamCore_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
