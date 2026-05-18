// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Expandedpc.h"

#ifdef CONPLUGIN_Expandedpc_generated_h
#error "Expandedpc.generated.h already included, missing '#pragma once' in Expandedpc.h"
#endif
#define CONPLUGIN_Expandedpc_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AExpandedpc **************************************************************
#define FID_Toaster_Arena_Remake_5_7_Plugins_conplugin_Source_conplugin_Public_Expandedpc_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientUpdateWorldTime_Implementation(float ClientTimestamp, float ServerTimestamp); \
	virtual void ServerRequestWorldTime_Implementation(float ClientTimestamp); \
	virtual void PawnLeavingGame_Implementation(); \
	DECLARE_FUNCTION(execClientUpdateWorldTime); \
	DECLARE_FUNCTION(execServerRequestWorldTime); \
	DECLARE_FUNCTION(execGetServerWorldTime); \
	DECLARE_FUNCTION(execGetServerWorldTimeDelta); \
	DECLARE_FUNCTION(execPawnLeavingGame);


#define FID_Toaster_Arena_Remake_5_7_Plugins_conplugin_Source_conplugin_Public_Expandedpc_h_15_CALLBACK_WRAPPERS
struct Z_Construct_UClass_AExpandedpc_Statics;
CONPLUGIN_API UClass* Z_Construct_UClass_AExpandedpc_NoRegister();

#define FID_Toaster_Arena_Remake_5_7_Plugins_conplugin_Source_conplugin_Public_Expandedpc_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAExpandedpc(); \
	friend struct ::Z_Construct_UClass_AExpandedpc_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONPLUGIN_API UClass* ::Z_Construct_UClass_AExpandedpc_NoRegister(); \
public: \
	DECLARE_CLASS2(AExpandedpc, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/conplugin"), Z_Construct_UClass_AExpandedpc_NoRegister) \
	DECLARE_SERIALIZER(AExpandedpc)


#define FID_Toaster_Arena_Remake_5_7_Plugins_conplugin_Source_conplugin_Public_Expandedpc_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AExpandedpc(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AExpandedpc(AExpandedpc&&) = delete; \
	AExpandedpc(const AExpandedpc&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExpandedpc); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExpandedpc); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AExpandedpc) \
	NO_API virtual ~AExpandedpc();


#define FID_Toaster_Arena_Remake_5_7_Plugins_conplugin_Source_conplugin_Public_Expandedpc_h_12_PROLOG
#define FID_Toaster_Arena_Remake_5_7_Plugins_conplugin_Source_conplugin_Public_Expandedpc_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_5_7_Plugins_conplugin_Source_conplugin_Public_Expandedpc_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_5_7_Plugins_conplugin_Source_conplugin_Public_Expandedpc_h_15_CALLBACK_WRAPPERS \
	FID_Toaster_Arena_Remake_5_7_Plugins_conplugin_Source_conplugin_Public_Expandedpc_h_15_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_5_7_Plugins_conplugin_Source_conplugin_Public_Expandedpc_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AExpandedpc;

// ********** End Class AExpandedpc ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_5_7_Plugins_conplugin_Source_conplugin_Public_Expandedpc_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
