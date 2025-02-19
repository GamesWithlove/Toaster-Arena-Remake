// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamParentalSettings/SteamParentalSettingsTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_SteamParentalSettingsTypes_generated_h
#error "SteamParentalSettingsTypes.generated.h already included, missing '#pragma once' in SteamParentalSettingsTypes.h"
#endif
#define STEAMCORE_SteamParentalSettingsTypes_generated_h

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamParentalSettings_SteamParentalSettingsTypes_h_44_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamParentalSettingsChanged_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FSteamParentalSettingsChanged>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamParentalSettings_SteamParentalSettingsTypes_h


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
template<> STEAMCORE_API UEnum* StaticEnum<ESteamParentalFeature>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
