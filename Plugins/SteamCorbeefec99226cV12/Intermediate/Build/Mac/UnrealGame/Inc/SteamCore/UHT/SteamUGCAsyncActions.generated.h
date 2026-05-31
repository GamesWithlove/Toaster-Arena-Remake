// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamUGC/SteamUGCAsyncActions.h"

#ifdef STEAMCORE_SteamUGCAsyncActions_generated_h
#error "SteamUGCAsyncActions.generated.h already included, missing '#pragma once' in SteamUGCAsyncActions.h"
#endif
#define STEAMCORE_SteamUGCAsyncActions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USteamCoreUGCAsyncActionAddAppDependency;
class USteamCoreUGCAsyncActionAddItemToFavorites;
class USteamCoreUGCAsyncActionAddUGCDependency;
class USteamCoreUGCAsyncActionCreateItem;
class USteamCoreUGCAsyncActionDeleteItem;
class USteamCoreUGCAsyncActionDownloadItem;
class USteamCoreUGCAsyncActionGetAppDependencies;
class USteamCoreUGCAsyncActionGetUserItemVote;
class USteamCoreUGCAsyncActionRemoveAppDependency;
class USteamCoreUGCAsyncActionRemoveItemFromFavorites;
class USteamCoreUGCAsyncActionRemoveUGCDependency;
class USteamCoreUGCAsyncActionSendQueryUGCRequest;
class USteamCoreUGCAsyncActionSetUserItemVote;
class USteamCoreUGCAsyncActionStartPlaytimeTracking;
class USteamCoreUGCAsyncActionStopPlaytimeTracking;
class USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems;
class USteamCoreUGCAsyncActionSubmitItemUpdate;
class USteamCoreUGCAsyncActionSubscribeItem;
class USteamCoreUGCAsyncActionUnsubscribeItem;
enum class ESteamWorkshopFileType : uint8;
struct FAddAppDependencyResult;
struct FAddUGCDependencyResult;
struct FCreateItemResult;
struct FDownloadItemResult;
struct FGetAppDependenciesResult;
struct FGetUserItemVoteResult;
struct FPublishedFileID;
struct FRemoteStorageSubscribePublishedFileResult;
struct FRemoveAppDependencyResult;
struct FRemoveUGCDependencyResult;
struct FSetUserItemVoteResult;
struct FStartPlaytimeTrackingResult;
struct FSteamUGCQueryCompleted;
struct FStopPlaytimeTrackingResult;
struct FSubmitItemUpdateResult;
struct FUGCDeleteItemResult;
struct FUGCQueryHandle;
struct FUGCUpdateHandle;
struct FUserFavoriteItemsListChanged;

// ********** Begin Delegate FOnAddItemToFavoritesAsyncDelegate ************************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_16_DELEGATE \
STEAMCORE_API void FOnAddItemToFavoritesAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnAddItemToFavoritesAsyncDelegate, FUserFavoriteItemsListChanged const& Data, bool bWasSuccessful);


// ********** End Delegate FOnAddItemToFavoritesAsyncDelegate **************************************

// ********** Begin Delegate FOnCreateItemAsyncDelegate ********************************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_17_DELEGATE \
STEAMCORE_API void FOnCreateItemAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnCreateItemAsyncDelegate, FCreateItemResult const& Data, bool bWasSuccessful);


// ********** End Delegate FOnCreateItemAsyncDelegate **********************************************

// ********** Begin Delegate FOnSetUserItemVoteAsyncDelegate ***************************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_18_DELEGATE \
STEAMCORE_API void FOnSetUserItemVoteAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSetUserItemVoteAsyncDelegate, FSetUserItemVoteResult const& Data, bool bWasSuccessful);


// ********** End Delegate FOnSetUserItemVoteAsyncDelegate *****************************************

// ********** Begin Delegate FOnGetUserItemVoteAsyncDelegate ***************************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_19_DELEGATE \
STEAMCORE_API void FOnGetUserItemVoteAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGetUserItemVoteAsyncDelegate, FGetUserItemVoteResult const& Data, bool bWasSuccessful);


// ********** End Delegate FOnGetUserItemVoteAsyncDelegate *****************************************

// ********** Begin Delegate FOnRemoveItemFromFavoritesAsyncDelegate *******************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_20_DELEGATE \
STEAMCORE_API void FOnRemoveItemFromFavoritesAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRemoveItemFromFavoritesAsyncDelegate, FUserFavoriteItemsListChanged const& Data, bool bWasSuccessful);


// ********** End Delegate FOnRemoveItemFromFavoritesAsyncDelegate *********************************

// ********** Begin Delegate FOnSubscribeItemAsyncDelegate *****************************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_21_DELEGATE \
STEAMCORE_API void FOnSubscribeItemAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSubscribeItemAsyncDelegate, FRemoteStorageSubscribePublishedFileResult const& Data, bool bWasSuccessful);


// ********** End Delegate FOnSubscribeItemAsyncDelegate *******************************************

