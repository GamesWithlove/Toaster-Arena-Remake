// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamFriends/SteamFriendsAsyncActions.h"

#ifdef STEAMCORE_SteamFriendsAsyncActions_generated_h
#error "SteamFriendsAsyncActions.generated.h already included, missing '#pragma once' in SteamFriendsAsyncActions.h"
#endif
#define STEAMCORE_SteamFriendsAsyncActions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USteamCoreFriendsAsyncActionDownloadClanActivityCounts;
class USteamCoreFriendsAsyncActionEnumerateFollowingList;
class USteamCoreFriendsAsyncActionGetFollowerCount;
class USteamCoreFriendsAsyncActionIsFollowing;
class USteamCoreFriendsAsyncActionJoinClanChatRoom;
class USteamCoreFriendsAsyncActionRequestClanOfficerList;
class USteamCoreFriendsAsyncActionRequestUserInformation;
class USteamCoreFriendsAsyncActionSetPersonaName;
struct FClanOfficerListResponse;
struct FDownloadClanActivityCountsResult;
struct FFriendsEnumerateFollowingList;
struct FFriendsGetFollowerCount;
struct FFriendsIsFollowing;
struct FJoinClanChatRoomCompletionResult;
struct FSetPersonaNameResponse;
struct FSteamID;

// ********** Begin Delegate FOnSetPersonaNameAsyncDelegate ****************************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_17_DELEGATE \
STEAMCORE_API void FOnSetPersonaNameAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSetPersonaNameAsyncDelegate, FSetPersonaNameResponse const& data, bool bWasSuccessful);


// ********** End Delegate FOnSetPersonaNameAsyncDelegate ******************************************

// ********** Begin Delegate FOnDownloadClanActivityCountsAsyncDelegate ****************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_18_DELEGATE \
STEAMCORE_API void FOnDownloadClanActivityCountsAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnDownloadClanActivityCountsAsyncDelegate, FDownloadClanActivityCountsResult const& data, bool bWasSuccessful);


// ********** End Delegate FOnDownloadClanActivityCountsAsyncDelegate ******************************

// ********** Begin Delegate FOnRequestClanOfficerListAsyncDelegate ********************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_19_DELEGATE \
STEAMCORE_API void FOnRequestClanOfficerListAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRequestClanOfficerListAsyncDelegate, FClanOfficerListResponse const& data, bool bWasSuccessful);


// ********** End Delegate FOnRequestClanOfficerListAsyncDelegate **********************************

// ********** Begin Delegate FOnJoinClanChatRoomAsyncDelegate **************************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_20_DELEGATE \
STEAMCORE_API void FOnJoinClanChatRoomAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnJoinClanChatRoomAsyncDelegate, FJoinClanChatRoomCompletionResult const& data, bool bWasSuccessful);


// ********** End Delegate FOnJoinClanChatRoomAsyncDelegate ****************************************

// ********** Begin Delegate FOnEnumerateFollowingListAsyncDelegate ********************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_21_DELEGATE \
STEAMCORE_API void FOnEnumerateFollowingListAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnEnumerateFollowingListAsyncDelegate, FFriendsEnumerateFollowingList const& data, bool bWasSuccessful);


// ********** End Delegate FOnEnumerateFollowingListAsyncDelegate **********************************

// ********** Begin Delegate FOnIsFollowingAsyncDelegate *******************************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_22_DELEGATE \
STEAMCORE_API void FOnIsFollowingAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnIsFollowingAsyncDelegate, FFriendsIsFollowing const& data, bool bWasSuccessful);


// ********** End Delegate FOnIsFollowingAsyncDelegate *********************************************

// ********** Begin Delegate FOnGetFollowerCountAsyncDelegate **************************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_23_DELEGATE \
STEAMCORE_API void FOnGetFollowerCountAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGetFollowerCountAsyncDelegate, FFriendsGetFollowerCount const& data, bool bWasSuccessful);


