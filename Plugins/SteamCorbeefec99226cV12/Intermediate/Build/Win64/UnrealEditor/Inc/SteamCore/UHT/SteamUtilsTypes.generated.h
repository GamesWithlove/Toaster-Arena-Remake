// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamUtils/SteamUtilsTypes.h"

#ifdef STEAMCORE_SteamUtilsTypes_generated_h
#error "SteamUtilsTypes.generated.h already included, missing '#pragma once' in SteamUtilsTypes.h"
#endif
#define STEAMCORE_SteamUtilsTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCheckFileSignature;
struct FGamepadTextInputDismissed;
struct FIPCountry;
struct FLowBatteryPower;
struct FSteamShutdown;

// ********** Begin ScriptStruct FCheckFileSignature ***********************************************
struct Z_Construct_UScriptStruct_FCheckFileSignature_Statics;
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamUtils_SteamUtilsTypes_h_80_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCheckFileSignature_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


struct FCheckFileSignature;
// ********** End ScriptStruct FCheckFileSignature *************************************************

// ********** Begin ScriptStruct FGamepadTextInputDismissed ****************************************
struct Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics;
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamUtils_SteamUtilsTypes_h_102_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


struct FGamepadTextInputDismissed;
// ********** End ScriptStruct FGamepadTextInputDismissed ******************************************

// ********** Begin ScriptStruct FLowBatteryPower **************************************************
struct Z_Construct_UScriptStruct_FLowBatteryPower_Statics;
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamUtils_SteamUtilsTypes_h_128_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLowBatteryPower_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


struct FLowBatteryPower;
// ********** End ScriptStruct FLowBatteryPower ****************************************************

// ********** Begin ScriptStruct FIPCountry ********************************************************
struct Z_Construct_UScriptStruct_FIPCountry_Statics;
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamUtils_SteamUtilsTypes_h_150_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIPCountry_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


struct FIPCountry;
// ********** End ScriptStruct FIPCountry **********************************************************

// ********** Begin ScriptStruct FSteamShutdown ****************************************************
struct Z_Construct_UScriptStruct_FSteamShutdown_Statics;
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamUtils_SteamUtilsTypes_h_164_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSteamShutdown_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


struct FSteamShutdown;
// ********** End ScriptStruct FSteamShutdown ******************************************************

// ********** Begin Delegate FOnCheckFileSignature *************************************************
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamUtils_SteamUtilsTypes_h_178_DELEGATE \
STEAMCORE_API void FOnCheckFileSignature_DelegateWrapper(const FMulticastScriptDelegate& OnCheckFileSignature, FCheckFileSignature const& Data);


// ********** End Delegate FOnCheckFileSignature ***************************************************

// ********** Begin Delegate FOnGamepadTextInputDismissed ******************************************
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamUtils_SteamUtilsTypes_h_179_DELEGATE \
STEAMCORE_API void FOnGamepadTextInputDismissed_DelegateWrapper(const FMulticastScriptDelegate& OnGamepadTextInputDismissed, FGamepadTextInputDismissed const& Data);


// ********** End Delegate FOnGamepadTextInputDismissed ********************************************

// ********** Begin Delegate FOnIPCountry **********************************************************
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamUtils_SteamUtilsTypes_h_180_DELEGATE \
STEAMCORE_API void FOnIPCountry_DelegateWrapper(const FMulticastScriptDelegate& OnIPCountry, FIPCountry const& Data);


// ********** End Delegate FOnIPCountry ************************************************************

// ********** Begin Delegate FOnLowBatteryPower ****************************************************
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamUtils_SteamUtilsTypes_h_181_DELEGATE \
STEAMCORE_API void FOnLowBatteryPower_DelegateWrapper(const FMulticastScriptDelegate& OnLowBatteryPower, FLowBatteryPower const& Data);


// ********** End Delegate FOnLowBatteryPower ******************************************************

// ********** Begin Delegate FOnSteamShutdown ******************************************************
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamUtils_SteamUtilsTypes_h_182_DELEGATE \
STEAMCORE_API void FOnSteamShutdown_DelegateWrapper(const FMulticastScriptDelegate& OnSteamShutdown, FSteamShutdown const& Data);