// ********** Begin Delegate FOnSendQueryUGCRequestAsyncDelegate ***********************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_22_DELEGATE \
STEAMCORE_API void FOnSendQueryUGCRequestAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSendQueryUGCRequestAsyncDelegate, FSteamUGCQueryCompleted const& Data, bool bWasSuccessful);


// ********** End Delegate FOnSendQueryUGCRequestAsyncDelegate *************************************

// ********** Begin Delegate FOnAddAppDependencyResultAsyncDelegate ********************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_23_DELEGATE \
STEAMCORE_API void FOnAddAppDependencyResultAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnAddAppDependencyResultAsyncDelegate, FAddAppDependencyResult const& Data, bool bWasSuccessful);


// ********** End Delegate FOnAddAppDependencyResultAsyncDelegate **********************************

// ********** Begin Delegate FOnRemoveAppDependencyResultAsyncDelegate *****************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_24_DELEGATE \
STEAMCORE_API void FOnRemoveAppDependencyResultAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRemoveAppDependencyResultAsyncDelegate, FRemoveAppDependencyResult const& Data, bool bWasSuccessful);


// ********** End Delegate FOnRemoveAppDependencyResultAsyncDelegate *******************************

// ********** Begin Delegate FOnAddUGCDependencyResultAsyncDelegate ********************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_25_DELEGATE \
STEAMCORE_API void FOnAddUGCDependencyResultAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnAddUGCDependencyResultAsyncDelegate, FAddUGCDependencyResult const& Data, bool bWasSuccessful);


// ********** End Delegate FOnAddUGCDependencyResultAsyncDelegate **********************************

// ********** Begin Delegate FOnRemoveUGCDependencyResultAsyncDelegate *****************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_26_DELEGATE \
STEAMCORE_API void FOnRemoveUGCDependencyResultAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRemoveUGCDependencyResultAsyncDelegate, FRemoveUGCDependencyResult const& Data, bool bWasSuccessful);


// ********** End Delegate FOnRemoveUGCDependencyResultAsyncDelegate *******************************

// ********** Begin Delegate FOnDeleteItemResultAsyncDelegate **************************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_27_DELEGATE \
STEAMCORE_API void FOnDeleteItemResultAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnDeleteItemResultAsyncDelegate, FUGCDeleteItemResult const& Data, bool bWasSuccessful);


// ********** End Delegate FOnDeleteItemResultAsyncDelegate ****************************************

// ********** Begin Delegate FOnGetAppDependenciesResultAsyncDelegate ******************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_28_DELEGATE \
STEAMCORE_API void FOnGetAppDependenciesResultAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGetAppDependenciesResultAsyncDelegate, FGetAppDependenciesResult const& Data, bool bWasSuccessful);


// ********** End Delegate FOnGetAppDependenciesResultAsyncDelegate ********************************

// ********** Begin Delegate FOnSubmitItemUpdateAsyncDelegate **************************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_29_DELEGATE \
STEAMCORE_API void FOnSubmitItemUpdateAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSubmitItemUpdateAsyncDelegate, FSubmitItemUpdateResult const& Data, bool bWasSuccessful);


// ********** End Delegate FOnSubmitItemUpdateAsyncDelegate ****************************************

// ********** Begin Delegate FOnStartPlaytimeTrackingAsyncDelegate *********************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_30_DELEGATE \
STEAMCORE_API void FOnStartPlaytimeTrackingAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnStartPlaytimeTrackingAsyncDelegate, FStartPlaytimeTrackingResult const& Data, bool bWasSuccessful);


// ********** End Delegate FOnStartPlaytimeTrackingAsyncDelegate ***********************************

// ********** Begin Delegate FOnStopPlaytimeTrackingAsyncDelegate **********************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_31_DELEGATE \
STEAMCORE_API void FOnStopPlaytimeTrackingAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnStopPlaytimeTrackingAsyncDelegate, FStopPlaytimeTrackingResult const& Data, bool bWasSuccessful);


// ********** End Delegate FOnStopPlaytimeTrackingAsyncDelegate ************************************

// ********** Begin Delegate FOnStopPlaytimeTrackingForAllItemsAsyncDelegate ***********************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_32_DELEGATE \
STEAMCORE_API void FOnStopPlaytimeTrackingForAllItemsAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnStopPlaytimeTrackingForAllItemsAsyncDelegate, FStopPlaytimeTrackingResult const& Data, bool bWasSuccessful);


// ********** End Delegate FOnStopPlaytimeTrackingForAllItemsAsyncDelegate *************************

// ********** Begin Delegate FOnUnsubscribeItemAsyncDelegate ***************************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_33_DELEGATE \
STEAMCORE_API void FOnUnsubscribeItemAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnUnsubscribeItemAsyncDelegate, FRemoteStorageSubscribePublishedFileResult const& Data, bool bWasSuccessful);


// ********** End Delegate FOnUnsubscribeItemAsyncDelegate *****************************************

