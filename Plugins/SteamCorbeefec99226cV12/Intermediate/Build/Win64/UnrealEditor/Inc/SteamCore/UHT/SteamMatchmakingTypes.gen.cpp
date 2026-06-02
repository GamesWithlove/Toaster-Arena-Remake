// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamMatchmaking/SteamMatchmakingTypes.h"
#include "FindSessionsCallbackProxy.h"
#include "SteamTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSteamMatchmakingTypes() {}

// ********** Begin Cross Module References ********************************************************
ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintSessionResult();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamChatEntryType();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamChatMemberStateChange();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamChatRoomEnterResponse();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamFavoriteFlags();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamLobbyComparison();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamLobbyDistanceFilter();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamLobbyType();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamResult();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamSessionFindType();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListAccountsUpdated__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListChanged__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatMsg__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatUpdate__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLobbyDataUpdate__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLobbyEnter__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLobbyGameCreated__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLobbyInvite__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLobbyKicked__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FCreateLobbyData();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFavoritesListChanged();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FJoinLobbyData();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyChatMsg();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyChatUpdate();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyDataUpdate();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyEnterData();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyGameCreated();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyInviteData();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyKickedData();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyMatchList();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamGameID();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
UPackage* Z_Construct_UPackage__Script_SteamCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ESteamSessionFindType *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamSessionFindType;
static UEnum* ESteamSessionFindType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamSessionFindType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamSessionFindType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamSessionFindType, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamSessionFindType"));
	}
	return Z_Registration_Info_UEnum_ESteamSessionFindType.OuterSingleton;
}
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamSessionFindType>()
{
	return ESteamSessionFindType_StaticEnum();
}
struct Z_Construct_UEnum_SteamCore_ESteamSessionFindType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Enums\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "Dedicated.Name", "ESteamSessionFindType::Dedicated" },
		{ "Listen.Name", "ESteamSessionFindType::Listen" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Enums\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamSessionFindType::Listen", (int64)ESteamSessionFindType::Listen },
		{ "ESteamSessionFindType::Dedicated", (int64)ESteamSessionFindType::Dedicated },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamCore_ESteamSessionFindType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamSessionFindType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	"ESteamSessionFindType",
	"ESteamSessionFindType",
	Z_Construct_UEnum_SteamCore_ESteamSessionFindType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamSessionFindType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamSessionFindType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCore_ESteamSessionFindType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCore_ESteamSessionFindType()
{
	if (!Z_Registration_Info_UEnum_ESteamSessionFindType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamSessionFindType.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamSessionFindType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamSessionFindType.InnerSingleton;
}
// ********** End Enum ESteamSessionFindType *******************************************************

// ********** Begin Enum ESteamLobbyType ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamLobbyType;
static UEnum* ESteamLobbyType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamLobbyType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamLobbyType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamLobbyType, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamLobbyType"));
	}
	return Z_Registration_Info_UEnum_ESteamLobbyType.OuterSingleton;
}
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamLobbyType>()
{
	return ESteamLobbyType_StaticEnum();
}
struct Z_Construct_UEnum_SteamCore_ESteamLobbyType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FriendsOnly.Name", "ESteamLobbyType::FriendsOnly" },
		{ "Invisible.Name", "ESteamLobbyType::Invisible" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
		{ "Private.Name", "ESteamLobbyType::Private" },
		{ "Public.Name", "ESteamLobbyType::Public" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamLobbyType::Private", (int64)ESteamLobbyType::Private },
		{ "ESteamLobbyType::FriendsOnly", (int64)ESteamLobbyType::FriendsOnly },
		{ "ESteamLobbyType::Public", (int64)ESteamLobbyType::Public },
		{ "ESteamLobbyType::Invisible", (int64)ESteamLobbyType::Invisible },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamCore_ESteamLobbyType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamLobbyType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	"ESteamLobbyType",
	"ESteamLobbyType",
	Z_Construct_UEnum_SteamCore_ESteamLobbyType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamLobbyType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamLobbyType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCore_ESteamLobbyType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCore_ESteamLobbyType()
{
	if (!Z_Registration_Info_UEnum_ESteamLobbyType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamLobbyType.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamLobbyType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamLobbyType.InnerSingleton;
}
// ********** End Enum ESteamLobbyType *************************************************************

// ********** Begin Enum ESteamLobbyComparison *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamLobbyComparison;
static UEnum* ESteamLobbyComparison_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamLobbyComparison.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamLobbyComparison.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamLobbyComparison, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamLobbyComparison"));
	}
	return Z_Registration_Info_UEnum_ESteamLobbyComparison.OuterSingleton;
}
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamLobbyComparison>()
{
	return ESteamLobbyComparison_StaticEnum();
}
struct Z_Construct_UEnum_SteamCore_ESteamLobbyComparison_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// lobby search filter tools\n" },
#endif
		{ "Equal.Name", "ESteamLobbyComparison::Equal" },
		{ "EqualToOrGreaterThan.Name", "ESteamLobbyComparison::EqualToOrGreaterThan" },
		{ "EqualToOrLessThan.Name", "ESteamLobbyComparison::EqualToOrLessThan" },
		{ "GreaterThan.Name", "ESteamLobbyComparison::GreaterThan" },
		{ "LessThan.Name", "ESteamLobbyComparison::LessThan" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
		{ "NotEqual.Name", "ESteamLobbyComparison::NotEqual" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "lobby search filter tools" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamLobbyComparison::EqualToOrLessThan", (int64)ESteamLobbyComparison::EqualToOrLessThan },
		{ "ESteamLobbyComparison::LessThan", (int64)ESteamLobbyComparison::LessThan },
		{ "ESteamLobbyComparison::Equal", (int64)ESteamLobbyComparison::Equal },
		{ "ESteamLobbyComparison::GreaterThan", (int64)ESteamLobbyComparison::GreaterThan },
		{ "ESteamLobbyComparison::EqualToOrGreaterThan", (int64)ESteamLobbyComparison::EqualToOrGreaterThan },
		{ "ESteamLobbyComparison::NotEqual", (int64)ESteamLobbyComparison::NotEqual },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamCore_ESteamLobbyComparison_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamLobbyComparison_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	"ESteamLobbyComparison",
	"ESteamLobbyComparison",
	Z_Construct_UEnum_SteamCore_ESteamLobbyComparison_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamLobbyComparison_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamLobbyComparison_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCore_ESteamLobbyComparison_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCore_ESteamLobbyComparison()
{
	if (!Z_Registration_Info_UEnum_ESteamLobbyComparison.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamLobbyComparison.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamLobbyComparison_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamLobbyComparison.InnerSingleton;
}
// ********** End Enum ESteamLobbyComparison *******************************************************

// ********** Begin Enum ESteamLobbyDistanceFilter *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamLobbyDistanceFilter;
static UEnum* ESteamLobbyDistanceFilter_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamLobbyDistanceFilter.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamLobbyDistanceFilter.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamLobbyDistanceFilter, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamLobbyDistanceFilter"));
	}
	return Z_Registration_Info_UEnum_ESteamLobbyDistanceFilter.OuterSingleton;
}
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamLobbyDistanceFilter>()
{
	return ESteamLobbyDistanceFilter_StaticEnum();
}
struct Z_Construct_UEnum_SteamCore_ESteamLobbyDistanceFilter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Close.Name", "ESteamLobbyDistanceFilter::Close" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// lobby search distance. Lobby results are sorted from closest to farthest.\n" },
#endif
		{ "Default.Name", "ESteamLobbyDistanceFilter::Default" },
		{ "Far.Name", "ESteamLobbyDistanceFilter::Far" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "lobby search distance. Lobby results are sorted from closest to farthest." },
#endif
		{ "Worldwide.Name", "ESteamLobbyDistanceFilter::Worldwide" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamLobbyDistanceFilter::Close", (int64)ESteamLobbyDistanceFilter::Close },
		{ "ESteamLobbyDistanceFilter::Default", (int64)ESteamLobbyDistanceFilter::Default },
		{ "ESteamLobbyDistanceFilter::Far", (int64)ESteamLobbyDistanceFilter::Far },
		{ "ESteamLobbyDistanceFilter::Worldwide", (int64)ESteamLobbyDistanceFilter::Worldwide },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamCore_ESteamLobbyDistanceFilter_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamLobbyDistanceFilter_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	"ESteamLobbyDistanceFilter",
	"ESteamLobbyDistanceFilter",
	Z_Construct_UEnum_SteamCore_ESteamLobbyDistanceFilter_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamLobbyDistanceFilter_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamLobbyDistanceFilter_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCore_ESteamLobbyDistanceFilter_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCore_ESteamLobbyDistanceFilter()
{
	if (!Z_Registration_Info_UEnum_ESteamLobbyDistanceFilter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamLobbyDistanceFilter.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamLobbyDistanceFilter_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamLobbyDistanceFilter.InnerSingleton;
}
// ********** End Enum ESteamLobbyDistanceFilter ***************************************************

// ********** Begin Enum ESteamChatMemberStateChange ***********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamChatMemberStateChange;
static UEnum* ESteamChatMemberStateChange_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamChatMemberStateChange.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamChatMemberStateChange.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamChatMemberStateChange, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamChatMemberStateChange"));
	}
	return Z_Registration_Info_UEnum_ESteamChatMemberStateChange.OuterSingleton;
}
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamChatMemberStateChange>()
{
	return ESteamChatMemberStateChange_StaticEnum();
}
struct Z_Construct_UEnum_SteamCore_ESteamChatMemberStateChange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Banned.Name", "ESteamChatMemberStateChange::Banned" },
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "Disconnected.Name", "ESteamChatMemberStateChange::Disconnected" },
		{ "Entered.Name", "ESteamChatMemberStateChange::Entered" },
		{ "Kicked.Name", "ESteamChatMemberStateChange::Kicked" },
		{ "Left.Name", "ESteamChatMemberStateChange::Left" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
		{ "None.Name", "ESteamChatMemberStateChange::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamChatMemberStateChange::None", (int64)ESteamChatMemberStateChange::None },
		{ "ESteamChatMemberStateChange::Entered", (int64)ESteamChatMemberStateChange::Entered },
		{ "ESteamChatMemberStateChange::Left", (int64)ESteamChatMemberStateChange::Left },
		{ "ESteamChatMemberStateChange::Disconnected", (int64)ESteamChatMemberStateChange::Disconnected },
		{ "ESteamChatMemberStateChange::Kicked", (int64)ESteamChatMemberStateChange::Kicked },
		{ "ESteamChatMemberStateChange::Banned", (int64)ESteamChatMemberStateChange::Banned },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamCore_ESteamChatMemberStateChange_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamChatMemberStateChange_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	"ESteamChatMemberStateChange",
	"ESteamChatMemberStateChange",
	Z_Construct_UEnum_SteamCore_ESteamChatMemberStateChange_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamChatMemberStateChange_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamChatMemberStateChange_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCore_ESteamChatMemberStateChange_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCore_ESteamChatMemberStateChange()
{
	if (!Z_Registration_Info_UEnum_ESteamChatMemberStateChange.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamChatMemberStateChange.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamChatMemberStateChange_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamChatMemberStateChange.InnerSingleton;
}
// ********** End Enum ESteamChatMemberStateChange *************************************************

// ********** Begin Enum ESteamFavoriteFlags *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamFavoriteFlags;
static UEnum* ESteamFavoriteFlags_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamFavoriteFlags.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamFavoriteFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamFavoriteFlags, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamFavoriteFlags"));
	}
	return Z_Registration_Info_UEnum_ESteamFavoriteFlags.OuterSingleton;
}
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamFavoriteFlags>()
{
	return ESteamFavoriteFlags_StaticEnum();
}
struct Z_Construct_UEnum_SteamCore_ESteamFavoriteFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "Favorite.Name", "ESteamFavoriteFlags::Favorite" },
		{ "History.Name", "ESteamFavoriteFlags::History" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
		{ "None.Name", "ESteamFavoriteFlags::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamFavoriteFlags::None", (int64)ESteamFavoriteFlags::None },
		{ "ESteamFavoriteFlags::Favorite", (int64)ESteamFavoriteFlags::Favorite },
		{ "ESteamFavoriteFlags::History", (int64)ESteamFavoriteFlags::History },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamCore_ESteamFavoriteFlags_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamFavoriteFlags_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	"ESteamFavoriteFlags",
	"ESteamFavoriteFlags",
	Z_Construct_UEnum_SteamCore_ESteamFavoriteFlags_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamFavoriteFlags_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamFavoriteFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCore_ESteamFavoriteFlags_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCore_ESteamFavoriteFlags()
{
	if (!Z_Registration_Info_UEnum_ESteamFavoriteFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamFavoriteFlags.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamFavoriteFlags_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamFavoriteFlags.InnerSingleton;
}
// ********** End Enum ESteamFavoriteFlags *********************************************************

// ********** Begin ScriptStruct FFavoritesListAccountsUpdated *************************************
struct Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FFavoritesListAccountsUpdated); }
	static inline consteval int16 GetStructAlignment() { return alignof(FFavoritesListAccountsUpdated); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Structs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Structs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FFavoritesListAccountsUpdated constinit property declarations *****
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FFavoritesListAccountsUpdated constinit property declarations *******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFavoritesListAccountsUpdated>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFavoritesListAccountsUpdated;
class UScriptStruct* FFavoritesListAccountsUpdated::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FFavoritesListAccountsUpdated.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FFavoritesListAccountsUpdated.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("FavoritesListAccountsUpdated"));
	}
	return Z_Registration_Info_UScriptStruct_FFavoritesListAccountsUpdated.OuterSingleton;
	}

