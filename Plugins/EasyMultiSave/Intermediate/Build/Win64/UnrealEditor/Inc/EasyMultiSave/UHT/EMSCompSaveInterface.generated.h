// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EMSCompSaveInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EASYMULTISAVE_EMSCompSaveInterface_generated_h
#error "EMSCompSaveInterface.generated.h already included, missing '#pragma once' in EMSCompSaveInterface.h"
#endif
#define EASYMULTISAVE_EMSCompSaveInterface_generated_h

#define FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSCompSaveInterface_h_14_SPARSE_DATA
#define FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSCompSaveInterface_h_14_RPC_WRAPPERS \
	virtual void ComponentPreSave_Implementation() {}; \
	virtual void ComponentLoaded_Implementation() {}; \
 \
	DECLARE_FUNCTION(execComponentPreSave); \
	DECLARE_FUNCTION(execComponentLoaded);


#define FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSCompSaveInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ComponentPreSave_Implementation() {}; \
	virtual void ComponentLoaded_Implementation() {}; \
 \
	DECLARE_FUNCTION(execComponentPreSave); \
	DECLARE_FUNCTION(execComponentLoaded);


#define FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSCompSaveInterface_h_14_ACCESSORS
#define FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSCompSaveInterface_h_14_CALLBACK_WRAPPERS
#define FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSCompSaveInterface_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEMSCompSaveInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEMSCompSaveInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEMSCompSaveInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEMSCompSaveInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEMSCompSaveInterface(UEMSCompSaveInterface&&); \
	NO_API UEMSCompSaveInterface(const UEMSCompSaveInterface&); \
public: \
	NO_API virtual ~UEMSCompSaveInterface();


#define FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSCompSaveInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEMSCompSaveInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEMSCompSaveInterface(UEMSCompSaveInterface&&); \
	NO_API UEMSCompSaveInterface(const UEMSCompSaveInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEMSCompSaveInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEMSCompSaveInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEMSCompSaveInterface) \
	NO_API virtual ~UEMSCompSaveInterface();


#define FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSCompSaveInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUEMSCompSaveInterface(); \
	friend struct Z_Construct_UClass_UEMSCompSaveInterface_Statics; \
public: \
	DECLARE_CLASS(UEMSCompSaveInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/EasyMultiSave"), NO_API) \
	DECLARE_SERIALIZER(UEMSCompSaveInterface)


#define FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSCompSaveInterface_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSCompSaveInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSCompSaveInterface_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSCompSaveInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSCompSaveInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSCompSaveInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSCompSaveInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IEMSCompSaveInterface() {} \
public: \
	typedef UEMSCompSaveInterface UClassType; \
	typedef IEMSCompSaveInterface ThisClass; \
	static void Execute_ComponentLoaded(UObject* O); \
	static void Execute_ComponentPreSave(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSCompSaveInterface_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~IEMSCompSaveInterface() {} \
public: \
	typedef UEMSCompSaveInterface UClassType; \
	typedef IEMSCompSaveInterface ThisClass; \
	static void Execute_ComponentLoaded(UObject* O); \
	static void Execute_ComponentPreSave(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSCompSaveInterface_h_11_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSCompSaveInterface_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSCompSaveInterface_h_14_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSCompSaveInterface_h_14_RPC_WRAPPERS \
	FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSCompSaveInterface_h_14_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSCompSaveInterface_h_14_CALLBACK_WRAPPERS \
	FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSCompSaveInterface_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSCompSaveInterface_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSCompSaveInterface_h_14_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSCompSaveInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSCompSaveInterface_h_14_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSCompSaveInterface_h_14_CALLBACK_WRAPPERS \
	FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSCompSaveInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EASYMULTISAVE_API UClass* StaticClass<class UEMSCompSaveInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSCompSaveInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
