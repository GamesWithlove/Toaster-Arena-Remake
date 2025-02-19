// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Metadata/PCGMetadataCommon.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PCG_PCGMetadataCommon_generated_h
#error "PCGMetadataCommon.generated.h already included, missing '#pragma once' in PCGMetadataCommon.h"
#endif
#define PCG_PCGMetadataCommon_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadataCommon_h


#define FOREACH_ENUM_EPCGMETADATAOP(op) \
	op(EPCGMetadataOp::Min) \
	op(EPCGMetadataOp::Max) \
	op(EPCGMetadataOp::Sub) \
	op(EPCGMetadataOp::Add) \
	op(EPCGMetadataOp::Mul) \
	op(EPCGMetadataOp::Div) \
	op(EPCGMetadataOp::SourceValue) \
	op(EPCGMetadataOp::TargetValue) 

enum class EPCGMetadataOp : uint8;
template<> struct TIsUEnumClass<EPCGMetadataOp> { enum { Value = true }; };
template<> PCG_API UEnum* StaticEnum<EPCGMetadataOp>();

#define FOREACH_ENUM_EPCGMETADATAFILTERMODE(op) \
	op(EPCGMetadataFilterMode::ExcludeAttributes) \
	op(EPCGMetadataFilterMode::IncludeAttributes) 

enum class EPCGMetadataFilterMode : uint8;
template<> struct TIsUEnumClass<EPCGMetadataFilterMode> { enum { Value = true }; };
template<> PCG_API UEnum* StaticEnum<EPCGMetadataFilterMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
