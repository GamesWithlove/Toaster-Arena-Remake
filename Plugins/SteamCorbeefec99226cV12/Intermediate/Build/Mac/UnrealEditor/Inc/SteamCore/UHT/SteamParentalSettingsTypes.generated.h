// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamParentalSettings/SteamParentalSettingsTypes.h"

#ifdef STEAMCORE_SteamParentalSettingsTypes_generated_h
#error "SteamParentalSettingsTypes.generated.h already included, missing '#pragma once' in SteamParentalSettingsTypes.h"
#endif
#define STEAMCORE_SteamParentalSettingsTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSteamParentalSettingsChanged *************************************
struct Z_Construct_UScriptStruct_FSteamParentalSettingsChanged_Statics;
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamParentalSettings_SteamParentalSettingsTypes_h_44_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSteamParentalSettingsChanged_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


struct FSteamParentalSettingsChanged;
// ********** End ScriptStruct FSteamParentalSettingsChanged ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamParentalSettings_SteamParentalSettingsTypes_h

// ********** Begin Enum ESteamParentalFeature *****************************************************
#define FOREACH_ENUM_ESTEAMPARENTALFEATURE(op) \
	op(ESteamParentalFeature::Invalid) \
	op(ESteamParentalFeature::Store) \
	op(ESteamParentalFeature::Community) \
	op(ESteamParentalFeature::Profile) \
	op(ESteamParentalFeature::Friends) \
	op(ESteamParentalFeature::News) \
	op(ESteamParentalFeature::Trading) \
	op(ESteamParentalFeature::Settings) \
	op(ESteamParentalFeature::Console) \
	op(ESteamParentalFeature::Browser) \
	op(ESteamParentalFeature::ParentalSetup) \
	op(ESteamParentalFeature::Library) \
	op(ESteamParentalFeature::Test) \
	op(ESteamParentalFeature::Max) 

enum class ESteamParentalFeature : uint8;
template<> struct TIsUEnumClass<ESteamParentalFeature> { enum { Value = true }; };
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamParentalFeature>();
// ********** End Enum ESteamParentalFeature *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
