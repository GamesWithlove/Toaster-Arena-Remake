// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamUserStats/SteamUserStatsTypes.h"
#include "SteamTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSteamUserStatsTypes() {}

// ********** Begin Cross Module References ********************************************************
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
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ESteamLeaderboardDataRequest **********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamLeaderboardDataRequest;
static UEnum* ESteamLeaderboardDataRequest_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamLeaderboardDataRequest.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamLeaderboardDataRequest.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamLeaderboardDataRequest, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamLeaderboardDataRequest"));
	}
	return Z_Registration_Info_UEnum_ESteamLeaderboardDataRequest.OuterSingleton;
}
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamLeaderboardDataRequest>()
{
	return ESteamLeaderboardDataRequest_StaticEnum();
}
struct Z_Construct_UEnum_SteamCore_ESteamLeaderboardDataRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Enums\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "Friends.Name", "ESteamLeaderboardDataRequest::Friends" },
		{ "Global.Name", "ESteamLeaderboardDataRequest::Global" },
		{ "GlobalAroundUser.Name", "ESteamLeaderboardDataRequest::GlobalAroundUser" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Enums\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
		{ "Users.Name", "ESteamLeaderboardDataRequest::Users" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamLeaderboardDataRequest::Global", (int64)ESteamLeaderboardDataRequest::Global },
		{ "ESteamLeaderboardDataRequest::GlobalAroundUser", (int64)ESteamLeaderboardDataRequest::GlobalAroundUser },
		{ "ESteamLeaderboardDataRequest::Friends", (int64)ESteamLeaderboardDataRequest::Friends },
		{ "ESteamLeaderboardDataRequest::Users", (int64)ESteamLeaderboardDataRequest::Users },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamCore_ESteamLeaderboardDataRequest_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamLeaderboardDataRequest_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	"ESteamLeaderboardDataRequest",
	"ESteamLeaderboardDataRequest",
	Z_Construct_UEnum_SteamCore_ESteamLeaderboardDataRequest_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamLeaderboardDataRequest_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamLeaderboardDataRequest_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCore_ESteamLeaderboardDataRequest_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCore_ESteamLeaderboardDataRequest()
{
	if (!Z_Registration_Info_UEnum_ESteamLeaderboardDataRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamLeaderboardDataRequest.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamLeaderboardDataRequest_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamLeaderboardDataRequest.InnerSingleton;
}
// ********** End Enum ESteamLeaderboardDataRequest ************************************************

// ********** Begin Enum ESteamLeaderboardSortMethod ***********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamLeaderboardSortMethod;
static UEnum* ESteamLeaderboardSortMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamLeaderboardSortMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamLeaderboardSortMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamLeaderboardSortMethod, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamLeaderboardSortMethod"));
	}
	return Z_Registration_Info_UEnum_ESteamLeaderboardSortMethod.OuterSingleton;
}
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamLeaderboardSortMethod>()
{
	return ESteamLeaderboardSortMethod_StaticEnum();
}
struct Z_Construct_UEnum_SteamCore_ESteamLeaderboardSortMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Ascending.Name", "ESteamLeaderboardSortMethod::Ascending" },
		{ "BlueprintType", "true" },
		{ "Descending.Name", "ESteamLeaderboardSortMethod::Descending" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
		{ "None.Name", "ESteamLeaderboardSortMethod::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamLeaderboardSortMethod::None", (int64)ESteamLeaderboardSortMethod::None },
		{ "ESteamLeaderboardSortMethod::Ascending", (int64)ESteamLeaderboardSortMethod::Ascending },
		{ "ESteamLeaderboardSortMethod::Descending", (int64)ESteamLeaderboardSortMethod::Descending },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamCore_ESteamLeaderboardSortMethod_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamLeaderboardSortMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	"ESteamLeaderboardSortMethod",
	"ESteamLeaderboardSortMethod",
	Z_Construct_UEnum_SteamCore_ESteamLeaderboardSortMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamLeaderboardSortMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamLeaderboardSortMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCore_ESteamLeaderboardSortMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCore_ESteamLeaderboardSortMethod()
{
	if (!Z_Registration_Info_UEnum_ESteamLeaderboardSortMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamLeaderboardSortMethod.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamLeaderboardSortMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamLeaderboardSortMethod.InnerSingleton;
}
// ********** End Enum ESteamLeaderboardSortMethod *************************************************

// ********** Begin Enum ESteamLeaderboardDisplayType **********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamLeaderboardDisplayType;
static UEnum* ESteamLeaderboardDisplayType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamLeaderboardDisplayType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamLeaderboardDisplayType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamLeaderboardDisplayType, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamLeaderboardDisplayType"));
	}
	return Z_Registration_Info_UEnum_ESteamLeaderboardDisplayType.OuterSingleton;
}
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamLeaderboardDisplayType>()
{
	return ESteamLeaderboardDisplayType_StaticEnum();
}
struct Z_Construct_UEnum_SteamCore_ESteamLeaderboardDisplayType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
		{ "None.Name", "ESteamLeaderboardDisplayType::None" },
		{ "Numeric.Name", "ESteamLeaderboardDisplayType::Numeric" },
		{ "TimeMilliSeconds.Name", "ESteamLeaderboardDisplayType::TimeMilliSeconds" },
		{ "TimeSeconds.Name", "ESteamLeaderboardDisplayType::TimeSeconds" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamLeaderboardDisplayType::None", (int64)ESteamLeaderboardDisplayType::None },
		{ "ESteamLeaderboardDisplayType::Numeric", (int64)ESteamLeaderboardDisplayType::Numeric },
		{ "ESteamLeaderboardDisplayType::TimeSeconds", (int64)ESteamLeaderboardDisplayType::TimeSeconds },
		{ "ESteamLeaderboardDisplayType::TimeMilliSeconds", (int64)ESteamLeaderboardDisplayType::TimeMilliSeconds },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamCore_ESteamLeaderboardDisplayType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamLeaderboardDisplayType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	"ESteamLeaderboardDisplayType",
	"ESteamLeaderboardDisplayType",
	Z_Construct_UEnum_SteamCore_ESteamLeaderboardDisplayType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamLeaderboardDisplayType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamLeaderboardDisplayType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCore_ESteamLeaderboardDisplayType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCore_ESteamLeaderboardDisplayType()
{
	if (!Z_Registration_Info_UEnum_ESteamLeaderboardDisplayType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamLeaderboardDisplayType.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamLeaderboardDisplayType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamLeaderboardDisplayType.InnerSingleton;
}
// ********** End Enum ESteamLeaderboardDisplayType ************************************************

// ********** Begin Enum ESteamLeaderboardUploadScoreMethod ****************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamLeaderboardUploadScoreMethod;
static UEnum* ESteamLeaderboardUploadScoreMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamLeaderboardUploadScoreMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamLeaderboardUploadScoreMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamLeaderboardUploadScoreMethod, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamLeaderboardUploadScoreMethod"));
	}
	return Z_Registration_Info_UEnum_ESteamLeaderboardUploadScoreMethod.OuterSingleton;
}
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamLeaderboardUploadScoreMethod>()
{
	return ESteamLeaderboardUploadScoreMethod_StaticEnum();
}
struct Z_Construct_UEnum_SteamCore_ESteamLeaderboardUploadScoreMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ForceUpdate.Name", "ESteamLeaderboardUploadScoreMethod::ForceUpdate" },
		{ "KeepBest.Name", "ESteamLeaderboardUploadScoreMethod::KeepBest" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
		{ "None.Name", "ESteamLeaderboardUploadScoreMethod::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamLeaderboardUploadScoreMethod::None", (int64)ESteamLeaderboardUploadScoreMethod::None },
		{ "ESteamLeaderboardUploadScoreMethod::KeepBest", (int64)ESteamLeaderboardUploadScoreMethod::KeepBest },
		{ "ESteamLeaderboardUploadScoreMethod::ForceUpdate", (int64)ESteamLeaderboardUploadScoreMethod::ForceUpdate },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamCore_ESteamLeaderboardUploadScoreMethod_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamLeaderboardUploadScoreMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	"ESteamLeaderboardUploadScoreMethod",
	"ESteamLeaderboardUploadScoreMethod",
	Z_Construct_UEnum_SteamCore_ESteamLeaderboardUploadScoreMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamLeaderboardUploadScoreMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamLeaderboardUploadScoreMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCore_ESteamLeaderboardUploadScoreMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCore_ESteamLeaderboardUploadScoreMethod()
{
	if (!Z_Registration_Info_UEnum_ESteamLeaderboardUploadScoreMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamLeaderboardUploadScoreMethod.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamLeaderboardUploadScoreMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamLeaderboardUploadScoreMethod.InnerSingleton;
}
// ********** End Enum ESteamLeaderboardUploadScoreMethod ******************************************

// ********** Begin ScriptStruct FSteamLeaderboardEntries ******************************************
struct Z_Construct_UScriptStruct_FSteamLeaderboardEntries_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSteamLeaderboardEntries); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSteamLeaderboardEntries); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Structs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Structs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSteamLeaderboardEntries constinit property declarations **********
// ********** End ScriptStruct FSteamLeaderboardEntries constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamLeaderboardEntries>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSteamLeaderboardEntries_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSteamLeaderboardEntries;
class UScriptStruct* FSteamLeaderboardEntries::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamLeaderboardEntries.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSteamLeaderboardEntries.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamLeaderboardEntries, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamLeaderboardEntries"));
	}
	return Z_Registration_Info_UScriptStruct_FSteamLeaderboardEntries.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamLeaderboardEntries_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"SteamLeaderboardEntries",
	nullptr,
	0,
	sizeof(FSteamLeaderboardEntries),
	alignof(FSteamLeaderboardEntries),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamLeaderboardEntries_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSteamLeaderboardEntries_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSteamLeaderboardEntries()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamLeaderboardEntries.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSteamLeaderboardEntries.InnerSingleton, Z_Construct_UScriptStruct_FSteamLeaderboardEntries_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSteamLeaderboardEntries.InnerSingleton);
}
// ********** End ScriptStruct FSteamLeaderboardEntries ********************************************

