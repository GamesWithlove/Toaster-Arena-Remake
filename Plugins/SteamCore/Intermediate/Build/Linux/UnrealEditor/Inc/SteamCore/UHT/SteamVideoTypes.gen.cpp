// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamVideo/SteamVideoTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamVideoTypes() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamBroadcastUploadResult();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamResult();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGetOPFSettingsResult__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGetVideoURLResult__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGetOPFSettingsResult();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGetVideoURLResult();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamBroadcastUploadResult;
	static UEnum* ESteamBroadcastUploadResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESteamBroadcastUploadResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESteamBroadcastUploadResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamBroadcastUploadResult, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamBroadcastUploadResult"));
		}
		return Z_Registration_Info_UEnum_ESteamBroadcastUploadResult.OuterSingleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamBroadcastUploadResult>()
	{
		return ESteamBroadcastUploadResult_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamCore_ESteamBroadcastUploadResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamCore_ESteamBroadcastUploadResult_Statics::Enumerators[] = {
		{ "ESteamBroadcastUploadResult::None", (int64)ESteamBroadcastUploadResult::None },
		{ "ESteamBroadcastUploadResult::OK", (int64)ESteamBroadcastUploadResult::OK },
		{ "ESteamBroadcastUploadResult::InitFailed", (int64)ESteamBroadcastUploadResult::InitFailed },
		{ "ESteamBroadcastUploadResult::FrameFailed", (int64)ESteamBroadcastUploadResult::FrameFailed },
		{ "ESteamBroadcastUploadResult::Timeout", (int64)ESteamBroadcastUploadResult::Timeout },
		{ "ESteamBroadcastUploadResult::BandwidthExceeded", (int64)ESteamBroadcastUploadResult::BandwidthExceeded },
		{ "ESteamBroadcastUploadResult::LowFPS", (int64)ESteamBroadcastUploadResult::LowFPS },
		{ "ESteamBroadcastUploadResult::MissingKeyFrames", (int64)ESteamBroadcastUploadResult::MissingKeyFrames },
		{ "ESteamBroadcastUploadResult::NoConnection", (int64)ESteamBroadcastUploadResult::NoConnection },
		{ "ESteamBroadcastUploadResult::RelayFailed", (int64)ESteamBroadcastUploadResult::RelayFailed },
		{ "ESteamBroadcastUploadResult::SettingsChanged", (int64)ESteamBroadcastUploadResult::SettingsChanged },
		{ "ESteamBroadcastUploadResult::MissingAudio", (int64)ESteamBroadcastUploadResult::MissingAudio },
		{ "ESteamBroadcastUploadResult::TooFarBehind", (int64)ESteamBroadcastUploadResult::TooFarBehind },
		{ "ESteamBroadcastUploadResult::TranscodeBehind", (int64)ESteamBroadcastUploadResult::TranscodeBehind },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamCore_ESteamBroadcastUploadResult_Statics::Enum_MetaDataParams[] = {
		{ "BandwidthExceeded.Name", "ESteamBroadcastUploadResult::BandwidthExceeded" },
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Enums\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "FrameFailed.Name", "ESteamBroadcastUploadResult::FrameFailed" },
		{ "InitFailed.Name", "ESteamBroadcastUploadResult::InitFailed" },
		{ "LowFPS.Name", "ESteamBroadcastUploadResult::LowFPS" },
		{ "MissingAudio.Name", "ESteamBroadcastUploadResult::MissingAudio" },
		{ "MissingKeyFrames.Name", "ESteamBroadcastUploadResult::MissingKeyFrames" },
		{ "ModuleRelativePath", "Public/SteamVideo/SteamVideoTypes.h" },
		{ "NoConnection.Name", "ESteamBroadcastUploadResult::NoConnection" },
		{ "None.Name", "ESteamBroadcastUploadResult::None" },
		{ "OK.Name", "ESteamBroadcastUploadResult::OK" },
		{ "RelayFailed.Name", "ESteamBroadcastUploadResult::RelayFailed" },
		{ "SettingsChanged.Name", "ESteamBroadcastUploadResult::SettingsChanged" },
		{ "Timeout.Name", "ESteamBroadcastUploadResult::Timeout" },
		{ "TooFarBehind.Name", "ESteamBroadcastUploadResult::TooFarBehind" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Enums\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
		{ "TranscodeBehind.Name", "ESteamBroadcastUploadResult::TranscodeBehind" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamBroadcastUploadResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		"ESteamBroadcastUploadResult",
		"ESteamBroadcastUploadResult",
		Z_Construct_UEnum_SteamCore_ESteamBroadcastUploadResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamBroadcastUploadResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamCore_ESteamBroadcastUploadResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamBroadcastUploadResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamCore_ESteamBroadcastUploadResult()
	{
		if (!Z_Registration_Info_UEnum_ESteamBroadcastUploadResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamBroadcastUploadResult.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamBroadcastUploadResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESteamBroadcastUploadResult.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GetOPFSettingsResult;
class UScriptStruct* FGetOPFSettingsResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GetOPFSettingsResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GetOPFSettingsResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGetOPFSettingsResult, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("GetOPFSettingsResult"));
	}
	return Z_Registration_Info_UScriptStruct_GetOPFSettingsResult.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FGetOPFSettingsResult>()
{
	return FGetOPFSettingsResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGetOPFSettingsResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AppID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetOPFSettingsResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Structs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamVideo/SteamVideoTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Structs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGetOPFSettingsResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGetOPFSettingsResult>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGetOPFSettingsResult_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetOPFSettingsResult_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Video" },
		{ "ModuleRelativePath", "Public/SteamVideo/SteamVideoTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGetOPFSettingsResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGetOPFSettingsResult, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FGetOPFSettingsResult_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetOPFSettingsResult_Statics::NewProp_Result_MetaData)) }; // 2739532951
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetOPFSettingsResult_Statics::NewProp_AppID_MetaData[] = {
		{ "Category", "Video" },
		{ "ModuleRelativePath", "Public/SteamVideo/SteamVideoTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGetOPFSettingsResult_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGetOPFSettingsResult, AppID), METADATA_PARAMS(Z_Construct_UScriptStruct_FGetOPFSettingsResult_Statics::NewProp_AppID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetOPFSettingsResult_Statics::NewProp_AppID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGetOPFSettingsResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetOPFSettingsResult_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetOPFSettingsResult_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetOPFSettingsResult_Statics::NewProp_AppID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGetOPFSettingsResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"GetOPFSettingsResult",
		sizeof(FGetOPFSettingsResult),
		alignof(FGetOPFSettingsResult),
		Z_Construct_UScriptStruct_FGetOPFSettingsResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetOPFSettingsResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGetOPFSettingsResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetOPFSettingsResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGetOPFSettingsResult()
	{
		if (!Z_Registration_Info_UScriptStruct_GetOPFSettingsResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GetOPFSettingsResult.InnerSingleton, Z_Construct_UScriptStruct_FGetOPFSettingsResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GetOPFSettingsResult.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GetVideoURLResult;
class UScriptStruct* FGetVideoURLResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GetVideoURLResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GetVideoURLResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGetVideoURLResult, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("GetVideoURLResult"));
	}
	return Z_Registration_Info_UScriptStruct_GetVideoURLResult.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FGetVideoURLResult>()
{
	return FGetVideoURLResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGetVideoURLResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AppID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetVideoURLResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamVideo/SteamVideoTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGetVideoURLResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGetVideoURLResult>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGetVideoURLResult_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetVideoURLResult_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Video" },
		{ "ModuleRelativePath", "Public/SteamVideo/SteamVideoTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGetVideoURLResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGetVideoURLResult, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FGetVideoURLResult_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetVideoURLResult_Statics::NewProp_Result_MetaData)) }; // 2739532951
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetVideoURLResult_Statics::NewProp_AppID_MetaData[] = {
		{ "Category", "Video" },
		{ "ModuleRelativePath", "Public/SteamVideo/SteamVideoTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGetVideoURLResult_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGetVideoURLResult, AppID), METADATA_PARAMS(Z_Construct_UScriptStruct_FGetVideoURLResult_Statics::NewProp_AppID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetVideoURLResult_Statics::NewProp_AppID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetVideoURLResult_Statics::NewProp_URL_MetaData[] = {
		{ "Category", "Video" },
		{ "ModuleRelativePath", "Public/SteamVideo/SteamVideoTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGetVideoURLResult_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGetVideoURLResult, URL), METADATA_PARAMS(Z_Construct_UScriptStruct_FGetVideoURLResult_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetVideoURLResult_Statics::NewProp_URL_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGetVideoURLResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetVideoURLResult_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetVideoURLResult_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetVideoURLResult_Statics::NewProp_AppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetVideoURLResult_Statics::NewProp_URL,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGetVideoURLResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"GetVideoURLResult",
		sizeof(FGetVideoURLResult),
		alignof(FGetVideoURLResult),
		Z_Construct_UScriptStruct_FGetVideoURLResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetVideoURLResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGetVideoURLResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetVideoURLResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGetVideoURLResult()
	{
		if (!Z_Registration_Info_UScriptStruct_GetVideoURLResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GetVideoURLResult.InnerSingleton, Z_Construct_UScriptStruct_FGetVideoURLResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GetVideoURLResult.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnGetOPFSettingsResult__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnGetOPFSettingsResult_Parms
		{
			FGetOPFSettingsResult Data;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnGetOPFSettingsResult__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnGetOPFSettingsResult__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnGetOPFSettingsResult_Parms, Data), Z_Construct_UScriptStruct_FGetOPFSettingsResult, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnGetOPFSettingsResult__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGetOPFSettingsResult__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 607184367
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnGetOPFSettingsResult__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnGetOPFSettingsResult__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnGetOPFSettingsResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamVideo/SteamVideoTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnGetOPFSettingsResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnGetOPFSettingsResult__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnGetOPFSettingsResult__DelegateSignature_Statics::_Script_SteamCore_eventOnGetOPFSettingsResult_Parms), Z_Construct_UDelegateFunction_SteamCore_OnGetOPFSettingsResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGetOPFSettingsResult__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnGetOPFSettingsResult__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGetOPFSettingsResult__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGetOPFSettingsResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnGetOPFSettingsResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnGetOPFSettingsResult_DelegateWrapper(const FMulticastScriptDelegate& OnGetOPFSettingsResult, FGetOPFSettingsResult const& Data)
{
	struct _Script_SteamCore_eventOnGetOPFSettingsResult_Parms
	{
		FGetOPFSettingsResult Data;
	};
	_Script_SteamCore_eventOnGetOPFSettingsResult_Parms Parms;
	Parms.Data=Data;
	OnGetOPFSettingsResult.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamCore_OnGetVideoURLResult__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnGetVideoURLResult_Parms
		{
			FGetVideoURLResult Data;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnGetVideoURLResult__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnGetVideoURLResult__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnGetVideoURLResult_Parms, Data), Z_Construct_UScriptStruct_FGetVideoURLResult, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnGetVideoURLResult__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGetVideoURLResult__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 2346889826
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnGetVideoURLResult__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnGetVideoURLResult__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnGetVideoURLResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamVideo/SteamVideoTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnGetVideoURLResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnGetVideoURLResult__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnGetVideoURLResult__DelegateSignature_Statics::_Script_SteamCore_eventOnGetVideoURLResult_Parms), Z_Construct_UDelegateFunction_SteamCore_OnGetVideoURLResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGetVideoURLResult__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnGetVideoURLResult__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGetVideoURLResult__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGetVideoURLResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnGetVideoURLResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnGetVideoURLResult_DelegateWrapper(const FMulticastScriptDelegate& OnGetVideoURLResult, FGetVideoURLResult const& Data)
{
	struct _Script_SteamCore_eventOnGetVideoURLResult_Parms
	{
		FGetVideoURLResult Data;
	};
	_Script_SteamCore_eventOnGetVideoURLResult_Parms Parms;
	Parms.Data=Data;
	OnGetVideoURLResult.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamVideo_SteamVideoTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamVideo_SteamVideoTypes_h_Statics::EnumInfo[] = {
		{ ESteamBroadcastUploadResult_StaticEnum, TEXT("ESteamBroadcastUploadResult"), &Z_Registration_Info_UEnum_ESteamBroadcastUploadResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1770071411U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamVideo_SteamVideoTypes_h_Statics::ScriptStructInfo[] = {
		{ FGetOPFSettingsResult::StaticStruct, Z_Construct_UScriptStruct_FGetOPFSettingsResult_Statics::NewStructOps, TEXT("GetOPFSettingsResult"), &Z_Registration_Info_UScriptStruct_GetOPFSettingsResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGetOPFSettingsResult), 607184367U) },
		{ FGetVideoURLResult::StaticStruct, Z_Construct_UScriptStruct_FGetVideoURLResult_Statics::NewStructOps, TEXT("GetVideoURLResult"), &Z_Registration_Info_UScriptStruct_GetVideoURLResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGetVideoURLResult), 2346889826U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamVideo_SteamVideoTypes_h_2377445584(TEXT("/Script/SteamCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamVideo_SteamVideoTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamVideo_SteamVideoTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamVideo_SteamVideoTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamVideo_SteamVideoTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