// ********** End Delegate FOnSteamShutdown ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamUtils_SteamUtilsTypes_h

// ********** Begin Enum ESteamTextFilteringContext ************************************************
#define FOREACH_ENUM_ESTEAMTEXTFILTERINGCONTEXT(op) \
	op(ESteamTextFilteringContext::k_ETextFilteringContextUnknown) \
	op(ESteamTextFilteringContext::k_ETextFilteringContextGameContent) \
	op(ESteamTextFilteringContext::k_ETextFilteringContextChat) \
	op(ESteamTextFilteringContext::k_ETextFilteringContextName) 

enum class ESteamTextFilteringContext : uint8;
template<> struct TIsUEnumClass<ESteamTextFilteringContext> { enum { Value = true }; };
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamTextFilteringContext>();
// ********** End Enum ESteamTextFilteringContext **************************************************

// ********** Begin Enum ESteamCheckFileSignature **************************************************
#define FOREACH_ENUM_ESTEAMCHECKFILESIGNATURE(op) \
	op(ESteamCheckFileSignature::InvalidSignature) \
	op(ESteamCheckFileSignature::ValidSignature) \
	op(ESteamCheckFileSignature::FileNotFound) \
	op(ESteamCheckFileSignature::NoSignaturesFoundForThisApp) \
	op(ESteamCheckFileSignature::NoSignaturesFoundForThisFile) 

enum class ESteamCheckFileSignature : uint8;
template<> struct TIsUEnumClass<ESteamCheckFileSignature> { enum { Value = true }; };
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamCheckFileSignature>();
// ********** End Enum ESteamCheckFileSignature ****************************************************

// ********** Begin Enum ESteamGamepadTextInputLineMode ********************************************
#define FOREACH_ENUM_ESTEAMGAMEPADTEXTINPUTLINEMODE(op) \
	op(ESteamGamepadTextInputLineMode::SingleLine) \
	op(ESteamGamepadTextInputLineMode::MultipleLines) 

enum class ESteamGamepadTextInputLineMode : uint8;
template<> struct TIsUEnumClass<ESteamGamepadTextInputLineMode> { enum { Value = true }; };
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamGamepadTextInputLineMode>();
// ********** End Enum ESteamGamepadTextInputLineMode **********************************************

// ********** Begin Enum ESteamGamepadTextInputMode ************************************************
#define FOREACH_ENUM_ESTEAMGAMEPADTEXTINPUTMODE(op) \
	op(ESteamGamepadTextInputMode::Normal) \
	op(ESteamGamepadTextInputMode::Password) 

enum class ESteamGamepadTextInputMode : uint8;
template<> struct TIsUEnumClass<ESteamGamepadTextInputMode> { enum { Value = true }; };
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamGamepadTextInputMode>();
// ********** End Enum ESteamGamepadTextInputMode **************************************************

// ********** Begin Enum ESteamNotificationPosition ************************************************
#define FOREACH_ENUM_ESTEAMNOTIFICATIONPOSITION(op) \
	op(ESteamNotificationPosition::TopLeft) \
	op(ESteamNotificationPosition::TopRight) \
	op(ESteamNotificationPosition::BottomLeft) \
	op(ESteamNotificationPosition::BottomRight) 

enum class ESteamNotificationPosition : uint8;
template<> struct TIsUEnumClass<ESteamNotificationPosition> { enum { Value = true }; };
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamNotificationPosition>();
// ********** End Enum ESteamNotificationPosition **************************************************

// ********** Begin Enum ESteamUniverse ************************************************************
#define FOREACH_ENUM_ESTEAMUNIVERSE(op) \
	op(ESteamUniverse::Invalid) \
	op(ESteamUniverse::Public) \
	op(ESteamUniverse::Beta) \
	op(ESteamUniverse::Internal) \
	op(ESteamUniverse::Dev) \
	op(ESteamUniverse::Max) 

enum class ESteamUniverse : uint8;
template<> struct TIsUEnumClass<ESteamUniverse> { enum { Value = true }; };
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamUniverse>();
// ********** End Enum ESteamUniverse **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
