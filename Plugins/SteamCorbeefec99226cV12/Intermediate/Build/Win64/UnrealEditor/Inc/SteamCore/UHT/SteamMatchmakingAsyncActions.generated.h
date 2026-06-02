// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamMatchmaking/SteamMatchmakingAsyncActions.h"

#ifdef STEAMCORE_SteamMatchmakingAsyncActions_generated_h
#error "SteamMatchmakingAsyncActions.generated.h already included, missing '#pragma once' in SteamMatchmakingAsyncActions.h"
#endif
#define STEAMCORE_SteamMatchmakingAsyncActions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USteamCoreCreateSession;
class USteamCoreDestroySession;
class USteamCoreFindSession;
class USteamCoreMatchmakingAsyncActionCreateLobby;
class USteamCoreMatchmakingAsyncActionJoinLobby;
class USteamCoreMatchmakingAsyncActionRequestLobbyList;
class USteamCoreUpdateSession;
enum class ESteamLobbyType : uint8;
enum class ESteamSessionFindType : uint8;
struct FCreateLobbyData;
struct FJoinLobbyData;
struct FLobbyMatchList;
struct FSteamID;
struct FSteamSessionResult;
struct FSteamSessionSearchSetting;
struct FSteamSessionSetting;

// ********** Begin Delegate FOnRequestLobbyListAsyncDelegate **************************************
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_24_DELEGATE \
STEAMCORE_API void FOnRequestLobbyListAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRequestLobbyListAsyncDelegate, FLobbyMatchList const& Data, bool bWasSuccessful);


// ********** End Delegate FOnRequestLobbyListAsyncDelegate ****************************************

// ********** Begin Delegate FOnCreateLobbyAsyncDelegate *******************************************
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_25_DELEGATE \
STEAMCORE_API void FOnCreateLobbyAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnCreateLobbyAsyncDelegate, FCreateLobbyData const& Data, bool bWasSuccessful);


// ********** End Delegate FOnCreateLobbyAsyncDelegate *********************************************

// ********** Begin Delegate FOnJoinLobbyAsyncDelegate *********************************************
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_26_DELEGATE \
STEAMCORE_API void FOnJoinLobbyAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnJoinLobbyAsyncDelegate, FJoinLobbyData const& Data, bool bWasSuccessful);


// ********** End Delegate FOnJoinLobbyAsyncDelegate ***********************************************

// ********** Begin Class USteamCoreMatchmakingAsyncActionCreateLobby ******************************
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execCreateLobbyAsync);


struct Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_NoRegister();

#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreMatchmakingAsyncActionCreateLobby(); \
	friend struct ::Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_NoRegister(); \
public: \
	DECLARE_CLASS2(USteamCoreMatchmakingAsyncActionCreateLobby, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_NoRegister) \
	DECLARE_SERIALIZER(USteamCoreMatchmakingAsyncActionCreateLobby)


#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreMatchmakingAsyncActionCreateLobby(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USteamCoreMatchmakingAsyncActionCreateLobby(USteamCoreMatchmakingAsyncActionCreateLobby&&) = delete; \
	USteamCoreMatchmakingAsyncActionCreateLobby(const USteamCoreMatchmakingAsyncActionCreateLobby&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreMatchmakingAsyncActionCreateLobby); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreMatchmakingAsyncActionCreateLobby); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreMatchmakingAsyncActionCreateLobby) \
	NO_API virtual ~USteamCoreMatchmakingAsyncActionCreateLobby();


#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_34_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_37_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USteamCoreMatchmakingAsyncActionCreateLobby;

// ********** End Class USteamCoreMatchmakingAsyncActionCreateLobby ********************************

// ********** Begin Class USteamCoreMatchmakingAsyncActionRequestLobbyList *************************
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execRequestLobbyListAsync);


struct Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_NoRegister();

#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreMatchmakingAsyncActionRequestLobbyList(); \
	friend struct ::Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_NoRegister(); \
public: \
	DECLARE_CLASS2(USteamCoreMatchmakingAsyncActionRequestLobbyList, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_NoRegister) \
	DECLARE_SERIALIZER(USteamCoreMatchmakingAsyncActionRequestLobbyList)


#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_62_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreMatchmakingAsyncActionRequestLobbyList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USteamCoreMatchmakingAsyncActionRequestLobbyList(USteamCoreMatchmakingAsyncActionRequestLobbyList&&) = delete; \
	USteamCoreMatchmakingAsyncActionRequestLobbyList(const USteamCoreMatchmakingAsyncActionRequestLobbyList&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreMatchmakingAsyncActionRequestLobbyList); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreMatchmakingAsyncActionRequestLobbyList); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreMatchmakingAsyncActionRequestLobbyList) \
	NO_API virtual ~USteamCoreMatchmakingAsyncActionRequestLobbyList();


#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_59_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_62_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USteamCoreMatchmakingAsyncActionRequestLobbyList;

// ********** End Class USteamCoreMatchmakingAsyncActionRequestLobbyList ***************************

// ********** Begin Class USteamCoreMatchmakingAsyncActionJoinLobby ********************************
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_90_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execJoinLobbyAsync);


struct Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_NoRegister();

#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_90_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreMatchmakingAsyncActionJoinLobby(); \
	friend struct ::Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_NoRegister(); \
public: \
	DECLARE_CLASS2(USteamCoreMatchmakingAsyncActionJoinLobby, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_NoRegister) \
	DECLARE_SERIALIZER(USteamCoreMatchmakingAsyncActionJoinLobby)


