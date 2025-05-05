// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGActorSelector.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PCG_PCGActorSelector_generated_h
#error "PCGActorSelector.generated.h already included, missing '#pragma once' in PCGActorSelector.h"
#endif
#define PCG_PCGActorSelector_generated_h

#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGActorSelector_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


template<> PCG_API UScriptStruct* StaticStruct<struct FPCGActorSelectorSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGActorSelector_h


#define FOREACH_ENUM_EPCGACTORSELECTION(op) \
	op(EPCGActorSelection::ByTag) \
	op(EPCGActorSelection::ByName) \
	op(EPCGActorSelection::ByClass) 

enum class EPCGActorSelection : uint8;
template<> struct TIsUEnumClass<EPCGActorSelection> { enum { Value = true }; };
template<> PCG_API UEnum* StaticEnum<EPCGActorSelection>();

#define FOREACH_ENUM_EPCGACTORFILTER(op) \
	op(EPCGActorFilter::Self) \
	op(EPCGActorFilter::Parent) \
	op(EPCGActorFilter::Root) \
	op(EPCGActorFilter::AllWorldActors) \
	op(EPCGActorFilter::Original) 

enum class EPCGActorFilter : uint8;
template<> struct TIsUEnumClass<EPCGActorFilter> { enum { Value = true }; };
template<> PCG_API UEnum* StaticEnum<EPCGActorFilter>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