// ********** Begin ScriptStruct FSteamLeaderboardEntry ********************************************
struct Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSteamLeaderboardEntry); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSteamLeaderboardEntry); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalRank_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Details_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UGCHandle_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSteamLeaderboardEntry constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GlobalRank;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Details;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UGCHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSteamLeaderboardEntry constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamLeaderboardEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSteamLeaderboardEntry;
class UScriptStruct* FSteamLeaderboardEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamLeaderboardEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSteamLeaderboardEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamLeaderboardEntry, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamLeaderboardEntry"));
	}
	return Z_Registration_Info_UScriptStruct_FSteamLeaderboardEntry.OuterSingleton;
	}

// ********** Begin ScriptStruct FSteamLeaderboardEntry Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamLeaderboardEntry, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamID_MetaData), NewProp_SteamID_MetaData) }; // 1641547426
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_GlobalRank = { "GlobalRank", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamLeaderboardEntry, GlobalRank), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalRank_MetaData), NewProp_GlobalRank_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamLeaderboardEntry, Score), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Score_MetaData), NewProp_Score_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_Details = { "Details", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamLeaderboardEntry, Details), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Details_MetaData), NewProp_Details_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_UGCHandle = { "UGCHandle", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamLeaderboardEntry, UGCHandle), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UGCHandle_MetaData), NewProp_UGCHandle_MetaData) }; // 3346822915
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_GlobalRank,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_Score,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_Details,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_UGCHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSteamLeaderboardEntry Property Definitions *************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"SteamLeaderboardEntry",
	Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::PropPointers),
	sizeof(FSteamLeaderboardEntry),
	alignof(FSteamLeaderboardEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSteamLeaderboardEntry()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamLeaderboardEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSteamLeaderboardEntry.InnerSingleton, Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSteamLeaderboardEntry.InnerSingleton);
}
// ********** End ScriptStruct FSteamLeaderboardEntry **********************************************

// ********** Begin ScriptStruct FSteamLeaderboard *************************************************
struct Z_Construct_UScriptStruct_FSteamLeaderboard_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSteamLeaderboard); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSteamLeaderboard); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSteamLeaderboard constinit property declarations *****************
// ********** End ScriptStruct FSteamLeaderboard constinit property declarations *******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamLeaderboard>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSteamLeaderboard_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSteamLeaderboard;
class UScriptStruct* FSteamLeaderboard::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamLeaderboard.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSteamLeaderboard.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamLeaderboard, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamLeaderboard"));
	}
	return Z_Registration_Info_UScriptStruct_FSteamLeaderboard.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamLeaderboard_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"SteamLeaderboard",
	nullptr,
	0,
	sizeof(FSteamLeaderboard),
	alignof(FSteamLeaderboard),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamLeaderboard_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSteamLeaderboard_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSteamLeaderboard()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamLeaderboard.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSteamLeaderboard.InnerSingleton, Z_Construct_UScriptStruct_FSteamLeaderboard_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSteamLeaderboard.InnerSingleton);
}
// ********** End ScriptStruct FSteamLeaderboard ***************************************************

// ********** Begin ScriptStruct FUserAchievementIconFetched ***************************************
struct Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FUserAchievementIconFetched); }
	static inline consteval int16 GetStructAlignment() { return alignof(FUserAchievementIconFetched); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameID_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AchievementName_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAchieved_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FUserAchievementIconFetched constinit property declarations *******
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AchievementName;
	static void NewProp_bAchieved_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAchieved;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FUserAchievementIconFetched constinit property declarations *********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserAchievementIconFetched>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FUserAchievementIconFetched;
class UScriptStruct* FUserAchievementIconFetched::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FUserAchievementIconFetched.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FUserAchievementIconFetched.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserAchievementIconFetched, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("UserAchievementIconFetched"));
	}
	return Z_Registration_Info_UScriptStruct_FUserAchievementIconFetched.OuterSingleton;
	}

// ********** Begin ScriptStruct FUserAchievementIconFetched Property Definitions ******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserAchievementIconFetched, GameID), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameID_MetaData), NewProp_GameID_MetaData) }; // 3781658651
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_AchievementName = { "AchievementName", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserAchievementIconFetched, AchievementName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AchievementName_MetaData), NewProp_AchievementName_MetaData) };
void Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_bAchieved_SetBit(void* Obj)
{
	((FUserAchievementIconFetched*)Obj)->bAchieved = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_bAchieved = { "bAchieved", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUserAchievementIconFetched), &Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_bAchieved_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAchieved_MetaData), NewProp_bAchieved_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserAchievementIconFetched, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_GameID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_AchievementName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_bAchieved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_Icon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FUserAchievementIconFetched Property Definitions ********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"UserAchievementIconFetched",
	Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::PropPointers),
	sizeof(FUserAchievementIconFetched),
	alignof(FUserAchievementIconFetched),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUserAchievementIconFetched()
{
	if (!Z_Registration_Info_UScriptStruct_FUserAchievementIconFetched.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FUserAchievementIconFetched.InnerSingleton, Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FUserAchievementIconFetched.InnerSingleton);
}
// ********** End ScriptStruct FUserAchievementIconFetched *****************************************

// ********** Begin ScriptStruct FUserAchievementStored ********************************************
struct Z_Construct_UScriptStruct_FUserAchievementStored_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FUserAchievementStored); }
	static inline consteval int16 GetStructAlignment() { return alignof(FUserAchievementStored); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameID_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGroupAchievement_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AchievementName_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentProgress_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxProgress_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FUserAchievementStored constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameID;
	static void NewProp_bGroupAchievement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGroupAchievement;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AchievementName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentProgress;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxProgress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FUserAchievementStored constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserAchievementStored>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FUserAchievementStored_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FUserAchievementStored;
class UScriptStruct* FUserAchievementStored::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FUserAchievementStored.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FUserAchievementStored.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserAchievementStored, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("UserAchievementStored"));
	}
	return Z_Registration_Info_UScriptStruct_FUserAchievementStored.OuterSingleton;
	}

