// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RealtimeMeshSimple.h"

#ifdef REALTIMEMESHCOMPONENT_RealtimeMeshSimple_generated_h
#error "RealtimeMeshSimple.generated.h already included, missing '#pragma once' in RealtimeMeshSimple.h"
#endif
#define REALTIMEMESHCOMPONENT_RealtimeMeshSimple_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URealtimeMeshComponent;
class URealtimeMeshSimple;
class URealtimeMeshStreamSet;
enum class ERealtimeMeshCollisionUpdateResult : uint8;
enum class ERealtimeMeshProxyUpdateStatus : uint8;
struct FRealtimeMeshCardRepresentation;
struct FRealtimeMeshCollisionConfiguration;
struct FRealtimeMeshDistanceField;
struct FRealtimeMeshLODKey;
struct FRealtimeMeshSectionConfig;
struct FRealtimeMeshSectionGroupKey;
struct FRealtimeMeshSectionKey;
struct FRealtimeMeshSimpleGeometry;
struct FRealtimeMeshStreamRange;

// ********** Begin Delegate FRealtimeMeshSimpleCompletionCallback *********************************
#define FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshComponent_Public_RealtimeMeshSimple_h_365_DELEGATE \
REALTIMEMESHCOMPONENT_API void FRealtimeMeshSimpleCompletionCallback_DelegateWrapper(const FScriptDelegate& RealtimeMeshSimpleCompletionCallback, ERealtimeMeshProxyUpdateStatus ProxyUpdateResult);


// ********** End Delegate FRealtimeMeshSimpleCompletionCallback ***********************************

// ********** Begin Delegate FRealtimeMeshSimpleCollisionCompletionCallback ************************
#define FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshComponent_Public_RealtimeMeshSimple_h_367_DELEGATE \
REALTIMEMESHCOMPONENT_API void FRealtimeMeshSimpleCollisionCompletionCallback_DelegateWrapper(const FScriptDelegate& RealtimeMeshSimpleCollisionCompletionCallback, ERealtimeMeshCollisionUpdateResult CollisionResult);


// ********** End Delegate FRealtimeMeshSimpleCollisionCompletionCallback **************************

// ********** Begin Class URealtimeMeshSimple ******************************************************
#define FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshComponent_Public_RealtimeMeshSimple_h_373_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetSimpleGeometry); \
	DECLARE_FUNCTION(execGetSimpleGeometry); \
	DECLARE_FUNCTION(execSetCollisionConfig); \
	DECLARE_FUNCTION(execGetCollisionConfig); \
	DECLARE_FUNCTION(execSetCardRepresentation); \
	DECLARE_FUNCTION(execSetDistanceField); \
	DECLARE_FUNCTION(execSetSectionCastShadow); \
	DECLARE_FUNCTION(execIsSectionCastingShadow); \
	DECLARE_FUNCTION(execSetSectionVisibility); \
	DECLARE_FUNCTION(execIsSectionVisible); \
	DECLARE_FUNCTION(execGetSectionConfig); \
	DECLARE_FUNCTION(execShouldAutoCreateSectionsForPolygonGroups); \
	DECLARE_FUNCTION(execSetShouldAutoCreateSectionsForPolyGroups); \
	DECLARE_FUNCTION(execRemoveSectionGroup); \
	DECLARE_FUNCTION(execRemoveSection); \
	DECLARE_FUNCTION(execGetSectionsInGroup); \
	DECLARE_FUNCTION(execUpdateSectionConfig); \
	DECLARE_FUNCTION(execCreateSection); \
	DECLARE_FUNCTION(execUpdateSectionGroup); \
	DECLARE_FUNCTION(execCreateSectionGroupUnique); \
	DECLARE_FUNCTION(execCreateSectionGroup); \
	DECLARE_FUNCTION(execInitializeRealtimeMeshSimple);


struct Z_Construct_UClass_URealtimeMeshSimple_Statics;
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMeshSimple_NoRegister();

#define FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshComponent_Public_RealtimeMeshSimple_h_373_INCLASS \
private: \
	static void StaticRegisterNativesURealtimeMeshSimple(); \
	friend struct ::Z_Construct_UClass_URealtimeMeshSimple_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REALTIMEMESHCOMPONENT_API UClass* ::Z_Construct_UClass_URealtimeMeshSimple_NoRegister(); \
public: \
	DECLARE_CLASS2(URealtimeMeshSimple, URealtimeMesh, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RealtimeMeshComponent"), Z_Construct_UClass_URealtimeMeshSimple_NoRegister) \
	DECLARE_SERIALIZER(URealtimeMeshSimple)


#define FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshComponent_Public_RealtimeMeshSimple_h_373_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URealtimeMeshSimple(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URealtimeMeshSimple) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URealtimeMeshSimple); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URealtimeMeshSimple); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URealtimeMeshSimple(URealtimeMeshSimple&&) = delete; \
	URealtimeMeshSimple(const URealtimeMeshSimple&) = delete; \
	NO_API virtual ~URealtimeMeshSimple();


#define FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshComponent_Public_RealtimeMeshSimple_h_370_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshComponent_Public_RealtimeMeshSimple_h_373_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshComponent_Public_RealtimeMeshSimple_h_373_RPC_WRAPPERS \
	FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshComponent_Public_RealtimeMeshSimple_h_373_INCLASS \
	FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshComponent_Public_RealtimeMeshSimple_h_373_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URealtimeMeshSimple;

// ********** End Class URealtimeMeshSimple ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshComponent_Public_RealtimeMeshSimple_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