// ********** Begin ScriptStruct FFavoritesListAccountsUpdated Property Definitions ****************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFavoritesListAccountsUpdated, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 1466539257
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FFavoritesListAccountsUpdated Property Definitions ******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"FavoritesListAccountsUpdated",
	Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics::PropPointers),
	sizeof(FFavoritesListAccountsUpdated),
	alignof(FFavoritesListAccountsUpdated),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated()
{
	if (!Z_Registration_Info_UScriptStruct_FFavoritesListAccountsUpdated.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFavoritesListAccountsUpdated.InnerSingleton, Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FFavoritesListAccountsUpdated.InnerSingleton);
}
// ********** End ScriptStruct FFavoritesListAccountsUpdated ***************************************

// ********** Begin ScriptStruct FFavoritesListChanged *********************************************
struct Z_Construct_UScriptStruct_FFavoritesListChanged_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FFavoritesListChanged); }
	static inline consteval int16 GetStructAlignment() { return alignof(FFavoritesListChanged); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IP_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QueryPort_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionPort_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppID_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAdd_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FFavoritesListChanged constinit property declarations *************
	static const UECodeGen_Private::FStrPropertyParams NewProp_IP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_QueryPort;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ConnectionPort;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Flags_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Flags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Flags;
	static void NewProp_bAdd_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdd;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FFavoritesListChanged constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFavoritesListChanged>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FFavoritesListChanged_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFavoritesListChanged;
class UScriptStruct* FFavoritesListChanged::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FFavoritesListChanged.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FFavoritesListChanged.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFavoritesListChanged, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("FavoritesListChanged"));
	}
	return Z_Registration_Info_UScriptStruct_FFavoritesListChanged.OuterSingleton;
	}

