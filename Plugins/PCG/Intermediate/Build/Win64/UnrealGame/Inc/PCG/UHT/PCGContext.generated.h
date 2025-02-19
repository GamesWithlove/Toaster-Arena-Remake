// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGContext.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PCG_PCGContext_generated_h
#error "PCGContext.generated.h already included, missing '#pragma once' in PCGContext.h"
#endif
#define PCG_PCGContext_generated_h

#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGContext_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPCGContext_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PCG_API UScriptStruct* StaticStruct<struct FPCGContext>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGContext_h


#define FOREACH_ENUM_EPCGEXECUTIONPHASE(op) \
	op(EPCGExecutionPhase::NotExecuted) \
	op(EPCGExecutionPhase::PrepareData) \
	op(EPCGExecutionPhase::Execute) \
	op(EPCGExecutionPhase::PostExecute) \
	op(EPCGExecutionPhase::Done) 

enum class EPCGExecutionPhase : uint8;
template<> struct TIsUEnumClass<EPCGExecutionPhase> { enum { Value = true }; };
template<> PCG_API UEnum* StaticEnum<EPCGExecutionPhase>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