// ********** Begin Delegate FOnDownloadItemResultDelegate *****************************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_34_DELEGATE \
STEAMCORE_API void FOnDownloadItemResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnDownloadItemResultDelegate, FDownloadItemResult const& Data, bool bWasSuccessful);


// ********** End Delegate FOnDownloadItemResultDelegate *******************************************

// ********** Begin Class USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems ******************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execStopPlaytimeTrackingForAllItemsAsync);


struct Z_Construct_UClass_USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems(); \
	friend struct ::Z_Construct_UClass_USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems_NoRegister(); \
public: \
	DECLARE_CLASS2(USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems_NoRegister) \
	DECLARE_SERIALIZER(USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems(USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems&&) = delete; \
	USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems(const USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems) \
	NO_API virtual ~USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_39_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_42_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems;

// ********** End Class USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems ********************

// ********** Begin Class USteamCoreUGCAsyncActionStopPlaytimeTracking *****************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execStopPlaytimeTrackingAsync);


struct Z_Construct_UClass_USteamCoreUGCAsyncActionStopPlaytimeTracking_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUGCAsyncActionStopPlaytimeTracking_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreUGCAsyncActionStopPlaytimeTracking(); \
	friend struct ::Z_Construct_UClass_USteamCoreUGCAsyncActionStopPlaytimeTracking_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_USteamCoreUGCAsyncActionStopPlaytimeTracking_NoRegister(); \
public: \
	DECLARE_CLASS2(USteamCoreUGCAsyncActionStopPlaytimeTracking, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_USteamCoreUGCAsyncActionStopPlaytimeTracking_NoRegister) \
	DECLARE_SERIALIZER(USteamCoreUGCAsyncActionStopPlaytimeTracking)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_66_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUGCAsyncActionStopPlaytimeTracking(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USteamCoreUGCAsyncActionStopPlaytimeTracking(USteamCoreUGCAsyncActionStopPlaytimeTracking&&) = delete; \
	USteamCoreUGCAsyncActionStopPlaytimeTracking(const USteamCoreUGCAsyncActionStopPlaytimeTracking&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUGCAsyncActionStopPlaytimeTracking); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUGCAsyncActionStopPlaytimeTracking); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUGCAsyncActionStopPlaytimeTracking) \
	NO_API virtual ~USteamCoreUGCAsyncActionStopPlaytimeTracking();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_63_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_66_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_66_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USteamCoreUGCAsyncActionStopPlaytimeTracking;

// ********** End Class USteamCoreUGCAsyncActionStopPlaytimeTracking *******************************

// ********** Begin Class USteamCoreUGCAsyncActionStartPlaytimeTracking ****************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_91_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execStartPlaytimeTrackingAsync);


struct Z_Construct_UClass_USteamCoreUGCAsyncActionStartPlaytimeTracking_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUGCAsyncActionStartPlaytimeTracking_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_91_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreUGCAsyncActionStartPlaytimeTracking(); \
	friend struct ::Z_Construct_UClass_USteamCoreUGCAsyncActionStartPlaytimeTracking_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_USteamCoreUGCAsyncActionStartPlaytimeTracking_NoRegister(); \
public: \
	DECLARE_CLASS2(USteamCoreUGCAsyncActionStartPlaytimeTracking, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_USteamCoreUGCAsyncActionStartPlaytimeTracking_NoRegister) \
	DECLARE_SERIALIZER(USteamCoreUGCAsyncActionStartPlaytimeTracking)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_91_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUGCAsyncActionStartPlaytimeTracking(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USteamCoreUGCAsyncActionStartPlaytimeTracking(USteamCoreUGCAsyncActionStartPlaytimeTracking&&) = delete; \
	USteamCoreUGCAsyncActionStartPlaytimeTracking(const USteamCoreUGCAsyncActionStartPlaytimeTracking&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUGCAsyncActionStartPlaytimeTracking); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUGCAsyncActionStartPlaytimeTracking); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUGCAsyncActionStartPlaytimeTracking) \
	NO_API virtual ~USteamCoreUGCAsyncActionStartPlaytimeTracking();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_88_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_91_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_91_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_91_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_91_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USteamCoreUGCAsyncActionStartPlaytimeTracking;

// ********** End Class USteamCoreUGCAsyncActionStartPlaytimeTracking ******************************

// ********** Begin Class USteamCoreUGCAsyncActionUnsubscribeItem **********************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_116_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execUnsubscribeItemAsync);


struct Z_Construct_UClass_USteamCoreUGCAsyncActionUnsubscribeItem_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUGCAsyncActionUnsubscribeItem_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_116_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreUGCAsyncActionUnsubscribeItem(); \
	friend struct ::Z_Construct_UClass_USteamCoreUGCAsyncActionUnsubscribeItem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_USteamCoreUGCAsyncActionUnsubscribeItem_NoRegister(); \