// ********** End Delegate FOnGetFollowerCountAsyncDelegate ****************************************

// ********** Begin Delegate FOnRequestUserInformationAsyncDelegate ********************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_24_DELEGATE \
STEAMCORE_API void FOnRequestUserInformationAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRequestUserInformationAsyncDelegate);


// ********** End Delegate FOnRequestUserInformationAsyncDelegate **********************************

// ********** Begin Class USteamCoreFriendsAsyncActionSetPersonaName *******************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execSetPersonaNameAsync);


struct Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreFriendsAsyncActionSetPersonaName(); \
	friend struct ::Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_NoRegister(); \
public: \
	DECLARE_CLASS2(USteamCoreFriendsAsyncActionSetPersonaName, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_NoRegister) \
	DECLARE_SERIALIZER(USteamCoreFriendsAsyncActionSetPersonaName)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreFriendsAsyncActionSetPersonaName(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USteamCoreFriendsAsyncActionSetPersonaName(USteamCoreFriendsAsyncActionSetPersonaName&&) = delete; \
	USteamCoreFriendsAsyncActionSetPersonaName(const USteamCoreFriendsAsyncActionSetPersonaName&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreFriendsAsyncActionSetPersonaName); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreFriendsAsyncActionSetPersonaName); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreFriendsAsyncActionSetPersonaName) \
	NO_API virtual ~USteamCoreFriendsAsyncActionSetPersonaName();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_29_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_32_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USteamCoreFriendsAsyncActionSetPersonaName;

// ********** End Class USteamCoreFriendsAsyncActionSetPersonaName *********************************

// ********** Begin Class USteamCoreFriendsAsyncActionDownloadClanActivityCounts *******************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execDownloadClanActivityCountsAsync);


struct Z_Construct_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreFriendsAsyncActionDownloadClanActivityCounts(); \
	friend struct ::Z_Construct_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_NoRegister(); \
public: \
	DECLARE_CLASS2(USteamCoreFriendsAsyncActionDownloadClanActivityCounts, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_NoRegister) \
	DECLARE_SERIALIZER(USteamCoreFriendsAsyncActionDownloadClanActivityCounts)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_59_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreFriendsAsyncActionDownloadClanActivityCounts(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USteamCoreFriendsAsyncActionDownloadClanActivityCounts(USteamCoreFriendsAsyncActionDownloadClanActivityCounts&&) = delete; \
	USteamCoreFriendsAsyncActionDownloadClanActivityCounts(const USteamCoreFriendsAsyncActionDownloadClanActivityCounts&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreFriendsAsyncActionDownloadClanActivityCounts); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreFriendsAsyncActionDownloadClanActivityCounts); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreFriendsAsyncActionDownloadClanActivityCounts) \
	NO_API virtual ~USteamCoreFriendsAsyncActionDownloadClanActivityCounts();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_56_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_59_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USteamCoreFriendsAsyncActionDownloadClanActivityCounts;

// ********** End Class USteamCoreFriendsAsyncActionDownloadClanActivityCounts *********************

// ********** Begin Class USteamCoreFriendsAsyncActionRequestClanOfficerList ***********************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execRequestClanOfficerListAsync);


struct Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_85_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreFriendsAsyncActionRequestClanOfficerList(); \
	friend struct ::Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList_NoRegister(); \
public: \
	DECLARE_CLASS2(USteamCoreFriendsAsyncActionRequestClanOfficerList, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList_NoRegister) \
	DECLARE_SERIALIZER(USteamCoreFriendsAsyncActionRequestClanOfficerList)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_85_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreFriendsAsyncActionRequestClanOfficerList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USteamCoreFriendsAsyncActionRequestClanOfficerList(USteamCoreFriendsAsyncActionRequestClanOfficerList&&) = delete; \
	USteamCoreFriendsAsyncActionRequestClanOfficerList(const USteamCoreFriendsAsyncActionRequestClanOfficerList&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreFriendsAsyncActionRequestClanOfficerList); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreFriendsAsyncActionRequestClanOfficerList); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreFriendsAsyncActionRequestClanOfficerList) \
	NO_API virtual ~USteamCoreFriendsAsyncActionRequestClanOfficerList();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_82_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_85_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_85_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_85_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USteamCoreFriendsAsyncActionRequestClanOfficerList;