// ********** Begin ScriptStruct FUserAchievementStored Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserAchievementStored, GameID), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameID_MetaData), NewProp_GameID_MetaData) }; // 3781658651
void Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_bGroupAchievement_SetBit(void* Obj)
{
	((FUserAchievementStored*)Obj)->bGroupAchievement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_bGroupAchievement = { "bGroupAchievement", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUserAchievementStored), &Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_bGroupAchievement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGroupAchievement_MetaData), NewProp_bGroupAchievement_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_AchievementName = { "AchievementName", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserAchievementStored, AchievementName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AchievementName_MetaData), NewProp_AchievementName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_CurrentProgress = { "CurrentProgress", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserAchievementStored, CurrentProgress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentProgress_MetaData), NewProp_CurrentProgress_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_MaxProgress = { "MaxProgress", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserAchievementStored, MaxProgress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxProgress_MetaData), NewProp_MaxProgress_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserAchievementStored_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_GameID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_bGroupAchievement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_AchievementName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_CurrentProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_MaxProgress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserAchievementStored_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FUserAchievementStored Property Definitions *************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserAchievementStored_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"UserAchievementStored",
	Z_Construct_UScriptStruct_FUserAchievementStored_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserAchievementStored_Statics::PropPointers),
	sizeof(FUserAchievementStored),
	alignof(FUserAchievementStored),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserAchievementStored_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUserAchievementStored_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUserAchievementStored()
{
	if (!Z_Registration_Info_UScriptStruct_FUserAchievementStored.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FUserAchievementStored.InnerSingleton, Z_Construct_UScriptStruct_FUserAchievementStored_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FUserAchievementStored.InnerSingleton);
}
// ********** End ScriptStruct FUserAchievementStored **********************************************

// ********** Begin ScriptStruct FUserStatsReceived ************************************************
struct Z_Construct_UScriptStruct_FUserStatsReceived_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FUserStatsReceived); }
	static inline consteval int16 GetStructAlignment() { return alignof(FUserStatsReceived); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameID_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FUserStatsReceived constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FUserStatsReceived constinit property declarations ******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserStatsReceived>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FUserStatsReceived_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FUserStatsReceived;
class UScriptStruct* FUserStatsReceived::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FUserStatsReceived.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FUserStatsReceived.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserStatsReceived, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("UserStatsReceived"));
	}
	return Z_Registration_Info_UScriptStruct_FUserStatsReceived.OuterSingleton;
	}

// ********** Begin ScriptStruct FUserStatsReceived Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserStatsReceived, GameID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameID_MetaData), NewProp_GameID_MetaData) }; // 1641547426
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserStatsReceived, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 1466539257
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserStatsReceived, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamID_MetaData), NewProp_SteamID_MetaData) }; // 1641547426
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserStatsReceived_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_GameID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_SteamID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserStatsReceived_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FUserStatsReceived Property Definitions *****************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserStatsReceived_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"UserStatsReceived",
	Z_Construct_UScriptStruct_FUserStatsReceived_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserStatsReceived_Statics::PropPointers),
	sizeof(FUserStatsReceived),
	alignof(FUserStatsReceived),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserStatsReceived_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUserStatsReceived_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUserStatsReceived()
{
	if (!Z_Registration_Info_UScriptStruct_FUserStatsReceived.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FUserStatsReceived.InnerSingleton, Z_Construct_UScriptStruct_FUserStatsReceived_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FUserStatsReceived.InnerSingleton);
}
// ********** End ScriptStruct FUserStatsReceived **************************************************

// ********** Begin ScriptStruct FUserStatsStored **************************************************
struct Z_Construct_UScriptStruct_FUserStatsStored_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FUserStatsStored); }
	static inline consteval int16 GetStructAlignment() { return alignof(FUserStatsStored); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameID_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FUserStatsStored constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FUserStatsStored constinit property declarations ********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserStatsStored>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FUserStatsStored_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FUserStatsStored;
class UScriptStruct* FUserStatsStored::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FUserStatsStored.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FUserStatsStored.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserStatsStored, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("UserStatsStored"));
	}
	return Z_Registration_Info_UScriptStruct_FUserStatsStored.OuterSingleton;
	}

// ********** Begin ScriptStruct FUserStatsStored Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUserStatsStored_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserStatsStored, GameID), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameID_MetaData), NewProp_GameID_MetaData) }; // 3781658651
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUserStatsStored_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FUserStatsStored_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserStatsStored, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 1466539257
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserStatsStored_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserStatsStored_Statics::NewProp_GameID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserStatsStored_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserStatsStored_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserStatsStored_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FUserStatsStored Property Definitions *******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserStatsStored_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"UserStatsStored",
	Z_Construct_UScriptStruct_FUserStatsStored_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserStatsStored_Statics::PropPointers),
	sizeof(FUserStatsStored),
	alignof(FUserStatsStored),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserStatsStored_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUserStatsStored_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUserStatsStored()
{
	if (!Z_Registration_Info_UScriptStruct_FUserStatsStored.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FUserStatsStored.InnerSingleton, Z_Construct_UScriptStruct_FUserStatsStored_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FUserStatsStored.InnerSingleton);
}
// ********** End ScriptStruct FUserStatsStored ****************************************************

// ********** Begin ScriptStruct FUserStatsUnloaded ************************************************
struct Z_Construct_UScriptStruct_FUserStatsUnloaded_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FUserStatsUnloaded); }
	static inline consteval int16 GetStructAlignment() { return alignof(FUserStatsUnloaded); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDUser_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FUserStatsUnloaded constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FUserStatsUnloaded constinit property declarations ******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserStatsUnloaded>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FUserStatsUnloaded_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FUserStatsUnloaded;
class UScriptStruct* FUserStatsUnloaded::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FUserStatsUnloaded.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FUserStatsUnloaded.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserStatsUnloaded, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("UserStatsUnloaded"));
	}
	return Z_Registration_Info_UScriptStruct_FUserStatsUnloaded.OuterSingleton;
	}

// ********** Begin ScriptStruct FUserStatsUnloaded Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUserStatsUnloaded_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserStatsUnloaded, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIDUser_MetaData), NewProp_SteamIDUser_MetaData) }; // 1641547426
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserStatsUnloaded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserStatsUnloaded_Statics::NewProp_SteamIDUser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserStatsUnloaded_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FUserStatsUnloaded Property Definitions *****************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserStatsUnloaded_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"UserStatsUnloaded",
	Z_Construct_UScriptStruct_FUserStatsUnloaded_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserStatsUnloaded_Statics::PropPointers),
	sizeof(FUserStatsUnloaded),
	alignof(FUserStatsUnloaded),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserStatsUnloaded_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUserStatsUnloaded_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUserStatsUnloaded()
{
	if (!Z_Registration_Info_UScriptStruct_FUserStatsUnloaded.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FUserStatsUnloaded.InnerSingleton, Z_Construct_UScriptStruct_FUserStatsUnloaded_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FUserStatsUnloaded.InnerSingleton);
}
// ********** End ScriptStruct FUserStatsUnloaded **************************************************

// ********** Begin ScriptStruct FLeaderboardScoresDownloaded **************************************
struct Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FLeaderboardScoresDownloaded); }
	static inline consteval int16 GetStructAlignment() { return alignof(FLeaderboardScoresDownloaded); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamLeaderboard_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamLeaderboardEntries_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntryCount_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FLeaderboardScoresDownloaded constinit property declarations ******
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboardEntries;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EntryCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FLeaderboardScoresDownloaded constinit property declarations ********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeaderboardScoresDownloaded>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLeaderboardScoresDownloaded;
class UScriptStruct* FLeaderboardScoresDownloaded::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLeaderboardScoresDownloaded.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLeaderboardScoresDownloaded.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("LeaderboardScoresDownloaded"));
	}
	return Z_Registration_Info_UScriptStruct_FLeaderboardScoresDownloaded.OuterSingleton;
	}