public: \
	DECLARE_CLASS2(USteamCoreUGCAsyncActionUnsubscribeItem, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_USteamCoreUGCAsyncActionUnsubscribeItem_NoRegister) \
	DECLARE_SERIALIZER(USteamCoreUGCAsyncActionUnsubscribeItem)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_116_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUGCAsyncActionUnsubscribeItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USteamCoreUGCAsyncActionUnsubscribeItem(USteamCoreUGCAsyncActionUnsubscribeItem&&) = delete; \
	USteamCoreUGCAsyncActionUnsubscribeItem(const USteamCoreUGCAsyncActionUnsubscribeItem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUGCAsyncActionUnsubscribeItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUGCAsyncActionUnsubscribeItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUGCAsyncActionUnsubscribeItem) \
	NO_API virtual ~USteamCoreUGCAsyncActionUnsubscribeItem();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_113_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_116_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_116_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_116_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_116_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USteamCoreUGCAsyncActionUnsubscribeItem;

// ********** End Class USteamCoreUGCAsyncActionUnsubscribeItem ************************************

// ********** Begin Class USteamCoreUGCAsyncActionSubscribeItem ************************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_140_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execSubscribeItemAsync);


struct Z_Construct_UClass_USteamCoreUGCAsyncActionSubscribeItem_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUGCAsyncActionSubscribeItem_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_140_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreUGCAsyncActionSubscribeItem(); \
	friend struct ::Z_Construct_UClass_USteamCoreUGCAsyncActionSubscribeItem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_USteamCoreUGCAsyncActionSubscribeItem_NoRegister(); \
public: \
	DECLARE_CLASS2(USteamCoreUGCAsyncActionSubscribeItem, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_USteamCoreUGCAsyncActionSubscribeItem_NoRegister) \
	DECLARE_SERIALIZER(USteamCoreUGCAsyncActionSubscribeItem)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_140_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUGCAsyncActionSubscribeItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USteamCoreUGCAsyncActionSubscribeItem(USteamCoreUGCAsyncActionSubscribeItem&&) = delete; \
	USteamCoreUGCAsyncActionSubscribeItem(const USteamCoreUGCAsyncActionSubscribeItem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUGCAsyncActionSubscribeItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUGCAsyncActionSubscribeItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUGCAsyncActionSubscribeItem) \
	NO_API virtual ~USteamCoreUGCAsyncActionSubscribeItem();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_137_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_140_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_140_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_140_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_140_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USteamCoreUGCAsyncActionSubscribeItem;

// ********** End Class USteamCoreUGCAsyncActionSubscribeItem **************************************

// ********** Begin Class USteamCoreUGCAsyncActionRemoveItemFromFavorites **************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_164_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execRemoveItemFromFavoritesAsync);


struct Z_Construct_UClass_USteamCoreUGCAsyncActionRemoveItemFromFavorites_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUGCAsyncActionRemoveItemFromFavorites_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_164_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreUGCAsyncActionRemoveItemFromFavorites(); \
	friend struct ::Z_Construct_UClass_USteamCoreUGCAsyncActionRemoveItemFromFavorites_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_USteamCoreUGCAsyncActionRemoveItemFromFavorites_NoRegister(); \
public: \
	DECLARE_CLASS2(USteamCoreUGCAsyncActionRemoveItemFromFavorites, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_USteamCoreUGCAsyncActionRemoveItemFromFavorites_NoRegister) \
	DECLARE_SERIALIZER(USteamCoreUGCAsyncActionRemoveItemFromFavorites)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_164_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUGCAsyncActionRemoveItemFromFavorites(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USteamCoreUGCAsyncActionRemoveItemFromFavorites(USteamCoreUGCAsyncActionRemoveItemFromFavorites&&) = delete; \
	USteamCoreUGCAsyncActionRemoveItemFromFavorites(const USteamCoreUGCAsyncActionRemoveItemFromFavorites&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUGCAsyncActionRemoveItemFromFavorites); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUGCAsyncActionRemoveItemFromFavorites); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUGCAsyncActionRemoveItemFromFavorites) \
	NO_API virtual ~USteamCoreUGCAsyncActionRemoveItemFromFavorites();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_161_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_164_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_164_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_164_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_164_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USteamCoreUGCAsyncActionRemoveItemFromFavorites;

// ********** End Class USteamCoreUGCAsyncActionRemoveItemFromFavorites ****************************

// ********** Begin Class USteamCoreUGCAsyncActionAddItemToFavorites *******************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_189_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execAddItemToFavoritesAsync);


struct Z_Construct_UClass_USteamCoreUGCAsyncActionAddItemToFavorites_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUGCAsyncActionAddItemToFavorites_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_189_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreUGCAsyncActionAddItemToFavorites(); \
	friend struct ::Z_Construct_UClass_USteamCoreUGCAsyncActionAddItemToFavorites_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_USteamCoreUGCAsyncActionAddItemToFavorites_NoRegister(); \
