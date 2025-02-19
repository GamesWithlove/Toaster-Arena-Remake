// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGDebug.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PCG_PCGDebug_generated_h
#error "PCGDebug.generated.h already included, missing '#pragma once' in PCGDebug.h"
#endif
#define PCG_PCGDebug_generated_h

#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGDebug_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPCGDebugVisualizationSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PCG_API UScriptStruct* StaticStruct<struct FPCGDebugVisualizationSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGDebug_h


#define FOREACH_ENUM_EPCGDEBUGVISSCALEMETHOD(op) \
	op(EPCGDebugVisScaleMethod::Relative) \
	op(EPCGDebugVisScaleMethod::Absolute) \
	op(EPCGDebugVisScaleMethod::Extents) 

enum class EPCGDebugVisScaleMethod : uint8;
template<> struct TIsUEnumClass<EPCGDebugVisScaleMethod> { enum { Value = true }; };
template<> PCG_API UEnum* StaticEnum<EPCGDebugVisScaleMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