// ********** Begin ScriptStruct FLeaderboardScoresDownloaded Property Definitions *****************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardScoresDownloaded, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamLeaderboard_MetaData), NewProp_SteamLeaderboard_MetaData) }; // 1856530772
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::NewProp_SteamLeaderboardEntries = { "SteamLeaderboardEntries", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardScoresDownloaded, SteamLeaderboardEntries), Z_Construct_UScriptStruct_FSteamLeaderboardEntries, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamLeaderboardEntries_MetaData), NewProp_SteamLeaderboardEntries_MetaData) }; // 4104082619
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::NewProp_EntryCount = { "EntryCount", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardScoresDownloaded, EntryCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntryCount_MetaData), NewProp_EntryCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::NewProp_SteamLeaderboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::NewProp_SteamLeaderboardEntries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::NewProp_EntryCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FLeaderboardScoresDownloaded Property Definitions *******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"LeaderboardScoresDownloaded",
	Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::PropPointers),
	sizeof(FLeaderboardScoresDownloaded),
	alignof(FLeaderboardScoresDownloaded),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded()
{
	if (!Z_Registration_Info_UScriptStruct_FLeaderboardScoresDownloaded.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLeaderboardScoresDownloaded.InnerSingleton, Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FLeaderboardScoresDownloaded.InnerSingleton);
}
// ********** End ScriptStruct FLeaderboardScoresDownloaded ****************************************

// ********** Begin ScriptStruct FLeaderboardScoresDownloadedForUsers ******************************
struct Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FLeaderboardScoresDownloadedForUsers); }
	static inline consteval int16 GetStructAlignment() { return alignof(FLeaderboardScoresDownloadedForUsers); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamLeaderboard_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamLeaderboardEntries_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntryCount_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FLeaderboardScoresDownloadedForUsers constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboardEntries;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EntryCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FLeaderboardScoresDownloadedForUsers constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeaderboardScoresDownloadedForUsers>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLeaderboardScoresDownloadedForUsers;
class UScriptStruct* FLeaderboardScoresDownloadedForUsers::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLeaderboardScoresDownloadedForUsers.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLeaderboardScoresDownloadedForUsers.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("LeaderboardScoresDownloadedForUsers"));
	}
	return Z_Registration_Info_UScriptStruct_FLeaderboardScoresDownloadedForUsers.OuterSingleton;
	}

// ********** Begin ScriptStruct FLeaderboardScoresDownloadedForUsers Property Definitions *********
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardScoresDownloadedForUsers, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamLeaderboard_MetaData), NewProp_SteamLeaderboard_MetaData) }; // 1856530772
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewProp_SteamLeaderboardEntries = { "SteamLeaderboardEntries", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardScoresDownloadedForUsers, SteamLeaderboardEntries), Z_Construct_UScriptStruct_FSteamLeaderboardEntries, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamLeaderboardEntries_MetaData), NewProp_SteamLeaderboardEntries_MetaData) }; // 4104082619
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewProp_EntryCount = { "EntryCount", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardScoresDownloadedForUsers, EntryCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntryCount_MetaData), NewProp_EntryCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewProp_SteamLeaderboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewProp_SteamLeaderboardEntries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewProp_EntryCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FLeaderboardScoresDownloadedForUsers Property Definitions ***********
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"LeaderboardScoresDownloadedForUsers",
	Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::PropPointers),
	sizeof(FLeaderboardScoresDownloadedForUsers),
	alignof(FLeaderboardScoresDownloadedForUsers),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers()
{
	if (!Z_Registration_Info_UScriptStruct_FLeaderboardScoresDownloadedForUsers.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLeaderboardScoresDownloadedForUsers.InnerSingleton, Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FLeaderboardScoresDownloadedForUsers.InnerSingleton);
}
// ********** End ScriptStruct FLeaderboardScoresDownloadedForUsers ********************************

// ********** Begin ScriptStruct FRequestUserStatsData *********************************************
struct Z_Construct_UScriptStruct_FRequestUserStatsData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FRequestUserStatsData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRequestUserStatsData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameID_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDUser_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRequestUserStatsData constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRequestUserStatsData constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRequestUserStatsData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRequestUserStatsData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRequestUserStatsData;
class UScriptStruct* FRequestUserStatsData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRequestUserStatsData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRequestUserStatsData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRequestUserStatsData, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("RequestUserStatsData"));
	}
	return Z_Registration_Info_UScriptStruct_FRequestUserStatsData.OuterSingleton;
	}

// ********** Begin ScriptStruct FRequestUserStatsData Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRequestUserStatsData, GameID), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameID_MetaData), NewProp_GameID_MetaData) }; // 3781658651
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRequestUserStatsData, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 1466539257
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRequestUserStatsData, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIDUser_MetaData), NewProp_SteamIDUser_MetaData) }; // 1641547426
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_GameID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_SteamIDUser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FRequestUserStatsData Property Definitions **************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"RequestUserStatsData",
	Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::PropPointers),
	sizeof(FRequestUserStatsData),
	alignof(FRequestUserStatsData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRequestUserStatsData()
{
	if (!Z_Registration_Info_UScriptStruct_FRequestUserStatsData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRequestUserStatsData.InnerSingleton, Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRequestUserStatsData.InnerSingleton);
}
// ********** End ScriptStruct FRequestUserStatsData ***********************************************

// ********** Begin ScriptStruct FLeaderboardScoreUploaded *****************************************
struct Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FLeaderboardScoreUploaded); }
	static inline consteval int16 GetStructAlignment() { return alignof(FLeaderboardScoreUploaded); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamLeaderboard_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bScoreChanged_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalRankNew_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalRankPrevious_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FLeaderboardScoreUploaded constinit property declarations *********
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static void NewProp_bScoreChanged_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bScoreChanged;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GlobalRankNew;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GlobalRankPrevious;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FLeaderboardScoreUploaded constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeaderboardScoreUploaded>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLeaderboardScoreUploaded;
class UScriptStruct* FLeaderboardScoreUploaded::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLeaderboardScoreUploaded.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLeaderboardScoreUploaded.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeaderboardScoreUploaded, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("LeaderboardScoreUploaded"));
	}
	return Z_Registration_Info_UScriptStruct_FLeaderboardScoreUploaded.OuterSingleton;
	}

// ********** Begin ScriptStruct FLeaderboardScoreUploaded Property Definitions ********************
void Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((FLeaderboardScoreUploaded*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLeaderboardScoreUploaded), &Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSuccess_MetaData), NewProp_bSuccess_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardScoreUploaded, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamLeaderboard_MetaData), NewProp_SteamLeaderboard_MetaData) }; // 1856530772
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardScoreUploaded, Score), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Score_MetaData), NewProp_Score_MetaData) };
void Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_bScoreChanged_SetBit(void* Obj)
{
	((FLeaderboardScoreUploaded*)Obj)->bScoreChanged = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_bScoreChanged = { "bScoreChanged", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLeaderboardScoreUploaded), &Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_bScoreChanged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bScoreChanged_MetaData), NewProp_bScoreChanged_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_GlobalRankNew = { "GlobalRankNew", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardScoreUploaded, GlobalRankNew), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalRankNew_MetaData), NewProp_GlobalRankNew_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_GlobalRankPrevious = { "GlobalRankPrevious", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardScoreUploaded, GlobalRankPrevious), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalRankPrevious_MetaData), NewProp_GlobalRankPrevious_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_SteamLeaderboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_Score,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_bScoreChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_GlobalRankNew,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_GlobalRankPrevious,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FLeaderboardScoreUploaded Property Definitions **********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"LeaderboardScoreUploaded",
	Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::PropPointers),
	sizeof(FLeaderboardScoreUploaded),
	alignof(FLeaderboardScoreUploaded),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardScoreUploaded()
{
	if (!Z_Registration_Info_UScriptStruct_FLeaderboardScoreUploaded.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLeaderboardScoreUploaded.InnerSingleton, Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FLeaderboardScoreUploaded.InnerSingleton);
}
// ********** End ScriptStruct FLeaderboardScoreUploaded *******************************************

