// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamParties/SteamPartiesTypes.h"

#ifdef STEAMCORE_SteamPartiesTypes_generated_h
#error "SteamPartiesTypes.generated.h already included, missing '#pragma once' in SteamPartiesTypes.h"
#endif
#define STEAMCORE_SteamPartiesTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FChangeNumOpenSlotsData;
struct FCreateBeaconData;
struct FJoinPartyData;
struct FReservationNotificationData;

// ********** Begin ScriptStruct FSteamPartyBeaconLocation *****************************************
struct Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics;
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesTypes_h_43_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


struct FSteamPartyBeaconLocation;
// ********** End ScriptStruct FSteamPartyBeaconLocation *******************************************

// ********** Begin ScriptStruct FJoinPartyData ****************************************************
struct Z_Construct_UScriptStruct_FJoinPartyData_Statics;
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesTypes_h_68_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FJoinPartyData_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


struct FJoinPartyData;
// ********** End ScriptStruct FJoinPartyData ******************************************************

// ********** Begin ScriptStruct FCreateBeaconData *************************************************
struct Z_Construct_UScriptStruct_FCreateBeaconData_Statics;
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesTypes_h_98_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCreateBeaconData_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


struct FCreateBeaconData;
// ********** End ScriptStruct FCreateBeaconData ***************************************************

// ********** Begin ScriptStruct FReservationNotificationData **************************************
struct Z_Construct_UScriptStruct_FReservationNotificationData_Statics;
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesTypes_h_122_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FReservationNotificationData_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


struct FReservationNotificationData;
// ********** End ScriptStruct FReservationNotificationData ****************************************

// ********** Begin ScriptStruct FChangeNumOpenSlotsData *******************************************
struct Z_Construct_UScriptStruct_FChangeNumOpenSlotsData_Statics;
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesTypes_h_143_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChangeNumOpenSlotsData_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


struct FChangeNumOpenSlotsData;
// ********** End ScriptStruct FChangeNumOpenSlotsData *********************************************

// ********** Begin Delegate FOnJoinPartyDelegate **************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesTypes_h_165_DELEGATE \
STEAMCORE_API void FOnJoinPartyDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnJoinPartyDelegate, FJoinPartyData const& Data);


// ********** End Delegate FOnJoinPartyDelegate ****************************************************

// ********** Begin Delegate FOnCreateBeaconDelegate ***********************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesTypes_h_166_DELEGATE \
STEAMCORE_API void FOnCreateBeaconDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnCreateBeaconDelegate, FCreateBeaconData const& Data);


// ********** End Delegate FOnCreateBeaconDelegate *************************************************

// ********** Begin Delegate FOnReservationNotificationDelegate ************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesTypes_h_167_DELEGATE \
STEAMCORE_API void FOnReservationNotificationDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnReservationNotificationDelegate, FReservationNotificationData const& Data);


// ********** End Delegate FOnReservationNotificationDelegate **************************************

// ********** Begin Delegate FOnChangeNumOpenSlotsDelegate *****************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesTypes_h_168_DELEGATE \
STEAMCORE_API void FOnChangeNumOpenSlotsDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnChangeNumOpenSlotsDelegate, FChangeNumOpenSlotsData const& Data);


// ********** End Delegate FOnChangeNumOpenSlotsDelegate *******************************************

// ********** Begin Delegate FOnAvailableBeaconLocationsDelegate ***********************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesTypes_h_169_DELEGATE \
STEAMCORE_API void FOnAvailableBeaconLocationsDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnAvailableBeaconLocationsDelegate);


// ********** End Delegate FOnAvailableBeaconLocationsDelegate *************************************

// ********** Begin Delegate FOnActiveBeaconsDelegate **********************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesTypes_h_170_DELEGATE \
STEAMCORE_API void FOnActiveBeaconsDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnActiveBeaconsDelegate);


// ********** End Delegate FOnActiveBeaconsDelegate ************************************************

// ********** Begin Delegate FOnJoinParty **********************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesTypes_h_171_DELEGATE \
STEAMCORE_API void FOnJoinParty_DelegateWrapper(const FScriptDelegate& OnJoinParty, FJoinPartyData const& Data, bool bWasSuccessful);


// ********** End Delegate FOnJoinParty ************************************************************

// ********** Begin Delegate FOnCreateBeacon *******************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesTypes_h_172_DELEGATE \
STEAMCORE_API void FOnCreateBeacon_DelegateWrapper(const FScriptDelegate& OnCreateBeacon, FCreateBeaconData const& Data, bool bWasSuccessful);


// ********** End Delegate FOnCreateBeacon *********************************************************

// ********** Begin Delegate FOnChangeNumOpenSlots *************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesTypes_h_173_DELEGATE \
STEAMCORE_API void FOnChangeNumOpenSlots_DelegateWrapper(const FScriptDelegate& OnChangeNumOpenSlots, FChangeNumOpenSlotsData const& Data, bool bWasSuccessful);


// ********** End Delegate FOnChangeNumOpenSlots ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesTypes_h

// ********** Begin Enum ESteamPartiesBeaconLocationType *******************************************
#define FOREACH_ENUM_ESTEAMPARTIESBEACONLOCATIONTYPE(op) \
	op(ESteamPartiesBeaconLocationType::Invalid) \
	op(ESteamPartiesBeaconLocationType::ChatGroup) \
	op(ESteamPartiesBeaconLocationType::Max) 

enum class ESteamPartiesBeaconLocationType : uint8;
template<> struct TIsUEnumClass<ESteamPartiesBeaconLocationType> { enum { Value = true }; };
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamPartiesBeaconLocationType>();
// ********** End Enum ESteamPartiesBeaconLocationType *********************************************

// ********** Begin Enum ESteamPartiesBeaconLocationData *******************************************
#define FOREACH_ENUM_ESTEAMPARTIESBEACONLOCATIONDATA(op) \
	op(ESteamPartiesBeaconLocationData::Invalid) \
	op(ESteamPartiesBeaconLocationData::Name) \
	op(ESteamPartiesBeaconLocationData::IconURLSmall) \
	op(ESteamPartiesBeaconLocationData::IconURLMedium) \
	op(ESteamPartiesBeaconLocationData::IconURLLarge) 

enum class ESteamPartiesBeaconLocationData : uint8;
template<> struct TIsUEnumClass<ESteamPartiesBeaconLocationData> { enum { Value = true }; };
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamPartiesBeaconLocationData>();
// ********** End Enum ESteamPartiesBeaconLocationData *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
