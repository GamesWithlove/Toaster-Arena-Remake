// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamUserStats/SteamUserStatsTypes.h"
#include "SteamCore/Public/SteamCore/SteamTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamUserStatsTypes() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamLeaderboardDataRequest();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamLeaderboardDisplayType();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamLeaderboardSortMethod();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamLeaderboardUploadScoreMethod();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamResult();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementIconFetched__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementStored__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnUserStatsReceived__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnUserStatsStored__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnUserStatsUnloaded__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FAttachLeaderboardUGCData();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGlobalStatsReceived();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardFindResult();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardScoreUploaded();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNumberOfCurrentPlayers();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FRequestUserStatsData();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamGameID();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamLeaderboard();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamLeaderboardEntries();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamLeaderboardEntry();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamUGCHandle();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FUserAchievementIconFetched();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FUserAchievementStored();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FUserStatsReceived();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FUserStatsStored();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FUserStatsUnloaded();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamLeaderboardDataRequest;
	static UEnum* ESteamLeaderboardDataRequest_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESteamLeaderboardDataRequest.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESteamLeaderboardDataRequest.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamLeaderboardDataRequest, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamLeaderboardDataRequest"));
		}
		return Z_Registration_Info_UEnum_ESteamLeaderboardDataRequest.OuterSingleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamLeaderboardDataRequest>()
	{
		return ESteamLeaderboardDataRequest_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamCore_ESteamLeaderboardDataRequest_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamCore_ESteamLeaderboardDataRequest_Statics::Enumerators[] = {
		{ "ESteamLeaderboardDataRequest::Global", (int64)ESteamLeaderboardDataRequest::Global },
		{ "ESteamLeaderboardDataRequest::GlobalAroundUser", (int64)ESteamLeaderboardDataRequest::GlobalAroundUser },
		{ "ESteamLeaderboardDataRequest::Friends", (int64)ESteamLeaderboardDataRequest::Friends },
		{ "ESteamLeaderboardDataRequest::Users", (int64)ESteamLeaderboardDataRequest::Users },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamCore_ESteamLeaderboardDataRequest_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Enums\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "Friends.Name", "ESteamLeaderboardDataRequest::Friends" },
		{ "Global.Name", "ESteamLeaderboardDataRequest::Global" },
		{ "GlobalAroundUser.Name", "ESteamLeaderboardDataRequest::GlobalAroundUser" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Enums\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
		{ "Users.Name", "ESteamLeaderboardDataRequest::Users" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamLeaderboardDataRequest_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		"ESteamLeaderboardDataRequest",
		"ESteamLeaderboardDataRequest",
		Z_Construct_UEnum_SteamCore_ESteamLeaderboardDataRequest_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamLeaderboardDataRequest_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamCore_ESteamLeaderboardDataRequest_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamLeaderboardDataRequest_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamCore_ESteamLeaderboardDataRequest()
	{
		if (!Z_Registration_Info_UEnum_ESteamLeaderboardDataRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamLeaderboardDataRequest.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamLeaderboardDataRequest_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESteamLeaderboardDataRequest.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamLeaderboardSortMethod;
	static UEnum* ESteamLeaderboardSortMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESteamLeaderboardSortMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESteamLeaderboardSortMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamLeaderboardSortMethod, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamLeaderboardSortMethod"));
		}
		return Z_Registration_Info_UEnum_ESteamLeaderboardSortMethod.OuterSingleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamLeaderboardSortMethod>()
	{
		return ESteamLeaderboardSortMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamCore_ESteamLeaderboardSortMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamCore_ESteamLeaderboardSortMethod_Statics::Enumerators[] = {
		{ "ESteamLeaderboardSortMethod::None", (int64)ESteamLeaderboardSortMethod::None },
		{ "ESteamLeaderboardSortMethod::Ascending", (int64)ESteamLeaderboardSortMethod::Ascending },
		{ "ESteamLeaderboardSortMethod::Descending", (int64)ESteamLeaderboardSortMethod::Descending },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamCore_ESteamLeaderboardSortMethod_Statics::Enum_MetaDataParams[] = {
		{ "Ascending.Name", "ESteamLeaderboardSortMethod::Ascending" },
		{ "BlueprintType", "true" },
		{ "Descending.Name", "ESteamLeaderboardSortMethod::Descending" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
		{ "None.Name", "ESteamLeaderboardSortMethod::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamLeaderboardSortMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		"ESteamLeaderboardSortMethod",
		"ESteamLeaderboardSortMethod",
		Z_Construct_UEnum_SteamCore_ESteamLeaderboardSortMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamLeaderboardSortMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamCore_ESteamLeaderboardSortMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamLeaderboardSortMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamCore_ESteamLeaderboardSortMethod()
	{
		if (!Z_Registration_Info_UEnum_ESteamLeaderboardSortMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamLeaderboardSortMethod.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamLeaderboardSortMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESteamLeaderboardSortMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamLeaderboardDisplayType;
	static UEnum* ESteamLeaderboardDisplayType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESteamLeaderboardDisplayType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESteamLeaderboardDisplayType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamLeaderboardDisplayType, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamLeaderboardDisplayType"));
		}
		return Z_Registration_Info_UEnum_ESteamLeaderboardDisplayType.OuterSingleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamLeaderboardDisplayType>()
	{
		return ESteamLeaderboardDisplayType_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamCore_ESteamLeaderboardDisplayType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamCore_ESteamLeaderboardDisplayType_Statics::Enumerators[] = {
		{ "ESteamLeaderboardDisplayType::None", (int64)ESteamLeaderboardDisplayType::None },
		{ "ESteamLeaderboardDisplayType::Numeric", (int64)ESteamLeaderboardDisplayType::Numeric },
		{ "ESteamLeaderboardDisplayType::TimeSeconds", (int64)ESteamLeaderboardDisplayType::TimeSeconds },
		{ "ESteamLeaderboardDisplayType::TimeMilliSeconds", (int64)ESteamLeaderboardDisplayType::TimeMilliSeconds },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamCore_ESteamLeaderboardDisplayType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
		{ "None.Name", "ESteamLeaderboardDisplayType::None" },
		{ "Numeric.Name", "ESteamLeaderboardDisplayType::Numeric" },
		{ "TimeMilliSeconds.Name", "ESteamLeaderboardDisplayType::TimeMilliSeconds" },
		{ "TimeSeconds.Name", "ESteamLeaderboardDisplayType::TimeSeconds" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamLeaderboardDisplayType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		"ESteamLeaderboardDisplayType",
		"ESteamLeaderboardDisplayType",
		Z_Construct_UEnum_SteamCore_ESteamLeaderboardDisplayType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamLeaderboardDisplayType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamCore_ESteamLeaderboardDisplayType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamLeaderboardDisplayType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamCore_ESteamLeaderboardDisplayType()
	{
		if (!Z_Registration_Info_UEnum_ESteamLeaderboardDisplayType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamLeaderboardDisplayType.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamLeaderboardDisplayType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESteamLeaderboardDisplayType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamLeaderboardUploadScoreMethod;
	static UEnum* ESteamLeaderboardUploadScoreMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESteamLeaderboardUploadScoreMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESteamLeaderboardUploadScoreMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamLeaderboardUploadScoreMethod, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamLeaderboardUploadScoreMethod"));
		}
		return Z_Registration_Info_UEnum_ESteamLeaderboardUploadScoreMethod.OuterSingleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamLeaderboardUploadScoreMethod>()
	{
		return ESteamLeaderboardUploadScoreMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamCore_ESteamLeaderboardUploadScoreMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamCore_ESteamLeaderboardUploadScoreMethod_Statics::Enumerators[] = {
		{ "ESteamLeaderboardUploadScoreMethod::None", (int64)ESteamLeaderboardUploadScoreMethod::None },
		{ "ESteamLeaderboardUploadScoreMethod::KeepBest", (int64)ESteamLeaderboardUploadScoreMethod::KeepBest },
		{ "ESteamLeaderboardUploadScoreMethod::ForceUpdate", (int64)ESteamLeaderboardUploadScoreMethod::ForceUpdate },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamCore_ESteamLeaderboardUploadScoreMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ForceUpdate.Name", "ESteamLeaderboardUploadScoreMethod::ForceUpdate" },
		{ "KeepBest.Name", "ESteamLeaderboardUploadScoreMethod::KeepBest" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
		{ "None.Name", "ESteamLeaderboardUploadScoreMethod::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamLeaderboardUploadScoreMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		"ESteamLeaderboardUploadScoreMethod",
		"ESteamLeaderboardUploadScoreMethod",
		Z_Construct_UEnum_SteamCore_ESteamLeaderboardUploadScoreMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamLeaderboardUploadScoreMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamCore_ESteamLeaderboardUploadScoreMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamLeaderboardUploadScoreMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamCore_ESteamLeaderboardUploadScoreMethod()
	{
		if (!Z_Registration_Info_UEnum_ESteamLeaderboardUploadScoreMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamLeaderboardUploadScoreMethod.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamLeaderboardUploadScoreMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESteamLeaderboardUploadScoreMethod.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SteamLeaderboardEntries;
class UScriptStruct* FSteamLeaderboardEntries::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SteamLeaderboardEntries.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SteamLeaderboardEntries.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamLeaderboardEntries, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamLeaderboardEntries"));
	}
	return Z_Registration_Info_UScriptStruct_SteamLeaderboardEntries.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FSteamLeaderboardEntries>()
{
	return FSteamLeaderboardEntries::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSteamLeaderboardEntries_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamLeaderboardEntries_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Structs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Structs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamLeaderboardEntries_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamLeaderboardEntries>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamLeaderboardEntries_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"SteamLeaderboardEntries",
		sizeof(FSteamLeaderboardEntries),
		alignof(FSteamLeaderboardEntries),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamLeaderboardEntries_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamLeaderboardEntries_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamLeaderboardEntries()
	{
		if (!Z_Registration_Info_UScriptStruct_SteamLeaderboardEntries.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SteamLeaderboardEntries.InnerSingleton, Z_Construct_UScriptStruct_FSteamLeaderboardEntries_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SteamLeaderboardEntries.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SteamLeaderboardEntry;
class UScriptStruct* FSteamLeaderboardEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SteamLeaderboardEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SteamLeaderboardEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamLeaderboardEntry, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamLeaderboardEntry"));
	}
	return Z_Registration_Info_UScriptStruct_SteamLeaderboardEntry.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FSteamLeaderboardEntry>()
{
	return FSteamLeaderboardEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalRank_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GlobalRank;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Details_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Details;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UGCHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UGCHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamLeaderboardEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_SteamID_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamLeaderboardEntry, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_SteamID_MetaData)) }; // 1620016601
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_GlobalRank_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_GlobalRank = { "GlobalRank", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamLeaderboardEntry, GlobalRank), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_GlobalRank_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_GlobalRank_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_Score_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamLeaderboardEntry, Score), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_Score_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_Score_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_Details_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_Details = { "Details", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamLeaderboardEntry, Details), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_Details_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_Details_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_UGCHandle_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_UGCHandle = { "UGCHandle", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamLeaderboardEntry, UGCHandle), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_UGCHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_UGCHandle_MetaData)) }; // 2878754911
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_SteamID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_GlobalRank,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_Score,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_Details,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_UGCHandle,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"SteamLeaderboardEntry",
		sizeof(FSteamLeaderboardEntry),
		alignof(FSteamLeaderboardEntry),
		Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamLeaderboardEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_SteamLeaderboardEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SteamLeaderboardEntry.InnerSingleton, Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SteamLeaderboardEntry.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SteamLeaderboard;
class UScriptStruct* FSteamLeaderboard::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SteamLeaderboard.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SteamLeaderboard.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamLeaderboard, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamLeaderboard"));
	}
	return Z_Registration_Info_UScriptStruct_SteamLeaderboard.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FSteamLeaderboard>()
{
	return FSteamLeaderboard::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSteamLeaderboard_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamLeaderboard_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamLeaderboard_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamLeaderboard>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamLeaderboard_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"SteamLeaderboard",
		sizeof(FSteamLeaderboard),
		alignof(FSteamLeaderboard),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamLeaderboard_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamLeaderboard_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamLeaderboard()
	{
		if (!Z_Registration_Info_UScriptStruct_SteamLeaderboard.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SteamLeaderboard.InnerSingleton, Z_Construct_UScriptStruct_FSteamLeaderboard_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SteamLeaderboard.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UserAchievementIconFetched;
class UScriptStruct* FUserAchievementIconFetched::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UserAchievementIconFetched.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UserAchievementIconFetched.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserAchievementIconFetched, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("UserAchievementIconFetched"));
	}
	return Z_Registration_Info_UScriptStruct_UserAchievementIconFetched.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FUserAchievementIconFetched>()
{
	return FUserAchievementIconFetched::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AchievementName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AchievementName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAchieved_MetaData[];
#endif
		static void NewProp_bAchieved_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAchieved;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserAchievementIconFetched>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_GameID_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUserAchievementIconFetched, GameID), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_GameID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_GameID_MetaData)) }; // 419490198
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_AchievementName_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_AchievementName = { "AchievementName", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUserAchievementIconFetched, AchievementName), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_AchievementName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_AchievementName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_bAchieved_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_bAchieved_SetBit(void* Obj)
	{
		((FUserAchievementIconFetched*)Obj)->bAchieved = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_bAchieved = { "bAchieved", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FUserAchievementIconFetched), &Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_bAchieved_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_bAchieved_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_bAchieved_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUserAchievementIconFetched, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_Icon_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_GameID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_AchievementName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_bAchieved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_Icon,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"UserAchievementIconFetched",
		sizeof(FUserAchievementIconFetched),
		alignof(FUserAchievementIconFetched),
		Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUserAchievementIconFetched()
	{
		if (!Z_Registration_Info_UScriptStruct_UserAchievementIconFetched.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UserAchievementIconFetched.InnerSingleton, Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UserAchievementIconFetched.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UserAchievementStored;
class UScriptStruct* FUserAchievementStored::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UserAchievementStored.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UserAchievementStored.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserAchievementStored, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("UserAchievementStored"));
	}
	return Z_Registration_Info_UScriptStruct_UserAchievementStored.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FUserAchievementStored>()
{
	return FUserAchievementStored::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUserAchievementStored_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGroupAchievement_MetaData[];
#endif
		static void NewProp_bGroupAchievement_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGroupAchievement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AchievementName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AchievementName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentProgress_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentProgress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxProgress_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxProgress;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserAchievementStored_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserAchievementStored>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_GameID_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUserAchievementStored, GameID), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_GameID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_GameID_MetaData)) }; // 419490198
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_bGroupAchievement_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_bGroupAchievement_SetBit(void* Obj)
	{
		((FUserAchievementStored*)Obj)->bGroupAchievement = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_bGroupAchievement = { "bGroupAchievement", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FUserAchievementStored), &Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_bGroupAchievement_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_bGroupAchievement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_bGroupAchievement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_AchievementName_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_AchievementName = { "AchievementName", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUserAchievementStored, AchievementName), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_AchievementName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_AchievementName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_CurrentProgress_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_CurrentProgress = { "CurrentProgress", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUserAchievementStored, CurrentProgress), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_CurrentProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_CurrentProgress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_MaxProgress_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_MaxProgress = { "MaxProgress", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUserAchievementStored, MaxProgress), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_MaxProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_MaxProgress_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserAchievementStored_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_GameID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_bGroupAchievement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_AchievementName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_CurrentProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_MaxProgress,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserAchievementStored_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"UserAchievementStored",
		sizeof(FUserAchievementStored),
		alignof(FUserAchievementStored),
		Z_Construct_UScriptStruct_FUserAchievementStored_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserAchievementStored_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUserAchievementStored_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserAchievementStored_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUserAchievementStored()
	{
		if (!Z_Registration_Info_UScriptStruct_UserAchievementStored.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UserAchievementStored.InnerSingleton, Z_Construct_UScriptStruct_FUserAchievementStored_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UserAchievementStored.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UserStatsReceived;
class UScriptStruct* FUserStatsReceived::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UserStatsReceived.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UserStatsReceived.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserStatsReceived, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("UserStatsReceived"));
	}
	return Z_Registration_Info_UScriptStruct_UserStatsReceived.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FUserStatsReceived>()
{
	return FUserStatsReceived::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUserStatsReceived_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserStatsReceived_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserStatsReceived>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_GameID_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUserStatsReceived, GameID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_GameID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_GameID_MetaData)) }; // 1620016601
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUserStatsReceived, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_Result_MetaData)) }; // 2739532951
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_SteamID_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUserStatsReceived, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_SteamID_MetaData)) }; // 1620016601
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserStatsReceived_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_GameID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_SteamID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserStatsReceived_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"UserStatsReceived",
		sizeof(FUserStatsReceived),
		alignof(FUserStatsReceived),
		Z_Construct_UScriptStruct_FUserStatsReceived_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserStatsReceived_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUserStatsReceived_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserStatsReceived_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUserStatsReceived()
	{
		if (!Z_Registration_Info_UScriptStruct_UserStatsReceived.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UserStatsReceived.InnerSingleton, Z_Construct_UScriptStruct_FUserStatsReceived_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UserStatsReceived.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UserStatsStored;
class UScriptStruct* FUserStatsStored::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UserStatsStored.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UserStatsStored.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserStatsStored, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("UserStatsStored"));
	}
	return Z_Registration_Info_UScriptStruct_UserStatsStored.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FUserStatsStored>()
{
	return FUserStatsStored::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUserStatsStored_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserStatsStored_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUserStatsStored_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserStatsStored>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserStatsStored_Statics::NewProp_GameID_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUserStatsStored_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUserStatsStored, GameID), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserStatsStored_Statics::NewProp_GameID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserStatsStored_Statics::NewProp_GameID_MetaData)) }; // 419490198
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUserStatsStored_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserStatsStored_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FUserStatsStored_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUserStatsStored, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserStatsStored_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserStatsStored_Statics::NewProp_Result_MetaData)) }; // 2739532951
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserStatsStored_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserStatsStored_Statics::NewProp_GameID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserStatsStored_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserStatsStored_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserStatsStored_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"UserStatsStored",
		sizeof(FUserStatsStored),
		alignof(FUserStatsStored),
		Z_Construct_UScriptStruct_FUserStatsStored_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserStatsStored_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUserStatsStored_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserStatsStored_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUserStatsStored()
	{
		if (!Z_Registration_Info_UScriptStruct_UserStatsStored.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UserStatsStored.InnerSingleton, Z_Construct_UScriptStruct_FUserStatsStored_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UserStatsStored.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UserStatsUnloaded;
class UScriptStruct* FUserStatsUnloaded::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UserStatsUnloaded.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UserStatsUnloaded.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserStatsUnloaded, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("UserStatsUnloaded"));
	}
	return Z_Registration_Info_UScriptStruct_UserStatsUnloaded.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FUserStatsUnloaded>()
{
	return FUserStatsUnloaded::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUserStatsUnloaded_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDUser_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserStatsUnloaded_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUserStatsUnloaded_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserStatsUnloaded>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserStatsUnloaded_Statics::NewProp_SteamIDUser_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUserStatsUnloaded_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUserStatsUnloaded, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserStatsUnloaded_Statics::NewProp_SteamIDUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserStatsUnloaded_Statics::NewProp_SteamIDUser_MetaData)) }; // 1620016601
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserStatsUnloaded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserStatsUnloaded_Statics::NewProp_SteamIDUser,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserStatsUnloaded_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"UserStatsUnloaded",
		sizeof(FUserStatsUnloaded),
		alignof(FUserStatsUnloaded),
		Z_Construct_UScriptStruct_FUserStatsUnloaded_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserStatsUnloaded_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUserStatsUnloaded_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserStatsUnloaded_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUserStatsUnloaded()
	{
		if (!Z_Registration_Info_UScriptStruct_UserStatsUnloaded.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UserStatsUnloaded.InnerSingleton, Z_Construct_UScriptStruct_FUserStatsUnloaded_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UserStatsUnloaded.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LeaderboardScoresDownloaded;
class UScriptStruct* FLeaderboardScoresDownloaded::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardScoresDownloaded.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LeaderboardScoresDownloaded.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("LeaderboardScoresDownloaded"));
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardScoresDownloaded.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FLeaderboardScoresDownloaded>()
{
	return FLeaderboardScoresDownloaded::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamLeaderboard_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamLeaderboardEntries_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboardEntries;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntryCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EntryCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeaderboardScoresDownloaded>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::NewProp_SteamLeaderboard_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLeaderboardScoresDownloaded, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::NewProp_SteamLeaderboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::NewProp_SteamLeaderboard_MetaData)) }; // 4088993893
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::NewProp_SteamLeaderboardEntries_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::NewProp_SteamLeaderboardEntries = { "SteamLeaderboardEntries", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLeaderboardScoresDownloaded, SteamLeaderboardEntries), Z_Construct_UScriptStruct_FSteamLeaderboardEntries, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::NewProp_SteamLeaderboardEntries_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::NewProp_SteamLeaderboardEntries_MetaData)) }; // 2809065619
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::NewProp_EntryCount_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::NewProp_EntryCount = { "EntryCount", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLeaderboardScoresDownloaded, EntryCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::NewProp_EntryCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::NewProp_EntryCount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::NewProp_SteamLeaderboard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::NewProp_SteamLeaderboardEntries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::NewProp_EntryCount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"LeaderboardScoresDownloaded",
		sizeof(FLeaderboardScoresDownloaded),
		alignof(FLeaderboardScoresDownloaded),
		Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded()
	{
		if (!Z_Registration_Info_UScriptStruct_LeaderboardScoresDownloaded.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LeaderboardScoresDownloaded.InnerSingleton, Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LeaderboardScoresDownloaded.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LeaderboardScoresDownloadedForUsers;
class UScriptStruct* FLeaderboardScoresDownloadedForUsers::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardScoresDownloadedForUsers.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LeaderboardScoresDownloadedForUsers.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("LeaderboardScoresDownloadedForUsers"));
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardScoresDownloadedForUsers.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FLeaderboardScoresDownloadedForUsers>()
{
	return FLeaderboardScoresDownloadedForUsers::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamLeaderboard_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamLeaderboardEntries_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboardEntries;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntryCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EntryCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeaderboardScoresDownloadedForUsers>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewProp_SteamLeaderboard_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLeaderboardScoresDownloadedForUsers, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewProp_SteamLeaderboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewProp_SteamLeaderboard_MetaData)) }; // 4088993893
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewProp_SteamLeaderboardEntries_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewProp_SteamLeaderboardEntries = { "SteamLeaderboardEntries", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLeaderboardScoresDownloadedForUsers, SteamLeaderboardEntries), Z_Construct_UScriptStruct_FSteamLeaderboardEntries, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewProp_SteamLeaderboardEntries_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewProp_SteamLeaderboardEntries_MetaData)) }; // 2809065619
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewProp_EntryCount_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewProp_EntryCount = { "EntryCount", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLeaderboardScoresDownloadedForUsers, EntryCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewProp_EntryCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewProp_EntryCount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewProp_SteamLeaderboard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewProp_SteamLeaderboardEntries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewProp_EntryCount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"LeaderboardScoresDownloadedForUsers",
		sizeof(FLeaderboardScoresDownloadedForUsers),
		alignof(FLeaderboardScoresDownloadedForUsers),
		Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers()
	{
		if (!Z_Registration_Info_UScriptStruct_LeaderboardScoresDownloadedForUsers.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LeaderboardScoresDownloadedForUsers.InnerSingleton, Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LeaderboardScoresDownloadedForUsers.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RequestUserStatsData;
class UScriptStruct* FRequestUserStatsData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RequestUserStatsData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RequestUserStatsData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRequestUserStatsData, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("RequestUserStatsData"));
	}
	return Z_Registration_Info_UScriptStruct_RequestUserStatsData.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FRequestUserStatsData>()
{
	return FRequestUserStatsData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRequestUserStatsData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDUser_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRequestUserStatsData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_GameID_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRequestUserStatsData, GameID), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_GameID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_GameID_MetaData)) }; // 419490198
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRequestUserStatsData, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_Result_MetaData)) }; // 2739532951
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_SteamIDUser_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRequestUserStatsData, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_SteamIDUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_SteamIDUser_MetaData)) }; // 1620016601
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_GameID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_SteamIDUser,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"RequestUserStatsData",
		sizeof(FRequestUserStatsData),
		alignof(FRequestUserStatsData),
		Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRequestUserStatsData()
	{
		if (!Z_Registration_Info_UScriptStruct_RequestUserStatsData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RequestUserStatsData.InnerSingleton, Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RequestUserStatsData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LeaderboardScoreUploaded;
class UScriptStruct* FLeaderboardScoreUploaded::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardScoreUploaded.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LeaderboardScoreUploaded.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeaderboardScoreUploaded, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("LeaderboardScoreUploaded"));
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardScoreUploaded.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FLeaderboardScoreUploaded>()
{
	return FLeaderboardScoreUploaded::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[];
#endif
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamLeaderboard_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bScoreChanged_MetaData[];
#endif
		static void NewProp_bScoreChanged_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bScoreChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalRankNew_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GlobalRankNew;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalRankPrevious_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GlobalRankPrevious;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeaderboardScoreUploaded>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_bSuccess_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((FLeaderboardScoreUploaded*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLeaderboardScoreUploaded), &Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_bSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_bSuccess_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_SteamLeaderboard_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLeaderboardScoreUploaded, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_SteamLeaderboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_SteamLeaderboard_MetaData)) }; // 4088993893
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_Score_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLeaderboardScoreUploaded, Score), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_Score_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_Score_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_bScoreChanged_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_bScoreChanged_SetBit(void* Obj)
	{
		((FLeaderboardScoreUploaded*)Obj)->bScoreChanged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_bScoreChanged = { "bScoreChanged", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLeaderboardScoreUploaded), &Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_bScoreChanged_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_bScoreChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_bScoreChanged_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_GlobalRankNew_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_GlobalRankNew = { "GlobalRankNew", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLeaderboardScoreUploaded, GlobalRankNew), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_GlobalRankNew_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_GlobalRankNew_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_GlobalRankPrevious_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_GlobalRankPrevious = { "GlobalRankPrevious", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLeaderboardScoreUploaded, GlobalRankPrevious), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_GlobalRankPrevious_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_GlobalRankPrevious_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_SteamLeaderboard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_Score,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_bScoreChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_GlobalRankNew,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_GlobalRankPrevious,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"LeaderboardScoreUploaded",
		sizeof(FLeaderboardScoreUploaded),
		alignof(FLeaderboardScoreUploaded),
		Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardScoreUploaded()
	{
		if (!Z_Registration_Info_UScriptStruct_LeaderboardScoreUploaded.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LeaderboardScoreUploaded.InnerSingleton, Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LeaderboardScoreUploaded.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AttachLeaderboardUGCData;
class UScriptStruct* FAttachLeaderboardUGCData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AttachLeaderboardUGCData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AttachLeaderboardUGCData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttachLeaderboardUGCData, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("AttachLeaderboardUGCData"));
	}
	return Z_Registration_Info_UScriptStruct_AttachLeaderboardUGCData.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FAttachLeaderboardUGCData>()
{
	return FAttachLeaderboardUGCData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamLeaderboard_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttachLeaderboardUGCData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::NewProp_SteamLeaderboard_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAttachLeaderboardUGCData, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::NewProp_SteamLeaderboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::NewProp_SteamLeaderboard_MetaData)) }; // 4088993893
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAttachLeaderboardUGCData, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::NewProp_Result_MetaData)) }; // 2739532951
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::NewProp_SteamLeaderboard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"AttachLeaderboardUGCData",
		sizeof(FAttachLeaderboardUGCData),
		alignof(FAttachLeaderboardUGCData),
		Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAttachLeaderboardUGCData()
	{
		if (!Z_Registration_Info_UScriptStruct_AttachLeaderboardUGCData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AttachLeaderboardUGCData.InnerSingleton, Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AttachLeaderboardUGCData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LeaderboardFindResult;
class UScriptStruct* FLeaderboardFindResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardFindResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LeaderboardFindResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeaderboardFindResult, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("LeaderboardFindResult"));
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardFindResult.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FLeaderboardFindResult>()
{
	return FLeaderboardFindResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamLeaderboard_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLeaderboardFound_MetaData[];
#endif
		static void NewProp_bLeaderboardFound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLeaderboardFound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeaderboardFindResult>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::NewProp_SteamLeaderboard_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLeaderboardFindResult, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::NewProp_SteamLeaderboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::NewProp_SteamLeaderboard_MetaData)) }; // 4088993893
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::NewProp_bLeaderboardFound_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::NewProp_bLeaderboardFound_SetBit(void* Obj)
	{
		((FLeaderboardFindResult*)Obj)->bLeaderboardFound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::NewProp_bLeaderboardFound = { "bLeaderboardFound", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLeaderboardFindResult), &Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::NewProp_bLeaderboardFound_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::NewProp_bLeaderboardFound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::NewProp_bLeaderboardFound_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::NewProp_SteamLeaderboard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::NewProp_bLeaderboardFound,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"LeaderboardFindResult",
		sizeof(FLeaderboardFindResult),
		alignof(FLeaderboardFindResult),
		Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardFindResult()
	{
		if (!Z_Registration_Info_UScriptStruct_LeaderboardFindResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LeaderboardFindResult.InnerSingleton, Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LeaderboardFindResult.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FindOrCreateLeaderboardData;
class UScriptStruct* FFindOrCreateLeaderboardData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FindOrCreateLeaderboardData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FindOrCreateLeaderboardData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("FindOrCreateLeaderboardData"));
	}
	return Z_Registration_Info_UScriptStruct_FindOrCreateLeaderboardData.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FFindOrCreateLeaderboardData>()
{
	return FFindOrCreateLeaderboardData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamLeaderboard_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLeaderboardFound_MetaData[];
#endif
		static void NewProp_bLeaderboardFound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLeaderboardFound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFindOrCreateLeaderboardData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::NewProp_SteamLeaderboard_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFindOrCreateLeaderboardData, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::NewProp_SteamLeaderboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::NewProp_SteamLeaderboard_MetaData)) }; // 4088993893
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::NewProp_bLeaderboardFound_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::NewProp_bLeaderboardFound_SetBit(void* Obj)
	{
		((FFindOrCreateLeaderboardData*)Obj)->bLeaderboardFound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::NewProp_bLeaderboardFound = { "bLeaderboardFound", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FFindOrCreateLeaderboardData), &Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::NewProp_bLeaderboardFound_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::NewProp_bLeaderboardFound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::NewProp_bLeaderboardFound_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::NewProp_SteamLeaderboard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::NewProp_bLeaderboardFound,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"FindOrCreateLeaderboardData",
		sizeof(FFindOrCreateLeaderboardData),
		alignof(FFindOrCreateLeaderboardData),
		Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData()
	{
		if (!Z_Registration_Info_UScriptStruct_FindOrCreateLeaderboardData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FindOrCreateLeaderboardData.InnerSingleton, Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FindOrCreateLeaderboardData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NumberOfCurrentPlayers;
class UScriptStruct* FNumberOfCurrentPlayers::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NumberOfCurrentPlayers.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NumberOfCurrentPlayers.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNumberOfCurrentPlayers, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("NumberOfCurrentPlayers"));
	}
	return Z_Registration_Info_UScriptStruct_NumberOfCurrentPlayers.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FNumberOfCurrentPlayers>()
{
	return FNumberOfCurrentPlayers::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[];
#endif
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Players_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Players;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNumberOfCurrentPlayers>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::NewProp_bSuccess_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((FNumberOfCurrentPlayers*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNumberOfCurrentPlayers), &Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::NewProp_bSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::NewProp_bSuccess_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::NewProp_Players_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::NewProp_Players = { "Players", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNumberOfCurrentPlayers, Players), METADATA_PARAMS(Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::NewProp_Players_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::NewProp_Players_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::NewProp_Players,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"NumberOfCurrentPlayers",
		sizeof(FNumberOfCurrentPlayers),
		alignof(FNumberOfCurrentPlayers),
		Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNumberOfCurrentPlayers()
	{
		if (!Z_Registration_Info_UScriptStruct_NumberOfCurrentPlayers.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NumberOfCurrentPlayers.InnerSingleton, Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NumberOfCurrentPlayers.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GlobalAchievementPercentagesReady;
class UScriptStruct* FGlobalAchievementPercentagesReady::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GlobalAchievementPercentagesReady.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GlobalAchievementPercentagesReady.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("GlobalAchievementPercentagesReady"));
	}
	return Z_Registration_Info_UScriptStruct_GlobalAchievementPercentagesReady.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FGlobalAchievementPercentagesReady>()
{
	return FGlobalAchievementPercentagesReady::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGlobalAchievementPercentagesReady>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::NewProp_GameID_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGlobalAchievementPercentagesReady, GameID), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::NewProp_GameID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::NewProp_GameID_MetaData)) }; // 419490198
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGlobalAchievementPercentagesReady, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::NewProp_Result_MetaData)) }; // 2739532951
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::NewProp_GameID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"GlobalAchievementPercentagesReady",
		sizeof(FGlobalAchievementPercentagesReady),
		alignof(FGlobalAchievementPercentagesReady),
		Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady()
	{
		if (!Z_Registration_Info_UScriptStruct_GlobalAchievementPercentagesReady.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GlobalAchievementPercentagesReady.InnerSingleton, Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GlobalAchievementPercentagesReady.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GlobalStatsReceived;
class UScriptStruct* FGlobalStatsReceived::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GlobalStatsReceived.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GlobalStatsReceived.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGlobalStatsReceived, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("GlobalStatsReceived"));
	}
	return Z_Registration_Info_UScriptStruct_GlobalStatsReceived.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FGlobalStatsReceived>()
{
	return FGlobalStatsReceived::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGlobalStatsReceived>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::NewProp_GameID_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGlobalStatsReceived, GameID), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::NewProp_GameID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::NewProp_GameID_MetaData)) }; // 419490198
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGlobalStatsReceived, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::NewProp_Result_MetaData)) }; // 2739532951
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::NewProp_GameID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"GlobalStatsReceived",
		sizeof(FGlobalStatsReceived),
		alignof(FGlobalStatsReceived),
		Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGlobalStatsReceived()
	{
		if (!Z_Registration_Info_UScriptStruct_GlobalStatsReceived.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GlobalStatsReceived.InnerSingleton, Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GlobalStatsReceived.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementIconFetched__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnUserAchievementIconFetched_Parms
		{
			FUserAchievementIconFetched Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementIconFetched__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementIconFetched__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnUserAchievementIconFetched_Parms, Data), Z_Construct_UScriptStruct_FUserAchievementIconFetched, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementIconFetched__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementIconFetched__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 206640660
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementIconFetched__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementIconFetched__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementIconFetched__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementIconFetched__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnUserAchievementIconFetched__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementIconFetched__DelegateSignature_Statics::_Script_SteamCore_eventOnUserAchievementIconFetched_Parms), Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementIconFetched__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementIconFetched__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementIconFetched__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementIconFetched__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementIconFetched__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementIconFetched__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnUserAchievementIconFetched_DelegateWrapper(const FMulticastScriptDelegate& OnUserAchievementIconFetched, FUserAchievementIconFetched const& Data)
{
	struct _Script_SteamCore_eventOnUserAchievementIconFetched_Parms
	{
		FUserAchievementIconFetched Data;
	};
	_Script_SteamCore_eventOnUserAchievementIconFetched_Parms Parms;
	Parms.Data=Data;
	OnUserAchievementIconFetched.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementStored__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnUserAchievementStored_Parms
		{
			FUserAchievementStored Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementStored__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementStored__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnUserAchievementStored_Parms, Data), Z_Construct_UScriptStruct_FUserAchievementStored, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementStored__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementStored__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 1763453557
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementStored__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementStored__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementStored__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementStored__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnUserAchievementStored__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementStored__DelegateSignature_Statics::_Script_SteamCore_eventOnUserAchievementStored_Parms), Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementStored__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementStored__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementStored__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementStored__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementStored__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementStored__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnUserAchievementStored_DelegateWrapper(const FMulticastScriptDelegate& OnUserAchievementStored, FUserAchievementStored const& Data)
{
	struct _Script_SteamCore_eventOnUserAchievementStored_Parms
	{
		FUserAchievementStored Data;
	};
	_Script_SteamCore_eventOnUserAchievementStored_Parms Parms;
	Parms.Data=Data;
	OnUserAchievementStored.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamCore_OnUserStatsReceived__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnUserStatsReceived_Parms
		{
			FUserStatsReceived Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnUserStatsReceived__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnUserStatsReceived__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnUserStatsReceived_Parms, Data), Z_Construct_UScriptStruct_FUserStatsReceived, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnUserStatsReceived__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUserStatsReceived__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 45900673
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnUserStatsReceived__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnUserStatsReceived__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnUserStatsReceived__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnUserStatsReceived__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnUserStatsReceived__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnUserStatsReceived__DelegateSignature_Statics::_Script_SteamCore_eventOnUserStatsReceived_Parms), Z_Construct_UDelegateFunction_SteamCore_OnUserStatsReceived__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUserStatsReceived__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnUserStatsReceived__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUserStatsReceived__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnUserStatsReceived__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnUserStatsReceived__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnUserStatsReceived_DelegateWrapper(const FMulticastScriptDelegate& OnUserStatsReceived, FUserStatsReceived const& Data)
{
	struct _Script_SteamCore_eventOnUserStatsReceived_Parms
	{
		FUserStatsReceived Data;
	};
	_Script_SteamCore_eventOnUserStatsReceived_Parms Parms;
	Parms.Data=Data;
	OnUserStatsReceived.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamCore_OnUserStatsStored__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnUserStatsStored_Parms
		{
			FUserStatsStored Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnUserStatsStored__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnUserStatsStored__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnUserStatsStored_Parms, Data), Z_Construct_UScriptStruct_FUserStatsStored, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnUserStatsStored__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUserStatsStored__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 4089980385
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnUserStatsStored__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnUserStatsStored__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnUserStatsStored__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnUserStatsStored__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnUserStatsStored__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnUserStatsStored__DelegateSignature_Statics::_Script_SteamCore_eventOnUserStatsStored_Parms), Z_Construct_UDelegateFunction_SteamCore_OnUserStatsStored__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUserStatsStored__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnUserStatsStored__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUserStatsStored__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnUserStatsStored__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnUserStatsStored__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnUserStatsStored_DelegateWrapper(const FMulticastScriptDelegate& OnUserStatsStored, FUserStatsStored const& Data)
{
	struct _Script_SteamCore_eventOnUserStatsStored_Parms
	{
		FUserStatsStored Data;
	};
	_Script_SteamCore_eventOnUserStatsStored_Parms Parms;
	Parms.Data=Data;
	OnUserStatsStored.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamCore_OnUserStatsUnloaded__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnUserStatsUnloaded_Parms
		{
			FUserStatsUnloaded Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnUserStatsUnloaded__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnUserStatsUnloaded__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnUserStatsUnloaded_Parms, Data), Z_Construct_UScriptStruct_FUserStatsUnloaded, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnUserStatsUnloaded__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUserStatsUnloaded__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 9352784
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnUserStatsUnloaded__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnUserStatsUnloaded__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnUserStatsUnloaded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnUserStatsUnloaded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnUserStatsUnloaded__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnUserStatsUnloaded__DelegateSignature_Statics::_Script_SteamCore_eventOnUserStatsUnloaded_Parms), Z_Construct_UDelegateFunction_SteamCore_OnUserStatsUnloaded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUserStatsUnloaded__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnUserStatsUnloaded__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUserStatsUnloaded__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnUserStatsUnloaded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnUserStatsUnloaded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnUserStatsUnloaded_DelegateWrapper(const FMulticastScriptDelegate& OnUserStatsUnloaded, FUserStatsUnloaded const& Data)
{
	struct _Script_SteamCore_eventOnUserStatsUnloaded_Parms
	{
		FUserStatsUnloaded Data;
	};
	_Script_SteamCore_eventOnUserStatsUnloaded_Parms Parms;
	Parms.Data=Data;
	OnUserStatsUnloaded.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnDownloadLeaderboardEntries_Parms
		{
			FLeaderboardScoresDownloaded Data;
			bool bWasSuccessful;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnDownloadLeaderboardEntries_Parms, Data), Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 2238525777
	void Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnDownloadLeaderboardEntries_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamCore_eventOnDownloadLeaderboardEntries_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnDownloadLeaderboardEntries__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature_Statics::_Script_SteamCore_eventOnDownloadLeaderboardEntries_Parms), Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnDownloadLeaderboardEntries_DelegateWrapper(const FScriptDelegate& OnDownloadLeaderboardEntries, FLeaderboardScoresDownloaded const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventOnDownloadLeaderboardEntries_Parms
	{
		FLeaderboardScoresDownloaded Data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventOnDownloadLeaderboardEntries_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnDownloadLeaderboardEntries.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnDownloadLeaderboardEntriesForUsers_Parms
		{
			FLeaderboardScoresDownloadedForUsers Data;
			bool bWasSuccessful;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnDownloadLeaderboardEntriesForUsers_Parms, Data), Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 3335779506
	void Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnDownloadLeaderboardEntriesForUsers_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamCore_eventOnDownloadLeaderboardEntriesForUsers_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnDownloadLeaderboardEntriesForUsers__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::_Script_SteamCore_eventOnDownloadLeaderboardEntriesForUsers_Parms), Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnDownloadLeaderboardEntriesForUsers_DelegateWrapper(const FScriptDelegate& OnDownloadLeaderboardEntriesForUsers, FLeaderboardScoresDownloadedForUsers const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventOnDownloadLeaderboardEntriesForUsers_Parms
	{
		FLeaderboardScoresDownloadedForUsers Data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventOnDownloadLeaderboardEntriesForUsers_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnDownloadLeaderboardEntriesForUsers.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnRequestUserStats_Parms
		{
			FRequestUserStatsData Data;
			bool bWasSuccessful;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnRequestUserStats_Parms, Data), Z_Construct_UScriptStruct_FRequestUserStatsData, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 569533018
	void Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnRequestUserStats_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamCore_eventOnRequestUserStats_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnRequestUserStats__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature_Statics::_Script_SteamCore_eventOnRequestUserStats_Parms), Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnRequestUserStats_DelegateWrapper(const FScriptDelegate& OnRequestUserStats, FRequestUserStatsData const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventOnRequestUserStats_Parms
	{
		FRequestUserStatsData Data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventOnRequestUserStats_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnRequestUserStats.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnUploadLeaderboardScore_Parms
		{
			FLeaderboardScoreUploaded Data;
			bool bWasSuccessful;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnUploadLeaderboardScore_Parms, Data), Z_Construct_UScriptStruct_FLeaderboardScoreUploaded, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 1063787601
	void Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnUploadLeaderboardScore_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamCore_eventOnUploadLeaderboardScore_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnUploadLeaderboardScore__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature_Statics::_Script_SteamCore_eventOnUploadLeaderboardScore_Parms), Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnUploadLeaderboardScore_DelegateWrapper(const FScriptDelegate& OnUploadLeaderboardScore, FLeaderboardScoreUploaded const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventOnUploadLeaderboardScore_Parms
	{
		FLeaderboardScoreUploaded Data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventOnUploadLeaderboardScore_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnUploadLeaderboardScore.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnAttachLeaderboardUGC_Parms
		{
			FAttachLeaderboardUGCData Data;
			bool bWasSuccessful;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnAttachLeaderboardUGC_Parms, Data), Z_Construct_UScriptStruct_FAttachLeaderboardUGCData, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 3338991537
	void Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnAttachLeaderboardUGC_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamCore_eventOnAttachLeaderboardUGC_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnAttachLeaderboardUGC__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature_Statics::_Script_SteamCore_eventOnAttachLeaderboardUGC_Parms), Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAttachLeaderboardUGC_DelegateWrapper(const FScriptDelegate& OnAttachLeaderboardUGC, FAttachLeaderboardUGCData const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventOnAttachLeaderboardUGC_Parms
	{
		FAttachLeaderboardUGCData Data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventOnAttachLeaderboardUGC_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnAttachLeaderboardUGC.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnFindLeaderboard_Parms
		{
			FLeaderboardFindResult Data;
			bool bWasSuccessful;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnFindLeaderboard_Parms, Data), Z_Construct_UScriptStruct_FLeaderboardFindResult, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 1272677097
	void Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnFindLeaderboard_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamCore_eventOnFindLeaderboard_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnFindLeaderboard__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature_Statics::_Script_SteamCore_eventOnFindLeaderboard_Parms), Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnFindLeaderboard_DelegateWrapper(const FScriptDelegate& OnFindLeaderboard, FLeaderboardFindResult const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventOnFindLeaderboard_Parms
	{
		FLeaderboardFindResult Data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventOnFindLeaderboard_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnFindLeaderboard.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnFindOrCreateLeaderboard_Parms
		{
			FFindOrCreateLeaderboardData Data;
			bool bWasSuccessful;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnFindOrCreateLeaderboard_Parms, Data), Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 2191468412
	void Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnFindOrCreateLeaderboard_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamCore_eventOnFindOrCreateLeaderboard_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnFindOrCreateLeaderboard__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature_Statics::_Script_SteamCore_eventOnFindOrCreateLeaderboard_Parms), Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnFindOrCreateLeaderboard_DelegateWrapper(const FScriptDelegate& OnFindOrCreateLeaderboard, FFindOrCreateLeaderboardData const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventOnFindOrCreateLeaderboard_Parms
	{
		FFindOrCreateLeaderboardData Data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventOnFindOrCreateLeaderboard_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnFindOrCreateLeaderboard.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnGetNumberOfCurrentPlayers_Parms
		{
			FNumberOfCurrentPlayers Data;
			bool bWasSuccessful;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnGetNumberOfCurrentPlayers_Parms, Data), Z_Construct_UScriptStruct_FNumberOfCurrentPlayers, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 4023784123
	void Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnGetNumberOfCurrentPlayers_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamCore_eventOnGetNumberOfCurrentPlayers_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnGetNumberOfCurrentPlayers__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::_Script_SteamCore_eventOnGetNumberOfCurrentPlayers_Parms), Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnGetNumberOfCurrentPlayers_DelegateWrapper(const FScriptDelegate& OnGetNumberOfCurrentPlayers, FNumberOfCurrentPlayers const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventOnGetNumberOfCurrentPlayers_Parms
	{
		FNumberOfCurrentPlayers Data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventOnGetNumberOfCurrentPlayers_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnGetNumberOfCurrentPlayers.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnRequestGlobalAchievementPercentages_Parms
		{
			FGlobalAchievementPercentagesReady Data;
			bool bWasSuccessful;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnRequestGlobalAchievementPercentages_Parms, Data), Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 439512617
	void Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnRequestGlobalAchievementPercentages_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamCore_eventOnRequestGlobalAchievementPercentages_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnRequestGlobalAchievementPercentages__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::_Script_SteamCore_eventOnRequestGlobalAchievementPercentages_Parms), Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnRequestGlobalAchievementPercentages_DelegateWrapper(const FScriptDelegate& OnRequestGlobalAchievementPercentages, FGlobalAchievementPercentagesReady const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventOnRequestGlobalAchievementPercentages_Parms
	{
		FGlobalAchievementPercentagesReady Data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventOnRequestGlobalAchievementPercentages_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnRequestGlobalAchievementPercentages.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnRequestGlobalStats_Parms
		{
			FGlobalStatsReceived Data;
			bool bWasSuccessful;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnRequestGlobalStats_Parms, Data), Z_Construct_UScriptStruct_FGlobalStatsReceived, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 3685984245
	void Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnRequestGlobalStats_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamCore_eventOnRequestGlobalStats_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnRequestGlobalStats__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature_Statics::_Script_SteamCore_eventOnRequestGlobalStats_Parms), Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnRequestGlobalStats_DelegateWrapper(const FScriptDelegate& OnRequestGlobalStats, FGlobalStatsReceived const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventOnRequestGlobalStats_Parms
	{
		FGlobalStatsReceived Data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventOnRequestGlobalStats_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnRequestGlobalStats.ProcessDelegate<UObject>(&Parms);
}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUserStats_SteamUserStatsTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUserStats_SteamUserStatsTypes_h_Statics::EnumInfo[] = {
		{ ESteamLeaderboardDataRequest_StaticEnum, TEXT("ESteamLeaderboardDataRequest"), &Z_Registration_Info_UEnum_ESteamLeaderboardDataRequest, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 310455581U) },
		{ ESteamLeaderboardSortMethod_StaticEnum, TEXT("ESteamLeaderboardSortMethod"), &Z_Registration_Info_UEnum_ESteamLeaderboardSortMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3113466001U) },
		{ ESteamLeaderboardDisplayType_StaticEnum, TEXT("ESteamLeaderboardDisplayType"), &Z_Registration_Info_UEnum_ESteamLeaderboardDisplayType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1376354025U) },
		{ ESteamLeaderboardUploadScoreMethod_StaticEnum, TEXT("ESteamLeaderboardUploadScoreMethod"), &Z_Registration_Info_UEnum_ESteamLeaderboardUploadScoreMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1320341701U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUserStats_SteamUserStatsTypes_h_Statics::ScriptStructInfo[] = {
		{ FSteamLeaderboardEntries::StaticStruct, Z_Construct_UScriptStruct_FSteamLeaderboardEntries_Statics::NewStructOps, TEXT("SteamLeaderboardEntries"), &Z_Registration_Info_UScriptStruct_SteamLeaderboardEntries, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamLeaderboardEntries), 2809065619U) },
		{ FSteamLeaderboardEntry::StaticStruct, Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewStructOps, TEXT("SteamLeaderboardEntry"), &Z_Registration_Info_UScriptStruct_SteamLeaderboardEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamLeaderboardEntry), 3515841999U) },
		{ FSteamLeaderboard::StaticStruct, Z_Construct_UScriptStruct_FSteamLeaderboard_Statics::NewStructOps, TEXT("SteamLeaderboard"), &Z_Registration_Info_UScriptStruct_SteamLeaderboard, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamLeaderboard), 4088993893U) },
		{ FUserAchievementIconFetched::StaticStruct, Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewStructOps, TEXT("UserAchievementIconFetched"), &Z_Registration_Info_UScriptStruct_UserAchievementIconFetched, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUserAchievementIconFetched), 206640660U) },
		{ FUserAchievementStored::StaticStruct, Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewStructOps, TEXT("UserAchievementStored"), &Z_Registration_Info_UScriptStruct_UserAchievementStored, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUserAchievementStored), 1763453557U) },
		{ FUserStatsReceived::StaticStruct, Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewStructOps, TEXT("UserStatsReceived"), &Z_Registration_Info_UScriptStruct_UserStatsReceived, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUserStatsReceived), 45900673U) },
		{ FUserStatsStored::StaticStruct, Z_Construct_UScriptStruct_FUserStatsStored_Statics::NewStructOps, TEXT("UserStatsStored"), &Z_Registration_Info_UScriptStruct_UserStatsStored, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUserStatsStored), 4089980385U) },
		{ FUserStatsUnloaded::StaticStruct, Z_Construct_UScriptStruct_FUserStatsUnloaded_Statics::NewStructOps, TEXT("UserStatsUnloaded"), &Z_Registration_Info_UScriptStruct_UserStatsUnloaded, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUserStatsUnloaded), 9352784U) },
		{ FLeaderboardScoresDownloaded::StaticStruct, Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::NewStructOps, TEXT("LeaderboardScoresDownloaded"), &Z_Registration_Info_UScriptStruct_LeaderboardScoresDownloaded, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLeaderboardScoresDownloaded), 2238525777U) },
		{ FLeaderboardScoresDownloadedForUsers::StaticStruct, Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewStructOps, TEXT("LeaderboardScoresDownloadedForUsers"), &Z_Registration_Info_UScriptStruct_LeaderboardScoresDownloadedForUsers, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLeaderboardScoresDownloadedForUsers), 3335779506U) },
		{ FRequestUserStatsData::StaticStruct, Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewStructOps, TEXT("RequestUserStatsData"), &Z_Registration_Info_UScriptStruct_RequestUserStatsData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRequestUserStatsData), 569533018U) },
		{ FLeaderboardScoreUploaded::StaticStruct, Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewStructOps, TEXT("LeaderboardScoreUploaded"), &Z_Registration_Info_UScriptStruct_LeaderboardScoreUploaded, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLeaderboardScoreUploaded), 1063787601U) },
		{ FAttachLeaderboardUGCData::StaticStruct, Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::NewStructOps, TEXT("AttachLeaderboardUGCData"), &Z_Registration_Info_UScriptStruct_AttachLeaderboardUGCData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAttachLeaderboardUGCData), 3338991537U) },
		{ FLeaderboardFindResult::StaticStruct, Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::NewStructOps, TEXT("LeaderboardFindResult"), &Z_Registration_Info_UScriptStruct_LeaderboardFindResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLeaderboardFindResult), 1272677097U) },
		{ FFindOrCreateLeaderboardData::StaticStruct, Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::NewStructOps, TEXT("FindOrCreateLeaderboardData"), &Z_Registration_Info_UScriptStruct_FindOrCreateLeaderboardData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFindOrCreateLeaderboardData), 2191468412U) },
		{ FNumberOfCurrentPlayers::StaticStruct, Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::NewStructOps, TEXT("NumberOfCurrentPlayers"), &Z_Registration_Info_UScriptStruct_NumberOfCurrentPlayers, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNumberOfCurrentPlayers), 4023784123U) },
		{ FGlobalAchievementPercentagesReady::StaticStruct, Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::NewStructOps, TEXT("GlobalAchievementPercentagesReady"), &Z_Registration_Info_UScriptStruct_GlobalAchievementPercentagesReady, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGlobalAchievementPercentagesReady), 439512617U) },
		{ FGlobalStatsReceived::StaticStruct, Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::NewStructOps, TEXT("GlobalStatsReceived"), &Z_Registration_Info_UScriptStruct_GlobalStatsReceived, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGlobalStatsReceived), 3685984245U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUserStats_SteamUserStatsTypes_h_1376010543(TEXT("/Script/SteamCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUserStats_SteamUserStatsTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUserStats_SteamUserStatsTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUserStats_SteamUserStatsTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUserStats_SteamUserStatsTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