// ********** Begin ScriptStruct FFavoritesListChanged Property Definitions ************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFavoritesListChanged, IP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IP_MetaData), NewProp_IP_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_QueryPort = { "QueryPort", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFavoritesListChanged, QueryPort), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QueryPort_MetaData), NewProp_QueryPort_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_ConnectionPort = { "ConnectionPort", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFavoritesListChanged, ConnectionPort), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectionPort_MetaData), NewProp_ConnectionPort_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFavoritesListChanged, AppID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppID_MetaData), NewProp_AppID_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_Flags_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_Flags_Inner = { "Flags", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_SteamCore_ESteamFavoriteFlags, METADATA_PARAMS(0, nullptr) }; // 358319
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFavoritesListChanged, Flags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Flags_MetaData), NewProp_Flags_MetaData) }; // 358319
void Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_bAdd_SetBit(void* Obj)
{
	((FFavoritesListChanged*)Obj)->bAdd = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_bAdd = { "bAdd", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFavoritesListChanged), &Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_bAdd_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAdd_MetaData), NewProp_bAdd_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFavoritesListChanged, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamID_MetaData), NewProp_SteamID_MetaData) }; // 1641547426
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_IP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_QueryPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_ConnectionPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_Flags_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_Flags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_Flags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_bAdd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_SteamID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FFavoritesListChanged Property Definitions **************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"FavoritesListChanged",
	Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::PropPointers),
	sizeof(FFavoritesListChanged),
	alignof(FFavoritesListChanged),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFavoritesListChanged()
{
	if (!Z_Registration_Info_UScriptStruct_FFavoritesListChanged.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFavoritesListChanged.InnerSingleton, Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FFavoritesListChanged.InnerSingleton);
}
// ********** End ScriptStruct FFavoritesListChanged ***********************************************

// ********** Begin ScriptStruct FLobbyChatMsg *****************************************************
struct Z_Construct_UScriptStruct_FLobbyChatMsg_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FLobbyChatMsg); }
	static inline consteval int16 GetStructAlignment() { return alignof(FLobbyChatMsg); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDLobby_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDUser_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatEntryType_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatID_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FLobbyChatMsg constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ChatEntryType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ChatEntryType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChatID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FLobbyChatMsg constinit property declarations ***********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLobbyChatMsg>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FLobbyChatMsg_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLobbyChatMsg;
class UScriptStruct* FLobbyChatMsg::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLobbyChatMsg.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLobbyChatMsg.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLobbyChatMsg, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("LobbyChatMsg"));
	}
	return Z_Registration_Info_UScriptStruct_FLobbyChatMsg.OuterSingleton;
	}

// ********** Begin ScriptStruct FLobbyChatMsg Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLobbyChatMsg, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIDLobby_MetaData), NewProp_SteamIDLobby_MetaData) }; // 1641547426
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLobbyChatMsg, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIDUser_MetaData), NewProp_SteamIDUser_MetaData) }; // 1641547426
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_ChatEntryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_ChatEntryType = { "ChatEntryType", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLobbyChatMsg, ChatEntryType), Z_Construct_UEnum_SteamCore_ESteamChatEntryType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatEntryType_MetaData), NewProp_ChatEntryType_MetaData) }; // 2279825220
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_ChatID = { "ChatID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLobbyChatMsg, ChatID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatID_MetaData), NewProp_ChatID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_SteamIDUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_ChatEntryType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_ChatEntryType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_ChatID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FLobbyChatMsg Property Definitions **********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"LobbyChatMsg",
	Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::PropPointers),
	sizeof(FLobbyChatMsg),
	alignof(FLobbyChatMsg),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLobbyChatMsg()
{
	if (!Z_Registration_Info_UScriptStruct_FLobbyChatMsg.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLobbyChatMsg.InnerSingleton, Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FLobbyChatMsg.InnerSingleton);
}
// ********** End ScriptStruct FLobbyChatMsg *******************************************************

// ********** Begin ScriptStruct FLobbyChatUpdate **************************************************
struct Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FLobbyChatUpdate); }
	static inline consteval int16 GetStructAlignment() { return alignof(FLobbyChatUpdate); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDLobby_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDUserChanged_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDMakingChange_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatMemberStateChange_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FLobbyChatUpdate constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUserChanged;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDMakingChange;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ChatMemberStateChange_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ChatMemberStateChange_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChatMemberStateChange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FLobbyChatUpdate constinit property declarations ********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLobbyChatUpdate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLobbyChatUpdate;
class UScriptStruct* FLobbyChatUpdate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLobbyChatUpdate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLobbyChatUpdate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLobbyChatUpdate, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("LobbyChatUpdate"));
	}
	return Z_Registration_Info_UScriptStruct_FLobbyChatUpdate.OuterSingleton;
	}

// ********** Begin ScriptStruct FLobbyChatUpdate Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLobbyChatUpdate, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIDLobby_MetaData), NewProp_SteamIDLobby_MetaData) }; // 1641547426
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_SteamIDUserChanged = { "SteamIDUserChanged", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLobbyChatUpdate, SteamIDUserChanged), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIDUserChanged_MetaData), NewProp_SteamIDUserChanged_MetaData) }; // 1641547426
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_SteamIDMakingChange = { "SteamIDMakingChange", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLobbyChatUpdate, SteamIDMakingChange), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIDMakingChange_MetaData), NewProp_SteamIDMakingChange_MetaData) }; // 1641547426
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_ChatMemberStateChange_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_ChatMemberStateChange_Inner = { "ChatMemberStateChange", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_SteamCore_ESteamChatMemberStateChange, METADATA_PARAMS(0, nullptr) }; // 2193231472
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_ChatMemberStateChange = { "ChatMemberStateChange", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLobbyChatUpdate, ChatMemberStateChange), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatMemberStateChange_MetaData), NewProp_ChatMemberStateChange_MetaData) }; // 2193231472
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_SteamIDUserChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_SteamIDMakingChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_ChatMemberStateChange_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_ChatMemberStateChange_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_ChatMemberStateChange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FLobbyChatUpdate Property Definitions *******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"LobbyChatUpdate",
	Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::PropPointers),
	sizeof(FLobbyChatUpdate),
	alignof(FLobbyChatUpdate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLobbyChatUpdate()
{
	if (!Z_Registration_Info_UScriptStruct_FLobbyChatUpdate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLobbyChatUpdate.InnerSingleton, Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FLobbyChatUpdate.InnerSingleton);
}
// ********** End ScriptStruct FLobbyChatUpdate ****************************************************

// ********** Begin ScriptStruct FLobbyDataUpdate **************************************************
struct Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FLobbyDataUpdate); }
	static inline consteval int16 GetStructAlignment() { return alignof(FLobbyDataUpdate); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDLobby_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDMember_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FLobbyDataUpdate constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDMember;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FLobbyDataUpdate constinit property declarations ********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLobbyDataUpdate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLobbyDataUpdate;
class UScriptStruct* FLobbyDataUpdate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLobbyDataUpdate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLobbyDataUpdate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLobbyDataUpdate, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("LobbyDataUpdate"));
	}
	return Z_Registration_Info_UScriptStruct_FLobbyDataUpdate.OuterSingleton;
	}