// ********** Begin ScriptStruct FAttachLeaderboardUGCData *****************************************
struct Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FAttachLeaderboardUGCData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAttachLeaderboardUGCData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamLeaderboard_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAttachLeaderboardUGCData constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAttachLeaderboardUGCData constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttachLeaderboardUGCData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAttachLeaderboardUGCData;
class UScriptStruct* FAttachLeaderboardUGCData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAttachLeaderboardUGCData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAttachLeaderboardUGCData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttachLeaderboardUGCData, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("AttachLeaderboardUGCData"));
	}
	return Z_Registration_Info_UScriptStruct_FAttachLeaderboardUGCData.OuterSingleton;
	}

// ********** Begin ScriptStruct FAttachLeaderboardUGCData Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachLeaderboardUGCData, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamLeaderboard_MetaData), NewProp_SteamLeaderboard_MetaData) }; // 1856530772
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachLeaderboardUGCData, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 1466539257
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::NewProp_SteamLeaderboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FAttachLeaderboardUGCData Property Definitions **********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"AttachLeaderboardUGCData",
	Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::PropPointers),
	sizeof(FAttachLeaderboardUGCData),
	alignof(FAttachLeaderboardUGCData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAttachLeaderboardUGCData()
{
	if (!Z_Registration_Info_UScriptStruct_FAttachLeaderboardUGCData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAttachLeaderboardUGCData.InnerSingleton, Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAttachLeaderboardUGCData.InnerSingleton);
}
// ********** End ScriptStruct FAttachLeaderboardUGCData *******************************************

// ********** Begin ScriptStruct FLeaderboardFindResult ********************************************
struct Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FLeaderboardFindResult); }
	static inline consteval int16 GetStructAlignment() { return alignof(FLeaderboardFindResult); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamLeaderboard_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLeaderboardFound_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FLeaderboardFindResult constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
	static void NewProp_bLeaderboardFound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLeaderboardFound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FLeaderboardFindResult constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeaderboardFindResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLeaderboardFindResult;
class UScriptStruct* FLeaderboardFindResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLeaderboardFindResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLeaderboardFindResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeaderboardFindResult, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("LeaderboardFindResult"));
	}
	return Z_Registration_Info_UScriptStruct_FLeaderboardFindResult.OuterSingleton;
	}

// ********** Begin ScriptStruct FLeaderboardFindResult Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardFindResult, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamLeaderboard_MetaData), NewProp_SteamLeaderboard_MetaData) }; // 1856530772
void Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::NewProp_bLeaderboardFound_SetBit(void* Obj)
{
	((FLeaderboardFindResult*)Obj)->bLeaderboardFound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::NewProp_bLeaderboardFound = { "bLeaderboardFound", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLeaderboardFindResult), &Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::NewProp_bLeaderboardFound_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLeaderboardFound_MetaData), NewProp_bLeaderboardFound_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::NewProp_SteamLeaderboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::NewProp_bLeaderboardFound,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FLeaderboardFindResult Property Definitions *************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"LeaderboardFindResult",
	Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::PropPointers),
	sizeof(FLeaderboardFindResult),
	alignof(FLeaderboardFindResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardFindResult()
{
	if (!Z_Registration_Info_UScriptStruct_FLeaderboardFindResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLeaderboardFindResult.InnerSingleton, Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FLeaderboardFindResult.InnerSingleton);
}
// ********** End ScriptStruct FLeaderboardFindResult **********************************************

// ********** Begin ScriptStruct FFindOrCreateLeaderboardData **************************************
struct Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FFindOrCreateLeaderboardData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FFindOrCreateLeaderboardData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamLeaderboard_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLeaderboardFound_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FFindOrCreateLeaderboardData constinit property declarations ******
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
	static void NewProp_bLeaderboardFound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLeaderboardFound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FFindOrCreateLeaderboardData constinit property declarations ********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFindOrCreateLeaderboardData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFindOrCreateLeaderboardData;
class UScriptStruct* FFindOrCreateLeaderboardData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FFindOrCreateLeaderboardData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FFindOrCreateLeaderboardData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("FindOrCreateLeaderboardData"));
	}
	return Z_Registration_Info_UScriptStruct_FFindOrCreateLeaderboardData.OuterSingleton;
	}

// ********** Begin ScriptStruct FFindOrCreateLeaderboardData Property Definitions *****************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFindOrCreateLeaderboardData, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamLeaderboard_MetaData), NewProp_SteamLeaderboard_MetaData) }; // 1856530772
void Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::NewProp_bLeaderboardFound_SetBit(void* Obj)
{
	((FFindOrCreateLeaderboardData*)Obj)->bLeaderboardFound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::NewProp_bLeaderboardFound = { "bLeaderboardFound", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFindOrCreateLeaderboardData), &Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::NewProp_bLeaderboardFound_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLeaderboardFound_MetaData), NewProp_bLeaderboardFound_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::NewProp_SteamLeaderboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::NewProp_bLeaderboardFound,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FFindOrCreateLeaderboardData Property Definitions *******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"FindOrCreateLeaderboardData",
	Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::PropPointers),
	sizeof(FFindOrCreateLeaderboardData),
	alignof(FFindOrCreateLeaderboardData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData()
{
	if (!Z_Registration_Info_UScriptStruct_FFindOrCreateLeaderboardData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFindOrCreateLeaderboardData.InnerSingleton, Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FFindOrCreateLeaderboardData.InnerSingleton);
}
// ********** End ScriptStruct FFindOrCreateLeaderboardData ****************************************

// ********** Begin ScriptStruct FNumberOfCurrentPlayers *******************************************
struct Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FNumberOfCurrentPlayers); }
	static inline consteval int16 GetStructAlignment() { return alignof(FNumberOfCurrentPlayers); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Players_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FNumberOfCurrentPlayers constinit property declarations ***********
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Players;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FNumberOfCurrentPlayers constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNumberOfCurrentPlayers>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FNumberOfCurrentPlayers;
class UScriptStruct* FNumberOfCurrentPlayers::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FNumberOfCurrentPlayers.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FNumberOfCurrentPlayers.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNumberOfCurrentPlayers, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("NumberOfCurrentPlayers"));
	}
	return Z_Registration_Info_UScriptStruct_FNumberOfCurrentPlayers.OuterSingleton;
	}

// ********** Begin ScriptStruct FNumberOfCurrentPlayers Property Definitions **********************
void Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((FNumberOfCurrentPlayers*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNumberOfCurrentPlayers), &Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSuccess_MetaData), NewProp_bSuccess_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::NewProp_Players = { "Players", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNumberOfCurrentPlayers, Players), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Players_MetaData), NewProp_Players_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::NewProp_Players,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FNumberOfCurrentPlayers Property Definitions ************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"NumberOfCurrentPlayers",
	Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::PropPointers),
	sizeof(FNumberOfCurrentPlayers),
	alignof(FNumberOfCurrentPlayers),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNumberOfCurrentPlayers()
{
	if (!Z_Registration_Info_UScriptStruct_FNumberOfCurrentPlayers.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FNumberOfCurrentPlayers.InnerSingleton, Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FNumberOfCurrentPlayers.InnerSingleton);
}
// ********** End ScriptStruct FNumberOfCurrentPlayers *********************************************

