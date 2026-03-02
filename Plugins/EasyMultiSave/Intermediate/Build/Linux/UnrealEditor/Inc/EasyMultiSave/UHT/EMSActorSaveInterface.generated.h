// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EMSActorSaveInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UActorComponent;
#ifdef EASYMULTISAVE_EMSActorSaveInterface_generated_h
#error "EMSActorSaveInterface.generated.h already included, missing '#pragma once' in EMSActorSaveInterface.h"
#endif
#define EASYMULTISAVE_EMSActorSaveInterface_generated_h

#define FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSActorSaveInterface_h_14_SPARSE_DATA
#define FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSActorSaveInterface_h_14_RPC_WRAPPERS \
	virtual void ComponentsToSave_Implementation(TArray<UActorComponent*>& Components) {}; \
	virtual void ActorPreSave_Implementation() {}; \
	virtual void ActorSaved_Implementation() {}; \
	virtual void ActorLoaded_Implementation() {}; \
 \
	DECLARE_FUNCTION(execComponentsToSave); \
	DECLARE_FUNCTION(execActorPreSave); \
	DECLARE_FUNCTION(execActorSaved); \
	DECLARE_FUNCTION(execActorLoaded);


#define FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSActorSaveInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ComponentsToSave_Implementation(TArray<UActorComponent*>& Components) {}; \
	virtual void ActorPreSave_Implementation() {}; \
	virtual void ActorSaved_Implementation() {}; \
	virtual void ActorLoaded_Implementation() {}; \
 \
	DECLARE_FUNCTION(execComponentsToSave); \
	DECLARE_FUNCTION(execActorPreSave); \
	DECLARE_FUNCTION(execActorSaved); \
	DECLARE_FUNCTION(execActorLoaded);


#define FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSActorSaveInterface_h_14_ACCESSORS
#define FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSActorSaveInterface_h_14_CALLBACK_WRAPPERS
#define FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSActorSaveInterface_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEMSActorSaveInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEMSActorSaveInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEMSActorSaveInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEMSActorSaveInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEMSActorSaveInterface(UEMSActorSaveInterface&&); \
	NO_API UEMSActorSaveInterface(const UEMSActorSaveInterface&); \
public: \
	NO_API virtual ~UEMSActorSaveInterface();


#define FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSActorSaveInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEMSActorSaveInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEMSActorSaveInterface(UEMSActorSaveInterface&&); \
	NO_API UEMSActorSaveInterface(const UEMSActorSaveInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEMSActorSaveInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEMSActorSaveInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEMSActorSaveInterface) \
	NO_API virtual ~UEMSActorSaveInterface();


#define FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSActorSaveInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUEMSActorSaveInterface(); \
	friend struct Z_Construct_UClass_UEMSActorSaveInterface_Statics; \
public: \
	DECLARE_CLASS(UEMSActorSaveInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/EasyMultiSave"), NO_API) \
	DECLARE_SERIALIZER(UEMSActorSaveInterface)


#define FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSActorSaveInterface_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSActorSaveInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSActorSaveInterface_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSActorSaveInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSActorSaveInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSActorSaveInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSActorSaveInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IEMSActorSaveInterface() {} \
public: \
	typedef UEMSActorSaveInterface UClassType; \
	typedef IEMSActorSaveInterface ThisClass; \
	static void Execute_ActorLoaded(UObject* O); \
	static void Execute_ActorPreSave(UObject* O); \
	static void Execute_ActorSaved(UObject* O); \
	static void Execute_ComponentsToSave(UObject* O, TArray<UActorComponent*>& Components); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSActorSaveInterface_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~IEMSActorSaveInterface() {} \
public: \
	typedef UEMSActorSaveInterface UClassType; \
	typedef IEMSActorSaveInterface ThisClass; \
	static void Execute_ActorLoaded(UObject* O); \
	static void Execute_ActorPreSave(UObject* O); \
	static void Execute_ActorSaved(UObject* O); \
	static void Execute_ComponentsToSave(UObject* O, TArray<UActorComponent*>& Components); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSActorSaveInterface_h_11_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSActorSaveInterface_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSActorSaveInterface_h_14_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSActorSaveInterface_h_14_RPC_WRAPPERS \
	FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSActorSaveInterface_h_14_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSActorSaveInterface_h_14_CALLBACK_WRAPPERS \
	FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSActorSaveInterface_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSActorSaveInterface_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSActorSaveInterface_h_14_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSActorSaveInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSActorSaveInterface_h_14_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSActorSaveInterface_h_14_CALLBACK_WRAPPERS \
	FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSActorSaveInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EASYMULTISAVE_API UClass* StaticClass<class UEMSActorSaveInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSActorSaveInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
