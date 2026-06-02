// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RealtimeMeshNoExportTypes.h"

#ifdef REALTIMEMESHCOMPONENT_RealtimeMeshNoExportTypes_generated_h
#error "RealtimeMeshNoExportTypes.generated.h already included, missing '#pragma once' in RealtimeMeshNoExportTypes.h"
#endif
#define REALTIMEMESHCOMPONENT_RealtimeMeshNoExportTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshComponent_Public_RealtimeMeshNoExportTypes_h

// ********** Begin Enum ERealtimeMeshProxyUpdateStatus ********************************************
#define FOREACH_ENUM_EREALTIMEMESHPROXYUPDATESTATUS(op) \
	op(ERealtimeMeshProxyUpdateStatus::NoProxy) \
	op(ERealtimeMeshProxyUpdateStatus::NoUpdate) \
	op(ERealtimeMeshProxyUpdateStatus::Updated) 

enum class ERealtimeMeshProxyUpdateStatus : uint8;
template<> struct TIsUEnumClass<ERealtimeMeshProxyUpdateStatus> { enum { Value = true }; };
template<> REALTIMEMESHCOMPONENT_NON_ATTRIBUTED_API UEnum* StaticEnum<ERealtimeMeshProxyUpdateStatus>();
// ********** End Enum ERealtimeMeshProxyUpdateStatus **********************************************

// ********** Begin Enum ERealtimeMeshOutcomePins **************************************************
#define FOREACH_ENUM_EREALTIMEMESHOUTCOMEPINS(op) \
	op(ERealtimeMeshOutcomePins::Failure) \
	op(ERealtimeMeshOutcomePins::Success) 

enum class ERealtimeMeshOutcomePins : uint8;
template<> struct TIsUEnumClass<ERealtimeMeshOutcomePins> { enum { Value = true }; };
template<> REALTIMEMESHCOMPONENT_NON_ATTRIBUTED_API UEnum* StaticEnum<ERealtimeMeshOutcomePins>();
// ********** End Enum ERealtimeMeshOutcomePins ****************************************************

// ********** Begin Enum ERealtimeMeshSectionDrawType **********************************************
#define FOREACH_ENUM_EREALTIMEMESHSECTIONDRAWTYPE(op) \
	op(ERealtimeMeshSectionDrawType::Static) \
	op(ERealtimeMeshSectionDrawType::Dynamic) 

enum class ERealtimeMeshSectionDrawType : uint8;
template<> struct TIsUEnumClass<ERealtimeMeshSectionDrawType> { enum { Value = true }; };
template<> REALTIMEMESHCOMPONENT_NON_ATTRIBUTED_API UEnum* StaticEnum<ERealtimeMeshSectionDrawType>();
// ********** End Enum ERealtimeMeshSectionDrawType ************************************************

// ********** Begin Enum ERealtimeMeshStreamType ***************************************************
#define FOREACH_ENUM_EREALTIMEMESHSTREAMTYPE(op) \
	op(ERealtimeMeshStreamType::Unknown) \
	op(ERealtimeMeshStreamType::Vertex) \
	op(ERealtimeMeshStreamType::Index) 

enum class ERealtimeMeshStreamType : uint8;
template<> struct TIsUEnumClass<ERealtimeMeshStreamType> { enum { Value = true }; };
template<> REALTIMEMESHCOMPONENT_NON_ATTRIBUTED_API UEnum* StaticEnum<ERealtimeMeshStreamType>();
// ********** End Enum ERealtimeMeshStreamType *****************************************************

// ********** Begin Enum ERealtimeMeshCollisionUpdateResult ****************************************
#define FOREACH_ENUM_EREALTIMEMESHCOLLISIONUPDATERESULT(op) \
	op(ERealtimeMeshCollisionUpdateResult::Unknown) \
	op(ERealtimeMeshCollisionUpdateResult::Updated) \
	op(ERealtimeMeshCollisionUpdateResult::Ignored) \
	op(ERealtimeMeshCollisionUpdateResult::Error) 

enum class ERealtimeMeshCollisionUpdateResult : uint8;
template<> struct TIsUEnumClass<ERealtimeMeshCollisionUpdateResult> { enum { Value = true }; };
template<> REALTIMEMESHCOMPONENT_NON_ATTRIBUTED_API UEnum* StaticEnum<ERealtimeMeshCollisionUpdateResult>();
// ********** End Enum ERealtimeMeshCollisionUpdateResult ******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