public: \
	DECLARE_CLASS2(USteamCoreUGCAsyncActionAddItemToFavorites, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_USteamCoreUGCAsyncActionAddItemToFavorites_NoRegister) \
	DECLARE_SERIALIZER(USteamCoreUGCAsyncActionAddItemToFavorites)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_189_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUGCAsyncActionAddItemToFavorites(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USteamCoreUGCAsyncActionAddItemToFavorites(USteamCoreUGCAsyncActionAddItemToFavorites&&) = delete; \
	USteamCoreUGCAsyncActionAddItemToFavorites(const USteamCoreUGCAsyncActionAddItemToFavorites&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUGCAsyncActionAddItemToFavorites); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUGCAsyncActionAddItemToFavorites); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUGCAsyncActionAddItemToFavorites) \
	NO_API virtual ~USteamCoreUGCAsyncActionAddItemToFavorites();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_186_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_189_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_189_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_189_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_189_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USteamCoreUGCAsyncActionAddItemToFavorites;

// ********** End Class USteamCoreUGCAsyncActionAddItemToFavorites *********************************

// ********** Begin Class USteamCoreUGCAsyncActionGetUserItemVote **********************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_214_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execGetUserItemVoteAsync);


struct Z_Construct_UClass_USteamCoreUGCAsyncActionGetUserItemVote_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUGCAsyncActionGetUserItemVote_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_214_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreUGCAsyncActionGetUserItemVote(); \
	friend struct ::Z_Construct_UClass_USteamCoreUGCAsyncActionGetUserItemVote_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_USteamCoreUGCAsyncActionGetUserItemVote_NoRegister(); \
public: \
	DECLARE_CLASS2(USteamCoreUGCAsyncActionGetUserItemVote, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_USteamCoreUGCAsyncActionGetUserItemVote_NoRegister) \
	DECLARE_SERIALIZER(USteamCoreUGCAsyncActionGetUserItemVote)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_214_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUGCAsyncActionGetUserItemVote(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USteamCoreUGCAsyncActionGetUserItemVote(USteamCoreUGCAsyncActionGetUserItemVote&&) = delete; \
	USteamCoreUGCAsyncActionGetUserItemVote(const USteamCoreUGCAsyncActionGetUserItemVote&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUGCAsyncActionGetUserItemVote); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUGCAsyncActionGetUserItemVote); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUGCAsyncActionGetUserItemVote) \
	NO_API virtual ~USteamCoreUGCAsyncActionGetUserItemVote();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_211_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_214_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_214_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_214_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_214_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USteamCoreUGCAsyncActionGetUserItemVote;

// ********** End Class USteamCoreUGCAsyncActionGetUserItemVote ************************************

// ********** Begin Class USteamCoreUGCAsyncActionSetUserItemVote **********************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_238_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execSetUserItemVoteAsync);


struct Z_Construct_UClass_USteamCoreUGCAsyncActionSetUserItemVote_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUGCAsyncActionSetUserItemVote_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_238_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreUGCAsyncActionSetUserItemVote(); \
	friend struct ::Z_Construct_UClass_USteamCoreUGCAsyncActionSetUserItemVote_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_USteamCoreUGCAsyncActionSetUserItemVote_NoRegister(); \
public: \
	DECLARE_CLASS2(USteamCoreUGCAsyncActionSetUserItemVote, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_USteamCoreUGCAsyncActionSetUserItemVote_NoRegister) \
	DECLARE_SERIALIZER(USteamCoreUGCAsyncActionSetUserItemVote)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_238_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUGCAsyncActionSetUserItemVote(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USteamCoreUGCAsyncActionSetUserItemVote(USteamCoreUGCAsyncActionSetUserItemVote&&) = delete; \
	USteamCoreUGCAsyncActionSetUserItemVote(const USteamCoreUGCAsyncActionSetUserItemVote&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUGCAsyncActionSetUserItemVote); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUGCAsyncActionSetUserItemVote); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUGCAsyncActionSetUserItemVote) \
	NO_API virtual ~USteamCoreUGCAsyncActionSetUserItemVote();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_235_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_238_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_238_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_238_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_238_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USteamCoreUGCAsyncActionSetUserItemVote;

// ********** End Class USteamCoreUGCAsyncActionSetUserItemVote ************************************

// ********** Begin Class USteamCoreUGCAsyncActionSubmitItemUpdate *********************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_263_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execSubmitItemUpdateAsync);


struct Z_Construct_UClass_USteamCoreUGCAsyncActionSubmitItemUpdate_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUGCAsyncActionSubmitItemUpdate_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_263_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreUGCAsyncActionSubmitItemUpdate(); \
	friend struct ::Z_Construct_UClass_USteamCoreUGCAsyncActionSubmitItemUpdate_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_USteamCoreUGCAsyncActionSubmitItemUpdate_NoRegister(); \
