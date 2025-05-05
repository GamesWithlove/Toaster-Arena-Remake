// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tests/Determinism/PCGDeterminismTestsCommon.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PCG_PCGDeterminismTestsCommon_generated_h
#error "PCGDeterminismTestsCommon.generated.h already included, missing '#pragma once' in PCGDeterminismTestsCommon.h"
#endif
#define PCG_PCGDeterminismTestsCommon_generated_h

#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Tests_Determinism_PCGDeterminismTestsCommon_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDeterminismTestResult_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


template<> PCG_API UScriptStruct* StaticStruct<struct FDeterminismTestResult>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Tests_Determinism_PCGDeterminismTestsCommon_h


#define FOREACH_ENUM_EDETERMINISMLEVEL(op) \
	op(EDeterminismLevel::None) \
	op(EDeterminismLevel::NoDeterminism) \
	op(EDeterminismLevel::Basic) \
	op(EDeterminismLevel::OrderOrthogonal) \
	op(EDeterminismLevel::OrderConsistent) \
	op(EDeterminismLevel::OrderIndependent) \
	op(EDeterminismLevel::Deterministic) 

enum class EDeterminismLevel : uint8;
template<> struct TIsUEnumClass<EDeterminismLevel> { enum { Value = true }; };
template<> PCG_API UEnum* StaticEnum<EDeterminismLevel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