#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_90_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreMatchmakingAsyncActionJoinLobby(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USteamCoreMatchmakingAsyncActionJoinLobby(USteamCoreMatchmakingAsyncActionJoinLobby&&) = delete; \
	USteamCoreMatchmakingAsyncActionJoinLobby(const USteamCoreMatchmakingAsyncActionJoinLobby&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreMatchmakingAsyncActionJoinLobby); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreMatchmakingAsyncActionJoinLobby); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreMatchmakingAsyncActionJoinLobby) \
	NO_API virtual ~USteamCoreMatchmakingAsyncActionJoinLobby();


#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_87_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_90_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_90_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_90_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_90_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USteamCoreMatchmakingAsyncActionJoinLobby;

// ********** End Class USteamCoreMatchmakingAsyncActionJoinLobby **********************************

// ********** Begin Class USteamCoreCreateSession **************************************************
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_115_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateSteamCoreSession);


struct Z_Construct_UClass_USteamCoreCreateSession_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreCreateSession_NoRegister();

#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_115_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreCreateSession(); \
	friend struct ::Z_Construct_UClass_USteamCoreCreateSession_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_USteamCoreCreateSession_NoRegister(); \
public: \
	DECLARE_CLASS2(USteamCoreCreateSession, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_USteamCoreCreateSession_NoRegister) \
	DECLARE_SERIALIZER(USteamCoreCreateSession)


#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_115_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USteamCoreCreateSession(USteamCoreCreateSession&&) = delete; \
	USteamCoreCreateSession(const USteamCoreCreateSession&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreCreateSession); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreCreateSession); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USteamCoreCreateSession) \
	NO_API virtual ~USteamCoreCreateSession();


#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_112_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_115_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_115_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_115_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_115_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USteamCoreCreateSession;

// ********** End Class USteamCoreCreateSession ****************************************************

// ********** Begin Delegate FFindSteamSessionsResultDelegate **************************************
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_151_DELEGATE \
STEAMCORE_API void FFindSteamSessionsResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& FindSteamSessionsResultDelegate, TArray<FSteamSessionResult> const& Results);


// ********** End Delegate FFindSteamSessionsResultDelegate ****************************************

// ********** Begin Class USteamCoreFindSession ****************************************************
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_159_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnCompleted); \
	DECLARE_FUNCTION(execFindSteamCoreSessions);


struct Z_Construct_UClass_USteamCoreFindSession_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreFindSession_NoRegister();

#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_159_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreFindSession(); \
	friend struct ::Z_Construct_UClass_USteamCoreFindSession_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_USteamCoreFindSession_NoRegister(); \
public: \
	DECLARE_CLASS2(USteamCoreFindSession, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_USteamCoreFindSession_NoRegister) \
	DECLARE_SERIALIZER(USteamCoreFindSession)


#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_159_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USteamCoreFindSession(USteamCoreFindSession&&) = delete; \
	USteamCoreFindSession(const USteamCoreFindSession&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreFindSession); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreFindSession); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USteamCoreFindSession) \
	NO_API virtual ~USteamCoreFindSession();


#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_156_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_159_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_159_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_159_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_159_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USteamCoreFindSession;

// ********** End Class USteamCoreFindSession ******************************************************

// ********** Begin Class USteamCoreDestroySession *************************************************
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_206_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnCompleted); \
	DECLARE_FUNCTION(execDestroySteamCoreSession);


struct Z_Construct_UClass_USteamCoreDestroySession_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreDestroySession_NoRegister();

#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_206_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreDestroySession(); \
	friend struct ::Z_Construct_UClass_USteamCoreDestroySession_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_USteamCoreDestroySession_NoRegister(); \
public: \
	DECLARE_CLASS2(USteamCoreDestroySession, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_USteamCoreDestroySession_NoRegister) \
	DECLARE_SERIALIZER(USteamCoreDestroySession)


#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_206_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USteamCoreDestroySession(USteamCoreDestroySession&&) = delete; \
	USteamCoreDestroySession(const USteamCoreDestroySession&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreDestroySession); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreDestroySession); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USteamCoreDestroySession) \
	NO_API virtual ~USteamCoreDestroySession();


#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_203_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_206_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_206_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_206_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_206_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USteamCoreDestroySession;

// ********** End Class USteamCoreDestroySession ***************************************************

// ********** Begin Class USteamCoreUpdateSession **************************************************
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_238_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnCompleted); \
	DECLARE_FUNCTION(execUpdateSteamCoreSession);


struct Z_Construct_UClass_USteamCoreUpdateSession_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUpdateSession_NoRegister();

#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_238_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreUpdateSession(); \
	friend struct ::Z_Construct_UClass_USteamCoreUpdateSession_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_USteamCoreUpdateSession_NoRegister(); \
public: \
	DECLARE_CLASS2(USteamCoreUpdateSession, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_USteamCoreUpdateSession_NoRegister) \
	DECLARE_SERIALIZER(USteamCoreUpdateSession)


#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_238_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USteamCoreUpdateSession(USteamCoreUpdateSession&&) = delete; \
	USteamCoreUpdateSession(const USteamCoreUpdateSession&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUpdateSession); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUpdateSession); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USteamCoreUpdateSession) \
	NO_API virtual ~USteamCoreUpdateSession();


#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_235_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_238_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_238_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_238_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_238_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USteamCoreUpdateSession;

// ********** End Class USteamCoreUpdateSession ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
