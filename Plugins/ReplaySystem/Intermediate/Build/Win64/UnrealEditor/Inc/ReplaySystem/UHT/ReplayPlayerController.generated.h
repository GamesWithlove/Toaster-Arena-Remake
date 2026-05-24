// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ReplayPlayerController.h"

#ifdef REPLAYSYSTEM_ReplayPlayerController_generated_h
#error "ReplayPlayerController.generated.h already included, missing '#pragma once' in ReplayPlayerController.h"
#endif
#define REPLAYSYSTEM_ReplayPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;

// ********** Begin Class AReplayPlayerController **************************************************
#define FID_Toaster_Arena_Remake_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplayPlayerController_h_16_CALLBACK_WRAPPERS
struct Z_Construct_UClass_AReplayPlayerController_Statics;
REPLAYSYSTEM_API UClass* Z_Construct_UClass_AReplayPlayerController_NoRegister();

#define FID_Toaster_Arena_Remake_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplayPlayerController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAReplayPlayerController(); \
	friend struct ::Z_Construct_UClass_AReplayPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REPLAYSYSTEM_API UClass* ::Z_Construct_UClass_AReplayPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AReplayPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ReplaySystem"), Z_Construct_UClass_AReplayPlayerController_NoRegister) \
	DECLARE_SERIALIZER(AReplayPlayerController)


#define FID_Toaster_Arena_Remake_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplayPlayerController_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AReplayPlayerController(AReplayPlayerController&&) = delete; \
	AReplayPlayerController(const AReplayPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AReplayPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AReplayPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AReplayPlayerController) \
	NO_API virtual ~AReplayPlayerController();


#define FID_Toaster_Arena_Remake_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplayPlayerController_h_13_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplayPlayerController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplayPlayerController_h_16_CALLBACK_WRAPPERS \
	FID_Toaster_Arena_Remake_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplayPlayerController_h_16_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplayPlayerController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AReplayPlayerController;

// ********** End Class AReplayPlayerController ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplayPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
