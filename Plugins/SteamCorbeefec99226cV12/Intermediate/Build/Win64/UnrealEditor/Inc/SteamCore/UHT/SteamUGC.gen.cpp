// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamUGC/SteamUGC.h"
#include "Engine/GameInstance.h"
#include "SteamTypes.h"
#include "SteamUGC/SteamUGCTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSteamUGC() {}

// ********** Begin Cross Module References ********************************************************
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
// ********** End Cross Module References **********************************************************

// ********** Begin Class UUGC Function AddAppDependency *******************************************
struct Z_Construct_UFunction_UUGC_AddAppDependency_Statics
{
	struct UGC_eventAddAppDependency_Parms
	{
		FScriptDelegate Callback;
		FPublishedFileID PublishedFileID;
		int32 AppId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Adds a dependency between the given item and the appid. \n\x09*\n\x09* This list of dependencies can be retrieved by calling GetAppDependencies. \n\x09* This is a soft-dependency that is displayed on the web. \n\x09* It is up to the application to determine whether the item can actually be used or not.\n\x09*\n\x09* @param\x09PublishedFileID\x09\x09The item.\n\x09* @param\x09""AppId\x09\x09\x09\x09The required app/dlc.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a dependency between the given item and the appid.\n\nThis list of dependencies can be retrieved by calling GetAppDependencies.\nThis is a soft-dependency that is displayed on the web.\nIt is up to the application to determine whether the item can actually be used or not.\n\n@param        PublishedFileID         The item.\n@param        AppId                           The required app/dlc." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddAppDependency constinit property declarations **********************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddAppDependency constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddAppDependency Property Definitions *********************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_AddAppDependency_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventAddAppDependency_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnAddAppDependencyResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 1660195086
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_AddAppDependency_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventAddAppDependency_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2947869779
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_AddAppDependency_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventAddAppDependency_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_AddAppDependency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddAppDependency_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddAppDependency_Statics::NewProp_PublishedFileID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddAppDependency_Statics::NewProp_AppId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddAppDependency_Statics::PropPointers) < 2048);
// ********** End Function AddAppDependency Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_AddAppDependency_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "AddAppDependency", 	Z_Construct_UFunction_UUGC_AddAppDependency_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddAppDependency_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_AddAppDependency_Statics::UGC_eventAddAppDependency_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddAppDependency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_AddAppDependency_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_AddAppDependency_Statics::UGC_eventAddAppDependency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_AddAppDependency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_AddAppDependency_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function AddAppDependency *********************************************