// ********** End Class USteamCoreFriendsAsyncActionRequestClanOfficerList *************************

// ********** Begin Class USteamCoreFriendsAsyncActionJoinClanChatRoom *****************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_111_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execJoinClanChatRoomAsync);


struct Z_Construct_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_111_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreFriendsAsyncActionJoinClanChatRoom(); \
	friend struct ::Z_Construct_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom_NoRegister(); \
public: \
	DECLARE_CLASS2(USteamCoreFriendsAsyncActionJoinClanChatRoom, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom_NoRegister) \
	DECLARE_SERIALIZER(USteamCoreFriendsAsyncActionJoinClanChatRoom)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_111_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreFriendsAsyncActionJoinClanChatRoom(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USteamCoreFriendsAsyncActionJoinClanChatRoom(USteamCoreFriendsAsyncActionJoinClanChatRoom&&) = delete; \
	USteamCoreFriendsAsyncActionJoinClanChatRoom(const USteamCoreFriendsAsyncActionJoinClanChatRoom&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreFriendsAsyncActionJoinClanChatRoom); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreFriendsAsyncActionJoinClanChatRoom); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreFriendsAsyncActionJoinClanChatRoom) \
	NO_API virtual ~USteamCoreFriendsAsyncActionJoinClanChatRoom();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_108_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_111_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_111_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_111_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_111_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USteamCoreFriendsAsyncActionJoinClanChatRoom;

// ********** End Class USteamCoreFriendsAsyncActionJoinClanChatRoom *******************************

// ********** Begin Class USteamCoreFriendsAsyncActionEnumerateFollowingList ***********************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_137_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execEnumerateFollowingListAsync);


struct Z_Construct_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_137_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreFriendsAsyncActionEnumerateFollowingList(); \
	friend struct ::Z_Construct_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList_NoRegister(); \
public: \
	DECLARE_CLASS2(USteamCoreFriendsAsyncActionEnumerateFollowingList, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList_NoRegister) \
	DECLARE_SERIALIZER(USteamCoreFriendsAsyncActionEnumerateFollowingList)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_137_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreFriendsAsyncActionEnumerateFollowingList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USteamCoreFriendsAsyncActionEnumerateFollowingList(USteamCoreFriendsAsyncActionEnumerateFollowingList&&) = delete; \
	USteamCoreFriendsAsyncActionEnumerateFollowingList(const USteamCoreFriendsAsyncActionEnumerateFollowingList&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreFriendsAsyncActionEnumerateFollowingList); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreFriendsAsyncActionEnumerateFollowingList); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreFriendsAsyncActionEnumerateFollowingList) \
	NO_API virtual ~USteamCoreFriendsAsyncActionEnumerateFollowingList();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_134_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_137_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_137_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_137_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_137_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USteamCoreFriendsAsyncActionEnumerateFollowingList;

// ********** End Class USteamCoreFriendsAsyncActionEnumerateFollowingList *************************

// ********** Begin Class USteamCoreFriendsAsyncActionIsFollowing **********************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_164_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execIsFollowingAsync);


struct Z_Construct_UClass_USteamCoreFriendsAsyncActionIsFollowing_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionIsFollowing_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_164_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreFriendsAsyncActionIsFollowing(); \
	friend struct ::Z_Construct_UClass_USteamCoreFriendsAsyncActionIsFollowing_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_USteamCoreFriendsAsyncActionIsFollowing_NoRegister(); \
