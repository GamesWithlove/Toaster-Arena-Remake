// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGCommon.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PCG_PCGCommon_generated_h
#error "PCGCommon.generated.h already included, missing '#pragma once' in PCGCommon.h"
#endif
#define PCG_PCGCommon_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGCommon_h


#define FOREACH_ENUM_EPCGCHANGETYPE(op) \
	op(EPCGChangeType::None) \
	op(EPCGChangeType::Cosmetic) \
	op(EPCGChangeType::Settings) \
	op(EPCGChangeType::Input) \
	op(EPCGChangeType::Edge) \
	op(EPCGChangeType::Node) \
	op(EPCGChangeType::Structural) 

enum class EPCGChangeType : uint8;
template<> struct TIsUEnumClass<EPCGChangeType> { enum { Value = true }; };
template<> PCG_API UEnum* StaticEnum<EPCGChangeType>();

#define FOREACH_ENUM_EPCGDATATYPE(op) \
	op(EPCGDataType::None) \
	op(EPCGDataType::Point) \
	op(EPCGDataType::Spline) \
	op(EPCGDataType::LandscapeSpline) \
	op(EPCGDataType::PolyLine) \
	op(EPCGDataType::Landscape) \
	op(EPCGDataType::Texture) \
	op(EPCGDataType::RenderTarget) \
	op(EPCGDataType::BaseTexture) \
	op(EPCGDataType::Surface) \
	op(EPCGDataType::Volume) \
	op(EPCGDataType::Primitive) \
	op(EPCGDataType::Concrete) \
	op(EPCGDataType::Composite) \
	op(EPCGDataType::Spatial) \
	op(EPCGDataType::Param) \
	op(EPCGDataType::Settings) \
	op(EPCGDataType::Other) \
	op(EPCGDataType::Any) 

enum class EPCGDataType : uint32;
template<> struct TIsUEnumClass<EPCGDataType> { enum { Value = true }; };
template<> PCG_API UEnum* StaticEnum<EPCGDataType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