// ********** Begin Class UUGC Function AddDependency **********************************************
struct Z_Construct_UFunction_UUGC_AddDependency_Statics
{
	struct UGC_eventAddDependency_Parms
	{
		FScriptDelegate Callback;
		FPublishedFileID PublishedFileID;
		FPublishedFileID ChildPublishedFileID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Adds a workshop item as a dependency to the specified item. \n\x09*\n\x09* If the nParentPublishedFileID item is of type k_EWorkshopFileTypeCollection, than the nChildPublishedFileID is simply added to that collection. \n\x09* Otherwise, the dependency is a soft one that is displayed on the web and can be retrieved via the ISteamUGC \n\x09* API using a combination of the m_unNumChildren member variable of the SteamUGCDetails_t struct and GetQueryUGCChildren.\n\x09*\n\x09* @param\x09PublishedFileID\x09\x09\x09The workshop item to add a dependency to.\n\x09* @param\x09""ChildPublishedFileID\x09The dependency to add to the parent.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a workshop item as a dependency to the specified item.\n\nIf the nParentPublishedFileID item is of type k_EWorkshopFileTypeCollection, than the nChildPublishedFileID is simply added to that collection.\nOtherwise, the dependency is a soft one that is displayed on the web and can be retrieved via the ISteamUGC\nAPI using a combination of the m_unNumChildren member variable of the SteamUGCDetails_t struct and GetQueryUGCChildren.\n\n@param        PublishedFileID                 The workshop item to add a dependency to.\n@param        ChildPublishedFileID    The dependency to add to the parent." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddDependency constinit property declarations *************************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChildPublishedFileID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddDependency constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddDependency Property Definitions ************************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_AddDependency_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventAddDependency_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnAddUGCDependencyResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 426720912
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_AddDependency_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventAddDependency_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2947869779
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_AddDependency_Statics::NewProp_ChildPublishedFileID = { "ChildPublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventAddDependency_Parms, ChildPublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2947869779
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_AddDependency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddDependency_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddDependency_Statics::NewProp_PublishedFileID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddDependency_Statics::NewProp_ChildPublishedFileID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddDependency_Statics::PropPointers) < 2048);
// ********** End Function AddDependency Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_AddDependency_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "AddDependency", 	Z_Construct_UFunction_UUGC_AddDependency_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddDependency_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_AddDependency_Statics::UGC_eventAddDependency_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddDependency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_AddDependency_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_AddDependency_Statics::UGC_eventAddDependency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_AddDependency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_AddDependency_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function AddDependency ************************************************

// ********** Begin Class UUGC Function AddExcludedTag *********************************************
struct Z_Construct_UFunction_UUGC_AddExcludedTag_Statics
{
	struct UGC_eventAddExcludedTag_Parms
	{
		FUGCQueryHandle Handle;
		FString TagName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Adds a excluded tag to a pending UGC Query. This will only return UGC without the specified tag.\n\x09*\n\x09* NOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\x09*\n\x09* @param\x09Handle\x09\x09The UGC query Handle to customize.\n\x09* @param\x09TagName\x09\x09The tag that must NOT be attached to the UGC to receive it.\x09\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a excluded tag to a pending UGC Query. This will only return UGC without the specified tag.\n\nNOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\n@param        Handle          The UGC query Handle to customize.\n@param        TagName         The tag that must NOT be attached to the UGC to receive it." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function AddExcludedTag constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TagName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddExcludedTag constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddExcludedTag Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventAddExcludedTag_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 1895647525
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::NewProp_TagName = { "TagName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventAddExcludedTag_Parms, TagName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGC_eventAddExcludedTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_eventAddExcludedTag_Parms), &Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::NewProp_TagName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::PropPointers) < 2048);
// ********** End Function AddExcludedTag Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "AddExcludedTag", 	Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::UGC_eventAddExcludedTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::UGC_eventAddExcludedTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_AddExcludedTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function AddExcludedTag ***********************************************

// ********** Begin Class UUGC Function AddItemKeyValueTag *****************************************
struct Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics
{
	struct UGC_eventAddItemKeyValueTag_Parms
	{
		FUGCUpdateHandle Handle;
		FString Key;
		FString Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Adds a Key-Value tag pair to an item. Keys can map to multiple different Values (1-to-many relationship).\n\x09*\n\x09* Key names are restricted to alpha-numeric characters and the '_' character.\n\x09* Both Keys and Values cannot exceed 255 characters in length.\n\x09* Key-Value tags are searchable by exact match only.\n\x09* NOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09The workshop item update Handle to customize.\n\x09* @param\x09Key\x09\x09\x09\x09The Key to set on the item.\n\x09* @param\x09Value\x09\x09\x09""A Value to map to the Key.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a Key-Value tag pair to an item. Keys can map to multiple different Values (1-to-many relationship).\n\nKey names are restricted to alpha-numeric characters and the '_' character.\nBoth Keys and Values cannot exceed 255 characters in length.\nKey-Value tags are searchable by exact match only.\nNOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\n@param        Handle                  The workshop item update Handle to customize.\n@param        Key                             The Key to set on the item.\n@param        Value                   A Value to map to the Key." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function AddItemKeyValueTag constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddItemKeyValueTag constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddItemKeyValueTag Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventAddItemKeyValueTag_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 1882179982
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventAddItemKeyValueTag_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventAddItemKeyValueTag_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGC_eventAddItemKeyValueTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_eventAddItemKeyValueTag_Parms), &Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::PropPointers) < 2048);
// ********** End Function AddItemKeyValueTag Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "AddItemKeyValueTag", 	Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::UGC_eventAddItemKeyValueTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::UGC_eventAddItemKeyValueTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_AddItemKeyValueTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function AddItemKeyValueTag *******************************************

// ********** Begin Class UUGC Function AddItemPreviewFile *****************************************
struct Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics
{
	struct UGC_eventAddItemPreviewFile_Parms
	{
		FUGCUpdateHandle Handle;
		FString PreviewFile;
		ESteamItemPreviewType Type;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Adds an additional preview file for the item.\n\x09*\n\x09* Then the format of the image should be one that both the web and the application (if necessary) can render, and must be under 1MB. Suggested formats include JPG, PNG and GIF.\n\x09* NOTE: Using k_EItemPreviewType_YouTubeVideo or k_EItemPreviewType_Sketchfab are not currently supported with this API. For YouTube videos you should use AddItemPreviewVideo.\n\x09* NOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09The workshop item update Handle to customize.\n\x09* @param\x09PreviewFile\x09\x09""Absolute path to the local image.\n\x09* @param\x09Type\x09\x09\x09The type of this preview.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds an additional preview file for the item.\n\nThen the format of the image should be one that both the web and the application (if necessary) can render, and must be under 1MB. Suggested formats include JPG, PNG and GIF.\nNOTE: Using k_EItemPreviewType_YouTubeVideo or k_EItemPreviewType_Sketchfab are not currently supported with this API. For YouTube videos you should use AddItemPreviewVideo.\nNOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\n@param        Handle                  The workshop item update Handle to customize.\n@param        PreviewFile             Absolute path to the local image.\n@param        Type                    The type of this preview." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function AddItemPreviewFile constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PreviewFile;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddItemPreviewFile constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddItemPreviewFile Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventAddItemPreviewFile_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 1882179982
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::NewProp_PreviewFile = { "PreviewFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventAddItemPreviewFile_Parms, PreviewFile), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventAddItemPreviewFile_Parms, Type), Z_Construct_UEnum_SteamCore_ESteamItemPreviewType, METADATA_PARAMS(0, nullptr) }; // 2015400147
void Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGC_eventAddItemPreviewFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_eventAddItemPreviewFile_Parms), &Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::NewProp_PreviewFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::PropPointers) < 2048);
// ********** End Function AddItemPreviewFile Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "AddItemPreviewFile", 	Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::UGC_eventAddItemPreviewFile_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::UGC_eventAddItemPreviewFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_AddItemPreviewFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function AddItemPreviewFile *******************************************

// ********** Begin Class UUGC Function AddItemPreviewVideo ****************************************
struct Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics
{
	struct UGC_eventAddItemPreviewVideo_Parms
	{
		FUGCUpdateHandle Handle;
		FString VideoID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Adds an additional video preview from YouTube for the item.\n\x09*\n\x09* NOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\x09*\x09\n\x09* @param\x09Handle\x09\x09\x09The workshop item update Handle to customize.\n\x09* @param\x09VideoID\x09\x09\x09The YouTube video ID to add. (e.g. \"jHgZh4GV9G0\")\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds an additional video preview from YouTube for the item.\n\nNOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\n@param        Handle                  The workshop item update Handle to customize.\n@param        VideoID                 The YouTube video ID to add. (e.g. \"jHgZh4GV9G0\")" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function AddItemPreviewVideo constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VideoID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddItemPreviewVideo constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddItemPreviewVideo Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventAddItemPreviewVideo_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 1882179982
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::NewProp_VideoID = { "VideoID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventAddItemPreviewVideo_Parms, VideoID), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGC_eventAddItemPreviewVideo_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_eventAddItemPreviewVideo_Parms), &Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::NewProp_VideoID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::PropPointers) < 2048);
// ********** End Function AddItemPreviewVideo Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "AddItemPreviewVideo", 	Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::UGC_eventAddItemPreviewVideo_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::UGC_eventAddItemPreviewVideo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_AddItemPreviewVideo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function AddItemPreviewVideo ******************************************

// ********** Begin Class UUGC Function AddItemToFavorites *****************************************
struct Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics
{
	struct UGC_eventAddItemToFavorites_Parms
	{
		FScriptDelegate Callback;
		int32 AppId;
		FPublishedFileID PublishedFileID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Adds a workshop item to the users favorites list.\n\x09*\n\x09* @param\x09""AppId\x09\x09\x09\x09The app ID that this item belongs to.\n\x09* @param\x09PublishedFileID\x09\x09The workshop item to add to the users favorites list.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a workshop item to the users favorites list.\n\n@param        AppId                           The app ID that this item belongs to.\n@param        PublishedFileID         The workshop item to add to the users favorites list." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddItemToFavorites constinit property declarations ********************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddItemToFavorites constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddItemToFavorites Property Definitions *******************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventAddItemToFavorites_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnAddItemToFavorites__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 1407938151
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventAddItemToFavorites_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventAddItemToFavorites_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2947869779
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::NewProp_PublishedFileID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::PropPointers) < 2048);
// ********** End Function AddItemToFavorites Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "AddItemToFavorites", 	Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::UGC_eventAddItemToFavorites_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::UGC_eventAddItemToFavorites_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_AddItemToFavorites()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function AddItemToFavorites *******************************************

// ********** Begin Class UUGC Function AddRequiredKeyValueTag *************************************
struct Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics
{
	struct UGC_eventAddRequiredKeyValueTag_Parms
	{
		FUGCQueryHandle Handle;
		FString Key;
		FString Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Adds a required Key-Value tag to a pending UGC Query. This will only return workshop items that have a Key = pKey and a Value = pValue.\n\x09*\n\x09* @param\x09Handle\x09\x09The UGC query Handle to customize.\n\x09* @param\x09Key\x09\x09\x09The Key-Value Key that must be attached to the UGC to receive it.\n\x09* @param\x09Value\x09\x09The Key-Value Value associated with pKey that must be attached to the UGC to receive it.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a required Key-Value tag to a pending UGC Query. This will only return workshop items that have a Key = pKey and a Value = pValue.\n\n@param        Handle          The UGC query Handle to customize.\n@param        Key                     The Key-Value Key that must be attached to the UGC to receive it.\n@param        Value           The Key-Value Value associated with pKey that must be attached to the UGC to receive it." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function AddRequiredKeyValueTag constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddRequiredKeyValueTag constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddRequiredKeyValueTag Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventAddRequiredKeyValueTag_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 1895647525
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventAddRequiredKeyValueTag_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventAddRequiredKeyValueTag_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGC_eventAddRequiredKeyValueTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_eventAddRequiredKeyValueTag_Parms), &Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::PropPointers) < 2048);
// ********** End Function AddRequiredKeyValueTag Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "AddRequiredKeyValueTag", 	Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::UGC_eventAddRequiredKeyValueTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::UGC_eventAddRequiredKeyValueTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function AddRequiredKeyValueTag ***************************************

// ********** Begin Class UUGC Function AddRequiredTag *********************************************
struct Z_Construct_UFunction_UUGC_AddRequiredTag_Statics
{
	struct UGC_eventAddRequiredTag_Parms
	{
		FUGCQueryHandle Handle;
		FString TagName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Adds a required tag to a pending UGC Query. This will only return UGC with the specified tag.\n\x09*\x09\n\x09* @param\x09Handle\x09\x09The UGC query Handle to customize.\n\x09* @param\x09TagName\x09\x09The tag that must be attached to the UGC to receive it.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a required tag to a pending UGC Query. This will only return UGC with the specified tag.\n\n@param        Handle          The UGC query Handle to customize.\n@param        TagName         The tag that must be attached to the UGC to receive it." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function AddRequiredTag constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TagName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddRequiredTag constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddRequiredTag Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventAddRequiredTag_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 1895647525
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::NewProp_TagName = { "TagName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventAddRequiredTag_Parms, TagName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGC_eventAddRequiredTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_eventAddRequiredTag_Parms), &Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::NewProp_TagName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::PropPointers) < 2048);
// ********** End Function AddRequiredTag Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "AddRequiredTag", 	Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::UGC_eventAddRequiredTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::UGC_eventAddRequiredTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_AddRequiredTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function AddRequiredTag ***********************************************

// ********** Begin Class UUGC Function AddRequiredTagGroup ****************************************
struct Z_Construct_UFunction_UUGC_AddRequiredTagGroup_Statics
{
	struct UGC_eventAddRequiredTagGroup_Parms
	{
		FUGCQueryHandle Handle;
		TArray<FString> TagGroups;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Match any of the tags in this group\n\x09*\n\x09* Notes: Only available in UE4.27+\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Match any of the tags in this group\n\nNotes: Only available in UE4.27+" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function AddRequiredTagGroup constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TagGroups_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TagGroups;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddRequiredTagGroup constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddRequiredTagGroup Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_AddRequiredTagGroup_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventAddRequiredTagGroup_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 1895647525
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_AddRequiredTagGroup_Statics::NewProp_TagGroups_Inner = { "TagGroups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUGC_AddRequiredTagGroup_Statics::NewProp_TagGroups = { "TagGroups", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventAddRequiredTagGroup_Parms, TagGroups), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUGC_AddRequiredTagGroup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGC_eventAddRequiredTagGroup_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_AddRequiredTagGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_eventAddRequiredTagGroup_Parms), &Z_Construct_UFunction_UUGC_AddRequiredTagGroup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_AddRequiredTagGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddRequiredTagGroup_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddRequiredTagGroup_Statics::NewProp_TagGroups_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddRequiredTagGroup_Statics::NewProp_TagGroups,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddRequiredTagGroup_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddRequiredTagGroup_Statics::PropPointers) < 2048);
// ********** End Function AddRequiredTagGroup Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_AddRequiredTagGroup_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "AddRequiredTagGroup", 	Z_Construct_UFunction_UUGC_AddRequiredTagGroup_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddRequiredTagGroup_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_AddRequiredTagGroup_Statics::UGC_eventAddRequiredTagGroup_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddRequiredTagGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_AddRequiredTagGroup_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_AddRequiredTagGroup_Statics::UGC_eventAddRequiredTagGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_AddRequiredTagGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_AddRequiredTagGroup_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function AddRequiredTagGroup ******************************************

// ********** Begin Class UUGC Function BInitWorkshopForGameServer *********************************
struct Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics
{
	struct UGC_eventBInitWorkshopForGameServer_Parms
	{
		int32 WorkshopDepotID;
		FString Folder;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Lets game servers set a specific workshop folder before issuing any UGC commands.\n\x09*\n\x09* This is helpful if you want to support multiple game servers running out of the same install folder.\n\x09*\n\x09* @param\x09WorkshopDepotID\x09\x09The depot ID of the game server.\n\x09* @param\x09""Folder\x09\x09\x09\x09The absolute path to store the workshop content.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lets game servers set a specific workshop folder before issuing any UGC commands.\n\nThis is helpful if you want to support multiple game servers running out of the same install folder.\n\n@param        WorkshopDepotID         The depot ID of the game server.\n@param        Folder                          The absolute path to store the workshop content." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function BInitWorkshopForGameServer constinit property declarations ************
	static const UECodeGen_Private::FIntPropertyParams NewProp_WorkshopDepotID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Folder;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BInitWorkshopForGameServer constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BInitWorkshopForGameServer Property Definitions ***********************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::NewProp_WorkshopDepotID = { "WorkshopDepotID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventBInitWorkshopForGameServer_Parms, WorkshopDepotID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::NewProp_Folder = { "Folder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventBInitWorkshopForGameServer_Parms, Folder), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGC_eventBInitWorkshopForGameServer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_eventBInitWorkshopForGameServer_Parms), &Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::NewProp_WorkshopDepotID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::NewProp_Folder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::PropPointers) < 2048);
// ********** End Function BInitWorkshopForGameServer Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "BInitWorkshopForGameServer", 	Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::UGC_eventBInitWorkshopForGameServer_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::UGC_eventBInitWorkshopForGameServer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function BInitWorkshopForGameServer ***********************************

// ********** Begin Class UUGC Function CreateItem *************************************************
struct Z_Construct_UFunction_UUGC_CreateItem_Statics
{
	struct UGC_eventCreateItem_Parms
	{
		FScriptDelegate Callback;
		int32 ConsumerAppID;
		ESteamWorkshopFileType FileType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Creates a new workshop item with no content attached yet.\n\x09*\n\x09* @param\x09""ConsumerAppID\x09\x09The App ID that will be using this item.\n\x09* @param\x09""FileType\x09\x09\x09The type of UGC to create.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates a new workshop item with no content attached yet.\n\n@param        ConsumerAppID           The App ID that will be using this item.\n@param        FileType                        The type of UGC to create." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateItem constinit property declarations ****************************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ConsumerAppID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FileType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FileType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateItem constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateItem Property Definitions ***************************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_CreateItem_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventCreateItem_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnCreateItem__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2146956689
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_CreateItem_Statics::NewProp_ConsumerAppID = { "ConsumerAppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventCreateItem_Parms, ConsumerAppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUGC_CreateItem_Statics::NewProp_FileType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUGC_CreateItem_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventCreateItem_Parms, FileType), Z_Construct_UEnum_SteamCore_ESteamWorkshopFileType, METADATA_PARAMS(0, nullptr) }; // 1673810925
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_CreateItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateItem_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateItem_Statics::NewProp_ConsumerAppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateItem_Statics::NewProp_FileType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateItem_Statics::NewProp_FileType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_CreateItem_Statics::PropPointers) < 2048);
// ********** End Function CreateItem Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_CreateItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "CreateItem", 	Z_Construct_UFunction_UUGC_CreateItem_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_CreateItem_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_CreateItem_Statics::UGC_eventCreateItem_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_CreateItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_CreateItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_CreateItem_Statics::UGC_eventCreateItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_CreateItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_CreateItem_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function CreateItem ***************************************************

// ********** Begin Class UUGC Function CreateQueryAllUGCRequest ***********************************
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
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Query for all matching UGC. You can use this to list all of the available UGC for your app.\n\x09*\n\x09* This will return up to 50 results as declared by kNumUGCResultsPerPage. \n\x09* You can make subsequent calls to this function, increasing the unPage each time to get the next set of results.\n\x09* NOTE: Either nConsumerAppID or nCreatorAppID must have a valid AppID!\n\x09* NOTE: You must release the Handle returned by this function by calling ReleaseQueryUGCRequest when you are done with it!\n\x09* To query for the UGC associated with a single user you can use CreateQueryUserUGCRequest instead.\n\x09*\n\x09*\n\x09* @param\x09QueryType\x09\x09\x09Used to specify the sorting and filtering for this call.\n\x09* @param\x09""FileType\x09\x09\x09Used to specify the type of UGC queried for.\n\x09* @param\x09""CreatorAppID\x09\x09This should contain the App ID of the app where the item was created. This may be different than nConsumerAppID if your item creation tool is a seperate App ID.\n\x09* @param\x09""ConsumerAppID\x09\x09This should contain the App ID for the current game or application. Do not pass the App ID of the workshop item creation tool if that is a separate App ID!\n\x09* @param\x09Page\x09\x09\x09\x09The page number of the results to receive. This should start at 1 on the first call.\n\x09*/" },
#endif
		{ "CPP_Default_Page", "1" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Query for all matching UGC. You can use this to list all of the available UGC for your app.\n\nThis will return up to 50 results as declared by kNumUGCResultsPerPage.\nYou can make subsequent calls to this function, increasing the unPage each time to get the next set of results.\nNOTE: Either nConsumerAppID or nCreatorAppID must have a valid AppID!\nNOTE: You must release the Handle returned by this function by calling ReleaseQueryUGCRequest when you are done with it!\nTo query for the UGC associated with a single user you can use CreateQueryUserUGCRequest instead.\n\n\n@param        QueryType                       Used to specify the sorting and filtering for this call.\n@param        FileType                        Used to specify the type of UGC queried for.\n@param        CreatorAppID            This should contain the App ID of the app where the item was created. This may be different than nConsumerAppID if your item creation tool is a seperate App ID.\n@param        ConsumerAppID           This should contain the App ID for the current game or application. Do not pass the App ID of the workshop item creation tool if that is a separate App ID!\n@param        Page                            The page number of the results to receive. This should start at 1 on the first call." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function CreateQueryAllUGCRequest constinit property declarations **************
	static const UECodeGen_Private::FBytePropertyParams NewProp_QueryType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_QueryType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FileType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FileType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CreatorAppID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ConsumerAppID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Page;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateQueryAllUGCRequest constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateQueryAllUGCRequest Property Definitions *************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::NewProp_QueryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::NewProp_QueryType = { "QueryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventCreateQueryAllUGCRequest_Parms, QueryType), Z_Construct_UEnum_SteamCore_ESteamUGCQuery, METADATA_PARAMS(0, nullptr) }; // 1504536011
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::NewProp_FileType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventCreateQueryAllUGCRequest_Parms, FileType), Z_Construct_UEnum_SteamCore_ESteamUGCMatchingUGCType, METADATA_PARAMS(0, nullptr) }; // 1824144225
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::NewProp_CreatorAppID = { "CreatorAppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventCreateQueryAllUGCRequest_Parms, CreatorAppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::NewProp_ConsumerAppID = { "ConsumerAppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventCreateQueryAllUGCRequest_Parms, ConsumerAppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::NewProp_Page = { "Page", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventCreateQueryAllUGCRequest_Parms, Page), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventCreateQueryAllUGCRequest_Parms, ReturnValue), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 1895647525
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
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::PropPointers) < 2048);
// ********** End Function CreateQueryAllUGCRequest Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "CreateQueryAllUGCRequest", 	Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::UGC_eventCreateQueryAllUGCRequest_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::UGC_eventCreateQueryAllUGCRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function CreateQueryAllUGCRequest *************************************

// ********** Begin Class UUGC Function CreateQueryUGCDetailsRequest *******************************
struct Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics
{
	struct UGC_eventCreateQueryUGCDetailsRequest_Parms
	{
		TArray<FPublishedFileID> PublishedFileIDs;
		FUGCQueryHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Query for the details of specific workshop items.\n\x09*\n\x09* This will return up to 50 results as declared by kNumUGCResultsPerPage.\n\x09* NOTE: Either nConsumerAppID or nCreatorAppID must have a valid AppID!\n\x09* NOTE: You must release the Handle returned by this function by calling ReleaseQueryUGCRequest when you are done with it!\n\x09* To query all the UGC for your app you can use CreateQueryAllUGCRequest instead.\n\x09*\n\x09* @param\x09PublishedFileIDs\x09\x09The list of workshop items to get the details for.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Query for the details of specific workshop items.\n\nThis will return up to 50 results as declared by kNumUGCResultsPerPage.\nNOTE: Either nConsumerAppID or nCreatorAppID must have a valid AppID!\nNOTE: You must release the Handle returned by this function by calling ReleaseQueryUGCRequest when you are done with it!\nTo query all the UGC for your app you can use CreateQueryAllUGCRequest instead.\n\n@param        PublishedFileIDs                The list of workshop items to get the details for." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function CreateQueryUGCDetailsRequest constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PublishedFileIDs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateQueryUGCDetailsRequest constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateQueryUGCDetailsRequest Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics::NewProp_PublishedFileIDs_Inner = { "PublishedFileIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2947869779
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics::NewProp_PublishedFileIDs = { "PublishedFileIDs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventCreateQueryUGCDetailsRequest_Parms, PublishedFileIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2947869779
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventCreateQueryUGCDetailsRequest_Parms, ReturnValue), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 1895647525
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics::NewProp_PublishedFileIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics::NewProp_PublishedFileIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics::PropPointers) < 2048);
// ********** End Function CreateQueryUGCDetailsRequest Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "CreateQueryUGCDetailsRequest", 	Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics::UGC_eventCreateQueryUGCDetailsRequest_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics::UGC_eventCreateQueryUGCDetailsRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUGC::execCreateQueryUGCDetailsRequest)
{
	P_GET_TARRAY(FPublishedFileID,Z_Param_PublishedFileIDs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FUGCQueryHandle*)Z_Param__Result=UUGC::CreateQueryUGCDetailsRequest(Z_Param_PublishedFileIDs);
	P_NATIVE_END;
}
// ********** End Class UUGC Function CreateQueryUGCDetailsRequest *********************************

// ********** Begin Class UUGC Function CreateQueryUserUGCRequest **********************************
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
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Query UGC associated with a user. You can use this to list the UGC the user is subscribed to amongst other things.\n\x09*\n\x09* This will return up to 50 results as declared by kNumUGCResultsPerPage. You can make subsequent calls to this function, increasing the unPage each time to get the next set of results.\n\x09* NOTE: Either nConsumerAppID or nCreatorAppID must have a valid AppID!\n\x09* NOTE: You must release the Handle returned by this function by calling ReleaseQueryUGCRequest when you are done with it!\n\x09* To query all the UGC for your app you can use CreateQueryAllUGCRequest instead.\n\x09*\n\x09* @param\x09SteamID\x09\x09\x09\x09The Account ID to query the UGC for. You can use CSteamID.GetAccountID to get the Account ID from a Steam ID.\n\x09* @param\x09ListType\x09\x09\x09Used to specify the type of list to get. If the currently logged in user is different than the user specified in unAccountID, then some options are not be allowed. (k_EUserUGCList_VotedOn, k_EUserUGCList_VotedUp, k_EUserUGCList_VotedDown, k_EUserUGCList_WillVoteLater, k_EUserUGCList_Subscribed)\n\x09* @param\x09MatchingUGCType\x09\x09Used to specify the type of UGC queried for.\n\x09* @param\x09SortOrder\x09\x09\x09Used to specify the order that the list will be sorted in.\n\x09* @param\x09""CreatorAppID\x09\x09This should contain the App ID of the app where the item was created. This may be different than nConsumerAppID if your item creation tool is a seperate App ID.\n\x09* @param\x09""ConsumerAppID\x09\x09This should contain the App ID for the current game or application. Do not pass the App ID of the workshop item creation tool if that is a separate App ID!\n\x09* @param\x09Page\x09\x09\x09\x09The page number of the results to receive. This should start at 1 on the first call.\n\x09*/" },
#endif
		{ "CPP_Default_Page", "1" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Query UGC associated with a user. You can use this to list the UGC the user is subscribed to amongst other things.\n\nThis will return up to 50 results as declared by kNumUGCResultsPerPage. You can make subsequent calls to this function, increasing the unPage each time to get the next set of results.\nNOTE: Either nConsumerAppID or nCreatorAppID must have a valid AppID!\nNOTE: You must release the Handle returned by this function by calling ReleaseQueryUGCRequest when you are done with it!\nTo query all the UGC for your app you can use CreateQueryAllUGCRequest instead.\n\n@param        SteamID                         The Account ID to query the UGC for. You can use CSteamID.GetAccountID to get the Account ID from a Steam ID.\n@param        ListType                        Used to specify the type of list to get. If the currently logged in user is different than the user specified in unAccountID, then some options are not be allowed. (k_EUserUGCList_VotedOn, k_EUserUGCList_VotedUp, k_EUserUGCList_VotedDown, k_EUserUGCList_WillVoteLater, k_EUserUGCList_Subscribed)\n@param        MatchingUGCType         Used to specify the type of UGC queried for.\n@param        SortOrder                       Used to specify the order that the list will be sorted in.\n@param        CreatorAppID            This should contain the App ID of the app where the item was created. This may be different than nConsumerAppID if your item creation tool is a seperate App ID.\n@param        ConsumerAppID           This should contain the App ID for the current game or application. Do not pass the App ID of the workshop item creation tool if that is a separate App ID!\n@param        Page                            The page number of the results to receive. This should start at 1 on the first call." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function CreateQueryUserUGCRequest constinit property declarations *************
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
// ********** End Function CreateQueryUserUGCRequest constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateQueryUserUGCRequest Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventCreateQueryUserUGCRequest_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 1641547426
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_ListType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_ListType = { "ListType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventCreateQueryUserUGCRequest_Parms, ListType), Z_Construct_UEnum_SteamCore_ESteamUserUGCList, METADATA_PARAMS(0, nullptr) }; // 1011429322
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_MatchingUGCType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_MatchingUGCType = { "MatchingUGCType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventCreateQueryUserUGCRequest_Parms, MatchingUGCType), Z_Construct_UEnum_SteamCore_ESteamUGCMatchingUGCType, METADATA_PARAMS(0, nullptr) }; // 1824144225
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_SortOrder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_SortOrder = { "SortOrder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventCreateQueryUserUGCRequest_Parms, SortOrder), Z_Construct_UEnum_SteamCore_ESteamUserUGCListSortOrder, METADATA_PARAMS(0, nullptr) }; // 1863529384
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_CreatorAppID = { "CreatorAppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventCreateQueryUserUGCRequest_Parms, CreatorAppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_ConsumerAppID = { "ConsumerAppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventCreateQueryUserUGCRequest_Parms, ConsumerAppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_Page = { "Page", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventCreateQueryUserUGCRequest_Parms, Page), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventCreateQueryUserUGCRequest_Parms, ReturnValue), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 1895647525
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
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::PropPointers) < 2048);
// ********** End Function CreateQueryUserUGCRequest Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "CreateQueryUserUGCRequest", 	Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::UGC_eventCreateQueryUserUGCRequest_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::UGC_eventCreateQueryUserUGCRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function CreateQueryUserUGCRequest ************************************

// ********** Begin Class UUGC Function DeleteItem *************************************************
struct Z_Construct_UFunction_UUGC_DeleteItem_Statics
{
	struct UGC_eventDeleteItem_Parms
	{
		FScriptDelegate Callback;
		FPublishedFileID PublishedFileID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Deletes the item without prompting the user.\n\x09*\n\x09* @param\x09PublishedFileID\x09\x09The item to delete.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Deletes the item without prompting the user.\n\n@param        PublishedFileID         The item to delete." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function DeleteItem constinit property declarations ****************************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DeleteItem constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DeleteItem Property Definitions ***************************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_DeleteItem_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventDeleteItem_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnDeleteItemResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 90767074
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_DeleteItem_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventDeleteItem_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2947869779
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_DeleteItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_DeleteItem_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_DeleteItem_Statics::NewProp_PublishedFileID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_DeleteItem_Statics::PropPointers) < 2048);
// ********** End Function DeleteItem Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_DeleteItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "DeleteItem", 	Z_Construct_UFunction_UUGC_DeleteItem_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_DeleteItem_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_DeleteItem_Statics::UGC_eventDeleteItem_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_DeleteItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_DeleteItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_DeleteItem_Statics::UGC_eventDeleteItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_DeleteItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_DeleteItem_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function DeleteItem ***************************************************

// ********** Begin Class UUGC Function DownloadItem ***********************************************
struct Z_Construct_UFunction_UUGC_DownloadItem_Statics
{
	struct UGC_eventDownloadItem_Parms
	{
		FPublishedFileID PublishedFileID;
		bool bHighPriority;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Download or update a workshop item.\n\x09*\n\x09* If the return Value is true then register and wait for the Callback DownloadItemResult_t before calling GetItemInstallInfo or accessing the workshop item on disk.\n\x09* If the user is not subscribed to the item (e.g. a Game Server using anonymous login), the workshop item will be downloaded and cached temporarily.\n\x09* If the workshop item has an item state of k_EItemStateNeedsUpdate, then this function can be called to initiate the update. \n\x09* Do not access the workshop item on disk until the Callback DownloadItemResult_t is called.\n\x09* The DownloadItemResult_t Callback contains the app ID associated with the workshop item. It should be compared against the running app ID as the Handler \n\x09* will be called for all item downloads regardless of the running application.\n\x09*\n\x09* @param\x09PublishedFileID\x09\x09The workshop item to download.\n\x09* @param\x09""bHighPriority\x09\x09Start the download in high priority mode, pausing any existing in-progress Steam downloads and immediately begin downloading this workshop item.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Download or update a workshop item.\n\nIf the return Value is true then register and wait for the Callback DownloadItemResult_t before calling GetItemInstallInfo or accessing the workshop item on disk.\nIf the user is not subscribed to the item (e.g. a Game Server using anonymous login), the workshop item will be downloaded and cached temporarily.\nIf the workshop item has an item state of k_EItemStateNeedsUpdate, then this function can be called to initiate the update.\nDo not access the workshop item on disk until the Callback DownloadItemResult_t is called.\nThe DownloadItemResult_t Callback contains the app ID associated with the workshop item. It should be compared against the running app ID as the Handler\nwill be called for all item downloads regardless of the running application.\n\n@param        PublishedFileID         The workshop item to download.\n@param        bHighPriority           Start the download in high priority mode, pausing any existing in-progress Steam downloads and immediately begin downloading this workshop item." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function DownloadItem constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
	static void NewProp_bHighPriority_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHighPriority;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DownloadItem constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DownloadItem Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_DownloadItem_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventDownloadItem_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2947869779
void Z_Construct_UFunction_UUGC_DownloadItem_Statics::NewProp_bHighPriority_SetBit(void* Obj)
{
	((UGC_eventDownloadItem_Parms*)Obj)->bHighPriority = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_DownloadItem_Statics::NewProp_bHighPriority = { "bHighPriority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_eventDownloadItem_Parms), &Z_Construct_UFunction_UUGC_DownloadItem_Statics::NewProp_bHighPriority_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUGC_DownloadItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGC_eventDownloadItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_DownloadItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_eventDownloadItem_Parms), &Z_Construct_UFunction_UUGC_DownloadItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_DownloadItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_DownloadItem_Statics::NewProp_PublishedFileID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_DownloadItem_Statics::NewProp_bHighPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_DownloadItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_DownloadItem_Statics::PropPointers) < 2048);
// ********** End Function DownloadItem Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_DownloadItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "DownloadItem", 	Z_Construct_UFunction_UUGC_DownloadItem_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_DownloadItem_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_DownloadItem_Statics::UGC_eventDownloadItem_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_DownloadItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_DownloadItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_DownloadItem_Statics::UGC_eventDownloadItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_DownloadItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_DownloadItem_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function DownloadItem *************************************************

// ********** Begin Class UUGC Function GetAppDependencies *****************************************
struct Z_Construct_UFunction_UUGC_GetAppDependencies_Statics
{
	struct UGC_eventGetAppDependencies_Parms
	{
		FScriptDelegate Callback;
		FPublishedFileID PublishedFileID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Get the app dependencies associated with the given PublishedFileId_t. \n\x09*\n\x09* These are \"soft\" dependencies that are shown on the web. \n\x09* It is up to the application to determine whether an item can be used or not.\n\x09*\n\x09* @param\x09PublishedFileID\x09\x09The workshop item to get app dependencies for.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the app dependencies associated with the given PublishedFileId_t.\n\nThese are \"soft\" dependencies that are shown on the web.\nIt is up to the application to determine whether an item can be used or not.\n\n@param        PublishedFileID         The workshop item to get app dependencies for." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAppDependencies constinit property declarations ********************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAppDependencies constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAppDependencies Property Definitions *******************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_GetAppDependencies_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetAppDependencies_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnGetAppDependenciesResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 3819794477
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetAppDependencies_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetAppDependencies_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2947869779
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetAppDependencies_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetAppDependencies_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetAppDependencies_Statics::NewProp_PublishedFileID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetAppDependencies_Statics::PropPointers) < 2048);
// ********** End Function GetAppDependencies Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetAppDependencies_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetAppDependencies", 	Z_Construct_UFunction_UUGC_GetAppDependencies_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetAppDependencies_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_GetAppDependencies_Statics::UGC_eventGetAppDependencies_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetAppDependencies_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_GetAppDependencies_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_GetAppDependencies_Statics::UGC_eventGetAppDependencies_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_GetAppDependencies()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_GetAppDependencies_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function GetAppDependencies *******************************************

// ********** Begin Class UUGC Function GetItemDownloadInfo ****************************************
struct Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics
{
	struct UGC_eventGetItemDownloadInfo_Parms
	{
		FPublishedFileID PublishedFileID;
		int32 BytesDownloaded;
		int32 BytesTotal;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Get info about a pending download of a workshop item that has k_EItemStateNeedsUpdate set.\n\x09*\n\x09* @param\x09PublishedFileID\x09\x09The workshop item to get the download info for.\n\x09* @param\x09""BytesDownloaded\x09\x09Returns the current bytes downloaded.\n\x09* @param\x09""BytesTotal\x09\x09\x09Returns the total bytes. This is only valid after the download has started.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get info about a pending download of a workshop item that has k_EItemStateNeedsUpdate set.\n\n@param        PublishedFileID         The workshop item to get the download info for.\n@param        BytesDownloaded         Returns the current bytes downloaded.\n@param        BytesTotal                      Returns the total bytes. This is only valid after the download has started." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetItemDownloadInfo constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BytesDownloaded;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BytesTotal;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetItemDownloadInfo constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetItemDownloadInfo Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetItemDownloadInfo_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2947869779
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::NewProp_BytesDownloaded = { "BytesDownloaded", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetItemDownloadInfo_Parms, BytesDownloaded), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::NewProp_BytesTotal = { "BytesTotal", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetItemDownloadInfo_Parms, BytesTotal), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGC_eventGetItemDownloadInfo_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_eventGetItemDownloadInfo_Parms), &Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::NewProp_PublishedFileID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::NewProp_BytesDownloaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::NewProp_BytesTotal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::PropPointers) < 2048);
// ********** End Function GetItemDownloadInfo Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetItemDownloadInfo", 	Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::UGC_eventGetItemDownloadInfo_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::UGC_eventGetItemDownloadInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_GetItemDownloadInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function GetItemDownloadInfo ******************************************

// ********** Begin Class UUGC Function GetItemInstallInfo *****************************************
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
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Gets info about currently installed content on the disc for workshop items that have k_EItemStateInstalled set.\n\x09*\n\x09* Calling this sets the \"used\" flag on the workshop item for the current player and adds it to their k_EUserUGCList_UsedOrPlayed list.\n\x09* If k_EItemStateLegacyItem is set then pchFolder contains the path to the legacy file itself, not a folder.\n\x09*\n\x09* @param\x09PublishedFileID\x09\x09The workshop item to get the install info for.\n\x09* @param\x09SizeOnDisk\x09\x09\x09Returns the size of the workshop item in bytes.\n\x09* @param\x09""Folder\x09\x09\x09\x09Returns the absolute path to the folder containing the content by copying it.\n\x09* @param\x09TimeStamp\x09\x09\x09Returns the time when the workshop item was last updated.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets info about currently installed content on the disc for workshop items that have k_EItemStateInstalled set.\n\nCalling this sets the \"used\" flag on the workshop item for the current player and adds it to their k_EUserUGCList_UsedOrPlayed list.\nIf k_EItemStateLegacyItem is set then pchFolder contains the path to the legacy file itself, not a folder.\n\n@param        PublishedFileID         The workshop item to get the install info for.\n@param        SizeOnDisk                      Returns the size of the workshop item in bytes.\n@param        Folder                          Returns the absolute path to the folder containing the content by copying it.\n@param        TimeStamp                       Returns the time when the workshop item was last updated." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetItemInstallInfo constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SizeOnDisk;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Folder;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TimeStamp;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetItemInstallInfo constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetItemInstallInfo Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetItemInstallInfo_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2947869779
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::NewProp_SizeOnDisk = { "SizeOnDisk", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetItemInstallInfo_Parms, SizeOnDisk), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::NewProp_Folder = { "Folder", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetItemInstallInfo_Parms, Folder), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::NewProp_TimeStamp = { "TimeStamp", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetItemInstallInfo_Parms, TimeStamp), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGC_eventGetItemInstallInfo_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_eventGetItemInstallInfo_Parms), &Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::NewProp_PublishedFileID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::NewProp_SizeOnDisk,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::NewProp_Folder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::NewProp_TimeStamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::PropPointers) < 2048);
// ********** End Function GetItemInstallInfo Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetItemInstallInfo", 	Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::UGC_eventGetItemInstallInfo_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::UGC_eventGetItemInstallInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_GetItemInstallInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function GetItemInstallInfo *******************************************

// ********** Begin Class UUGC Function GetItemState ***********************************************
struct Z_Construct_UFunction_UUGC_GetItemState_Statics
{
	struct UGC_eventGetItemState_Parms
	{
		FPublishedFileID PublishedFileID;
		TArray<ESteamItemState> States;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Gets the current state of a workshop item on this client.\n\x09*\n\x09* @param\x09PublishedFileID\x09\x09The workshop item to get the state for.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the current state of a workshop item on this client.\n\n@param        PublishedFileID         The workshop item to get the state for." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetItemState constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_States_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_States_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_States;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetItemState constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetItemState Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetItemState_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetItemState_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2947869779
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUGC_GetItemState_Statics::NewProp_States_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUGC_GetItemState_Statics::NewProp_States_Inner = { "States", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_SteamCore_ESteamItemState, METADATA_PARAMS(0, nullptr) }; // 2192743457
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUGC_GetItemState_Statics::NewProp_States = { "States", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetItemState_Parms, States), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2192743457
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetItemState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetItemState_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetItemState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemState_Statics::NewProp_PublishedFileID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemState_Statics::NewProp_States_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemState_Statics::NewProp_States_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemState_Statics::NewProp_States,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetItemState_Statics::PropPointers) < 2048);
// ********** End Function GetItemState Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetItemState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetItemState", 	Z_Construct_UFunction_UUGC_GetItemState_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetItemState_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_GetItemState_Statics::UGC_eventGetItemState_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetItemState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_GetItemState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_GetItemState_Statics::UGC_eventGetItemState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_GetItemState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_GetItemState_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function GetItemState *************************************************

// ********** Begin Class UUGC Function GetItemUpdateProgress **************************************
struct Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics
{
	struct UGC_eventGetItemUpdateProgress_Parms
	{
		FUGCUpdateHandle Handle;
		int32 BytesProcessed;
		int32 BytesTotal;
		ESteamItemUpdateStatus ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Gets the progress of an item update.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09The update Handle to get the progress for.\n\x09* @param\x09""BytesProcessed\x09\x09Returns the current number of bytes uploaded.\n\x09* @param\x09""BytesTotal\x09\x09\x09Returns the total number of bytes that will be uploaded.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the progress of an item update.\n\n@param        Handle                          The update Handle to get the progress for.\n@param        BytesProcessed          Returns the current number of bytes uploaded.\n@param        BytesTotal                      Returns the total number of bytes that will be uploaded." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetItemUpdateProgress constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BytesProcessed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BytesTotal;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetItemUpdateProgress constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetItemUpdateProgress Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetItemUpdateProgress_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 1882179982
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::NewProp_BytesProcessed = { "BytesProcessed", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetItemUpdateProgress_Parms, BytesProcessed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::NewProp_BytesTotal = { "BytesTotal", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetItemUpdateProgress_Parms, BytesTotal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetItemUpdateProgress_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamItemUpdateStatus, METADATA_PARAMS(0, nullptr) }; // 3310395764
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::NewProp_BytesProcessed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::NewProp_BytesTotal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::PropPointers) < 2048);
// ********** End Function GetItemUpdateProgress Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetItemUpdateProgress", 	Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::UGC_eventGetItemUpdateProgress_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::UGC_eventGetItemUpdateProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_GetItemUpdateProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function GetItemUpdateProgress ****************************************

// ********** Begin Class UUGC Function GetNumSubscribedItems **************************************
struct Z_Construct_UFunction_UUGC_GetNumSubscribedItems_Statics
{
	struct UGC_eventGetNumSubscribedItems_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Gets the total number of items the current user is subscribed to for the game or application.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the total number of items the current user is subscribed to for the game or application." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetNumSubscribedItems constinit property declarations *****************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNumSubscribedItems constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNumSubscribedItems Property Definitions ****************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetNumSubscribedItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetNumSubscribedItems_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetNumSubscribedItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetNumSubscribedItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetNumSubscribedItems_Statics::PropPointers) < 2048);
// ********** End Function GetNumSubscribedItems Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetNumSubscribedItems_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetNumSubscribedItems", 	Z_Construct_UFunction_UUGC_GetNumSubscribedItems_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetNumSubscribedItems_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_GetNumSubscribedItems_Statics::UGC_eventGetNumSubscribedItems_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetNumSubscribedItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_GetNumSubscribedItems_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_GetNumSubscribedItems_Statics::UGC_eventGetNumSubscribedItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_GetNumSubscribedItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_GetNumSubscribedItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUGC::execGetNumSubscribedItems)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UUGC::GetNumSubscribedItems();
	P_NATIVE_END;
}
// ********** End Class UUGC Function GetNumSubscribedItems ****************************************

// ********** Begin Class UUGC Function GetQueryUGCAdditionalPreview *******************************
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
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Retrieve the details of an additional preview associated with an individual workshop item after receiving a querying UGC call result.\n\x09*\n\x09* You should call this in a loop to get the details of all the workshop items returned.\n\x09* NOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.\n\x09* Before calling this you should call GetQueryUGCNumAdditionalPreviews to get number of additional previews.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09The UGC query Handle to get the results from.\n\x09* @param\x09Index\x09\x09\x09\x09The index of the item to get the details of.\n\x09* @param\x09PreviewIndex\x09\x09The index of the additional preview to get the details of.\n\x09* @param\x09URLOrVideoID\x09\x09Returns a URL or Video ID by copying it into this string.\n\x09* @param\x09OriginalFileName\x09Returns the original file name. May be set to NULL to not receive this.\n\x09* @param\x09PreviewType\x09\x09\x09The type of preview that was returned.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieve the details of an additional preview associated with an individual workshop item after receiving a querying UGC call result.\n\nYou should call this in a loop to get the details of all the workshop items returned.\nNOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.\nBefore calling this you should call GetQueryUGCNumAdditionalPreviews to get number of additional previews.\n\n@param        Handle                          The UGC query Handle to get the results from.\n@param        Index                           The index of the item to get the details of.\n@param        PreviewIndex            The index of the additional preview to get the details of.\n@param        URLOrVideoID            Returns a URL or Video ID by copying it into this string.\n@param        OriginalFileName        Returns the original file name. May be set to NULL to not receive this.\n@param        PreviewType                     The type of preview that was returned." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetQueryUGCAdditionalPreview constinit property declarations **********
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
// ********** End Function GetQueryUGCAdditionalPreview constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetQueryUGCAdditionalPreview Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCAdditionalPreview_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 1895647525
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCAdditionalPreview_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_PreviewIndex = { "PreviewIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCAdditionalPreview_Parms, PreviewIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_URLOrVideoID = { "URLOrVideoID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCAdditionalPreview_Parms, URLOrVideoID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_OriginalFileName = { "OriginalFileName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCAdditionalPreview_Parms, OriginalFileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_PreviewType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_PreviewType = { "PreviewType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCAdditionalPreview_Parms, PreviewType), Z_Construct_UEnum_SteamCore_ESteamItemPreviewType, METADATA_PARAMS(0, nullptr) }; // 2015400147
void Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGC_eventGetQueryUGCAdditionalPreview_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_eventGetQueryUGCAdditionalPreview_Parms), &Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
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
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::PropPointers) < 2048);
// ********** End Function GetQueryUGCAdditionalPreview Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetQueryUGCAdditionalPreview", 	Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::UGC_eventGetQueryUGCAdditionalPreview_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::UGC_eventGetQueryUGCAdditionalPreview_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function GetQueryUGCAdditionalPreview *********************************

// ********** Begin Class UUGC Function GetQueryUGCChildren ****************************************
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
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Retrieve the ids of any child items of an individual workshop item after receiving a querying UGC call result. \n\x09*\n\x09* These items can either be a part of a collection or some other dependency (see AddDependency).\n\x09* You should call this in a loop to get the details of all the workshop items returned.\n\x09* NOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.\n\x09* You should create pvecPublishedFileID with m_unNumChildren provided in SteamUGCDetails_t after getting the UGC details with GetQueryUGCResult.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09The UGC query Handle to get the results from.\n\x09* @param\x09Index\x09\x09\x09\x09The index of the item to get the details of.\n\x09* @param\x09PublishedFileIDs\x09Returns the UGC children by setting this array.\n\x09* @param\x09MaxEntries\x09\x09\x09The length of PublishedFileIDs.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieve the ids of any child items of an individual workshop item after receiving a querying UGC call result.\n\nThese items can either be a part of a collection or some other dependency (see AddDependency).\nYou should call this in a loop to get the details of all the workshop items returned.\nNOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.\nYou should create pvecPublishedFileID with m_unNumChildren provided in SteamUGCDetails_t after getting the UGC details with GetQueryUGCResult.\n\n@param        Handle                          The UGC query Handle to get the results from.\n@param        Index                           The index of the item to get the details of.\n@param        PublishedFileIDs        Returns the UGC children by setting this array.\n@param        MaxEntries                      The length of PublishedFileIDs." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetQueryUGCChildren constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PublishedFileIDs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxEntries;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetQueryUGCChildren constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetQueryUGCChildren Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCChildren_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 1895647525
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCChildren_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::NewProp_PublishedFileIDs_Inner = { "PublishedFileIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2947869779
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::NewProp_PublishedFileIDs = { "PublishedFileIDs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCChildren_Parms, PublishedFileIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2947869779
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::NewProp_MaxEntries = { "MaxEntries", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCChildren_Parms, MaxEntries), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGC_eventGetQueryUGCChildren_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_eventGetQueryUGCChildren_Parms), &Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::NewProp_PublishedFileIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::NewProp_PublishedFileIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::NewProp_MaxEntries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::PropPointers) < 2048);
// ********** End Function GetQueryUGCChildren Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetQueryUGCChildren", 	Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::UGC_eventGetQueryUGCChildren_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::UGC_eventGetQueryUGCChildren_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_GetQueryUGCChildren()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function GetQueryUGCChildren ******************************************

// ********** Begin Class UUGC Function GetQueryUGCKeyValueTag *************************************
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
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Retrieve the details of a Key-Value tag associated with an individual workshop item after receiving a querying UGC call result.\n\x09*\n\x09* You should call this in a loop to get the details of all the workshop items returned.\n\x09* NOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.\n\x09* Before calling this you should call GetQueryUGCNumKeyValueTags to get number of tags.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09The UGC query Handle to get the results from.\n\x09* @param\x09Index\x09\x09\x09\x09The index of the item to get the details of.\n\x09* @param\x09KeyValueTagIndex\x09The index of the tag to get the details of.\n\x09* @param\x09Key\x09\x09\x09\x09\x09Returns the Key by copying it into this string.\n\x09* @param\x09Value\x09\x09\x09\x09Returns the Value by copying it into this string.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieve the details of a Key-Value tag associated with an individual workshop item after receiving a querying UGC call result.\n\nYou should call this in a loop to get the details of all the workshop items returned.\nNOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.\nBefore calling this you should call GetQueryUGCNumKeyValueTags to get number of tags.\n\n@param        Handle                          The UGC query Handle to get the results from.\n@param        Index                           The index of the item to get the details of.\n@param        KeyValueTagIndex        The index of the tag to get the details of.\n@param        Key                                     Returns the Key by copying it into this string.\n@param        Value                           Returns the Value by copying it into this string." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetQueryUGCKeyValueTag constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_KeyValueTagIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetQueryUGCKeyValueTag constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetQueryUGCKeyValueTag Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCKeyValueTag_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 1895647525
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCKeyValueTag_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::NewProp_KeyValueTagIndex = { "KeyValueTagIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCKeyValueTag_Parms, KeyValueTagIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCKeyValueTag_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCKeyValueTag_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGC_eventGetQueryUGCKeyValueTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_eventGetQueryUGCKeyValueTag_Parms), &Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::NewProp_KeyValueTagIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::PropPointers) < 2048);
// ********** End Function GetQueryUGCKeyValueTag Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetQueryUGCKeyValueTag", 	Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::UGC_eventGetQueryUGCKeyValueTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::UGC_eventGetQueryUGCKeyValueTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function GetQueryUGCKeyValueTag ***************************************

// ********** Begin Class UUGC Function GetQueryUGCMetadata ****************************************
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
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Retrieve the developer set metadata of an individual workshop item after receiving a querying UGC call result.\n\x09*\n\x09* You should call this in a loop to get the details of all the workshop items returned.\n\x09* NOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09The UGC query Handle to get the results from.\n\x09* @param\x09Index\x09\x09\x09The index of the item to get the details of.\n\x09* @param\x09MetaData\x09\x09Returns the url by copying it into this string.\n\x09* @param\x09MetadataSize\x09The size of pchMetadata in bytes.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieve the developer set metadata of an individual workshop item after receiving a querying UGC call result.\n\nYou should call this in a loop to get the details of all the workshop items returned.\nNOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.\n\n@param        Handle                  The UGC query Handle to get the results from.\n@param        Index                   The index of the item to get the details of.\n@param        MetaData                Returns the url by copying it into this string.\n@param        MetadataSize    The size of pchMetadata in bytes." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetQueryUGCMetadata constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MetaData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MetadataSize;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetQueryUGCMetadata constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetQueryUGCMetadata Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCMetadata_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 1895647525
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCMetadata_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCMetadata_Parms, MetaData), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::NewProp_MetadataSize = { "MetadataSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCMetadata_Parms, MetadataSize), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGC_eventGetQueryUGCMetadata_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_eventGetQueryUGCMetadata_Parms), &Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::NewProp_MetaData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::NewProp_MetadataSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::PropPointers) < 2048);
// ********** End Function GetQueryUGCMetadata Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetQueryUGCMetadata", 	Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::UGC_eventGetQueryUGCMetadata_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::UGC_eventGetQueryUGCMetadata_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_GetQueryUGCMetadata()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function GetQueryUGCMetadata ******************************************

// ********** Begin Class UUGC Function GetQueryUGCNumAdditionalPreviews ***************************
struct Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics
{
	struct UGC_eventGetQueryUGCNumAdditionalPreviews_Parms
	{
		FUGCQueryHandle Handle;
		int32 Index;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Retrieve the number of additional previews of an individual workshop item after receiving a querying UGC call result.\n\x09*\n\x09* You should call this in a loop to get the details of all the workshop items returned.\n\x09* NOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.\n\x09* You can then call GetQueryUGCAdditionalPreview to get the details of each additional preview.\n\x09*\n\x09* @param\x09Handle\x09\x09The UGC query Handle to get the results from.\n\x09* @param\x09Index\x09\x09The index of the item to get the details of.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieve the number of additional previews of an individual workshop item after receiving a querying UGC call result.\n\nYou should call this in a loop to get the details of all the workshop items returned.\nNOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.\nYou can then call GetQueryUGCAdditionalPreview to get the details of each additional preview.\n\n@param        Handle          The UGC query Handle to get the results from.\n@param        Index           The index of the item to get the details of." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetQueryUGCNumAdditionalPreviews constinit property declarations ******
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetQueryUGCNumAdditionalPreviews constinit property declarations ********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetQueryUGCNumAdditionalPreviews Property Definitions *****************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCNumAdditionalPreviews_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 1895647525
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCNumAdditionalPreviews_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCNumAdditionalPreviews_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics::PropPointers) < 2048);
// ********** End Function GetQueryUGCNumAdditionalPreviews Property Definitions *******************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetQueryUGCNumAdditionalPreviews", 	Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics::UGC_eventGetQueryUGCNumAdditionalPreviews_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics::UGC_eventGetQueryUGCNumAdditionalPreviews_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function GetQueryUGCNumAdditionalPreviews *****************************

// ********** Begin Class UUGC Function GetQueryUGCNumKeyValueTags *********************************
struct Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics
{
	struct UGC_eventGetQueryUGCNumKeyValueTags_Parms
	{
		FUGCQueryHandle Handle;
		int32 Index;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Retrieve the number of Key-Value tags of an individual workshop item after receiving a querying UGC call result.\n\x09*\n\x09* You should call this in a loop to get the details of all the workshop items returned.\n\x09* NOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.\n\x09* You can then call GetQueryUGCKeyValueTag to get the details of each tag.\n\x09*\n\x09* @param\x09Handle\x09\x09The UGC query Handle to get the results from.\n\x09* @param\x09Index\x09\x09The index of the item to get the details of.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieve the number of Key-Value tags of an individual workshop item after receiving a querying UGC call result.\n\nYou should call this in a loop to get the details of all the workshop items returned.\nNOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.\nYou can then call GetQueryUGCKeyValueTag to get the details of each tag.\n\n@param        Handle          The UGC query Handle to get the results from.\n@param        Index           The index of the item to get the details of." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetQueryUGCNumKeyValueTags constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetQueryUGCNumKeyValueTags constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetQueryUGCNumKeyValueTags Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCNumKeyValueTags_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 1895647525
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCNumKeyValueTags_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCNumKeyValueTags_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics::PropPointers) < 2048);
// ********** End Function GetQueryUGCNumKeyValueTags Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetQueryUGCNumKeyValueTags", 	Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics::UGC_eventGetQueryUGCNumKeyValueTags_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics::UGC_eventGetQueryUGCNumKeyValueTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function GetQueryUGCNumKeyValueTags ***********************************

// ********** Begin Class UUGC Function GetQueryUGCNumTags *****************************************
struct Z_Construct_UFunction_UUGC_GetQueryUGCNumTags_Statics
{
	struct UGC_eventGetQueryUGCNumTags_Parms
	{
		FUGCQueryHandle Handle;
		int32 Index;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Notes: Only available in UE4.27+\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Notes: Only available in UE4.27+" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetQueryUGCNumTags constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetQueryUGCNumTags constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetQueryUGCNumTags Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCNumTags_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCNumTags_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 1895647525
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCNumTags_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCNumTags_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCNumTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCNumTags_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetQueryUGCNumTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCNumTags_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCNumTags_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCNumTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCNumTags_Statics::PropPointers) < 2048);
// ********** End Function GetQueryUGCNumTags Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetQueryUGCNumTags_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetQueryUGCNumTags", 	Z_Construct_UFunction_UUGC_GetQueryUGCNumTags_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCNumTags_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_GetQueryUGCNumTags_Statics::UGC_eventGetQueryUGCNumTags_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCNumTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_GetQueryUGCNumTags_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_GetQueryUGCNumTags_Statics::UGC_eventGetQueryUGCNumTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_GetQueryUGCNumTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_GetQueryUGCNumTags_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function GetQueryUGCNumTags *******************************************

// ********** Begin Class UUGC Function GetQueryUGCPreviewURL **************************************
struct Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics
{
	struct UGC_eventGetQueryUGCPreviewURL_Parms
	{
		FUGCQueryHandle Handle;
		int32 Index;
		FString URL;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Retrieve the URL to the preview image of an individual workshop item after receiving a querying UGC call result.\n\x09*\n\x09* You should call this in a loop to get the details of all the workshop items returned.\n\x09* NOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.\n\x09* You can use this URL to download and display the preview image instead of having to download it using the m_hPreviewFile in the ISteamUGC::SteamUGCDetails_t struct.\n\x09* \n\x09* @param\x09Handle\x09\x09The UGC query Handle to get the results from.\n\x09* @param\x09Index\x09\x09The index of the item to get the details of.\n\x09* @param\x09URL\x09\x09\x09Returns the url by copying it into this string.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieve the URL to the preview image of an individual workshop item after receiving a querying UGC call result.\n\nYou should call this in a loop to get the details of all the workshop items returned.\nNOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.\nYou can use this URL to download and display the preview image instead of having to download it using the m_hPreviewFile in the ISteamUGC::SteamUGCDetails_t struct.\n\n@param        Handle          The UGC query Handle to get the results from.\n@param        Index           The index of the item to get the details of.\n@param        URL                     Returns the url by copying it into this string." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetQueryUGCPreviewURL constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetQueryUGCPreviewURL constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetQueryUGCPreviewURL Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCPreviewURL_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 1895647525
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCPreviewURL_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCPreviewURL_Parms, URL), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGC_eventGetQueryUGCPreviewURL_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_eventGetQueryUGCPreviewURL_Parms), &Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::NewProp_URL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::PropPointers) < 2048);
// ********** End Function GetQueryUGCPreviewURL Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetQueryUGCPreviewURL", 	Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::UGC_eventGetQueryUGCPreviewURL_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::UGC_eventGetQueryUGCPreviewURL_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function GetQueryUGCPreviewURL ****************************************

// ********** Begin Class UUGC Function GetQueryUGCResult ******************************************
struct Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics
{
	struct UGC_eventGetQueryUGCResult_Parms
	{
		FUGCQueryHandle Handle;
		int32 Index;
		FSteamUGCDetails Details;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Retrieve the details of an individual workshop item after receiving a querying UGC call result.\n\x09*\n\x09* You should call this in a loop to get the details of all the workshop items returned.\n\x09* NOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.\n\x09*\n\x09* @param\x09Handle\x09\x09The UGC query Handle to get the results from.\n\x09* @param\x09Index\x09\x09The index of the item to get the details of.\n\x09* @param\x09""Details\x09\x09Returns the the UGC details.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieve the details of an individual workshop item after receiving a querying UGC call result.\n\nYou should call this in a loop to get the details of all the workshop items returned.\nNOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.\n\n@param        Handle          The UGC query Handle to get the results from.\n@param        Index           The index of the item to get the details of.\n@param        Details         Returns the the UGC details." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetQueryUGCResult constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Details;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetQueryUGCResult constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetQueryUGCResult Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCResult_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 1895647525
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCResult_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::NewProp_Details = { "Details", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCResult_Parms, Details), Z_Construct_UScriptStruct_FSteamUGCDetails, METADATA_PARAMS(0, nullptr) }; // 1745063029
void Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGC_eventGetQueryUGCResult_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_eventGetQueryUGCResult_Parms), &Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::NewProp_Details,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::PropPointers) < 2048);
// ********** End Function GetQueryUGCResult Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetQueryUGCResult", 	Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::UGC_eventGetQueryUGCResult_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::UGC_eventGetQueryUGCResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_GetQueryUGCResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function GetQueryUGCResult ********************************************

// ********** Begin Class UUGC Function GetQueryUGCStatistic ***************************************
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
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Retrieve various statistics of an individual workshop item after receiving a querying UGC call result.\n\x09*\n\x09* You should call this in a loop to get the details of all the workshop items returned.\n\x09* NOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.\n\x09*\n\x09* @param\x09Handle\x09\x09The UGC query Handle to get the results from.\n\x09* @param\x09Index\x09\x09The index of the item to get the details of.\n\x09* @param\x09StatType\x09The statistic to retrieve.\n\x09* @param\x09StatValue\x09Returns the Value associated with the specified statistic.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieve various statistics of an individual workshop item after receiving a querying UGC call result.\n\nYou should call this in a loop to get the details of all the workshop items returned.\nNOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.\n\n@param        Handle          The UGC query Handle to get the results from.\n@param        Index           The index of the item to get the details of.\n@param        StatType        The statistic to retrieve.\n@param        StatValue       Returns the Value associated with the specified statistic." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetQueryUGCStatistic constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StatType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StatType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StatValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetQueryUGCStatistic constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetQueryUGCStatistic Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCStatistic_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 1895647525
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCStatistic_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::NewProp_StatType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::NewProp_StatType = { "StatType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCStatistic_Parms, StatType), Z_Construct_UEnum_SteamCore_ESteamItemStatistic, METADATA_PARAMS(0, nullptr) }; // 992304720
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::NewProp_StatValue = { "StatValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCStatistic_Parms, StatValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGC_eventGetQueryUGCStatistic_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_eventGetQueryUGCStatistic_Parms), &Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::NewProp_StatType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::NewProp_StatType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::NewProp_StatValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::PropPointers) < 2048);
// ********** End Function GetQueryUGCStatistic Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetQueryUGCStatistic", 	Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::UGC_eventGetQueryUGCStatistic_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::UGC_eventGetQueryUGCStatistic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_GetQueryUGCStatistic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function GetQueryUGCStatistic *****************************************

// ********** Begin Class UUGC Function GetQueryUGCTag *********************************************
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
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Notes: Only available in UE4.27+\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Notes: Only available in UE4.27+" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetQueryUGCTag constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IndexTag;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetQueryUGCTag constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetQueryUGCTag Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCTag_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 1895647525
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCTag_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::NewProp_IndexTag = { "IndexTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCTag_Parms, IndexTag), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCTag_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGC_eventGetQueryUGCTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_eventGetQueryUGCTag_Parms), &Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::NewProp_IndexTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::PropPointers) < 2048);
// ********** End Function GetQueryUGCTag Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetQueryUGCTag", 	Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::UGC_eventGetQueryUGCTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::UGC_eventGetQueryUGCTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_GetQueryUGCTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function GetQueryUGCTag ***********************************************

// ********** Begin Class UUGC Function GetQueryUGCTagDisplayName **********************************
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
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Notes: Only available in UE4.27+\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Notes: Only available in UE4.27+" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetQueryUGCTagDisplayName constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IndexTag;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetQueryUGCTagDisplayName constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetQueryUGCTagDisplayName Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCTagDisplayName_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 1895647525
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCTagDisplayName_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::NewProp_IndexTag = { "IndexTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCTagDisplayName_Parms, IndexTag), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCTagDisplayName_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGC_eventGetQueryUGCTagDisplayName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_eventGetQueryUGCTagDisplayName_Parms), &Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::NewProp_IndexTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::PropPointers) < 2048);
// ********** End Function GetQueryUGCTagDisplayName Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetQueryUGCTagDisplayName", 	Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::UGC_eventGetQueryUGCTagDisplayName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::UGC_eventGetQueryUGCTagDisplayName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function GetQueryUGCTagDisplayName ************************************

// ********** Begin Class UUGC Function GetSubscribedItems *****************************************
struct Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics
{
	struct UGC_eventGetSubscribedItems_Parms
	{
		TArray<FPublishedFileID> PublishedFileIDs;
		int32 MaxEntries;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Gets a list of all of the items the current user is subscribed to for the current game.\n\x09*\n\x09* You create an array with the size provided by GetNumSubscribedItems before calling this.\n\x09*\n\x09* @param\x09PublishedFileIDs\x09The array where the item ids will be copied into.\n\x09* @param\x09MaxEntries\x09\x09\x09\x09The maximum number of items to return. This should typically be the same as GetNumSubscribedItems and the same size as pvecPublishedFileID.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets a list of all of the items the current user is subscribed to for the current game.\n\nYou create an array with the size provided by GetNumSubscribedItems before calling this.\n\n@param        PublishedFileIDs        The array where the item ids will be copied into.\n@param        MaxEntries                              The maximum number of items to return. This should typically be the same as GetNumSubscribedItems and the same size as pvecPublishedFileID." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetSubscribedItems constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PublishedFileIDs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxEntries;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSubscribedItems constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSubscribedItems Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::NewProp_PublishedFileIDs_Inner = { "PublishedFileIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2947869779
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::NewProp_PublishedFileIDs = { "PublishedFileIDs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetSubscribedItems_Parms, PublishedFileIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2947869779
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::NewProp_MaxEntries = { "MaxEntries", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetSubscribedItems_Parms, MaxEntries), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetSubscribedItems_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::NewProp_PublishedFileIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::NewProp_PublishedFileIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::NewProp_MaxEntries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::PropPointers) < 2048);
// ********** End Function GetSubscribedItems Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetSubscribedItems", 	Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::UGC_eventGetSubscribedItems_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::UGC_eventGetSubscribedItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_GetSubscribedItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function GetSubscribedItems *******************************************

// ********** Begin Class UUGC Function GetUserItemVote ********************************************
struct Z_Construct_UFunction_UUGC_GetUserItemVote_Statics
{
	struct UGC_eventGetUserItemVote_Parms
	{
		FScriptDelegate Callback;
		FPublishedFileID PublishedFileID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Gets the users vote status on a workshop item.\n\x09*\n\x09* @param\x09PublishedFileID\x09\x09The workshop item ID to get the users vote.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the users vote status on a workshop item.\n\n@param        PublishedFileID         The workshop item ID to get the users vote." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetUserItemVote constinit property declarations ***********************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetUserItemVote constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetUserItemVote Property Definitions **********************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_GetUserItemVote_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetUserItemVote_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnGetUserItemVote__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 1789372707
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetUserItemVote_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventGetUserItemVote_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2947869779
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetUserItemVote_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetUserItemVote_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetUserItemVote_Statics::NewProp_PublishedFileID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetUserItemVote_Statics::PropPointers) < 2048);
// ********** End Function GetUserItemVote Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetUserItemVote_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetUserItemVote", 	Z_Construct_UFunction_UUGC_GetUserItemVote_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetUserItemVote_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_GetUserItemVote_Statics::UGC_eventGetUserItemVote_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetUserItemVote_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_GetUserItemVote_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_GetUserItemVote_Statics::UGC_eventGetUserItemVote_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_GetUserItemVote()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_GetUserItemVote_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function GetUserItemVote **********************************************

// ********** Begin Class UUGC Function ReleaseQueryUGCRequest *************************************
struct Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics
{
	struct UGC_eventReleaseQueryUGCRequest_Parms
	{
		FUGCQueryHandle Handle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Releases a UGC query Handle when you are done with it to free up memory.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09The UGC query Handle to release.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Releases a UGC query Handle when you are done with it to free up memory.\n\n@param        Handle                  The UGC query Handle to release." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ReleaseQueryUGCRequest constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReleaseQueryUGCRequest constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReleaseQueryUGCRequest Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventReleaseQueryUGCRequest_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 1895647525
void Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGC_eventReleaseQueryUGCRequest_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_eventReleaseQueryUGCRequest_Parms), &Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics::PropPointers) < 2048);
// ********** End Function ReleaseQueryUGCRequest Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "ReleaseQueryUGCRequest", 	Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics::UGC_eventReleaseQueryUGCRequest_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics::UGC_eventReleaseQueryUGCRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUGC::execReleaseQueryUGCRequest)
{
	P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UUGC::ReleaseQueryUGCRequest(Z_Param_Handle);
	P_NATIVE_END;
}
// ********** End Class UUGC Function ReleaseQueryUGCRequest ***************************************

// ********** Begin Class UUGC Function RemoveAppDependency ****************************************
struct Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics
{
	struct UGC_eventRemoveAppDependency_Parms
	{
		FScriptDelegate Callback;
		FPublishedFileID PublishedFileID;
		int32 AppId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Removes the dependency between the given item and the appid. This list of dependencies can be retrieved by calling GetAppDependencies.\n\x09*\n\x09* @param\x09PublishedFileID\x09\x09The item.\n\x09* @param\x09""AppId\x09\x09\x09\x09The app/dlc.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes the dependency between the given item and the appid. This list of dependencies can be retrieved by calling GetAppDependencies.\n\n@param        PublishedFileID         The item.\n@param        AppId                           The app/dlc." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveAppDependency constinit property declarations *******************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveAppDependency constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveAppDependency Property Definitions ******************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventRemoveAppDependency_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnRemoveAppDependencyResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 3090021032
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventRemoveAppDependency_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2947869779
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventRemoveAppDependency_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::NewProp_PublishedFileID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::NewProp_AppId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::PropPointers) < 2048);
// ********** End Function RemoveAppDependency Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "RemoveAppDependency", 	Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::UGC_eventRemoveAppDependency_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::UGC_eventRemoveAppDependency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_RemoveAppDependency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function RemoveAppDependency ******************************************

// ********** Begin Class UUGC Function RemoveDependency *******************************************
struct Z_Construct_UFunction_UUGC_RemoveDependency_Statics
{
	struct UGC_eventRemoveDependency_Parms
	{
		FScriptDelegate Callback;
		FPublishedFileID ParentPublishedFileID;
		FPublishedFileID ChildPublishedFileID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Removes a workshop item as a dependency from the specified item.\n\x09*\n\x09* @param\x09ParentPublishedFileID\x09\x09The workshop item to remove a dependency from.\n\x09* @param\x09""ChildPublishedFileID\x09\x09The dependency to remove from the parent.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes a workshop item as a dependency from the specified item.\n\n@param        ParentPublishedFileID           The workshop item to remove a dependency from.\n@param        ChildPublishedFileID            The dependency to remove from the parent." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveDependency constinit property declarations **********************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParentPublishedFileID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChildPublishedFileID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveDependency constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveDependency Property Definitions *********************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_RemoveDependency_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventRemoveDependency_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnRemoveUGCDependencyResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2508164853
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_RemoveDependency_Statics::NewProp_ParentPublishedFileID = { "ParentPublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventRemoveDependency_Parms, ParentPublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2947869779
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_RemoveDependency_Statics::NewProp_ChildPublishedFileID = { "ChildPublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventRemoveDependency_Parms, ChildPublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2947869779
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_RemoveDependency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_RemoveDependency_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_RemoveDependency_Statics::NewProp_ParentPublishedFileID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_RemoveDependency_Statics::NewProp_ChildPublishedFileID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_RemoveDependency_Statics::PropPointers) < 2048);
// ********** End Function RemoveDependency Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_RemoveDependency_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "RemoveDependency", 	Z_Construct_UFunction_UUGC_RemoveDependency_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_RemoveDependency_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_RemoveDependency_Statics::UGC_eventRemoveDependency_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_RemoveDependency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_RemoveDependency_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_RemoveDependency_Statics::UGC_eventRemoveDependency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_RemoveDependency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_RemoveDependency_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function RemoveDependency *********************************************

// ********** Begin Class UUGC Function RemoveItemFromFavorites ************************************
struct Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics
{
	struct UGC_eventRemoveItemFromFavorites_Parms
	{
		FScriptDelegate Callback;
		int32 AppId;
		FPublishedFileID PublishedFileID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Removes a workshop item from the users favorites list.\n\x09*\n\x09* @param\x09""AppId\x09\x09\x09\x09\x09The app ID that this item belongs to.\n\x09* @param\x09PublishedFileID\x09\x09\x09The workshop item to remove from the users favorites list.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes a workshop item from the users favorites list.\n\n@param        AppId                                   The app ID that this item belongs to.\n@param        PublishedFileID                 The workshop item to remove from the users favorites list." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveItemFromFavorites constinit property declarations ***************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveItemFromFavorites constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveItemFromFavorites Property Definitions **************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventRemoveItemFromFavorites_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnRemoveItemFromFavorites__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2876670358
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventRemoveItemFromFavorites_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventRemoveItemFromFavorites_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2947869779
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::NewProp_PublishedFileID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::PropPointers) < 2048);
// ********** End Function RemoveItemFromFavorites Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "RemoveItemFromFavorites", 	Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::UGC_eventRemoveItemFromFavorites_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::UGC_eventRemoveItemFromFavorites_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_RemoveItemFromFavorites()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function RemoveItemFromFavorites **************************************

// ********** Begin Class UUGC Function RemoveItemKeyValueTags *************************************
struct Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics
{
	struct UGC_eventRemoveItemKeyValueTags_Parms
	{
		FUGCUpdateHandle Handle;
		FString Key;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Removes an existing Key Value tag from an item.\n\x09*\n\x09* You can only call this up to 100 times per item update. If you need remove more tags than that you'll need to make subsequent item updates.\n\x09* NOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\x09*\n\x09* @param\x09Handle\x09\x09The workshop item update Handle to customize.\n\x09* @param\x09Key\x09\x09\x09The Key to remove from the item.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes an existing Key Value tag from an item.\n\nYou can only call this up to 100 times per item update. If you need remove more tags than that you'll need to make subsequent item updates.\nNOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\n@param        Handle          The workshop item update Handle to customize.\n@param        Key                     The Key to remove from the item." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveItemKeyValueTags constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveItemKeyValueTags constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveItemKeyValueTags Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventRemoveItemKeyValueTags_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 1882179982
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventRemoveItemKeyValueTags_Parms, Key), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGC_eventRemoveItemKeyValueTags_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_eventRemoveItemKeyValueTags_Parms), &Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::PropPointers) < 2048);
// ********** End Function RemoveItemKeyValueTags Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "RemoveItemKeyValueTags", 	Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::UGC_eventRemoveItemKeyValueTags_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::UGC_eventRemoveItemKeyValueTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function RemoveItemKeyValueTags ***************************************

// ********** Begin Class UUGC Function RemoveItemPreview ******************************************
struct Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics
{
	struct UGC_eventRemoveItemPreview_Parms
	{
		FUGCUpdateHandle Handle;
		int32 Index;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* RemoveItemPreview\n\x09*\n\x09* @param\x09Handle\x09\x09The workshop item update Handle to customize.\n\x09* @param\x09Index\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RemoveItemPreview\n\n@param        Handle          The workshop item update Handle to customize.\n@param        Index" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveItemPreview constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveItemPreview constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveItemPreview Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventRemoveItemPreview_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 1882179982
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventRemoveItemPreview_Parms, Index), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGC_eventRemoveItemPreview_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_eventRemoveItemPreview_Parms), &Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::PropPointers) < 2048);
// ********** End Function RemoveItemPreview Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "RemoveItemPreview", 	Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::UGC_eventRemoveItemPreview_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::UGC_eventRemoveItemPreview_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_RemoveItemPreview()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function RemoveItemPreview ********************************************

// ********** Begin Class UUGC Function SendQueryUGCRequest ****************************************
struct Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics
{
	struct UGC_eventSendQueryUGCRequest_Parms
	{
		FScriptDelegate Callback;
		FUGCQueryHandle Handle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Send a UGC query to Steam.\n\x09*\n\x09* This must be called with a Handle obtained from CreateQueryUserUGCRequest, CreateQueryAllUGCRequest, or CreateQueryUGCDetailsRequest to actually send the request to Steam. Before calling this you should use one or more of the following APIs to customize your query:\n\x09* AddRequiredTag, AddExcludedTag, SetReturnOnlyIDs, SetReturnKeyValueTags, SetReturnLongDescription, SetReturnMetadata, SetReturnChildren, SetReturnAdditionalPreviews, SetReturnTotalOnly, SetLanguage, SetAllowCachedResponse, SetCloudFileNameFilter, SetMatchAnyTag, SetSearchText, SetRankedByTrendDays, AddRequiredKeyValueTag\n\x09*\n\x09* @param\x09Handle\x09\x09The UGC query request Handle to send.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Send a UGC query to Steam.\n\nThis must be called with a Handle obtained from CreateQueryUserUGCRequest, CreateQueryAllUGCRequest, or CreateQueryUGCDetailsRequest to actually send the request to Steam. Before calling this you should use one or more of the following APIs to customize your query:\nAddRequiredTag, AddExcludedTag, SetReturnOnlyIDs, SetReturnKeyValueTags, SetReturnLongDescription, SetReturnMetadata, SetReturnChildren, SetReturnAdditionalPreviews, SetReturnTotalOnly, SetLanguage, SetAllowCachedResponse, SetCloudFileNameFilter, SetMatchAnyTag, SetSearchText, SetRankedByTrendDays, AddRequiredKeyValueTag\n\n@param        Handle          The UGC query request Handle to send." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SendQueryUGCRequest constinit property declarations *******************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SendQueryUGCRequest constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SendQueryUGCRequest Property Definitions ******************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventSendQueryUGCRequest_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnSendQueryUGCRequest__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2913957293
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventSendQueryUGCRequest_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 1895647525
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics::NewProp_Handle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics::PropPointers) < 2048);
// ********** End Function SendQueryUGCRequest Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SendQueryUGCRequest", 	Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics::UGC_eventSendQueryUGCRequest_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics::UGC_eventSendQueryUGCRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_SendQueryUGCRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function SendQueryUGCRequest ******************************************

// ********** Begin Class UUGC Function SetAllowCachedResponse *************************************
struct Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics
{
	struct UGC_eventSetAllowCachedResponse_Parms
	{
		FUGCQueryHandle Handle;
		int32 MaxAgeSeconds;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets whether results will be returned from the cache for the specific period of time on a pending UGC Query.\n\x09*\n\x09* NOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09The UGC query Handle to customize.\n\x09* @param\x09MaxAgeSeconds\x09\x09The maximum amount of time that an item can be returned without a cache invalidation.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets whether results will be returned from the cache for the specific period of time on a pending UGC Query.\n\nNOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\n@param        Handle                          The UGC query Handle to customize.\n@param        MaxAgeSeconds           The maximum amount of time that an item can be returned without a cache invalidation." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetAllowCachedResponse constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAgeSeconds;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetAllowCachedResponse constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetAllowCachedResponse Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventSetAllowCachedResponse_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 1895647525
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::NewProp_MaxAgeSeconds = { "MaxAgeSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventSetAllowCachedResponse_Parms, MaxAgeSeconds), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGC_eventSetAllowCachedResponse_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_eventSetAllowCachedResponse_Parms), &Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::NewProp_MaxAgeSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::PropPointers) < 2048);
// ********** End Function SetAllowCachedResponse Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetAllowCachedResponse", 	Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::UGC_eventSetAllowCachedResponse_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::UGC_eventSetAllowCachedResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_SetAllowCachedResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function SetAllowCachedResponse ***************************************

// ********** Begin Class UUGC Function SetAllowLegacyUpload ***************************************
struct Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics
{
	struct UGC_eventSetAllowLegacyUpload_Parms
	{
		FUGCUpdateHandle Handle;
		bool bAllowLegacyUpload;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Use legacy upload for a single small file (SDK 1.43+ Only)\n\x09*\n\x09* The parameter to SetItemContent() should either be a directory with one file or the full path to the file.  The file must also be less than 10MB in size.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09The UGC query Handle to customize.\n\x09* @param\x09""bAllowLegacyUpload\x09\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use legacy upload for a single small file (SDK 1.43+ Only)\n\nThe parameter to SetItemContent() should either be a directory with one file or the full path to the file.  The file must also be less than 10MB in size.\n\n@param        Handle                          The UGC query Handle to customize.\n@param        bAllowLegacyUpload" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetAllowLegacyUpload constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static void NewProp_bAllowLegacyUpload_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowLegacyUpload;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetAllowLegacyUpload constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetAllowLegacyUpload Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventSetAllowLegacyUpload_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 1882179982
void Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::NewProp_bAllowLegacyUpload_SetBit(void* Obj)
{
	((UGC_eventSetAllowLegacyUpload_Parms*)Obj)->bAllowLegacyUpload = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::NewProp_bAllowLegacyUpload = { "bAllowLegacyUpload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_eventSetAllowLegacyUpload_Parms), &Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::NewProp_bAllowLegacyUpload_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGC_eventSetAllowLegacyUpload_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_eventSetAllowLegacyUpload_Parms), &Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::NewProp_bAllowLegacyUpload,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::PropPointers) < 2048);
// ********** End Function SetAllowLegacyUpload Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetAllowLegacyUpload", 	Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::UGC_eventSetAllowLegacyUpload_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::UGC_eventSetAllowLegacyUpload_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_SetAllowLegacyUpload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function SetAllowLegacyUpload *****************************************

// ********** Begin Class UUGC Function SetCloudFileNameFilter *************************************
struct Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics
{
	struct UGC_eventSetCloudFileNameFilter_Parms
	{
		FUGCQueryHandle Handle;
		FString MatchCloudFileName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets to only return items that have a specific filename on a pending UGC Query.\n\x09*\n\x09* NOTE: This can only be used with CreateQueryUserUGCRequest!\n\x09* NOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09\x09The UGC query Handle to customize.\n\x09* @param\x09MatchCloudFileName\x09\x09The filename to match.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets to only return items that have a specific filename on a pending UGC Query.\n\nNOTE: This can only be used with CreateQueryUserUGCRequest!\nNOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\n@param        Handle                                  The UGC query Handle to customize.\n@param        MatchCloudFileName              The filename to match." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetCloudFileNameFilter constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MatchCloudFileName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetCloudFileNameFilter constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetCloudFileNameFilter Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventSetCloudFileNameFilter_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 1895647525
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::NewProp_MatchCloudFileName = { "MatchCloudFileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventSetCloudFileNameFilter_Parms, MatchCloudFileName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGC_eventSetCloudFileNameFilter_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_eventSetCloudFileNameFilter_Parms), &Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::NewProp_MatchCloudFileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::PropPointers) < 2048);
// ********** End Function SetCloudFileNameFilter Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetCloudFileNameFilter", 	Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::UGC_eventSetCloudFileNameFilter_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::UGC_eventSetCloudFileNameFilter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_SetCloudFileNameFilter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function SetCloudFileNameFilter ***************************************

// ********** Begin Class UUGC Function SetItemContent *********************************************
struct Z_Construct_UFunction_UUGC_SetItemContent_Statics
{
	struct UGC_eventSetItemContent_Parms
	{
		FUGCUpdateHandle Handle;
		FString ContentFolder;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets the folder that will be stored as the content for an item.\n\x09*\n\x09* For efficient upload and download, files should not be merged or compressed into single files (e.g. zip files).\n\x09* NOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09The workshop item update Handle to customize.\n\x09* @param\x09""ContentFolder\x09The absolute path to a local folder containing the content for the item.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the folder that will be stored as the content for an item.\n\nFor efficient upload and download, files should not be merged or compressed into single files (e.g. zip files).\nNOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\n@param        Handle                  The workshop item update Handle to customize.\n@param        ContentFolder   The absolute path to a local folder containing the content for the item." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetItemContent constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ContentFolder;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetItemContent constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetItemContent Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetItemContent_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventSetItemContent_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 1882179982
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_SetItemContent_Statics::NewProp_ContentFolder = { "ContentFolder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventSetItemContent_Parms, ContentFolder), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUGC_SetItemContent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGC_eventSetItemContent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetItemContent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_eventSetItemContent_Parms), &Z_Construct_UFunction_UUGC_SetItemContent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetItemContent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemContent_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemContent_Statics::NewProp_ContentFolder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemContent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemContent_Statics::PropPointers) < 2048);
// ********** End Function SetItemContent Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetItemContent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetItemContent", 	Z_Construct_UFunction_UUGC_SetItemContent_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemContent_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_SetItemContent_Statics::UGC_eventSetItemContent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemContent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_SetItemContent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_SetItemContent_Statics::UGC_eventSetItemContent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_SetItemContent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_SetItemContent_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function SetItemContent ***********************************************

// ********** Begin Class UUGC Function SetItemDescription *****************************************
struct Z_Construct_UFunction_UUGC_SetItemDescription_Statics
{
	struct UGC_eventSetItemDescription_Parms
	{
		FUGCUpdateHandle Handle;
		FString Description;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets a new description for an item.\n\x09*\n\x09* The description must be limited to the length defined by k_cchPublishedDocumentDescriptionMax.\n\x09* You can set what language this is for by using SetItemUpdateLanguage, if no language is set then \"english\" is assumed.\n\x09* NOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09The workshop item update Handle to customize.\n\x09* @param\x09""Description\x09\x09The new description of the item.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets a new description for an item.\n\nThe description must be limited to the length defined by k_cchPublishedDocumentDescriptionMax.\nYou can set what language this is for by using SetItemUpdateLanguage, if no language is set then \"english\" is assumed.\nNOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\n@param        Handle                  The workshop item update Handle to customize.\n@param        Description             The new description of the item." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetItemDescription constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetItemDescription constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetItemDescription Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetItemDescription_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventSetItemDescription_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 1882179982
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_SetItemDescription_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventSetItemDescription_Parms, Description), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUGC_SetItemDescription_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGC_eventSetItemDescription_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetItemDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_eventSetItemDescription_Parms), &Z_Construct_UFunction_UUGC_SetItemDescription_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetItemDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemDescription_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemDescription_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemDescription_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemDescription_Statics::PropPointers) < 2048);
// ********** End Function SetItemDescription Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetItemDescription_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetItemDescription", 	Z_Construct_UFunction_UUGC_SetItemDescription_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemDescription_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_SetItemDescription_Statics::UGC_eventSetItemDescription_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemDescription_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_SetItemDescription_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_SetItemDescription_Statics::UGC_eventSetItemDescription_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_SetItemDescription()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_SetItemDescription_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function SetItemDescription *******************************************

// ********** Begin Class UUGC Function SetItemMetadata ********************************************
struct Z_Construct_UFunction_UUGC_SetItemMetadata_Statics
{
	struct UGC_eventSetItemMetadata_Parms
	{
		FUGCUpdateHandle Handle;
		FString MetaData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets arbitrary metadata for an item. This metadata can be returned from queries without having to download and install the actual content.\n\x09*\n\x09* The metadata must be limited to the size defined by k_cchDeveloperMetadataMax.\n\x09* NOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09The workshop item update Handle to customize.\n\x09* @param\x09MetaData\x09\x09The new metadata for this item.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets arbitrary metadata for an item. This metadata can be returned from queries without having to download and install the actual content.\n\nThe metadata must be limited to the size defined by k_cchDeveloperMetadataMax.\nNOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\n@param        Handle                  The workshop item update Handle to customize.\n@param        MetaData                The new metadata for this item." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetItemMetadata constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MetaData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetItemMetadata constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetItemMetadata Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventSetItemMetadata_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 1882179982
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventSetItemMetadata_Parms, MetaData), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGC_eventSetItemMetadata_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_eventSetItemMetadata_Parms), &Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::NewProp_MetaData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::PropPointers) < 2048);
// ********** End Function SetItemMetadata Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetItemMetadata", 	Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::UGC_eventSetItemMetadata_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::UGC_eventSetItemMetadata_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_SetItemMetadata()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function SetItemMetadata **********************************************

// ********** Begin Class UUGC Function SetItemPreview *********************************************
struct Z_Construct_UFunction_UUGC_SetItemPreview_Statics
{
	struct UGC_eventSetItemPreview_Parms
	{
		FUGCUpdateHandle Handle;
		FString PreviewFile;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets the primary preview image for the item.\n\x09*\n\x09* The format should be one that both the web and the application (if necessary) can render. Suggested formats include JPG, PNG and GIF.\n\x09* NOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09The workshop item update Handle to customize.\n\x09* @param\x09PreviewFile\x09\x09The absolute path to a local preview image file for the item.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the primary preview image for the item.\n\nThe format should be one that both the web and the application (if necessary) can render. Suggested formats include JPG, PNG and GIF.\nNOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\n@param        Handle                  The workshop item update Handle to customize.\n@param        PreviewFile             The absolute path to a local preview image file for the item." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetItemPreview constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PreviewFile;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetItemPreview constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetItemPreview Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetItemPreview_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventSetItemPreview_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 1882179982
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_SetItemPreview_Statics::NewProp_PreviewFile = { "PreviewFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventSetItemPreview_Parms, PreviewFile), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUGC_SetItemPreview_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGC_eventSetItemPreview_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetItemPreview_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_eventSetItemPreview_Parms), &Z_Construct_UFunction_UUGC_SetItemPreview_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetItemPreview_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemPreview_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemPreview_Statics::NewProp_PreviewFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemPreview_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemPreview_Statics::PropPointers) < 2048);
// ********** End Function SetItemPreview Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetItemPreview_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetItemPreview", 	Z_Construct_UFunction_UUGC_SetItemPreview_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemPreview_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_SetItemPreview_Statics::UGC_eventSetItemPreview_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemPreview_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_SetItemPreview_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_SetItemPreview_Statics::UGC_eventSetItemPreview_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_SetItemPreview()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_SetItemPreview_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function SetItemPreview ***********************************************

// ********** Begin Class UUGC Function SetItemTags ************************************************
struct Z_Construct_UFunction_UUGC_SetItemTags_Statics
{
	struct UGC_eventSetItemTags_Parms
	{
		FUGCUpdateHandle Handle;
		TArray<FString> Tags;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets arbitrary developer specified tags on an item.\n\x09*\n\x09* Each tag must be limited to 255 characters. Tag names can only include printable characters, excluding ','. For reference on what characters are allowed, refer to http://en.cppreference.com/w/c/string/byte/isprint\n\x09* NOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\x09*\n\x09* @param\x09Handle\x09\x09The workshop item update Handle to customize.\n\x09* @param\x09Tags\x09\x09The list of tags to set on this item.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets arbitrary developer specified tags on an item.\n\nEach tag must be limited to 255 characters. Tag names can only include printable characters, excluding ','. For reference on what characters are allowed, refer to http://en.cppreference.com/w/c/string/byte/isprint\nNOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\n@param        Handle          The workshop item update Handle to customize.\n@param        Tags            The list of tags to set on this item." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetItemTags constinit property declarations ***************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Tags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetItemTags constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetItemTags Property Definitions **************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetItemTags_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventSetItemTags_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 1882179982
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_SetItemTags_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUGC_SetItemTags_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventSetItemTags_Parms, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUGC_SetItemTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGC_eventSetItemTags_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetItemTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_eventSetItemTags_Parms), &Z_Construct_UFunction_UUGC_SetItemTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetItemTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemTags_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemTags_Statics::NewProp_Tags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemTags_Statics::NewProp_Tags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemTags_Statics::PropPointers) < 2048);
// ********** End Function SetItemTags Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetItemTags_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetItemTags", 	Z_Construct_UFunction_UUGC_SetItemTags_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemTags_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_SetItemTags_Statics::UGC_eventSetItemTags_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_SetItemTags_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_SetItemTags_Statics::UGC_eventSetItemTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_SetItemTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_SetItemTags_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function SetItemTags **************************************************

// ********** Begin Class UUGC Function SetItemTitle ***********************************************
struct Z_Construct_UFunction_UUGC_SetItemTitle_Statics
{
	struct UGC_eventSetItemTitle_Parms
	{
		FUGCUpdateHandle Handle;
		FString Title;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets a new title for an item.\n\x09*\n\x09* The title must be limited to the size defined by k_cchPublishedDocumentTitleMax.\n\x09* You can set what language this is for by using SetItemUpdateLanguage, if no language is set then \"english\" is assumed.\n\x09* NOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\x09*\n\x09* @param\x09Handle\x09\x09The workshop item update Handle to customize.\n\x09* @param\x09Title\x09\x09The new title of the item.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets a new title for an item.\n\nThe title must be limited to the size defined by k_cchPublishedDocumentTitleMax.\nYou can set what language this is for by using SetItemUpdateLanguage, if no language is set then \"english\" is assumed.\nNOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\n@param        Handle          The workshop item update Handle to customize.\n@param        Title           The new title of the item." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetItemTitle constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetItemTitle constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetItemTitle Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetItemTitle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventSetItemTitle_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 1882179982
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_SetItemTitle_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventSetItemTitle_Parms, Title), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUGC_SetItemTitle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGC_eventSetItemTitle_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetItemTitle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_eventSetItemTitle_Parms), &Z_Construct_UFunction_UUGC_SetItemTitle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetItemTitle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemTitle_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemTitle_Statics::NewProp_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemTitle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemTitle_Statics::PropPointers) < 2048);
// ********** End Function SetItemTitle Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetItemTitle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetItemTitle", 	Z_Construct_UFunction_UUGC_SetItemTitle_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemTitle_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_SetItemTitle_Statics::UGC_eventSetItemTitle_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemTitle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_SetItemTitle_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_SetItemTitle_Statics::UGC_eventSetItemTitle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_SetItemTitle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_SetItemTitle_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function SetItemTitle *************************************************

// ********** Begin Class UUGC Function SetItemUpdateLanguage **************************************
struct Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics
{
	struct UGC_eventSetItemUpdateLanguage_Parms
	{
		FUGCUpdateHandle Handle;
		FString Language;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets the language of the title and description that will be set in this item update.\n\x09*\n\x09* This must be in the format of the API language code.\n\x09* If this is not set then \"english\" is assumed.\n\x09* NOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09The workshop item update Handle to customize.\n\x09* @param\x09Language\x09\x09The language of the title and description that will be set in this update.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the language of the title and description that will be set in this item update.\n\nThis must be in the format of the API language code.\nIf this is not set then \"english\" is assumed.\nNOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\n@param        Handle                  The workshop item update Handle to customize.\n@param        Language                The language of the title and description that will be set in this update." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetItemUpdateLanguage constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetItemUpdateLanguage constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetItemUpdateLanguage Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventSetItemUpdateLanguage_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 1882179982
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventSetItemUpdateLanguage_Parms, Language), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGC_eventSetItemUpdateLanguage_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_eventSetItemUpdateLanguage_Parms), &Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::NewProp_Language,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::PropPointers) < 2048);
// ********** End Function SetItemUpdateLanguage Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetItemUpdateLanguage", 	Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::UGC_eventSetItemUpdateLanguage_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::UGC_eventSetItemUpdateLanguage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_SetItemUpdateLanguage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function SetItemUpdateLanguage ****************************************

// ********** Begin Class UUGC Function SetItemVisibility ******************************************
struct Z_Construct_UFunction_UUGC_SetItemVisibility_Statics
{
	struct UGC_eventSetItemVisibility_Parms
	{
		FUGCUpdateHandle Handle;
		ESteamRemoteStoragePublishedFileVisibility Visibility;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets the visibility of an item.\n\x09*\n\x09* NOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09The workshop item update Handle to customize.\n\x09* @param\x09Visibility\x09\x09The visibility to set.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the visibility of an item.\n\nNOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\n@param        Handle                  The workshop item update Handle to customize.\n@param        Visibility              The visibility to set." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetItemVisibility constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Visibility_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Visibility;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetItemVisibility constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetItemVisibility Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventSetItemVisibility_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 1882179982
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::NewProp_Visibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::NewProp_Visibility = { "Visibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventSetItemVisibility_Parms, Visibility), Z_Construct_UEnum_SteamCore_ESteamRemoteStoragePublishedFileVisibility, METADATA_PARAMS(0, nullptr) }; // 2449741460
void Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGC_eventSetItemVisibility_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_eventSetItemVisibility_Parms), &Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::NewProp_Visibility_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::NewProp_Visibility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::PropPointers) < 2048);
// ********** End Function SetItemVisibility Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetItemVisibility", 	Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::UGC_eventSetItemVisibility_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::UGC_eventSetItemVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_SetItemVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function SetItemVisibility ********************************************

// ********** Begin Class UUGC Function SetLanguage ************************************************
struct Z_Construct_UFunction_UUGC_SetLanguage_Statics
{
	struct UGC_eventSetLanguage_Parms
	{
		FUGCQueryHandle Handle;
		FString Language;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets the language to return the title and description in for the items on a pending UGC Query.\n\x09*\n\x09* This must be in the format of the API Language code.\n\x09* If this is not set then \"english\" is assumed.\n\x09* NOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09The UGC query Handle to customize.\n\x09* @param\x09Language\x09\x09The language to return.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the language to return the title and description in for the items on a pending UGC Query.\n\nThis must be in the format of the API Language code.\nIf this is not set then \"english\" is assumed.\nNOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\n@param        Handle                  The UGC query Handle to customize.\n@param        Language                The language to return." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetLanguage constinit property declarations ***************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetLanguage constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetLanguage Property Definitions **************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetLanguage_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventSetLanguage_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 1895647525
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_SetLanguage_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventSetLanguage_Parms, Language), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUGC_SetLanguage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGC_eventSetLanguage_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetLanguage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_eventSetLanguage_Parms), &Z_Construct_UFunction_UUGC_SetLanguage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetLanguage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetLanguage_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetLanguage_Statics::NewProp_Language,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetLanguage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetLanguage_Statics::PropPointers) < 2048);
// ********** End Function SetLanguage Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetLanguage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetLanguage", 	Z_Construct_UFunction_UUGC_SetLanguage_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetLanguage_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_SetLanguage_Statics::UGC_eventSetLanguage_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetLanguage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_SetLanguage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_SetLanguage_Statics::UGC_eventSetLanguage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_SetLanguage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_SetLanguage_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function SetLanguage **************************************************

// ********** Begin Class UUGC Function SetMatchAnyTag *********************************************
struct Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics
{
	struct UGC_eventSetMatchAnyTag_Parms
	{
		FUGCQueryHandle Handle;
		bool bMatchAnyTag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets whether workshop items will be returned if they have one or more matching tag, or if all tags need to match on a pending UGC Query.\n\x09*\n\x09* NOTE: This can only be used with CreateQueryAllUGCRequest!\n\x09* NOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09The UGC query Handle to customize.\n\x09* @param\x09""bMatchAnyTag\x09Should the item just need to have one required tag (true), or all of them? (false)\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets whether workshop items will be returned if they have one or more matching tag, or if all tags need to match on a pending UGC Query.\n\nNOTE: This can only be used with CreateQueryAllUGCRequest!\nNOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\n@param        Handle                  The UGC query Handle to customize.\n@param        bMatchAnyTag    Should the item just need to have one required tag (true), or all of them? (false)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetMatchAnyTag constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static void NewProp_bMatchAnyTag_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMatchAnyTag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetMatchAnyTag constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetMatchAnyTag Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventSetMatchAnyTag_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 1895647525
void Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::NewProp_bMatchAnyTag_SetBit(void* Obj)
{
	((UGC_eventSetMatchAnyTag_Parms*)Obj)->bMatchAnyTag = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::NewProp_bMatchAnyTag = { "bMatchAnyTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_eventSetMatchAnyTag_Parms), &Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::NewProp_bMatchAnyTag_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGC_eventSetMatchAnyTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_eventSetMatchAnyTag_Parms), &Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::NewProp_bMatchAnyTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::PropPointers) < 2048);
// ********** End Function SetMatchAnyTag Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetMatchAnyTag", 	Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::UGC_eventSetMatchAnyTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::UGC_eventSetMatchAnyTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_SetMatchAnyTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function SetMatchAnyTag ***********************************************

// ********** Begin Class UUGC Function SetRankedByTrendDays ***************************************
struct Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics
{
	struct UGC_eventSetRankedByTrendDays_Parms
	{
		FUGCQueryHandle Handle;
		int32 Days;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets whether the order of the results will be updated based on the rank of items over a number of days on a pending UGC Query.\n\x09*\n\x09* NOTE: This can only be used with CreateQueryAllUGCRequest!\n\x09* NOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\x09*\n\x09* @param\x09Handle\x09\x09The UGC query Handle to customize.\n\x09* @param\x09""Days\x09\x09Sets the number of days to rank items over. Valid Values are 1-365 inclusive.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets whether the order of the results will be updated based on the rank of items over a number of days on a pending UGC Query.\n\nNOTE: This can only be used with CreateQueryAllUGCRequest!\nNOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\n@param        Handle          The UGC query Handle to customize.\n@param        Days            Sets the number of days to rank items over. Valid Values are 1-365 inclusive." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetRankedByTrendDays constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Days;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetRankedByTrendDays constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetRankedByTrendDays Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventSetRankedByTrendDays_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 1895647525
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::NewProp_Days = { "Days", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventSetRankedByTrendDays_Parms, Days), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGC_eventSetRankedByTrendDays_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_eventSetRankedByTrendDays_Parms), &Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::NewProp_Days,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::PropPointers) < 2048);
// ********** End Function SetRankedByTrendDays Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetRankedByTrendDays", 	Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::UGC_eventSetRankedByTrendDays_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::UGC_eventSetRankedByTrendDays_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_SetRankedByTrendDays()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function SetRankedByTrendDays *****************************************

// ********** Begin Class UUGC Function SetReturnAdditionalPreviews ********************************
struct Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics
{
	struct UGC_eventSetReturnAdditionalPreviews_Parms
	{
		FUGCQueryHandle Handle;
		bool bReturnAdditionalPreviews;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets whether to return any additional images/videos attached to the items on a pending UGC Query.\n\x09*\n\x09* NOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\x09*\x09\n\x09* @param\x09Handle\x09\x09\x09\x09\x09\x09\x09The UGC query Handle to customize.\n\x09* @param\x09""bReturnAdditionalPreviews\x09\x09Return the additional previews for the items?\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets whether to return any additional images/videos attached to the items on a pending UGC Query.\n\nNOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\n@param        Handle                                                  The UGC query Handle to customize.\n@param        bReturnAdditionalPreviews               Return the additional previews for the items?" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetReturnAdditionalPreviews constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static void NewProp_bReturnAdditionalPreviews_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnAdditionalPreviews;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetReturnAdditionalPreviews constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetReturnAdditionalPreviews Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventSetReturnAdditionalPreviews_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 1895647525
void Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::NewProp_bReturnAdditionalPreviews_SetBit(void* Obj)
{
	((UGC_eventSetReturnAdditionalPreviews_Parms*)Obj)->bReturnAdditionalPreviews = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::NewProp_bReturnAdditionalPreviews = { "bReturnAdditionalPreviews", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_eventSetReturnAdditionalPreviews_Parms), &Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::NewProp_bReturnAdditionalPreviews_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGC_eventSetReturnAdditionalPreviews_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_eventSetReturnAdditionalPreviews_Parms), &Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::NewProp_bReturnAdditionalPreviews,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::PropPointers) < 2048);
// ********** End Function SetReturnAdditionalPreviews Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetReturnAdditionalPreviews", 	Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::UGC_eventSetReturnAdditionalPreviews_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::UGC_eventSetReturnAdditionalPreviews_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function SetReturnAdditionalPreviews **********************************

// ********** Begin Class UUGC Function SetReturnChildren ******************************************
struct Z_Construct_UFunction_UUGC_SetReturnChildren_Statics
{
	struct UGC_eventSetReturnChildren_Parms
	{
		FUGCQueryHandle Handle;
		bool bReturnChildren;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets whether to return the IDs of the child items of the items on a pending UGC Query.\n\x09*\n\x09* NOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\x09* \n\x09* @param\x09Handle\x09\x09\x09\x09The UGC query Handle to customize.\n\x09* @param\x09""bReturnChildren\x09\x09Return the IDs of children of the items?\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets whether to return the IDs of the child items of the items on a pending UGC Query.\n\nNOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\n@param        Handle                          The UGC query Handle to customize.\n@param        bReturnChildren         Return the IDs of children of the items?" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetReturnChildren constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static void NewProp_bReturnChildren_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnChildren;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetReturnChildren constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetReturnChildren Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventSetReturnChildren_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 1895647525
void Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::NewProp_bReturnChildren_SetBit(void* Obj)
{
	((UGC_eventSetReturnChildren_Parms*)Obj)->bReturnChildren = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::NewProp_bReturnChildren = { "bReturnChildren", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_eventSetReturnChildren_Parms), &Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::NewProp_bReturnChildren_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGC_eventSetReturnChildren_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_eventSetReturnChildren_Parms), &Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::NewProp_bReturnChildren,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::PropPointers) < 2048);
// ********** End Function SetReturnChildren Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetReturnChildren", 	Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::UGC_eventSetReturnChildren_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::UGC_eventSetReturnChildren_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_SetReturnChildren()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function SetReturnChildren ********************************************

// ********** Begin Class UUGC Function SetReturnKeyValueTags **************************************
struct Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics
{
	struct UGC_eventSetReturnKeyValueTags_Parms
	{
		FUGCQueryHandle Handle;
		bool bReturnKeyValueTags;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets whether to return any Key-Value tags for the items on a pending UGC Query.\n\x09*\n\x09* NOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\x09* \n\x09* @param\x09Handle\x09\x09\x09\x09\x09The UGC query Handle to customize.\n\x09* @param\x09""bReturnKeyValueTags\x09\x09Return any Key-Value tags for the items?\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets whether to return any Key-Value tags for the items on a pending UGC Query.\n\nNOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\n@param        Handle                                  The UGC query Handle to customize.\n@param        bReturnKeyValueTags             Return any Key-Value tags for the items?" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetReturnKeyValueTags constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static void NewProp_bReturnKeyValueTags_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnKeyValueTags;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetReturnKeyValueTags constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetReturnKeyValueTags Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventSetReturnKeyValueTags_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 1895647525
void Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::NewProp_bReturnKeyValueTags_SetBit(void* Obj)
{
	((UGC_eventSetReturnKeyValueTags_Parms*)Obj)->bReturnKeyValueTags = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::NewProp_bReturnKeyValueTags = { "bReturnKeyValueTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_eventSetReturnKeyValueTags_Parms), &Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::NewProp_bReturnKeyValueTags_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGC_eventSetReturnKeyValueTags_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_eventSetReturnKeyValueTags_Parms), &Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::NewProp_bReturnKeyValueTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::PropPointers) < 2048);
// ********** End Function SetReturnKeyValueTags Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetReturnKeyValueTags", 	Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::UGC_eventSetReturnKeyValueTags_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::UGC_eventSetReturnKeyValueTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_SetReturnKeyValueTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function SetReturnKeyValueTags ****************************************

// ********** Begin Class UUGC Function SetReturnLongDescription ***********************************
struct Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics
{
	struct UGC_eventSetReturnLongDescription_Parms
	{
		FUGCQueryHandle Handle;
		bool bReturnLongDescription;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets whether to return the full description for the items on a pending UGC Query.\n\x09*\n\x09* If you don't set this then you only receive the summary which is the description truncated at 255 bytes.\n\x09* NOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09\x09\x09The UGC query Handle to customize.\n\x09* @param\x09""bReturnLongDescription\x09\x09Return the long description for the items?\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets whether to return the full description for the items on a pending UGC Query.\n\nIf you don't set this then you only receive the summary which is the description truncated at 255 bytes.\nNOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\n@param        Handle                                          The UGC query Handle to customize.\n@param        bReturnLongDescription          Return the long description for the items?" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetReturnLongDescription constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static void NewProp_bReturnLongDescription_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnLongDescription;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetReturnLongDescription constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetReturnLongDescription Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventSetReturnLongDescription_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 1895647525
void Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::NewProp_bReturnLongDescription_SetBit(void* Obj)
{
	((UGC_eventSetReturnLongDescription_Parms*)Obj)->bReturnLongDescription = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::NewProp_bReturnLongDescription = { "bReturnLongDescription", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_eventSetReturnLongDescription_Parms), &Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::NewProp_bReturnLongDescription_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGC_eventSetReturnLongDescription_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_eventSetReturnLongDescription_Parms), &Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::NewProp_bReturnLongDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::PropPointers) < 2048);
// ********** End Function SetReturnLongDescription Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetReturnLongDescription", 	Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::UGC_eventSetReturnLongDescription_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::UGC_eventSetReturnLongDescription_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_SetReturnLongDescription()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function SetReturnLongDescription *************************************

// ********** Begin Class UUGC Function SetReturnMetadata ******************************************
struct Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics
{
	struct UGC_eventSetReturnMetadata_Parms
	{
		FUGCQueryHandle Handle;
		bool bReturnMetadata;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets whether to return the developer specified metadata for the items on a pending UGC Query.\n\x09*\n\x09* NOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09The UGC query Handle to customize.\n\x09* @param\x09""bReturnMetadata\x09\x09Return the metadata for the items? \n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets whether to return the developer specified metadata for the items on a pending UGC Query.\n\nNOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\n@param        Handle                          The UGC query Handle to customize.\n@param        bReturnMetadata         Return the metadata for the items?" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetReturnMetadata constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static void NewProp_bReturnMetadata_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnMetadata;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetReturnMetadata constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetReturnMetadata Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventSetReturnMetadata_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 1895647525
void Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::NewProp_bReturnMetadata_SetBit(void* Obj)
{
	((UGC_eventSetReturnMetadata_Parms*)Obj)->bReturnMetadata = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::NewProp_bReturnMetadata = { "bReturnMetadata", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_eventSetReturnMetadata_Parms), &Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::NewProp_bReturnMetadata_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGC_eventSetReturnMetadata_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_eventSetReturnMetadata_Parms), &Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::NewProp_bReturnMetadata,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::PropPointers) < 2048);
// ********** End Function SetReturnMetadata Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetReturnMetadata", 	Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::UGC_eventSetReturnMetadata_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::UGC_eventSetReturnMetadata_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_SetReturnMetadata()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function SetReturnMetadata ********************************************

// ********** Begin Class UUGC Function SetReturnOnlyIDs *******************************************
struct Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics
{
	struct UGC_eventSetReturnOnlyIDs_Parms
	{
		FUGCQueryHandle Handle;
		bool bReturnOnlyIDs;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* Sets whether to only return IDs instead of all the details on a pending UGC Query.\n\x09*\n\x09* This is useful for when you don't need all the information (e.g. you just want to get the IDs of the items a user has in their favorites list.)\n\x09* NOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09The UGC query Handle to customize.\n\x09* @param\x09""bReturnOnlyIDs\x09\x09Return only the IDs of items?\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets whether to only return IDs instead of all the details on a pending UGC Query.\n\nThis is useful for when you don't need all the information (e.g. you just want to get the IDs of the items a user has in their favorites list.)\nNOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\n@param        Handle                          The UGC query Handle to customize.\n@param        bReturnOnlyIDs          Return only the IDs of items?" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetReturnOnlyIDs constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static void NewProp_bReturnOnlyIDs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnOnlyIDs;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetReturnOnlyIDs constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetReturnOnlyIDs Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventSetReturnOnlyIDs_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 1895647525
void Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::NewProp_bReturnOnlyIDs_SetBit(void* Obj)
{
	((UGC_eventSetReturnOnlyIDs_Parms*)Obj)->bReturnOnlyIDs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::NewProp_bReturnOnlyIDs = { "bReturnOnlyIDs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_eventSetReturnOnlyIDs_Parms), &Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::NewProp_bReturnOnlyIDs_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGC_eventSetReturnOnlyIDs_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_eventSetReturnOnlyIDs_Parms), &Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::NewProp_bReturnOnlyIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::PropPointers) < 2048);
// ********** End Function SetReturnOnlyIDs Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetReturnOnlyIDs", 	Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::UGC_eventSetReturnOnlyIDs_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::UGC_eventSetReturnOnlyIDs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_SetReturnOnlyIDs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function SetReturnOnlyIDs *********************************************

// ********** Begin Class UUGC Function SetReturnPlaytimeStats *************************************
struct Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics
{
	struct UGC_eventSetReturnPlaytimeStats_Parms
	{
		FUGCQueryHandle Handle;
		int32 Days;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets whether to return the the playtime stats on a pending UGC Query.\n\x09*\n\x09* NOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09The UGC query Handle to customize.\n\x09* @param\x09""Days\x09\x09\x09The number of days worth of playtime stats to return.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets whether to return the the playtime stats on a pending UGC Query.\n\nNOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\n@param        Handle                  The UGC query Handle to customize.\n@param        Days                    The number of days worth of playtime stats to return." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetReturnPlaytimeStats constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Days;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetReturnPlaytimeStats constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetReturnPlaytimeStats Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventSetReturnPlaytimeStats_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 1895647525
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::NewProp_Days = { "Days", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventSetReturnPlaytimeStats_Parms, Days), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGC_eventSetReturnPlaytimeStats_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_eventSetReturnPlaytimeStats_Parms), &Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::NewProp_Days,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::PropPointers) < 2048);
// ********** End Function SetReturnPlaytimeStats Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetReturnPlaytimeStats", 	Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::UGC_eventSetReturnPlaytimeStats_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::UGC_eventSetReturnPlaytimeStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function SetReturnPlaytimeStats ***************************************

// ********** Begin Class UUGC Function SetReturnTotalOnly *****************************************
struct Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics
{
	struct UGC_eventSetReturnTotalOnly_Parms
	{
		FUGCQueryHandle Handle;
		bool bReturnTotalOnly;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets whether to only return the the total number of matching items on a pending UGC Query.\n\x09*\n\x09* The actual items will not be returned when SteamUGCQueryCompleted_t is called.\n\x09* NOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09The UGC query Handle to customize.\n\x09* @param\x09""bReturnTotalOnly\x09Only return the total number of items?\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets whether to only return the the total number of matching items on a pending UGC Query.\n\nThe actual items will not be returned when SteamUGCQueryCompleted_t is called.\nNOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\n@param        Handle                          The UGC query Handle to customize.\n@param        bReturnTotalOnly        Only return the total number of items?" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetReturnTotalOnly constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static void NewProp_bReturnTotalOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnTotalOnly;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetReturnTotalOnly constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetReturnTotalOnly Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventSetReturnTotalOnly_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 1895647525
void Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::NewProp_bReturnTotalOnly_SetBit(void* Obj)
{
	((UGC_eventSetReturnTotalOnly_Parms*)Obj)->bReturnTotalOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::NewProp_bReturnTotalOnly = { "bReturnTotalOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_eventSetReturnTotalOnly_Parms), &Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::NewProp_bReturnTotalOnly_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGC_eventSetReturnTotalOnly_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_eventSetReturnTotalOnly_Parms), &Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::NewProp_bReturnTotalOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::PropPointers) < 2048);
// ********** End Function SetReturnTotalOnly Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetReturnTotalOnly", 	Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::UGC_eventSetReturnTotalOnly_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::UGC_eventSetReturnTotalOnly_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_SetReturnTotalOnly()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function SetReturnTotalOnly *******************************************

// ********** Begin Class UUGC Function SetSearchText **********************************************
struct Z_Construct_UFunction_UUGC_SetSearchText_Statics
{
	struct UGC_eventSetSearchText_Parms
	{
		FUGCQueryHandle Handle;
		FString SearchText;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets a string to that items need to match in either the title or the description on a pending UGC Query.\n\x09*\n\x09* NOTE: This can only be used with CreateQueryAllUGCRequest!\n\x09* NOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\x09* \n\x09* @param\x09Handle\x09\x09\x09The UGC query Handle to customize.\n\x09* @param\x09SearchText\x09\x09The text to be searched for.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets a string to that items need to match in either the title or the description on a pending UGC Query.\n\nNOTE: This can only be used with CreateQueryAllUGCRequest!\nNOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.\n\n@param        Handle                  The UGC query Handle to customize.\n@param        SearchText              The text to be searched for." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetSearchText constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SearchText;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetSearchText constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetSearchText Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetSearchText_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventSetSearchText_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 1895647525
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_SetSearchText_Statics::NewProp_SearchText = { "SearchText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventSetSearchText_Parms, SearchText), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUGC_SetSearchText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGC_eventSetSearchText_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetSearchText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_eventSetSearchText_Parms), &Z_Construct_UFunction_UUGC_SetSearchText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetSearchText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetSearchText_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetSearchText_Statics::NewProp_SearchText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetSearchText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetSearchText_Statics::PropPointers) < 2048);
// ********** End Function SetSearchText Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetSearchText_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetSearchText", 	Z_Construct_UFunction_UUGC_SetSearchText_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetSearchText_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_SetSearchText_Statics::UGC_eventSetSearchText_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetSearchText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_SetSearchText_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_SetSearchText_Statics::UGC_eventSetSearchText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_SetSearchText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_SetSearchText_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function SetSearchText ************************************************

// ********** Begin Class UUGC Function SetUserItemVote ********************************************
struct Z_Construct_UFunction_UUGC_SetUserItemVote_Statics
{
	struct UGC_eventSetUserItemVote_Parms
	{
		FScriptDelegate Callback;
		FPublishedFileID PublishedFileID;
		bool bVoteUp;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Allows the user to rate a workshop item up or down.\n\x09*\n\x09* @param\x09PublishedFileID\x09\x09The workshop item ID to vote on.\n\x09* @param\x09""bVoteUp\x09\x09\x09\x09Vote up (true) or down (false)?\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allows the user to rate a workshop item up or down.\n\n@param        PublishedFileID         The workshop item ID to vote on.\n@param        bVoteUp                         Vote up (true) or down (false)?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetUserItemVote constinit property declarations ***********************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
	static void NewProp_bVoteUp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVoteUp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetUserItemVote constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetUserItemVote Property Definitions **********************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventSetUserItemVote_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnSetUserItemVote__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 3134504262
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventSetUserItemVote_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2947869779
void Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::NewProp_bVoteUp_SetBit(void* Obj)
{
	((UGC_eventSetUserItemVote_Parms*)Obj)->bVoteUp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::NewProp_bVoteUp = { "bVoteUp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_eventSetUserItemVote_Parms), &Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::NewProp_bVoteUp_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::NewProp_PublishedFileID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::NewProp_bVoteUp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::PropPointers) < 2048);
// ********** End Function SetUserItemVote Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetUserItemVote", 	Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::UGC_eventSetUserItemVote_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::UGC_eventSetUserItemVote_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_SetUserItemVote()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function SetUserItemVote **********************************************

// ********** Begin Class UUGC Function StartItemUpdate ********************************************
struct Z_Construct_UFunction_UUGC_StartItemUpdate_Statics
{
	struct UGC_eventStartItemUpdate_Parms
	{
		int32 ConsumerAppID;
		FPublishedFileID PublishedFileID;
		FUGCUpdateHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Starts the item update process.\n\x09*\n\x09* This gets you a Handle that you can use to modify the item before finally sending off the update to the server with SubmitItemUpdate.\n\x09*\n\x09* @param\x09""ConsumerAppID\x09\x09The App ID that will be using this item.\n\x09* @param\x09PublishedFileID\x09\x09The item to update.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Starts the item update process.\n\nThis gets you a Handle that you can use to modify the item before finally sending off the update to the server with SubmitItemUpdate.\n\n@param        ConsumerAppID           The App ID that will be using this item.\n@param        PublishedFileID         The item to update." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function StartItemUpdate constinit property declarations ***********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ConsumerAppID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StartItemUpdate constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StartItemUpdate Property Definitions **********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_StartItemUpdate_Statics::NewProp_ConsumerAppID = { "ConsumerAppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventStartItemUpdate_Parms, ConsumerAppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_StartItemUpdate_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventStartItemUpdate_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2947869779
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_StartItemUpdate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventStartItemUpdate_Parms, ReturnValue), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 1882179982
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_StartItemUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_StartItemUpdate_Statics::NewProp_ConsumerAppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_StartItemUpdate_Statics::NewProp_PublishedFileID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_StartItemUpdate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_StartItemUpdate_Statics::PropPointers) < 2048);
// ********** End Function StartItemUpdate Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_StartItemUpdate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "StartItemUpdate", 	Z_Construct_UFunction_UUGC_StartItemUpdate_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_StartItemUpdate_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_StartItemUpdate_Statics::UGC_eventStartItemUpdate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_StartItemUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_StartItemUpdate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_StartItemUpdate_Statics::UGC_eventStartItemUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_StartItemUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_StartItemUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function StartItemUpdate **********************************************

// ********** Begin Class UUGC Function StartPlaytimeTracking **************************************
struct Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics
{
	struct UGC_eventStartPlaytimeTracking_Parms
	{
		FScriptDelegate Callback;
		TArray<FPublishedFileID> PublishedFileID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Start tracking playtime on a set of workshop items.\n\x09*\n\x09* When your app shuts down, playtime tracking will automatically stop.\n\x09*\n\x09* @param\x09PublishedFileID\x09\x09The array of workshop items you want to start tracking. (Maximum of 100 items.)\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Start tracking playtime on a set of workshop items.\n\nWhen your app shuts down, playtime tracking will automatically stop.\n\n@param        PublishedFileID         The array of workshop items you want to start tracking. (Maximum of 100 items.)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function StartPlaytimeTracking constinit property declarations *****************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PublishedFileID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StartPlaytimeTracking constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StartPlaytimeTracking Property Definitions ****************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventStartPlaytimeTracking_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnStartPlaytimeTracking__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 1172385561
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::NewProp_PublishedFileID_Inner = { "PublishedFileID", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2947869779
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventStartPlaytimeTracking_Parms, PublishedFileID), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2947869779
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::NewProp_PublishedFileID_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::NewProp_PublishedFileID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::PropPointers) < 2048);
// ********** End Function StartPlaytimeTracking Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "StartPlaytimeTracking", 	Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::UGC_eventStartPlaytimeTracking_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::UGC_eventStartPlaytimeTracking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_StartPlaytimeTracking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function StartPlaytimeTracking ****************************************

// ********** Begin Class UUGC Function StopPlaytimeTracking ***************************************
struct Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics
{
	struct UGC_eventStopPlaytimeTracking_Parms
	{
		FScriptDelegate Callback;
		TArray<FPublishedFileID> PublishedFileIDs;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Stop tracking playtime on a set of workshop items.\n\x09*\n\x09* When your app shuts down, playtime tracking will automatically stop.\n\x09*\n\x09* @param\x09PublishedFileIDs\x09The array of workshop items you want to stop tracking. (Maximum of 100 items.)\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stop tracking playtime on a set of workshop items.\n\nWhen your app shuts down, playtime tracking will automatically stop.\n\n@param        PublishedFileIDs        The array of workshop items you want to stop tracking. (Maximum of 100 items.)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function StopPlaytimeTracking constinit property declarations ******************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PublishedFileIDs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StopPlaytimeTracking constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StopPlaytimeTracking Property Definitions *****************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventStopPlaytimeTracking_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnStopPlaytimeTracking__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 3079101904
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::NewProp_PublishedFileIDs_Inner = { "PublishedFileIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2947869779
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::NewProp_PublishedFileIDs = { "PublishedFileIDs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventStopPlaytimeTracking_Parms, PublishedFileIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2947869779
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::NewProp_PublishedFileIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::NewProp_PublishedFileIDs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::PropPointers) < 2048);
// ********** End Function StopPlaytimeTracking Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "StopPlaytimeTracking", 	Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::UGC_eventStopPlaytimeTracking_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::UGC_eventStopPlaytimeTracking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_StopPlaytimeTracking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function StopPlaytimeTracking *****************************************

// ********** Begin Class UUGC Function StopPlaytimeTrackingForAllItems ****************************
struct Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems_Statics
{
	struct UGC_eventStopPlaytimeTrackingForAllItems_Parms
	{
		FScriptDelegate Callback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Stop tracking playtime of all workshop items.\n\x09*\n\x09* When your app shuts down, playtime tracking will automatically stop.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stop tracking playtime of all workshop items.\n\nWhen your app shuts down, playtime tracking will automatically stop." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function StopPlaytimeTrackingForAllItems constinit property declarations *******
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StopPlaytimeTrackingForAllItems constinit property declarations *********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StopPlaytimeTrackingForAllItems Property Definitions ******************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventStopPlaytimeTrackingForAllItems_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnStopPlaytimeTrackingForAllItems__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 74037722
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems_Statics::NewProp_Callback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems_Statics::PropPointers) < 2048);
// ********** End Function StopPlaytimeTrackingForAllItems Property Definitions ********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "StopPlaytimeTrackingForAllItems", 	Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems_Statics::UGC_eventStopPlaytimeTrackingForAllItems_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems_Statics::UGC_eventStopPlaytimeTrackingForAllItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUGC::execStopPlaytimeTrackingForAllItems)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopPlaytimeTrackingForAllItems(FOnStopPlaytimeTrackingForAllItems(Z_Param_Out_Callback));
	P_NATIVE_END;
}
// ********** End Class UUGC Function StopPlaytimeTrackingForAllItems ******************************

// ********** Begin Class UUGC Function SubmitItemUpdate *******************************************
struct Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics
{
	struct UGC_eventSubmitItemUpdate_Parms
	{
		FScriptDelegate Callback;
		FUGCUpdateHandle Handle;
		FString ChangeNote;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Uploads the changes made to an item to the Steam Workshop.\n\x09*\n\x09* You can track the progress of an item update with GetItemUpdateProgress.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09The update Handle to submit.\n\x09* @param\x09""ChangeNote\x09\x09""A brief description of the changes made. (Optional, set to NULL for no change note)\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Uploads the changes made to an item to the Steam Workshop.\n\nYou can track the progress of an item update with GetItemUpdateProgress.\n\n@param        Handle                  The update Handle to submit.\n@param        ChangeNote              A brief description of the changes made. (Optional, set to NULL for no change note)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SubmitItemUpdate constinit property declarations **********************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ChangeNote;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SubmitItemUpdate constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SubmitItemUpdate Property Definitions *********************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventSubmitItemUpdate_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnSubmitItemUpdate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2212663435
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventSubmitItemUpdate_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 1882179982
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::NewProp_ChangeNote = { "ChangeNote", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventSubmitItemUpdate_Parms, ChangeNote), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::NewProp_ChangeNote,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::PropPointers) < 2048);
// ********** End Function SubmitItemUpdate Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SubmitItemUpdate", 	Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::UGC_eventSubmitItemUpdate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::UGC_eventSubmitItemUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_SubmitItemUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function SubmitItemUpdate *********************************************

// ********** Begin Class UUGC Function SubscribeItem **********************************************
struct Z_Construct_UFunction_UUGC_SubscribeItem_Statics
{
	struct UGC_eventSubscribeItem_Parms
	{
		FScriptDelegate Callback;
		FPublishedFileID PublishedFileID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Subscribe to a workshop item. It will be downloaded and installed as soon as possible.\n\x09*\n\x09* @param\x09PublishedFileID\x09\x09The workshop item to subscribe to.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Subscribe to a workshop item. It will be downloaded and installed as soon as possible.\n\n@param        PublishedFileID         The workshop item to subscribe to." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SubscribeItem constinit property declarations *************************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SubscribeItem constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SubscribeItem Property Definitions ************************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_SubscribeItem_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventSubscribeItem_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnSubscribeItem__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2654059749
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SubscribeItem_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventSubscribeItem_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2947869779
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SubscribeItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SubscribeItem_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SubscribeItem_Statics::NewProp_PublishedFileID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SubscribeItem_Statics::PropPointers) < 2048);
// ********** End Function SubscribeItem Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SubscribeItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SubscribeItem", 	Z_Construct_UFunction_UUGC_SubscribeItem_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SubscribeItem_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_SubscribeItem_Statics::UGC_eventSubscribeItem_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SubscribeItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_SubscribeItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_SubscribeItem_Statics::UGC_eventSubscribeItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_SubscribeItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_SubscribeItem_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function SubscribeItem ************************************************

// ********** Begin Class UUGC Function SuspendDownloads *******************************************
struct Z_Construct_UFunction_UUGC_SuspendDownloads_Statics
{
	struct UGC_eventSuspendDownloads_Parms
	{
		bool bSuspend;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Suspends and resumes all workshop downloads.\n\x09*\n\x09* If you call this with bSuspend set to true then downloads will be suspended until you resume them by setting bSuspend to false or when the game ends.\n\x09*\n\x09* @param\x09""bSuspend\x09Suspend (true) or Resume (false) workshop downloads?\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Suspends and resumes all workshop downloads.\n\nIf you call this with bSuspend set to true then downloads will be suspended until you resume them by setting bSuspend to false or when the game ends.\n\n@param        bSuspend        Suspend (true) or Resume (false) workshop downloads?" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SuspendDownloads constinit property declarations **********************
	static void NewProp_bSuspend_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuspend;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SuspendDownloads constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SuspendDownloads Property Definitions *********************************
void Z_Construct_UFunction_UUGC_SuspendDownloads_Statics::NewProp_bSuspend_SetBit(void* Obj)
{
	((UGC_eventSuspendDownloads_Parms*)Obj)->bSuspend = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SuspendDownloads_Statics::NewProp_bSuspend = { "bSuspend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_eventSuspendDownloads_Parms), &Z_Construct_UFunction_UUGC_SuspendDownloads_Statics::NewProp_bSuspend_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SuspendDownloads_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SuspendDownloads_Statics::NewProp_bSuspend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SuspendDownloads_Statics::PropPointers) < 2048);
// ********** End Function SuspendDownloads Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SuspendDownloads_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SuspendDownloads", 	Z_Construct_UFunction_UUGC_SuspendDownloads_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SuspendDownloads_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_SuspendDownloads_Statics::UGC_eventSuspendDownloads_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SuspendDownloads_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_SuspendDownloads_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_SuspendDownloads_Statics::UGC_eventSuspendDownloads_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_SuspendDownloads()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_SuspendDownloads_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUGC::execSuspendDownloads)
{
	P_GET_UBOOL(Z_Param_bSuspend);
	P_FINISH;
	P_NATIVE_BEGIN;
	UUGC::SuspendDownloads(Z_Param_bSuspend);
	P_NATIVE_END;
}
// ********** End Class UUGC Function SuspendDownloads *********************************************

// ********** Begin Class UUGC Function UnsubscribeItem ********************************************
struct Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics
{
	struct UGC_eventUnsubscribeItem_Parms
	{
		FScriptDelegate Callback;
		FPublishedFileID PublishedFileID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Unsubscribe from a workshop item. This will result in the item being removed after the game quits.\n\x09*\n\x09* @param\x09PublishedFileID\x09\x09The workshop item to unsubscribe from.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unsubscribe from a workshop item. This will result in the item being removed after the game quits.\n\n@param        PublishedFileID         The workshop item to unsubscribe from." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function UnsubscribeItem constinit property declarations ***********************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UnsubscribeItem constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UnsubscribeItem Property Definitions **********************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventUnsubscribeItem_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnUnsubscribeItem__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2783164625
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventUnsubscribeItem_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2947869779
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics::NewProp_PublishedFileID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics::PropPointers) < 2048);
// ********** End Function UnsubscribeItem Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "UnsubscribeItem", 	Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics::UGC_eventUnsubscribeItem_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics::UGC_eventUnsubscribeItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_UnsubscribeItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function UnsubscribeItem **********************************************

// ********** Begin Class UUGC Function UpdateItemPreviewFile **************************************
struct Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics
{
	struct UGC_eventUpdateItemPreviewFile_Parms
	{
		FUGCUpdateHandle Handle;
		int32 index;
		FString PreviewFile;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Updates an existing additional preview file for the item.\n\x09*\n\x09* If the preview type is an image then the format should be one that both the web and the application (if necessary) can render, and must be under 1MB. Suggested formats include JPG, PNG and GIF.\n\x09* NOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09The workshop item update Handle to customize.\n\x09* @param\x09index\x09\x09\x09The index of the preview file from 0 to GetQueryUGCNumAdditionalPreviews.\n\x09* @param\x09PreviewFile\x09\x09""Absolute path to the local image.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Updates an existing additional preview file for the item.\n\nIf the preview type is an image then the format should be one that both the web and the application (if necessary) can render, and must be under 1MB. Suggested formats include JPG, PNG and GIF.\nNOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\n@param        Handle                  The workshop item update Handle to customize.\n@param        index                   The index of the preview file from 0 to GetQueryUGCNumAdditionalPreviews.\n@param        PreviewFile             Absolute path to the local image." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateItemPreviewFile constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_index;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PreviewFile;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UpdateItemPreviewFile constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UpdateItemPreviewFile Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventUpdateItemPreviewFile_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 1882179982
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventUpdateItemPreviewFile_Parms, index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::NewProp_PreviewFile = { "PreviewFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventUpdateItemPreviewFile_Parms, PreviewFile), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGC_eventUpdateItemPreviewFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_eventUpdateItemPreviewFile_Parms), &Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::NewProp_index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::NewProp_PreviewFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::PropPointers) < 2048);
// ********** End Function UpdateItemPreviewFile Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "UpdateItemPreviewFile", 	Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::UGC_eventUpdateItemPreviewFile_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::UGC_eventUpdateItemPreviewFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_UpdateItemPreviewFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGC Function UpdateItemPreviewFile ****************************************

// ********** Begin Class UUGC Function UpdateItemPreviewVideo *************************************
struct Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics
{
	struct UGC_eventUpdateItemPreviewVideo_Parms
	{
		FUGCUpdateHandle Handle;
		int32 Index;
		FString PreviewVideo;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Updates an additional video preview from YouTube for the item.\n\x09*\n\x09* NOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09The workshop item update Handle to customize.\n\x09* @param\x09Index\x09\x09\x09\x09The index of the preview file from 0 to GetQueryUGCNumAdditionalPreviews.\n\x09* @param\x09PreviewVideo\x09\x09The YouTube video to add. (e.g. \"jHgZh4GV9G0\")\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Updates an additional video preview from YouTube for the item.\n\nNOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.\n\n@param        Handle                          The workshop item update Handle to customize.\n@param        Index                           The index of the preview file from 0 to GetQueryUGCNumAdditionalPreviews.\n@param        PreviewVideo            The YouTube video to add. (e.g. \"jHgZh4GV9G0\")" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateItemPreviewVideo constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PreviewVideo;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UpdateItemPreviewVideo constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UpdateItemPreviewVideo Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventUpdateItemPreviewVideo_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 1882179982
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventUpdateItemPreviewVideo_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::NewProp_PreviewVideo = { "PreviewVideo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGC_eventUpdateItemPreviewVideo_Parms, PreviewVideo), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGC_eventUpdateItemPreviewVideo_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGC_eventUpdateItemPreviewVideo_Parms), &Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::NewProp_PreviewVideo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::PropPointers) < 2048);
// ********** End Function UpdateItemPreviewVideo Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "UpdateItemPreviewVideo", 	Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::UGC_eventUpdateItemPreviewVideo_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::UGC_eventUpdateItemPreviewVideo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::FuncParams);
	}
	return ReturnFunction;
}
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
// ********** End Class UUGC Function UpdateItemPreviewVideo ***************************************

// ********** Begin Class UUGC *********************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UUGC;
UClass* UUGC::GetPrivateStaticClass()
{
	using TClass = UUGC;
	if (!Z_Registration_Info_UClass_UUGC.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("UGC"),
			Z_Registration_Info_UClass_UUGC.InnerSingleton,
			StaticRegisterNativesUUGC,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UUGC.InnerSingleton;
}
UClass* Z_Construct_UClass_UUGC_NoRegister()
{
	return UUGC::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUGC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamUGC/SteamUGC.h" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemInstalled_MetaData[] = {
		{ "Category", "SteamCore|UGC|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DownloadItemResult_MetaData[] = {
		{ "Category", "SteamCore|UGC|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserSubscribedItemsListChanged_MetaData[] = {
		{ "Category", "SteamCore|UGC|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUGC/SteamUGC.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UUGC constinit property declarations *************************************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ItemInstalled;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_DownloadItemResult;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_UserSubscribedItemsListChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UUGC constinit property declarations ***************************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddAppDependency"), .Pointer = &UUGC::execAddAppDependency },
		{ .NameUTF8 = UTF8TEXT("AddDependency"), .Pointer = &UUGC::execAddDependency },
		{ .NameUTF8 = UTF8TEXT("AddExcludedTag"), .Pointer = &UUGC::execAddExcludedTag },
		{ .NameUTF8 = UTF8TEXT("AddItemKeyValueTag"), .Pointer = &UUGC::execAddItemKeyValueTag },
		{ .NameUTF8 = UTF8TEXT("AddItemPreviewFile"), .Pointer = &UUGC::execAddItemPreviewFile },
		{ .NameUTF8 = UTF8TEXT("AddItemPreviewVideo"), .Pointer = &UUGC::execAddItemPreviewVideo },
		{ .NameUTF8 = UTF8TEXT("AddItemToFavorites"), .Pointer = &UUGC::execAddItemToFavorites },
		{ .NameUTF8 = UTF8TEXT("AddRequiredKeyValueTag"), .Pointer = &UUGC::execAddRequiredKeyValueTag },
		{ .NameUTF8 = UTF8TEXT("AddRequiredTag"), .Pointer = &UUGC::execAddRequiredTag },
		{ .NameUTF8 = UTF8TEXT("AddRequiredTagGroup"), .Pointer = &UUGC::execAddRequiredTagGroup },
		{ .NameUTF8 = UTF8TEXT("BInitWorkshopForGameServer"), .Pointer = &UUGC::execBInitWorkshopForGameServer },
		{ .NameUTF8 = UTF8TEXT("CreateItem"), .Pointer = &UUGC::execCreateItem },
		{ .NameUTF8 = UTF8TEXT("CreateQueryAllUGCRequest"), .Pointer = &UUGC::execCreateQueryAllUGCRequest },
		{ .NameUTF8 = UTF8TEXT("CreateQueryUGCDetailsRequest"), .Pointer = &UUGC::execCreateQueryUGCDetailsRequest },
		{ .NameUTF8 = UTF8TEXT("CreateQueryUserUGCRequest"), .Pointer = &UUGC::execCreateQueryUserUGCRequest },
		{ .NameUTF8 = UTF8TEXT("DeleteItem"), .Pointer = &UUGC::execDeleteItem },
		{ .NameUTF8 = UTF8TEXT("DownloadItem"), .Pointer = &UUGC::execDownloadItem },
		{ .NameUTF8 = UTF8TEXT("GetAppDependencies"), .Pointer = &UUGC::execGetAppDependencies },
		{ .NameUTF8 = UTF8TEXT("GetItemDownloadInfo"), .Pointer = &UUGC::execGetItemDownloadInfo },
		{ .NameUTF8 = UTF8TEXT("GetItemInstallInfo"), .Pointer = &UUGC::execGetItemInstallInfo },
		{ .NameUTF8 = UTF8TEXT("GetItemState"), .Pointer = &UUGC::execGetItemState },
		{ .NameUTF8 = UTF8TEXT("GetItemUpdateProgress"), .Pointer = &UUGC::execGetItemUpdateProgress },
		{ .NameUTF8 = UTF8TEXT("GetNumSubscribedItems"), .Pointer = &UUGC::execGetNumSubscribedItems },
		{ .NameUTF8 = UTF8TEXT("GetQueryUGCAdditionalPreview"), .Pointer = &UUGC::execGetQueryUGCAdditionalPreview },
		{ .NameUTF8 = UTF8TEXT("GetQueryUGCChildren"), .Pointer = &UUGC::execGetQueryUGCChildren },
		{ .NameUTF8 = UTF8TEXT("GetQueryUGCKeyValueTag"), .Pointer = &UUGC::execGetQueryUGCKeyValueTag },
		{ .NameUTF8 = UTF8TEXT("GetQueryUGCMetadata"), .Pointer = &UUGC::execGetQueryUGCMetadata },
		{ .NameUTF8 = UTF8TEXT("GetQueryUGCNumAdditionalPreviews"), .Pointer = &UUGC::execGetQueryUGCNumAdditionalPreviews },
		{ .NameUTF8 = UTF8TEXT("GetQueryUGCNumKeyValueTags"), .Pointer = &UUGC::execGetQueryUGCNumKeyValueTags },
		{ .NameUTF8 = UTF8TEXT("GetQueryUGCNumTags"), .Pointer = &UUGC::execGetQueryUGCNumTags },
		{ .NameUTF8 = UTF8TEXT("GetQueryUGCPreviewURL"), .Pointer = &UUGC::execGetQueryUGCPreviewURL },
		{ .NameUTF8 = UTF8TEXT("GetQueryUGCResult"), .Pointer = &UUGC::execGetQueryUGCResult },
		{ .NameUTF8 = UTF8TEXT("GetQueryUGCStatistic"), .Pointer = &UUGC::execGetQueryUGCStatistic },
		{ .NameUTF8 = UTF8TEXT("GetQueryUGCTag"), .Pointer = &UUGC::execGetQueryUGCTag },
		{ .NameUTF8 = UTF8TEXT("GetQueryUGCTagDisplayName"), .Pointer = &UUGC::execGetQueryUGCTagDisplayName },
		{ .NameUTF8 = UTF8TEXT("GetSubscribedItems"), .Pointer = &UUGC::execGetSubscribedItems },
		{ .NameUTF8 = UTF8TEXT("GetUserItemVote"), .Pointer = &UUGC::execGetUserItemVote },
		{ .NameUTF8 = UTF8TEXT("ReleaseQueryUGCRequest"), .Pointer = &UUGC::execReleaseQueryUGCRequest },
		{ .NameUTF8 = UTF8TEXT("RemoveAppDependency"), .Pointer = &UUGC::execRemoveAppDependency },
		{ .NameUTF8 = UTF8TEXT("RemoveDependency"), .Pointer = &UUGC::execRemoveDependency },
		{ .NameUTF8 = UTF8TEXT("RemoveItemFromFavorites"), .Pointer = &UUGC::execRemoveItemFromFavorites },
		{ .NameUTF8 = UTF8TEXT("RemoveItemKeyValueTags"), .Pointer = &UUGC::execRemoveItemKeyValueTags },
		{ .NameUTF8 = UTF8TEXT("RemoveItemPreview"), .Pointer = &UUGC::execRemoveItemPreview },
		{ .NameUTF8 = UTF8TEXT("SendQueryUGCRequest"), .Pointer = &UUGC::execSendQueryUGCRequest },
		{ .NameUTF8 = UTF8TEXT("SetAllowCachedResponse"), .Pointer = &UUGC::execSetAllowCachedResponse },
		{ .NameUTF8 = UTF8TEXT("SetAllowLegacyUpload"), .Pointer = &UUGC::execSetAllowLegacyUpload },
		{ .NameUTF8 = UTF8TEXT("SetCloudFileNameFilter"), .Pointer = &UUGC::execSetCloudFileNameFilter },
		{ .NameUTF8 = UTF8TEXT("SetItemContent"), .Pointer = &UUGC::execSetItemContent },
		{ .NameUTF8 = UTF8TEXT("SetItemDescription"), .Pointer = &UUGC::execSetItemDescription },
		{ .NameUTF8 = UTF8TEXT("SetItemMetadata"), .Pointer = &UUGC::execSetItemMetadata },
		{ .NameUTF8 = UTF8TEXT("SetItemPreview"), .Pointer = &UUGC::execSetItemPreview },
		{ .NameUTF8 = UTF8TEXT("SetItemTags"), .Pointer = &UUGC::execSetItemTags },
		{ .NameUTF8 = UTF8TEXT("SetItemTitle"), .Pointer = &UUGC::execSetItemTitle },
		{ .NameUTF8 = UTF8TEXT("SetItemUpdateLanguage"), .Pointer = &UUGC::execSetItemUpdateLanguage },
		{ .NameUTF8 = UTF8TEXT("SetItemVisibility"), .Pointer = &UUGC::execSetItemVisibility },
		{ .NameUTF8 = UTF8TEXT("SetLanguage"), .Pointer = &UUGC::execSetLanguage },
		{ .NameUTF8 = UTF8TEXT("SetMatchAnyTag"), .Pointer = &UUGC::execSetMatchAnyTag },
		{ .NameUTF8 = UTF8TEXT("SetRankedByTrendDays"), .Pointer = &UUGC::execSetRankedByTrendDays },
		{ .NameUTF8 = UTF8TEXT("SetReturnAdditionalPreviews"), .Pointer = &UUGC::execSetReturnAdditionalPreviews },
		{ .NameUTF8 = UTF8TEXT("SetReturnChildren"), .Pointer = &UUGC::execSetReturnChildren },
		{ .NameUTF8 = UTF8TEXT("SetReturnKeyValueTags"), .Pointer = &UUGC::execSetReturnKeyValueTags },
		{ .NameUTF8 = UTF8TEXT("SetReturnLongDescription"), .Pointer = &UUGC::execSetReturnLongDescription },
		{ .NameUTF8 = UTF8TEXT("SetReturnMetadata"), .Pointer = &UUGC::execSetReturnMetadata },
		{ .NameUTF8 = UTF8TEXT("SetReturnOnlyIDs"), .Pointer = &UUGC::execSetReturnOnlyIDs },
		{ .NameUTF8 = UTF8TEXT("SetReturnPlaytimeStats"), .Pointer = &UUGC::execSetReturnPlaytimeStats },
		{ .NameUTF8 = UTF8TEXT("SetReturnTotalOnly"), .Pointer = &UUGC::execSetReturnTotalOnly },
		{ .NameUTF8 = UTF8TEXT("SetSearchText"), .Pointer = &UUGC::execSetSearchText },
		{ .NameUTF8 = UTF8TEXT("SetUserItemVote"), .Pointer = &UUGC::execSetUserItemVote },
		{ .NameUTF8 = UTF8TEXT("StartItemUpdate"), .Pointer = &UUGC::execStartItemUpdate },
		{ .NameUTF8 = UTF8TEXT("StartPlaytimeTracking"), .Pointer = &UUGC::execStartPlaytimeTracking },
		{ .NameUTF8 = UTF8TEXT("StopPlaytimeTracking"), .Pointer = &UUGC::execStopPlaytimeTracking },
		{ .NameUTF8 = UTF8TEXT("StopPlaytimeTrackingForAllItems"), .Pointer = &UUGC::execStopPlaytimeTrackingForAllItems },
		{ .NameUTF8 = UTF8TEXT("SubmitItemUpdate"), .Pointer = &UUGC::execSubmitItemUpdate },
		{ .NameUTF8 = UTF8TEXT("SubscribeItem"), .Pointer = &UUGC::execSubscribeItem },
		{ .NameUTF8 = UTF8TEXT("SuspendDownloads"), .Pointer = &UUGC::execSuspendDownloads },
		{ .NameUTF8 = UTF8TEXT("UnsubscribeItem"), .Pointer = &UUGC::execUnsubscribeItem },
		{ .NameUTF8 = UTF8TEXT("UpdateItemPreviewFile"), .Pointer = &UUGC::execUpdateItemPreviewFile },
		{ .NameUTF8 = UTF8TEXT("UpdateItemPreviewVideo"), .Pointer = &UUGC::execUpdateItemPreviewVideo },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUGC_AddAppDependency, "AddAppDependency" }, // 2726487841
		{ &Z_Construct_UFunction_UUGC_AddDependency, "AddDependency" }, // 4128018303
		{ &Z_Construct_UFunction_UUGC_AddExcludedTag, "AddExcludedTag" }, // 3865725947
		{ &Z_Construct_UFunction_UUGC_AddItemKeyValueTag, "AddItemKeyValueTag" }, // 1130608118
		{ &Z_Construct_UFunction_UUGC_AddItemPreviewFile, "AddItemPreviewFile" }, // 85380047
		{ &Z_Construct_UFunction_UUGC_AddItemPreviewVideo, "AddItemPreviewVideo" }, // 2843285816
		{ &Z_Construct_UFunction_UUGC_AddItemToFavorites, "AddItemToFavorites" }, // 2755751261
		{ &Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag, "AddRequiredKeyValueTag" }, // 3732520209
		{ &Z_Construct_UFunction_UUGC_AddRequiredTag, "AddRequiredTag" }, // 3564160534
		{ &Z_Construct_UFunction_UUGC_AddRequiredTagGroup, "AddRequiredTagGroup" }, // 2026815871
		{ &Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer, "BInitWorkshopForGameServer" }, // 1052424882
		{ &Z_Construct_UFunction_UUGC_CreateItem, "CreateItem" }, // 3832997370
		{ &Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest, "CreateQueryAllUGCRequest" }, // 3566273325
		{ &Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest, "CreateQueryUGCDetailsRequest" }, // 3711101558
		{ &Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest, "CreateQueryUserUGCRequest" }, // 1792359264
		{ &Z_Construct_UFunction_UUGC_DeleteItem, "DeleteItem" }, // 3425034598
		{ &Z_Construct_UFunction_UUGC_DownloadItem, "DownloadItem" }, // 942078774
		{ &Z_Construct_UFunction_UUGC_GetAppDependencies, "GetAppDependencies" }, // 824100292
		{ &Z_Construct_UFunction_UUGC_GetItemDownloadInfo, "GetItemDownloadInfo" }, // 2257335813
		{ &Z_Construct_UFunction_UUGC_GetItemInstallInfo, "GetItemInstallInfo" }, // 2647485431
		{ &Z_Construct_UFunction_UUGC_GetItemState, "GetItemState" }, // 3692123441
		{ &Z_Construct_UFunction_UUGC_GetItemUpdateProgress, "GetItemUpdateProgress" }, // 1889876484
		{ &Z_Construct_UFunction_UUGC_GetNumSubscribedItems, "GetNumSubscribedItems" }, // 605618349
		{ &Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview, "GetQueryUGCAdditionalPreview" }, // 3003862533
		{ &Z_Construct_UFunction_UUGC_GetQueryUGCChildren, "GetQueryUGCChildren" }, // 926847674
		{ &Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag, "GetQueryUGCKeyValueTag" }, // 3969088515
		{ &Z_Construct_UFunction_UUGC_GetQueryUGCMetadata, "GetQueryUGCMetadata" }, // 3845128950
		{ &Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews, "GetQueryUGCNumAdditionalPreviews" }, // 1714652044
		{ &Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags, "GetQueryUGCNumKeyValueTags" }, // 2852898256
		{ &Z_Construct_UFunction_UUGC_GetQueryUGCNumTags, "GetQueryUGCNumTags" }, // 1215931791
		{ &Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL, "GetQueryUGCPreviewURL" }, // 2829866190
		{ &Z_Construct_UFunction_UUGC_GetQueryUGCResult, "GetQueryUGCResult" }, // 3297879985
		{ &Z_Construct_UFunction_UUGC_GetQueryUGCStatistic, "GetQueryUGCStatistic" }, // 1569274170
		{ &Z_Construct_UFunction_UUGC_GetQueryUGCTag, "GetQueryUGCTag" }, // 88678694
		{ &Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName, "GetQueryUGCTagDisplayName" }, // 2016783742
		{ &Z_Construct_UFunction_UUGC_GetSubscribedItems, "GetSubscribedItems" }, // 2794477692
		{ &Z_Construct_UFunction_UUGC_GetUserItemVote, "GetUserItemVote" }, // 133605719
		{ &Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest, "ReleaseQueryUGCRequest" }, // 1866595764
		{ &Z_Construct_UFunction_UUGC_RemoveAppDependency, "RemoveAppDependency" }, // 3917845837
		{ &Z_Construct_UFunction_UUGC_RemoveDependency, "RemoveDependency" }, // 2619241747
		{ &Z_Construct_UFunction_UUGC_RemoveItemFromFavorites, "RemoveItemFromFavorites" }, // 2061484304
		{ &Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags, "RemoveItemKeyValueTags" }, // 1004370685
		{ &Z_Construct_UFunction_UUGC_RemoveItemPreview, "RemoveItemPreview" }, // 2796673364
		{ &Z_Construct_UFunction_UUGC_SendQueryUGCRequest, "SendQueryUGCRequest" }, // 4253788048
		{ &Z_Construct_UFunction_UUGC_SetAllowCachedResponse, "SetAllowCachedResponse" }, // 1534695857
		{ &Z_Construct_UFunction_UUGC_SetAllowLegacyUpload, "SetAllowLegacyUpload" }, // 1181365306
		{ &Z_Construct_UFunction_UUGC_SetCloudFileNameFilter, "SetCloudFileNameFilter" }, // 2588119006
		{ &Z_Construct_UFunction_UUGC_SetItemContent, "SetItemContent" }, // 2081465715
		{ &Z_Construct_UFunction_UUGC_SetItemDescription, "SetItemDescription" }, // 1261048736
		{ &Z_Construct_UFunction_UUGC_SetItemMetadata, "SetItemMetadata" }, // 901753703
		{ &Z_Construct_UFunction_UUGC_SetItemPreview, "SetItemPreview" }, // 1897217085
		{ &Z_Construct_UFunction_UUGC_SetItemTags, "SetItemTags" }, // 3192296692
		{ &Z_Construct_UFunction_UUGC_SetItemTitle, "SetItemTitle" }, // 4210365810
		{ &Z_Construct_UFunction_UUGC_SetItemUpdateLanguage, "SetItemUpdateLanguage" }, // 2764031213
		{ &Z_Construct_UFunction_UUGC_SetItemVisibility, "SetItemVisibility" }, // 3120065320
		{ &Z_Construct_UFunction_UUGC_SetLanguage, "SetLanguage" }, // 3053611473
		{ &Z_Construct_UFunction_UUGC_SetMatchAnyTag, "SetMatchAnyTag" }, // 465781490
		{ &Z_Construct_UFunction_UUGC_SetRankedByTrendDays, "SetRankedByTrendDays" }, // 3305824178
		{ &Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews, "SetReturnAdditionalPreviews" }, // 3317965043
		{ &Z_Construct_UFunction_UUGC_SetReturnChildren, "SetReturnChildren" }, // 2168029869
		{ &Z_Construct_UFunction_UUGC_SetReturnKeyValueTags, "SetReturnKeyValueTags" }, // 4227789401
		{ &Z_Construct_UFunction_UUGC_SetReturnLongDescription, "SetReturnLongDescription" }, // 208546068
		{ &Z_Construct_UFunction_UUGC_SetReturnMetadata, "SetReturnMetadata" }, // 3674168391
		{ &Z_Construct_UFunction_UUGC_SetReturnOnlyIDs, "SetReturnOnlyIDs" }, // 1193003311
		{ &Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats, "SetReturnPlaytimeStats" }, // 2338319451
		{ &Z_Construct_UFunction_UUGC_SetReturnTotalOnly, "SetReturnTotalOnly" }, // 1463449203
		{ &Z_Construct_UFunction_UUGC_SetSearchText, "SetSearchText" }, // 977917981
		{ &Z_Construct_UFunction_UUGC_SetUserItemVote, "SetUserItemVote" }, // 1109796343
		{ &Z_Construct_UFunction_UUGC_StartItemUpdate, "StartItemUpdate" }, // 1909972257
		{ &Z_Construct_UFunction_UUGC_StartPlaytimeTracking, "StartPlaytimeTracking" }, // 1141092667
		{ &Z_Construct_UFunction_UUGC_StopPlaytimeTracking, "StopPlaytimeTracking" }, // 2867854920
		{ &Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems, "StopPlaytimeTrackingForAllItems" }, // 2486506314
		{ &Z_Construct_UFunction_UUGC_SubmitItemUpdate, "SubmitItemUpdate" }, // 2976884072
		{ &Z_Construct_UFunction_UUGC_SubscribeItem, "SubscribeItem" }, // 427991515
		{ &Z_Construct_UFunction_UUGC_SuspendDownloads, "SuspendDownloads" }, // 235349736
		{ &Z_Construct_UFunction_UUGC_UnsubscribeItem, "UnsubscribeItem" }, // 3994658097
		{ &Z_Construct_UFunction_UUGC_UpdateItemPreviewFile, "UpdateItemPreviewFile" }, // 2045950835
		{ &Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo, "UpdateItemPreviewVideo" }, // 2409702942
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUGC>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UUGC_Statics

// ********** Begin Class UUGC Property Definitions ************************************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUGC_Statics::NewProp_ItemInstalled = { "ItemInstalled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUGC, ItemInstalled), Z_Construct_UDelegateFunction_SteamCore_OnItemInstalled__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemInstalled_MetaData), NewProp_ItemInstalled_MetaData) }; // 1249595135
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUGC_Statics::NewProp_DownloadItemResult = { "DownloadItemResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUGC, DownloadItemResult), Z_Construct_UDelegateFunction_SteamCore_OnDownloadItemResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DownloadItemResult_MetaData), NewProp_DownloadItemResult_MetaData) }; // 2439945589
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUGC_Statics::NewProp_UserSubscribedItemsListChanged = { "UserSubscribedItemsListChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUGC, UserSubscribedItemsListChanged), Z_Construct_UDelegateFunction_SteamCore_OnUserSubscribedItemsListChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserSubscribedItemsListChanged_MetaData), NewProp_UserSubscribedItemsListChanged_MetaData) }; // 2162412342
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUGC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGC_Statics::NewProp_ItemInstalled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGC_Statics::NewProp_DownloadItemResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGC_Statics::NewProp_UserSubscribedItemsListChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUGC_Statics::PropPointers) < 2048);
// ********** End Class UUGC Property Definitions **************************************************
UObject* (*const Z_Construct_UClass_UUGC_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUGC_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUGC_Statics::Class_MetaDataParams), Z_Construct_UClass_UUGC_Statics::Class_MetaDataParams)
};
void UUGC::StaticRegisterNativesUUGC()
{
	UClass* Class = UUGC::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UUGC_Statics::Funcs));
}
UClass* Z_Construct_UClass_UUGC()
{
	if (!Z_Registration_Info_UClass_UUGC.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUGC.OuterSingleton, Z_Construct_UClass_UUGC_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUGC.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UUGC);
UUGC::~UUGC() {}
// ********** End Class UUGC ***********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamUGC_SteamUGC_h__Script_SteamCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUGC, UUGC::StaticClass, TEXT("UUGC"), &Z_Registration_Info_UClass_UUGC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUGC), 2638811485U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamUGC_SteamUGC_h__Script_SteamCore_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamUGC_SteamUGC_h__Script_SteamCore_3858840198{
	TEXT("/Script/SteamCore"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamUGC_SteamUGC_h__Script_SteamCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamUGC_SteamUGC_h__Script_SteamCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
