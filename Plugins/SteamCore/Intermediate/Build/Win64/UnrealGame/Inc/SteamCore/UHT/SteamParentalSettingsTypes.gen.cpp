// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamParentalSettings/SteamParentalSettingsTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamParentalSettingsTypes() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamParentalFeature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamParentalSettingsChanged();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamParentalFeature;
	static UEnum* ESteamParentalFeature_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESteamParentalFeature.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESteamParentalFeature.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamParentalFeature, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamParentalFeature"));
		}
		return Z_Registration_Info_UEnum_ESteamParentalFeature.OuterSingleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamParentalFeature>()
	{
		return ESteamParentalFeature_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamCore_ESteamParentalFeature_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamCore_ESteamParentalFeature_Statics::Enumerators[] = {
		{ "ESteamParentalFeature::Invalid", (int64)ESteamParentalFeature::Invalid },
		{ "ESteamParentalFeature::Store", (int64)ESteamParentalFeature::Store },
		{ "ESteamParentalFeature::Community", (int64)ESteamParentalFeature::Community },
		{ "ESteamParentalFeature::Profile", (int64)ESteamParentalFeature::Profile },
		{ "ESteamParentalFeature::Friends", (int64)ESteamParentalFeature::Friends },
		{ "ESteamParentalFeature::News", (int64)ESteamParentalFeature::News },
		{ "ESteamParentalFeature::Trading", (int64)ESteamParentalFeature::Trading },
		{ "ESteamParentalFeature::Settings", (int64)ESteamParentalFeature::Settings },
		{ "ESteamParentalFeature::Console", (int64)ESteamParentalFeature::Console },
		{ "ESteamParentalFeature::Browser", (int64)ESteamParentalFeature::Browser },
		{ "ESteamParentalFeature::ParentalSetup", (int64)ESteamParentalFeature::ParentalSetup },
		{ "ESteamParentalFeature::Library", (int64)ESteamParentalFeature::Library },
		{ "ESteamParentalFeature::Test", (int64)ESteamParentalFeature::Test },
		{ "ESteamParentalFeature::Max", (int64)ESteamParentalFeature::Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamCore_ESteamParentalFeature_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Browser.Name", "ESteamParentalFeature::Browser" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Enums\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "Community.Name", "ESteamParentalFeature::Community" },
		{ "Console.Name", "ESteamParentalFeature::Console" },
		{ "Friends.Name", "ESteamParentalFeature::Friends" },
		{ "Invalid.Name", "ESteamParentalFeature::Invalid" },
		{ "Library.Name", "ESteamParentalFeature::Library" },
		{ "Max.Name", "ESteamParentalFeature::Max" },
		{ "ModuleRelativePath", "Public/SteamParentalSettings/SteamParentalSettingsTypes.h" },
		{ "News.Name", "ESteamParentalFeature::News" },
		{ "ParentalSetup.Name", "ESteamParentalFeature::ParentalSetup" },
		{ "Profile.Name", "ESteamParentalFeature::Profile" },
		{ "Settings.Name", "ESteamParentalFeature::Settings" },
		{ "Store.Name", "ESteamParentalFeature::Store" },
		{ "Test.Name", "ESteamParentalFeature::Test" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Enums\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
		{ "Trading.Name", "ESteamParentalFeature::Trading" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamParentalFeature_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		"ESteamParentalFeature",
		"ESteamParentalFeature",
		Z_Construct_UEnum_SteamCore_ESteamParentalFeature_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamParentalFeature_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamCore_ESteamParentalFeature_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamParentalFeature_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamCore_ESteamParentalFeature()
	{
		if (!Z_Registration_Info_UEnum_ESteamParentalFeature.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamParentalFeature.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamParentalFeature_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESteamParentalFeature.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SteamParentalSettingsChanged;
class UScriptStruct* FSteamParentalSettingsChanged::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SteamParentalSettingsChanged.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SteamParentalSettingsChanged.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamParentalSettingsChanged, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamParentalSettingsChanged"));
	}
	return Z_Registration_Info_UScriptStruct_SteamParentalSettingsChanged.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FSteamParentalSettingsChanged>()
{
	return FSteamParentalSettingsChanged::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSteamParentalSettingsChanged_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamParentalSettingsChanged_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Structs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamParentalSettings/SteamParentalSettingsTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Structs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamParentalSettingsChanged_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamParentalSettingsChanged>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamParentalSettingsChanged_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"SteamParentalSettingsChanged",
		sizeof(FSteamParentalSettingsChanged),
		alignof(FSteamParentalSettingsChanged),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamParentalSettingsChanged_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamParentalSettingsChanged_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamParentalSettingsChanged()
	{
		if (!Z_Registration_Info_UScriptStruct_SteamParentalSettingsChanged.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SteamParentalSettingsChanged.InnerSingleton, Z_Construct_UScriptStruct_FSteamParentalSettingsChanged_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SteamParentalSettingsChanged.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamParentalSettings_SteamParentalSettingsTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamParentalSettings_SteamParentalSettingsTypes_h_Statics::EnumInfo[] = {
		{ ESteamParentalFeature_StaticEnum, TEXT("ESteamParentalFeature"), &Z_Registration_Info_UEnum_ESteamParentalFeature, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2947125306U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamParentalSettings_SteamParentalSettingsTypes_h_Statics::ScriptStructInfo[] = {
		{ FSteamParentalSettingsChanged::StaticStruct, Z_Construct_UScriptStruct_FSteamParentalSettingsChanged_Statics::NewStructOps, TEXT("SteamParentalSettingsChanged"), &Z_Registration_Info_UScriptStruct_SteamParentalSettingsChanged, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamParentalSettingsChanged), 549780862U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamParentalSettings_SteamParentalSettingsTypes_h_2555213168(TEXT("/Script/SteamCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamParentalSettings_SteamParentalSettingsTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamParentalSettings_SteamParentalSettingsTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamParentalSettings_SteamParentalSettingsTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamParentalSettings_SteamParentalSettingsTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