// ********** Begin ScriptStruct FLobbyDataUpdate Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLobbyDataUpdate, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIDLobby_MetaData), NewProp_SteamIDLobby_MetaData) }; // 1641547426
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_SteamIDMember = { "SteamIDMember", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLobbyDataUpdate, SteamIDMember), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIDMember_MetaData), NewProp_SteamIDMember_MetaData) }; // 1641547426
void Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((FLobbyDataUpdate*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLobbyDataUpdate), &Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSuccess_MetaData), NewProp_bSuccess_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_SteamIDMember,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FLobbyDataUpdate Property Definitions *******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"LobbyDataUpdate",
	Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::PropPointers),
	sizeof(FLobbyDataUpdate),
	alignof(FLobbyDataUpdate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLobbyDataUpdate()
{
	if (!Z_Registration_Info_UScriptStruct_FLobbyDataUpdate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLobbyDataUpdate.InnerSingleton, Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FLobbyDataUpdate.InnerSingleton);
}
// ********** End ScriptStruct FLobbyDataUpdate ****************************************************

// ********** Begin ScriptStruct FLobbyEnterData ***************************************************
struct Z_Construct_UScriptStruct_FLobbyEnterData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FLobbyEnterData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FLobbyEnterData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDLobby_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLocked_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatRoomEnterResponse_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FLobbyEnterData constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static void NewProp_bLocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocked;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ChatRoomEnterResponse_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ChatRoomEnterResponse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FLobbyEnterData constinit property declarations *********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLobbyEnterData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FLobbyEnterData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLobbyEnterData;
class UScriptStruct* FLobbyEnterData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLobbyEnterData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLobbyEnterData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLobbyEnterData, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("LobbyEnterData"));
	}
	return Z_Registration_Info_UScriptStruct_FLobbyEnterData.OuterSingleton;
	}

// ********** Begin ScriptStruct FLobbyEnterData Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLobbyEnterData, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIDLobby_MetaData), NewProp_SteamIDLobby_MetaData) }; // 1641547426
void Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_bLocked_SetBit(void* Obj)
{
	((FLobbyEnterData*)Obj)->bLocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_bLocked = { "bLocked", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLobbyEnterData), &Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_bLocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLocked_MetaData), NewProp_bLocked_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_ChatRoomEnterResponse_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_ChatRoomEnterResponse = { "ChatRoomEnterResponse", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLobbyEnterData, ChatRoomEnterResponse), Z_Construct_UEnum_SteamCore_ESteamChatRoomEnterResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatRoomEnterResponse_MetaData), NewProp_ChatRoomEnterResponse_MetaData) }; // 1845029404
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLobbyEnterData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_bLocked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_ChatRoomEnterResponse_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_ChatRoomEnterResponse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyEnterData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FLobbyEnterData Property Definitions ********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLobbyEnterData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"LobbyEnterData",
	Z_Construct_UScriptStruct_FLobbyEnterData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyEnterData_Statics::PropPointers),
	sizeof(FLobbyEnterData),
	alignof(FLobbyEnterData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyEnterData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLobbyEnterData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLobbyEnterData()
{
	if (!Z_Registration_Info_UScriptStruct_FLobbyEnterData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLobbyEnterData.InnerSingleton, Z_Construct_UScriptStruct_FLobbyEnterData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FLobbyEnterData.InnerSingleton);
}
// ********** End ScriptStruct FLobbyEnterData *****************************************************

// ********** Begin ScriptStruct FLobbyGameCreated *************************************************
struct Z_Construct_UScriptStruct_FLobbyGameCreated_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FLobbyGameCreated); }
	static inline consteval int16 GetStructAlignment() { return alignof(FLobbyGameCreated); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDLobby_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDGameServer_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IP_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FLobbyGameCreated constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDGameServer;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FLobbyGameCreated constinit property declarations *******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLobbyGameCreated>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FLobbyGameCreated_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLobbyGameCreated;
class UScriptStruct* FLobbyGameCreated::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLobbyGameCreated.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLobbyGameCreated.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLobbyGameCreated, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("LobbyGameCreated"));
	}
	return Z_Registration_Info_UScriptStruct_FLobbyGameCreated.OuterSingleton;
	}

// ********** Begin ScriptStruct FLobbyGameCreated Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLobbyGameCreated, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIDLobby_MetaData), NewProp_SteamIDLobby_MetaData) }; // 1641547426
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_SteamIDGameServer = { "SteamIDGameServer", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLobbyGameCreated, SteamIDGameServer), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIDGameServer_MetaData), NewProp_SteamIDGameServer_MetaData) }; // 1641547426
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLobbyGameCreated, IP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IP_MetaData), NewProp_IP_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLobbyGameCreated, Port), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Port_MetaData), NewProp_Port_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_SteamIDGameServer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_IP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_Port,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FLobbyGameCreated Property Definitions ******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"LobbyGameCreated",
	Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::PropPointers),
	sizeof(FLobbyGameCreated),
	alignof(FLobbyGameCreated),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLobbyGameCreated()
{
	if (!Z_Registration_Info_UScriptStruct_FLobbyGameCreated.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLobbyGameCreated.InnerSingleton, Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FLobbyGameCreated.InnerSingleton);
}
// ********** End ScriptStruct FLobbyGameCreated ***************************************************

// ********** Begin ScriptStruct FLobbyInviteData **************************************************
struct Z_Construct_UScriptStruct_FLobbyInviteData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FLobbyInviteData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FLobbyInviteData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDUser_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDLobby_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameID_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FLobbyInviteData constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FLobbyInviteData constinit property declarations ********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLobbyInviteData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FLobbyInviteData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLobbyInviteData;
class UScriptStruct* FLobbyInviteData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLobbyInviteData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLobbyInviteData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLobbyInviteData, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("LobbyInviteData"));
	}
	return Z_Registration_Info_UScriptStruct_FLobbyInviteData.OuterSingleton;
	}

