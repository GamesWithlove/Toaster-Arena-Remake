// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamUGC/SteamUGC.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
#include "SteamCore/Public/SteamCore/SteamTypes.h"
#include "SteamCore/Public/SteamUGC/SteamUGCTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamUGC() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
	STEAMCORE_API UClass* Z_Construct_UClass_UUGC();
	STEAMCORE_API UClass* Z_Construct_UClass_UUGC_NoRegister();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamItemPreviewType();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamItemState();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamItemStatistic();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamItemUpdateStatus();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamRemoteStoragePublishedFileVisibility();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamUGCMatchingUGCType();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamUGCQuery();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamUserUGCList();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamUserUGCListSortOrder();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamWorkshopFileType();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnAddAppDependencyResult__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnAddItemToFavorites__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnAddUGCDependencyResult__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnCreateItem__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnDeleteItemResult__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnDownloadItemResult__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGetAppDependenciesResult__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGetUserItemVote__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnItemInstalled__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRemoveAppDependencyResult__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRemoveItemFromFavorites__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRemoveUGCDependencyResult__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSendQueryUGCRequest__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSetUserItemVote__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnStartPlaytimeTracking__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnStopPlaytimeTracking__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnStopPlaytimeTrackingForAllItems__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSubmitItemUpdate__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSubscribeItem__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnUnsubscribeItem__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnUserSubscribedItemsListChanged__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FPublishedFileID();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamUGCDetails();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FUGCQueryHandle();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FUGCUpdateHandle();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	DEFINE_FUNCTION(UUGC::execUpdateItemPreviewVideo)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_Handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FStrProperty,Z_Param_PreviewVideo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::UpdateItemPreviewVideo(Z_Param_Handle,Z_Param_Index,Z_Param_PreviewVideo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execUpdateItemPreviewFile)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_Handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FStrProperty,Z_Param_PreviewFile);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::UpdateItemPreviewFile(Z_Param_Handle,Z_Param_index,Z_Param_PreviewFile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execUnsubscribeItem)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_STRUCT(FPublishedFileID,Z_Param_PublishedFileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnsubscribeItem(FOnUnsubscribeItem(Z_Param_Out_Callback),Z_Param_PublishedFileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSuspendDownloads)
	{
		P_GET_UBOOL(Z_Param_bSuspend);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUGC::SuspendDownloads(Z_Param_bSuspend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSubscribeItem)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_STRUCT(FPublishedFileID,Z_Param_PublishedFileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SubscribeItem(FOnSubscribeItem(Z_Param_Out_Callback),Z_Param_PublishedFileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSubmitItemUpdate)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_Handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_ChangeNote);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SubmitItemUpdate(FOnSubmitItemUpdate(Z_Param_Out_Callback),Z_Param_Handle,Z_Param_ChangeNote);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execStopPlaytimeTrackingForAllItems)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopPlaytimeTrackingForAllItems(FOnStopPlaytimeTrackingForAllItems(Z_Param_Out_Callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execStopPlaytimeTracking)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_TARRAY(FPublishedFileID,Z_Param_PublishedFileIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopPlaytimeTracking(FOnStopPlaytimeTracking(Z_Param_Out_Callback),Z_Param_PublishedFileIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execStartPlaytimeTracking)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_TARRAY(FPublishedFileID,Z_Param_PublishedFileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartPlaytimeTracking(FOnStartPlaytimeTracking(Z_Param_Out_Callback),Z_Param_PublishedFileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execStartItemUpdate)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ConsumerAppID);
		P_GET_STRUCT(FPublishedFileID,Z_Param_PublishedFileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUGCUpdateHandle*)Z_Param__Result=UUGC::StartItemUpdate(Z_Param_ConsumerAppID,Z_Param_PublishedFileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetUserItemVote)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_STRUCT(FPublishedFileID,Z_Param_PublishedFileID);
		P_GET_UBOOL(Z_Param_bVoteUp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUserItemVote(FOnSetUserItemVote(Z_Param_Out_Callback),Z_Param_PublishedFileID,Z_Param_bVoteUp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetSearchText)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_SearchText);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetSearchText(Z_Param_Handle,Z_Param_SearchText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetReturnTotalOnly)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_GET_UBOOL(Z_Param_bReturnTotalOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetReturnTotalOnly(Z_Param_Handle,Z_Param_bReturnTotalOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetReturnPlaytimeStats)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_Days);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetReturnPlaytimeStats(Z_Param_Handle,Z_Param_Days);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetReturnOnlyIDs)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_GET_UBOOL(Z_Param_bReturnOnlyIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetReturnOnlyIDs(Z_Param_Handle,Z_Param_bReturnOnlyIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetReturnMetadata)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_GET_UBOOL(Z_Param_bReturnMetadata);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetReturnMetadata(Z_Param_Handle,Z_Param_bReturnMetadata);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetReturnLongDescription)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_GET_UBOOL(Z_Param_bReturnLongDescription);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetReturnLongDescription(Z_Param_Handle,Z_Param_bReturnLongDescription);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetReturnKeyValueTags)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_GET_UBOOL(Z_Param_bReturnKeyValueTags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetReturnKeyValueTags(Z_Param_Handle,Z_Param_bReturnKeyValueTags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetReturnChildren)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_GET_UBOOL(Z_Param_bReturnChildren);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetReturnChildren(Z_Param_Handle,Z_Param_bReturnChildren);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetReturnAdditionalPreviews)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_GET_UBOOL(Z_Param_bReturnAdditionalPreviews);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetReturnAdditionalPreviews(Z_Param_Handle,Z_Param_bReturnAdditionalPreviews);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetRankedByTrendDays)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_Days);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetRankedByTrendDays(Z_Param_Handle,Z_Param_Days);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetMatchAnyTag)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_GET_UBOOL(Z_Param_bMatchAnyTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetMatchAnyTag(Z_Param_Handle,Z_Param_bMatchAnyTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetLanguage)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_Language);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetLanguage(Z_Param_Handle,Z_Param_Language);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetItemVisibility)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_Handle);
		P_GET_ENUM(ESteamRemoteStoragePublishedFileVisibility,Z_Param_Visibility);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetItemVisibility(Z_Param_Handle,ESteamRemoteStoragePublishedFileVisibility(Z_Param_Visibility));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetItemUpdateLanguage)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_Handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_Language);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetItemUpdateLanguage(Z_Param_Handle,Z_Param_Language);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetItemTitle)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_Handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_Title);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetItemTitle(Z_Param_Handle,Z_Param_Title);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetItemTags)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_Handle);
		P_GET_TARRAY(FString,Z_Param_Tags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetItemTags(Z_Param_Handle,Z_Param_Tags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetItemPreview)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_Handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_PreviewFile);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetItemPreview(Z_Param_Handle,Z_Param_PreviewFile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetItemMetadata)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_Handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_MetaData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetItemMetadata(Z_Param_Handle,Z_Param_MetaData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetItemDescription)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_Handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_Description);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetItemDescription(Z_Param_Handle,Z_Param_Description);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetItemContent)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_Handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_ContentFolder);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetItemContent(Z_Param_Handle,Z_Param_ContentFolder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetCloudFileNameFilter)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_MatchCloudFileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetCloudFileNameFilter(Z_Param_Handle,Z_Param_MatchCloudFileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetAllowLegacyUpload)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_Handle);
		P_GET_UBOOL(Z_Param_bAllowLegacyUpload);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetAllowLegacyUpload(Z_Param_Handle,Z_Param_bAllowLegacyUpload);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetAllowCachedResponse)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxAgeSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetAllowCachedResponse(Z_Param_Handle,Z_Param_MaxAgeSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSendQueryUGCRequest)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendQueryUGCRequest(FOnSendQueryUGCRequest(Z_Param_Out_Callback),Z_Param_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execRemoveItemPreview)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_Handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::RemoveItemPreview(Z_Param_Handle,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execRemoveItemKeyValueTags)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_Handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::RemoveItemKeyValueTags(Z_Param_Handle,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execRemoveItemFromFavorites)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
		P_GET_STRUCT(FPublishedFileID,Z_Param_PublishedFileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveItemFromFavorites(FOnRemoveItemFromFavorites(Z_Param_Out_Callback),Z_Param_AppId,Z_Param_PublishedFileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execRemoveDependency)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_STRUCT(FPublishedFileID,Z_Param_ParentPublishedFileID);
		P_GET_STRUCT(FPublishedFileID,Z_Param_ChildPublishedFileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveDependency(FOnRemoveUGCDependencyResult(Z_Param_Out_Callback),Z_Param_ParentPublishedFileID,Z_Param_ChildPublishedFileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execRemoveAppDependency)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_STRUCT(FPublishedFileID,Z_Param_PublishedFileID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAppDependency(FOnRemoveAppDependencyResult(Z_Param_Out_Callback),Z_Param_PublishedFileID,Z_Param_AppId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execReleaseQueryUGCRequest)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::ReleaseQueryUGCRequest(Z_Param_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execGetUserItemVote)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_STRUCT(FPublishedFileID,Z_Param_PublishedFileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetUserItemVote(FOnGetUserItemVote(Z_Param_Out_Callback),Z_Param_PublishedFileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execGetSubscribedItems)
	{
		P_GET_TARRAY_REF(FPublishedFileID,Z_Param_Out_PublishedFileIDs);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxEntries);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUGC::GetSubscribedItems(Z_Param_Out_PublishedFileIDs,Z_Param_MaxEntries);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execGetQueryUGCStatistic)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_ENUM(ESteamItemStatistic,Z_Param_StatType);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_StatValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::GetQueryUGCStatistic(Z_Param_Handle,Z_Param_Index,ESteamItemStatistic(Z_Param_StatType),Z_Param_Out_StatValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execGetQueryUGCTagDisplayName)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param_IndexTag);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::GetQueryUGCTagDisplayName(Z_Param_Handle,Z_Param_Index,Z_Param_IndexTag,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execGetQueryUGCTag)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param_IndexTag);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::GetQueryUGCTag(Z_Param_Handle,Z_Param_Index,Z_Param_IndexTag,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execGetQueryUGCNumTags)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUGC::GetQueryUGCNumTags(Z_Param_Handle,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execGetQueryUGCResult)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT_REF(FSteamUGCDetails,Z_Param_Out_Details);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::GetQueryUGCResult(Z_Param_Handle,Z_Param_Index,Z_Param_Out_Details);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execGetQueryUGCPreviewURL)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_URL);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::GetQueryUGCPreviewURL(Z_Param_Handle,Z_Param_Index,Z_Param_Out_URL);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execGetQueryUGCNumKeyValueTags)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUGC::GetQueryUGCNumKeyValueTags(Z_Param_Handle,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execGetQueryUGCNumAdditionalPreviews)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUGC::GetQueryUGCNumAdditionalPreviews(Z_Param_Handle,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execGetQueryUGCMetadata)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_MetaData);
		P_GET_PROPERTY(FIntProperty,Z_Param_MetadataSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::GetQueryUGCMetadata(Z_Param_Handle,Z_Param_Index,Z_Param_Out_MetaData,Z_Param_MetadataSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execGetQueryUGCKeyValueTag)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param_KeyValueTagIndex);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Key);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::GetQueryUGCKeyValueTag(Z_Param_Handle,Z_Param_Index,Z_Param_KeyValueTagIndex,Z_Param_Out_Key,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execGetQueryUGCChildren)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_TARRAY_REF(FPublishedFileID,Z_Param_Out_PublishedFileIDs);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxEntries);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::GetQueryUGCChildren(Z_Param_Handle,Z_Param_Index,Z_Param_Out_PublishedFileIDs,Z_Param_MaxEntries);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execGetQueryUGCAdditionalPreview)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param_PreviewIndex);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_URLOrVideoID);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OriginalFileName);
		P_GET_ENUM_REF(ESteamItemPreviewType,Z_Param_Out_PreviewType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::GetQueryUGCAdditionalPreview(Z_Param_Handle,Z_Param_Index,Z_Param_PreviewIndex,Z_Param_Out_URLOrVideoID,Z_Param_Out_OriginalFileName,(ESteamItemPreviewType&)(Z_Param_Out_PreviewType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execGetNumSubscribedItems)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUGC::GetNumSubscribedItems();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execGetItemUpdateProgress)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_Handle);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BytesProcessed);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BytesTotal);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamItemUpdateStatus*)Z_Param__Result=UUGC::GetItemUpdateProgress(Z_Param_Handle,Z_Param_Out_BytesProcessed,Z_Param_Out_BytesTotal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execGetItemState)
	{
		P_GET_STRUCT(FPublishedFileID,Z_Param_PublishedFileID);
		P_GET_TARRAY_REF(ESteamItemState,Z_Param_Out_States);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUGC::GetItemState(Z_Param_PublishedFileID,Z_Param_Out_States);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execGetItemInstallInfo)
	{
		P_GET_STRUCT(FPublishedFileID,Z_Param_PublishedFileID);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SizeOnDisk);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Folder);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_TimeStamp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::GetItemInstallInfo(Z_Param_PublishedFileID,Z_Param_Out_SizeOnDisk,Z_Param_Out_Folder,Z_Param_Out_TimeStamp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execGetItemDownloadInfo)
	{
		P_GET_STRUCT(FPublishedFileID,Z_Param_PublishedFileID);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BytesDownloaded);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BytesTotal);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::GetItemDownloadInfo(Z_Param_PublishedFileID,Z_Param_Out_BytesDownloaded,Z_Param_Out_BytesTotal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execGetAppDependencies)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_STRUCT(FPublishedFileID,Z_Param_PublishedFileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAppDependencies(FOnGetAppDependenciesResult(Z_Param_Out_Callback),Z_Param_PublishedFileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execDownloadItem)
	{
		P_GET_STRUCT(FPublishedFileID,Z_Param_PublishedFileID);
		P_GET_UBOOL(Z_Param_bHighPriority);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::DownloadItem(Z_Param_PublishedFileID,Z_Param_bHighPriority);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execDeleteItem)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_STRUCT(FPublishedFileID,Z_Param_PublishedFileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteItem(FOnDeleteItemResult(Z_Param_Out_Callback),Z_Param_PublishedFileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execCreateQueryUserUGCRequest)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamID);
		P_GET_ENUM(ESteamUserUGCList,Z_Param_ListType);
		P_GET_ENUM(ESteamUGCMatchingUGCType,Z_Param_MatchingUGCType);
		P_GET_ENUM(ESteamUserUGCListSortOrder,Z_Param_SortOrder);
		P_GET_PROPERTY(FIntProperty,Z_Param_CreatorAppID);
		P_GET_PROPERTY(FIntProperty,Z_Param_ConsumerAppID);
		P_GET_PROPERTY(FIntProperty,Z_Param_Page);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUGCQueryHandle*)Z_Param__Result=UUGC::CreateQueryUserUGCRequest(Z_Param_SteamID,ESteamUserUGCList(Z_Param_ListType),ESteamUGCMatchingUGCType(Z_Param_MatchingUGCType),ESteamUserUGCListSortOrder(Z_Param_SortOrder),Z_Param_CreatorAppID,Z_Param_ConsumerAppID,Z_Param_Page);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execCreateQueryUGCDetailsRequest)
	{
		P_GET_TARRAY(FPublishedFileID,Z_Param_PublishedFileIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUGCQueryHandle*)Z_Param__Result=UUGC::CreateQueryUGCDetailsRequest(Z_Param_PublishedFileIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execCreateQueryAllUGCRequest)
	{
		P_GET_ENUM(ESteamUGCQuery,Z_Param_QueryType);
		P_GET_ENUM(ESteamUGCMatchingUGCType,Z_Param_FileType);
		P_GET_PROPERTY(FIntProperty,Z_Param_CreatorAppID);
		P_GET_PROPERTY(FIntProperty,Z_Param_ConsumerAppID);
		P_GET_PROPERTY(FIntProperty,Z_Param_Page);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUGCQueryHandle*)Z_Param__Result=UUGC::CreateQueryAllUGCRequest(ESteamUGCQuery(Z_Param_QueryType),ESteamUGCMatchingUGCType(Z_Param_FileType),Z_Param_CreatorAppID,Z_Param_ConsumerAppID,Z_Param_Page);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execCreateItem)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FIntProperty,Z_Param_ConsumerAppID);
		P_GET_ENUM(ESteamWorkshopFileType,Z_Param_FileType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateItem(FOnCreateItem(Z_Param_Out_Callback),Z_Param_ConsumerAppID,ESteamWorkshopFileType(Z_Param_FileType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execBInitWorkshopForGameServer)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_WorkshopDepotID);
		P_GET_PROPERTY(FStrProperty,Z_Param_Folder);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::BInitWorkshopForGameServer(Z_Param_WorkshopDepotID,Z_Param_Folder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execAddRequiredTagGroup)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_GET_TARRAY(FString,Z_Param_TagGroups);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::AddRequiredTagGroup(Z_Param_Handle,Z_Param_TagGroups);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execAddRequiredTag)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_TagName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::AddRequiredTag(Z_Param_Handle,Z_Param_TagName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execAddRequiredKeyValueTag)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::AddRequiredKeyValueTag(Z_Param_Handle,Z_Param_Key,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execAddItemToFavorites)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
		P_GET_STRUCT(FPublishedFileID,Z_Param_PublishedFileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddItemToFavorites(FOnAddItemToFavorites(Z_Param_Out_Callback),Z_Param_AppId,Z_Param_PublishedFileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execAddItemPreviewVideo)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_Handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_VideoID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::AddItemPreviewVideo(Z_Param_Handle,Z_Param_VideoID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execAddItemPreviewFile)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_Handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_PreviewFile);
		P_GET_ENUM(ESteamItemPreviewType,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::AddItemPreviewFile(Z_Param_Handle,Z_Param_PreviewFile,ESteamItemPreviewType(Z_Param_Type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execAddItemKeyValueTag)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_Handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::AddItemKeyValueTag(Z_Param_Handle,Z_Param_Key,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execAddExcludedTag)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_TagName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::AddExcludedTag(Z_Param_Handle,Z_Param_TagName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execAddDependency)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_STRUCT(FPublishedFileID,Z_Param_PublishedFileID);
		P_GET_STRUCT(FPublishedFileID,Z_Param_ChildPublishedFileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddDependency(FOnAddUGCDependencyResult(Z_Param_Out_Callback),Z_Param_PublishedFileID,Z_Param_ChildPublishedFileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execAddAppDependency)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_STRUCT(FPublishedFileID,Z_Param_PublishedFileID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAppDependency(FOnAddAppDependencyResult(Z_Param_Out_Callback),Z_Param_PublishedFileID,Z_Param_AppId);
		P_NATIVE_END;
	}
	void UUGC::StaticRegisterNativesUUGC()
	{
		UClass* Class = UUGC::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAppDependency", &UUGC::execAddAppDependency },
			{ "AddDependency", &UUGC::execAddDependency },
			{ "AddExcludedTag", &UUGC::execAddExcludedTag },
			{ "AddItemKeyValueTag", &UUGC::execAddItemKeyValueTag },
			{ "AddItemPreviewFile", &UUGC::execAddItemPreviewFile },
			{ "AddItemPreviewVideo", &UUGC::execAddItemPreviewVideo },
			{ "AddItemToFavorites", &UUGC::execAddItemToFavorites },
			{ "AddRequiredKeyValueTag", &UUGC::execAddRequiredKeyValueTag },
			{ "AddRequiredTag", &UUGC::execAddRequiredTag },
			{ "AddRequiredTagGroup", &UUGC::execAddRequiredTagGroup },
			{ "BInitWorkshopForGameServer", &UUGC::execBInitWorkshopForGameServer },
			{ "CreateItem", &UUGC::execCreateItem },
			{ "CreateQueryAllUGCRequest", &UUGC::execCreateQueryAllUGCRequest },
			{ "CreateQueryUGCDetailsRequest", &UUGC::execCreateQueryUGCDetailsRequest },
			{ "CreateQueryUserUGCRequest", &UUGC::execCreateQueryUserUGCRequest },
			{ "DeleteItem", &UUGC::execDeleteItem },
			{ "DownloadItem", &UUGC::execDownloadItem },
			{ "GetAppDependencies", &UUGC::execGetAppDependencies },
			{ "GetItemDownloadInfo", &UUGC::execGetItemDownloadInfo },
			{ "GetItemInstallInfo", &UUGC::execGetItemInstallInfo },
			{ "GetItemState", &UUGC::execGetItemState },
			{ "GetItemUpdateProgress", &UUGC::execGetItemUpdateProgress },
			{ "GetNumSubscribedItems", &UUGC::execGetNumSubscribedItems },
			{ "GetQueryUGCAdditionalPreview", &UUGC::execGetQueryUGCAdditionalPreview },
			{ "GetQueryUGCChildren", &UUGC::execGetQueryUGCChildren },
			{ "GetQueryUGCKeyValueTag", &UUGC::execGetQueryUGCKeyValueTag },
			{ "GetQueryUGCMetadata", &UUGC::execGetQueryUGCMetadata },
			{ "GetQueryUGCNumAdditionalPreviews", &UUGC::execGetQueryUGCNumAdditionalPreviews },
			{ "GetQueryUGCNumKeyValueTags", &UUGC::execGetQueryUGCNumKeyValueTags },
			{ "GetQueryUGCNumTags", &UUGC::execGetQueryUGCNumTags },
			{ "GetQueryUGCPreviewURL", &UUGC::execGetQueryUGCPreviewURL },
			{ "GetQueryUGCResult", &UUGC::execGetQueryUGCResult },
			{ "GetQueryUGCStatistic", &UUGC::execGetQueryUGCStatistic },
			{ "GetQueryUGCTag", &UUGC::execGetQueryUGCTag },
			{ "GetQueryUGCTagDisplayName", &UUGC::execGetQueryUGCTagDisplayName },
			{ "GetSubscribedItems", &UUGC::execGetSubscribedItems },
			{ "GetUserItemVote", &UUGC::execGetUserItemVote },
			{ "ReleaseQueryUGCRequest", &UUGC::execReleaseQueryUGCRequest },
			{ "RemoveAppDependency", &UUGC::execRemoveAppDependency },
			{ "RemoveDependency", &UUGC::execRemoveDependency },
			{ "RemoveItemFromFavorites", &UUGC::execRemoveItemFromFavorites },
			{ "RemoveItemKeyValueTags", &UUGC::execRemoveItemKeyValueTags },
			{ "RemoveItemPreview", &UUGC::execRemoveItemPreview },
			{ "SendQueryUGCRequest", &UUGC::execSendQueryUGCRequest },
			{ "SetAllowCachedResponse", &UUGC::execSetAllowCachedResponse },
			{ "SetAllowLegacyUpload", &UUGC::execSetAllowLegacyUpload },
			{ "SetCloudFileNameFilter", &UUGC::execSetCloudFileNameFilter },
			{ "SetItemContent", &UUGC::execSetItemContent },
			{ "SetItemDescription", &UUGC::execSetItemDescription },
			{ "SetItemMetadata", &UUGC::execSetItemMetadata },
			{ "SetItemPreview", &UUGC::execSetItemPreview },
			{ "SetItemTags", &UUGC::execSetItemTags },
			{ "SetItemTitle", &UUGC::execSetItemTitle },
			{ "SetItemUpdateLanguage", &UUGC::execSetItemUpdateLanguage },
			{ "SetItemVisibility", &UUGC::execSetItemVisibility },
			{ "SetLanguage", &UUGC::execSetLanguage },
			{ "SetMatchAnyTag", &UUGC::execSetMatchAnyTag },
			{ "SetRankedByTrendDays", &UUGC::execSetRankedByTrendDays },
			{ "SetReturnAdditionalPreviews", &UUGC::execSetReturnAdditionalPreviews },
			{ "SetReturnChildren", &UUGC::execSetReturnChildren },
			{ "SetReturnKeyValueTags", &UUGC::execSetReturnKeyValueTags },
			{ "SetReturnLongDescription", &UUGC::execSetReturnLongDescription },
			{ "SetReturnMetadata", &UUGC::execSetReturnMetadata },
			{ "SetReturnOnlyIDs", &UUGC::execSetReturnOnlyIDs },
			{ "SetReturnPlaytimeStats", &UUGC::execSetReturnPlaytimeStats },
			{ "SetReturnTotalOnly", &UUGC::execSetReturnTotalOnly },
			{ "SetSearchText", &UUGC::execSetSearchText },
			{ "SetUserItemVote", &UUGC::execSetUserItemVote },
			{ "StartItemUpdate", &UUGC::execStartItemUpdate },
			{ "StartPlaytimeTracking", &UUGC::execStartPlaytimeTracking },
			{ "StopPlaytimeTracking", &UUGC::execStopPlaytimeTracking },
			{ "StopPlaytimeTrackingForAllItems", &UUGC::execStopPlaytimeTrackingForAllItems },
			{ "SubmitItemUpdate", &UUGC::execSubmitItemUpdate },
			{ "SubscribeItem", &UUGC::execSubscribeItem },
			{ "SuspendDownloads", &UUGC::execSuspendDownloads },
			{ "UnsubscribeItem", &UUGC::execUnsubscribeItem },
			{ "UpdateItemPreviewFile", &UUGC::execUpdateItemPreviewFile },
			{ "UpdateItemPreviewVideo", &UUGC::execUpdateItemPreviewVideo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUGC_AddAppDependency_Statics
	{
		struct UGC_eventAddAppDependency_Parms
		{
			FScriptDelegate Callback;
			FPublishedFileID PublishedFileID;
			int32 AppId;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_AddAppDependency_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_AddAppDependency_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventAddAppDependency_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnAddAppDependencyResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUGC_AddAppDependency_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddAppDependency_Statics::NewProp_Callback_MetaData)) }; // 194946240
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_AddAppDependency_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventAddAppDependency_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) }; // 661584633
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_AddAppDependency_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventAddAppDependency_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_AddAppDependency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddAppDependency_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddAppDependency_Statics::NewProp_PublishedFileID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddAppDependency_Statics::NewProp_AppId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_AddAppDependency_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Adds a dependency between the given item and the appid. \n\x09*\n\x09* This list of dependencies can be retrieved by calling GetAppDependencies. \n\x09* This is a soft-dependency that is displayed on the web. \n\x09* It is up to the application to determine whether the item can actually be used or not.\n\x09*\n\x09* @param\x09PublishedFileID\x09\x09The item.\n\x09* @param\x09""AppId\x09\x09\x09\x09The required app/dlc.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Adds a dependency between the given item and the appid.\n\nThis list of dependencies can be retrieved by calling GetAppDependencies.\nThis is a soft-dependency that is displayed on the web.\nIt is up to the application to determine whether the item can actually be used or not.\n\n@param        PublishedFileID         The item.\n@param        AppId                           The required app/dlc." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_AddAppDependency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "AddAppDependency", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_AddAppDependency_Statics::UGC_eventAddAppDependency_Parms), Z_Construct_UFunction_UUGC_AddAppDependency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddAppDependency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_AddAppDependency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddAppDependency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_AddAppDependency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_AddAppDependency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_AddDependency_Statics
	{
		struct UGC_eventAddDependency_Parms
		{
			FScriptDelegate Callback;
			FPublishedFileID PublishedFileID;
			FPublishedFileID ChildPublishedFileID;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChildPublishedFileID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_AddDependency_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_AddDependency_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventAddDependency_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnAddUGCDependencyResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUGC_AddDependency_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddDependency_Statics::NewProp_Callback_MetaData)) }; // 483284446
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_AddDependency_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventAddDependency_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) }; // 661584633
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_AddDependency_Statics::NewProp_ChildPublishedFileID = { "ChildPublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventAddDependency_Parms, ChildPublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) }; // 661584633
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_AddDependency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddDependency_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddDependency_Statics::NewProp_PublishedFileID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddDependency_Statics::NewProp_ChildPublishedFileID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_AddDependency_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Adds a workshop item as a dependency to the specified item. \n\x09*\n\x09* If the nParentPublishedFileID item is of type k_EWorkshopFileTypeCollection, than the nChildPublishedFileID is simply added to that collection. \n\x09* Otherwise, the dependency is a soft one that is displayed on the web and can be retrieved via the ISteamUGC \n\x09* API using a combination of the m_unNumChildren member variable of the SteamUGCDetails_t struct and GetQueryUGCChildren.\n\x09*\n\x09* @param\x09PublishedFileID\x09\x09\x09The workshop item to add a dependency to.\n\x09* @param\x09""ChildPublishedFileID\x09The dependency to add to the parent.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Adds a workshop item as a dependency to the specified item.\n\nIf the nParentPublishedFileID item is of type k_EWorkshopFileTypeCollection, than the nChildPublishedFileID is simply added to that collection.\nOtherwise, the dependency is a soft one that is displayed on the web and can be retrieved via the ISteamUGC\nAPI using a combination of the m_unNumChildren member variable of the SteamUGCDetails_t struct and GetQueryUGCChildren.\n\n@param        PublishedFileID                 The workshop item to add a dependency to.\n@param        ChildPublishedFileID    The dependency to add to the parent." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_AddDependency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "AddDependency", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_AddDependency_Statics::UGC_eventAddDependency_Parms), Z_Construct_UFunction_UUGC_AddDependency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddDependency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_AddDependency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddDependency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_AddDependency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_AddDependency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_AddExcludedTag_Statics
	{
		struct UGC_eventAddExcludedTag_Parms
		{
			FUGCQueryHandle Handle;
			FString TagName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FStrPropertyParams NewProp_TagName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventAddExcludedTag_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 1676725136
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::NewProp_TagName = { "TagName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventAddExcludedTag_Parms, TagName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventAddExcludedTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_eventAddExcludedTag_Parms), &Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::NewProp_TagName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Adds a excluded tag to a pending UGC Query. This will only return UGC without the specified tag.\n\x09*\n\x09* NOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\x09*\n\x09* @param\x09Handle\x09\x09The UGC query Handle to customize.\n\x09* @param\x09TagName\x09\x09The tag that must NOT be attached to the UGC to receive it.\x09\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Adds a excluded tag to a pending UGC Query. This will only return UGC without the specified tag.\n\nNOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\n@param        Handle          The UGC query Handle to customize.\n@param        TagName         The tag that must NOT be attached to the UGC to receive it." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "AddExcludedTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::UGC_eventAddExcludedTag_Parms), Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_AddExcludedTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics
	{
		struct UGC_eventAddItemKeyValueTag_Parms
		{
			FUGCUpdateHandle Handle;
			FString Key;
			FString Value;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventAddItemKeyValueTag_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) }; // 4003650614
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventAddItemKeyValueTag_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventAddItemKeyValueTag_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventAddItemKeyValueTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_eventAddItemKeyValueTag_Parms), &Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Adds a Key-Value tag pair to an item. Keys can map to multiple different Values (1-to-many relationship).\n\x09*\n\x09* Key names are restricted to alpha-numeric characters and the '_' character.\n\x09* Both Keys and Values cannot exceed 255 characters in length.\n\x09* Key-Value tags are searchable by exact match only.\n\x09* NOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09The workshop item update Handle to customize.\n\x09* @param\x09Key\x09\x09\x09\x09The Key to set on the item.\n\x09* @param\x09Value\x09\x09\x09""A Value to map to the Key.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Adds a Key-Value tag pair to an item. Keys can map to multiple different Values (1-to-many relationship).\n\nKey names are restricted to alpha-numeric characters and the '_' character.\nBoth Keys and Values cannot exceed 255 characters in length.\nKey-Value tags are searchable by exact match only.\nNOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\n@param        Handle                  The workshop item update Handle to customize.\n@param        Key                             The Key to set on the item.\n@param        Value                   A Value to map to the Key." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "AddItemKeyValueTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::UGC_eventAddItemKeyValueTag_Parms), Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_AddItemKeyValueTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics
	{
		struct UGC_eventAddItemPreviewFile_Parms
		{
			FUGCUpdateHandle Handle;
			FString PreviewFile;
			ESteamItemPreviewType Type;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PreviewFile;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventAddItemPreviewFile_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) }; // 4003650614
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::NewProp_PreviewFile = { "PreviewFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventAddItemPreviewFile_Parms, PreviewFile), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventAddItemPreviewFile_Parms, Type), Z_Construct_UEnum_SteamCore_ESteamItemPreviewType, METADATA_PARAMS(nullptr, 0) }; // 3608386345
	void Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventAddItemPreviewFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_eventAddItemPreviewFile_Parms), &Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::NewProp_PreviewFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Adds an additional preview file for the item.\n\x09*\n\x09* Then the format of the image should be one that both the web and the application (if necessary) can render, and must be under 1MB. Suggested formats include JPG, PNG and GIF.\n\x09* NOTE: Using k_EItemPreviewType_YouTubeVideo or k_EItemPreviewType_Sketchfab are not currently supported with this API. For YouTube videos you should use AddItemPreviewVideo.\n\x09* NOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09The workshop item update Handle to customize.\n\x09* @param\x09PreviewFile\x09\x09""Absolute path to the local image.\n\x09* @param\x09Type\x09\x09\x09The type of this preview.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Adds an additional preview file for the item.\n\nThen the format of the image should be one that both the web and the application (if necessary) can render, and must be under 1MB. Suggested formats include JPG, PNG and GIF.\nNOTE: Using k_EItemPreviewType_YouTubeVideo or k_EItemPreviewType_Sketchfab are not currently supported with this API. For YouTube videos you should use AddItemPreviewVideo.\nNOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\n@param        Handle                  The workshop item update Handle to customize.\n@param        PreviewFile             Absolute path to the local image.\n@param        Type                    The type of this preview." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "AddItemPreviewFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::UGC_eventAddItemPreviewFile_Parms), Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_AddItemPreviewFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics
	{
		struct UGC_eventAddItemPreviewVideo_Parms
		{
			FUGCUpdateHandle Handle;
			FString VideoID;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FStrPropertyParams NewProp_VideoID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventAddItemPreviewVideo_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) }; // 4003650614
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::NewProp_VideoID = { "VideoID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventAddItemPreviewVideo_Parms, VideoID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventAddItemPreviewVideo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_eventAddItemPreviewVideo_Parms), &Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::NewProp_VideoID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Adds an additional video preview from YouTube for the item.\n\x09*\n\x09* NOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\x09*\x09\n\x09* @param\x09Handle\x09\x09\x09The workshop item update Handle to customize.\n\x09* @param\x09VideoID\x09\x09\x09The YouTube video ID to add. (e.g. \"jHgZh4GV9G0\")\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Adds an additional video preview from YouTube for the item.\n\nNOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\n@param        Handle                  The workshop item update Handle to customize.\n@param        VideoID                 The YouTube video ID to add. (e.g. \"jHgZh4GV9G0\")" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "AddItemPreviewVideo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::UGC_eventAddItemPreviewVideo_Parms), Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_AddItemPreviewVideo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics
	{
		struct UGC_eventAddItemToFavorites_Parms
		{
			FScriptDelegate Callback;
			int32 AppId;
			FPublishedFileID PublishedFileID;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventAddItemToFavorites_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnAddItemToFavorites__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::NewProp_Callback_MetaData)) }; // 1156227680
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventAddItemToFavorites_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventAddItemToFavorites_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) }; // 661584633
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::NewProp_PublishedFileID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Adds a workshop item to the users favorites list.\n\x09*\n\x09* @param\x09""AppId\x09\x09\x09\x09The app ID that this item belongs to.\n\x09* @param\x09PublishedFileID\x09\x09The workshop item to add to the users favorites list.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Adds a workshop item to the users favorites list.\n\n@param        AppId                           The app ID that this item belongs to.\n@param        PublishedFileID         The workshop item to add to the users favorites list." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "AddItemToFavorites", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::UGC_eventAddItemToFavorites_Parms), Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_AddItemToFavorites()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics
	{
		struct UGC_eventAddRequiredKeyValueTag_Parms
		{
			FUGCQueryHandle Handle;
			FString Key;
			FString Value;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventAddRequiredKeyValueTag_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 1676725136
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventAddRequiredKeyValueTag_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventAddRequiredKeyValueTag_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventAddRequiredKeyValueTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_eventAddRequiredKeyValueTag_Parms), &Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Adds a required Key-Value tag to a pending UGC Query. This will only return workshop items that have a Key = pKey and a Value = pValue.\n\x09*\n\x09* @param\x09Handle\x09\x09The UGC query Handle to customize.\n\x09* @param\x09Key\x09\x09\x09The Key-Value Key that must be attached to the UGC to receive it.\n\x09* @param\x09Value\x09\x09The Key-Value Value associated with pKey that must be attached to the UGC to receive it.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Adds a required Key-Value tag to a pending UGC Query. This will only return workshop items that have a Key = pKey and a Value = pValue.\n\n@param        Handle          The UGC query Handle to customize.\n@param        Key                     The Key-Value Key that must be attached to the UGC to receive it.\n@param        Value           The Key-Value Value associated with pKey that must be attached to the UGC to receive it." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "AddRequiredKeyValueTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::UGC_eventAddRequiredKeyValueTag_Parms), Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_AddRequiredTag_Statics
	{
		struct UGC_eventAddRequiredTag_Parms
		{
			FUGCQueryHandle Handle;
			FString TagName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FStrPropertyParams NewProp_TagName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventAddRequiredTag_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 1676725136
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::NewProp_TagName = { "TagName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventAddRequiredTag_Parms, TagName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventAddRequiredTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_eventAddRequiredTag_Parms), &Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::NewProp_TagName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Adds a required tag to a pending UGC Query. This will only return UGC with the specified tag.\n\x09*\x09\n\x09* @param\x09Handle\x09\x09The UGC query Handle to customize.\n\x09* @param\x09TagName\x09\x09The tag that must be attached to the UGC to receive it.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Adds a required tag to a pending UGC Query. This will only return UGC with the specified tag.\n\n@param        Handle          The UGC query Handle to customize.\n@param        TagName         The tag that must be attached to the UGC to receive it." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "AddRequiredTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::UGC_eventAddRequiredTag_Parms), Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_AddRequiredTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_AddRequiredTagGroup_Statics
	{
		struct UGC_eventAddRequiredTagGroup_Parms
		{
			FUGCQueryHandle Handle;
			TArray<FString> TagGroups;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FStrPropertyParams NewProp_TagGroups_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TagGroups;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_AddRequiredTagGroup_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventAddRequiredTagGroup_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 1676725136
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_AddRequiredTagGroup_Statics::NewProp_TagGroups_Inner = { "TagGroups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUGC_AddRequiredTagGroup_Statics::NewProp_TagGroups = { "TagGroups", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventAddRequiredTagGroup_Parms, TagGroups), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_AddRequiredTagGroup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventAddRequiredTagGroup_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_AddRequiredTagGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_eventAddRequiredTagGroup_Parms), &Z_Construct_UFunction_UUGC_AddRequiredTagGroup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_AddRequiredTagGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddRequiredTagGroup_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddRequiredTagGroup_Statics::NewProp_TagGroups_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddRequiredTagGroup_Statics::NewProp_TagGroups,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddRequiredTagGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_AddRequiredTagGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Match any of the tags in this group\n\x09*\n\x09* Notes: Only available in UE4.27+\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Match any of the tags in this group\n\nNotes: Only available in UE4.27+" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_AddRequiredTagGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "AddRequiredTagGroup", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_AddRequiredTagGroup_Statics::UGC_eventAddRequiredTagGroup_Parms), Z_Construct_UFunction_UUGC_AddRequiredTagGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddRequiredTagGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_AddRequiredTagGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddRequiredTagGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_AddRequiredTagGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_AddRequiredTagGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics
	{
		struct UGC_eventBInitWorkshopForGameServer_Parms
		{
			int32 WorkshopDepotID;
			FString Folder;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_WorkshopDepotID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Folder;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::NewProp_WorkshopDepotID = { "WorkshopDepotID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventBInitWorkshopForGameServer_Parms, WorkshopDepotID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::NewProp_Folder = { "Folder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventBInitWorkshopForGameServer_Parms, Folder), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventBInitWorkshopForGameServer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_eventBInitWorkshopForGameServer_Parms), &Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::NewProp_WorkshopDepotID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::NewProp_Folder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Lets game servers set a specific workshop folder before issuing any UGC commands.\n\x09*\n\x09* This is helpful if you want to support multiple game servers running out of the same install folder.\n\x09*\n\x09* @param\x09WorkshopDepotID\x09\x09The depot ID of the game server.\n\x09* @param\x09""Folder\x09\x09\x09\x09The absolute path to store the workshop content.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Lets game servers set a specific workshop folder before issuing any UGC commands.\n\nThis is helpful if you want to support multiple game servers running out of the same install folder.\n\n@param        WorkshopDepotID         The depot ID of the game server.\n@param        Folder                          The absolute path to store the workshop content." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "BInitWorkshopForGameServer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::UGC_eventBInitWorkshopForGameServer_Parms), Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_CreateItem_Statics
	{
		struct UGC_eventCreateItem_Parms
		{
			FScriptDelegate Callback;
			int32 ConsumerAppID;
			ESteamWorkshopFileType FileType;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConsumerAppID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FileType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FileType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_CreateItem_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_CreateItem_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventCreateItem_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnCreateItem__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUGC_CreateItem_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_CreateItem_Statics::NewProp_Callback_MetaData)) }; // 1601010004
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_CreateItem_Statics::NewProp_ConsumerAppID = { "ConsumerAppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventCreateItem_Parms, ConsumerAppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUGC_CreateItem_Statics::NewProp_FileType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUGC_CreateItem_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventCreateItem_Parms, FileType), Z_Construct_UEnum_SteamCore_ESteamWorkshopFileType, METADATA_PARAMS(nullptr, 0) }; // 2339792349
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_CreateItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateItem_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateItem_Statics::NewProp_ConsumerAppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateItem_Statics::NewProp_FileType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateItem_Statics::NewProp_FileType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_CreateItem_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Creates a new workshop item with no content attached yet.\n\x09*\n\x09* @param\x09""ConsumerAppID\x09\x09The App ID that will be using this item.\n\x09* @param\x09""FileType\x09\x09\x09The type of UGC to create.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Creates a new workshop item with no content attached yet.\n\n@param        ConsumerAppID           The App ID that will be using this item.\n@param        FileType                        The type of UGC to create." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_CreateItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "CreateItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_CreateItem_Statics::UGC_eventCreateItem_Parms), Z_Construct_UFunction_UUGC_CreateItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_CreateItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_CreateItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_CreateItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_CreateItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_CreateItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics
	{
		struct UGC_eventCreateQueryAllUGCRequest_Parms
		{
			ESteamUGCQuery QueryType;
			ESteamUGCMatchingUGCType FileType;
			int32 CreatorAppID;
			int32 ConsumerAppID;
			int32 Page;
			FUGCQueryHandle ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_QueryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_QueryType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FileType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FileType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CreatorAppID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConsumerAppID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Page;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::NewProp_QueryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::NewProp_QueryType = { "QueryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventCreateQueryAllUGCRequest_Parms, QueryType), Z_Construct_UEnum_SteamCore_ESteamUGCQuery, METADATA_PARAMS(nullptr, 0) }; // 2329148995
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::NewProp_FileType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventCreateQueryAllUGCRequest_Parms, FileType), Z_Construct_UEnum_SteamCore_ESteamUGCMatchingUGCType, METADATA_PARAMS(nullptr, 0) }; // 2562286934
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::NewProp_CreatorAppID = { "CreatorAppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventCreateQueryAllUGCRequest_Parms, CreatorAppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::NewProp_ConsumerAppID = { "ConsumerAppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventCreateQueryAllUGCRequest_Parms, ConsumerAppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::NewProp_Page = { "Page", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventCreateQueryAllUGCRequest_Parms, Page), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventCreateQueryAllUGCRequest_Parms, ReturnValue), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 1676725136
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::NewProp_QueryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::NewProp_QueryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::NewProp_FileType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::NewProp_FileType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::NewProp_CreatorAppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::NewProp_ConsumerAppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::NewProp_Page,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Query for all matching UGC. You can use this to list all of the available UGC for your app.\n\x09*\n\x09* This will return up to 50 results as declared by kNumUGCResultsPerPage. \n\x09* You can make subsequent calls to this function, increasing the unPage each time to get the next set of results.\n\x09* NOTE: Either nConsumerAppID or nCreatorAppID must have a valid AppID!\n\x09* NOTE: You must release the Handle returned by this function by calling ReleaseQueryUGCRequest when you are done with it!\n\x09* To query for the UGC associated with a single user you can use CreateQueryUserUGCRequest instead.\n\x09*\n\x09*\n\x09* @param\x09QueryType\x09\x09\x09Used to specify the sorting and filtering for this call.\n\x09* @param\x09""FileType\x09\x09\x09Used to specify the type of UGC queried for.\n\x09* @param\x09""CreatorAppID\x09\x09This should contain the App ID of the app where the item was created. This may be different than nConsumerAppID if your item creation tool is a seperate App ID.\n\x09* @param\x09""ConsumerAppID\x09\x09This should contain the App ID for the current game or application. Do not pass the App ID of the workshop item creation tool if that is a separate App ID!\n\x09* @param\x09Page\x09\x09\x09\x09The page number of the results to receive. This should start at 1 on the first call.\n\x09*/" },
		{ "CPP_Default_Page", "1" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Query for all matching UGC. You can use this to list all of the available UGC for your app.\n\nThis will return up to 50 results as declared by kNumUGCResultsPerPage.\nYou can make subsequent calls to this function, increasing the unPage each time to get the next set of results.\nNOTE: Either nConsumerAppID or nCreatorAppID must have a valid AppID!\nNOTE: You must release the Handle returned by this function by calling ReleaseQueryUGCRequest when you are done with it!\nTo query for the UGC associated with a single user you can use CreateQueryUserUGCRequest instead.\n\n\n@param        QueryType                       Used to specify the sorting and filtering for this call.\n@param        FileType                        Used to specify the type of UGC queried for.\n@param        CreatorAppID            This should contain the App ID of the app where the item was created. This may be different than nConsumerAppID if your item creation tool is a seperate App ID.\n@param        ConsumerAppID           This should contain the App ID for the current game or application. Do not pass the App ID of the workshop item creation tool if that is a separate App ID!\n@param        Page                            The page number of the results to receive. This should start at 1 on the first call." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "CreateQueryAllUGCRequest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::UGC_eventCreateQueryAllUGCRequest_Parms), Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics
	{
		struct UGC_eventCreateQueryUGCDetailsRequest_Parms
		{
			TArray<FPublishedFileID> PublishedFileIDs;
			FUGCQueryHandle ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileIDs_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PublishedFileIDs;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics::NewProp_PublishedFileIDs_Inner = { "PublishedFileIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) }; // 661584633
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics::NewProp_PublishedFileIDs = { "PublishedFileIDs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventCreateQueryUGCDetailsRequest_Parms, PublishedFileIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 661584633
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventCreateQueryUGCDetailsRequest_Parms, ReturnValue), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 1676725136
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics::NewProp_PublishedFileIDs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics::NewProp_PublishedFileIDs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Query for the details of specific workshop items.\n\x09*\n\x09* This will return up to 50 results as declared by kNumUGCResultsPerPage.\n\x09* NOTE: Either nConsumerAppID or nCreatorAppID must have a valid AppID!\n\x09* NOTE: You must release the Handle returned by this function by calling ReleaseQueryUGCRequest when you are done with it!\n\x09* To query all the UGC for your app you can use CreateQueryAllUGCRequest instead.\n\x09*\n\x09* @param\x09PublishedFileIDs\x09\x09The list of workshop items to get the details for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Query for the details of specific workshop items.\n\nThis will return up to 50 results as declared by kNumUGCResultsPerPage.\nNOTE: Either nConsumerAppID or nCreatorAppID must have a valid AppID!\nNOTE: You must release the Handle returned by this function by calling ReleaseQueryUGCRequest when you are done with it!\nTo query all the UGC for your app you can use CreateQueryAllUGCRequest instead.\n\n@param        PublishedFileIDs                The list of workshop items to get the details for." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "CreateQueryUGCDetailsRequest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics::UGC_eventCreateQueryUGCDetailsRequest_Parms), Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics
	{
		struct UGC_eventCreateQueryUserUGCRequest_Parms
		{
			FSteamID SteamID;
			ESteamUserUGCList ListType;
			ESteamUGCMatchingUGCType MatchingUGCType;
			ESteamUserUGCListSortOrder SortOrder;
			int32 CreatorAppID;
			int32 ConsumerAppID;
			int32 Page;
			FUGCQueryHandle ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ListType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ListType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MatchingUGCType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MatchingUGCType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SortOrder_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SortOrder;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CreatorAppID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConsumerAppID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Page;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventCreateQueryUserUGCRequest_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_ListType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_ListType = { "ListType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventCreateQueryUserUGCRequest_Parms, ListType), Z_Construct_UEnum_SteamCore_ESteamUserUGCList, METADATA_PARAMS(nullptr, 0) }; // 1805209544
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_MatchingUGCType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_MatchingUGCType = { "MatchingUGCType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventCreateQueryUserUGCRequest_Parms, MatchingUGCType), Z_Construct_UEnum_SteamCore_ESteamUGCMatchingUGCType, METADATA_PARAMS(nullptr, 0) }; // 2562286934
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_SortOrder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_SortOrder = { "SortOrder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventCreateQueryUserUGCRequest_Parms, SortOrder), Z_Construct_UEnum_SteamCore_ESteamUserUGCListSortOrder, METADATA_PARAMS(nullptr, 0) }; // 2811510302
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_CreatorAppID = { "CreatorAppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventCreateQueryUserUGCRequest_Parms, CreatorAppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_ConsumerAppID = { "ConsumerAppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventCreateQueryUserUGCRequest_Parms, ConsumerAppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_Page = { "Page", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventCreateQueryUserUGCRequest_Parms, Page), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventCreateQueryUserUGCRequest_Parms, ReturnValue), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 1676725136
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_SteamID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_ListType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_ListType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_MatchingUGCType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_MatchingUGCType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_SortOrder_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_SortOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_CreatorAppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_ConsumerAppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_Page,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Query UGC associated with a user. You can use this to list the UGC the user is subscribed to amongst other things.\n\x09*\n\x09* This will return up to 50 results as declared by kNumUGCResultsPerPage. You can make subsequent calls to this function, increasing the unPage each time to get the next set of results.\n\x09* NOTE: Either nConsumerAppID or nCreatorAppID must have a valid AppID!\n\x09* NOTE: You must release the Handle returned by this function by calling ReleaseQueryUGCRequest when you are done with it!\n\x09* To query all the UGC for your app you can use CreateQueryAllUGCRequest instead.\n\x09*\n\x09* @param\x09SteamID\x09\x09\x09\x09The Account ID to query the UGC for. You can use CSteamID.GetAccountID to get the Account ID from a Steam ID.\n\x09* @param\x09ListType\x09\x09\x09Used to specify the type of list to get. If the currently logged in user is different than the user specified in unAccountID, then some options are not be allowed. (k_EUserUGCList_VotedOn, k_EUserUGCList_VotedUp, k_EUserUGCList_VotedDown, k_EUserUGCList_WillVoteLater, k_EUserUGCList_Subscribed)\n\x09* @param\x09MatchingUGCType\x09\x09Used to specify the type of UGC queried for.\n\x09* @param\x09SortOrder\x09\x09\x09Used to specify the order that the list will be sorted in.\n\x09* @param\x09""CreatorAppID\x09\x09This should contain the App ID of the app where the item was created. This may be different than nConsumerAppID if your item creation tool is a seperate App ID.\n\x09* @param\x09""ConsumerAppID\x09\x09This should contain the App ID for the current game or application. Do not pass the App ID of the workshop item creation tool if that is a separate App ID!\n\x09* @param\x09Page\x09\x09\x09\x09The page number of the results to receive. This should start at 1 on the first call.\n\x09*/" },
		{ "CPP_Default_Page", "1" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Query UGC associated with a user. You can use this to list the UGC the user is subscribed to amongst other things.\n\nThis will return up to 50 results as declared by kNumUGCResultsPerPage. You can make subsequent calls to this function, increasing the unPage each time to get the next set of results.\nNOTE: Either nConsumerAppID or nCreatorAppID must have a valid AppID!\nNOTE: You must release the Handle returned by this function by calling ReleaseQueryUGCRequest when you are done with it!\nTo query all the UGC for your app you can use CreateQueryAllUGCRequest instead.\n\n@param        SteamID                         The Account ID to query the UGC for. You can use CSteamID.GetAccountID to get the Account ID from a Steam ID.\n@param        ListType                        Used to specify the type of list to get. If the currently logged in user is different than the user specified in unAccountID, then some options are not be allowed. (k_EUserUGCList_VotedOn, k_EUserUGCList_VotedUp, k_EUserUGCList_VotedDown, k_EUserUGCList_WillVoteLater, k_EUserUGCList_Subscribed)\n@param        MatchingUGCType         Used to specify the type of UGC queried for.\n@param        SortOrder                       Used to specify the order that the list will be sorted in.\n@param        CreatorAppID            This should contain the App ID of the app where the item was created. This may be different than nConsumerAppID if your item creation tool is a seperate App ID.\n@param        ConsumerAppID           This should contain the App ID for the current game or application. Do not pass the App ID of the workshop item creation tool if that is a separate App ID!\n@param        Page                            The page number of the results to receive. This should start at 1 on the first call." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "CreateQueryUserUGCRequest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::UGC_eventCreateQueryUserUGCRequest_Parms), Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_DeleteItem_Statics
	{
		struct UGC_eventDeleteItem_Parms
		{
			FScriptDelegate Callback;
			FPublishedFileID PublishedFileID;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_DeleteItem_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_DeleteItem_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventDeleteItem_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnDeleteItemResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUGC_DeleteItem_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_DeleteItem_Statics::NewProp_Callback_MetaData)) }; // 2120643459
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_DeleteItem_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventDeleteItem_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) }; // 661584633
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_DeleteItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_DeleteItem_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_DeleteItem_Statics::NewProp_PublishedFileID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_DeleteItem_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Deletes the item without prompting the user.\n\x09*\n\x09* @param\x09PublishedFileID\x09\x09The item to delete.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Deletes the item without prompting the user.\n\n@param        PublishedFileID         The item to delete." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_DeleteItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "DeleteItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_DeleteItem_Statics::UGC_eventDeleteItem_Parms), Z_Construct_UFunction_UUGC_DeleteItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_DeleteItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_DeleteItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_DeleteItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_DeleteItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_DeleteItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_DownloadItem_Statics
	{
		struct UGC_eventDownloadItem_Parms
		{
			FPublishedFileID PublishedFileID;
			bool bHighPriority;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static void NewProp_bHighPriority_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHighPriority;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_DownloadItem_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventDownloadItem_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) }; // 661584633
	void Z_Construct_UFunction_UUGC_DownloadItem_Statics::NewProp_bHighPriority_SetBit(void* Obj)
	{
		((UGC_eventDownloadItem_Parms*)Obj)->bHighPriority = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_DownloadItem_Statics::NewProp_bHighPriority = { "bHighPriority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_eventDownloadItem_Parms), &Z_Construct_UFunction_UUGC_DownloadItem_Statics::NewProp_bHighPriority_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_DownloadItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventDownloadItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_DownloadItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_eventDownloadItem_Parms), &Z_Construct_UFunction_UUGC_DownloadItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_DownloadItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_DownloadItem_Statics::NewProp_PublishedFileID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_DownloadItem_Statics::NewProp_bHighPriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_DownloadItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_DownloadItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Download or update a workshop item.\n\x09*\n\x09* If the return Value is true then register and wait for the Callback DownloadItemResult_t before calling GetItemInstallInfo or accessing the workshop item on disk.\n\x09* If the user is not subscribed to the item (e.g. a Game Server using anonymous login), the workshop item will be downloaded and cached temporarily.\n\x09* If the workshop item has an item state of k_EItemStateNeedsUpdate, then this function can be called to initiate the update. \n\x09* Do not access the workshop item on disk until the Callback DownloadItemResult_t is called.\n\x09* The DownloadItemResult_t Callback contains the app ID associated with the workshop item. It should be compared against the running app ID as the Handler \n\x09* will be called for all item downloads regardless of the running application.\n\x09*\n\x09* @param\x09PublishedFileID\x09\x09The workshop item to download.\n\x09* @param\x09""bHighPriority\x09\x09Start the download in high priority mode, pausing any existing in-progress Steam downloads and immediately begin downloading this workshop item.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Download or update a workshop item.\n\nIf the return Value is true then register and wait for the Callback DownloadItemResult_t before calling GetItemInstallInfo or accessing the workshop item on disk.\nIf the user is not subscribed to the item (e.g. a Game Server using anonymous login), the workshop item will be downloaded and cached temporarily.\nIf the workshop item has an item state of k_EItemStateNeedsUpdate, then this function can be called to initiate the update.\nDo not access the workshop item on disk until the Callback DownloadItemResult_t is called.\nThe DownloadItemResult_t Callback contains the app ID associated with the workshop item. It should be compared against the running app ID as the Handler\nwill be called for all item downloads regardless of the running application.\n\n@param        PublishedFileID         The workshop item to download.\n@param        bHighPriority           Start the download in high priority mode, pausing any existing in-progress Steam downloads and immediately begin downloading this workshop item." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_DownloadItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "DownloadItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_DownloadItem_Statics::UGC_eventDownloadItem_Parms), Z_Construct_UFunction_UUGC_DownloadItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_DownloadItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_DownloadItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_DownloadItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_DownloadItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_DownloadItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_GetAppDependencies_Statics
	{
		struct UGC_eventGetAppDependencies_Parms
		{
			FScriptDelegate Callback;
			FPublishedFileID PublishedFileID;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetAppDependencies_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_GetAppDependencies_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetAppDependencies_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnGetAppDependenciesResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetAppDependencies_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetAppDependencies_Statics::NewProp_Callback_MetaData)) }; // 1038652046
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetAppDependencies_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetAppDependencies_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) }; // 661584633
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetAppDependencies_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetAppDependencies_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetAppDependencies_Statics::NewProp_PublishedFileID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetAppDependencies_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Get the app dependencies associated with the given PublishedFileId_t. \n\x09*\n\x09* These are \"soft\" dependencies that are shown on the web. \n\x09* It is up to the application to determine whether an item can be used or not.\n\x09*\n\x09* @param\x09PublishedFileID\x09\x09The workshop item to get app dependencies for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Get the app dependencies associated with the given PublishedFileId_t.\n\nThese are \"soft\" dependencies that are shown on the web.\nIt is up to the application to determine whether an item can be used or not.\n\n@param        PublishedFileID         The workshop item to get app dependencies for." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetAppDependencies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetAppDependencies", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_GetAppDependencies_Statics::UGC_eventGetAppDependencies_Parms), Z_Construct_UFunction_UUGC_GetAppDependencies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetAppDependencies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetAppDependencies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetAppDependencies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_GetAppDependencies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_GetAppDependencies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics
	{
		struct UGC_eventGetItemDownloadInfo_Parms
		{
			FPublishedFileID PublishedFileID;
			int32 BytesDownloaded;
			int32 BytesTotal;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_BytesDownloaded;
		static const UECodeGen_Private::FIntPropertyParams NewProp_BytesTotal;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetItemDownloadInfo_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) }; // 661584633
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::NewProp_BytesDownloaded = { "BytesDownloaded", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetItemDownloadInfo_Parms, BytesDownloaded), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::NewProp_BytesTotal = { "BytesTotal", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetItemDownloadInfo_Parms, BytesTotal), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventGetItemDownloadInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_eventGetItemDownloadInfo_Parms), &Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::NewProp_PublishedFileID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::NewProp_BytesDownloaded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::NewProp_BytesTotal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Get info about a pending download of a workshop item that has k_EItemStateNeedsUpdate set.\n\x09*\n\x09* @param\x09PublishedFileID\x09\x09The workshop item to get the download info for.\n\x09* @param\x09""BytesDownloaded\x09\x09Returns the current bytes downloaded.\n\x09* @param\x09""BytesTotal\x09\x09\x09Returns the total bytes. This is only valid after the download has started.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Get info about a pending download of a workshop item that has k_EItemStateNeedsUpdate set.\n\n@param        PublishedFileID         The workshop item to get the download info for.\n@param        BytesDownloaded         Returns the current bytes downloaded.\n@param        BytesTotal                      Returns the total bytes. This is only valid after the download has started." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetItemDownloadInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::UGC_eventGetItemDownloadInfo_Parms), Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_GetItemDownloadInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics
	{
		struct UGC_eventGetItemInstallInfo_Parms
		{
			FPublishedFileID PublishedFileID;
			int32 SizeOnDisk;
			FString Folder;
			int32 TimeStamp;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SizeOnDisk;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Folder;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TimeStamp;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetItemInstallInfo_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) }; // 661584633
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::NewProp_SizeOnDisk = { "SizeOnDisk", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetItemInstallInfo_Parms, SizeOnDisk), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::NewProp_Folder = { "Folder", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetItemInstallInfo_Parms, Folder), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::NewProp_TimeStamp = { "TimeStamp", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetItemInstallInfo_Parms, TimeStamp), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventGetItemInstallInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_eventGetItemInstallInfo_Parms), &Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::NewProp_PublishedFileID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::NewProp_SizeOnDisk,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::NewProp_Folder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::NewProp_TimeStamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Gets info about currently installed content on the disc for workshop items that have k_EItemStateInstalled set.\n\x09*\n\x09* Calling this sets the \"used\" flag on the workshop item for the current player and adds it to their k_EUserUGCList_UsedOrPlayed list.\n\x09* If k_EItemStateLegacyItem is set then pchFolder contains the path to the legacy file itself, not a folder.\n\x09*\n\x09* @param\x09PublishedFileID\x09\x09The workshop item to get the install info for.\n\x09* @param\x09SizeOnDisk\x09\x09\x09Returns the size of the workshop item in bytes.\n\x09* @param\x09""Folder\x09\x09\x09\x09Returns the absolute path to the folder containing the content by copying it.\n\x09* @param\x09TimeStamp\x09\x09\x09Returns the time when the workshop item was last updated.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Gets info about currently installed content on the disc for workshop items that have k_EItemStateInstalled set.\n\nCalling this sets the \"used\" flag on the workshop item for the current player and adds it to their k_EUserUGCList_UsedOrPlayed list.\nIf k_EItemStateLegacyItem is set then pchFolder contains the path to the legacy file itself, not a folder.\n\n@param        PublishedFileID         The workshop item to get the install info for.\n@param        SizeOnDisk                      Returns the size of the workshop item in bytes.\n@param        Folder                          Returns the absolute path to the folder containing the content by copying it.\n@param        TimeStamp                       Returns the time when the workshop item was last updated." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetItemInstallInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::UGC_eventGetItemInstallInfo_Parms), Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_GetItemInstallInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_GetItemState_Statics
	{
		struct UGC_eventGetItemState_Parms
		{
			FPublishedFileID PublishedFileID;
			TArray<ESteamItemState> States;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_States_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_States_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_States;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetItemState_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetItemState_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) }; // 661584633
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUGC_GetItemState_Statics::NewProp_States_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUGC_GetItemState_Statics::NewProp_States_Inner = { "States", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_SteamCore_ESteamItemState, METADATA_PARAMS(nullptr, 0) }; // 1340352351
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUGC_GetItemState_Statics::NewProp_States = { "States", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetItemState_Parms, States), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1340352351
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetItemState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetItemState_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetItemState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemState_Statics::NewProp_PublishedFileID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemState_Statics::NewProp_States_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemState_Statics::NewProp_States_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemState_Statics::NewProp_States,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetItemState_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Gets the current state of a workshop item on this client.\n\x09*\n\x09* @param\x09PublishedFileID\x09\x09The workshop item to get the state for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Gets the current state of a workshop item on this client.\n\n@param        PublishedFileID         The workshop item to get the state for." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetItemState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetItemState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_GetItemState_Statics::UGC_eventGetItemState_Parms), Z_Construct_UFunction_UUGC_GetItemState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetItemState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetItemState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetItemState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_GetItemState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_GetItemState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics
	{
		struct UGC_eventGetItemUpdateProgress_Parms
		{
			FUGCUpdateHandle Handle;
			int32 BytesProcessed;
			int32 BytesTotal;
			ESteamItemUpdateStatus ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_BytesProcessed;
		static const UECodeGen_Private::FIntPropertyParams NewProp_BytesTotal;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetItemUpdateProgress_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) }; // 4003650614
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::NewProp_BytesProcessed = { "BytesProcessed", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetItemUpdateProgress_Parms, BytesProcessed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::NewProp_BytesTotal = { "BytesTotal", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetItemUpdateProgress_Parms, BytesTotal), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetItemUpdateProgress_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamItemUpdateStatus, METADATA_PARAMS(nullptr, 0) }; // 3757451084
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::NewProp_BytesProcessed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::NewProp_BytesTotal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Gets the progress of an item update.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09The update Handle to get the progress for.\n\x09* @param\x09""BytesProcessed\x09\x09Returns the current number of bytes uploaded.\n\x09* @param\x09""BytesTotal\x09\x09\x09Returns the total number of bytes that will be uploaded.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Gets the progress of an item update.\n\n@param        Handle                          The update Handle to get the progress for.\n@param        BytesProcessed          Returns the current number of bytes uploaded.\n@param        BytesTotal                      Returns the total number of bytes that will be uploaded." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetItemUpdateProgress", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::UGC_eventGetItemUpdateProgress_Parms), Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_GetItemUpdateProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_GetNumSubscribedItems_Statics
	{
		struct UGC_eventGetNumSubscribedItems_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetNumSubscribedItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetNumSubscribedItems_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetNumSubscribedItems_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetNumSubscribedItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetNumSubscribedItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Gets the total number of items the current user is subscribed to for the game or application.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Gets the total number of items the current user is subscribed to for the game or application." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetNumSubscribedItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetNumSubscribedItems", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_GetNumSubscribedItems_Statics::UGC_eventGetNumSubscribedItems_Parms), Z_Construct_UFunction_UUGC_GetNumSubscribedItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetNumSubscribedItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetNumSubscribedItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetNumSubscribedItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_GetNumSubscribedItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_GetNumSubscribedItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics
	{
		struct UGC_eventGetQueryUGCAdditionalPreview_Parms
		{
			FUGCQueryHandle Handle;
			int32 Index;
			int32 PreviewIndex;
			FString URLOrVideoID;
			FString OriginalFileName;
			ESteamItemPreviewType PreviewType;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PreviewIndex;
		static const UECodeGen_Private::FStrPropertyParams NewProp_URLOrVideoID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OriginalFileName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PreviewType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PreviewType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetQueryUGCAdditionalPreview_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 1676725136
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetQueryUGCAdditionalPreview_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_PreviewIndex = { "PreviewIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetQueryUGCAdditionalPreview_Parms, PreviewIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_URLOrVideoID = { "URLOrVideoID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetQueryUGCAdditionalPreview_Parms, URLOrVideoID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_OriginalFileName = { "OriginalFileName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetQueryUGCAdditionalPreview_Parms, OriginalFileName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_PreviewType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_PreviewType = { "PreviewType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetQueryUGCAdditionalPreview_Parms, PreviewType), Z_Construct_UEnum_SteamCore_ESteamItemPreviewType, METADATA_PARAMS(nullptr, 0) }; // 3608386345
	void Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventGetQueryUGCAdditionalPreview_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_eventGetQueryUGCAdditionalPreview_Parms), &Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_PreviewIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_URLOrVideoID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_OriginalFileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_PreviewType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_PreviewType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Retrieve the details of an additional preview associated with an individual workshop item after receiving a querying UGC call result.\n\x09*\n\x09* You should call this in a loop to get the details of all the workshop items returned.\n\x09* NOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.\n\x09* Before calling this you should call GetQueryUGCNumAdditionalPreviews to get number of additional previews.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09The UGC query Handle to get the results from.\n\x09* @param\x09Index\x09\x09\x09\x09The index of the item to get the details of.\n\x09* @param\x09PreviewIndex\x09\x09The index of the additional preview to get the details of.\n\x09* @param\x09URLOrVideoID\x09\x09Returns a URL or Video ID by copying it into this string.\n\x09* @param\x09OriginalFileName\x09Returns the original file name. May be set to NULL to not receive this.\n\x09* @param\x09PreviewType\x09\x09\x09The type of preview that was returned.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Retrieve the details of an additional preview associated with an individual workshop item after receiving a querying UGC call result.\n\nYou should call this in a loop to get the details of all the workshop items returned.\nNOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.\nBefore calling this you should call GetQueryUGCNumAdditionalPreviews to get number of additional previews.\n\n@param        Handle                          The UGC query Handle to get the results from.\n@param        Index                           The index of the item to get the details of.\n@param        PreviewIndex            The index of the additional preview to get the details of.\n@param        URLOrVideoID            Returns a URL or Video ID by copying it into this string.\n@param        OriginalFileName        Returns the original file name. May be set to NULL to not receive this.\n@param        PreviewType                     The type of preview that was returned." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetQueryUGCAdditionalPreview", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::UGC_eventGetQueryUGCAdditionalPreview_Parms), Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics
	{
		struct UGC_eventGetQueryUGCChildren_Parms
		{
			FUGCQueryHandle Handle;
			int32 Index;
			TArray<FPublishedFileID> PublishedFileIDs;
			int32 MaxEntries;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileIDs_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PublishedFileIDs;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxEntries;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetQueryUGCChildren_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 1676725136
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetQueryUGCChildren_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::NewProp_PublishedFileIDs_Inner = { "PublishedFileIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) }; // 661584633
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::NewProp_PublishedFileIDs = { "PublishedFileIDs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetQueryUGCChildren_Parms, PublishedFileIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 661584633
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::NewProp_MaxEntries = { "MaxEntries", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetQueryUGCChildren_Parms, MaxEntries), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventGetQueryUGCChildren_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_eventGetQueryUGCChildren_Parms), &Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::NewProp_PublishedFileIDs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::NewProp_PublishedFileIDs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::NewProp_MaxEntries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Retrieve the ids of any child items of an individual workshop item after receiving a querying UGC call result. \n\x09*\n\x09* These items can either be a part of a collection or some other dependency (see AddDependency).\n\x09* You should call this in a loop to get the details of all the workshop items returned.\n\x09* NOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.\n\x09* You should create pvecPublishedFileID with m_unNumChildren provided in SteamUGCDetails_t after getting the UGC details with GetQueryUGCResult.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09The UGC query Handle to get the results from.\n\x09* @param\x09Index\x09\x09\x09\x09The index of the item to get the details of.\n\x09* @param\x09PublishedFileIDs\x09Returns the UGC children by setting this array.\n\x09* @param\x09MaxEntries\x09\x09\x09The length of PublishedFileIDs.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Retrieve the ids of any child items of an individual workshop item after receiving a querying UGC call result.\n\nThese items can either be a part of a collection or some other dependency (see AddDependency).\nYou should call this in a loop to get the details of all the workshop items returned.\nNOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.\nYou should create pvecPublishedFileID with m_unNumChildren provided in SteamUGCDetails_t after getting the UGC details with GetQueryUGCResult.\n\n@param        Handle                          The UGC query Handle to get the results from.\n@param        Index                           The index of the item to get the details of.\n@param        PublishedFileIDs        Returns the UGC children by setting this array.\n@param        MaxEntries                      The length of PublishedFileIDs." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetQueryUGCChildren", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::UGC_eventGetQueryUGCChildren_Parms), Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_GetQueryUGCChildren()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics
	{
		struct UGC_eventGetQueryUGCKeyValueTag_Parms
		{
			FUGCQueryHandle Handle;
			int32 Index;
			int32 KeyValueTagIndex;
			FString Key;
			FString Value;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FIntPropertyParams NewProp_KeyValueTagIndex;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetQueryUGCKeyValueTag_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 1676725136
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetQueryUGCKeyValueTag_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::NewProp_KeyValueTagIndex = { "KeyValueTagIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetQueryUGCKeyValueTag_Parms, KeyValueTagIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetQueryUGCKeyValueTag_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetQueryUGCKeyValueTag_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventGetQueryUGCKeyValueTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_eventGetQueryUGCKeyValueTag_Parms), &Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::NewProp_KeyValueTagIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Retrieve the details of a Key-Value tag associated with an individual workshop item after receiving a querying UGC call result.\n\x09*\n\x09* You should call this in a loop to get the details of all the workshop items returned.\n\x09* NOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.\n\x09* Before calling this you should call GetQueryUGCNumKeyValueTags to get number of tags.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09The UGC query Handle to get the results from.\n\x09* @param\x09Index\x09\x09\x09\x09The index of the item to get the details of.\n\x09* @param\x09KeyValueTagIndex\x09The index of the tag to get the details of.\n\x09* @param\x09Key\x09\x09\x09\x09\x09Returns the Key by copying it into this string.\n\x09* @param\x09Value\x09\x09\x09\x09Returns the Value by copying it into this string.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Retrieve the details of a Key-Value tag associated with an individual workshop item after receiving a querying UGC call result.\n\nYou should call this in a loop to get the details of all the workshop items returned.\nNOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.\nBefore calling this you should call GetQueryUGCNumKeyValueTags to get number of tags.\n\n@param        Handle                          The UGC query Handle to get the results from.\n@param        Index                           The index of the item to get the details of.\n@param        KeyValueTagIndex        The index of the tag to get the details of.\n@param        Key                                     Returns the Key by copying it into this string.\n@param        Value                           Returns the Value by copying it into this string." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetQueryUGCKeyValueTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::UGC_eventGetQueryUGCKeyValueTag_Parms), Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics
	{
		struct UGC_eventGetQueryUGCMetadata_Parms
		{
			FUGCQueryHandle Handle;
			int32 Index;
			FString MetaData;
			int32 MetadataSize;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MetaData;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MetadataSize;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetQueryUGCMetadata_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 1676725136
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetQueryUGCMetadata_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetQueryUGCMetadata_Parms, MetaData), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::NewProp_MetadataSize = { "MetadataSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetQueryUGCMetadata_Parms, MetadataSize), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventGetQueryUGCMetadata_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_eventGetQueryUGCMetadata_Parms), &Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::NewProp_MetaData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::NewProp_MetadataSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Retrieve the developer set metadata of an individual workshop item after receiving a querying UGC call result.\n\x09*\n\x09* You should call this in a loop to get the details of all the workshop items returned.\n\x09* NOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09The UGC query Handle to get the results from.\n\x09* @param\x09Index\x09\x09\x09The index of the item to get the details of.\n\x09* @param\x09MetaData\x09\x09Returns the url by copying it into this string.\n\x09* @param\x09MetadataSize\x09The size of pchMetadata in bytes.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Retrieve the developer set metadata of an individual workshop item after receiving a querying UGC call result.\n\nYou should call this in a loop to get the details of all the workshop items returned.\nNOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.\n\n@param        Handle                  The UGC query Handle to get the results from.\n@param        Index                   The index of the item to get the details of.\n@param        MetaData                Returns the url by copying it into this string.\n@param        MetadataSize    The size of pchMetadata in bytes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetQueryUGCMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::UGC_eventGetQueryUGCMetadata_Parms), Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_GetQueryUGCMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics
	{
		struct UGC_eventGetQueryUGCNumAdditionalPreviews_Parms
		{
			FUGCQueryHandle Handle;
			int32 Index;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetQueryUGCNumAdditionalPreviews_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 1676725136
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetQueryUGCNumAdditionalPreviews_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetQueryUGCNumAdditionalPreviews_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Retrieve the number of additional previews of an individual workshop item after receiving a querying UGC call result.\n\x09*\n\x09* You should call this in a loop to get the details of all the workshop items returned.\n\x09* NOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.\n\x09* You can then call GetQueryUGCAdditionalPreview to get the details of each additional preview.\n\x09*\n\x09* @param\x09Handle\x09\x09The UGC query Handle to get the results from.\n\x09* @param\x09Index\x09\x09The index of the item to get the details of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Retrieve the number of additional previews of an individual workshop item after receiving a querying UGC call result.\n\nYou should call this in a loop to get the details of all the workshop items returned.\nNOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.\nYou can then call GetQueryUGCAdditionalPreview to get the details of each additional preview.\n\n@param        Handle          The UGC query Handle to get the results from.\n@param        Index           The index of the item to get the details of." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetQueryUGCNumAdditionalPreviews", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics::UGC_eventGetQueryUGCNumAdditionalPreviews_Parms), Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics
	{
		struct UGC_eventGetQueryUGCNumKeyValueTags_Parms
		{
			FUGCQueryHandle Handle;
			int32 Index;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetQueryUGCNumKeyValueTags_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 1676725136
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetQueryUGCNumKeyValueTags_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetQueryUGCNumKeyValueTags_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Retrieve the number of Key-Value tags of an individual workshop item after receiving a querying UGC call result.\n\x09*\n\x09* You should call this in a loop to get the details of all the workshop items returned.\n\x09* NOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.\n\x09* You can then call GetQueryUGCKeyValueTag to get the details of each tag.\n\x09*\n\x09* @param\x09Handle\x09\x09The UGC query Handle to get the results from.\n\x09* @param\x09Index\x09\x09The index of the item to get the details of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Retrieve the number of Key-Value tags of an individual workshop item after receiving a querying UGC call result.\n\nYou should call this in a loop to get the details of all the workshop items returned.\nNOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.\nYou can then call GetQueryUGCKeyValueTag to get the details of each tag.\n\n@param        Handle          The UGC query Handle to get the results from.\n@param        Index           The index of the item to get the details of." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetQueryUGCNumKeyValueTags", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics::UGC_eventGetQueryUGCNumKeyValueTags_Parms), Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_GetQueryUGCNumTags_Statics
	{
		struct UGC_eventGetQueryUGCNumTags_Parms
		{
			FUGCQueryHandle Handle;
			int32 Index;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCNumTags_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetQueryUGCNumTags_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 1676725136
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCNumTags_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetQueryUGCNumTags_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCNumTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetQueryUGCNumTags_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetQueryUGCNumTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCNumTags_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCNumTags_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCNumTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetQueryUGCNumTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Notes: Only available in UE4.27+\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Notes: Only available in UE4.27+" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetQueryUGCNumTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetQueryUGCNumTags", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_GetQueryUGCNumTags_Statics::UGC_eventGetQueryUGCNumTags_Parms), Z_Construct_UFunction_UUGC_GetQueryUGCNumTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCNumTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetQueryUGCNumTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCNumTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_GetQueryUGCNumTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_GetQueryUGCNumTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics
	{
		struct UGC_eventGetQueryUGCPreviewURL_Parms
		{
			FUGCQueryHandle Handle;
			int32 Index;
			FString URL;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetQueryUGCPreviewURL_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 1676725136
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetQueryUGCPreviewURL_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetQueryUGCPreviewURL_Parms, URL), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventGetQueryUGCPreviewURL_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_eventGetQueryUGCPreviewURL_Parms), &Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Retrieve the URL to the preview image of an individual workshop item after receiving a querying UGC call result.\n\x09*\n\x09* You should call this in a loop to get the details of all the workshop items returned.\n\x09* NOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.\n\x09* You can use this URL to download and display the preview image instead of having to download it using the m_hPreviewFile in the ISteamUGC::SteamUGCDetails_t struct.\n\x09* \n\x09* @param\x09Handle\x09\x09The UGC query Handle to get the results from.\n\x09* @param\x09Index\x09\x09The index of the item to get the details of.\n\x09* @param\x09URL\x09\x09\x09Returns the url by copying it into this string.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Retrieve the URL to the preview image of an individual workshop item after receiving a querying UGC call result.\n\nYou should call this in a loop to get the details of all the workshop items returned.\nNOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.\nYou can use this URL to download and display the preview image instead of having to download it using the m_hPreviewFile in the ISteamUGC::SteamUGCDetails_t struct.\n\n@param        Handle          The UGC query Handle to get the results from.\n@param        Index           The index of the item to get the details of.\n@param        URL                     Returns the url by copying it into this string." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetQueryUGCPreviewURL", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::UGC_eventGetQueryUGCPreviewURL_Parms), Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics
	{
		struct UGC_eventGetQueryUGCResult_Parms
		{
			FUGCQueryHandle Handle;
			int32 Index;
			FSteamUGCDetails Details;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Details;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetQueryUGCResult_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 1676725136
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetQueryUGCResult_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::NewProp_Details = { "Details", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetQueryUGCResult_Parms, Details), Z_Construct_UScriptStruct_FSteamUGCDetails, METADATA_PARAMS(nullptr, 0) }; // 601629092
	void Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventGetQueryUGCResult_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_eventGetQueryUGCResult_Parms), &Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::NewProp_Details,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Retrieve the details of an individual workshop item after receiving a querying UGC call result.\n\x09*\n\x09* You should call this in a loop to get the details of all the workshop items returned.\n\x09* NOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.\n\x09*\n\x09* @param\x09Handle\x09\x09The UGC query Handle to get the results from.\n\x09* @param\x09Index\x09\x09The index of the item to get the details of.\n\x09* @param\x09""Details\x09\x09Returns the the UGC details.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Retrieve the details of an individual workshop item after receiving a querying UGC call result.\n\nYou should call this in a loop to get the details of all the workshop items returned.\nNOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.\n\n@param        Handle          The UGC query Handle to get the results from.\n@param        Index           The index of the item to get the details of.\n@param        Details         Returns the the UGC details." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetQueryUGCResult", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::UGC_eventGetQueryUGCResult_Parms), Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_GetQueryUGCResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics
	{
		struct UGC_eventGetQueryUGCStatistic_Parms
		{
			FUGCQueryHandle Handle;
			int32 Index;
			ESteamItemStatistic StatType;
			FString StatValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FBytePropertyParams NewProp_StatType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StatType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StatValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetQueryUGCStatistic_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 1676725136
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetQueryUGCStatistic_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::NewProp_StatType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::NewProp_StatType = { "StatType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetQueryUGCStatistic_Parms, StatType), Z_Construct_UEnum_SteamCore_ESteamItemStatistic, METADATA_PARAMS(nullptr, 0) }; // 3777462136
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::NewProp_StatValue = { "StatValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetQueryUGCStatistic_Parms, StatValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventGetQueryUGCStatistic_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_eventGetQueryUGCStatistic_Parms), &Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::NewProp_StatType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::NewProp_StatType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::NewProp_StatValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Retrieve various statistics of an individual workshop item after receiving a querying UGC call result.\n\x09*\n\x09* You should call this in a loop to get the details of all the workshop items returned.\n\x09* NOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.\n\x09*\n\x09* @param\x09Handle\x09\x09The UGC query Handle to get the results from.\n\x09* @param\x09Index\x09\x09The index of the item to get the details of.\n\x09* @param\x09StatType\x09The statistic to retrieve.\n\x09* @param\x09StatValue\x09Returns the Value associated with the specified statistic.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Retrieve various statistics of an individual workshop item after receiving a querying UGC call result.\n\nYou should call this in a loop to get the details of all the workshop items returned.\nNOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.\n\n@param        Handle          The UGC query Handle to get the results from.\n@param        Index           The index of the item to get the details of.\n@param        StatType        The statistic to retrieve.\n@param        StatValue       Returns the Value associated with the specified statistic." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetQueryUGCStatistic", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::UGC_eventGetQueryUGCStatistic_Parms), Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_GetQueryUGCStatistic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics
	{
		struct UGC_eventGetQueryUGCTag_Parms
		{
			FUGCQueryHandle Handle;
			int32 Index;
			int32 IndexTag;
			FString Value;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IndexTag;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetQueryUGCTag_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 1676725136
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetQueryUGCTag_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::NewProp_IndexTag = { "IndexTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetQueryUGCTag_Parms, IndexTag), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetQueryUGCTag_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventGetQueryUGCTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_eventGetQueryUGCTag_Parms), &Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::NewProp_IndexTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Notes: Only available in UE4.27+\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Notes: Only available in UE4.27+" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetQueryUGCTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::UGC_eventGetQueryUGCTag_Parms), Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_GetQueryUGCTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics
	{
		struct UGC_eventGetQueryUGCTagDisplayName_Parms
		{
			FUGCQueryHandle Handle;
			int32 Index;
			int32 IndexTag;
			FString Value;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IndexTag;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetQueryUGCTagDisplayName_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 1676725136
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetQueryUGCTagDisplayName_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::NewProp_IndexTag = { "IndexTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetQueryUGCTagDisplayName_Parms, IndexTag), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetQueryUGCTagDisplayName_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventGetQueryUGCTagDisplayName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_eventGetQueryUGCTagDisplayName_Parms), &Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::NewProp_IndexTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Notes: Only available in UE4.27+\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Notes: Only available in UE4.27+" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetQueryUGCTagDisplayName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::UGC_eventGetQueryUGCTagDisplayName_Parms), Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics
	{
		struct UGC_eventGetSubscribedItems_Parms
		{
			TArray<FPublishedFileID> PublishedFileIDs;
			int32 MaxEntries;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileIDs_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PublishedFileIDs;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxEntries;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::NewProp_PublishedFileIDs_Inner = { "PublishedFileIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) }; // 661584633
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::NewProp_PublishedFileIDs = { "PublishedFileIDs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetSubscribedItems_Parms, PublishedFileIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 661584633
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::NewProp_MaxEntries = { "MaxEntries", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetSubscribedItems_Parms, MaxEntries), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetSubscribedItems_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::NewProp_PublishedFileIDs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::NewProp_PublishedFileIDs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::NewProp_MaxEntries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Gets a list of all of the items the current user is subscribed to for the current game.\n\x09*\n\x09* You create an array with the size provided by GetNumSubscribedItems before calling this.\n\x09*\n\x09* @param\x09PublishedFileIDs\x09The array where the item ids will be copied into.\n\x09* @param\x09MaxEntries\x09\x09\x09\x09The maximum number of items to return. This should typically be the same as GetNumSubscribedItems and the same size as pvecPublishedFileID.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Gets a list of all of the items the current user is subscribed to for the current game.\n\nYou create an array with the size provided by GetNumSubscribedItems before calling this.\n\n@param        PublishedFileIDs        The array where the item ids will be copied into.\n@param        MaxEntries                              The maximum number of items to return. This should typically be the same as GetNumSubscribedItems and the same size as pvecPublishedFileID." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetSubscribedItems", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::UGC_eventGetSubscribedItems_Parms), Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_GetSubscribedItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_GetUserItemVote_Statics
	{
		struct UGC_eventGetUserItemVote_Parms
		{
			FScriptDelegate Callback;
			FPublishedFileID PublishedFileID;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetUserItemVote_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_GetUserItemVote_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetUserItemVote_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnGetUserItemVote__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetUserItemVote_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetUserItemVote_Statics::NewProp_Callback_MetaData)) }; // 701844866
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetUserItemVote_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventGetUserItemVote_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) }; // 661584633
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetUserItemVote_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetUserItemVote_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetUserItemVote_Statics::NewProp_PublishedFileID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetUserItemVote_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Gets the users vote status on a workshop item.\n\x09*\n\x09* @param\x09PublishedFileID\x09\x09The workshop item ID to get the users vote.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Gets the users vote status on a workshop item.\n\n@param        PublishedFileID         The workshop item ID to get the users vote." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetUserItemVote_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetUserItemVote", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_GetUserItemVote_Statics::UGC_eventGetUserItemVote_Parms), Z_Construct_UFunction_UUGC_GetUserItemVote_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetUserItemVote_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetUserItemVote_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetUserItemVote_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_GetUserItemVote()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_GetUserItemVote_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics
	{
		struct UGC_eventReleaseQueryUGCRequest_Parms
		{
			FUGCQueryHandle Handle;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventReleaseQueryUGCRequest_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 1676725136
	void Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventReleaseQueryUGCRequest_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_eventReleaseQueryUGCRequest_Parms), &Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Releases a UGC query Handle when you are done with it to free up memory.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09The UGC query Handle to release.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Releases a UGC query Handle when you are done with it to free up memory.\n\n@param        Handle                  The UGC query Handle to release." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "ReleaseQueryUGCRequest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics::UGC_eventReleaseQueryUGCRequest_Parms), Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics
	{
		struct UGC_eventRemoveAppDependency_Parms
		{
			FScriptDelegate Callback;
			FPublishedFileID PublishedFileID;
			int32 AppId;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventRemoveAppDependency_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnRemoveAppDependencyResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::NewProp_Callback_MetaData)) }; // 664368524
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventRemoveAppDependency_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) }; // 661584633
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventRemoveAppDependency_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::NewProp_PublishedFileID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::NewProp_AppId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Removes the dependency between the given item and the appid. This list of dependencies can be retrieved by calling GetAppDependencies.\n\x09*\n\x09* @param\x09PublishedFileID\x09\x09The item.\n\x09* @param\x09""AppId\x09\x09\x09\x09The app/dlc.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Removes the dependency between the given item and the appid. This list of dependencies can be retrieved by calling GetAppDependencies.\n\n@param        PublishedFileID         The item.\n@param        AppId                           The app/dlc." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "RemoveAppDependency", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::UGC_eventRemoveAppDependency_Parms), Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_RemoveAppDependency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_RemoveDependency_Statics
	{
		struct UGC_eventRemoveDependency_Parms
		{
			FScriptDelegate Callback;
			FPublishedFileID ParentPublishedFileID;
			FPublishedFileID ChildPublishedFileID;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParentPublishedFileID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChildPublishedFileID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_RemoveDependency_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_RemoveDependency_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventRemoveDependency_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnRemoveUGCDependencyResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUGC_RemoveDependency_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_RemoveDependency_Statics::NewProp_Callback_MetaData)) }; // 686645258
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_RemoveDependency_Statics::NewProp_ParentPublishedFileID = { "ParentPublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventRemoveDependency_Parms, ParentPublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) }; // 661584633
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_RemoveDependency_Statics::NewProp_ChildPublishedFileID = { "ChildPublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventRemoveDependency_Parms, ChildPublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) }; // 661584633
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_RemoveDependency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_RemoveDependency_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_RemoveDependency_Statics::NewProp_ParentPublishedFileID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_RemoveDependency_Statics::NewProp_ChildPublishedFileID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_RemoveDependency_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Removes a workshop item as a dependency from the specified item.\n\x09*\n\x09* @param\x09ParentPublishedFileID\x09\x09The workshop item to remove a dependency from.\n\x09* @param\x09""ChildPublishedFileID\x09\x09The dependency to remove from the parent.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Removes a workshop item as a dependency from the specified item.\n\n@param        ParentPublishedFileID           The workshop item to remove a dependency from.\n@param        ChildPublishedFileID            The dependency to remove from the parent." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_RemoveDependency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "RemoveDependency", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_RemoveDependency_Statics::UGC_eventRemoveDependency_Parms), Z_Construct_UFunction_UUGC_RemoveDependency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_RemoveDependency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_RemoveDependency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_RemoveDependency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_RemoveDependency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_RemoveDependency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics
	{
		struct UGC_eventRemoveItemFromFavorites_Parms
		{
			FScriptDelegate Callback;
			int32 AppId;
			FPublishedFileID PublishedFileID;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventRemoveItemFromFavorites_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnRemoveItemFromFavorites__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::NewProp_Callback_MetaData)) }; // 3588935076
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventRemoveItemFromFavorites_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventRemoveItemFromFavorites_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) }; // 661584633
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::NewProp_PublishedFileID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Removes a workshop item from the users favorites list.\n\x09*\n\x09* @param\x09""AppId\x09\x09\x09\x09\x09The app ID that this item belongs to.\n\x09* @param\x09PublishedFileID\x09\x09\x09The workshop item to remove from the users favorites list.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Removes a workshop item from the users favorites list.\n\n@param        AppId                                   The app ID that this item belongs to.\n@param        PublishedFileID                 The workshop item to remove from the users favorites list." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "RemoveItemFromFavorites", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::UGC_eventRemoveItemFromFavorites_Parms), Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_RemoveItemFromFavorites()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics
	{
		struct UGC_eventRemoveItemKeyValueTags_Parms
		{
			FUGCUpdateHandle Handle;
			FString Key;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventRemoveItemKeyValueTags_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) }; // 4003650614
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventRemoveItemKeyValueTags_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventRemoveItemKeyValueTags_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_eventRemoveItemKeyValueTags_Parms), &Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Removes an existing Key Value tag from an item.\n\x09*\n\x09* You can only call this up to 100 times per item update. If you need remove more tags than that you'll need to make subsequent item updates.\n\x09* NOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\x09*\n\x09* @param\x09Handle\x09\x09The workshop item update Handle to customize.\n\x09* @param\x09Key\x09\x09\x09The Key to remove from the item.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Removes an existing Key Value tag from an item.\n\nYou can only call this up to 100 times per item update. If you need remove more tags than that you'll need to make subsequent item updates.\nNOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\n@param        Handle          The workshop item update Handle to customize.\n@param        Key                     The Key to remove from the item." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "RemoveItemKeyValueTags", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::UGC_eventRemoveItemKeyValueTags_Parms), Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics
	{
		struct UGC_eventRemoveItemPreview_Parms
		{
			FUGCUpdateHandle Handle;
			int32 Index;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventRemoveItemPreview_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) }; // 4003650614
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventRemoveItemPreview_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventRemoveItemPreview_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_eventRemoveItemPreview_Parms), &Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* RemoveItemPreview\n\x09*\n\x09* @param\x09Handle\x09\x09The workshop item update Handle to customize.\n\x09* @param\x09Index\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "RemoveItemPreview\n\n@param        Handle          The workshop item update Handle to customize.\n@param        Index" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "RemoveItemPreview", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::UGC_eventRemoveItemPreview_Parms), Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_RemoveItemPreview()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics
	{
		struct UGC_eventSendQueryUGCRequest_Parms
		{
			FScriptDelegate Callback;
			FUGCQueryHandle Handle;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventSendQueryUGCRequest_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnSendQueryUGCRequest__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics::NewProp_Callback_MetaData)) }; // 3871662570
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventSendQueryUGCRequest_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 1676725136
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics::NewProp_Handle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Send a UGC query to Steam.\n\x09*\n\x09* This must be called with a Handle obtained from CreateQueryUserUGCRequest, CreateQueryAllUGCRequest, or CreateQueryUGCDetailsRequest to actually send the request to Steam. Before calling this you should use one or more of the following APIs to customize your query:\n\x09* AddRequiredTag, AddExcludedTag, SetReturnOnlyIDs, SetReturnKeyValueTags, SetReturnLongDescription, SetReturnMetadata, SetReturnChildren, SetReturnAdditionalPreviews, SetReturnTotalOnly, SetLanguage, SetAllowCachedResponse, SetCloudFileNameFilter, SetMatchAnyTag, SetSearchText, SetRankedByTrendDays, AddRequiredKeyValueTag\n\x09*\n\x09* @param\x09Handle\x09\x09The UGC query request Handle to send.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Send a UGC query to Steam.\n\nThis must be called with a Handle obtained from CreateQueryUserUGCRequest, CreateQueryAllUGCRequest, or CreateQueryUGCDetailsRequest to actually send the request to Steam. Before calling this you should use one or more of the following APIs to customize your query:\nAddRequiredTag, AddExcludedTag, SetReturnOnlyIDs, SetReturnKeyValueTags, SetReturnLongDescription, SetReturnMetadata, SetReturnChildren, SetReturnAdditionalPreviews, SetReturnTotalOnly, SetLanguage, SetAllowCachedResponse, SetCloudFileNameFilter, SetMatchAnyTag, SetSearchText, SetRankedByTrendDays, AddRequiredKeyValueTag\n\n@param        Handle          The UGC query request Handle to send." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SendQueryUGCRequest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics::UGC_eventSendQueryUGCRequest_Parms), Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SendQueryUGCRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics
	{
		struct UGC_eventSetAllowCachedResponse_Parms
		{
			FUGCQueryHandle Handle;
			int32 MaxAgeSeconds;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAgeSeconds;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventSetAllowCachedResponse_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 1676725136
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::NewProp_MaxAgeSeconds = { "MaxAgeSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventSetAllowCachedResponse_Parms, MaxAgeSeconds), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetAllowCachedResponse_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_eventSetAllowCachedResponse_Parms), &Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::NewProp_MaxAgeSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Sets whether results will be returned from the cache for the specific period of time on a pending UGC Query.\n\x09*\n\x09* NOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09The UGC query Handle to customize.\n\x09* @param\x09MaxAgeSeconds\x09\x09The maximum amount of time that an item can be returned without a cache invalidation.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Sets whether results will be returned from the cache for the specific period of time on a pending UGC Query.\n\nNOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\n@param        Handle                          The UGC query Handle to customize.\n@param        MaxAgeSeconds           The maximum amount of time that an item can be returned without a cache invalidation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetAllowCachedResponse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::UGC_eventSetAllowCachedResponse_Parms), Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetAllowCachedResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics
	{
		struct UGC_eventSetAllowLegacyUpload_Parms
		{
			FUGCUpdateHandle Handle;
			bool bAllowLegacyUpload;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static void NewProp_bAllowLegacyUpload_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowLegacyUpload;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventSetAllowLegacyUpload_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) }; // 4003650614
	void Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::NewProp_bAllowLegacyUpload_SetBit(void* Obj)
	{
		((UGC_eventSetAllowLegacyUpload_Parms*)Obj)->bAllowLegacyUpload = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::NewProp_bAllowLegacyUpload = { "bAllowLegacyUpload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_eventSetAllowLegacyUpload_Parms), &Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::NewProp_bAllowLegacyUpload_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetAllowLegacyUpload_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_eventSetAllowLegacyUpload_Parms), &Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::NewProp_bAllowLegacyUpload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Use legacy upload for a single small file (SDK 1.43+ Only)\n\x09*\n\x09* The parameter to SetItemContent() should either be a directory with one file or the full path to the file.  The file must also be less than 10MB in size.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09The UGC query Handle to customize.\n\x09* @param\x09""bAllowLegacyUpload\x09\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Use legacy upload for a single small file (SDK 1.43+ Only)\n\nThe parameter to SetItemContent() should either be a directory with one file or the full path to the file.  The file must also be less than 10MB in size.\n\n@param        Handle                          The UGC query Handle to customize.\n@param        bAllowLegacyUpload" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetAllowLegacyUpload", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::UGC_eventSetAllowLegacyUpload_Parms), Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetAllowLegacyUpload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics
	{
		struct UGC_eventSetCloudFileNameFilter_Parms
		{
			FUGCQueryHandle Handle;
			FString MatchCloudFileName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MatchCloudFileName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventSetCloudFileNameFilter_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 1676725136
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::NewProp_MatchCloudFileName = { "MatchCloudFileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventSetCloudFileNameFilter_Parms, MatchCloudFileName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetCloudFileNameFilter_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_eventSetCloudFileNameFilter_Parms), &Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::NewProp_MatchCloudFileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Sets to only return items that have a specific filename on a pending UGC Query.\n\x09*\n\x09* NOTE: This can only be used with CreateQueryUserUGCRequest!\n\x09* NOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09\x09The UGC query Handle to customize.\n\x09* @param\x09MatchCloudFileName\x09\x09The filename to match.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Sets to only return items that have a specific filename on a pending UGC Query.\n\nNOTE: This can only be used with CreateQueryUserUGCRequest!\nNOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\n@param        Handle                                  The UGC query Handle to customize.\n@param        MatchCloudFileName              The filename to match." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetCloudFileNameFilter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::UGC_eventSetCloudFileNameFilter_Parms), Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetCloudFileNameFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetItemContent_Statics
	{
		struct UGC_eventSetItemContent_Parms
		{
			FUGCUpdateHandle Handle;
			FString ContentFolder;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ContentFolder;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetItemContent_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventSetItemContent_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) }; // 4003650614
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_SetItemContent_Statics::NewProp_ContentFolder = { "ContentFolder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventSetItemContent_Parms, ContentFolder), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_SetItemContent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetItemContent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetItemContent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_eventSetItemContent_Parms), &Z_Construct_UFunction_UUGC_SetItemContent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetItemContent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemContent_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemContent_Statics::NewProp_ContentFolder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemContent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetItemContent_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Sets the folder that will be stored as the content for an item.\n\x09*\n\x09* For efficient upload and download, files should not be merged or compressed into single files (e.g. zip files).\n\x09* NOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09The workshop item update Handle to customize.\n\x09* @param\x09""ContentFolder\x09The absolute path to a local folder containing the content for the item.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Sets the folder that will be stored as the content for an item.\n\nFor efficient upload and download, files should not be merged or compressed into single files (e.g. zip files).\nNOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\n@param        Handle                  The workshop item update Handle to customize.\n@param        ContentFolder   The absolute path to a local folder containing the content for the item." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetItemContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetItemContent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_SetItemContent_Statics::UGC_eventSetItemContent_Parms), Z_Construct_UFunction_UUGC_SetItemContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemContent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetItemContent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemContent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetItemContent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_SetItemContent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetItemDescription_Statics
	{
		struct UGC_eventSetItemDescription_Parms
		{
			FUGCUpdateHandle Handle;
			FString Description;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetItemDescription_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventSetItemDescription_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) }; // 4003650614
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_SetItemDescription_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventSetItemDescription_Parms, Description), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_SetItemDescription_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetItemDescription_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetItemDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_eventSetItemDescription_Parms), &Z_Construct_UFunction_UUGC_SetItemDescription_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetItemDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemDescription_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemDescription_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetItemDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Sets a new description for an item.\n\x09*\n\x09* The description must be limited to the length defined by k_cchPublishedDocumentDescriptionMax.\n\x09* You can set what language this is for by using SetItemUpdateLanguage, if no language is set then \"english\" is assumed.\n\x09* NOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09The workshop item update Handle to customize.\n\x09* @param\x09""Description\x09\x09The new description of the item.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Sets a new description for an item.\n\nThe description must be limited to the length defined by k_cchPublishedDocumentDescriptionMax.\nYou can set what language this is for by using SetItemUpdateLanguage, if no language is set then \"english\" is assumed.\nNOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\n@param        Handle                  The workshop item update Handle to customize.\n@param        Description             The new description of the item." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetItemDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetItemDescription", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_SetItemDescription_Statics::UGC_eventSetItemDescription_Parms), Z_Construct_UFunction_UUGC_SetItemDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetItemDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetItemDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_SetItemDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetItemMetadata_Statics
	{
		struct UGC_eventSetItemMetadata_Parms
		{
			FUGCUpdateHandle Handle;
			FString MetaData;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MetaData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventSetItemMetadata_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) }; // 4003650614
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventSetItemMetadata_Parms, MetaData), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetItemMetadata_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_eventSetItemMetadata_Parms), &Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::NewProp_MetaData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Sets arbitrary metadata for an item. This metadata can be returned from queries without having to download and install the actual content.\n\x09*\n\x09* The metadata must be limited to the size defined by k_cchDeveloperMetadataMax.\n\x09* NOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09The workshop item update Handle to customize.\n\x09* @param\x09MetaData\x09\x09The new metadata for this item.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Sets arbitrary metadata for an item. This metadata can be returned from queries without having to download and install the actual content.\n\nThe metadata must be limited to the size defined by k_cchDeveloperMetadataMax.\nNOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\n@param        Handle                  The workshop item update Handle to customize.\n@param        MetaData                The new metadata for this item." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetItemMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::UGC_eventSetItemMetadata_Parms), Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetItemMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetItemPreview_Statics
	{
		struct UGC_eventSetItemPreview_Parms
		{
			FUGCUpdateHandle Handle;
			FString PreviewFile;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PreviewFile;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetItemPreview_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventSetItemPreview_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) }; // 4003650614
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_SetItemPreview_Statics::NewProp_PreviewFile = { "PreviewFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventSetItemPreview_Parms, PreviewFile), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_SetItemPreview_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetItemPreview_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetItemPreview_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_eventSetItemPreview_Parms), &Z_Construct_UFunction_UUGC_SetItemPreview_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetItemPreview_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemPreview_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemPreview_Statics::NewProp_PreviewFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemPreview_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetItemPreview_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Sets the primary preview image for the item.\n\x09*\n\x09* The format should be one that both the web and the application (if necessary) can render. Suggested formats include JPG, PNG and GIF.\n\x09* NOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09The workshop item update Handle to customize.\n\x09* @param\x09PreviewFile\x09\x09The absolute path to a local preview image file for the item.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Sets the primary preview image for the item.\n\nThe format should be one that both the web and the application (if necessary) can render. Suggested formats include JPG, PNG and GIF.\nNOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\n@param        Handle                  The workshop item update Handle to customize.\n@param        PreviewFile             The absolute path to a local preview image file for the item." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetItemPreview_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetItemPreview", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_SetItemPreview_Statics::UGC_eventSetItemPreview_Parms), Z_Construct_UFunction_UUGC_SetItemPreview_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemPreview_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetItemPreview_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemPreview_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetItemPreview()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_SetItemPreview_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetItemTags_Statics
	{
		struct UGC_eventSetItemTags_Parms
		{
			FUGCUpdateHandle Handle;
			TArray<FString> Tags;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Tags_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetItemTags_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventSetItemTags_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) }; // 4003650614
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_SetItemTags_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUGC_SetItemTags_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventSetItemTags_Parms, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_SetItemTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetItemTags_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetItemTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_eventSetItemTags_Parms), &Z_Construct_UFunction_UUGC_SetItemTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetItemTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemTags_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemTags_Statics::NewProp_Tags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemTags_Statics::NewProp_Tags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetItemTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Sets arbitrary developer specified tags on an item.\n\x09*\n\x09* Each tag must be limited to 255 characters. Tag names can only include printable characters, excluding ','. For reference on what characters are allowed, refer to http://en.cppreference.com/w/c/string/byte/isprint\n\x09* NOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\x09*\n\x09* @param\x09Handle\x09\x09The workshop item update Handle to customize.\n\x09* @param\x09Tags\x09\x09The list of tags to set on this item.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Sets arbitrary developer specified tags on an item.\n\nEach tag must be limited to 255 characters. Tag names can only include printable characters, excluding ','. For reference on what characters are allowed, refer to http://en.cppreference.com/w/c/string/byte/isprint\nNOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\n@param        Handle          The workshop item update Handle to customize.\n@param        Tags            The list of tags to set on this item." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetItemTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetItemTags", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_SetItemTags_Statics::UGC_eventSetItemTags_Parms), Z_Construct_UFunction_UUGC_SetItemTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetItemTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetItemTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_SetItemTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetItemTitle_Statics
	{
		struct UGC_eventSetItemTitle_Parms
		{
			FUGCUpdateHandle Handle;
			FString Title;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetItemTitle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventSetItemTitle_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) }; // 4003650614
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_SetItemTitle_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventSetItemTitle_Parms, Title), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_SetItemTitle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetItemTitle_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetItemTitle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_eventSetItemTitle_Parms), &Z_Construct_UFunction_UUGC_SetItemTitle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetItemTitle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemTitle_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemTitle_Statics::NewProp_Title,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemTitle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetItemTitle_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Sets a new title for an item.\n\x09*\n\x09* The title must be limited to the size defined by k_cchPublishedDocumentTitleMax.\n\x09* You can set what language this is for by using SetItemUpdateLanguage, if no language is set then \"english\" is assumed.\n\x09* NOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\x09*\n\x09* @param\x09Handle\x09\x09The workshop item update Handle to customize.\n\x09* @param\x09Title\x09\x09The new title of the item.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Sets a new title for an item.\n\nThe title must be limited to the size defined by k_cchPublishedDocumentTitleMax.\nYou can set what language this is for by using SetItemUpdateLanguage, if no language is set then \"english\" is assumed.\nNOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\n@param        Handle          The workshop item update Handle to customize.\n@param        Title           The new title of the item." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetItemTitle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetItemTitle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_SetItemTitle_Statics::UGC_eventSetItemTitle_Parms), Z_Construct_UFunction_UUGC_SetItemTitle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemTitle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetItemTitle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemTitle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetItemTitle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_SetItemTitle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics
	{
		struct UGC_eventSetItemUpdateLanguage_Parms
		{
			FUGCUpdateHandle Handle;
			FString Language;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventSetItemUpdateLanguage_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) }; // 4003650614
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventSetItemUpdateLanguage_Parms, Language), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetItemUpdateLanguage_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_eventSetItemUpdateLanguage_Parms), &Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::NewProp_Language,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Sets the language of the title and description that will be set in this item update.\n\x09*\n\x09* This must be in the format of the API language code.\n\x09* If this is not set then \"english\" is assumed.\n\x09* NOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09The workshop item update Handle to customize.\n\x09* @param\x09Language\x09\x09The language of the title and description that will be set in this update.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Sets the language of the title and description that will be set in this item update.\n\nThis must be in the format of the API language code.\nIf this is not set then \"english\" is assumed.\nNOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\n@param        Handle                  The workshop item update Handle to customize.\n@param        Language                The language of the title and description that will be set in this update." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetItemUpdateLanguage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::UGC_eventSetItemUpdateLanguage_Parms), Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetItemUpdateLanguage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetItemVisibility_Statics
	{
		struct UGC_eventSetItemVisibility_Parms
		{
			FUGCUpdateHandle Handle;
			ESteamRemoteStoragePublishedFileVisibility Visibility;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Visibility_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Visibility;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventSetItemVisibility_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) }; // 4003650614
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::NewProp_Visibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::NewProp_Visibility = { "Visibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventSetItemVisibility_Parms, Visibility), Z_Construct_UEnum_SteamCore_ESteamRemoteStoragePublishedFileVisibility, METADATA_PARAMS(nullptr, 0) }; // 4066813585
	void Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetItemVisibility_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_eventSetItemVisibility_Parms), &Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::NewProp_Visibility_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::NewProp_Visibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Sets the visibility of an item.\n\x09*\n\x09* NOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09The workshop item update Handle to customize.\n\x09* @param\x09Visibility\x09\x09The visibility to set.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Sets the visibility of an item.\n\nNOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\n@param        Handle                  The workshop item update Handle to customize.\n@param        Visibility              The visibility to set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetItemVisibility", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::UGC_eventSetItemVisibility_Parms), Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetItemVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetLanguage_Statics
	{
		struct UGC_eventSetLanguage_Parms
		{
			FUGCQueryHandle Handle;
			FString Language;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetLanguage_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventSetLanguage_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 1676725136
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_SetLanguage_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventSetLanguage_Parms, Language), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_SetLanguage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetLanguage_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetLanguage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_eventSetLanguage_Parms), &Z_Construct_UFunction_UUGC_SetLanguage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetLanguage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetLanguage_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetLanguage_Statics::NewProp_Language,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetLanguage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetLanguage_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Sets the language to return the title and description in for the items on a pending UGC Query.\n\x09*\n\x09* This must be in the format of the API Language code.\n\x09* If this is not set then \"english\" is assumed.\n\x09* NOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09The UGC query Handle to customize.\n\x09* @param\x09Language\x09\x09The language to return.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Sets the language to return the title and description in for the items on a pending UGC Query.\n\nThis must be in the format of the API Language code.\nIf this is not set then \"english\" is assumed.\nNOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\n@param        Handle                  The UGC query Handle to customize.\n@param        Language                The language to return." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetLanguage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetLanguage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_SetLanguage_Statics::UGC_eventSetLanguage_Parms), Z_Construct_UFunction_UUGC_SetLanguage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetLanguage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetLanguage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetLanguage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetLanguage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_SetLanguage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics
	{
		struct UGC_eventSetMatchAnyTag_Parms
		{
			FUGCQueryHandle Handle;
			bool bMatchAnyTag;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static void NewProp_bMatchAnyTag_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMatchAnyTag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventSetMatchAnyTag_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 1676725136
	void Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::NewProp_bMatchAnyTag_SetBit(void* Obj)
	{
		((UGC_eventSetMatchAnyTag_Parms*)Obj)->bMatchAnyTag = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::NewProp_bMatchAnyTag = { "bMatchAnyTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_eventSetMatchAnyTag_Parms), &Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::NewProp_bMatchAnyTag_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetMatchAnyTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_eventSetMatchAnyTag_Parms), &Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::NewProp_bMatchAnyTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Sets whether workshop items will be returned if they have one or more matching tag, or if all tags need to match on a pending UGC Query.\n\x09*\n\x09* NOTE: This can only be used with CreateQueryAllUGCRequest!\n\x09* NOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09The UGC query Handle to customize.\n\x09* @param\x09""bMatchAnyTag\x09Should the item just need to have one required tag (true), or all of them? (false)\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Sets whether workshop items will be returned if they have one or more matching tag, or if all tags need to match on a pending UGC Query.\n\nNOTE: This can only be used with CreateQueryAllUGCRequest!\nNOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\n@param        Handle                  The UGC query Handle to customize.\n@param        bMatchAnyTag    Should the item just need to have one required tag (true), or all of them? (false)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetMatchAnyTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::UGC_eventSetMatchAnyTag_Parms), Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetMatchAnyTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics
	{
		struct UGC_eventSetRankedByTrendDays_Parms
		{
			FUGCQueryHandle Handle;
			int32 Days;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Days;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventSetRankedByTrendDays_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 1676725136
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::NewProp_Days = { "Days", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventSetRankedByTrendDays_Parms, Days), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetRankedByTrendDays_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_eventSetRankedByTrendDays_Parms), &Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::NewProp_Days,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Sets whether the order of the results will be updated based on the rank of items over a number of days on a pending UGC Query.\n\x09*\n\x09* NOTE: This can only be used with CreateQueryAllUGCRequest!\n\x09* NOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\x09*\n\x09* @param\x09Handle\x09\x09The UGC query Handle to customize.\n\x09* @param\x09""Days\x09\x09Sets the number of days to rank items over. Valid Values are 1-365 inclusive.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Sets whether the order of the results will be updated based on the rank of items over a number of days on a pending UGC Query.\n\nNOTE: This can only be used with CreateQueryAllUGCRequest!\nNOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\n@param        Handle          The UGC query Handle to customize.\n@param        Days            Sets the number of days to rank items over. Valid Values are 1-365 inclusive." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetRankedByTrendDays", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::UGC_eventSetRankedByTrendDays_Parms), Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetRankedByTrendDays()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics
	{
		struct UGC_eventSetReturnAdditionalPreviews_Parms
		{
			FUGCQueryHandle Handle;
			bool bReturnAdditionalPreviews;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static void NewProp_bReturnAdditionalPreviews_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnAdditionalPreviews;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventSetReturnAdditionalPreviews_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 1676725136
	void Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::NewProp_bReturnAdditionalPreviews_SetBit(void* Obj)
	{
		((UGC_eventSetReturnAdditionalPreviews_Parms*)Obj)->bReturnAdditionalPreviews = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::NewProp_bReturnAdditionalPreviews = { "bReturnAdditionalPreviews", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_eventSetReturnAdditionalPreviews_Parms), &Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::NewProp_bReturnAdditionalPreviews_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetReturnAdditionalPreviews_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_eventSetReturnAdditionalPreviews_Parms), &Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::NewProp_bReturnAdditionalPreviews,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Sets whether to return any additional images/videos attached to the items on a pending UGC Query.\n\x09*\n\x09* NOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\x09*\x09\n\x09* @param\x09Handle\x09\x09\x09\x09\x09\x09\x09The UGC query Handle to customize.\n\x09* @param\x09""bReturnAdditionalPreviews\x09\x09Return the additional previews for the items?\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Sets whether to return any additional images/videos attached to the items on a pending UGC Query.\n\nNOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\n@param        Handle                                                  The UGC query Handle to customize.\n@param        bReturnAdditionalPreviews               Return the additional previews for the items?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetReturnAdditionalPreviews", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::UGC_eventSetReturnAdditionalPreviews_Parms), Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetReturnChildren_Statics
	{
		struct UGC_eventSetReturnChildren_Parms
		{
			FUGCQueryHandle Handle;
			bool bReturnChildren;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static void NewProp_bReturnChildren_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnChildren;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventSetReturnChildren_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 1676725136
	void Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::NewProp_bReturnChildren_SetBit(void* Obj)
	{
		((UGC_eventSetReturnChildren_Parms*)Obj)->bReturnChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::NewProp_bReturnChildren = { "bReturnChildren", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_eventSetReturnChildren_Parms), &Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::NewProp_bReturnChildren_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetReturnChildren_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_eventSetReturnChildren_Parms), &Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::NewProp_bReturnChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Sets whether to return the IDs of the child items of the items on a pending UGC Query.\n\x09*\n\x09* NOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\x09* \n\x09* @param\x09Handle\x09\x09\x09\x09The UGC query Handle to customize.\n\x09* @param\x09""bReturnChildren\x09\x09Return the IDs of children of the items?\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Sets whether to return the IDs of the child items of the items on a pending UGC Query.\n\nNOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\n@param        Handle                          The UGC query Handle to customize.\n@param        bReturnChildren         Return the IDs of children of the items?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetReturnChildren", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::UGC_eventSetReturnChildren_Parms), Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetReturnChildren()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics
	{
		struct UGC_eventSetReturnKeyValueTags_Parms
		{
			FUGCQueryHandle Handle;
			bool bReturnKeyValueTags;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static void NewProp_bReturnKeyValueTags_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnKeyValueTags;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventSetReturnKeyValueTags_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 1676725136
	void Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::NewProp_bReturnKeyValueTags_SetBit(void* Obj)
	{
		((UGC_eventSetReturnKeyValueTags_Parms*)Obj)->bReturnKeyValueTags = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::NewProp_bReturnKeyValueTags = { "bReturnKeyValueTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_eventSetReturnKeyValueTags_Parms), &Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::NewProp_bReturnKeyValueTags_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetReturnKeyValueTags_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_eventSetReturnKeyValueTags_Parms), &Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::NewProp_bReturnKeyValueTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Sets whether to return any Key-Value tags for the items on a pending UGC Query.\n\x09*\n\x09* NOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\x09* \n\x09* @param\x09Handle\x09\x09\x09\x09\x09The UGC query Handle to customize.\n\x09* @param\x09""bReturnKeyValueTags\x09\x09Return any Key-Value tags for the items?\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Sets whether to return any Key-Value tags for the items on a pending UGC Query.\n\nNOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\n@param        Handle                                  The UGC query Handle to customize.\n@param        bReturnKeyValueTags             Return any Key-Value tags for the items?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetReturnKeyValueTags", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::UGC_eventSetReturnKeyValueTags_Parms), Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetReturnKeyValueTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics
	{
		struct UGC_eventSetReturnLongDescription_Parms
		{
			FUGCQueryHandle Handle;
			bool bReturnLongDescription;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static void NewProp_bReturnLongDescription_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnLongDescription;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventSetReturnLongDescription_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 1676725136
	void Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::NewProp_bReturnLongDescription_SetBit(void* Obj)
	{
		((UGC_eventSetReturnLongDescription_Parms*)Obj)->bReturnLongDescription = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::NewProp_bReturnLongDescription = { "bReturnLongDescription", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_eventSetReturnLongDescription_Parms), &Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::NewProp_bReturnLongDescription_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetReturnLongDescription_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_eventSetReturnLongDescription_Parms), &Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::NewProp_bReturnLongDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Sets whether to return the full description for the items on a pending UGC Query.\n\x09*\n\x09* If you don't set this then you only receive the summary which is the description truncated at 255 bytes.\n\x09* NOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09\x09\x09The UGC query Handle to customize.\n\x09* @param\x09""bReturnLongDescription\x09\x09Return the long description for the items?\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Sets whether to return the full description for the items on a pending UGC Query.\n\nIf you don't set this then you only receive the summary which is the description truncated at 255 bytes.\nNOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\n@param        Handle                                          The UGC query Handle to customize.\n@param        bReturnLongDescription          Return the long description for the items?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetReturnLongDescription", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::UGC_eventSetReturnLongDescription_Parms), Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetReturnLongDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics
	{
		struct UGC_eventSetReturnMetadata_Parms
		{
			FUGCQueryHandle Handle;
			bool bReturnMetadata;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static void NewProp_bReturnMetadata_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnMetadata;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventSetReturnMetadata_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 1676725136
	void Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::NewProp_bReturnMetadata_SetBit(void* Obj)
	{
		((UGC_eventSetReturnMetadata_Parms*)Obj)->bReturnMetadata = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::NewProp_bReturnMetadata = { "bReturnMetadata", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_eventSetReturnMetadata_Parms), &Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::NewProp_bReturnMetadata_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetReturnMetadata_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_eventSetReturnMetadata_Parms), &Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::NewProp_bReturnMetadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Sets whether to return the developer specified metadata for the items on a pending UGC Query.\n\x09*\n\x09* NOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09The UGC query Handle to customize.\n\x09* @param\x09""bReturnMetadata\x09\x09Return the metadata for the items? \n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Sets whether to return the developer specified metadata for the items on a pending UGC Query.\n\nNOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\n@param        Handle                          The UGC query Handle to customize.\n@param        bReturnMetadata         Return the metadata for the items?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetReturnMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::UGC_eventSetReturnMetadata_Parms), Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetReturnMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics
	{
		struct UGC_eventSetReturnOnlyIDs_Parms
		{
			FUGCQueryHandle Handle;
			bool bReturnOnlyIDs;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static void NewProp_bReturnOnlyIDs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnOnlyIDs;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventSetReturnOnlyIDs_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 1676725136
	void Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::NewProp_bReturnOnlyIDs_SetBit(void* Obj)
	{
		((UGC_eventSetReturnOnlyIDs_Parms*)Obj)->bReturnOnlyIDs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::NewProp_bReturnOnlyIDs = { "bReturnOnlyIDs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_eventSetReturnOnlyIDs_Parms), &Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::NewProp_bReturnOnlyIDs_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetReturnOnlyIDs_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_eventSetReturnOnlyIDs_Parms), &Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::NewProp_bReturnOnlyIDs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/** \n\x09* Sets whether to only return IDs instead of all the details on a pending UGC Query.\n\x09*\n\x09* This is useful for when you don't need all the information (e.g. you just want to get the IDs of the items a user has in their favorites list.)\n\x09* NOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09The UGC query Handle to customize.\n\x09* @param\x09""bReturnOnlyIDs\x09\x09Return only the IDs of items?\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Sets whether to only return IDs instead of all the details on a pending UGC Query.\n\nThis is useful for when you don't need all the information (e.g. you just want to get the IDs of the items a user has in their favorites list.)\nNOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\n@param        Handle                          The UGC query Handle to customize.\n@param        bReturnOnlyIDs          Return only the IDs of items?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetReturnOnlyIDs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::UGC_eventSetReturnOnlyIDs_Parms), Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetReturnOnlyIDs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics
	{
		struct UGC_eventSetReturnPlaytimeStats_Parms
		{
			FUGCQueryHandle Handle;
			int32 Days;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Days;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventSetReturnPlaytimeStats_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 1676725136
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::NewProp_Days = { "Days", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventSetReturnPlaytimeStats_Parms, Days), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetReturnPlaytimeStats_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_eventSetReturnPlaytimeStats_Parms), &Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::NewProp_Days,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Sets whether to return the the playtime stats on a pending UGC Query.\n\x09*\n\x09* NOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09The UGC query Handle to customize.\n\x09* @param\x09""Days\x09\x09\x09The number of days worth of playtime stats to return.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Sets whether to return the the playtime stats on a pending UGC Query.\n\nNOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\n@param        Handle                  The UGC query Handle to customize.\n@param        Days                    The number of days worth of playtime stats to return." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetReturnPlaytimeStats", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::UGC_eventSetReturnPlaytimeStats_Parms), Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics
	{
		struct UGC_eventSetReturnTotalOnly_Parms
		{
			FUGCQueryHandle Handle;
			bool bReturnTotalOnly;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static void NewProp_bReturnTotalOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnTotalOnly;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventSetReturnTotalOnly_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 1676725136
	void Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::NewProp_bReturnTotalOnly_SetBit(void* Obj)
	{
		((UGC_eventSetReturnTotalOnly_Parms*)Obj)->bReturnTotalOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::NewProp_bReturnTotalOnly = { "bReturnTotalOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_eventSetReturnTotalOnly_Parms), &Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::NewProp_bReturnTotalOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetReturnTotalOnly_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_eventSetReturnTotalOnly_Parms), &Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::NewProp_bReturnTotalOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Sets whether to only return the the total number of matching items on a pending UGC Query.\n\x09*\n\x09* The actual items will not be returned when SteamUGCQueryCompleted_t is called.\n\x09* NOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09The UGC query Handle to customize.\n\x09* @param\x09""bReturnTotalOnly\x09Only return the total number of items?\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Sets whether to only return the the total number of matching items on a pending UGC Query.\n\nThe actual items will not be returned when SteamUGCQueryCompleted_t is called.\nNOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\n@param        Handle                          The UGC query Handle to customize.\n@param        bReturnTotalOnly        Only return the total number of items?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetReturnTotalOnly", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::UGC_eventSetReturnTotalOnly_Parms), Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetReturnTotalOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetSearchText_Statics
	{
		struct UGC_eventSetSearchText_Parms
		{
			FUGCQueryHandle Handle;
			FString SearchText;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SearchText;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetSearchText_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventSetSearchText_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) }; // 1676725136
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_SetSearchText_Statics::NewProp_SearchText = { "SearchText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventSetSearchText_Parms, SearchText), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_SetSearchText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetSearchText_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetSearchText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_eventSetSearchText_Parms), &Z_Construct_UFunction_UUGC_SetSearchText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetSearchText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetSearchText_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetSearchText_Statics::NewProp_SearchText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetSearchText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetSearchText_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Sets a string to that items need to match in either the title or the description on a pending UGC Query.\n\x09*\n\x09* NOTE: This can only be used with CreateQueryAllUGCRequest!\n\x09* NOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\x09* \n\x09* @param\x09Handle\x09\x09\x09The UGC query Handle to customize.\n\x09* @param\x09SearchText\x09\x09The text to be searched for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Sets a string to that items need to match in either the title or the description on a pending UGC Query.\n\nNOTE: This can only be used with CreateQueryAllUGCRequest!\nNOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\n@param        Handle                  The UGC query Handle to customize.\n@param        SearchText              The text to be searched for." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetSearchText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetSearchText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_SetSearchText_Statics::UGC_eventSetSearchText_Parms), Z_Construct_UFunction_UUGC_SetSearchText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetSearchText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetSearchText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetSearchText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetSearchText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_SetSearchText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetUserItemVote_Statics
	{
		struct UGC_eventSetUserItemVote_Parms
		{
			FScriptDelegate Callback;
			FPublishedFileID PublishedFileID;
			bool bVoteUp;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static void NewProp_bVoteUp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVoteUp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventSetUserItemVote_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnSetUserItemVote__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::NewProp_Callback_MetaData)) }; // 731365870
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventSetUserItemVote_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) }; // 661584633
	void Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::NewProp_bVoteUp_SetBit(void* Obj)
	{
		((UGC_eventSetUserItemVote_Parms*)Obj)->bVoteUp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::NewProp_bVoteUp = { "bVoteUp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_eventSetUserItemVote_Parms), &Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::NewProp_bVoteUp_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::NewProp_PublishedFileID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::NewProp_bVoteUp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Allows the user to rate a workshop item up or down.\n\x09*\n\x09* @param\x09PublishedFileID\x09\x09The workshop item ID to vote on.\n\x09* @param\x09""bVoteUp\x09\x09\x09\x09Vote up (true) or down (false)?\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Allows the user to rate a workshop item up or down.\n\n@param        PublishedFileID         The workshop item ID to vote on.\n@param        bVoteUp                         Vote up (true) or down (false)?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetUserItemVote", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::UGC_eventSetUserItemVote_Parms), Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetUserItemVote()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_StartItemUpdate_Statics
	{
		struct UGC_eventStartItemUpdate_Parms
		{
			int32 ConsumerAppID;
			FPublishedFileID PublishedFileID;
			FUGCUpdateHandle ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConsumerAppID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_StartItemUpdate_Statics::NewProp_ConsumerAppID = { "ConsumerAppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventStartItemUpdate_Parms, ConsumerAppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_StartItemUpdate_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventStartItemUpdate_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) }; // 661584633
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_StartItemUpdate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventStartItemUpdate_Parms, ReturnValue), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) }; // 4003650614
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_StartItemUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_StartItemUpdate_Statics::NewProp_ConsumerAppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_StartItemUpdate_Statics::NewProp_PublishedFileID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_StartItemUpdate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_StartItemUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Starts the item update process.\n\x09*\n\x09* This gets you a Handle that you can use to modify the item before finally sending off the update to the server with SubmitItemUpdate.\n\x09*\n\x09* @param\x09""ConsumerAppID\x09\x09The App ID that will be using this item.\n\x09* @param\x09PublishedFileID\x09\x09The item to update.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Starts the item update process.\n\nThis gets you a Handle that you can use to modify the item before finally sending off the update to the server with SubmitItemUpdate.\n\n@param        ConsumerAppID           The App ID that will be using this item.\n@param        PublishedFileID         The item to update." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_StartItemUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "StartItemUpdate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_StartItemUpdate_Statics::UGC_eventStartItemUpdate_Parms), Z_Construct_UFunction_UUGC_StartItemUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_StartItemUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_StartItemUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_StartItemUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_StartItemUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_StartItemUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics
	{
		struct UGC_eventStartPlaytimeTracking_Parms
		{
			FScriptDelegate Callback;
			TArray<FPublishedFileID> PublishedFileID;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PublishedFileID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventStartPlaytimeTracking_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnStartPlaytimeTracking__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::NewProp_Callback_MetaData)) }; // 1218763997
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::NewProp_PublishedFileID_Inner = { "PublishedFileID", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) }; // 661584633
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventStartPlaytimeTracking_Parms, PublishedFileID), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 661584633
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::NewProp_PublishedFileID_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::NewProp_PublishedFileID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Start tracking playtime on a set of workshop items.\n\x09*\n\x09* When your app shuts down, playtime tracking will automatically stop.\n\x09*\n\x09* @param\x09PublishedFileID\x09\x09The array of workshop items you want to start tracking. (Maximum of 100 items.)\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Start tracking playtime on a set of workshop items.\n\nWhen your app shuts down, playtime tracking will automatically stop.\n\n@param        PublishedFileID         The array of workshop items you want to start tracking. (Maximum of 100 items.)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "StartPlaytimeTracking", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::UGC_eventStartPlaytimeTracking_Parms), Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_StartPlaytimeTracking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics
	{
		struct UGC_eventStopPlaytimeTracking_Parms
		{
			FScriptDelegate Callback;
			TArray<FPublishedFileID> PublishedFileIDs;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileIDs_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PublishedFileIDs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventStopPlaytimeTracking_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnStopPlaytimeTracking__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::NewProp_Callback_MetaData)) }; // 420289770
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::NewProp_PublishedFileIDs_Inner = { "PublishedFileIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) }; // 661584633
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::NewProp_PublishedFileIDs = { "PublishedFileIDs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventStopPlaytimeTracking_Parms, PublishedFileIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 661584633
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::NewProp_PublishedFileIDs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::NewProp_PublishedFileIDs,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Stop tracking playtime on a set of workshop items.\n\x09*\n\x09* When your app shuts down, playtime tracking will automatically stop.\n\x09*\n\x09* @param\x09PublishedFileIDs\x09The array of workshop items you want to stop tracking. (Maximum of 100 items.)\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Stop tracking playtime on a set of workshop items.\n\nWhen your app shuts down, playtime tracking will automatically stop.\n\n@param        PublishedFileIDs        The array of workshop items you want to stop tracking. (Maximum of 100 items.)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "StopPlaytimeTracking", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::UGC_eventStopPlaytimeTracking_Parms), Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_StopPlaytimeTracking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems_Statics
	{
		struct UGC_eventStopPlaytimeTrackingForAllItems_Parms
		{
			FScriptDelegate Callback;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventStopPlaytimeTrackingForAllItems_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnStopPlaytimeTrackingForAllItems__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems_Statics::NewProp_Callback_MetaData)) }; // 1326620021
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems_Statics::NewProp_Callback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Stop tracking playtime of all workshop items.\n\x09*\n\x09* When your app shuts down, playtime tracking will automatically stop.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Stop tracking playtime of all workshop items.\n\nWhen your app shuts down, playtime tracking will automatically stop." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "StopPlaytimeTrackingForAllItems", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems_Statics::UGC_eventStopPlaytimeTrackingForAllItems_Parms), Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics
	{
		struct UGC_eventSubmitItemUpdate_Parms
		{
			FScriptDelegate Callback;
			FUGCUpdateHandle Handle;
			FString ChangeNote;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ChangeNote;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventSubmitItemUpdate_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnSubmitItemUpdate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::NewProp_Callback_MetaData)) }; // 3852365544
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventSubmitItemUpdate_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) }; // 4003650614
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::NewProp_ChangeNote = { "ChangeNote", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventSubmitItemUpdate_Parms, ChangeNote), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::NewProp_ChangeNote,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Uploads the changes made to an item to the Steam Workshop.\n\x09*\n\x09* You can track the progress of an item update with GetItemUpdateProgress.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09The update Handle to submit.\n\x09* @param\x09""ChangeNote\x09\x09""A brief description of the changes made. (Optional, set to NULL for no change note)\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Uploads the changes made to an item to the Steam Workshop.\n\nYou can track the progress of an item update with GetItemUpdateProgress.\n\n@param        Handle                  The update Handle to submit.\n@param        ChangeNote              A brief description of the changes made. (Optional, set to NULL for no change note)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SubmitItemUpdate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::UGC_eventSubmitItemUpdate_Parms), Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SubmitItemUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SubscribeItem_Statics
	{
		struct UGC_eventSubscribeItem_Parms
		{
			FScriptDelegate Callback;
			FPublishedFileID PublishedFileID;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SubscribeItem_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_SubscribeItem_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventSubscribeItem_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnSubscribeItem__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SubscribeItem_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SubscribeItem_Statics::NewProp_Callback_MetaData)) }; // 1876688875
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SubscribeItem_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventSubscribeItem_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) }; // 661584633
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SubscribeItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SubscribeItem_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SubscribeItem_Statics::NewProp_PublishedFileID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SubscribeItem_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Subscribe to a workshop item. It will be downloaded and installed as soon as possible.\n\x09*\n\x09* @param\x09PublishedFileID\x09\x09The workshop item to subscribe to.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Subscribe to a workshop item. It will be downloaded and installed as soon as possible.\n\n@param        PublishedFileID         The workshop item to subscribe to." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SubscribeItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SubscribeItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_SubscribeItem_Statics::UGC_eventSubscribeItem_Parms), Z_Construct_UFunction_UUGC_SubscribeItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SubscribeItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SubscribeItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SubscribeItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SubscribeItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_SubscribeItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SuspendDownloads_Statics
	{
		struct UGC_eventSuspendDownloads_Parms
		{
			bool bSuspend;
		};
		static void NewProp_bSuspend_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuspend;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGC_SuspendDownloads_Statics::NewProp_bSuspend_SetBit(void* Obj)
	{
		((UGC_eventSuspendDownloads_Parms*)Obj)->bSuspend = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SuspendDownloads_Statics::NewProp_bSuspend = { "bSuspend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_eventSuspendDownloads_Parms), &Z_Construct_UFunction_UUGC_SuspendDownloads_Statics::NewProp_bSuspend_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SuspendDownloads_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SuspendDownloads_Statics::NewProp_bSuspend,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SuspendDownloads_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Suspends and resumes all workshop downloads.\n\x09*\n\x09* If you call this with bSuspend set to true then downloads will be suspended until you resume them by setting bSuspend to false or when the game ends.\n\x09*\n\x09* @param\x09""bSuspend\x09Suspend (true) or Resume (false) workshop downloads?\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Suspends and resumes all workshop downloads.\n\nIf you call this with bSuspend set to true then downloads will be suspended until you resume them by setting bSuspend to false or when the game ends.\n\n@param        bSuspend        Suspend (true) or Resume (false) workshop downloads?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SuspendDownloads_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SuspendDownloads", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_SuspendDownloads_Statics::UGC_eventSuspendDownloads_Parms), Z_Construct_UFunction_UUGC_SuspendDownloads_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SuspendDownloads_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SuspendDownloads_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SuspendDownloads_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SuspendDownloads()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_SuspendDownloads_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics
	{
		struct UGC_eventUnsubscribeItem_Parms
		{
			FScriptDelegate Callback;
			FPublishedFileID PublishedFileID;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventUnsubscribeItem_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnUnsubscribeItem__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics::NewProp_Callback_MetaData)) }; // 659876602
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventUnsubscribeItem_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) }; // 661584633
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics::NewProp_PublishedFileID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Unsubscribe from a workshop item. This will result in the item being removed after the game quits.\n\x09*\n\x09* @param\x09PublishedFileID\x09\x09The workshop item to unsubscribe from.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Unsubscribe from a workshop item. This will result in the item being removed after the game quits.\n\n@param        PublishedFileID         The workshop item to unsubscribe from." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "UnsubscribeItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics::UGC_eventUnsubscribeItem_Parms), Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_UnsubscribeItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics
	{
		struct UGC_eventUpdateItemPreviewFile_Parms
		{
			FUGCUpdateHandle Handle;
			int32 index;
			FString PreviewFile;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PreviewFile;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventUpdateItemPreviewFile_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) }; // 4003650614
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventUpdateItemPreviewFile_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::NewProp_PreviewFile = { "PreviewFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventUpdateItemPreviewFile_Parms, PreviewFile), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventUpdateItemPreviewFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_eventUpdateItemPreviewFile_Parms), &Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::NewProp_PreviewFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Updates an existing additional preview file for the item.\n\x09*\n\x09* If the preview type is an image then the format should be one that both the web and the application (if necessary) can render, and must be under 1MB. Suggested formats include JPG, PNG and GIF.\n\x09* NOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09The workshop item update Handle to customize.\n\x09* @param\x09index\x09\x09\x09The index of the preview file from 0 to GetQueryUGCNumAdditionalPreviews.\n\x09* @param\x09PreviewFile\x09\x09""Absolute path to the local image.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Updates an existing additional preview file for the item.\n\nIf the preview type is an image then the format should be one that both the web and the application (if necessary) can render, and must be under 1MB. Suggested formats include JPG, PNG and GIF.\nNOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\n@param        Handle                  The workshop item update Handle to customize.\n@param        index                   The index of the preview file from 0 to GetQueryUGCNumAdditionalPreviews.\n@param        PreviewFile             Absolute path to the local image." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "UpdateItemPreviewFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::UGC_eventUpdateItemPreviewFile_Parms), Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_UpdateItemPreviewFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics
	{
		struct UGC_eventUpdateItemPreviewVideo_Parms
		{
			FUGCUpdateHandle Handle;
			int32 Index;
			FString PreviewVideo;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PreviewVideo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventUpdateItemPreviewVideo_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) }; // 4003650614
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventUpdateItemPreviewVideo_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::NewProp_PreviewVideo = { "PreviewVideo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGC_eventUpdateItemPreviewVideo_Parms, PreviewVideo), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventUpdateItemPreviewVideo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGC_eventUpdateItemPreviewVideo_Parms), &Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::NewProp_PreviewVideo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Updates an additional video preview from YouTube for the item.\n\x09*\n\x09* NOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09The workshop item update Handle to customize.\n\x09* @param\x09Index\x09\x09\x09\x09The index of the preview file from 0 to GetQueryUGCNumAdditionalPreviews.\n\x09* @param\x09PreviewVideo\x09\x09The YouTube video to add. (e.g. \"jHgZh4GV9G0\")\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
		{ "ToolTip", "Updates an additional video preview from YouTube for the item.\n\nNOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\n@param        Handle                          The workshop item update Handle to customize.\n@param        Index                           The index of the preview file from 0 to GetQueryUGCNumAdditionalPreviews.\n@param        PreviewVideo            The YouTube video to add. (e.g. \"jHgZh4GV9G0\")" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "UpdateItemPreviewVideo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::UGC_eventUpdateItemPreviewVideo_Parms), Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUGC);
	UClass* Z_Construct_UClass_UUGC_NoRegister()
	{
		return UUGC::StaticClass();
	}
	struct Z_Construct_UClass_UUGC_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemInstalled_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ItemInstalled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DownloadItemResult_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_DownloadItemResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserSubscribedItemsListChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_UserSubscribedItemsListChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUGC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUGC_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUGC_AddAppDependency, "AddAppDependency" }, // 205338625
		{ &Z_Construct_UFunction_UUGC_AddDependency, "AddDependency" }, // 2734325274
		{ &Z_Construct_UFunction_UUGC_AddExcludedTag, "AddExcludedTag" }, // 1477500511
		{ &Z_Construct_UFunction_UUGC_AddItemKeyValueTag, "AddItemKeyValueTag" }, // 1224609111
		{ &Z_Construct_UFunction_UUGC_AddItemPreviewFile, "AddItemPreviewFile" }, // 2449264012
		{ &Z_Construct_UFunction_UUGC_AddItemPreviewVideo, "AddItemPreviewVideo" }, // 392134684
		{ &Z_Construct_UFunction_UUGC_AddItemToFavorites, "AddItemToFavorites" }, // 1127250699
		{ &Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag, "AddRequiredKeyValueTag" }, // 3386941756
		{ &Z_Construct_UFunction_UUGC_AddRequiredTag, "AddRequiredTag" }, // 2892357929
		{ &Z_Construct_UFunction_UUGC_AddRequiredTagGroup, "AddRequiredTagGroup" }, // 3240879188
		{ &Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer, "BInitWorkshopForGameServer" }, // 4154683405
		{ &Z_Construct_UFunction_UUGC_CreateItem, "CreateItem" }, // 12983539
		{ &Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest, "CreateQueryAllUGCRequest" }, // 207328873
		{ &Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest, "CreateQueryUGCDetailsRequest" }, // 1125990868
		{ &Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest, "CreateQueryUserUGCRequest" }, // 1778272538
		{ &Z_Construct_UFunction_UUGC_DeleteItem, "DeleteItem" }, // 3096922801
		{ &Z_Construct_UFunction_UUGC_DownloadItem, "DownloadItem" }, // 3296246335
		{ &Z_Construct_UFunction_UUGC_GetAppDependencies, "GetAppDependencies" }, // 333528988
		{ &Z_Construct_UFunction_UUGC_GetItemDownloadInfo, "GetItemDownloadInfo" }, // 109412507
		{ &Z_Construct_UFunction_UUGC_GetItemInstallInfo, "GetItemInstallInfo" }, // 2373740961
		{ &Z_Construct_UFunction_UUGC_GetItemState, "GetItemState" }, // 2939678252
		{ &Z_Construct_UFunction_UUGC_GetItemUpdateProgress, "GetItemUpdateProgress" }, // 1498007193
		{ &Z_Construct_UFunction_UUGC_GetNumSubscribedItems, "GetNumSubscribedItems" }, // 4258560231
		{ &Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview, "GetQueryUGCAdditionalPreview" }, // 2102986553
		{ &Z_Construct_UFunction_UUGC_GetQueryUGCChildren, "GetQueryUGCChildren" }, // 949606661
		{ &Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag, "GetQueryUGCKeyValueTag" }, // 3317831069
		{ &Z_Construct_UFunction_UUGC_GetQueryUGCMetadata, "GetQueryUGCMetadata" }, // 4135341829
		{ &Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews, "GetQueryUGCNumAdditionalPreviews" }, // 2065775076
		{ &Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags, "GetQueryUGCNumKeyValueTags" }, // 3036694469
		{ &Z_Construct_UFunction_UUGC_GetQueryUGCNumTags, "GetQueryUGCNumTags" }, // 3602203443
		{ &Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL, "GetQueryUGCPreviewURL" }, // 3213339632
		{ &Z_Construct_UFunction_UUGC_GetQueryUGCResult, "GetQueryUGCResult" }, // 1915863128
		{ &Z_Construct_UFunction_UUGC_GetQueryUGCStatistic, "GetQueryUGCStatistic" }, // 1060265750
		{ &Z_Construct_UFunction_UUGC_GetQueryUGCTag, "GetQueryUGCTag" }, // 2811034163
		{ &Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName, "GetQueryUGCTagDisplayName" }, // 1925879845
		{ &Z_Construct_UFunction_UUGC_GetSubscribedItems, "GetSubscribedItems" }, // 3560970674
		{ &Z_Construct_UFunction_UUGC_GetUserItemVote, "GetUserItemVote" }, // 3221325407
		{ &Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest, "ReleaseQueryUGCRequest" }, // 1856599270
		{ &Z_Construct_UFunction_UUGC_RemoveAppDependency, "RemoveAppDependency" }, // 1477996453
		{ &Z_Construct_UFunction_UUGC_RemoveDependency, "RemoveDependency" }, // 4042670809
		{ &Z_Construct_UFunction_UUGC_RemoveItemFromFavorites, "RemoveItemFromFavorites" }, // 336700722
		{ &Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags, "RemoveItemKeyValueTags" }, // 3374005276
		{ &Z_Construct_UFunction_UUGC_RemoveItemPreview, "RemoveItemPreview" }, // 2422147001
		{ &Z_Construct_UFunction_UUGC_SendQueryUGCRequest, "SendQueryUGCRequest" }, // 322525802
		{ &Z_Construct_UFunction_UUGC_SetAllowCachedResponse, "SetAllowCachedResponse" }, // 110988082
		{ &Z_Construct_UFunction_UUGC_SetAllowLegacyUpload, "SetAllowLegacyUpload" }, // 561549687
		{ &Z_Construct_UFunction_UUGC_SetCloudFileNameFilter, "SetCloudFileNameFilter" }, // 3301635093
		{ &Z_Construct_UFunction_UUGC_SetItemContent, "SetItemContent" }, // 1544873393
		{ &Z_Construct_UFunction_UUGC_SetItemDescription, "SetItemDescription" }, // 4123023120
		{ &Z_Construct_UFunction_UUGC_SetItemMetadata, "SetItemMetadata" }, // 2567543617
		{ &Z_Construct_UFunction_UUGC_SetItemPreview, "SetItemPreview" }, // 878315025
		{ &Z_Construct_UFunction_UUGC_SetItemTags, "SetItemTags" }, // 4027588794
		{ &Z_Construct_UFunction_UUGC_SetItemTitle, "SetItemTitle" }, // 3406258711
		{ &Z_Construct_UFunction_UUGC_SetItemUpdateLanguage, "SetItemUpdateLanguage" }, // 3796878173
		{ &Z_Construct_UFunction_UUGC_SetItemVisibility, "SetItemVisibility" }, // 3224881237
		{ &Z_Construct_UFunction_UUGC_SetLanguage, "SetLanguage" }, // 164445872
		{ &Z_Construct_UFunction_UUGC_SetMatchAnyTag, "SetMatchAnyTag" }, // 1781878811
		{ &Z_Construct_UFunction_UUGC_SetRankedByTrendDays, "SetRankedByTrendDays" }, // 730545226
		{ &Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews, "SetReturnAdditionalPreviews" }, // 2745109518
		{ &Z_Construct_UFunction_UUGC_SetReturnChildren, "SetReturnChildren" }, // 1440328931
		{ &Z_Construct_UFunction_UUGC_SetReturnKeyValueTags, "SetReturnKeyValueTags" }, // 3465532517
		{ &Z_Construct_UFunction_UUGC_SetReturnLongDescription, "SetReturnLongDescription" }, // 2924806234
		{ &Z_Construct_UFunction_UUGC_SetReturnMetadata, "SetReturnMetadata" }, // 4202744178
		{ &Z_Construct_UFunction_UUGC_SetReturnOnlyIDs, "SetReturnOnlyIDs" }, // 4109441229
		{ &Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats, "SetReturnPlaytimeStats" }, // 1991854008
		{ &Z_Construct_UFunction_UUGC_SetReturnTotalOnly, "SetReturnTotalOnly" }, // 2847568276
		{ &Z_Construct_UFunction_UUGC_SetSearchText, "SetSearchText" }, // 3637292775
		{ &Z_Construct_UFunction_UUGC_SetUserItemVote, "SetUserItemVote" }, // 2615763006
		{ &Z_Construct_UFunction_UUGC_StartItemUpdate, "StartItemUpdate" }, // 1624155512
		{ &Z_Construct_UFunction_UUGC_StartPlaytimeTracking, "StartPlaytimeTracking" }, // 2782853746
		{ &Z_Construct_UFunction_UUGC_StopPlaytimeTracking, "StopPlaytimeTracking" }, // 3381438215
		{ &Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems, "StopPlaytimeTrackingForAllItems" }, // 1458855804
		{ &Z_Construct_UFunction_UUGC_SubmitItemUpdate, "SubmitItemUpdate" }, // 982341853
		{ &Z_Construct_UFunction_UUGC_SubscribeItem, "SubscribeItem" }, // 846854504
		{ &Z_Construct_UFunction_UUGC_SuspendDownloads, "SuspendDownloads" }, // 454362110
		{ &Z_Construct_UFunction_UUGC_UnsubscribeItem, "UnsubscribeItem" }, // 3797319780
		{ &Z_Construct_UFunction_UUGC_UpdateItemPreviewFile, "UpdateItemPreviewFile" }, // 656724496
		{ &Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo, "UpdateItemPreviewVideo" }, // 217543211
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUGC_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SteamUGC/SteamUGC.h" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUGC_Statics::NewProp_ItemInstalled_MetaData[] = {
		{ "Category", "SteamCore|UGC|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUGC_Statics::NewProp_ItemInstalled = { "ItemInstalled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUGC, ItemInstalled), Z_Construct_UDelegateFunction_SteamCore_OnItemInstalled__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUGC_Statics::NewProp_ItemInstalled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUGC_Statics::NewProp_ItemInstalled_MetaData)) }; // 1142758624
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUGC_Statics::NewProp_DownloadItemResult_MetaData[] = {
		{ "Category", "SteamCore|UGC|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUGC_Statics::NewProp_DownloadItemResult = { "DownloadItemResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUGC, DownloadItemResult), Z_Construct_UDelegateFunction_SteamCore_OnDownloadItemResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUGC_Statics::NewProp_DownloadItemResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUGC_Statics::NewProp_DownloadItemResult_MetaData)) }; // 1788395359
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUGC_Statics::NewProp_UserSubscribedItemsListChanged_MetaData[] = {
		{ "Category", "SteamCore|UGC|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUGC_Statics::NewProp_UserSubscribedItemsListChanged = { "UserSubscribedItemsListChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUGC, UserSubscribedItemsListChanged), Z_Construct_UDelegateFunction_SteamCore_OnUserSubscribedItemsListChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUGC_Statics::NewProp_UserSubscribedItemsListChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUGC_Statics::NewProp_UserSubscribedItemsListChanged_MetaData)) }; // 292139594
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUGC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGC_Statics::NewProp_ItemInstalled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGC_Statics::NewProp_DownloadItemResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGC_Statics::NewProp_UserSubscribedItemsListChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUGC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUGC>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUGC_Statics::ClassParams = {
		&UUGC::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUGC_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUGC_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUGC_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUGC_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUGC()
	{
		if (!Z_Registration_Info_UClass_UUGC.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUGC.OuterSingleton, Z_Construct_UClass_UUGC_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUGC.OuterSingleton;
	}
	template<> STEAMCORE_API UClass* StaticClass<UUGC>()
	{
		return UUGC::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUGC);
	UUGC::~UUGC() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGC_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGC_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUGC, UUGC::StaticClass, TEXT("UUGC"), &Z_Registration_Info_UClass_UUGC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUGC), 3996236890U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGC_h_1256360557(TEXT("/Script/SteamCore"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUGC_SteamUGC_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