public: \
	DECLARE_CLASS2(USteamCoreUGCAsyncActionSubmitItemUpdate, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_USteamCoreUGCAsyncActionSubmitItemUpdate_NoRegister) \
	DECLARE_SERIALIZER(USteamCoreUGCAsyncActionSubmitItemUpdate)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_263_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUGCAsyncActionSubmitItemUpdate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USteamCoreUGCAsyncActionSubmitItemUpdate(USteamCoreUGCAsyncActionSubmitItemUpdate&&) = delete; \
	USteamCoreUGCAsyncActionSubmitItemUpdate(const USteamCoreUGCAsyncActionSubmitItemUpdate&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUGCAsyncActionSubmitItemUpdate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUGCAsyncActionSubmitItemUpdate); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUGCAsyncActionSubmitItemUpdate) \
	NO_API virtual ~USteamCoreUGCAsyncActionSubmitItemUpdate();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_260_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_263_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_263_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_263_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_263_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USteamCoreUGCAsyncActionSubmitItemUpdate;

// ********** End Class USteamCoreUGCAsyncActionSubmitItemUpdate ***********************************

// ********** Begin Class USteamCoreUGCAsyncActionCreateItem ***************************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_289_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execCreateItemAsync);


struct Z_Construct_UClass_USteamCoreUGCAsyncActionCreateItem_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUGCAsyncActionCreateItem_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_289_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreUGCAsyncActionCreateItem(); \
	friend struct ::Z_Construct_UClass_USteamCoreUGCAsyncActionCreateItem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_USteamCoreUGCAsyncActionCreateItem_NoRegister(); \
public: \
	DECLARE_CLASS2(USteamCoreUGCAsyncActionCreateItem, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_USteamCoreUGCAsyncActionCreateItem_NoRegister) \
	DECLARE_SERIALIZER(USteamCoreUGCAsyncActionCreateItem)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_289_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUGCAsyncActionCreateItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USteamCoreUGCAsyncActionCreateItem(USteamCoreUGCAsyncActionCreateItem&&) = delete; \
	USteamCoreUGCAsyncActionCreateItem(const USteamCoreUGCAsyncActionCreateItem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUGCAsyncActionCreateItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUGCAsyncActionCreateItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUGCAsyncActionCreateItem) \
	NO_API virtual ~USteamCoreUGCAsyncActionCreateItem();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_286_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_289_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_289_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_289_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_289_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USteamCoreUGCAsyncActionCreateItem;

// ********** End Class USteamCoreUGCAsyncActionCreateItem *****************************************

// ********** Begin Class USteamCoreUGCAsyncActionSendQueryUGCRequest ******************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_314_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execSendQueryUGCRequestAsync);


struct Z_Construct_UClass_USteamCoreUGCAsyncActionSendQueryUGCRequest_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUGCAsyncActionSendQueryUGCRequest_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_314_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreUGCAsyncActionSendQueryUGCRequest(); \
	friend struct ::Z_Construct_UClass_USteamCoreUGCAsyncActionSendQueryUGCRequest_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_USteamCoreUGCAsyncActionSendQueryUGCRequest_NoRegister(); \
public: \
	DECLARE_CLASS2(USteamCoreUGCAsyncActionSendQueryUGCRequest, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_USteamCoreUGCAsyncActionSendQueryUGCRequest_NoRegister) \
	DECLARE_SERIALIZER(USteamCoreUGCAsyncActionSendQueryUGCRequest)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_314_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUGCAsyncActionSendQueryUGCRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USteamCoreUGCAsyncActionSendQueryUGCRequest(USteamCoreUGCAsyncActionSendQueryUGCRequest&&) = delete; \
	USteamCoreUGCAsyncActionSendQueryUGCRequest(const USteamCoreUGCAsyncActionSendQueryUGCRequest&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUGCAsyncActionSendQueryUGCRequest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUGCAsyncActionSendQueryUGCRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUGCAsyncActionSendQueryUGCRequest) \
	NO_API virtual ~USteamCoreUGCAsyncActionSendQueryUGCRequest();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_311_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_314_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_314_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_314_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_314_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USteamCoreUGCAsyncActionSendQueryUGCRequest;

// ********** End Class USteamCoreUGCAsyncActionSendQueryUGCRequest ********************************

// ********** Begin Class USteamCoreUGCAsyncActionAddAppDependency *********************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_340_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execAddAppDependencyAsync);


struct Z_Construct_UClass_USteamCoreUGCAsyncActionAddAppDependency_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUGCAsyncActionAddAppDependency_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_340_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreUGCAsyncActionAddAppDependency(); \
	friend struct ::Z_Construct_UClass_USteamCoreUGCAsyncActionAddAppDependency_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_USteamCoreUGCAsyncActionAddAppDependency_NoRegister(); \
public: \
	DECLARE_CLASS2(USteamCoreUGCAsyncActionAddAppDependency, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_USteamCoreUGCAsyncActionAddAppDependency_NoRegister) \
	DECLARE_SERIALIZER(USteamCoreUGCAsyncActionAddAppDependency)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_340_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUGCAsyncActionAddAppDependency(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USteamCoreUGCAsyncActionAddAppDependency(USteamCoreUGCAsyncActionAddAppDependency&&) = delete; \
	USteamCoreUGCAsyncActionAddAppDependency(const USteamCoreUGCAsyncActionAddAppDependency&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUGCAsyncActionAddAppDependency); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUGCAsyncActionAddAppDependency); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUGCAsyncActionAddAppDependency) \
	NO_API virtual ~USteamCoreUGCAsyncActionAddAppDependency();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_337_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_340_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_340_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_340_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_340_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USteamCoreUGCAsyncActionAddAppDependency;

