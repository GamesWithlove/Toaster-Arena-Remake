// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamMatchmaking/SteamMatchmakingTypes.h"
#include "FindSessionsCallbackProxy.h"
#include "SteamCore/Public/SteamCore/SteamTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamMatchmakingTypes() {}
// Cross Module References
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
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamSessionFindType;
	static UEnum* ESteamSessionFindType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESteamSessionFindType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESteamSessionFindType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamSessionFindType, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamSessionFindType"));
		}
		return Z_Registration_Info_UEnum_ESteamSessionFindType.OuterSingleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamSessionFindType>()
	{
		return ESteamSessionFindType_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamCore_ESteamSessionFindType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamCore_ESteamSessionFindType_Statics::Enumerators[] = {
		{ "ESteamSessionFindType::Listen", (int64)ESteamSessionFindType::Listen },
		{ "ESteamSessionFindType::Dedicated", (int64)ESteamSessionFindType::Dedicated },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamCore_ESteamSessionFindType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Enums\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "Dedicated.Name", "ESteamSessionFindType::Dedicated" },
		{ "Listen.Name", "ESteamSessionFindType::Listen" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Enums\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamSessionFindType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		"ESteamSessionFindType",
		"ESteamSessionFindType",
		Z_Construct_UEnum_SteamCore_ESteamSessionFindType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamSessionFindType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamCore_ESteamSessionFindType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamSessionFindType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamCore_ESteamSessionFindType()
	{
		if (!Z_Registration_Info_UEnum_ESteamSessionFindType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamSessionFindType.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamSessionFindType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESteamSessionFindType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamLobbyType;
	static UEnum* ESteamLobbyType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESteamLobbyType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESteamLobbyType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamLobbyType, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamLobbyType"));
		}
		return Z_Registration_Info_UEnum_ESteamLobbyType.OuterSingleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamLobbyType>()
	{
		return ESteamLobbyType_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamCore_ESteamLobbyType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamCore_ESteamLobbyType_Statics::Enumerators[] = {
		{ "ESteamLobbyType::Private", (int64)ESteamLobbyType::Private },
		{ "ESteamLobbyType::FriendsOnly", (int64)ESteamLobbyType::FriendsOnly },
		{ "ESteamLobbyType::Public", (int64)ESteamLobbyType::Public },
		{ "ESteamLobbyType::Invisible", (int64)ESteamLobbyType::Invisible },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamCore_ESteamLobbyType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FriendsOnly.Name", "ESteamLobbyType::FriendsOnly" },
		{ "Invisible.Name", "ESteamLobbyType::Invisible" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
		{ "Private.Name", "ESteamLobbyType::Private" },
		{ "Public.Name", "ESteamLobbyType::Public" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamLobbyType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		"ESteamLobbyType",
		"ESteamLobbyType",
		Z_Construct_UEnum_SteamCore_ESteamLobbyType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamLobbyType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamCore_ESteamLobbyType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamLobbyType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamCore_ESteamLobbyType()
	{
		if (!Z_Registration_Info_UEnum_ESteamLobbyType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamLobbyType.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamLobbyType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESteamLobbyType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamLobbyComparison;
	static UEnum* ESteamLobbyComparison_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESteamLobbyComparison.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESteamLobbyComparison.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamLobbyComparison, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamLobbyComparison"));
		}
		return Z_Registration_Info_UEnum_ESteamLobbyComparison.OuterSingleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamLobbyComparison>()
	{
		return ESteamLobbyComparison_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamCore_ESteamLobbyComparison_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamCore_ESteamLobbyComparison_Statics::Enumerators[] = {
		{ "ESteamLobbyComparison::EqualToOrLessThan", (int64)ESteamLobbyComparison::EqualToOrLessThan },
		{ "ESteamLobbyComparison::LessThan", (int64)ESteamLobbyComparison::LessThan },
		{ "ESteamLobbyComparison::Equal", (int64)ESteamLobbyComparison::Equal },
		{ "ESteamLobbyComparison::GreaterThan", (int64)ESteamLobbyComparison::GreaterThan },
		{ "ESteamLobbyComparison::EqualToOrGreaterThan", (int64)ESteamLobbyComparison::EqualToOrGreaterThan },
		{ "ESteamLobbyComparison::NotEqual", (int64)ESteamLobbyComparison::NotEqual },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamCore_ESteamLobbyComparison_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// lobby search filter tools\n" },
		{ "Equal.Name", "ESteamLobbyComparison::Equal" },
		{ "EqualToOrGreaterThan.Name", "ESteamLobbyComparison::EqualToOrGreaterThan" },
		{ "EqualToOrLessThan.Name", "ESteamLobbyComparison::EqualToOrLessThan" },
		{ "GreaterThan.Name", "ESteamLobbyComparison::GreaterThan" },
		{ "LessThan.Name", "ESteamLobbyComparison::LessThan" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
		{ "NotEqual.Name", "ESteamLobbyComparison::NotEqual" },
		{ "ToolTip", "lobby search filter tools" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamLobbyComparison_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		"ESteamLobbyComparison",
		"ESteamLobbyComparison",
		Z_Construct_UEnum_SteamCore_ESteamLobbyComparison_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamLobbyComparison_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamCore_ESteamLobbyComparison_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamLobbyComparison_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamCore_ESteamLobbyComparison()
	{
		if (!Z_Registration_Info_UEnum_ESteamLobbyComparison.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamLobbyComparison.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamLobbyComparison_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESteamLobbyComparison.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamLobbyDistanceFilter;
	static UEnum* ESteamLobbyDistanceFilter_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESteamLobbyDistanceFilter.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESteamLobbyDistanceFilter.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamLobbyDistanceFilter, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamLobbyDistanceFilter"));
		}
		return Z_Registration_Info_UEnum_ESteamLobbyDistanceFilter.OuterSingleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamLobbyDistanceFilter>()
	{
		return ESteamLobbyDistanceFilter_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamCore_ESteamLobbyDistanceFilter_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamCore_ESteamLobbyDistanceFilter_Statics::Enumerators[] = {
		{ "ESteamLobbyDistanceFilter::Close", (int64)ESteamLobbyDistanceFilter::Close },
		{ "ESteamLobbyDistanceFilter::Default", (int64)ESteamLobbyDistanceFilter::Default },
		{ "ESteamLobbyDistanceFilter::Far", (int64)ESteamLobbyDistanceFilter::Far },
		{ "ESteamLobbyDistanceFilter::Worldwide", (int64)ESteamLobbyDistanceFilter::Worldwide },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamCore_ESteamLobbyDistanceFilter_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Close.Name", "ESteamLobbyDistanceFilter::Close" },
		{ "Comment", "// lobby search distance. Lobby results are sorted from closest to farthest.\n" },
		{ "Default.Name", "ESteamLobbyDistanceFilter::Default" },
		{ "Far.Name", "ESteamLobbyDistanceFilter::Far" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
		{ "ToolTip", "lobby search distance. Lobby results are sorted from closest to farthest." },
		{ "Worldwide.Name", "ESteamLobbyDistanceFilter::Worldwide" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamLobbyDistanceFilter_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		"ESteamLobbyDistanceFilter",
		"ESteamLobbyDistanceFilter",
		Z_Construct_UEnum_SteamCore_ESteamLobbyDistanceFilter_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamLobbyDistanceFilter_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamCore_ESteamLobbyDistanceFilter_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamLobbyDistanceFilter_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamCore_ESteamLobbyDistanceFilter()
	{
		if (!Z_Registration_Info_UEnum_ESteamLobbyDistanceFilter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamLobbyDistanceFilter.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamLobbyDistanceFilter_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESteamLobbyDistanceFilter.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamChatMemberStateChange;
	static UEnum* ESteamChatMemberStateChange_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESteamChatMemberStateChange.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESteamChatMemberStateChange.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamChatMemberStateChange, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamChatMemberStateChange"));
		}
		return Z_Registration_Info_UEnum_ESteamChatMemberStateChange.OuterSingleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamChatMemberStateChange>()
	{
		return ESteamChatMemberStateChange_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamCore_ESteamChatMemberStateChange_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamCore_ESteamChatMemberStateChange_Statics::Enumerators[] = {
		{ "ESteamChatMemberStateChange::None", (int64)ESteamChatMemberStateChange::None },
		{ "ESteamChatMemberStateChange::Entered", (int64)ESteamChatMemberStateChange::Entered },
		{ "ESteamChatMemberStateChange::Left", (int64)ESteamChatMemberStateChange::Left },
		{ "ESteamChatMemberStateChange::Disconnected", (int64)ESteamChatMemberStateChange::Disconnected },
		{ "ESteamChatMemberStateChange::Kicked", (int64)ESteamChatMemberStateChange::Kicked },
		{ "ESteamChatMemberStateChange::Banned", (int64)ESteamChatMemberStateChange::Banned },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamCore_ESteamChatMemberStateChange_Statics::Enum_MetaDataParams[] = {
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
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamChatMemberStateChange_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		"ESteamChatMemberStateChange",
		"ESteamChatMemberStateChange",
		Z_Construct_UEnum_SteamCore_ESteamChatMemberStateChange_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamChatMemberStateChange_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamCore_ESteamChatMemberStateChange_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamChatMemberStateChange_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamCore_ESteamChatMemberStateChange()
	{
		if (!Z_Registration_Info_UEnum_ESteamChatMemberStateChange.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamChatMemberStateChange.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamChatMemberStateChange_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESteamChatMemberStateChange.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamFavoriteFlags;
	static UEnum* ESteamFavoriteFlags_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESteamFavoriteFlags.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESteamFavoriteFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamFavoriteFlags, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamFavoriteFlags"));
		}
		return Z_Registration_Info_UEnum_ESteamFavoriteFlags.OuterSingleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamFavoriteFlags>()
	{
		return ESteamFavoriteFlags_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamCore_ESteamFavoriteFlags_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamCore_ESteamFavoriteFlags_Statics::Enumerators[] = {
		{ "ESteamFavoriteFlags::None", (int64)ESteamFavoriteFlags::None },
		{ "ESteamFavoriteFlags::Favorite", (int64)ESteamFavoriteFlags::Favorite },
		{ "ESteamFavoriteFlags::History", (int64)ESteamFavoriteFlags::History },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamCore_ESteamFavoriteFlags_Statics::Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "Favorite.Name", "ESteamFavoriteFlags::Favorite" },
		{ "History.Name", "ESteamFavoriteFlags::History" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
		{ "None.Name", "ESteamFavoriteFlags::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamFavoriteFlags_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		"ESteamFavoriteFlags",
		"ESteamFavoriteFlags",
		Z_Construct_UEnum_SteamCore_ESteamFavoriteFlags_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamFavoriteFlags_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamCore_ESteamFavoriteFlags_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamFavoriteFlags_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamCore_ESteamFavoriteFlags()
	{
		if (!Z_Registration_Info_UEnum_ESteamFavoriteFlags.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamFavoriteFlags.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamFavoriteFlags_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESteamFavoriteFlags.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FavoritesListAccountsUpdated;
class UScriptStruct* FFavoritesListAccountsUpdated::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FavoritesListAccountsUpdated.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FavoritesListAccountsUpdated.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("FavoritesListAccountsUpdated"));
	}
	return Z_Registration_Info_UScriptStruct_FavoritesListAccountsUpdated.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FFavoritesListAccountsUpdated>()
{
	return FFavoritesListAccountsUpdated::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Structs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Structs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFavoritesListAccountsUpdated>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFavoritesListAccountsUpdated, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics::NewProp_Result_MetaData)) }; // 2739532951
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"FavoritesListAccountsUpdated",
		sizeof(FFavoritesListAccountsUpdated),
		alignof(FFavoritesListAccountsUpdated),
		Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated()
	{
		if (!Z_Registration_Info_UScriptStruct_FavoritesListAccountsUpdated.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FavoritesListAccountsUpdated.InnerSingleton, Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FavoritesListAccountsUpdated.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FavoritesListChanged;
class UScriptStruct* FFavoritesListChanged::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FavoritesListChanged.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FavoritesListChanged.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFavoritesListChanged, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("FavoritesListChanged"));
	}
	return Z_Registration_Info_UScriptStruct_FavoritesListChanged.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FFavoritesListChanged>()
{
	return FFavoritesListChanged::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFavoritesListChanged_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IP_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_IP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryPort_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_QueryPort;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionPort_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConnectionPort;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AppID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Flags_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Flags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Flags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAdd_MetaData[];
#endif
		static void NewProp_bAdd_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFavoritesListChanged>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_IP_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFavoritesListChanged, IP), METADATA_PARAMS(Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_IP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_IP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_QueryPort_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_QueryPort = { "QueryPort", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFavoritesListChanged, QueryPort), METADATA_PARAMS(Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_QueryPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_QueryPort_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_ConnectionPort_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_ConnectionPort = { "ConnectionPort", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFavoritesListChanged, ConnectionPort), METADATA_PARAMS(Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_ConnectionPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_ConnectionPort_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_AppID_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFavoritesListChanged, AppID), METADATA_PARAMS(Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_AppID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_AppID_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_Flags_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_Flags_Inner = { "Flags", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_SteamCore_ESteamFavoriteFlags, METADATA_PARAMS(nullptr, 0) }; // 3531789794
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_Flags_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFavoritesListChanged, Flags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_Flags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_Flags_MetaData)) }; // 3531789794
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_bAdd_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_bAdd_SetBit(void* Obj)
	{
		((FFavoritesListChanged*)Obj)->bAdd = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_bAdd = { "bAdd", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FFavoritesListChanged), &Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_bAdd_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_bAdd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_bAdd_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_SteamID_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFavoritesListChanged, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_SteamID_MetaData)) }; // 1620016601
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
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"FavoritesListChanged",
		sizeof(FFavoritesListChanged),
		alignof(FFavoritesListChanged),
		Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFavoritesListChanged()
	{
		if (!Z_Registration_Info_UScriptStruct_FavoritesListChanged.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FavoritesListChanged.InnerSingleton, Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FavoritesListChanged.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LobbyChatMsg;
class UScriptStruct* FLobbyChatMsg::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LobbyChatMsg.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LobbyChatMsg.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLobbyChatMsg, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("LobbyChatMsg"));
	}
	return Z_Registration_Info_UScriptStruct_LobbyChatMsg.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FLobbyChatMsg>()
{
	return FLobbyChatMsg::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLobbyChatMsg_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDLobby_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDUser_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ChatEntryType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChatEntryType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ChatEntryType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChatID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChatID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLobbyChatMsg>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_SteamIDLobby_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLobbyChatMsg, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_SteamIDLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_SteamIDLobby_MetaData)) }; // 1620016601
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_SteamIDUser_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLobbyChatMsg, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_SteamIDUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_SteamIDUser_MetaData)) }; // 1620016601
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_ChatEntryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_ChatEntryType_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_ChatEntryType = { "ChatEntryType", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLobbyChatMsg, ChatEntryType), Z_Construct_UEnum_SteamCore_ESteamChatEntryType, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_ChatEntryType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_ChatEntryType_MetaData)) }; // 172190028
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_ChatID_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_ChatID = { "ChatID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLobbyChatMsg, ChatID), METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_ChatID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_ChatID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_SteamIDUser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_ChatEntryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_ChatEntryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_ChatID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"LobbyChatMsg",
		sizeof(FLobbyChatMsg),
		alignof(FLobbyChatMsg),
		Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLobbyChatMsg()
	{
		if (!Z_Registration_Info_UScriptStruct_LobbyChatMsg.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LobbyChatMsg.InnerSingleton, Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LobbyChatMsg.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LobbyChatUpdate;
class UScriptStruct* FLobbyChatUpdate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LobbyChatUpdate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LobbyChatUpdate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLobbyChatUpdate, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("LobbyChatUpdate"));
	}
	return Z_Registration_Info_UScriptStruct_LobbyChatUpdate.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FLobbyChatUpdate>()
{
	return FLobbyChatUpdate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDLobby_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDUserChanged_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUserChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDMakingChange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDMakingChange;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ChatMemberStateChange_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ChatMemberStateChange_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChatMemberStateChange_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChatMemberStateChange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLobbyChatUpdate>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_SteamIDLobby_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLobbyChatUpdate, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_SteamIDLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_SteamIDLobby_MetaData)) }; // 1620016601
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_SteamIDUserChanged_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_SteamIDUserChanged = { "SteamIDUserChanged", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLobbyChatUpdate, SteamIDUserChanged), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_SteamIDUserChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_SteamIDUserChanged_MetaData)) }; // 1620016601
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_SteamIDMakingChange_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_SteamIDMakingChange = { "SteamIDMakingChange", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLobbyChatUpdate, SteamIDMakingChange), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_SteamIDMakingChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_SteamIDMakingChange_MetaData)) }; // 1620016601
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_ChatMemberStateChange_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_ChatMemberStateChange_Inner = { "ChatMemberStateChange", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_SteamCore_ESteamChatMemberStateChange, METADATA_PARAMS(nullptr, 0) }; // 1241020236
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_ChatMemberStateChange_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_ChatMemberStateChange = { "ChatMemberStateChange", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLobbyChatUpdate, ChatMemberStateChange), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_ChatMemberStateChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_ChatMemberStateChange_MetaData)) }; // 1241020236
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_SteamIDUserChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_SteamIDMakingChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_ChatMemberStateChange_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_ChatMemberStateChange_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_ChatMemberStateChange,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"LobbyChatUpdate",
		sizeof(FLobbyChatUpdate),
		alignof(FLobbyChatUpdate),
		Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLobbyChatUpdate()
	{
		if (!Z_Registration_Info_UScriptStruct_LobbyChatUpdate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LobbyChatUpdate.InnerSingleton, Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LobbyChatUpdate.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LobbyDataUpdate;
class UScriptStruct* FLobbyDataUpdate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LobbyDataUpdate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LobbyDataUpdate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLobbyDataUpdate, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("LobbyDataUpdate"));
	}
	return Z_Registration_Info_UScriptStruct_LobbyDataUpdate.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FLobbyDataUpdate>()
{
	return FLobbyDataUpdate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDLobby_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDMember_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDMember;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[];
#endif
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLobbyDataUpdate>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_SteamIDLobby_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLobbyDataUpdate, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_SteamIDLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_SteamIDLobby_MetaData)) }; // 1620016601
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_SteamIDMember_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_SteamIDMember = { "SteamIDMember", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLobbyDataUpdate, SteamIDMember), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_SteamIDMember_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_SteamIDMember_MetaData)) }; // 1620016601
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_bSuccess_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((FLobbyDataUpdate*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLobbyDataUpdate), &Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_bSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_bSuccess_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_SteamIDMember,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_bSuccess,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"LobbyDataUpdate",
		sizeof(FLobbyDataUpdate),
		alignof(FLobbyDataUpdate),
		Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLobbyDataUpdate()
	{
		if (!Z_Registration_Info_UScriptStruct_LobbyDataUpdate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LobbyDataUpdate.InnerSingleton, Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LobbyDataUpdate.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LobbyEnterData;
class UScriptStruct* FLobbyEnterData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LobbyEnterData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LobbyEnterData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLobbyEnterData, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("LobbyEnterData"));
	}
	return Z_Registration_Info_UScriptStruct_LobbyEnterData.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FLobbyEnterData>()
{
	return FLobbyEnterData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLobbyEnterData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDLobby_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLocked_MetaData[];
#endif
		static void NewProp_bLocked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocked;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ChatRoomEnterResponse_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChatRoomEnterResponse_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ChatRoomEnterResponse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyEnterData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLobbyEnterData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_SteamIDLobby_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLobbyEnterData, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_SteamIDLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_SteamIDLobby_MetaData)) }; // 1620016601
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_bLocked_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_bLocked_SetBit(void* Obj)
	{
		((FLobbyEnterData*)Obj)->bLocked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_bLocked = { "bLocked", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLobbyEnterData), &Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_bLocked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_bLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_bLocked_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_ChatRoomEnterResponse_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_ChatRoomEnterResponse_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_ChatRoomEnterResponse = { "ChatRoomEnterResponse", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLobbyEnterData, ChatRoomEnterResponse), Z_Construct_UEnum_SteamCore_ESteamChatRoomEnterResponse, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_ChatRoomEnterResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_ChatRoomEnterResponse_MetaData)) }; // 2732537792
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLobbyEnterData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_bLocked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_ChatRoomEnterResponse_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_ChatRoomEnterResponse,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLobbyEnterData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"LobbyEnterData",
		sizeof(FLobbyEnterData),
		alignof(FLobbyEnterData),
		Z_Construct_UScriptStruct_FLobbyEnterData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyEnterData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyEnterData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyEnterData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLobbyEnterData()
	{
		if (!Z_Registration_Info_UScriptStruct_LobbyEnterData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LobbyEnterData.InnerSingleton, Z_Construct_UScriptStruct_FLobbyEnterData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LobbyEnterData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LobbyGameCreated;
class UScriptStruct* FLobbyGameCreated::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LobbyGameCreated.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LobbyGameCreated.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLobbyGameCreated, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("LobbyGameCreated"));
	}
	return Z_Registration_Info_UScriptStruct_LobbyGameCreated.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FLobbyGameCreated>()
{
	return FLobbyGameCreated::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLobbyGameCreated_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDLobby_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDGameServer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDGameServer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IP_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_IP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLobbyGameCreated>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_SteamIDLobby_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLobbyGameCreated, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_SteamIDLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_SteamIDLobby_MetaData)) }; // 1620016601
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_SteamIDGameServer_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_SteamIDGameServer = { "SteamIDGameServer", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLobbyGameCreated, SteamIDGameServer), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_SteamIDGameServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_SteamIDGameServer_MetaData)) }; // 1620016601
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_IP_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLobbyGameCreated, IP), METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_IP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_IP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_Port_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLobbyGameCreated, Port), METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_Port_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_Port_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_SteamIDGameServer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_IP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_Port,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"LobbyGameCreated",
		sizeof(FLobbyGameCreated),
		alignof(FLobbyGameCreated),
		Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLobbyGameCreated()
	{
		if (!Z_Registration_Info_UScriptStruct_LobbyGameCreated.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LobbyGameCreated.InnerSingleton, Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LobbyGameCreated.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LobbyInviteData;
class UScriptStruct* FLobbyInviteData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LobbyInviteData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LobbyInviteData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLobbyInviteData, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("LobbyInviteData"));
	}
	return Z_Registration_Info_UScriptStruct_LobbyInviteData.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FLobbyInviteData>()
{
	return FLobbyInviteData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLobbyInviteData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDUser_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDLobby_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyInviteData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLobbyInviteData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewProp_SteamIDUser_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLobbyInviteData, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewProp_SteamIDUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewProp_SteamIDUser_MetaData)) }; // 1620016601
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewProp_SteamIDLobby_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLobbyInviteData, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewProp_SteamIDLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewProp_SteamIDLobby_MetaData)) }; // 1620016601
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewProp_GameID_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLobbyInviteData, GameID), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewProp_GameID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewProp_GameID_MetaData)) }; // 419490198
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLobbyInviteData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewProp_SteamIDUser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewProp_GameID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLobbyInviteData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"LobbyInviteData",
		sizeof(FLobbyInviteData),
		alignof(FLobbyInviteData),
		Z_Construct_UScriptStruct_FLobbyInviteData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyInviteData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyInviteData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyInviteData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLobbyInviteData()
	{
		if (!Z_Registration_Info_UScriptStruct_LobbyInviteData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LobbyInviteData.InnerSingleton, Z_Construct_UScriptStruct_FLobbyInviteData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LobbyInviteData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LobbyKickedData;
class UScriptStruct* FLobbyKickedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LobbyKickedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LobbyKickedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLobbyKickedData, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("LobbyKickedData"));
	}
	return Z_Registration_Info_UScriptStruct_LobbyKickedData.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FLobbyKickedData>()
{
	return FLobbyKickedData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLobbyKickedData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDLobby_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDAdmin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDAdmin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bKickedDueToDisconnect_MetaData[];
#endif
		static void NewProp_bKickedDueToDisconnect_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bKickedDueToDisconnect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyKickedData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLobbyKickedData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_SteamIDLobby_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLobbyKickedData, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_SteamIDLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_SteamIDLobby_MetaData)) }; // 1620016601
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_SteamIDAdmin_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_SteamIDAdmin = { "SteamIDAdmin", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLobbyKickedData, SteamIDAdmin), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_SteamIDAdmin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_SteamIDAdmin_MetaData)) }; // 1620016601
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_bKickedDueToDisconnect_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_bKickedDueToDisconnect_SetBit(void* Obj)
	{
		((FLobbyKickedData*)Obj)->bKickedDueToDisconnect = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_bKickedDueToDisconnect = { "bKickedDueToDisconnect", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLobbyKickedData), &Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_bKickedDueToDisconnect_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_bKickedDueToDisconnect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_bKickedDueToDisconnect_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLobbyKickedData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_SteamIDAdmin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_bKickedDueToDisconnect,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLobbyKickedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"LobbyKickedData",
		sizeof(FLobbyKickedData),
		alignof(FLobbyKickedData),
		Z_Construct_UScriptStruct_FLobbyKickedData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyKickedData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyKickedData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyKickedData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLobbyKickedData()
	{
		if (!Z_Registration_Info_UScriptStruct_LobbyKickedData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LobbyKickedData.InnerSingleton, Z_Construct_UScriptStruct_FLobbyKickedData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LobbyKickedData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LobbyMatchList;
class UScriptStruct* FLobbyMatchList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LobbyMatchList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LobbyMatchList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLobbyMatchList, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("LobbyMatchList"));
	}
	return Z_Registration_Info_UScriptStruct_LobbyMatchList.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FLobbyMatchList>()
{
	return FLobbyMatchList::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLobbyMatchList_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LobbiesMatching_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LobbiesMatching;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyMatchList_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLobbyMatchList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLobbyMatchList>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyMatchList_Statics::NewProp_LobbiesMatching_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLobbyMatchList_Statics::NewProp_LobbiesMatching = { "LobbiesMatching", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLobbyMatchList, LobbiesMatching), METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyMatchList_Statics::NewProp_LobbiesMatching_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyMatchList_Statics::NewProp_LobbiesMatching_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLobbyMatchList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyMatchList_Statics::NewProp_LobbiesMatching,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLobbyMatchList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"LobbyMatchList",
		sizeof(FLobbyMatchList),
		alignof(FLobbyMatchList),
		Z_Construct_UScriptStruct_FLobbyMatchList_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyMatchList_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyMatchList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyMatchList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLobbyMatchList()
	{
		if (!Z_Registration_Info_UScriptStruct_LobbyMatchList.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LobbyMatchList.InnerSingleton, Z_Construct_UScriptStruct_FLobbyMatchList_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LobbyMatchList.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CreateLobbyData;
class UScriptStruct* FCreateLobbyData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CreateLobbyData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CreateLobbyData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCreateLobbyData, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("CreateLobbyData"));
	}
	return Z_Registration_Info_UScriptStruct_CreateLobbyData.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FCreateLobbyData>()
{
	return FCreateLobbyData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCreateLobbyData_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDLobby_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateLobbyData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCreateLobbyData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCreateLobbyData>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCreateLobbyData_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateLobbyData_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCreateLobbyData_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCreateLobbyData, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateLobbyData_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateLobbyData_Statics::NewProp_Result_MetaData)) }; // 2739532951
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateLobbyData_Statics::NewProp_SteamIDLobby_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCreateLobbyData_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCreateLobbyData, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateLobbyData_Statics::NewProp_SteamIDLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateLobbyData_Statics::NewProp_SteamIDLobby_MetaData)) }; // 1620016601
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCreateLobbyData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateLobbyData_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateLobbyData_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateLobbyData_Statics::NewProp_SteamIDLobby,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCreateLobbyData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"CreateLobbyData",
		sizeof(FCreateLobbyData),
		alignof(FCreateLobbyData),
		Z_Construct_UScriptStruct_FCreateLobbyData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateLobbyData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateLobbyData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateLobbyData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCreateLobbyData()
	{
		if (!Z_Registration_Info_UScriptStruct_CreateLobbyData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CreateLobbyData.InnerSingleton, Z_Construct_UScriptStruct_FCreateLobbyData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CreateLobbyData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_JoinLobbyData;
class UScriptStruct* FJoinLobbyData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_JoinLobbyData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_JoinLobbyData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJoinLobbyData, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("JoinLobbyData"));
	}
	return Z_Registration_Info_UScriptStruct_JoinLobbyData.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FJoinLobbyData>()
{
	return FJoinLobbyData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FJoinLobbyData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDLobby_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLocked_MetaData[];
#endif
		static void NewProp_bLocked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocked;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ChatRoomEnterResponse_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChatRoomEnterResponse_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ChatRoomEnterResponse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoinLobbyData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJoinLobbyData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_SteamIDLobby_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FJoinLobbyData, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_SteamIDLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_SteamIDLobby_MetaData)) }; // 1620016601
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_bLocked_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_bLocked_SetBit(void* Obj)
	{
		((FJoinLobbyData*)Obj)->bLocked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_bLocked = { "bLocked", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FJoinLobbyData), &Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_bLocked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_bLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_bLocked_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_ChatRoomEnterResponse_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_ChatRoomEnterResponse_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_ChatRoomEnterResponse = { "ChatRoomEnterResponse", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FJoinLobbyData, ChatRoomEnterResponse), Z_Construct_UEnum_SteamCore_ESteamChatRoomEnterResponse, METADATA_PARAMS(Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_ChatRoomEnterResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_ChatRoomEnterResponse_MetaData)) }; // 2732537792
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJoinLobbyData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_bLocked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_ChatRoomEnterResponse_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_ChatRoomEnterResponse,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJoinLobbyData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"JoinLobbyData",
		sizeof(FJoinLobbyData),
		alignof(FJoinLobbyData),
		Z_Construct_UScriptStruct_FJoinLobbyData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoinLobbyData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FJoinLobbyData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoinLobbyData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FJoinLobbyData()
	{
		if (!Z_Registration_Info_UScriptStruct_JoinLobbyData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_JoinLobbyData.InnerSingleton, Z_Construct_UScriptStruct_FJoinLobbyData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_JoinLobbyData.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListAccountsUpdated__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnFavoritesListAccountsUpdated_Parms
		{
			FFavoritesListAccountsUpdated Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnFavoritesListAccountsUpdated_Parms, Data), Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 3681065554
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnFavoritesListAccountsUpdated__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::_Script_SteamCore_eventOnFavoritesListAccountsUpdated_Parms), Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListAccountsUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::FuncParams);
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
	struct Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListChanged__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnFavoritesListChanged_Parms
		{
			FFavoritesListChanged Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListChanged__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListChanged__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnFavoritesListChanged_Parms, Data), Z_Construct_UScriptStruct_FFavoritesListChanged, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListChanged__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListChanged__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 3946319733
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListChanged__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnFavoritesListChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListChanged__DelegateSignature_Statics::_Script_SteamCore_eventOnFavoritesListChanged_Parms), Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListChanged__DelegateSignature_Statics::FuncParams);
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
	struct Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatMsg__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnLobbyChatMsg_Parms
		{
			FLobbyChatMsg Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatMsg__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatMsg__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnLobbyChatMsg_Parms, Data), Z_Construct_UScriptStruct_FLobbyChatMsg, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatMsg__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatMsg__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 3216050106
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatMsg__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatMsg__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatMsg__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatMsg__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnLobbyChatMsg__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatMsg__DelegateSignature_Statics::_Script_SteamCore_eventOnLobbyChatMsg_Parms), Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatMsg__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatMsg__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatMsg__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatMsg__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatMsg__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatMsg__DelegateSignature_Statics::FuncParams);
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
	struct Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatUpdate__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnLobbyChatUpdate_Parms
		{
			FLobbyChatUpdate Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatUpdate__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatUpdate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnLobbyChatUpdate_Parms, Data), Z_Construct_UScriptStruct_FLobbyChatUpdate, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatUpdate__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatUpdate__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 2073745662
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatUpdate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatUpdate__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatUpdate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatUpdate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnLobbyChatUpdate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatUpdate__DelegateSignature_Statics::_Script_SteamCore_eventOnLobbyChatUpdate_Parms), Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatUpdate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatUpdate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatUpdate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatUpdate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatUpdate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatUpdate__DelegateSignature_Statics::FuncParams);
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
	struct Z_Construct_UDelegateFunction_SteamCore_OnLobbyDataUpdate__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnLobbyDataUpdate_Parms
		{
			FLobbyDataUpdate Data;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnLobbyDataUpdate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnLobbyDataUpdate_Parms, Data), Z_Construct_UScriptStruct_FLobbyDataUpdate, METADATA_PARAMS(nullptr, 0) }; // 1754089559
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnLobbyDataUpdate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnLobbyDataUpdate__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnLobbyDataUpdate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnLobbyDataUpdate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnLobbyDataUpdate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnLobbyDataUpdate__DelegateSignature_Statics::_Script_SteamCore_eventOnLobbyDataUpdate_Parms), Z_Construct_UDelegateFunction_SteamCore_OnLobbyDataUpdate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyDataUpdate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnLobbyDataUpdate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyDataUpdate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLobbyDataUpdate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnLobbyDataUpdate__DelegateSignature_Statics::FuncParams);
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
	struct Z_Construct_UDelegateFunction_SteamCore_OnLobbyEnter__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnLobbyEnter_Parms
		{
			FLobbyEnterData Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnLobbyEnter__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnLobbyEnter__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnLobbyEnter_Parms, Data), Z_Construct_UScriptStruct_FLobbyEnterData, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnLobbyEnter__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyEnter__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 2548549636
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnLobbyEnter__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnLobbyEnter__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnLobbyEnter__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnLobbyEnter__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnLobbyEnter__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnLobbyEnter__DelegateSignature_Statics::_Script_SteamCore_eventOnLobbyEnter_Parms), Z_Construct_UDelegateFunction_SteamCore_OnLobbyEnter__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyEnter__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnLobbyEnter__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyEnter__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLobbyEnter__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnLobbyEnter__DelegateSignature_Statics::FuncParams);
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
	struct Z_Construct_UDelegateFunction_SteamCore_OnLobbyGameCreated__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnLobbyGameCreated_Parms
		{
			FLobbyGameCreated Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnLobbyGameCreated__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnLobbyGameCreated__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnLobbyGameCreated_Parms, Data), Z_Construct_UScriptStruct_FLobbyGameCreated, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnLobbyGameCreated__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyGameCreated__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 1905582960
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnLobbyGameCreated__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnLobbyGameCreated__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnLobbyGameCreated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnLobbyGameCreated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnLobbyGameCreated__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnLobbyGameCreated__DelegateSignature_Statics::_Script_SteamCore_eventOnLobbyGameCreated_Parms), Z_Construct_UDelegateFunction_SteamCore_OnLobbyGameCreated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyGameCreated__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnLobbyGameCreated__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyGameCreated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLobbyGameCreated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnLobbyGameCreated__DelegateSignature_Statics::FuncParams);
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
	struct Z_Construct_UDelegateFunction_SteamCore_OnLobbyInvite__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnLobbyInvite_Parms
		{
			FLobbyInviteData Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnLobbyInvite__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnLobbyInvite__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnLobbyInvite_Parms, Data), Z_Construct_UScriptStruct_FLobbyInviteData, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnLobbyInvite__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyInvite__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 2228064309
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnLobbyInvite__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnLobbyInvite__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnLobbyInvite__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnLobbyInvite__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnLobbyInvite__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnLobbyInvite__DelegateSignature_Statics::_Script_SteamCore_eventOnLobbyInvite_Parms), Z_Construct_UDelegateFunction_SteamCore_OnLobbyInvite__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyInvite__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnLobbyInvite__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyInvite__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLobbyInvite__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnLobbyInvite__DelegateSignature_Statics::FuncParams);
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
	struct Z_Construct_UDelegateFunction_SteamCore_OnLobbyKicked__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnLobbyKicked_Parms
		{
			FLobbyKickedData Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnLobbyKicked__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnLobbyKicked__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnLobbyKicked_Parms, Data), Z_Construct_UScriptStruct_FLobbyKickedData, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnLobbyKicked__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyKicked__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 1907949003
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnLobbyKicked__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnLobbyKicked__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnLobbyKicked__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnLobbyKicked__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnLobbyKicked__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnLobbyKicked__DelegateSignature_Statics::_Script_SteamCore_eventOnLobbyKicked_Parms), Z_Construct_UDelegateFunction_SteamCore_OnLobbyKicked__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyKicked__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnLobbyKicked__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyKicked__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLobbyKicked__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnLobbyKicked__DelegateSignature_Statics::FuncParams);
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
	struct Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnRequestLobbyList_Parms
		{
			FLobbyMatchList Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnRequestLobbyList_Parms, Data), Z_Construct_UScriptStruct_FLobbyMatchList, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 2702632852
	void Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnRequestLobbyList_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamCore_eventOnRequestLobbyList_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnRequestLobbyList__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature_Statics::_Script_SteamCore_eventOnRequestLobbyList_Parms), Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature_Statics::FuncParams);
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
	struct Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnCreateLobby_Parms
		{
			FCreateLobbyData Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnCreateLobby_Parms, Data), Z_Construct_UScriptStruct_FCreateLobbyData, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 1474197689
	void Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnCreateLobby_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamCore_eventOnCreateLobby_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnCreateLobby__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature_Statics::_Script_SteamCore_eventOnCreateLobby_Parms), Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature_Statics::FuncParams);
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
	struct Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnJoinLobby_Parms
		{
			FJoinLobbyData Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnJoinLobby_Parms, Data), Z_Construct_UScriptStruct_FJoinLobbyData, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 3599679146
	void Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnJoinLobby_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamCore_eventOnJoinLobby_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnJoinLobby__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature_Statics::_Script_SteamCore_eventOnJoinLobby_Parms), Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature_Statics::FuncParams);
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
	struct Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnFindSessions_Parms
		{
			TArray<FBlueprintSessionResult> Data;
			bool bWasSuccessful;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(nullptr, 0) }; // 399430119
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnFindSessions_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 399430119
	void Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnFindSessions_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamCore_eventOnFindSessions_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnFindSessions__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::_Script_SteamCore_eventOnFindSessions_Parms), Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::FuncParams);
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
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingTypes_h_Statics::EnumInfo[] = {
		{ ESteamSessionFindType_StaticEnum, TEXT("ESteamSessionFindType"), &Z_Registration_Info_UEnum_ESteamSessionFindType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2510680304U) },
		{ ESteamLobbyType_StaticEnum, TEXT("ESteamLobbyType"), &Z_Registration_Info_UEnum_ESteamLobbyType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4181664104U) },
		{ ESteamLobbyComparison_StaticEnum, TEXT("ESteamLobbyComparison"), &Z_Registration_Info_UEnum_ESteamLobbyComparison, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2369388323U) },
		{ ESteamLobbyDistanceFilter_StaticEnum, TEXT("ESteamLobbyDistanceFilter"), &Z_Registration_Info_UEnum_ESteamLobbyDistanceFilter, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1309983039U) },
		{ ESteamChatMemberStateChange_StaticEnum, TEXT("ESteamChatMemberStateChange"), &Z_Registration_Info_UEnum_ESteamChatMemberStateChange, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1241020236U) },
		{ ESteamFavoriteFlags_StaticEnum, TEXT("ESteamFavoriteFlags"), &Z_Registration_Info_UEnum_ESteamFavoriteFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3531789794U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingTypes_h_Statics::ScriptStructInfo[] = {
		{ FFavoritesListAccountsUpdated::StaticStruct, Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics::NewStructOps, TEXT("FavoritesListAccountsUpdated"), &Z_Registration_Info_UScriptStruct_FavoritesListAccountsUpdated, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFavoritesListAccountsUpdated), 3681065554U) },
		{ FFavoritesListChanged::StaticStruct, Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewStructOps, TEXT("FavoritesListChanged"), &Z_Registration_Info_UScriptStruct_FavoritesListChanged, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFavoritesListChanged), 3946319733U) },
		{ FLobbyChatMsg::StaticStruct, Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewStructOps, TEXT("LobbyChatMsg"), &Z_Registration_Info_UScriptStruct_LobbyChatMsg, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLobbyChatMsg), 3216050106U) },
		{ FLobbyChatUpdate::StaticStruct, Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewStructOps, TEXT("LobbyChatUpdate"), &Z_Registration_Info_UScriptStruct_LobbyChatUpdate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLobbyChatUpdate), 2073745662U) },
		{ FLobbyDataUpdate::StaticStruct, Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewStructOps, TEXT("LobbyDataUpdate"), &Z_Registration_Info_UScriptStruct_LobbyDataUpdate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLobbyDataUpdate), 1754089559U) },
		{ FLobbyEnterData::StaticStruct, Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewStructOps, TEXT("LobbyEnterData"), &Z_Registration_Info_UScriptStruct_LobbyEnterData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLobbyEnterData), 2548549636U) },
		{ FLobbyGameCreated::StaticStruct, Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewStructOps, TEXT("LobbyGameCreated"), &Z_Registration_Info_UScriptStruct_LobbyGameCreated, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLobbyGameCreated), 1905582960U) },
		{ FLobbyInviteData::StaticStruct, Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewStructOps, TEXT("LobbyInviteData"), &Z_Registration_Info_UScriptStruct_LobbyInviteData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLobbyInviteData), 2228064309U) },
		{ FLobbyKickedData::StaticStruct, Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewStructOps, TEXT("LobbyKickedData"), &Z_Registration_Info_UScriptStruct_LobbyKickedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLobbyKickedData), 1907949003U) },
		{ FLobbyMatchList::StaticStruct, Z_Construct_UScriptStruct_FLobbyMatchList_Statics::NewStructOps, TEXT("LobbyMatchList"), &Z_Registration_Info_UScriptStruct_LobbyMatchList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLobbyMatchList), 2702632852U) },
		{ FCreateLobbyData::StaticStruct, Z_Construct_UScriptStruct_FCreateLobbyData_Statics::NewStructOps, TEXT("CreateLobbyData"), &Z_Registration_Info_UScriptStruct_CreateLobbyData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCreateLobbyData), 1474197689U) },
		{ FJoinLobbyData::StaticStruct, Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewStructOps, TEXT("JoinLobbyData"), &Z_Registration_Info_UScriptStruct_JoinLobbyData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJoinLobbyData), 3599679146U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingTypes_h_1212860078(TEXT("/Script/SteamCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
