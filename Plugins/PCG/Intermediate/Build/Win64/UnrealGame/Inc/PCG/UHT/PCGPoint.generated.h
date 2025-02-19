// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGPoint.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PCG_PCGPoint_generated_h
#error "PCGPoint.generated.h already included, missing '#pragma once' in PCGPoint.h"
#endif
#define PCG_PCGPoint_generated_h

#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGPoint_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPCGPoint_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PCG_API UScriptStruct* StaticStruct<struct FPCGPoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGPoint_h


#define FOREACH_ENUM_EPCGPOINTPROPERTIES(op) \
	op(EPCGPointProperties::Density) \
	op(EPCGPointProperties::BoundsMin) \
	op(EPCGPointProperties::BoundsMax) \
	op(EPCGPointProperties::Extents) \
	op(EPCGPointProperties::Color) \
	op(EPCGPointProperties::Position) \
	op(EPCGPointProperties::Rotation) \
	op(EPCGPointProperties::Scale) \
	op(EPCGPointProperties::Transform) \
	op(EPCGPointProperties::Steepness) \
	op(EPCGPointProperties::LocalCenter) 

enum class EPCGPointProperties : uint8;
template<> struct TIsUEnumClass<EPCGPointProperties> { enum { Value = true }; };
template<> PCG_API UEnum* StaticEnum<EPCGPointProperties>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
