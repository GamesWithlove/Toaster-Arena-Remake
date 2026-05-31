// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamParentalSettings/SteamParentalSettingsTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSteamParentalSettingsTypes() {}

// ********** Begin Cross Module References ********************************************************
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamParentalFeature();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamParentalSettingsChanged();
UPackage* Z_Construct_UPackage__Script_SteamCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ESteamParentalFeature *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamParentalFeature;
static UEnum* ESteamParentalFeature_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamParentalFeature.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamParentalFeature.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamParentalFeature, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamParentalFeature"));
	}
	return Z_Registration_Info_UEnum_ESteamParentalFeature.OuterSingleton;
}
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamParentalFeature>()
{
	return ESteamParentalFeature_StaticEnum();
}
struct Z_Construct_UEnum_SteamCore_ESteamParentalFeature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Browser.Name", "ESteamParentalFeature::Browser" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Enums\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
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
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Enums\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
		{ "Trading.Name", "ESteamParentalFeature::Trading" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
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
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamCore_ESteamParentalFeature_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamParentalFeature_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	"ESteamParentalFeature",
	"ESteamParentalFeature",
	Z_Construct_UEnum_SteamCore_ESteamParentalFeature_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamParentalFeature_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamParentalFeature_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCore_ESteamParentalFeature_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCore_ESteamParentalFeature()
{
	if (!Z_Registration_Info_UEnum_ESteamParentalFeature.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamParentalFeature.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamParentalFeature_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamParentalFeature.InnerSingleton;
}
// ********** End Enum ESteamParentalFeature *******************************************************

// ********** Begin ScriptStruct FSteamParentalSettingsChanged *************************************
struct Z_Construct_UScriptStruct_FSteamParentalSettingsChanged_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSteamParentalSettingsChanged); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSteamParentalSettingsChanged); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Structs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "ModuleRelativePath", "Public/SteamParentalSettings/SteamParentalSettingsTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Structs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSteamParentalSettingsChanged constinit property declarations *****
// ********** End ScriptStruct FSteamParentalSettingsChanged constinit property declarations *******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamParentalSettingsChanged>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSteamParentalSettingsChanged_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSteamParentalSettingsChanged;
class UScriptStruct* FSteamParentalSettingsChanged::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamParentalSettingsChanged.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSteamParentalSettingsChanged.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamParentalSettingsChanged, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamParentalSettingsChanged"));
	}
	return Z_Registration_Info_UScriptStruct_FSteamParentalSettingsChanged.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamParentalSettingsChanged_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"SteamParentalSettingsChanged",
	nullptr,
	0,
	sizeof(FSteamParentalSettingsChanged),
	alignof(FSteamParentalSettingsChanged),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamParentalSettingsChanged_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSteamParentalSettingsChanged_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSteamParentalSettingsChanged()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamParentalSettingsChanged.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSteamParentalSettingsChanged.InnerSingleton, Z_Construct_UScriptStruct_FSteamParentalSettingsChanged_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSteamParentalSettingsChanged.InnerSingleton);
}
// ********** End ScriptStruct FSteamParentalSettingsChanged ***************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamParentalSettings_SteamParentalSettingsTypes_h__Script_SteamCore_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESteamParentalFeature_StaticEnum, TEXT("ESteamParentalFeature"), &Z_Registration_Info_UEnum_ESteamParentalFeature, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2738241916U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSteamParentalSettingsChanged::StaticStruct, Z_Construct_UScriptStruct_FSteamParentalSettingsChanged_Statics::NewStructOps, TEXT("SteamParentalSettingsChanged"),&Z_Registration_Info_UScriptStruct_FSteamParentalSettingsChanged, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamParentalSettingsChanged), 1306028267U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamParentalSettings_SteamParentalSettingsTypes_h__Script_SteamCore_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamParentalSettings_SteamParentalSettingsTypes_h__Script_SteamCore_1338501431{
	TEXT("/Script/SteamCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamParentalSettings_SteamParentalSettingsTypes_h__Script_SteamCore_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamParentalSettings_SteamParentalSettingsTypes_h__Script_SteamCore_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamParentalSettings_SteamParentalSettingsTypes_h__Script_SteamCore_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamParentalSettings_SteamParentalSettingsTypes_h__Script_SteamCore_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