// ********** Begin ScriptStruct FLobbyInviteData Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLobbyInviteData, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIDUser_MetaData), NewProp_SteamIDUser_MetaData) }; // 1641547426
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLobbyInviteData, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIDLobby_MetaData), NewProp_SteamIDLobby_MetaData) }; // 1641547426
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLobbyInviteData, GameID), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameID_MetaData), NewProp_GameID_MetaData) }; // 3781658651
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLobbyInviteData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewProp_SteamIDUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewProp_GameID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyInviteData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FLobbyInviteData Property Definitions *******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLobbyInviteData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"LobbyInviteData",
	Z_Construct_UScriptStruct_FLobbyInviteData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyInviteData_Statics::PropPointers),
	sizeof(FLobbyInviteData),
	alignof(FLobbyInviteData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyInviteData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLobbyInviteData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLobbyInviteData()
{
	if (!Z_Registration_Info_UScriptStruct_FLobbyInviteData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLobbyInviteData.InnerSingleton, Z_Construct_UScriptStruct_FLobbyInviteData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FLobbyInviteData.InnerSingleton);
}
// ********** End ScriptStruct FLobbyInviteData ****************************************************

// ********** Begin ScriptStruct FLobbyKickedData **************************************************
struct Z_Construct_UScriptStruct_FLobbyKickedData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FLobbyKickedData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FLobbyKickedData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDLobby_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDAdmin_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bKickedDueToDisconnect_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FLobbyKickedData constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDAdmin;
	static void NewProp_bKickedDueToDisconnect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bKickedDueToDisconnect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FLobbyKickedData constinit property declarations ********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLobbyKickedData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FLobbyKickedData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLobbyKickedData;
class UScriptStruct* FLobbyKickedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLobbyKickedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLobbyKickedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLobbyKickedData, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("LobbyKickedData"));
	}
	return Z_Registration_Info_UScriptStruct_FLobbyKickedData.OuterSingleton;
	}

// ********** Begin ScriptStruct FLobbyKickedData Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLobbyKickedData, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIDLobby_MetaData), NewProp_SteamIDLobby_MetaData) }; // 1641547426
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_SteamIDAdmin = { "SteamIDAdmin", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLobbyKickedData, SteamIDAdmin), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIDAdmin_MetaData), NewProp_SteamIDAdmin_MetaData) }; // 1641547426
void Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_bKickedDueToDisconnect_SetBit(void* Obj)
{
	((FLobbyKickedData*)Obj)->bKickedDueToDisconnect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_bKickedDueToDisconnect = { "bKickedDueToDisconnect", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLobbyKickedData), &Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_bKickedDueToDisconnect_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bKickedDueToDisconnect_MetaData), NewProp_bKickedDueToDisconnect_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLobbyKickedData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_SteamIDAdmin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_bKickedDueToDisconnect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyKickedData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FLobbyKickedData Property Definitions *******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLobbyKickedData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"LobbyKickedData",
	Z_Construct_UScriptStruct_FLobbyKickedData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyKickedData_Statics::PropPointers),
	sizeof(FLobbyKickedData),
	alignof(FLobbyKickedData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyKickedData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLobbyKickedData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLobbyKickedData()
{
	if (!Z_Registration_Info_UScriptStruct_FLobbyKickedData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLobbyKickedData.InnerSingleton, Z_Construct_UScriptStruct_FLobbyKickedData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FLobbyKickedData.InnerSingleton);
}
// ********** End ScriptStruct FLobbyKickedData ****************************************************

// ********** Begin ScriptStruct FLobbyMatchList ***************************************************
struct Z_Construct_UScriptStruct_FLobbyMatchList_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FLobbyMatchList); }
	static inline consteval int16 GetStructAlignment() { return alignof(FLobbyMatchList); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbiesMatching_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FLobbyMatchList constinit property declarations *******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_LobbiesMatching;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FLobbyMatchList constinit property declarations *********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLobbyMatchList>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FLobbyMatchList_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLobbyMatchList;
class UScriptStruct* FLobbyMatchList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLobbyMatchList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLobbyMatchList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLobbyMatchList, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("LobbyMatchList"));
	}
	return Z_Registration_Info_UScriptStruct_FLobbyMatchList.OuterSingleton;
	}

// ********** Begin ScriptStruct FLobbyMatchList Property Definitions ******************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLobbyMatchList_Statics::NewProp_LobbiesMatching = { "LobbiesMatching", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLobbyMatchList, LobbiesMatching), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbiesMatching_MetaData), NewProp_LobbiesMatching_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLobbyMatchList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyMatchList_Statics::NewProp_LobbiesMatching,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyMatchList_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FLobbyMatchList Property Definitions ********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLobbyMatchList_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"LobbyMatchList",
	Z_Construct_UScriptStruct_FLobbyMatchList_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyMatchList_Statics::PropPointers),
	sizeof(FLobbyMatchList),
	alignof(FLobbyMatchList),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyMatchList_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLobbyMatchList_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLobbyMatchList()
{
	if (!Z_Registration_Info_UScriptStruct_FLobbyMatchList.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLobbyMatchList.InnerSingleton, Z_Construct_UScriptStruct_FLobbyMatchList_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FLobbyMatchList.InnerSingleton);
}
// ********** End ScriptStruct FLobbyMatchList *****************************************************

// ********** Begin ScriptStruct FCreateLobbyData **************************************************
struct Z_Construct_UScriptStruct_FCreateLobbyData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FCreateLobbyData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FCreateLobbyData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDLobby_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FCreateLobbyData constinit property declarations ******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FCreateLobbyData constinit property declarations ********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCreateLobbyData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FCreateLobbyData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCreateLobbyData;
class UScriptStruct* FCreateLobbyData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCreateLobbyData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCreateLobbyData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCreateLobbyData, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("CreateLobbyData"));
	}
	return Z_Registration_Info_UScriptStruct_FCreateLobbyData.OuterSingleton;
	}

// ********** Begin ScriptStruct FCreateLobbyData Property Definitions *****************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCreateLobbyData_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCreateLobbyData_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateLobbyData, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 1466539257
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCreateLobbyData_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateLobbyData, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIDLobby_MetaData), NewProp_SteamIDLobby_MetaData) }; // 1641547426
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCreateLobbyData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateLobbyData_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateLobbyData_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateLobbyData_Statics::NewProp_SteamIDLobby,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateLobbyData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FCreateLobbyData Property Definitions *******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCreateLobbyData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"CreateLobbyData",
	Z_Construct_UScriptStruct_FCreateLobbyData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateLobbyData_Statics::PropPointers),
	sizeof(FCreateLobbyData),
	alignof(FCreateLobbyData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateLobbyData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCreateLobbyData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCreateLobbyData()
{
	if (!Z_Registration_Info_UScriptStruct_FCreateLobbyData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCreateLobbyData.InnerSingleton, Z_Construct_UScriptStruct_FCreateLobbyData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FCreateLobbyData.InnerSingleton);
}
// ********** End ScriptStruct FCreateLobbyData ****************************************************

// ********** Begin ScriptStruct FJoinLobbyData ****************************************************
struct Z_Construct_UScriptStruct_FJoinLobbyData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FJoinLobbyData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FJoinLobbyData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDLobby_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLocked_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatRoomEnterResponse_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FJoinLobbyData constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static void NewProp_bLocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocked;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ChatRoomEnterResponse_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ChatRoomEnterResponse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FJoinLobbyData constinit property declarations **********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJoinLobbyData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FJoinLobbyData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FJoinLobbyData;
class UScriptStruct* FJoinLobbyData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FJoinLobbyData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FJoinLobbyData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJoinLobbyData, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("JoinLobbyData"));
	}
	return Z_Registration_Info_UScriptStruct_FJoinLobbyData.OuterSingleton;
	}

