// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/LobbyMatchmakingService/WebLobbyMatchmakingServiceTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebLobbyMatchmakingServiceTypes() {}
// Cross Module References
	STEAMCOREWEB_API UEnum* Z_Construct_UEnum_SteamCoreWeb_ESteamCoreWebLobbyType();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamCoreWebLobbyType;
	static UEnum* ESteamCoreWebLobbyType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESteamCoreWebLobbyType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESteamCoreWebLobbyType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCoreWeb_ESteamCoreWebLobbyType, (UObject*)Z_Construct_UPackage__Script_SteamCoreWeb(), TEXT("ESteamCoreWebLobbyType"));
		}
		return Z_Registration_Info_UEnum_ESteamCoreWebLobbyType.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UEnum* StaticEnum<ESteamCoreWebLobbyType>()
	{
		return ESteamCoreWebLobbyType_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamCoreWeb_ESteamCoreWebLobbyType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamCoreWeb_ESteamCoreWebLobbyType_Statics::Enumerators[] = {
		{ "ESteamCoreWebLobbyType::Private", (int64)ESteamCoreWebLobbyType::Private },
		{ "ESteamCoreWebLobbyType::FriendsOnly", (int64)ESteamCoreWebLobbyType::FriendsOnly },
		{ "ESteamCoreWebLobbyType::TypePublic", (int64)ESteamCoreWebLobbyType::TypePublic },
		{ "ESteamCoreWebLobbyType::TypeInvisible", (int64)ESteamCoreWebLobbyType::TypeInvisible },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamCoreWeb_ESteamCoreWebLobbyType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Enums\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n// lobby type description\n" },
		{ "FriendsOnly.Name", "ESteamCoreWebLobbyType::FriendsOnly" },
		{ "ModuleRelativePath", "Public/LobbyMatchmakingService/WebLobbyMatchmakingServiceTypes.h" },
		{ "Private.Name", "ESteamCoreWebLobbyType::Private" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Enums\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\nlobby type description" },
		{ "TypeInvisible.Name", "ESteamCoreWebLobbyType::TypeInvisible" },
		{ "TypePublic.Name", "ESteamCoreWebLobbyType::TypePublic" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCoreWeb_ESteamCoreWebLobbyType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamCoreWeb,
		nullptr,
		"ESteamCoreWebLobbyType",
		"ESteamCoreWebLobbyType",
		Z_Construct_UEnum_SteamCoreWeb_ESteamCoreWebLobbyType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCoreWeb_ESteamCoreWebLobbyType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamCoreWeb_ESteamCoreWebLobbyType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCoreWeb_ESteamCoreWebLobbyType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamCoreWeb_ESteamCoreWebLobbyType()
	{
		if (!Z_Registration_Info_UEnum_ESteamCoreWebLobbyType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamCoreWebLobbyType.InnerSingleton, Z_Construct_UEnum_SteamCoreWeb_ESteamCoreWebLobbyType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESteamCoreWebLobbyType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_LobbyMatchmakingService_WebLobbyMatchmakingServiceTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_LobbyMatchmakingService_WebLobbyMatchmakingServiceTypes_h_Statics::EnumInfo[] = {
		{ ESteamCoreWebLobbyType_StaticEnum, TEXT("ESteamCoreWebLobbyType"), &Z_Registration_Info_UEnum_ESteamCoreWebLobbyType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4222414290U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_LobbyMatchmakingService_WebLobbyMatchmakingServiceTypes_h_3769137931(TEXT("/Script/SteamCoreWeb"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_LobbyMatchmakingService_WebLobbyMatchmakingServiceTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_LobbyMatchmakingService_WebLobbyMatchmakingServiceTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
