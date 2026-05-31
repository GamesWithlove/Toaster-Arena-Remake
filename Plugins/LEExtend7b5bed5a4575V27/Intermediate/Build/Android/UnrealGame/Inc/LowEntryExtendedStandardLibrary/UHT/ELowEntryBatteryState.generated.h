// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Classes/ELowEntryBatteryState.h"

#ifdef LOWENTRYEXTENDEDSTANDARDLIBRARY_ELowEntryBatteryState_generated_h
#error "ELowEntryBatteryState.generated.h already included, missing '#pragma once' in ELowEntryBatteryState.h"
#endif
#define LOWENTRYEXTENDEDSTANDARDLIBRARY_ELowEntryBatteryState_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_ELowEntryBatteryState_h

// ********** Begin Enum ELowEntryBatteryState *****************************************************
#define FOREACH_ENUM_ELOWENTRYBATTERYSTATE(op) \
	op(ELowEntryBatteryState::Charging) \
	op(ELowEntryBatteryState::Discharging) \
	op(ELowEntryBatteryState::Full) \
	op(ELowEntryBatteryState::NotCharging) \
	op(ELowEntryBatteryState::Unknown) 

enum class ELowEntryBatteryState : uint8;
template<> struct TIsUEnumClass<ELowEntryBatteryState> { enum { Value = true }; };
template<> LOWENTRYEXTENDEDSTANDARDLIBRARY_NON_ATTRIBUTED_API UEnum* StaticEnum<ELowEntryBatteryState>();
// ********** End Enum ELowEntryBatteryState *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
