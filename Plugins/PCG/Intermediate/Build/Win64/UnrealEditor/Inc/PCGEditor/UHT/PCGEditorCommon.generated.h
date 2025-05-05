// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGEditorCommon.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PCGEDITOR_PCGEditorCommon_generated_h
#error "PCGEditorCommon.generated.h already included, missing '#pragma once' in PCGEditorCommon.h"
#endif
#define PCGEDITOR_PCGEditorCommon_generated_h

#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGEditorCommon_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPCGEditorCommonDummyStruct_Statics; \
	PCGEDITOR_API static class UScriptStruct* StaticStruct();


template<> PCGEDITOR_API UScriptStruct* StaticStruct<struct FPCGEditorCommonDummyStruct>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGEditorCommon_h


#define FOREACH_ENUM_EPCGELEMENTTYPE(op) \
	op(EPCGElementType::Native) \
	op(EPCGElementType::Blueprint) \
	op(EPCGElementType::Subgraph) \
	op(EPCGElementType::Settings) \
	op(EPCGElementType::Other) \
	op(EPCGElementType::All) 

enum class EPCGElementType : uint8;
template<> struct TIsUEnumClass<EPCGElementType> { enum { Value = true }; };
template<> PCGEDITOR_API UEnum* StaticEnum<EPCGElementType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
