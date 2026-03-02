// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamCore/SteamCoreSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSettings();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSettings_NoRegister();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamSubsystem;
	static UEnum* ESteamSubsystem_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESteamSubsystem.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESteamSubsystem.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamSubsystem, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamSubsystem"));
		}
		return Z_Registration_Info_UEnum_ESteamSubsystem.OuterSingleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamSubsystem>()
	{
		return ESteamSubsystem_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamCore_ESteamSubsystem_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamCore_ESteamSubsystem_Statics::Enumerators[] = {
		{ "ESteamSubsystem::SteamCore", (int64)ESteamSubsystem::SteamCore },
		{ "ESteamSubsystem::AppList", (int64)ESteamSubsystem::AppList },
		{ "ESteamSubsystem::Apps", (int64)ESteamSubsystem::Apps },
		{ "ESteamSubsystem::Friends", (int64)ESteamSubsystem::Friends },
		{ "ESteamSubsystem::GameServer", (int64)ESteamSubsystem::GameServer },
		{ "ESteamSubsystem::GameServerStats", (int64)ESteamSubsystem::GameServerStats },
		{ "ESteamSubsystem::Inventory", (int64)ESteamSubsystem::Inventory },
		{ "ESteamSubsystem::Input", (int64)ESteamSubsystem::Input },
		{ "ESteamSubsystem::Matchmaking", (int64)ESteamSubsystem::Matchmaking },
		{ "ESteamSubsystem::MatchmakingServers", (int64)ESteamSubsystem::MatchmakingServers },
		{ "ESteamSubsystem::Music", (int64)ESteamSubsystem::Music },
		{ "ESteamSubsystem::Networking", (int64)ESteamSubsystem::Networking },
		{ "ESteamSubsystem::NetworkingUtils", (int64)ESteamSubsystem::NetworkingUtils },
		{ "ESteamSubsystem::ParentalSettings", (int64)ESteamSubsystem::ParentalSettings },
		{ "ESteamSubsystem::RemoteStorage", (int64)ESteamSubsystem::RemoteStorage },
		{ "ESteamSubsystem::RemotePlay", (int64)ESteamSubsystem::RemotePlay },
		{ "ESteamSubsystem::Screenshots", (int64)ESteamSubsystem::Screenshots },
		{ "ESteamSubsystem::UGC", (int64)ESteamSubsystem::UGC },
		{ "ESteamSubsystem::User", (int64)ESteamSubsystem::User },
		{ "ESteamSubsystem::UserStats", (int64)ESteamSubsystem::UserStats },
		{ "ESteamSubsystem::Utils", (int64)ESteamSubsystem::Utils },
		{ "ESteamSubsystem::Video", (int64)ESteamSubsystem::Video },
		{ "ESteamSubsystem::SteamParties", (int64)ESteamSubsystem::SteamParties },
		{ "ESteamSubsystem::GameSearch", (int64)ESteamSubsystem::GameSearch },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamCore_ESteamSubsystem_Statics::Enum_MetaDataParams[] = {
		{ "AppList.Name", "ESteamSubsystem::AppList" },
		{ "Apps.Name", "ESteamSubsystem::Apps" },
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "Friends.Name", "ESteamSubsystem::Friends" },
		{ "GameSearch.Name", "ESteamSubsystem::GameSearch" },
		{ "GameServer.Name", "ESteamSubsystem::GameServer" },
		{ "GameServerStats.Name", "ESteamSubsystem::GameServerStats" },
		{ "Input.Name", "ESteamSubsystem::Input" },
		{ "Inventory.Name", "ESteamSubsystem::Inventory" },
		{ "Matchmaking.Name", "ESteamSubsystem::Matchmaking" },
		{ "MatchmakingServers.Name", "ESteamSubsystem::MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamCoreSettings.h" },
		{ "Music.Name", "ESteamSubsystem::Music" },
		{ "Networking.Name", "ESteamSubsystem::Networking" },
		{ "NetworkingUtils.Name", "ESteamSubsystem::NetworkingUtils" },
		{ "ParentalSettings.Name", "ESteamSubsystem::ParentalSettings" },
		{ "RemotePlay.Name", "ESteamSubsystem::RemotePlay" },
		{ "RemoteStorage.Name", "ESteamSubsystem::RemoteStorage" },
		{ "Screenshots.Name", "ESteamSubsystem::Screenshots" },
		{ "SteamCore.Name", "ESteamSubsystem::SteamCore" },
		{ "SteamParties.Name", "ESteamSubsystem::SteamParties" },
		{ "UGC.Name", "ESteamSubsystem::UGC" },
		{ "User.Name", "ESteamSubsystem::User" },
		{ "UserStats.Name", "ESteamSubsystem::UserStats" },
		{ "Utils.Name", "ESteamSubsystem::Utils" },
		{ "Video.Name", "ESteamSubsystem::Video" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamSubsystem_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		"ESteamSubsystem",
		"ESteamSubsystem",
		Z_Construct_UEnum_SteamCore_ESteamSubsystem_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamSubsystem_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamCore_ESteamSubsystem_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamSubsystem_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamCore_ESteamSubsystem()
	{
		if (!Z_Registration_Info_UEnum_ESteamSubsystem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamSubsystem.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamSubsystem_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESteamSubsystem.InnerSingleton;
	}
	void USteamCoreSettings::StaticRegisterNativesUSteamCoreSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreSettings);
	UClass* Z_Construct_UClass_USteamCoreSettings_NoRegister()
	{
		return USteamCoreSettings::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRelaunchInSteam_MetaData[];
#endif
		static void NewProp_bRelaunchInSteam_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRelaunchInSteam;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVACEnabled_MetaData[];
#endif
		static void NewProp_bVACEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVACEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowP2PPacketRelay_MetaData[];
#endif
		static void NewProp_bAllowP2PPacketRelay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowP2PPacketRelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_P2PConnectionTimeout_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_P2PConnectionTimeout;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamAppID_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SteamAppID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamDevAppID_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SteamDevAppID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Port;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameServerQueryPort_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_GameServerQueryPort;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameVersion_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GameVersion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "SteamCore Plugin" },
		{ "IncludePath", "SteamCore/SteamCoreSettings.h" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamCoreSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Steam Settings" },
		{ "Comment", "/**\n\x09* Enable steam\n\x09* \n\x09* Make sure you add this to your DefaultEngine.ini:\n\x09* [OnlineSubsystem]\n\x09* DefaultPlatformService=Steam\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamCoreSettings.h" },
		{ "ToolTip", "Enable steam\n\nMake sure you add this to your DefaultEngine.ini:\n[OnlineSubsystem]\nDefaultPlatformService=Steam" },
	};
#endif
	void Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((USteamCoreSettings*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USteamCoreSettings), &Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bRelaunchInSteam_MetaData[] = {
		{ "Category", "Steam Settings" },
		{ "Comment", "/**\n\x09* Should the game force a relaunch in Steam if the client isn't already loaded\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamCoreSettings.h" },
		{ "ToolTip", "Should the game force a relaunch in Steam if the client isn't already loaded" },
	};
#endif
	void Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bRelaunchInSteam_SetBit(void* Obj)
	{
		((USteamCoreSettings*)Obj)->bRelaunchInSteam = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bRelaunchInSteam = { "bRelaunchInSteam", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USteamCoreSettings), &Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bRelaunchInSteam_SetBit, METADATA_PARAMS(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bRelaunchInSteam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bRelaunchInSteam_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bVACEnabled_MetaData[] = {
		{ "Category", "Steam Settings" },
		{ "Comment", "/**\n\x09* Enable Steam VAC\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamCoreSettings.h" },
		{ "ToolTip", "Enable Steam VAC" },
	};
#endif
	void Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bVACEnabled_SetBit(void* Obj)
	{
		((USteamCoreSettings*)Obj)->bVACEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bVACEnabled = { "bVACEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USteamCoreSettings), &Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bVACEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bVACEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bVACEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bAllowP2PPacketRelay_MetaData[] = {
		{ "Category", "Steam Settings" },
		{ "Comment", "/**\n\x09* Should Steam P2P sockets all fall back to Steam servers relay if a direct connection fails\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamCoreSettings.h" },
		{ "ToolTip", "Should Steam P2P sockets all fall back to Steam servers relay if a direct connection fails" },
	};
#endif
	void Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bAllowP2PPacketRelay_SetBit(void* Obj)
	{
		((USteamCoreSettings*)Obj)->bAllowP2PPacketRelay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bAllowP2PPacketRelay = { "bAllowP2PPacketRelay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USteamCoreSettings), &Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bAllowP2PPacketRelay_SetBit, METADATA_PARAMS(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bAllowP2PPacketRelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bAllowP2PPacketRelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_P2PConnectionTimeout_MetaData[] = {
		{ "Category", "Steam Settings" },
		{ "Comment", "/**\n\x09* Timeout (in seconds) period for any P2P session\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamCoreSettings.h" },
		{ "ToolTip", "Timeout (in seconds) period for any P2P session" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_P2PConnectionTimeout = { "P2PConnectionTimeout", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamCoreSettings, P2PConnectionTimeout), METADATA_PARAMS(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_P2PConnectionTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_P2PConnectionTimeout_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_SteamAppID_MetaData[] = {
		{ "Category", "Steam Settings" },
		{ "Comment", "/**\n\x09* AppID of your application\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamCoreSettings.h" },
		{ "ToolTip", "AppID of your application" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_SteamAppID = { "SteamAppID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamCoreSettings, SteamAppID), METADATA_PARAMS(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_SteamAppID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_SteamAppID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_SteamDevAppID_MetaData[] = {
		{ "Category", "Steam Settings" },
		{ "Comment", "/**\n\x09* SteamDevAppID of your application\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamCoreSettings.h" },
		{ "ToolTip", "SteamDevAppID of your application" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_SteamDevAppID = { "SteamDevAppID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamCoreSettings, SteamDevAppID), METADATA_PARAMS(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_SteamDevAppID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_SteamDevAppID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_Port_MetaData[] = {
		{ "Category", "Steam Settings" },
		{ "Comment", "/**\n\x09* Steam Server Port\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamCoreSettings.h" },
		{ "ToolTip", "Steam Server Port" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamCoreSettings, Port), METADATA_PARAMS(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_Port_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_Port_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_GameServerQueryPort_MetaData[] = {
		{ "Category", "Steam Settings" },
		{ "Comment", "/**\n\x09* Steam Server Query Port\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamCoreSettings.h" },
		{ "ToolTip", "Steam Server Query Port" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_GameServerQueryPort = { "GameServerQueryPort", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamCoreSettings, GameServerQueryPort), METADATA_PARAMS(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_GameServerQueryPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_GameServerQueryPort_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_GameVersion_MetaData[] = {
		{ "Category", "Steam Settings" },
		{ "Comment", "/**\n\x09* Current game version\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamCoreSettings.h" },
		{ "ToolTip", "Current game version" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_GameVersion = { "GameVersion", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamCoreSettings, GameVersion), METADATA_PARAMS(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_GameVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_GameVersion_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bRelaunchInSteam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bVACEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bAllowP2PPacketRelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_P2PConnectionTimeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_SteamAppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_SteamDevAppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_Port,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_GameServerQueryPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_GameVersion,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreSettings_Statics::ClassParams = {
		&USteamCoreSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USteamCoreSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreSettings()
	{
		if (!Z_Registration_Info_UClass_USteamCoreSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreSettings.OuterSingleton, Z_Construct_UClass_USteamCoreSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreSettings.OuterSingleton;
	}
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreSettings>()
	{
		return USteamCoreSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreSettings);
	USteamCoreSettings::~USteamCoreSettings() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h_Statics::EnumInfo[] = {
		{ ESteamSubsystem_StaticEnum, TEXT("ESteamSubsystem"), &Z_Registration_Info_UEnum_ESteamSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3233606167U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreSettings, USteamCoreSettings::StaticClass, TEXT("USteamCoreSettings"), &Z_Registration_Info_UClass_USteamCoreSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreSettings), 3469317223U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h_1056489841(TEXT("/Script/SteamCore"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