// ********** Begin ScriptStruct FGlobalAchievementPercentagesReady ********************************
struct Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FGlobalAchievementPercentagesReady); }
	static inline consteval int16 GetStructAlignment() { return alignof(FGlobalAchievementPercentagesReady); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameID_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FGlobalAchievementPercentagesReady constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FGlobalAchievementPercentagesReady constinit property declarations **
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGlobalAchievementPercentagesReady>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGlobalAchievementPercentagesReady;
class UScriptStruct* FGlobalAchievementPercentagesReady::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGlobalAchievementPercentagesReady.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGlobalAchievementPercentagesReady.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("GlobalAchievementPercentagesReady"));
	}
	return Z_Registration_Info_UScriptStruct_FGlobalAchievementPercentagesReady.OuterSingleton;
	}

// ********** Begin ScriptStruct FGlobalAchievementPercentagesReady Property Definitions ***********
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGlobalAchievementPercentagesReady, GameID), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameID_MetaData), NewProp_GameID_MetaData) }; // 3781658651
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGlobalAchievementPercentagesReady, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 1466539257
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::NewProp_GameID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FGlobalAchievementPercentagesReady Property Definitions *************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"GlobalAchievementPercentagesReady",
	Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::PropPointers),
	sizeof(FGlobalAchievementPercentagesReady),
	alignof(FGlobalAchievementPercentagesReady),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady()
{
	if (!Z_Registration_Info_UScriptStruct_FGlobalAchievementPercentagesReady.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGlobalAchievementPercentagesReady.InnerSingleton, Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FGlobalAchievementPercentagesReady.InnerSingleton);
}
// ********** End ScriptStruct FGlobalAchievementPercentagesReady **********************************

// ********** Begin ScriptStruct FGlobalStatsReceived **********************************************
struct Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FGlobalStatsReceived); }
	static inline consteval int16 GetStructAlignment() { return alignof(FGlobalStatsReceived); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameID_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FGlobalStatsReceived constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FGlobalStatsReceived constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGlobalStatsReceived>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGlobalStatsReceived;
class UScriptStruct* FGlobalStatsReceived::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGlobalStatsReceived.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGlobalStatsReceived.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGlobalStatsReceived, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("GlobalStatsReceived"));
	}
	return Z_Registration_Info_UScriptStruct_FGlobalStatsReceived.OuterSingleton;
	}

// ********** Begin ScriptStruct FGlobalStatsReceived Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGlobalStatsReceived, GameID), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameID_MetaData), NewProp_GameID_MetaData) }; // 3781658651
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGlobalStatsReceived, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 1466539257
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::NewProp_GameID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FGlobalStatsReceived Property Definitions ***************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"GlobalStatsReceived",
	Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::PropPointers),
	sizeof(FGlobalStatsReceived),
	alignof(FGlobalStatsReceived),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGlobalStatsReceived()
{
	if (!Z_Registration_Info_UScriptStruct_FGlobalStatsReceived.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGlobalStatsReceived.InnerSingleton, Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FGlobalStatsReceived.InnerSingleton);
}
// ********** End ScriptStruct FGlobalStatsReceived ************************************************

// ********** Begin Delegate FOnUserAchievementIconFetched *****************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementIconFetched__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnUserAchievementIconFetched_Parms
	{
		FUserAchievementIconFetched Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnUserAchievementIconFetched constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnUserAchievementIconFetched constinit property declarations ***********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnUserAchievementIconFetched Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementIconFetched__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnUserAchievementIconFetched_Parms, Data), Z_Construct_UScriptStruct_FUserAchievementIconFetched, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2937795457
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementIconFetched__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementIconFetched__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementIconFetched__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnUserAchievementIconFetched Property Definitions **********************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementIconFetched__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnUserAchievementIconFetched__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementIconFetched__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementIconFetched__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementIconFetched__DelegateSignature_Statics::_Script_SteamCore_eventOnUserAchievementIconFetched_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementIconFetched__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementIconFetched__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementIconFetched__DelegateSignature_Statics::_Script_SteamCore_eventOnUserAchievementIconFetched_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementIconFetched__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementIconFetched__DelegateSignature_Statics::FuncParams);
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
// ********** End Delegate FOnUserAchievementIconFetched *******************************************

// ********** Begin Delegate FOnUserAchievementStored **********************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementStored__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnUserAchievementStored_Parms
	{
		FUserAchievementStored Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnUserAchievementStored constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnUserAchievementStored constinit property declarations ****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnUserAchievementStored Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementStored__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnUserAchievementStored_Parms, Data), Z_Construct_UScriptStruct_FUserAchievementStored, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2856591178
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementStored__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementStored__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementStored__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnUserAchievementStored Property Definitions ***************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementStored__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnUserAchievementStored__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementStored__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementStored__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementStored__DelegateSignature_Statics::_Script_SteamCore_eventOnUserAchievementStored_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementStored__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementStored__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementStored__DelegateSignature_Statics::_Script_SteamCore_eventOnUserAchievementStored_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementStored__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementStored__DelegateSignature_Statics::FuncParams);
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
// ********** End Delegate FOnUserAchievementStored ************************************************

// ********** Begin Delegate FOnUserStatsReceived **************************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnUserStatsReceived__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnUserStatsReceived_Parms
	{
		FUserStatsReceived Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnUserStatsReceived constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnUserStatsReceived constinit property declarations ********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnUserStatsReceived Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnUserStatsReceived__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnUserStatsReceived_Parms, Data), Z_Construct_UScriptStruct_FUserStatsReceived, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 491782035
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnUserStatsReceived__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnUserStatsReceived__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUserStatsReceived__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnUserStatsReceived Property Definitions *******************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnUserStatsReceived__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnUserStatsReceived__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnUserStatsReceived__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUserStatsReceived__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnUserStatsReceived__DelegateSignature_Statics::_Script_SteamCore_eventOnUserStatsReceived_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUserStatsReceived__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnUserStatsReceived__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnUserStatsReceived__DelegateSignature_Statics::_Script_SteamCore_eventOnUserStatsReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnUserStatsReceived__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnUserStatsReceived__DelegateSignature_Statics::FuncParams);
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
// ********** End Delegate FOnUserStatsReceived ****************************************************

// ********** Begin Delegate FOnUserStatsStored ****************************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnUserStatsStored__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnUserStatsStored_Parms
	{
		FUserStatsStored Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnUserStatsStored constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnUserStatsStored constinit property declarations **********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnUserStatsStored Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnUserStatsStored__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnUserStatsStored_Parms, Data), Z_Construct_UScriptStruct_FUserStatsStored, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 324119988
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnUserStatsStored__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnUserStatsStored__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUserStatsStored__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnUserStatsStored Property Definitions *********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnUserStatsStored__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnUserStatsStored__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnUserStatsStored__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUserStatsStored__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnUserStatsStored__DelegateSignature_Statics::_Script_SteamCore_eventOnUserStatsStored_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUserStatsStored__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnUserStatsStored__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnUserStatsStored__DelegateSignature_Statics::_Script_SteamCore_eventOnUserStatsStored_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnUserStatsStored__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnUserStatsStored__DelegateSignature_Statics::FuncParams);
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
// ********** End Delegate FOnUserStatsStored ******************************************************

// ********** Begin Delegate FOnUserStatsUnloaded **************************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnUserStatsUnloaded__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnUserStatsUnloaded_Parms
	{
		FUserStatsUnloaded Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnUserStatsUnloaded constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnUserStatsUnloaded constinit property declarations ********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnUserStatsUnloaded Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnUserStatsUnloaded__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnUserStatsUnloaded_Parms, Data), Z_Construct_UScriptStruct_FUserStatsUnloaded, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 207129873
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnUserStatsUnloaded__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnUserStatsUnloaded__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUserStatsUnloaded__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnUserStatsUnloaded Property Definitions *******************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnUserStatsUnloaded__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnUserStatsUnloaded__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnUserStatsUnloaded__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUserStatsUnloaded__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnUserStatsUnloaded__DelegateSignature_Statics::_Script_SteamCore_eventOnUserStatsUnloaded_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUserStatsUnloaded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnUserStatsUnloaded__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnUserStatsUnloaded__DelegateSignature_Statics::_Script_SteamCore_eventOnUserStatsUnloaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnUserStatsUnloaded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnUserStatsUnloaded__DelegateSignature_Statics::FuncParams);
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
// ********** End Delegate FOnUserStatsUnloaded ****************************************************