// ********** End Class USteamCoreUGCAsyncActionAddAppDependency ***********************************

// ********** Begin Class USteamCoreUGCAsyncActionRemoveAppDependency ******************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_368_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execRemoveAppDependencyAsync);


struct Z_Construct_UClass_USteamCoreUGCAsyncActionRemoveAppDependency_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUGCAsyncActionRemoveAppDependency_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_368_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreUGCAsyncActionRemoveAppDependency(); \
	friend struct ::Z_Construct_UClass_USteamCoreUGCAsyncActionRemoveAppDependency_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_USteamCoreUGCAsyncActionRemoveAppDependency_NoRegister(); \
public: \
	DECLARE_CLASS2(USteamCoreUGCAsyncActionRemoveAppDependency, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_USteamCoreUGCAsyncActionRemoveAppDependency_NoRegister) \
	DECLARE_SERIALIZER(USteamCoreUGCAsyncActionRemoveAppDependency)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_368_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUGCAsyncActionRemoveAppDependency(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USteamCoreUGCAsyncActionRemoveAppDependency(USteamCoreUGCAsyncActionRemoveAppDependency&&) = delete; \
	USteamCoreUGCAsyncActionRemoveAppDependency(const USteamCoreUGCAsyncActionRemoveAppDependency&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUGCAsyncActionRemoveAppDependency); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUGCAsyncActionRemoveAppDependency); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUGCAsyncActionRemoveAppDependency) \
	NO_API virtual ~USteamCoreUGCAsyncActionRemoveAppDependency();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_365_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_368_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_368_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_368_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_368_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USteamCoreUGCAsyncActionRemoveAppDependency;

// ********** End Class USteamCoreUGCAsyncActionRemoveAppDependency ********************************

// ********** Begin Class USteamCoreUGCAsyncActionAddUGCDependency *********************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_393_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execAddDependencyAsync);


struct Z_Construct_UClass_USteamCoreUGCAsyncActionAddUGCDependency_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUGCAsyncActionAddUGCDependency_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_393_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreUGCAsyncActionAddUGCDependency(); \
	friend struct ::Z_Construct_UClass_USteamCoreUGCAsyncActionAddUGCDependency_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_USteamCoreUGCAsyncActionAddUGCDependency_NoRegister(); \
public: \
	DECLARE_CLASS2(USteamCoreUGCAsyncActionAddUGCDependency, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_USteamCoreUGCAsyncActionAddUGCDependency_NoRegister) \
	DECLARE_SERIALIZER(USteamCoreUGCAsyncActionAddUGCDependency)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_393_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUGCAsyncActionAddUGCDependency(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USteamCoreUGCAsyncActionAddUGCDependency(USteamCoreUGCAsyncActionAddUGCDependency&&) = delete; \
	USteamCoreUGCAsyncActionAddUGCDependency(const USteamCoreUGCAsyncActionAddUGCDependency&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUGCAsyncActionAddUGCDependency); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUGCAsyncActionAddUGCDependency); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUGCAsyncActionAddUGCDependency) \
	NO_API virtual ~USteamCoreUGCAsyncActionAddUGCDependency();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_390_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_393_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_393_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_393_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_393_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USteamCoreUGCAsyncActionAddUGCDependency;

// ********** End Class USteamCoreUGCAsyncActionAddUGCDependency ***********************************

// ********** Begin Class USteamCoreUGCAsyncActionRemoveUGCDependency ******************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_421_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execRemoveDependencyAsync);


struct Z_Construct_UClass_USteamCoreUGCAsyncActionRemoveUGCDependency_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUGCAsyncActionRemoveUGCDependency_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_421_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreUGCAsyncActionRemoveUGCDependency(); \
	friend struct ::Z_Construct_UClass_USteamCoreUGCAsyncActionRemoveUGCDependency_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_USteamCoreUGCAsyncActionRemoveUGCDependency_NoRegister(); \
public: \
	DECLARE_CLASS2(USteamCoreUGCAsyncActionRemoveUGCDependency, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_USteamCoreUGCAsyncActionRemoveUGCDependency_NoRegister) \
	DECLARE_SERIALIZER(USteamCoreUGCAsyncActionRemoveUGCDependency)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_421_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUGCAsyncActionRemoveUGCDependency(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USteamCoreUGCAsyncActionRemoveUGCDependency(USteamCoreUGCAsyncActionRemoveUGCDependency&&) = delete; \
	USteamCoreUGCAsyncActionRemoveUGCDependency(const USteamCoreUGCAsyncActionRemoveUGCDependency&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUGCAsyncActionRemoveUGCDependency); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUGCAsyncActionRemoveUGCDependency); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUGCAsyncActionRemoveUGCDependency) \
	NO_API virtual ~USteamCoreUGCAsyncActionRemoveUGCDependency();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_418_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_421_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_421_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_421_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_421_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USteamCoreUGCAsyncActionRemoveUGCDependency;

