// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RealtimeMeshSpatialStreamingSource.h"

#ifdef REALTIMEMESHSPATIAL_RealtimeMeshSpatialStreamingSource_generated_h
#error "RealtimeMeshSpatialStreamingSource.generated.h already included, missing '#pragma once' in RealtimeMeshSpatialStreamingSource.h"
#endif
#define REALTIMEMESHSPATIAL_RealtimeMeshSpatialStreamingSource_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshSpatial_Public_RealtimeMeshSpatialStreamingSource_h

// ********** Begin Enum ERealtimeMeshStreamingSourcePriority **************************************
#define FOREACH_ENUM_EREALTIMEMESHSTREAMINGSOURCEPRIORITY(op) \
	op(ERealtimeMeshStreamingSourcePriority::Highest) \
	op(ERealtimeMeshStreamingSourcePriority::High) \
	op(ERealtimeMeshStreamingSourcePriority::Normal) \
	op(ERealtimeMeshStreamingSourcePriority::Low) \
	op(ERealtimeMeshStreamingSourcePriority::Lowest) \
	op(ERealtimeMeshStreamingSourcePriority::Default) 

enum class ERealtimeMeshStreamingSourcePriority : uint8;
template<> struct TIsUEnumClass<ERealtimeMeshStreamingSourcePriority> { enum { Value = true }; };
template<> REALTIMEMESHSPATIAL_NON_ATTRIBUTED_API UEnum* StaticEnum<ERealtimeMeshStreamingSourcePriority>();
// ********** End Enum ERealtimeMeshStreamingSourcePriority ****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