// ********** Begin Delegate FOnDownloadLeaderboardEntries *****************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnDownloadLeaderboardEntries_Parms
	{
		FLeaderboardScoresDownloaded Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnDownloadLeaderboardEntries constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnDownloadLeaderboardEntries constinit property declarations ***********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnDownloadLeaderboardEntries Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnDownloadLeaderboardEntries_Parms, Data), Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1037227892
void Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCore_eventOnDownloadLeaderboardEntries_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnDownloadLeaderboardEntries_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnDownloadLeaderboardEntries Property Definitions **********************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnDownloadLeaderboardEntries__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature_Statics::_Script_SteamCore_eventOnDownloadLeaderboardEntries_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00520000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature_Statics::_Script_SteamCore_eventOnDownloadLeaderboardEntries_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature_Statics::FuncParams);
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
// ********** End Delegate FOnDownloadLeaderboardEntries *******************************************

// ********** Begin Delegate FOnDownloadLeaderboardEntriesForUsers *********************************
struct Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnDownloadLeaderboardEntriesForUsers_Parms
	{
		FLeaderboardScoresDownloadedForUsers Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnDownloadLeaderboardEntriesForUsers constinit property declarations *
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnDownloadLeaderboardEntriesForUsers constinit property declarations ***
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnDownloadLeaderboardEntriesForUsers Property Definitions ************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnDownloadLeaderboardEntriesForUsers_Parms, Data), Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3496712584
void Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCore_eventOnDownloadLeaderboardEntriesForUsers_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnDownloadLeaderboardEntriesForUsers_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnDownloadLeaderboardEntriesForUsers Property Definitions **************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnDownloadLeaderboardEntriesForUsers__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::_Script_SteamCore_eventOnDownloadLeaderboardEntriesForUsers_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00520000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::_Script_SteamCore_eventOnDownloadLeaderboardEntriesForUsers_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::FuncParams);
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
// ********** End Delegate FOnDownloadLeaderboardEntriesForUsers ***********************************

// ********** Begin Delegate FOnRequestUserStats ***************************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnRequestUserStats_Parms
	{
		FRequestUserStatsData Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnRequestUserStats constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnRequestUserStats constinit property declarations *********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnRequestUserStats Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnRequestUserStats_Parms, Data), Z_Construct_UScriptStruct_FRequestUserStatsData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3411853950
void Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCore_eventOnRequestUserStats_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnRequestUserStats_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnRequestUserStats Property Definitions ********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnRequestUserStats__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature_Statics::_Script_SteamCore_eventOnRequestUserStats_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00520000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature_Statics::_Script_SteamCore_eventOnRequestUserStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature_Statics::FuncParams);
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
// ********** End Delegate FOnRequestUserStats *****************************************************

// ********** Begin Delegate FOnUploadLeaderboardScore *********************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnUploadLeaderboardScore_Parms
	{
		FLeaderboardScoreUploaded Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnUploadLeaderboardScore constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnUploadLeaderboardScore constinit property declarations ***************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnUploadLeaderboardScore Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnUploadLeaderboardScore_Parms, Data), Z_Construct_UScriptStruct_FLeaderboardScoreUploaded, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3578864929
void Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCore_eventOnUploadLeaderboardScore_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnUploadLeaderboardScore_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnUploadLeaderboardScore Property Definitions **************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnUploadLeaderboardScore__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature_Statics::_Script_SteamCore_eventOnUploadLeaderboardScore_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00520000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature_Statics::_Script_SteamCore_eventOnUploadLeaderboardScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature_Statics::FuncParams);
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
// ********** End Delegate FOnUploadLeaderboardScore ***********************************************

// ********** Begin Delegate FOnAttachLeaderboardUGC ***********************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnAttachLeaderboardUGC_Parms
	{
		FAttachLeaderboardUGCData Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnAttachLeaderboardUGC constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnAttachLeaderboardUGC constinit property declarations *****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnAttachLeaderboardUGC Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnAttachLeaderboardUGC_Parms, Data), Z_Construct_UScriptStruct_FAttachLeaderboardUGCData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2887204487
void Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCore_eventOnAttachLeaderboardUGC_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnAttachLeaderboardUGC_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnAttachLeaderboardUGC Property Definitions ****************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnAttachLeaderboardUGC__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature_Statics::_Script_SteamCore_eventOnAttachLeaderboardUGC_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00520000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature_Statics::_Script_SteamCore_eventOnAttachLeaderboardUGC_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature_Statics::FuncParams);
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
// ********** End Delegate FOnAttachLeaderboardUGC *************************************************

// ********** Begin Delegate FOnFindLeaderboard ****************************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnFindLeaderboard_Parms
	{
		FLeaderboardFindResult Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnFindLeaderboard constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnFindLeaderboard constinit property declarations **********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnFindLeaderboard Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnFindLeaderboard_Parms, Data), Z_Construct_UScriptStruct_FLeaderboardFindResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1999987708
void Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCore_eventOnFindLeaderboard_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnFindLeaderboard_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnFindLeaderboard Property Definitions *********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnFindLeaderboard__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature_Statics::_Script_SteamCore_eventOnFindLeaderboard_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00520000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature_Statics::_Script_SteamCore_eventOnFindLeaderboard_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature_Statics::FuncParams);
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
// ********** End Delegate FOnFindLeaderboard ******************************************************

// ********** Begin Delegate FOnFindOrCreateLeaderboard ********************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnFindOrCreateLeaderboard_Parms
	{
		FFindOrCreateLeaderboardData Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnFindOrCreateLeaderboard constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnFindOrCreateLeaderboard constinit property declarations **************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnFindOrCreateLeaderboard Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnFindOrCreateLeaderboard_Parms, Data), Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1283444140
void Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCore_eventOnFindOrCreateLeaderboard_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnFindOrCreateLeaderboard_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnFindOrCreateLeaderboard Property Definitions *************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnFindOrCreateLeaderboard__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature_Statics::_Script_SteamCore_eventOnFindOrCreateLeaderboard_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00520000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature_Statics::_Script_SteamCore_eventOnFindOrCreateLeaderboard_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature_Statics::FuncParams);
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
// ********** End Delegate FOnFindOrCreateLeaderboard **********************************************

// ********** Begin Delegate FOnGetNumberOfCurrentPlayers ******************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnGetNumberOfCurrentPlayers_Parms
	{
		FNumberOfCurrentPlayers Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnGetNumberOfCurrentPlayers constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnGetNumberOfCurrentPlayers constinit property declarations ************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnGetNumberOfCurrentPlayers Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnGetNumberOfCurrentPlayers_Parms, Data), Z_Construct_UScriptStruct_FNumberOfCurrentPlayers, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2212816286
void Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCore_eventOnGetNumberOfCurrentPlayers_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnGetNumberOfCurrentPlayers_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnGetNumberOfCurrentPlayers Property Definitions ***********************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnGetNumberOfCurrentPlayers__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::_Script_SteamCore_eventOnGetNumberOfCurrentPlayers_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00520000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::_Script_SteamCore_eventOnGetNumberOfCurrentPlayers_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::FuncParams);
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
// ********** End Delegate FOnGetNumberOfCurrentPlayers ********************************************