// ********** End Class USteamCoreUGCAsyncActionRemoveUGCDependency ********************************

// ********** Begin Class USteamCoreUGCAsyncActionDeleteItem ***************************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_446_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execDeleteItemAsync);


struct Z_Construct_UClass_USteamCoreUGCAsyncActionDeleteItem_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUGCAsyncActionDeleteItem_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_446_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreUGCAsyncActionDeleteItem(); \
	friend struct ::Z_Construct_UClass_USteamCoreUGCAsyncActionDeleteItem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_USteamCoreUGCAsyncActionDeleteItem_NoRegister(); \
public: \
	DECLARE_CLASS2(USteamCoreUGCAsyncActionDeleteItem, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_USteamCoreUGCAsyncActionDeleteItem_NoRegister) \
	DECLARE_SERIALIZER(USteamCoreUGCAsyncActionDeleteItem)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_446_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUGCAsyncActionDeleteItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USteamCoreUGCAsyncActionDeleteItem(USteamCoreUGCAsyncActionDeleteItem&&) = delete; \
	USteamCoreUGCAsyncActionDeleteItem(const USteamCoreUGCAsyncActionDeleteItem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUGCAsyncActionDeleteItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUGCAsyncActionDeleteItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUGCAsyncActionDeleteItem) \
	NO_API virtual ~USteamCoreUGCAsyncActionDeleteItem();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_443_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_446_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_446_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_446_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_446_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USteamCoreUGCAsyncActionDeleteItem;

// ********** End Class USteamCoreUGCAsyncActionDeleteItem *****************************************

// ********** Begin Class USteamCoreUGCAsyncActionGetAppDependencies *******************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_470_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execGetAppDependenciesAsync);


struct Z_Construct_UClass_USteamCoreUGCAsyncActionGetAppDependencies_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUGCAsyncActionGetAppDependencies_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_470_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreUGCAsyncActionGetAppDependencies(); \
	friend struct ::Z_Construct_UClass_USteamCoreUGCAsyncActionGetAppDependencies_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_USteamCoreUGCAsyncActionGetAppDependencies_NoRegister(); \
public: \
	DECLARE_CLASS2(USteamCoreUGCAsyncActionGetAppDependencies, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_USteamCoreUGCAsyncActionGetAppDependencies_NoRegister) \
	DECLARE_SERIALIZER(USteamCoreUGCAsyncActionGetAppDependencies)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_470_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUGCAsyncActionGetAppDependencies(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USteamCoreUGCAsyncActionGetAppDependencies(USteamCoreUGCAsyncActionGetAppDependencies&&) = delete; \
	USteamCoreUGCAsyncActionGetAppDependencies(const USteamCoreUGCAsyncActionGetAppDependencies&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUGCAsyncActionGetAppDependencies); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUGCAsyncActionGetAppDependencies); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUGCAsyncActionGetAppDependencies) \
	NO_API virtual ~USteamCoreUGCAsyncActionGetAppDependencies();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_467_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_470_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_470_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_470_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_470_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USteamCoreUGCAsyncActionGetAppDependencies;

// ********** End Class USteamCoreUGCAsyncActionGetAppDependencies *********************************

// ********** Begin Class USteamCoreUGCAsyncActionDownloadItem *************************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_496_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execDownloadItemAsync);


struct Z_Construct_UClass_USteamCoreUGCAsyncActionDownloadItem_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUGCAsyncActionDownloadItem_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_496_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreUGCAsyncActionDownloadItem(); \
	friend struct ::Z_Construct_UClass_USteamCoreUGCAsyncActionDownloadItem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_USteamCoreUGCAsyncActionDownloadItem_NoRegister(); \
public: \
	DECLARE_CLASS2(USteamCoreUGCAsyncActionDownloadItem, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_USteamCoreUGCAsyncActionDownloadItem_NoRegister) \
	DECLARE_SERIALIZER(USteamCoreUGCAsyncActionDownloadItem)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_496_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUGCAsyncActionDownloadItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USteamCoreUGCAsyncActionDownloadItem(USteamCoreUGCAsyncActionDownloadItem&&) = delete; \
	USteamCoreUGCAsyncActionDownloadItem(const USteamCoreUGCAsyncActionDownloadItem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUGCAsyncActionDownloadItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUGCAsyncActionDownloadItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUGCAsyncActionDownloadItem) \
	NO_API virtual ~USteamCoreUGCAsyncActionDownloadItem();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_493_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_496_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_496_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_496_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h_496_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USteamCoreUGCAsyncActionDownloadItem;

// ********** End Class USteamCoreUGCAsyncActionDownloadItem ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGCAsyncActions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
