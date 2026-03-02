// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/SteamUser/WebSteamUserTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebSteamUserTypes() {}
// Cross Module References
	STEAMCOREWEB_API UEnum* Z_Construct_UEnum_SteamCoreWeb_EVanityUrlType();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVanityUrlType;
	static UEnum* EVanityUrlType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVanityUrlType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVanityUrlType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCoreWeb_EVanityUrlType, (UObject*)Z_Construct_UPackage__Script_SteamCoreWeb(), TEXT("EVanityUrlType"));
		}
		return Z_Registration_Info_UEnum_EVanityUrlType.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UEnum* StaticEnum<EVanityUrlType>()
	{
		return EVanityUrlType_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamCoreWeb_EVanityUrlType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamCoreWeb_EVanityUrlType_Statics::Enumerators[] = {
		{ "EVanityUrlType::Individual", (int64)EVanityUrlType::Individual },
		{ "EVanityUrlType::Group", (int64)EVanityUrlType::Group },
		{ "EVanityUrlType::OfficialGameGroup", (int64)EVanityUrlType::OfficialGameGroup },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamCoreWeb_EVanityUrlType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Enums\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "Group.Name", "EVanityUrlType::Group" },
		{ "Individual.Name", "EVanityUrlType::Individual" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserTypes.h" },
		{ "OfficialGameGroup.Name", "EVanityUrlType::OfficialGameGroup" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Enums\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCoreWeb_EVanityUrlType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamCoreWeb,
		nullptr,
		"EVanityUrlType",
		"EVanityUrlType",
		Z_Construct_UEnum_SteamCoreWeb_EVanityUrlType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCoreWeb_EVanityUrlType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamCoreWeb_EVanityUrlType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCoreWeb_EVanityUrlType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamCoreWeb_EVanityUrlType()
	{
		if (!Z_Registration_Info_UEnum_EVanityUrlType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVanityUrlType.InnerSingleton, Z_Construct_UEnum_SteamCoreWeb_EVanityUrlType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVanityUrlType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUser_WebSteamUserTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUser_WebSteamUserTypes_h_Statics::EnumInfo[] = {
		{ EVanityUrlType_StaticEnum, TEXT("EVanityUrlType"), &Z_Registration_Info_UEnum_EVanityUrlType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3188374476U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUser_WebSteamUserTypes_h_1133313730(TEXT("/Script/SteamCoreWeb"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUser_WebSteamUserTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUser_WebSteamUserTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
