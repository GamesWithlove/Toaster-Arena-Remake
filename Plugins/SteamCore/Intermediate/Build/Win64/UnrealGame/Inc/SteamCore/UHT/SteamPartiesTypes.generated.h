// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamParties/SteamPartiesTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FChangeNumOpenSlotsData;
struct FCreateBeaconData;
struct FJoinPartyData;
struct FReservationNotificationData;
#ifdef STEAMCORE_SteamPartiesTypes_generated_h
#error "SteamPartiesTypes.generated.h already included, missing '#pragma once' in SteamPartiesTypes.h"
#endif
#define STEAMCORE_SteamPartiesTypes_generated_h

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesTypes_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FSteamPartyBeaconLocation>();

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesTypes_h_68_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FJoinPartyData_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FJoinPartyData>();

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesTypes_h_98_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCreateBeaconData_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FCreateBeaconData>();

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesTypes_h_122_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FReservationNotificationData_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FReservationNotificationData>();

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesTypes_h_143_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChangeNumOpenSlotsData_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FChangeNumOpenSlotsData>();

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesTypes_h_165_DELEGATE \
STEAMCORE_API void FOnJoinPartyDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnJoinPartyDelegate, FJoinPartyData const& Data);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesTypes_h_166_DELEGATE \
STEAMCORE_API void FOnCreateBeaconDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnCreateBeaconDelegate, FCreateBeaconData const& Data);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesTypes_h_167_DELEGATE \
STEAMCORE_API void FOnReservationNotificationDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnReservationNotificationDelegate, FReservationNotificationData const& Data);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesTypes_h_168_DELEGATE \
STEAMCORE_API void FOnChangeNumOpenSlotsDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnChangeNumOpenSlotsDelegate, FChangeNumOpenSlotsData const& Data);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesTypes_h_169_DELEGATE \
STEAMCORE_API void FOnAvailableBeaconLocationsDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnAvailableBeaconLocationsDelegate);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesTypes_h_170_DELEGATE \
STEAMCORE_API void FOnActiveBeaconsDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnActiveBeaconsDelegate);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesTypes_h_171_DELEGATE \
STEAMCORE_API void FOnJoinParty_DelegateWrapper(const FScriptDelegate& OnJoinParty, FJoinPartyData const& Data, bool bWasSuccessful);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesTypes_h_172_DELEGATE \
STEAMCORE_API void FOnCreateBeacon_DelegateWrapper(const FScriptDelegate& OnCreateBeacon, FCreateBeaconData const& Data, bool bWasSuccessful);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesTypes_h_173_DELEGATE \
STEAMCORE_API void FOnChangeNumOpenSlots_DelegateWrapper(const FScriptDelegate& OnChangeNumOpenSlots, FChangeNumOpenSlotsData const& Data, bool bWasSuccessful);


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesTypes_h


#define FOREACH_ENUM_ESTEAMPARTIESBEACONLOCATIONTYPE(op) \
	op(ESteamPartiesBeaconLocationType::Invalid) \
	op(ESteamPartiesBeaconLocationType::ChatGroup) \
	op(ESteamPartiesBeaconLocationType::Max) 

enum class ESteamPartiesBeaconLocationType : uint8;
template<> struct TIsUEnumClass<ESteamPartiesBeaconLocationType> { enum { Value = true }; };
template<> STEAMCORE_API UEnum* StaticEnum<ESteamPartiesBeaconLocationType>();

#define FOREACH_ENUM_ESTEAMPARTIESBEACONLOCATIONDATA(op) \
	op(ESteamPartiesBeaconLocationData::Invalid) \
	op(ESteamPartiesBeaconLocationData::Name) \
	op(ESteamPartiesBeaconLocationData::IconURLSmall) \
	op(ESteamPartiesBeaconLocationData::IconURLMedium) \
	op(ESteamPartiesBeaconLocationData::IconURLLarge) 

enum class ESteamPartiesBeaconLocationData : uint8;
template<> struct TIsUEnumClass<ESteamPartiesBeaconLocationData> { enum { Value = true }; };
template<> STEAMCORE_API UEnum* StaticEnum<ESteamPartiesBeaconLocationData>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