// ********** Begin ScriptStruct FJoinLobbyData Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJoinLobbyData, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIDLobby_MetaData), NewProp_SteamIDLobby_MetaData) }; // 1641547426
void Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_bLocked_SetBit(void* Obj)
{
	((FJoinLobbyData*)Obj)->bLocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_bLocked = { "bLocked", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FJoinLobbyData), &Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_bLocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLocked_MetaData), NewProp_bLocked_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_ChatRoomEnterResponse_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_ChatRoomEnterResponse = { "ChatRoomEnterResponse", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJoinLobbyData, ChatRoomEnterResponse), Z_Construct_UEnum_SteamCore_ESteamChatRoomEnterResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatRoomEnterResponse_MetaData), NewProp_ChatRoomEnterResponse_MetaData) }; // 1845029404
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJoinLobbyData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_bLocked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_ChatRoomEnterResponse_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_ChatRoomEnterResponse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoinLobbyData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FJoinLobbyData Property Definitions *********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJoinLobbyData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"JoinLobbyData",
	Z_Construct_UScriptStruct_FJoinLobbyData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoinLobbyData_Statics::PropPointers),
	sizeof(FJoinLobbyData),
	alignof(FJoinLobbyData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoinLobbyData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FJoinLobbyData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FJoinLobbyData()
{
	if (!Z_Registration_Info_UScriptStruct_FJoinLobbyData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FJoinLobbyData.InnerSingleton, Z_Construct_UScriptStruct_FJoinLobbyData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FJoinLobbyData.InnerSingleton);
}
// ********** End ScriptStruct FJoinLobbyData ******************************************************

// ********** Begin Delegate FOnFavoritesListAccountsUpdated ***************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListAccountsUpdated__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnFavoritesListAccountsUpdated_Parms
	{
		FFavoritesListAccountsUpdated Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnFavoritesListAccountsUpdated constinit property declarations *******
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnFavoritesListAccountsUpdated constinit property declarations *********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnFavoritesListAccountsUpdated Property Definitions ******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnFavoritesListAccountsUpdated_Parms, Data), Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1583195427
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnFavoritesListAccountsUpdated Property Definitions ********************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnFavoritesListAccountsUpdated__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::_Script_SteamCore_eventOnFavoritesListAccountsUpdated_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::_Script_SteamCore_eventOnFavoritesListAccountsUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListAccountsUpdated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFavoritesListAccountsUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnFavoritesListAccountsUpdated, FFavoritesListAccountsUpdated const& Data)
{
	struct _Script_SteamCore_eventOnFavoritesListAccountsUpdated_Parms
	{
		FFavoritesListAccountsUpdated Data;
	};
	_Script_SteamCore_eventOnFavoritesListAccountsUpdated_Parms Parms;
	Parms.Data=Data;
	OnFavoritesListAccountsUpdated.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnFavoritesListAccountsUpdated *****************************************

// ********** Begin Delegate FOnFavoritesListChanged ***********************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListChanged__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnFavoritesListChanged_Parms
	{
		FFavoritesListChanged Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnFavoritesListChanged constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnFavoritesListChanged constinit property declarations *****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnFavoritesListChanged Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListChanged__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnFavoritesListChanged_Parms, Data), Z_Construct_UScriptStruct_FFavoritesListChanged, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 315379324
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListChanged__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListChanged__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnFavoritesListChanged Property Definitions ****************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnFavoritesListChanged__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListChanged__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListChanged__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListChanged__DelegateSignature_Statics::_Script_SteamCore_eventOnFavoritesListChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListChanged__DelegateSignature_Statics::_Script_SteamCore_eventOnFavoritesListChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFavoritesListChanged_DelegateWrapper(const FMulticastScriptDelegate& OnFavoritesListChanged, FFavoritesListChanged const& Data)
{
	struct _Script_SteamCore_eventOnFavoritesListChanged_Parms
	{
		FFavoritesListChanged Data;
	};
	_Script_SteamCore_eventOnFavoritesListChanged_Parms Parms;
	Parms.Data=Data;
	OnFavoritesListChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnFavoritesListChanged *************************************************

// ********** Begin Delegate FOnLobbyChatMsg *******************************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatMsg__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnLobbyChatMsg_Parms
	{
		FLobbyChatMsg Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnLobbyChatMsg constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnLobbyChatMsg constinit property declarations *************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnLobbyChatMsg Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatMsg__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnLobbyChatMsg_Parms, Data), Z_Construct_UScriptStruct_FLobbyChatMsg, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2447249715
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatMsg__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatMsg__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatMsg__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnLobbyChatMsg Property Definitions ************************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatMsg__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnLobbyChatMsg__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatMsg__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatMsg__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatMsg__DelegateSignature_Statics::_Script_SteamCore_eventOnLobbyChatMsg_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatMsg__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatMsg__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatMsg__DelegateSignature_Statics::_Script_SteamCore_eventOnLobbyChatMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatMsg__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatMsg__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLobbyChatMsg_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyChatMsg, FLobbyChatMsg const& Data)
{
	struct _Script_SteamCore_eventOnLobbyChatMsg_Parms
	{
		FLobbyChatMsg Data;
	};
	_Script_SteamCore_eventOnLobbyChatMsg_Parms Parms;
	Parms.Data=Data;
	OnLobbyChatMsg.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnLobbyChatMsg *********************************************************

// ********** Begin Delegate FOnLobbyChatUpdate ****************************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatUpdate__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnLobbyChatUpdate_Parms
	{
		FLobbyChatUpdate Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnLobbyChatUpdate constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnLobbyChatUpdate constinit property declarations **********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnLobbyChatUpdate Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatUpdate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnLobbyChatUpdate_Parms, Data), Z_Construct_UScriptStruct_FLobbyChatUpdate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 611540414
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatUpdate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatUpdate__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatUpdate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnLobbyChatUpdate Property Definitions *********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatUpdate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnLobbyChatUpdate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatUpdate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatUpdate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatUpdate__DelegateSignature_Statics::_Script_SteamCore_eventOnLobbyChatUpdate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatUpdate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatUpdate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatUpdate__DelegateSignature_Statics::_Script_SteamCore_eventOnLobbyChatUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatUpdate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatUpdate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLobbyChatUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyChatUpdate, FLobbyChatUpdate const& Data)
{
	struct _Script_SteamCore_eventOnLobbyChatUpdate_Parms
	{
		FLobbyChatUpdate Data;
	};
	_Script_SteamCore_eventOnLobbyChatUpdate_Parms Parms;
	Parms.Data=Data;
	OnLobbyChatUpdate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnLobbyChatUpdate ******************************************************

// ********** Begin Delegate FOnLobbyDataUpdate ****************************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnLobbyDataUpdate__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnLobbyDataUpdate_Parms
	{
		FLobbyDataUpdate Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnLobbyDataUpdate constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnLobbyDataUpdate constinit property declarations **********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnLobbyDataUpdate Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnLobbyDataUpdate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnLobbyDataUpdate_Parms, Data), Z_Construct_UScriptStruct_FLobbyDataUpdate, METADATA_PARAMS(0, nullptr) }; // 378837674
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnLobbyDataUpdate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnLobbyDataUpdate__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyDataUpdate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnLobbyDataUpdate Property Definitions *********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnLobbyDataUpdate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnLobbyDataUpdate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnLobbyDataUpdate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyDataUpdate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnLobbyDataUpdate__DelegateSignature_Statics::_Script_SteamCore_eventOnLobbyDataUpdate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyDataUpdate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnLobbyDataUpdate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnLobbyDataUpdate__DelegateSignature_Statics::_Script_SteamCore_eventOnLobbyDataUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLobbyDataUpdate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnLobbyDataUpdate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLobbyDataUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyDataUpdate, FLobbyDataUpdate Data)
{
	struct _Script_SteamCore_eventOnLobbyDataUpdate_Parms
	{
		FLobbyDataUpdate Data;
	};
	_Script_SteamCore_eventOnLobbyDataUpdate_Parms Parms;
	Parms.Data=Data;
	OnLobbyDataUpdate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnLobbyDataUpdate ******************************************************

// ********** Begin Delegate FOnLobbyEnter *********************************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnLobbyEnter__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnLobbyEnter_Parms
	{
		FLobbyEnterData Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnLobbyEnter constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnLobbyEnter constinit property declarations ***************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnLobbyEnter Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnLobbyEnter__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnLobbyEnter_Parms, Data), Z_Construct_UScriptStruct_FLobbyEnterData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 206954456
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnLobbyEnter__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnLobbyEnter__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyEnter__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnLobbyEnter Property Definitions **************************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnLobbyEnter__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnLobbyEnter__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnLobbyEnter__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyEnter__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnLobbyEnter__DelegateSignature_Statics::_Script_SteamCore_eventOnLobbyEnter_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyEnter__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnLobbyEnter__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnLobbyEnter__DelegateSignature_Statics::_Script_SteamCore_eventOnLobbyEnter_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLobbyEnter__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnLobbyEnter__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLobbyEnter_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyEnter, FLobbyEnterData const& Data)
{
	struct _Script_SteamCore_eventOnLobbyEnter_Parms
	{
		FLobbyEnterData Data;
	};
	_Script_SteamCore_eventOnLobbyEnter_Parms Parms;
	Parms.Data=Data;
	OnLobbyEnter.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnLobbyEnter ***********************************************************

// ********** Begin Delegate FOnLobbyGameCreated ***************************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnLobbyGameCreated__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnLobbyGameCreated_Parms
	{
		FLobbyGameCreated Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnLobbyGameCreated constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnLobbyGameCreated constinit property declarations *********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnLobbyGameCreated Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnLobbyGameCreated__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnLobbyGameCreated_Parms, Data), Z_Construct_UScriptStruct_FLobbyGameCreated, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3411831617
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnLobbyGameCreated__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnLobbyGameCreated__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyGameCreated__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnLobbyGameCreated Property Definitions ********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnLobbyGameCreated__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnLobbyGameCreated__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnLobbyGameCreated__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyGameCreated__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnLobbyGameCreated__DelegateSignature_Statics::_Script_SteamCore_eventOnLobbyGameCreated_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyGameCreated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnLobbyGameCreated__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnLobbyGameCreated__DelegateSignature_Statics::_Script_SteamCore_eventOnLobbyGameCreated_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLobbyGameCreated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnLobbyGameCreated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLobbyGameCreated_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyGameCreated, FLobbyGameCreated const& Data)
{
	struct _Script_SteamCore_eventOnLobbyGameCreated_Parms
	{
		FLobbyGameCreated Data;
	};
	_Script_SteamCore_eventOnLobbyGameCreated_Parms Parms;
	Parms.Data=Data;
	OnLobbyGameCreated.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnLobbyGameCreated *****************************************************

// ********** Begin Delegate FOnLobbyInvite ********************************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnLobbyInvite__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnLobbyInvite_Parms
	{
		FLobbyInviteData Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnLobbyInvite constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnLobbyInvite constinit property declarations **************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnLobbyInvite Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnLobbyInvite__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnLobbyInvite_Parms, Data), Z_Construct_UScriptStruct_FLobbyInviteData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2643068944
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnLobbyInvite__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnLobbyInvite__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyInvite__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnLobbyInvite Property Definitions *************************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnLobbyInvite__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnLobbyInvite__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnLobbyInvite__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyInvite__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnLobbyInvite__DelegateSignature_Statics::_Script_SteamCore_eventOnLobbyInvite_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyInvite__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnLobbyInvite__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnLobbyInvite__DelegateSignature_Statics::_Script_SteamCore_eventOnLobbyInvite_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLobbyInvite__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnLobbyInvite__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLobbyInvite_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyInvite, FLobbyInviteData const& Data)
{
	struct _Script_SteamCore_eventOnLobbyInvite_Parms
	{
		FLobbyInviteData Data;
	};
	_Script_SteamCore_eventOnLobbyInvite_Parms Parms;
	Parms.Data=Data;
	OnLobbyInvite.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnLobbyInvite **********************************************************

// ********** Begin Delegate FOnLobbyKicked ********************************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnLobbyKicked__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnLobbyKicked_Parms
	{
		FLobbyKickedData Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnLobbyKicked constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnLobbyKicked constinit property declarations **************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnLobbyKicked Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnLobbyKicked__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnLobbyKicked_Parms, Data), Z_Construct_UScriptStruct_FLobbyKickedData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 252345628
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnLobbyKicked__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnLobbyKicked__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyKicked__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnLobbyKicked Property Definitions *************************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnLobbyKicked__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnLobbyKicked__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnLobbyKicked__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyKicked__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnLobbyKicked__DelegateSignature_Statics::_Script_SteamCore_eventOnLobbyKicked_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyKicked__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnLobbyKicked__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnLobbyKicked__DelegateSignature_Statics::_Script_SteamCore_eventOnLobbyKicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLobbyKicked__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnLobbyKicked__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLobbyKicked_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyKicked, FLobbyKickedData const& Data)
{
	struct _Script_SteamCore_eventOnLobbyKicked_Parms
	{
		FLobbyKickedData Data;
	};
	_Script_SteamCore_eventOnLobbyKicked_Parms Parms;
	Parms.Data=Data;
	OnLobbyKicked.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnLobbyKicked **********************************************************

// ********** Begin Delegate FOnRequestLobbyList ***************************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnRequestLobbyList_Parms
	{
		FLobbyMatchList Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnRequestLobbyList constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnRequestLobbyList constinit property declarations *********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnRequestLobbyList Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnRequestLobbyList_Parms, Data), Z_Construct_UScriptStruct_FLobbyMatchList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3824979745
void Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCore_eventOnRequestLobbyList_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnRequestLobbyList_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnRequestLobbyList Property Definitions ********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnRequestLobbyList__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature_Statics::_Script_SteamCore_eventOnRequestLobbyList_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00520000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature_Statics::_Script_SteamCore_eventOnRequestLobbyList_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRequestLobbyList_DelegateWrapper(const FScriptDelegate& OnRequestLobbyList, FLobbyMatchList const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventOnRequestLobbyList_Parms
	{
		FLobbyMatchList Data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventOnRequestLobbyList_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnRequestLobbyList.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnRequestLobbyList *****************************************************

// ********** Begin Delegate FOnCreateLobby ********************************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnCreateLobby_Parms
	{
		FCreateLobbyData Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnCreateLobby constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnCreateLobby constinit property declarations **************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnCreateLobby Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnCreateLobby_Parms, Data), Z_Construct_UScriptStruct_FCreateLobbyData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1444217432
void Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCore_eventOnCreateLobby_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnCreateLobby_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnCreateLobby Property Definitions *************************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnCreateLobby__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature_Statics::_Script_SteamCore_eventOnCreateLobby_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00520000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature_Statics::_Script_SteamCore_eventOnCreateLobby_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCreateLobby_DelegateWrapper(const FScriptDelegate& OnCreateLobby, FCreateLobbyData const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventOnCreateLobby_Parms
	{
		FCreateLobbyData Data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventOnCreateLobby_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnCreateLobby.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnCreateLobby **********************************************************

// ********** Begin Delegate FOnJoinLobby **********************************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnJoinLobby_Parms
	{
		FJoinLobbyData Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnJoinLobby constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnJoinLobby constinit property declarations ****************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnJoinLobby Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnJoinLobby_Parms, Data), Z_Construct_UScriptStruct_FJoinLobbyData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 4190186525
void Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCore_eventOnJoinLobby_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnJoinLobby_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnJoinLobby Property Definitions ***************************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnJoinLobby__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature_Statics::_Script_SteamCore_eventOnJoinLobby_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00520000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature_Statics::_Script_SteamCore_eventOnJoinLobby_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnJoinLobby_DelegateWrapper(const FScriptDelegate& OnJoinLobby, FJoinLobbyData const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventOnJoinLobby_Parms
	{
		FJoinLobbyData Data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventOnJoinLobby_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnJoinLobby.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnJoinLobby ************************************************************

// ********** Begin Delegate FOnFindSessions *******************************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnFindSessions_Parms
	{
		TArray<FBlueprintSessionResult> Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnFindSessions constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnFindSessions constinit property declarations *************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnFindSessions Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(0, nullptr) }; // 2609908441
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnFindSessions_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2609908441
void Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCore_eventOnFindSessions_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnFindSessions_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnFindSessions Property Definitions ************************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnFindSessions__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::_Script_SteamCore_eventOnFindSessions_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00520000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::_Script_SteamCore_eventOnFindSessions_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFindSessions_DelegateWrapper(const FScriptDelegate& OnFindSessions, TArray<FBlueprintSessionResult> const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventOnFindSessions_Parms
	{
		TArray<FBlueprintSessionResult> Data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventOnFindSessions_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnFindSessions.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnFindSessions *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingTypes_h__Script_SteamCore_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESteamSessionFindType_StaticEnum, TEXT("ESteamSessionFindType"), &Z_Registration_Info_UEnum_ESteamSessionFindType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1935662569U) },
		{ ESteamLobbyType_StaticEnum, TEXT("ESteamLobbyType"), &Z_Registration_Info_UEnum_ESteamLobbyType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1984566643U) },
		{ ESteamLobbyComparison_StaticEnum, TEXT("ESteamLobbyComparison"), &Z_Registration_Info_UEnum_ESteamLobbyComparison, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2651607147U) },
		{ ESteamLobbyDistanceFilter_StaticEnum, TEXT("ESteamLobbyDistanceFilter"), &Z_Registration_Info_UEnum_ESteamLobbyDistanceFilter, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 537085162U) },
		{ ESteamChatMemberStateChange_StaticEnum, TEXT("ESteamChatMemberStateChange"), &Z_Registration_Info_UEnum_ESteamChatMemberStateChange, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2193231472U) },
		{ ESteamFavoriteFlags_StaticEnum, TEXT("ESteamFavoriteFlags"), &Z_Registration_Info_UEnum_ESteamFavoriteFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 358319U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFavoritesListAccountsUpdated::StaticStruct, Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics::NewStructOps, TEXT("FavoritesListAccountsUpdated"),&Z_Registration_Info_UScriptStruct_FFavoritesListAccountsUpdated, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFavoritesListAccountsUpdated), 1583195427U) },
		{ FFavoritesListChanged::StaticStruct, Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewStructOps, TEXT("FavoritesListChanged"),&Z_Registration_Info_UScriptStruct_FFavoritesListChanged, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFavoritesListChanged), 315379324U) },
		{ FLobbyChatMsg::StaticStruct, Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewStructOps, TEXT("LobbyChatMsg"),&Z_Registration_Info_UScriptStruct_FLobbyChatMsg, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLobbyChatMsg), 2447249715U) },
		{ FLobbyChatUpdate::StaticStruct, Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewStructOps, TEXT("LobbyChatUpdate"),&Z_Registration_Info_UScriptStruct_FLobbyChatUpdate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLobbyChatUpdate), 611540414U) },
		{ FLobbyDataUpdate::StaticStruct, Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewStructOps, TEXT("LobbyDataUpdate"),&Z_Registration_Info_UScriptStruct_FLobbyDataUpdate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLobbyDataUpdate), 378837674U) },
		{ FLobbyEnterData::StaticStruct, Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewStructOps, TEXT("LobbyEnterData"),&Z_Registration_Info_UScriptStruct_FLobbyEnterData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLobbyEnterData), 206954456U) },
		{ FLobbyGameCreated::StaticStruct, Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewStructOps, TEXT("LobbyGameCreated"),&Z_Registration_Info_UScriptStruct_FLobbyGameCreated, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLobbyGameCreated), 3411831617U) },
		{ FLobbyInviteData::StaticStruct, Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewStructOps, TEXT("LobbyInviteData"),&Z_Registration_Info_UScriptStruct_FLobbyInviteData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLobbyInviteData), 2643068944U) },
		{ FLobbyKickedData::StaticStruct, Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewStructOps, TEXT("LobbyKickedData"),&Z_Registration_Info_UScriptStruct_FLobbyKickedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLobbyKickedData), 252345628U) },
		{ FLobbyMatchList::StaticStruct, Z_Construct_UScriptStruct_FLobbyMatchList_Statics::NewStructOps, TEXT("LobbyMatchList"),&Z_Registration_Info_UScriptStruct_FLobbyMatchList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLobbyMatchList), 3824979745U) },
		{ FCreateLobbyData::StaticStruct, Z_Construct_UScriptStruct_FCreateLobbyData_Statics::NewStructOps, TEXT("CreateLobbyData"),&Z_Registration_Info_UScriptStruct_FCreateLobbyData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCreateLobbyData), 1444217432U) },
		{ FJoinLobbyData::StaticStruct, Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewStructOps, TEXT("JoinLobbyData"),&Z_Registration_Info_UScriptStruct_FJoinLobbyData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJoinLobbyData), 4190186525U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingTypes_h__Script_SteamCore_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingTypes_h__Script_SteamCore_472359100{
	TEXT("/Script/SteamCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingTypes_h__Script_SteamCore_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingTypes_h__Script_SteamCore_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingTypes_h__Script_SteamCore_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingTypes_h__Script_SteamCore_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
