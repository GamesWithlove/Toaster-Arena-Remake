// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Classes/ELowEntrySplitScreenType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LOWENTRYEXTENDEDSTANDARDLIBRARY_ELowEntrySplitScreenType_generated_h
#error "ELowEntrySplitScreenType.generated.h already included, missing '#pragma once' in ELowEntrySplitScreenType.h"
#endif
#define LOWENTRYEXTENDEDSTANDARDLIBRARY_ELowEntrySplitScreenType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_ELowEntrySplitScreenType_h


#define FOREACH_ENUM_ELOWENTRYSPLITSCREENTYPE(op) \
	op(ELowEntrySplitScreenType::None) \
	op(ELowEntrySplitScreenType::TwoPlayer_Horizontal) \
	op(ELowEntrySplitScreenType::TwoPlayer_Vertical) \
	op(ELowEntrySplitScreenType::ThreePlayer_FavorTop) \
	op(ELowEntrySplitScreenType::ThreePlayer_FavorBottom) \
	op(ELowEntrySplitScreenType::ThreePlayer_Vertical) \
	op(ELowEntrySplitScreenType::FourPlayer_Grid) \
	op(ELowEntrySplitScreenType::FourPlayer_Vertical) 

enum class ELowEntrySplitScreenType : uint8;
template<> struct TIsUEnumClass<ELowEntrySplitScreenType> { enum { Value = true }; };
template<> LOWENTRYEXTENDEDSTANDARDLIBRARY_API UEnum* StaticEnum<ELowEntrySplitScreenType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
