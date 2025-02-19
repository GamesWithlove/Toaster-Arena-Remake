// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamUser/SteamUserAsyncActions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USteamCoreUserAsyncActionRequestEncryptedAppTicket;
class USteamCoreUserAsyncActionRequestStoreAuthURL;
struct FEncryptedAppTicketResponse;
struct FStoreAuthURLResponse;
#ifdef STEAMCORE_SteamUserAsyncActions_generated_h
#error "SteamUserAsyncActions.generated.h already included, missing '#pragma once' in SteamUserAsyncActions.h"
#endif
#define STEAMCORE_SteamUserAsyncActions_generated_h

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_16_DELEGATE \
STEAMCORE_API void FRequestEncryptedAppTicketDelegate_DelegateWrapper(const FMulticastScriptDelegate& RequestEncryptedAppTicketDelegate, FEncryptedAppTicketResponse const& Data, bool bWasSuccessful);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_17_DELEGATE \
STEAMCORE_API void FRequestStoreAuthURLDelegate_DelegateWrapper(const FMulticastScriptDelegate& RequestStoreAuthURLDelegate, FStoreAuthURLResponse const& Data, bool bWasSuccessful);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_25_SPARSE_DATA
#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execRequestEncryptedAppTicketAsync);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execRequestEncryptedAppTicketAsync);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_25_ACCESSORS
#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreUserAsyncActionRequestEncryptedAppTicket(); \
	friend struct Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_Statics; \
public: \
	DECLARE_CLASS(USteamCoreUserAsyncActionRequestEncryptedAppTicket, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreUserAsyncActionRequestEncryptedAppTicket)


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreUserAsyncActionRequestEncryptedAppTicket(); \
	friend struct Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_Statics; \
public: \
	DECLARE_CLASS(USteamCoreUserAsyncActionRequestEncryptedAppTicket, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreUserAsyncActionRequestEncryptedAppTicket)


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUserAsyncActionRequestEncryptedAppTicket(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUserAsyncActionRequestEncryptedAppTicket) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUserAsyncActionRequestEncryptedAppTicket); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUserAsyncActionRequestEncryptedAppTicket); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreUserAsyncActionRequestEncryptedAppTicket(USteamCoreUserAsyncActionRequestEncryptedAppTicket&&); \
	NO_API USteamCoreUserAsyncActionRequestEncryptedAppTicket(const USteamCoreUserAsyncActionRequestEncryptedAppTicket&); \
public: \
	NO_API virtual ~USteamCoreUserAsyncActionRequestEncryptedAppTicket();


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUserAsyncActionRequestEncryptedAppTicket(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreUserAsyncActionRequestEncryptedAppTicket(USteamCoreUserAsyncActionRequestEncryptedAppTicket&&); \
	NO_API USteamCoreUserAsyncActionRequestEncryptedAppTicket(const USteamCoreUserAsyncActionRequestEncryptedAppTicket&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUserAsyncActionRequestEncryptedAppTicket); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUserAsyncActionRequestEncryptedAppTicket); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUserAsyncActionRequestEncryptedAppTicket) \
	NO_API virtual ~USteamCoreUserAsyncActionRequestEncryptedAppTicket();


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_22_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_25_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_25_RPC_WRAPPERS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_25_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_25_INCLASS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_25_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_25_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_25_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreUserAsyncActionRequestEncryptedAppTicket>();

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_52_SPARSE_DATA
#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_52_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execRequestStoreAuthURLAsync);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execRequestStoreAuthURLAsync);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_52_ACCESSORS
#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreUserAsyncActionRequestStoreAuthURL(); \
	friend struct Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_Statics; \
public: \
	DECLARE_CLASS(USteamCoreUserAsyncActionRequestStoreAuthURL, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreUserAsyncActionRequestStoreAuthURL)


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_52_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreUserAsyncActionRequestStoreAuthURL(); \
	friend struct Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_Statics; \
public: \
	DECLARE_CLASS(USteamCoreUserAsyncActionRequestStoreAuthURL, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreUserAsyncActionRequestStoreAuthURL)


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_52_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUserAsyncActionRequestStoreAuthURL(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUserAsyncActionRequestStoreAuthURL) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUserAsyncActionRequestStoreAuthURL); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUserAsyncActionRequestStoreAuthURL); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreUserAsyncActionRequestStoreAuthURL(USteamCoreUserAsyncActionRequestStoreAuthURL&&); \
	NO_API USteamCoreUserAsyncActionRequestStoreAuthURL(const USteamCoreUserAsyncActionRequestStoreAuthURL&); \
public: \
	NO_API virtual ~USteamCoreUserAsyncActionRequestStoreAuthURL();


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_52_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUserAsyncActionRequestStoreAuthURL(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreUserAsyncActionRequestStoreAuthURL(USteamCoreUserAsyncActionRequestStoreAuthURL&&); \
	NO_API USteamCoreUserAsyncActionRequestStoreAuthURL(const USteamCoreUserAsyncActionRequestStoreAuthURL&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUserAsyncActionRequestStoreAuthURL); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUserAsyncActionRequestStoreAuthURL); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUserAsyncActionRequestStoreAuthURL) \
	NO_API virtual ~USteamCoreUserAsyncActionRequestStoreAuthURL();


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_49_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_52_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_52_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_52_RPC_WRAPPERS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_52_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_52_INCLASS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_52_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_52_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_52_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_52_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreUserAsyncActionRequestStoreAuthURL>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
