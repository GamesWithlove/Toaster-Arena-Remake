// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Classes/ELowEntryRGBFormat.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LOWENTRYEXTENDEDSTANDARDLIBRARY_ELowEntryRGBFormat_generated_h
#error "ELowEntryRGBFormat.generated.h already included, missing '#pragma once' in ELowEntryRGBFormat.h"
#endif
#define LOWENTRYEXTENDEDSTANDARDLIBRARY_ELowEntryRGBFormat_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_ELowEntryRGBFormat_h


#define FOREACH_ENUM_ELOWENTRYRGBFORMAT(op) \
	op(ELowEntryRGBFormat::Invalid) \
	op(ELowEntryRGBFormat::RGBA) \
	op(ELowEntryRGBFormat::BGRA) \
	op(ELowEntryRGBFormat::Gray) 

enum class ELowEntryRGBFormat : uint8;
template<> struct TIsUEnumClass<ELowEntryRGBFormat> { enum { Value = true }; };
template<> LOWENTRYEXTENDEDSTANDARDLIBRARY_API UEnum* StaticEnum<ELowEntryRGBFormat>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