// ********** Begin Delegate FOnRequestGlobalAchievementPercentages ********************************
struct Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnRequestGlobalAchievementPercentages_Parms
	{
		FGlobalAchievementPercentagesReady Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnRequestGlobalAchievementPercentages constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnRequestGlobalAchievementPercentages constinit property declarations **
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnRequestGlobalAchievementPercentages Property Definitions ***********
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnRequestGlobalAchievementPercentages_Parms, Data), Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2490645116
void Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCore_eventOnRequestGlobalAchievementPercentages_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnRequestGlobalAchievementPercentages_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnRequestGlobalAchievementPercentages Property Definitions *************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnRequestGlobalAchievementPercentages__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::_Script_SteamCore_eventOnRequestGlobalAchievementPercentages_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00520000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::_Script_SteamCore_eventOnRequestGlobalAchievementPercentages_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::FuncParams);
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
// ********** End Delegate FOnRequestGlobalAchievementPercentages **********************************

// ********** Begin Delegate FOnRequestGlobalStats *************************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnRequestGlobalStats_Parms
	{
		FGlobalStatsReceived Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnRequestGlobalStats constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnRequestGlobalStats constinit property declarations *******************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnRequestGlobalStats Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnRequestGlobalStats_Parms, Data), Z_Construct_UScriptStruct_FGlobalStatsReceived, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 732347882
void Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCore_eventOnRequestGlobalStats_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnRequestGlobalStats_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnRequestGlobalStats Property Definitions ******************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnRequestGlobalStats__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature_Statics::_Script_SteamCore_eventOnRequestGlobalStats_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00520000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature_Statics::_Script_SteamCore_eventOnRequestGlobalStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature_Statics::FuncParams);
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
// ********** End Delegate FOnRequestGlobalStats ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamUserStats_SteamUserStatsTypes_h__Script_SteamCore_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESteamLeaderboardDataRequest_StaticEnum, TEXT("ESteamLeaderboardDataRequest"), &Z_Registration_Info_UEnum_ESteamLeaderboardDataRequest, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1208580345U) },
		{ ESteamLeaderboardSortMethod_StaticEnum, TEXT("ESteamLeaderboardSortMethod"), &Z_Registration_Info_UEnum_ESteamLeaderboardSortMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 333087185U) },
		{ ESteamLeaderboardDisplayType_StaticEnum, TEXT("ESteamLeaderboardDisplayType"), &Z_Registration_Info_UEnum_ESteamLeaderboardDisplayType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1194779769U) },
		{ ESteamLeaderboardUploadScoreMethod_StaticEnum, TEXT("ESteamLeaderboardUploadScoreMethod"), &Z_Registration_Info_UEnum_ESteamLeaderboardUploadScoreMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3017658279U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSteamLeaderboardEntries::StaticStruct, Z_Construct_UScriptStruct_FSteamLeaderboardEntries_Statics::NewStructOps, TEXT("SteamLeaderboardEntries"),&Z_Registration_Info_UScriptStruct_FSteamLeaderboardEntries, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamLeaderboardEntries), 4104082619U) },
		{ FSteamLeaderboardEntry::StaticStruct, Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewStructOps, TEXT("SteamLeaderboardEntry"),&Z_Registration_Info_UScriptStruct_FSteamLeaderboardEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamLeaderboardEntry), 12180619U) },
		{ FSteamLeaderboard::StaticStruct, Z_Construct_UScriptStruct_FSteamLeaderboard_Statics::NewStructOps, TEXT("SteamLeaderboard"),&Z_Registration_Info_UScriptStruct_FSteamLeaderboard, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamLeaderboard), 1856530772U) },
		{ FUserAchievementIconFetched::StaticStruct, Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewStructOps, TEXT("UserAchievementIconFetched"),&Z_Registration_Info_UScriptStruct_FUserAchievementIconFetched, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUserAchievementIconFetched), 2937795457U) },
		{ FUserAchievementStored::StaticStruct, Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewStructOps, TEXT("UserAchievementStored"),&Z_Registration_Info_UScriptStruct_FUserAchievementStored, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUserAchievementStored), 2856591178U) },
		{ FUserStatsReceived::StaticStruct, Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewStructOps, TEXT("UserStatsReceived"),&Z_Registration_Info_UScriptStruct_FUserStatsReceived, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUserStatsReceived), 491782035U) },
		{ FUserStatsStored::StaticStruct, Z_Construct_UScriptStruct_FUserStatsStored_Statics::NewStructOps, TEXT("UserStatsStored"),&Z_Registration_Info_UScriptStruct_FUserStatsStored, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUserStatsStored), 324119988U) },
		{ FUserStatsUnloaded::StaticStruct, Z_Construct_UScriptStruct_FUserStatsUnloaded_Statics::NewStructOps, TEXT("UserStatsUnloaded"),&Z_Registration_Info_UScriptStruct_FUserStatsUnloaded, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUserStatsUnloaded), 207129873U) },
		{ FLeaderboardScoresDownloaded::StaticStruct, Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::NewStructOps, TEXT("LeaderboardScoresDownloaded"),&Z_Registration_Info_UScriptStruct_FLeaderboardScoresDownloaded, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLeaderboardScoresDownloaded), 1037227892U) },
		{ FLeaderboardScoresDownloadedForUsers::StaticStruct, Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewStructOps, TEXT("LeaderboardScoresDownloadedForUsers"),&Z_Registration_Info_UScriptStruct_FLeaderboardScoresDownloadedForUsers, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLeaderboardScoresDownloadedForUsers), 3496712584U) },
		{ FRequestUserStatsData::StaticStruct, Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewStructOps, TEXT("RequestUserStatsData"),&Z_Registration_Info_UScriptStruct_FRequestUserStatsData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRequestUserStatsData), 3411853950U) },
		{ FLeaderboardScoreUploaded::StaticStruct, Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewStructOps, TEXT("LeaderboardScoreUploaded"),&Z_Registration_Info_UScriptStruct_FLeaderboardScoreUploaded, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLeaderboardScoreUploaded), 3578864929U) },
		{ FAttachLeaderboardUGCData::StaticStruct, Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::NewStructOps, TEXT("AttachLeaderboardUGCData"),&Z_Registration_Info_UScriptStruct_FAttachLeaderboardUGCData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAttachLeaderboardUGCData), 2887204487U) },
		{ FLeaderboardFindResult::StaticStruct, Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::NewStructOps, TEXT("LeaderboardFindResult"),&Z_Registration_Info_UScriptStruct_FLeaderboardFindResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLeaderboardFindResult), 1999987708U) },
		{ FFindOrCreateLeaderboardData::StaticStruct, Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::NewStructOps, TEXT("FindOrCreateLeaderboardData"),&Z_Registration_Info_UScriptStruct_FFindOrCreateLeaderboardData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFindOrCreateLeaderboardData), 1283444140U) },
		{ FNumberOfCurrentPlayers::StaticStruct, Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::NewStructOps, TEXT("NumberOfCurrentPlayers"),&Z_Registration_Info_UScriptStruct_FNumberOfCurrentPlayers, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNumberOfCurrentPlayers), 2212816286U) },
		{ FGlobalAchievementPercentagesReady::StaticStruct, Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::NewStructOps, TEXT("GlobalAchievementPercentagesReady"),&Z_Registration_Info_UScriptStruct_FGlobalAchievementPercentagesReady, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGlobalAchievementPercentagesReady), 2490645116U) },
		{ FGlobalStatsReceived::StaticStruct, Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::NewStructOps, TEXT("GlobalStatsReceived"),&Z_Registration_Info_UScriptStruct_FGlobalStatsReceived, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGlobalStatsReceived), 732347882U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamUserStats_SteamUserStatsTypes_h__Script_SteamCore_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamUserStats_SteamUserStatsTypes_h__Script_SteamCore_924359309{
	TEXT("/Script/SteamCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamUserStats_SteamUserStatsTypes_h__Script_SteamCore_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamUserStats_SteamUserStatsTypes_h__Script_SteamCore_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamUserStats_SteamUserStatsTypes_h__Script_SteamCore_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamUserStats_SteamUserStatsTypes_h__Script_SteamCore_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
