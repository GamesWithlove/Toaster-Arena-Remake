// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Classes/ELowEntryHmacAlgorithm.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LOWENTRYEXTENDEDSTANDARDLIBRARY_ELowEntryHmacAlgorithm_generated_h
#error "ELowEntryHmacAlgorithm.generated.h already included, missing '#pragma once' in ELowEntryHmacAlgorithm.h"
#endif
#define LOWENTRYEXTENDEDSTANDARDLIBRARY_ELowEntryHmacAlgorithm_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_ELowEntryHmacAlgorithm_h


#define FOREACH_ENUM_ELOWENTRYHMACALGORITHM(op) \
	op(ELowEntryHmacAlgorithm::MD5) \
	op(ELowEntryHmacAlgorithm::SHA1) \
	op(ELowEntryHmacAlgorithm::SHA256) \
	op(ELowEntryHmacAlgorithm::SHA512) 

enum class ELowEntryHmacAlgorithm : uint8;
template<> struct TIsUEnumClass<ELowEntryHmacAlgorithm> { enum { Value = true }; };
template<> LOWENTRYEXTENDEDSTANDARDLIBRARY_API UEnum* StaticEnum<ELowEntryHmacAlgorithm>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