public: \
	DECLARE_CLASS2(USteamCoreFriendsAsyncActionIsFollowing, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_USteamCoreFriendsAsyncActionIsFollowing_NoRegister) \
	DECLARE_SERIALIZER(USteamCoreFriendsAsyncActionIsFollowing)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_164_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreFriendsAsyncActionIsFollowing(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USteamCoreFriendsAsyncActionIsFollowing(USteamCoreFriendsAsyncActionIsFollowing&&) = delete; \
	USteamCoreFriendsAsyncActionIsFollowing(const USteamCoreFriendsAsyncActionIsFollowing&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreFriendsAsyncActionIsFollowing); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreFriendsAsyncActionIsFollowing); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreFriendsAsyncActionIsFollowing) \
	NO_API virtual ~USteamCoreFriendsAsyncActionIsFollowing();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_161_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_164_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_164_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_164_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_164_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USteamCoreFriendsAsyncActionIsFollowing;

// ********** End Class USteamCoreFriendsAsyncActionIsFollowing ************************************

// ********** Begin Class USteamCoreFriendsAsyncActionGetFollowerCount *****************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_188_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execGetFollowerCountAsync);


struct Z_Construct_UClass_USteamCoreFriendsAsyncActionGetFollowerCount_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionGetFollowerCount_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_188_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreFriendsAsyncActionGetFollowerCount(); \
	friend struct ::Z_Construct_UClass_USteamCoreFriendsAsyncActionGetFollowerCount_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_USteamCoreFriendsAsyncActionGetFollowerCount_NoRegister(); \
public: \
	DECLARE_CLASS2(USteamCoreFriendsAsyncActionGetFollowerCount, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_USteamCoreFriendsAsyncActionGetFollowerCount_NoRegister) \
	DECLARE_SERIALIZER(USteamCoreFriendsAsyncActionGetFollowerCount)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_188_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreFriendsAsyncActionGetFollowerCount(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USteamCoreFriendsAsyncActionGetFollowerCount(USteamCoreFriendsAsyncActionGetFollowerCount&&) = delete; \
	USteamCoreFriendsAsyncActionGetFollowerCount(const USteamCoreFriendsAsyncActionGetFollowerCount&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreFriendsAsyncActionGetFollowerCount); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreFriendsAsyncActionGetFollowerCount); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreFriendsAsyncActionGetFollowerCount) \
	NO_API virtual ~USteamCoreFriendsAsyncActionGetFollowerCount();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_185_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_188_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_188_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_188_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_188_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USteamCoreFriendsAsyncActionGetFollowerCount;

// ********** End Class USteamCoreFriendsAsyncActionGetFollowerCount *******************************

// ********** Begin Class USteamCoreFriendsAsyncActionRequestUserInformation ***********************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_212_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execRequestUserInformationAsync);


struct Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_212_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreFriendsAsyncActionRequestUserInformation(); \
	friend struct ::Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation_NoRegister(); \
public: \
	DECLARE_CLASS2(USteamCoreFriendsAsyncActionRequestUserInformation, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation_NoRegister) \
	DECLARE_SERIALIZER(USteamCoreFriendsAsyncActionRequestUserInformation)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_212_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreFriendsAsyncActionRequestUserInformation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USteamCoreFriendsAsyncActionRequestUserInformation(USteamCoreFriendsAsyncActionRequestUserInformation&&) = delete; \
	USteamCoreFriendsAsyncActionRequestUserInformation(const USteamCoreFriendsAsyncActionRequestUserInformation&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreFriendsAsyncActionRequestUserInformation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreFriendsAsyncActionRequestUserInformation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreFriendsAsyncActionRequestUserInformation) \
	NO_API virtual ~USteamCoreFriendsAsyncActionRequestUserInformation();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_209_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_212_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_212_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_212_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_212_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USteamCoreFriendsAsyncActionRequestUserInformation;

// ********** End Class USteamCoreFriendsAsyncActionRequestUserInformation *************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
