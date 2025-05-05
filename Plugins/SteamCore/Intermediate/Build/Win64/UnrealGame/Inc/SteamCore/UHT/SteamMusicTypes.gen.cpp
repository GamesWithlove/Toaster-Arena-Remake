// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamMusic/SteamMusicTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamMusicTypes() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamAudioPlaybackStatus();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnPlaybackStatusHasChanged__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnVolumeHasChanged__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FPlaybackStatusHasChanged();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FVolumeHasChanged();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamAudioPlaybackStatus;
	static UEnum* ESteamAudioPlaybackStatus_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESteamAudioPlaybackStatus.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESteamAudioPlaybackStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamAudioPlaybackStatus, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamAudioPlaybackStatus"));
		}
		return Z_Registration_Info_UEnum_ESteamAudioPlaybackStatus.OuterSingleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamAudioPlaybackStatus>()
	{
		return ESteamAudioPlaybackStatus_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamCore_ESteamAudioPlaybackStatus_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamCore_ESteamAudioPlaybackStatus_Statics::Enumerators[] = {
		{ "ESteamAudioPlaybackStatus::Undefined", (int64)ESteamAudioPlaybackStatus::Undefined },
		{ "ESteamAudioPlaybackStatus::Playing", (int64)ESteamAudioPlaybackStatus::Playing },
		{ "ESteamAudioPlaybackStatus::Paused", (int64)ESteamAudioPlaybackStatus::Paused },
		{ "ESteamAudioPlaybackStatus::Idle", (int64)ESteamAudioPlaybackStatus::Idle },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamCore_ESteamAudioPlaybackStatus_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Enums\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "Idle.Name", "ESteamAudioPlaybackStatus::Idle" },
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusicTypes.h" },
		{ "Paused.Name", "ESteamAudioPlaybackStatus::Paused" },
		{ "Playing.Name", "ESteamAudioPlaybackStatus::Playing" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Enums\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
		{ "Undefined.Name", "ESteamAudioPlaybackStatus::Undefined" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamAudioPlaybackStatus_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		"ESteamAudioPlaybackStatus",
		"ESteamAudioPlaybackStatus",
		Z_Construct_UEnum_SteamCore_ESteamAudioPlaybackStatus_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamAudioPlaybackStatus_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamCore_ESteamAudioPlaybackStatus_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamAudioPlaybackStatus_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamCore_ESteamAudioPlaybackStatus()
	{
		if (!Z_Registration_Info_UEnum_ESteamAudioPlaybackStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamAudioPlaybackStatus.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamAudioPlaybackStatus_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESteamAudioPlaybackStatus.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlaybackStatusHasChanged;
class UScriptStruct* FPlaybackStatusHasChanged::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlaybackStatusHasChanged.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlaybackStatusHasChanged.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlaybackStatusHasChanged, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("PlaybackStatusHasChanged"));
	}
	return Z_Registration_Info_UScriptStruct_PlaybackStatusHasChanged.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FPlaybackStatusHasChanged>()
{
	return FPlaybackStatusHasChanged::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPlaybackStatusHasChanged_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaybackStatusHasChanged_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Structs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusicTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Structs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlaybackStatusHasChanged_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlaybackStatusHasChanged>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlaybackStatusHasChanged_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"PlaybackStatusHasChanged",
		sizeof(FPlaybackStatusHasChanged),
		alignof(FPlaybackStatusHasChanged),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlaybackStatusHasChanged_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaybackStatusHasChanged_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlaybackStatusHasChanged()
	{
		if (!Z_Registration_Info_UScriptStruct_PlaybackStatusHasChanged.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlaybackStatusHasChanged.InnerSingleton, Z_Construct_UScriptStruct_FPlaybackStatusHasChanged_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PlaybackStatusHasChanged.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VolumeHasChanged;
class UScriptStruct* FVolumeHasChanged::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VolumeHasChanged.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VolumeHasChanged.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVolumeHasChanged, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("VolumeHasChanged"));
	}
	return Z_Registration_Info_UScriptStruct_VolumeHasChanged.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FVolumeHasChanged>()
{
	return FVolumeHasChanged::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVolumeHasChanged_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVolumeHasChanged_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusicTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVolumeHasChanged_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVolumeHasChanged>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVolumeHasChanged_Statics::NewProp_Volume_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusicTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVolumeHasChanged_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVolumeHasChanged, Volume), METADATA_PARAMS(Z_Construct_UScriptStruct_FVolumeHasChanged_Statics::NewProp_Volume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumeHasChanged_Statics::NewProp_Volume_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVolumeHasChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumeHasChanged_Statics::NewProp_Volume,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVolumeHasChanged_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"VolumeHasChanged",
		sizeof(FVolumeHasChanged),
		alignof(FVolumeHasChanged),
		Z_Construct_UScriptStruct_FVolumeHasChanged_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumeHasChanged_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVolumeHasChanged_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumeHasChanged_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVolumeHasChanged()
	{
		if (!Z_Registration_Info_UScriptStruct_VolumeHasChanged.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VolumeHasChanged.InnerSingleton, Z_Construct_UScriptStruct_FVolumeHasChanged_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VolumeHasChanged.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnPlaybackStatusHasChanged__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnPlaybackStatusHasChanged_Parms
		{
			FPlaybackStatusHasChanged Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnPlaybackStatusHasChanged__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnPlaybackStatusHasChanged__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnPlaybackStatusHasChanged_Parms, Data), Z_Construct_UScriptStruct_FPlaybackStatusHasChanged, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnPlaybackStatusHasChanged__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnPlaybackStatusHasChanged__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 3133496870
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnPlaybackStatusHasChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnPlaybackStatusHasChanged__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnPlaybackStatusHasChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusicTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnPlaybackStatusHasChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnPlaybackStatusHasChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnPlaybackStatusHasChanged__DelegateSignature_Statics::_Script_SteamCore_eventOnPlaybackStatusHasChanged_Parms), Z_Construct_UDelegateFunction_SteamCore_OnPlaybackStatusHasChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnPlaybackStatusHasChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnPlaybackStatusHasChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnPlaybackStatusHasChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnPlaybackStatusHasChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnPlaybackStatusHasChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPlaybackStatusHasChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPlaybackStatusHasChanged, FPlaybackStatusHasChanged const& Data)
{
	struct _Script_SteamCore_eventOnPlaybackStatusHasChanged_Parms
	{
		FPlaybackStatusHasChanged Data;
	};
	_Script_SteamCore_eventOnPlaybackStatusHasChanged_Parms Parms;
	Parms.Data=Data;
	OnPlaybackStatusHasChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamCore_OnVolumeHasChanged__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnVolumeHasChanged_Parms
		{
			FVolumeHasChanged Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnVolumeHasChanged__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnVolumeHasChanged__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnVolumeHasChanged_Parms, Data), Z_Construct_UScriptStruct_FVolumeHasChanged, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnVolumeHasChanged__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnVolumeHasChanged__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 4043609661
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnVolumeHasChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnVolumeHasChanged__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnVolumeHasChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMusic/SteamMusicTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnVolumeHasChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnVolumeHasChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnVolumeHasChanged__DelegateSignature_Statics::_Script_SteamCore_eventOnVolumeHasChanged_Parms), Z_Construct_UDelegateFunction_SteamCore_OnVolumeHasChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnVolumeHasChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnVolumeHasChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnVolumeHasChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnVolumeHasChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnVolumeHasChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnVolumeHasChanged_DelegateWrapper(const FMulticastScriptDelegate& OnVolumeHasChanged, FVolumeHasChanged const& Data)
{
	struct _Script_SteamCore_eventOnVolumeHasChanged_Parms
	{
		FVolumeHasChanged Data;
	};
	_Script_SteamCore_eventOnVolumeHasChanged_Parms Parms;
	Parms.Data=Data;
	OnVolumeHasChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamMusic_SteamMusicTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamMusic_SteamMusicTypes_h_Statics::EnumInfo[] = {
		{ ESteamAudioPlaybackStatus_StaticEnum, TEXT("ESteamAudioPlaybackStatus"), &Z_Registration_Info_UEnum_ESteamAudioPlaybackStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1532637896U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamMusic_SteamMusicTypes_h_Statics::ScriptStructInfo[] = {
		{ FPlaybackStatusHasChanged::StaticStruct, Z_Construct_UScriptStruct_FPlaybackStatusHasChanged_Statics::NewStructOps, TEXT("PlaybackStatusHasChanged"), &Z_Registration_Info_UScriptStruct_PlaybackStatusHasChanged, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlaybackStatusHasChanged), 3133496870U) },
		{ FVolumeHasChanged::StaticStruct, Z_Construct_UScriptStruct_FVolumeHasChanged_Statics::NewStructOps, TEXT("VolumeHasChanged"), &Z_Registration_Info_UScriptStruct_VolumeHasChanged, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVolumeHasChanged), 4043609661U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamMusic_SteamMusicTypes_h_3284642237(TEXT("/Script/SteamCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamMusic_SteamMusicTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamMusic_SteamMusicTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamMusic_SteamMusicTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamMusic_SteamMusicTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
