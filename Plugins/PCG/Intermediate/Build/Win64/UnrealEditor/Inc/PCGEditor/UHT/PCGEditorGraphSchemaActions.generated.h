// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGEditorGraphSchemaActions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PCGEDITOR_PCGEditorGraphSchemaActions_generated_h
#error "PCGEditorGraphSchemaActions.generated.h already included, missing '#pragma once' in PCGEditorGraphSchemaActions.h"
#endif
#define PCGEDITOR_PCGEditorGraphSchemaActions_generated_h

#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGEditorGraphSchemaActions_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewNativeElement_Statics; \
	PCGEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


template<> PCGEDITOR_API UScriptStruct* StaticStruct<struct FPCGEditorGraphSchemaAction_NewNativeElement>();

#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGEditorGraphSchemaActions_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewGetParameterElement_Statics; \
	PCGEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FPCGEditorGraphSchemaAction_NewNativeElement Super;


template<> PCGEDITOR_API UScriptStruct* StaticStruct<struct FPCGEditorGraphSchemaAction_NewGetParameterElement>();

#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGEditorGraphSchemaActions_h_73_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewSettingsElement_Statics; \
	PCGEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


template<> PCGEDITOR_API UScriptStruct* StaticStruct<struct FPCGEditorGraphSchemaAction_NewSettingsElement>();

#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGEditorGraphSchemaActions_h_104_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewBlueprintElement_Statics; \
	PCGEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


template<> PCGEDITOR_API UScriptStruct* StaticStruct<struct FPCGEditorGraphSchemaAction_NewBlueprintElement>();

#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGEditorGraphSchemaActions_h_128_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewSubgraphElement_Statics; \
	PCGEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


template<> PCGEDITOR_API UScriptStruct* StaticStruct<struct FPCGEditorGraphSchemaAction_NewSubgraphElement>();

#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGEditorGraphSchemaActions_h_153_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewComment_Statics; \
	PCGEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


template<> PCGEDITOR_API UScriptStruct* StaticStruct<struct FPCGEditorGraphSchemaAction_NewComment>();

#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGEditorGraphSchemaActions_h_174_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPCGEditorGraphSchemaAction_NewReroute_Statics; \
	PCGEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


template<> PCGEDITOR_API UScriptStruct* StaticStruct<struct FPCGEditorGraphSchemaAction_NewReroute>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGEditorGraphSchemaActions_h


#define FOREACH_ENUM_EPCGEDITORNEWSETTINGSBEHAVIOR(op) \
	op(EPCGEditorNewSettingsBehavior::Normal) \
	op(EPCGEditorNewSettingsBehavior::ForceCopy) \
	op(EPCGEditorNewSettingsBehavior::ForceInstance) 

enum class EPCGEditorNewSettingsBehavior : uint8;
template<> struct TIsUEnumClass<EPCGEditorNewSettingsBehavior> { enum { Value = true }; };
template<> PCGEDITOR_API UEnum* StaticEnum<EPCGEditorNewSettingsBehavior>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
