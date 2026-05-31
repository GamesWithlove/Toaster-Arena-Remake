// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/SteamCoreSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSteamCoreSettings() {}

// ********** Begin Cross Module References ********************************************************
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSettings();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSettings_NoRegister();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamSubsystem();
UPackage* Z_Construct_UPackage__Script_SteamCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ESteamSubsystem ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamSubsystem;
static UEnum* ESteamSubsystem_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamSubsystem.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamSubsystem.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamSubsystem, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamSubsystem"));
	}
	return Z_Registration_Info_UEnum_ESteamSubsystem.OuterSingleton;
}
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamSubsystem>()
{
	return ESteamSubsystem_StaticEnum();
}
struct Z_Construct_UEnum_SteamCore_ESteamSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
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
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
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
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamCore_ESteamSubsystem_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamSubsystem_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	"ESteamSubsystem",
	"ESteamSubsystem",
	Z_Construct_UEnum_SteamCore_ESteamSubsystem_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamSubsystem_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamSubsystem_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCore_ESteamSubsystem_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCore_ESteamSubsystem()
{
	if (!Z_Registration_Info_UEnum_ESteamSubsystem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamSubsystem.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamSubsystem_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamSubsystem.InnerSingleton;
}
// ********** End Enum ESteamSubsystem *************************************************************

// ********** Begin Class USteamCoreSettings *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreSettings;
UClass* USteamCoreSettings::GetPrivateStaticClass()
{
	using TClass = USteamCoreSettings;
	if (!Z_Registration_Info_UClass_USteamCoreSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreSettings"),
			Z_Registration_Info_UClass_USteamCoreSettings.InnerSingleton,
			StaticRegisterNativesUSteamCoreSettings,
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
	return Z_Registration_Info_UClass_USteamCoreSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreSettings_NoRegister()
{
	return USteamCoreSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "SteamCore Plugin" },
		{ "IncludePath", "SteamCore/SteamCoreSettings.h" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamCoreSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "Steam Settings" },
		{ "Comment", "/**\n\x09* Enable steam\n\x09* \n\x09* Make sure you add this to your DefaultEngine.ini:\n\x09* [OnlineSubsystem]\n\x09* DefaultPlatformService=Steam\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamCoreSettings.h" },
		{ "ToolTip", "Enable steam\n\nMake sure you add this to your DefaultEngine.ini:\n[OnlineSubsystem]\nDefaultPlatformService=Steam" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRelaunchInSteam_MetaData[] = {
		{ "Category", "Steam Settings" },
		{ "Comment", "/**\n\x09* Should the game force a relaunch in Steam if the client isn't already loaded\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamCoreSettings.h" },
		{ "ToolTip", "Should the game force a relaunch in Steam if the client isn't already loaded" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVACEnabled_MetaData[] = {
		{ "Category", "Steam Settings" },
		{ "Comment", "/**\n\x09* Enable Steam VAC\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamCoreSettings.h" },
		{ "ToolTip", "Enable Steam VAC" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowP2PPacketRelay_MetaData[] = {
		{ "Category", "Steam Settings" },
		{ "Comment", "/**\n\x09* Should Steam P2P sockets all fall back to Steam servers relay if a direct connection fails\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamCoreSettings.h" },
		{ "ToolTip", "Should Steam P2P sockets all fall back to Steam servers relay if a direct connection fails" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_P2PConnectionTimeout_MetaData[] = {
		{ "Category", "Steam Settings" },
		{ "Comment", "/**\n\x09* Timeout (in seconds) period for any P2P session\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamCoreSettings.h" },
		{ "ToolTip", "Timeout (in seconds) period for any P2P session" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamAppID_MetaData[] = {
		{ "Category", "Steam Settings" },
		{ "Comment", "/**\n\x09* AppID of your application\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamCoreSettings.h" },
		{ "ToolTip", "AppID of your application" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamDevAppID_MetaData[] = {
		{ "Category", "Steam Settings" },
		{ "Comment", "/**\n\x09* SteamDevAppID of your application\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamCoreSettings.h" },
		{ "ToolTip", "SteamDevAppID of your application" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[] = {
		{ "Category", "Steam Settings" },
		{ "Comment", "/**\n\x09* Steam Server Port\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamCoreSettings.h" },
		{ "ToolTip", "Steam Server Port" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameServerQueryPort_MetaData[] = {
		{ "Category", "Steam Settings" },
		{ "Comment", "/**\n\x09* Steam Server Query Port\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamCoreSettings.h" },
		{ "ToolTip", "Steam Server Query Port" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameVersion_MetaData[] = {
		{ "Category", "Steam Settings" },
		{ "Comment", "/**\n\x09* Current game version\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamCoreSettings.h" },
		{ "ToolTip", "Current game version" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreSettings constinit property declarations ***********************
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static void NewProp_bRelaunchInSteam_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRelaunchInSteam;
	static void NewProp_bVACEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVACEnabled;
	static void NewProp_bAllowP2PPacketRelay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowP2PPacketRelay;
	static const UECodeGen_Private::FIntPropertyParams NewProp_P2PConnectionTimeout;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SteamAppID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SteamDevAppID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GameServerQueryPort;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameVersion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USteamCoreSettings constinit property declarations *************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreSettings_Statics

// ********** Begin Class USteamCoreSettings Property Definitions **********************************
void Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((USteamCoreSettings*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USteamCoreSettings), &Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
void Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bRelaunchInSteam_SetBit(void* Obj)
{
	((USteamCoreSettings*)Obj)->bRelaunchInSteam = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bRelaunchInSteam = { "bRelaunchInSteam", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USteamCoreSettings), &Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bRelaunchInSteam_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRelaunchInSteam_MetaData), NewProp_bRelaunchInSteam_MetaData) };
void Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bVACEnabled_SetBit(void* Obj)
{
	((USteamCoreSettings*)Obj)->bVACEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bVACEnabled = { "bVACEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USteamCoreSettings), &Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bVACEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVACEnabled_MetaData), NewProp_bVACEnabled_MetaData) };
void Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bAllowP2PPacketRelay_SetBit(void* Obj)
{
	((USteamCoreSettings*)Obj)->bAllowP2PPacketRelay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bAllowP2PPacketRelay = { "bAllowP2PPacketRelay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USteamCoreSettings), &Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_bAllowP2PPacketRelay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowP2PPacketRelay_MetaData), NewProp_bAllowP2PPacketRelay_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_P2PConnectionTimeout = { "P2PConnectionTimeout", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreSettings, P2PConnectionTimeout), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_P2PConnectionTimeout_MetaData), NewProp_P2PConnectionTimeout_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_SteamAppID = { "SteamAppID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreSettings, SteamAppID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamAppID_MetaData), NewProp_SteamAppID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_SteamDevAppID = { "SteamDevAppID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreSettings, SteamDevAppID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamDevAppID_MetaData), NewProp_SteamDevAppID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreSettings, Port), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Port_MetaData), NewProp_Port_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_GameServerQueryPort = { "GameServerQueryPort", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreSettings, GameServerQueryPort), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameServerQueryPort_MetaData), NewProp_GameServerQueryPort_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USteamCoreSettings_Statics::NewProp_GameVersion = { "GameVersion", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreSettings, GameVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameVersion_MetaData), NewProp_GameVersion_MetaData) };
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
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSettings_Statics::PropPointers) < 2048);
// ********** End Class USteamCoreSettings Property Definitions ************************************
UObject* (*const Z_Construct_UClass_USteamCoreSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSettings_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreSettings_Statics::Class_MetaDataParams)
};
void USteamCoreSettings::StaticRegisterNativesUSteamCoreSettings()
{
}
UClass* Z_Construct_UClass_USteamCoreSettings()
{
	if (!Z_Registration_Info_UClass_USteamCoreSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreSettings.OuterSingleton, Z_Construct_UClass_USteamCoreSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreSettings);
USteamCoreSettings::~USteamCoreSettings() {}
// ********** End Class USteamCoreSettings *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h__Script_SteamCore_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESteamSubsystem_StaticEnum, TEXT("ESteamSubsystem"), &Z_Registration_Info_UEnum_ESteamSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3973173281U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreSettings, USteamCoreSettings::StaticClass, TEXT("USteamCoreSettings"), &Z_Registration_Info_UClass_USteamCoreSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreSettings), 3606173621U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h__Script_SteamCore_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h__Script_SteamCore_532827770{
	TEXT("/Script/SteamCore"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h__Script_SteamCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h__Script_SteamCore_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h__Script_SteamCore_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h__Script_SteamCore_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
