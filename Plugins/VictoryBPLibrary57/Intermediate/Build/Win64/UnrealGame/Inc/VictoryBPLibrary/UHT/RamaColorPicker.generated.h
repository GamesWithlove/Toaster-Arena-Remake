// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RamaColorPicker.h"

#ifdef VICTORYBPLIBRARY_RamaColorPicker_generated_h
#error "RamaColorPicker.generated.h already included, missing '#pragma once' in RamaColorPicker.h"
#endif
#define VICTORYBPLIBRARY_RamaColorPicker_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;

// ********** Begin Delegate FOnJoyColorChangedEvent ***********************************************
#define FID_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_RamaColorPicker_h_14_DELEGATE \
VICTORYBPLIBRARY_API void FOnJoyColorChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnJoyColorChangedEvent, FLinearColor const& NewColor);


// ********** End Delegate FOnJoyColorChangedEvent *************************************************

// ********** Begin Class URamaColorPicker *********************************************************
#define FID_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_RamaColorPicker_h_22_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetJoyColor);


struct Z_Construct_UClass_URamaColorPicker_Statics;
VICTORYBPLIBRARY_API UClass* Z_Construct_UClass_URamaColorPicker_NoRegister();

#define FID_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_RamaColorPicker_h_22_INCLASS \
private: \
	static void StaticRegisterNativesURamaColorPicker(); \
	friend struct ::Z_Construct_UClass_URamaColorPicker_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VICTORYBPLIBRARY_API UClass* ::Z_Construct_UClass_URamaColorPicker_NoRegister(); \
public: \
	DECLARE_CLASS2(URamaColorPicker, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VictoryBPLibrary"), Z_Construct_UClass_URamaColorPicker_NoRegister) \
	DECLARE_SERIALIZER(URamaColorPicker)


#define FID_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_RamaColorPicker_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URamaColorPicker(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URamaColorPicker) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URamaColorPicker); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URamaColorPicker); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URamaColorPicker(URamaColorPicker&&) = delete; \
	URamaColorPicker(const URamaColorPicker&) = delete; \
	NO_API virtual ~URamaColorPicker();


#define FID_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_RamaColorPicker_h_19_PROLOG
#define FID_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_RamaColorPicker_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_RamaColorPicker_h_22_RPC_WRAPPERS \
	FID_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_RamaColorPicker_h_22_INCLASS \
	FID_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_RamaColorPicker_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URamaColorPicker;

// ********** End Class URamaColorPicker ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_RamaColorPicker_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
