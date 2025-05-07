// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Classes/ELowEntryImageFormat.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LOWENTRYEXTENDEDSTANDARDLIBRARY_ELowEntryImageFormat_generated_h
#error "ELowEntryImageFormat.generated.h already included, missing '#pragma once' in ELowEntryImageFormat.h"
#endif
#define LOWENTRYEXTENDEDSTANDARDLIBRARY_ELowEntryImageFormat_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_ELowEntryImageFormat_h


#define FOREACH_ENUM_ELOWENTRYIMAGEFORMAT(op) \
	op(ELowEntryImageFormat::Invalid) \
	op(ELowEntryImageFormat::PNG) \
	op(ELowEntryImageFormat::JPEG) \
	op(ELowEntryImageFormat::GrayscaleJPEG) \
	op(ELowEntryImageFormat::BMP) \
	op(ELowEntryImageFormat::ICO) \
	op(ELowEntryImageFormat::EXR) \
	op(ELowEntryImageFormat::ICNS) 

enum class ELowEntryImageFormat : uint8;
template<> struct TIsUEnumClass<ELowEntryImageFormat> { enum { Value = true }; };
template<> LOWENTRYEXTENDEDSTANDARDLIBRARY_API UEnum* StaticEnum<ELowEntryImageFormat>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
