// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Metadata/PCGMetadataAttributeTraits.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PCG_PCGMetadataAttributeTraits_generated_h
#error "PCGMetadataAttributeTraits.generated.h already included, missing '#pragma once' in PCGMetadataAttributeTraits.h"
#endif
#define PCG_PCGMetadataAttributeTraits_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadataAttributeTraits_h


#define FOREACH_ENUM_EPCGMETADATATYPES(op) \
	op(EPCGMetadataTypes::Float) \
	op(EPCGMetadataTypes::Double) \
	op(EPCGMetadataTypes::Integer32) \
	op(EPCGMetadataTypes::Integer64) \
	op(EPCGMetadataTypes::Vector2) \
	op(EPCGMetadataTypes::Vector) \
	op(EPCGMetadataTypes::Vector4) \
	op(EPCGMetadataTypes::Quaternion) \
	op(EPCGMetadataTypes::Transform) \
	op(EPCGMetadataTypes::String) \
	op(EPCGMetadataTypes::Boolean) \
	op(EPCGMetadataTypes::Rotator) \
	op(EPCGMetadataTypes::Name) \
	op(EPCGMetadataTypes::Count) \
	op(EPCGMetadataTypes::Unknown) 

enum class EPCGMetadataTypes : uint8;
template<> struct TIsUEnumClass<EPCGMetadataTypes> { enum { Value = true }; };
template<> PCG_API UEnum* StaticEnum<EPCGMetadataTypes>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
