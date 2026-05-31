// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamFriends/SteamFriendsAsyncActions.h"
#include "SteamFriends/SteamFriendsTypes.h"
#include "SteamTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSteamFriendsAsyncActions() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreAsyncAction();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_NoRegister();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList_NoRegister();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionGetFollowerCount();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionGetFollowerCount_NoRegister();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionIsFollowing();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionIsFollowing_NoRegister();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom_NoRegister();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList_NoRegister();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation_NoRegister();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_NoRegister();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnEnumerateFollowingListAsyncDelegate__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGetFollowerCountAsyncDelegate__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnIsFollowingAsyncDelegate__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnJoinClanChatRoomAsyncDelegate__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestClanOfficerListAsyncDelegate__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestUserInformationAsyncDelegate__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSetPersonaNameAsyncDelegate__DelegateSignature();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FClanOfficerListResponse();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDownloadClanActivityCountsResult();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFriendsEnumerateFollowingList();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFriendsGetFollowerCount();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFriendsIsFollowing();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FJoinClanChatRoomCompletionResult();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSetPersonaNameResponse();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
UPackage* Z_Construct_UPackage__Script_SteamCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnSetPersonaNameAsyncDelegate ****************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnSetPersonaNameAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnSetPersonaNameAsyncDelegate_Parms
	{
		FSetPersonaNameResponse data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnSetPersonaNameAsyncDelegate constinit property declarations ********
	static const UECodeGen_Private::FStructPropertyParams NewProp_data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnSetPersonaNameAsyncDelegate constinit property declarations **********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnSetPersonaNameAsyncDelegate Property Definitions *******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnSetPersonaNameAsyncDelegate__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnSetPersonaNameAsyncDelegate_Parms, data), Z_Construct_UScriptStruct_FSetPersonaNameResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_data_MetaData), NewProp_data_MetaData) }; // 3811105364
void Z_Construct_UDelegateFunction_SteamCore_OnSetPersonaNameAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCore_eventOnSetPersonaNameAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnSetPersonaNameAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnSetPersonaNameAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnSetPersonaNameAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnSetPersonaNameAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnSetPersonaNameAsyncDelegate__DelegateSignature_Statics::NewProp_data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnSetPersonaNameAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSetPersonaNameAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnSetPersonaNameAsyncDelegate Property Definitions *********************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnSetPersonaNameAsyncDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnSetPersonaNameAsyncDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnSetPersonaNameAsyncDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSetPersonaNameAsyncDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnSetPersonaNameAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnSetPersonaNameAsyncDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSetPersonaNameAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnSetPersonaNameAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnSetPersonaNameAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnSetPersonaNameAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSetPersonaNameAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnSetPersonaNameAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSetPersonaNameAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSetPersonaNameAsyncDelegate, FSetPersonaNameResponse const& data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventOnSetPersonaNameAsyncDelegate_Parms
	{
		FSetPersonaNameResponse data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventOnSetPersonaNameAsyncDelegate_Parms Parms;
	Parms.data=data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnSetPersonaNameAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnSetPersonaNameAsyncDelegate ******************************************

// ********** Begin Delegate FOnDownloadClanActivityCountsAsyncDelegate ****************************
struct Z_Construct_UDelegateFunction_SteamCore_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnDownloadClanActivityCountsAsyncDelegate_Parms
	{
		FDownloadClanActivityCountsResult data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnDownloadClanActivityCountsAsyncDelegate constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnDownloadClanActivityCountsAsyncDelegate constinit property declarations 
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnDownloadClanActivityCountsAsyncDelegate Property Definitions *******
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnDownloadClanActivityCountsAsyncDelegate_Parms, data), Z_Construct_UScriptStruct_FDownloadClanActivityCountsResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_data_MetaData), NewProp_data_MetaData) }; // 1074218243
void Z_Construct_UDelegateFunction_SteamCore_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCore_eventOnDownloadClanActivityCountsAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnDownloadClanActivityCountsAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::NewProp_data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnDownloadClanActivityCountsAsyncDelegate Property Definitions *********
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnDownloadClanActivityCountsAsyncDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnDownloadClanActivityCountsAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDownloadClanActivityCountsAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnDownloadClanActivityCountsAsyncDelegate, FDownloadClanActivityCountsResult const& data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventOnDownloadClanActivityCountsAsyncDelegate_Parms
	{
		FDownloadClanActivityCountsResult data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventOnDownloadClanActivityCountsAsyncDelegate_Parms Parms;
	Parms.data=data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnDownloadClanActivityCountsAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnDownloadClanActivityCountsAsyncDelegate ******************************

// ********** Begin Delegate FOnRequestClanOfficerListAsyncDelegate ********************************
struct Z_Construct_UDelegateFunction_SteamCore_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnRequestClanOfficerListAsyncDelegate_Parms
	{
		FClanOfficerListResponse data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnRequestClanOfficerListAsyncDelegate constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnRequestClanOfficerListAsyncDelegate constinit property declarations **
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnRequestClanOfficerListAsyncDelegate Property Definitions ***********
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnRequestClanOfficerListAsyncDelegate_Parms, data), Z_Construct_UScriptStruct_FClanOfficerListResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_data_MetaData), NewProp_data_MetaData) }; // 2286433695
void Z_Construct_UDelegateFunction_SteamCore_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCore_eventOnRequestClanOfficerListAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnRequestClanOfficerListAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::NewProp_data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnRequestClanOfficerListAsyncDelegate Property Definitions *************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnRequestClanOfficerListAsyncDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnRequestClanOfficerListAsyncDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnRequestClanOfficerListAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestClanOfficerListAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRequestClanOfficerListAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRequestClanOfficerListAsyncDelegate, FClanOfficerListResponse const& data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventOnRequestClanOfficerListAsyncDelegate_Parms
	{
		FClanOfficerListResponse data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventOnRequestClanOfficerListAsyncDelegate_Parms Parms;
	Parms.data=data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnRequestClanOfficerListAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnRequestClanOfficerListAsyncDelegate **********************************

// ********** Begin Delegate FOnJoinClanChatRoomAsyncDelegate **************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnJoinClanChatRoomAsyncDelegate_Parms
	{
		FJoinClanChatRoomCompletionResult data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnJoinClanChatRoomAsyncDelegate constinit property declarations ******
	static const UECodeGen_Private::FStructPropertyParams NewProp_data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnJoinClanChatRoomAsyncDelegate constinit property declarations ********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnJoinClanChatRoomAsyncDelegate Property Definitions *****************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnJoinClanChatRoomAsyncDelegate_Parms, data), Z_Construct_UScriptStruct_FJoinClanChatRoomCompletionResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_data_MetaData), NewProp_data_MetaData) }; // 3788947056
void Z_Construct_UDelegateFunction_SteamCore_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCore_eventOnJoinClanChatRoomAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnJoinClanChatRoomAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::NewProp_data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnJoinClanChatRoomAsyncDelegate Property Definitions *******************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnJoinClanChatRoomAsyncDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnJoinClanChatRoomAsyncDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnJoinClanChatRoomAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnJoinClanChatRoomAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnJoinClanChatRoomAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnJoinClanChatRoomAsyncDelegate, FJoinClanChatRoomCompletionResult const& data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventOnJoinClanChatRoomAsyncDelegate_Parms
	{
		FJoinClanChatRoomCompletionResult data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventOnJoinClanChatRoomAsyncDelegate_Parms Parms;
	Parms.data=data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnJoinClanChatRoomAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnJoinClanChatRoomAsyncDelegate ****************************************

// ********** Begin Delegate FOnEnumerateFollowingListAsyncDelegate ********************************
struct Z_Construct_UDelegateFunction_SteamCore_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnEnumerateFollowingListAsyncDelegate_Parms
	{
		FFriendsEnumerateFollowingList data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnEnumerateFollowingListAsyncDelegate constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnEnumerateFollowingListAsyncDelegate constinit property declarations **
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnEnumerateFollowingListAsyncDelegate Property Definitions ***********
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnEnumerateFollowingListAsyncDelegate_Parms, data), Z_Construct_UScriptStruct_FFriendsEnumerateFollowingList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_data_MetaData), NewProp_data_MetaData) }; // 330952039
void Z_Construct_UDelegateFunction_SteamCore_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCore_eventOnEnumerateFollowingListAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnEnumerateFollowingListAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::NewProp_data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnEnumerateFollowingListAsyncDelegate Property Definitions *************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnEnumerateFollowingListAsyncDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnEnumerateFollowingListAsyncDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnEnumerateFollowingListAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnEnumerateFollowingListAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnEnumerateFollowingListAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnEnumerateFollowingListAsyncDelegate, FFriendsEnumerateFollowingList const& data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventOnEnumerateFollowingListAsyncDelegate_Parms
	{
		FFriendsEnumerateFollowingList data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventOnEnumerateFollowingListAsyncDelegate_Parms Parms;
	Parms.data=data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnEnumerateFollowingListAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnEnumerateFollowingListAsyncDelegate **********************************

// ********** Begin Delegate FOnIsFollowingAsyncDelegate *******************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnIsFollowingAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnIsFollowingAsyncDelegate_Parms
	{
		FFriendsIsFollowing data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnIsFollowingAsyncDelegate constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnIsFollowingAsyncDelegate constinit property declarations *************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnIsFollowingAsyncDelegate Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnIsFollowingAsyncDelegate_Parms, data), Z_Construct_UScriptStruct_FFriendsIsFollowing, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_data_MetaData), NewProp_data_MetaData) }; // 4276444353
void Z_Construct_UDelegateFunction_SteamCore_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCore_eventOnIsFollowingAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnIsFollowingAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::NewProp_data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnIsFollowingAsyncDelegate Property Definitions ************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnIsFollowingAsyncDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnIsFollowingAsyncDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnIsFollowingAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnIsFollowingAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnIsFollowingAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnIsFollowingAsyncDelegate, FFriendsIsFollowing const& data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventOnIsFollowingAsyncDelegate_Parms
	{
		FFriendsIsFollowing data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventOnIsFollowingAsyncDelegate_Parms Parms;
	Parms.data=data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnIsFollowingAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnIsFollowingAsyncDelegate *********************************************

// ********** Begin Delegate FOnGetFollowerCountAsyncDelegate **************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnGetFollowerCountAsyncDelegate_Parms
	{
		FFriendsGetFollowerCount data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnGetFollowerCountAsyncDelegate constinit property declarations ******
	static const UECodeGen_Private::FStructPropertyParams NewProp_data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnGetFollowerCountAsyncDelegate constinit property declarations ********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnGetFollowerCountAsyncDelegate Property Definitions *****************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnGetFollowerCountAsyncDelegate_Parms, data), Z_Construct_UScriptStruct_FFriendsGetFollowerCount, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_data_MetaData), NewProp_data_MetaData) }; // 3665830447
void Z_Construct_UDelegateFunction_SteamCore_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCore_eventOnGetFollowerCountAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnGetFollowerCountAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::NewProp_data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnGetFollowerCountAsyncDelegate Property Definitions *******************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnGetFollowerCountAsyncDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnGetFollowerCountAsyncDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnGetFollowerCountAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGetFollowerCountAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGetFollowerCountAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGetFollowerCountAsyncDelegate, FFriendsGetFollowerCount const& data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventOnGetFollowerCountAsyncDelegate_Parms
	{
		FFriendsGetFollowerCount data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventOnGetFollowerCountAsyncDelegate_Parms Parms;
	Parms.data=data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnGetFollowerCountAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnGetFollowerCountAsyncDelegate ****************************************

// ********** Begin Delegate FOnRequestUserInformationAsyncDelegate ********************************
struct Z_Construct_UDelegateFunction_SteamCore_OnRequestUserInformationAsyncDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnRequestUserInformationAsyncDelegate constinit property declarations 
// ********** End Delegate FOnRequestUserInformationAsyncDelegate constinit property declarations **
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnRequestUserInformationAsyncDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnRequestUserInformationAsyncDelegate__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestUserInformationAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnRequestUserInformationAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestUserInformationAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnRequestUserInformationAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRequestUserInformationAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRequestUserInformationAsyncDelegate)
{
	OnRequestUserInformationAsyncDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnRequestUserInformationAsyncDelegate **********************************

// ********** Begin Class USteamCoreFriendsAsyncActionSetPersonaName Function HandleCallback *******
struct Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback_Statics
{
	struct SteamCoreFriendsAsyncActionSetPersonaName_eventHandleCallback_Parms
	{
		FSetPersonaNameResponse Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleCallback constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleCallback constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleCallback Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreFriendsAsyncActionSetPersonaName_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FSetPersonaNameResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3811105364
void Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SteamCoreFriendsAsyncActionSetPersonaName_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreFriendsAsyncActionSetPersonaName_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback_Statics::PropPointers) < 2048);
// ********** End Function HandleCallback Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName, nullptr, "HandleCallback", 	Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback_Statics::SteamCoreFriendsAsyncActionSetPersonaName_eventHandleCallback_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback_Statics::SteamCoreFriendsAsyncActionSetPersonaName_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreFriendsAsyncActionSetPersonaName::execHandleCallback)
{
	P_GET_STRUCT_REF(FSetPersonaNameResponse,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class USteamCoreFriendsAsyncActionSetPersonaName Function HandleCallback *********

// ********** Begin Class USteamCoreFriendsAsyncActionSetPersonaName Function SetPersonaNameAsync **
struct Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics
{
	struct SteamCoreFriendsAsyncActionSetPersonaName_eventSetPersonaNameAsync_Parms
	{
		UObject* WorldContextObject;
		FString Name;
		float Timeout;
		USteamCoreFriendsAsyncActionSetPersonaName* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Friends|Async" },
		{ "Comment", "/**\n\x09* Sets the current users persona name, stores it on the server and publishes the changes to all friends who are online.\n\x09* Changes take place locally immediately, and a PersonaStateChange_t callback is posted, presuming success.\n\x09* If the name change fails to happen on the server, then an additional PersonaStateChange_t\n\x09* callback will be posted to change the name back, in addition to the final result available in the call result.\n\x09*\n\x09* @param\x09Name\x09\x09The users new persona name. Can not be longer than k_cchPersonaNameMax bytes.\n\x09* @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Set Persona Name" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ToolTip", "Sets the current users persona name, stores it on the server and publishes the changes to all friends who are online.\nChanges take place locally immediately, and a PersonaStateChange_t callback is posted, presuming success.\nIf the name change fails to happen on the server, then an additional PersonaStateChange_t\ncallback will be posted to change the name back, in addition to the final result available in the call result.\n\n@param        Name            The users new persona name. Can not be longer than k_cchPersonaNameMax bytes.\n@param        Timeout         How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetPersonaNameAsync constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetPersonaNameAsync constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetPersonaNameAsync Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreFriendsAsyncActionSetPersonaName_eventSetPersonaNameAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreFriendsAsyncActionSetPersonaName_eventSetPersonaNameAsync_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreFriendsAsyncActionSetPersonaName_eventSetPersonaNameAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreFriendsAsyncActionSetPersonaName_eventSetPersonaNameAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::PropPointers) < 2048);
// ********** End Function SetPersonaNameAsync Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName, nullptr, "SetPersonaNameAsync", 	Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::SteamCoreFriendsAsyncActionSetPersonaName_eventSetPersonaNameAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::SteamCoreFriendsAsyncActionSetPersonaName_eventSetPersonaNameAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreFriendsAsyncActionSetPersonaName::execSetPersonaNameAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreFriendsAsyncActionSetPersonaName**)Z_Param__Result=USteamCoreFriendsAsyncActionSetPersonaName::SetPersonaNameAsync(Z_Param_WorldContextObject,Z_Param_Name,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class USteamCoreFriendsAsyncActionSetPersonaName Function SetPersonaNameAsync ****

// ********** Begin Class USteamCoreFriendsAsyncActionSetPersonaName *******************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionSetPersonaName;
UClass* USteamCoreFriendsAsyncActionSetPersonaName::GetPrivateStaticClass()
{
	using TClass = USteamCoreFriendsAsyncActionSetPersonaName;
	if (!Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionSetPersonaName.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreFriendsAsyncActionSetPersonaName"),
			Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionSetPersonaName.InnerSingleton,
			StaticRegisterNativesUSteamCoreFriendsAsyncActionSetPersonaName,
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
	return Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionSetPersonaName.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_NoRegister()
{
	return USteamCoreFriendsAsyncActionSetPersonaName::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreFriendsAsyncActionSetPersonaName\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreFriendsAsyncActionSetPersonaName\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreFriendsAsyncActionSetPersonaName constinit property declarations 
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USteamCoreFriendsAsyncActionSetPersonaName constinit property declarations *
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("HandleCallback"), .Pointer = &USteamCoreFriendsAsyncActionSetPersonaName::execHandleCallback },
		{ .NameUTF8 = UTF8TEXT("SetPersonaNameAsync"), .Pointer = &USteamCoreFriendsAsyncActionSetPersonaName::execSetPersonaNameAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback, "HandleCallback" }, // 1646317309
		{ &Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync, "SetPersonaNameAsync" }, // 3035933180
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreFriendsAsyncActionSetPersonaName>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_Statics

// ********** Begin Class USteamCoreFriendsAsyncActionSetPersonaName Property Definitions **********
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreFriendsAsyncActionSetPersonaName, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnSetPersonaNameAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 3876916961
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_Statics::PropPointers) < 2048);
// ********** End Class USteamCoreFriendsAsyncActionSetPersonaName Property Definitions ************
UObject* (*const Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_Statics::ClassParams = {
	&USteamCoreFriendsAsyncActionSetPersonaName::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_Statics::Class_MetaDataParams)
};
void USteamCoreFriendsAsyncActionSetPersonaName::StaticRegisterNativesUSteamCoreFriendsAsyncActionSetPersonaName()
{
	UClass* Class = USteamCoreFriendsAsyncActionSetPersonaName::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName()
{
	if (!Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionSetPersonaName.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionSetPersonaName.OuterSingleton, Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionSetPersonaName.OuterSingleton;
}
USteamCoreFriendsAsyncActionSetPersonaName::USteamCoreFriendsAsyncActionSetPersonaName(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreFriendsAsyncActionSetPersonaName);
USteamCoreFriendsAsyncActionSetPersonaName::~USteamCoreFriendsAsyncActionSetPersonaName() {}
// ********** End Class USteamCoreFriendsAsyncActionSetPersonaName *********************************

// ********** Begin Class USteamCoreFriendsAsyncActionDownloadClanActivityCounts Function DownloadClanActivityCountsAsync 
struct Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics
{
	struct SteamCoreFriendsAsyncActionDownloadClanActivityCounts_eventDownloadClanActivityCountsAsync_Parms
	{
		UObject* WorldContextObject;
		TArray<FSteamID> SteamIDClans;
		float Timeout;
		USteamCoreFriendsAsyncActionDownloadClanActivityCounts* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Friends|Async" },
		{ "Comment", "/**\n\x09* Refresh the Steam Group activity data or get the data from groups other than one that the current\n\x09* user is a member.\n\x09* After receiving the callback you can then use GetClanActivityCounts to get the up to date user counts.\n\x09*\n\x09* @param\x09SteamIDClans\x09""A list of steam groups to get the updated data for.\n\x09* @param\x09Timeout\x09\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Download Clan Activity Counts" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ToolTip", "Refresh the Steam Group activity data or get the data from groups other than one that the current\nuser is a member.\nAfter receiving the callback you can then use GetClanActivityCounts to get the up to date user counts.\n\n@param        SteamIDClans    A list of steam groups to get the updated data for.\n@param        Timeout                 How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function DownloadClanActivityCountsAsync constinit property declarations *******
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClans_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SteamIDClans;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DownloadClanActivityCountsAsync constinit property declarations *********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DownloadClanActivityCountsAsync Property Definitions ******************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreFriendsAsyncActionDownloadClanActivityCounts_eventDownloadClanActivityCountsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::NewProp_SteamIDClans_Inner = { "SteamIDClans", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::NewProp_SteamIDClans = { "SteamIDClans", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreFriendsAsyncActionDownloadClanActivityCounts_eventDownloadClanActivityCountsAsync_Parms, SteamIDClans), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3382971600
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreFriendsAsyncActionDownloadClanActivityCounts_eventDownloadClanActivityCountsAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreFriendsAsyncActionDownloadClanActivityCounts_eventDownloadClanActivityCountsAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::NewProp_SteamIDClans_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::NewProp_SteamIDClans,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::PropPointers) < 2048);
// ********** End Function DownloadClanActivityCountsAsync Property Definitions ********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts, nullptr, "DownloadClanActivityCountsAsync", 	Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::SteamCoreFriendsAsyncActionDownloadClanActivityCounts_eventDownloadClanActivityCountsAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::SteamCoreFriendsAsyncActionDownloadClanActivityCounts_eventDownloadClanActivityCountsAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreFriendsAsyncActionDownloadClanActivityCounts::execDownloadClanActivityCountsAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TARRAY(FSteamID,Z_Param_SteamIDClans);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreFriendsAsyncActionDownloadClanActivityCounts**)Z_Param__Result=USteamCoreFriendsAsyncActionDownloadClanActivityCounts::DownloadClanActivityCountsAsync(Z_Param_WorldContextObject,Z_Param_SteamIDClans,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class USteamCoreFriendsAsyncActionDownloadClanActivityCounts Function DownloadClanActivityCountsAsync 

// ********** Begin Class USteamCoreFriendsAsyncActionDownloadClanActivityCounts Function HandleCallback 
struct Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics
{
	struct SteamCoreFriendsAsyncActionDownloadClanActivityCounts_eventHandleCallback_Parms
	{
		FDownloadClanActivityCountsResult Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleCallback constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleCallback constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleCallback Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreFriendsAsyncActionDownloadClanActivityCounts_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FDownloadClanActivityCountsResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1074218243
void Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SteamCoreFriendsAsyncActionDownloadClanActivityCounts_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreFriendsAsyncActionDownloadClanActivityCounts_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::PropPointers) < 2048);
// ********** End Function HandleCallback Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts, nullptr, "HandleCallback", 	Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::SteamCoreFriendsAsyncActionDownloadClanActivityCounts_eventHandleCallback_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::SteamCoreFriendsAsyncActionDownloadClanActivityCounts_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreFriendsAsyncActionDownloadClanActivityCounts::execHandleCallback)
{
	P_GET_STRUCT_REF(FDownloadClanActivityCountsResult,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class USteamCoreFriendsAsyncActionDownloadClanActivityCounts Function HandleCallback 

// ********** Begin Class USteamCoreFriendsAsyncActionDownloadClanActivityCounts *******************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts;
UClass* USteamCoreFriendsAsyncActionDownloadClanActivityCounts::GetPrivateStaticClass()
{
	using TClass = USteamCoreFriendsAsyncActionDownloadClanActivityCounts;
	if (!Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreFriendsAsyncActionDownloadClanActivityCounts"),
			Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts.InnerSingleton,
			StaticRegisterNativesUSteamCoreFriendsAsyncActionDownloadClanActivityCounts,
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
	return Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_NoRegister()
{
	return USteamCoreFriendsAsyncActionDownloadClanActivityCounts::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreFriendsAsyncActionDownloadClanActivityCounts\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreFriendsAsyncActionDownloadClanActivityCounts\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreFriendsAsyncActionDownloadClanActivityCounts constinit property declarations 
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USteamCoreFriendsAsyncActionDownloadClanActivityCounts constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("DownloadClanActivityCountsAsync"), .Pointer = &USteamCoreFriendsAsyncActionDownloadClanActivityCounts::execDownloadClanActivityCountsAsync },
		{ .NameUTF8 = UTF8TEXT("HandleCallback"), .Pointer = &USteamCoreFriendsAsyncActionDownloadClanActivityCounts::execHandleCallback },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync, "DownloadClanActivityCountsAsync" }, // 3791911251
		{ &Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_HandleCallback, "HandleCallback" }, // 1905099610
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreFriendsAsyncActionDownloadClanActivityCounts>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_Statics

// ********** Begin Class USteamCoreFriendsAsyncActionDownloadClanActivityCounts Property Definitions 
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreFriendsAsyncActionDownloadClanActivityCounts, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 3997183131
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_Statics::PropPointers) < 2048);
// ********** End Class USteamCoreFriendsAsyncActionDownloadClanActivityCounts Property Definitions 
UObject* (*const Z_Construct_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_Statics::ClassParams = {
	&USteamCoreFriendsAsyncActionDownloadClanActivityCounts::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_Statics::Class_MetaDataParams)
};
void USteamCoreFriendsAsyncActionDownloadClanActivityCounts::StaticRegisterNativesUSteamCoreFriendsAsyncActionDownloadClanActivityCounts()
{
	UClass* Class = USteamCoreFriendsAsyncActionDownloadClanActivityCounts::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts()
{
	if (!Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts.OuterSingleton, Z_Construct_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts.OuterSingleton;
}
USteamCoreFriendsAsyncActionDownloadClanActivityCounts::USteamCoreFriendsAsyncActionDownloadClanActivityCounts(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreFriendsAsyncActionDownloadClanActivityCounts);
USteamCoreFriendsAsyncActionDownloadClanActivityCounts::~USteamCoreFriendsAsyncActionDownloadClanActivityCounts() {}
// ********** End Class USteamCoreFriendsAsyncActionDownloadClanActivityCounts *********************

// ********** Begin Class USteamCoreFriendsAsyncActionRequestClanOfficerList Function HandleCallback 
struct Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics
{
	struct SteamCoreFriendsAsyncActionRequestClanOfficerList_eventHandleCallback_Parms
	{
		FClanOfficerListResponse Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleCallback constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleCallback constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleCallback Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreFriendsAsyncActionRequestClanOfficerList_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FClanOfficerListResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2286433695
void Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SteamCoreFriendsAsyncActionRequestClanOfficerList_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreFriendsAsyncActionRequestClanOfficerList_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::PropPointers) < 2048);
// ********** End Function HandleCallback Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList, nullptr, "HandleCallback", 	Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::SteamCoreFriendsAsyncActionRequestClanOfficerList_eventHandleCallback_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::SteamCoreFriendsAsyncActionRequestClanOfficerList_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreFriendsAsyncActionRequestClanOfficerList::execHandleCallback)
{
	P_GET_STRUCT_REF(FClanOfficerListResponse,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class USteamCoreFriendsAsyncActionRequestClanOfficerList Function HandleCallback *

// ********** Begin Class USteamCoreFriendsAsyncActionRequestClanOfficerList Function RequestClanOfficerListAsync 
struct Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics
{
	struct SteamCoreFriendsAsyncActionRequestClanOfficerList_eventRequestClanOfficerListAsync_Parms
	{
		UObject* WorldContextObject;
		FSteamID SteamIDClan;
		float Timeout;
		USteamCoreFriendsAsyncActionRequestClanOfficerList* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Friends|Async" },
		{ "Comment", "/**\n\x09* Requests information about a Steam group officers (administrators and moderators).\n\x09* You can only ask about Steam groups that a user is a member of.\n\x09* This won't download avatars for the officers automatically. If no avatar image is available for an officer, then call RequestUserInformation to download the avatar.\n\x09*\n\x09* @param\x09SteamIDClan\x09\x09The Steam group to get the officers list for.\n\x09* @param\x09Timeout\x09\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Request Clan Officer List" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ToolTip", "Requests information about a Steam group officers (administrators and moderators).\nYou can only ask about Steam groups that a user is a member of.\nThis won't download avatars for the officers automatically. If no avatar image is available for an officer, then call RequestUserInformation to download the avatar.\n\n@param        SteamIDClan             The Steam group to get the officers list for.\n@param        Timeout                 How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestClanOfficerListAsync constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestClanOfficerListAsync constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestClanOfficerListAsync Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreFriendsAsyncActionRequestClanOfficerList_eventRequestClanOfficerListAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreFriendsAsyncActionRequestClanOfficerList_eventRequestClanOfficerListAsync_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreFriendsAsyncActionRequestClanOfficerList_eventRequestClanOfficerListAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreFriendsAsyncActionRequestClanOfficerList_eventRequestClanOfficerListAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::NewProp_SteamIDClan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::PropPointers) < 2048);
// ********** End Function RequestClanOfficerListAsync Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList, nullptr, "RequestClanOfficerListAsync", 	Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::SteamCoreFriendsAsyncActionRequestClanOfficerList_eventRequestClanOfficerListAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::SteamCoreFriendsAsyncActionRequestClanOfficerList_eventRequestClanOfficerListAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreFriendsAsyncActionRequestClanOfficerList::execRequestClanOfficerListAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreFriendsAsyncActionRequestClanOfficerList**)Z_Param__Result=USteamCoreFriendsAsyncActionRequestClanOfficerList::RequestClanOfficerListAsync(Z_Param_WorldContextObject,Z_Param_SteamIDClan,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class USteamCoreFriendsAsyncActionRequestClanOfficerList Function RequestClanOfficerListAsync 

// ********** Begin Class USteamCoreFriendsAsyncActionRequestClanOfficerList ***********************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList;
UClass* USteamCoreFriendsAsyncActionRequestClanOfficerList::GetPrivateStaticClass()
{
	using TClass = USteamCoreFriendsAsyncActionRequestClanOfficerList;
	if (!Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreFriendsAsyncActionRequestClanOfficerList"),
			Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList.InnerSingleton,
			StaticRegisterNativesUSteamCoreFriendsAsyncActionRequestClanOfficerList,
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
	return Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList_NoRegister()
{
	return USteamCoreFriendsAsyncActionRequestClanOfficerList::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreFriendsAsyncActionRequestClanOfficerList\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreFriendsAsyncActionRequestClanOfficerList\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreFriendsAsyncActionRequestClanOfficerList constinit property declarations 
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USteamCoreFriendsAsyncActionRequestClanOfficerList constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("HandleCallback"), .Pointer = &USteamCoreFriendsAsyncActionRequestClanOfficerList::execHandleCallback },
		{ .NameUTF8 = UTF8TEXT("RequestClanOfficerListAsync"), .Pointer = &USteamCoreFriendsAsyncActionRequestClanOfficerList::execRequestClanOfficerListAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_HandleCallback, "HandleCallback" }, // 2123942134
		{ &Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync, "RequestClanOfficerListAsync" }, // 1917092644
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreFriendsAsyncActionRequestClanOfficerList>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList_Statics

// ********** Begin Class USteamCoreFriendsAsyncActionRequestClanOfficerList Property Definitions **
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreFriendsAsyncActionRequestClanOfficerList, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnRequestClanOfficerListAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 565855953
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList_Statics::PropPointers) < 2048);
// ********** End Class USteamCoreFriendsAsyncActionRequestClanOfficerList Property Definitions ****
UObject* (*const Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList_Statics::ClassParams = {
	&USteamCoreFriendsAsyncActionRequestClanOfficerList::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList_Statics::Class_MetaDataParams)
};
void USteamCoreFriendsAsyncActionRequestClanOfficerList::StaticRegisterNativesUSteamCoreFriendsAsyncActionRequestClanOfficerList()
{
	UClass* Class = USteamCoreFriendsAsyncActionRequestClanOfficerList::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList()
{
	if (!Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList.OuterSingleton, Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList.OuterSingleton;
}
USteamCoreFriendsAsyncActionRequestClanOfficerList::USteamCoreFriendsAsyncActionRequestClanOfficerList(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreFriendsAsyncActionRequestClanOfficerList);
USteamCoreFriendsAsyncActionRequestClanOfficerList::~USteamCoreFriendsAsyncActionRequestClanOfficerList() {}
// ********** End Class USteamCoreFriendsAsyncActionRequestClanOfficerList *************************

// ********** Begin Class USteamCoreFriendsAsyncActionJoinClanChatRoom Function HandleCallback *****
struct Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics
{
	struct SteamCoreFriendsAsyncActionJoinClanChatRoom_eventHandleCallback_Parms
	{
		FJoinClanChatRoomCompletionResult Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleCallback constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleCallback constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleCallback Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreFriendsAsyncActionJoinClanChatRoom_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FJoinClanChatRoomCompletionResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3788947056
void Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SteamCoreFriendsAsyncActionJoinClanChatRoom_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreFriendsAsyncActionJoinClanChatRoom_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::PropPointers) < 2048);
// ********** End Function HandleCallback Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom, nullptr, "HandleCallback", 	Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::SteamCoreFriendsAsyncActionJoinClanChatRoom_eventHandleCallback_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::SteamCoreFriendsAsyncActionJoinClanChatRoom_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreFriendsAsyncActionJoinClanChatRoom::execHandleCallback)
{
	P_GET_STRUCT_REF(FJoinClanChatRoomCompletionResult,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class USteamCoreFriendsAsyncActionJoinClanChatRoom Function HandleCallback *******

// ********** Begin Class USteamCoreFriendsAsyncActionJoinClanChatRoom Function JoinClanChatRoomAsync 
struct Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics
{
	struct SteamCoreFriendsAsyncActionJoinClanChatRoom_eventJoinClanChatRoomAsync_Parms
	{
		UObject* WorldContextObject;
		FSteamID SteamIDClan;
		float Timeout;
		USteamCoreFriendsAsyncActionJoinClanChatRoom* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Friends|Async" },
		{ "Comment", "/**\n\x09* Allows the user to join Steam group (clan) chats right within the game.\n\x09* The behavior is somewhat complicated, because the user may or may not be already in the group chat from outside the game or in the overlay.\n\x09* You can use ActivateGameOverlayToUser to open the in-game overlay version of the chat.\n\x09*\n\x09* @param\x09SteamIDClan\x09\x09The Steam ID of the Steam group to join.\n\x09* @param\x09Timeout\x09\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Join Clan Chat Room" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ToolTip", "Allows the user to join Steam group (clan) chats right within the game.\nThe behavior is somewhat complicated, because the user may or may not be already in the group chat from outside the game or in the overlay.\nYou can use ActivateGameOverlayToUser to open the in-game overlay version of the chat.\n\n@param        SteamIDClan             The Steam ID of the Steam group to join.\n@param        Timeout                 How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function JoinClanChatRoomAsync constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function JoinClanChatRoomAsync constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function JoinClanChatRoomAsync Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreFriendsAsyncActionJoinClanChatRoom_eventJoinClanChatRoomAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreFriendsAsyncActionJoinClanChatRoom_eventJoinClanChatRoomAsync_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreFriendsAsyncActionJoinClanChatRoom_eventJoinClanChatRoomAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreFriendsAsyncActionJoinClanChatRoom_eventJoinClanChatRoomAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::NewProp_SteamIDClan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::PropPointers) < 2048);
// ********** End Function JoinClanChatRoomAsync Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom, nullptr, "JoinClanChatRoomAsync", 	Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::SteamCoreFriendsAsyncActionJoinClanChatRoom_eventJoinClanChatRoomAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::SteamCoreFriendsAsyncActionJoinClanChatRoom_eventJoinClanChatRoomAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreFriendsAsyncActionJoinClanChatRoom::execJoinClanChatRoomAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreFriendsAsyncActionJoinClanChatRoom**)Z_Param__Result=USteamCoreFriendsAsyncActionJoinClanChatRoom::JoinClanChatRoomAsync(Z_Param_WorldContextObject,Z_Param_SteamIDClan,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class USteamCoreFriendsAsyncActionJoinClanChatRoom Function JoinClanChatRoomAsync 

// ********** Begin Class USteamCoreFriendsAsyncActionJoinClanChatRoom *****************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom;
UClass* USteamCoreFriendsAsyncActionJoinClanChatRoom::GetPrivateStaticClass()
{
	using TClass = USteamCoreFriendsAsyncActionJoinClanChatRoom;
	if (!Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreFriendsAsyncActionJoinClanChatRoom"),
			Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom.InnerSingleton,
			StaticRegisterNativesUSteamCoreFriendsAsyncActionJoinClanChatRoom,
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
	return Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom_NoRegister()
{
	return USteamCoreFriendsAsyncActionJoinClanChatRoom::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreFriendsAsyncActionJoinClanChatRoom\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreFriendsAsyncActionJoinClanChatRoom\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreFriendsAsyncActionJoinClanChatRoom constinit property declarations 
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USteamCoreFriendsAsyncActionJoinClanChatRoom constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("HandleCallback"), .Pointer = &USteamCoreFriendsAsyncActionJoinClanChatRoom::execHandleCallback },
		{ .NameUTF8 = UTF8TEXT("JoinClanChatRoomAsync"), .Pointer = &USteamCoreFriendsAsyncActionJoinClanChatRoom::execJoinClanChatRoomAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_HandleCallback, "HandleCallback" }, // 3583535333
		{ &Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync, "JoinClanChatRoomAsync" }, // 2159749197
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreFriendsAsyncActionJoinClanChatRoom>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom_Statics

// ********** Begin Class USteamCoreFriendsAsyncActionJoinClanChatRoom Property Definitions ********
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreFriendsAsyncActionJoinClanChatRoom, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnJoinClanChatRoomAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 3789726349
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom_Statics::PropPointers) < 2048);
// ********** End Class USteamCoreFriendsAsyncActionJoinClanChatRoom Property Definitions **********
UObject* (*const Z_Construct_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom_Statics::ClassParams = {
	&USteamCoreFriendsAsyncActionJoinClanChatRoom::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom_Statics::Class_MetaDataParams)
};
void USteamCoreFriendsAsyncActionJoinClanChatRoom::StaticRegisterNativesUSteamCoreFriendsAsyncActionJoinClanChatRoom()
{
	UClass* Class = USteamCoreFriendsAsyncActionJoinClanChatRoom::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom()
{
	if (!Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom.OuterSingleton, Z_Construct_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom.OuterSingleton;
}
USteamCoreFriendsAsyncActionJoinClanChatRoom::USteamCoreFriendsAsyncActionJoinClanChatRoom(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreFriendsAsyncActionJoinClanChatRoom);
USteamCoreFriendsAsyncActionJoinClanChatRoom::~USteamCoreFriendsAsyncActionJoinClanChatRoom() {}
// ********** End Class USteamCoreFriendsAsyncActionJoinClanChatRoom *******************************

// ********** Begin Class USteamCoreFriendsAsyncActionEnumerateFollowingList Function EnumerateFollowingListAsync 
struct Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics
{
	struct SteamCoreFriendsAsyncActionEnumerateFollowingList_eventEnumerateFollowingListAsync_Parms
	{
		UObject* WorldContextObject;
		int32 StartIndex;
		float Timeout;
		USteamCoreFriendsAsyncActionEnumerateFollowingList* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Friends|Async" },
		{ "Comment", "/**\n\x09* Gets the list of users that the current user is following.\n\x09* You can be following people that are not your friends.\n\x09* Following allows you to receive updates when the person does things like\n\x09* post a new piece of content to the Steam Workshop.\n\x09*\n\x09* @param\x09StartIndex\x09The index to start receiving followers from. This should be 0 on the initial call.\n\x09* @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Enumerate Following List" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ToolTip", "Gets the list of users that the current user is following.\nYou can be following people that are not your friends.\nFollowing allows you to receive updates when the person does things like\npost a new piece of content to the Steam Workshop.\n\n@param        StartIndex      The index to start receiving followers from. This should be 0 on the initial call.\n@param        Timeout         How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function EnumerateFollowingListAsync constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EnumerateFollowingListAsync constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EnumerateFollowingListAsync Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreFriendsAsyncActionEnumerateFollowingList_eventEnumerateFollowingListAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::NewProp_StartIndex = { "StartIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreFriendsAsyncActionEnumerateFollowingList_eventEnumerateFollowingListAsync_Parms, StartIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreFriendsAsyncActionEnumerateFollowingList_eventEnumerateFollowingListAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreFriendsAsyncActionEnumerateFollowingList_eventEnumerateFollowingListAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::NewProp_StartIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::PropPointers) < 2048);
// ********** End Function EnumerateFollowingListAsync Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList, nullptr, "EnumerateFollowingListAsync", 	Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::SteamCoreFriendsAsyncActionEnumerateFollowingList_eventEnumerateFollowingListAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::SteamCoreFriendsAsyncActionEnumerateFollowingList_eventEnumerateFollowingListAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreFriendsAsyncActionEnumerateFollowingList::execEnumerateFollowingListAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_StartIndex);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreFriendsAsyncActionEnumerateFollowingList**)Z_Param__Result=USteamCoreFriendsAsyncActionEnumerateFollowingList::EnumerateFollowingListAsync(Z_Param_WorldContextObject,Z_Param_StartIndex,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class USteamCoreFriendsAsyncActionEnumerateFollowingList Function EnumerateFollowingListAsync 

// ********** Begin Class USteamCoreFriendsAsyncActionEnumerateFollowingList Function HandleCallback 
struct Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics
{
	struct SteamCoreFriendsAsyncActionEnumerateFollowingList_eventHandleCallback_Parms
	{
		FFriendsEnumerateFollowingList Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleCallback constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleCallback constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleCallback Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreFriendsAsyncActionEnumerateFollowingList_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FFriendsEnumerateFollowingList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 330952039
void Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SteamCoreFriendsAsyncActionEnumerateFollowingList_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreFriendsAsyncActionEnumerateFollowingList_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::PropPointers) < 2048);
// ********** End Function HandleCallback Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList, nullptr, "HandleCallback", 	Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::SteamCoreFriendsAsyncActionEnumerateFollowingList_eventHandleCallback_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::SteamCoreFriendsAsyncActionEnumerateFollowingList_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreFriendsAsyncActionEnumerateFollowingList::execHandleCallback)
{
	P_GET_STRUCT_REF(FFriendsEnumerateFollowingList,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class USteamCoreFriendsAsyncActionEnumerateFollowingList Function HandleCallback *

// ********** Begin Class USteamCoreFriendsAsyncActionEnumerateFollowingList ***********************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList;
UClass* USteamCoreFriendsAsyncActionEnumerateFollowingList::GetPrivateStaticClass()
{
	using TClass = USteamCoreFriendsAsyncActionEnumerateFollowingList;
	if (!Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreFriendsAsyncActionEnumerateFollowingList"),
			Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList.InnerSingleton,
			StaticRegisterNativesUSteamCoreFriendsAsyncActionEnumerateFollowingList,
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
	return Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList_NoRegister()
{
	return USteamCoreFriendsAsyncActionEnumerateFollowingList::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreFriendsAsyncActionEnumerateFollowingList\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreFriendsAsyncActionEnumerateFollowingList\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreFriendsAsyncActionEnumerateFollowingList constinit property declarations 
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USteamCoreFriendsAsyncActionEnumerateFollowingList constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("EnumerateFollowingListAsync"), .Pointer = &USteamCoreFriendsAsyncActionEnumerateFollowingList::execEnumerateFollowingListAsync },
		{ .NameUTF8 = UTF8TEXT("HandleCallback"), .Pointer = &USteamCoreFriendsAsyncActionEnumerateFollowingList::execHandleCallback },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync, "EnumerateFollowingListAsync" }, // 3080348206
		{ &Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_HandleCallback, "HandleCallback" }, // 2469364113
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreFriendsAsyncActionEnumerateFollowingList>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList_Statics

// ********** Begin Class USteamCoreFriendsAsyncActionEnumerateFollowingList Property Definitions **
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreFriendsAsyncActionEnumerateFollowingList, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnEnumerateFollowingListAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 2572653926
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList_Statics::PropPointers) < 2048);
// ********** End Class USteamCoreFriendsAsyncActionEnumerateFollowingList Property Definitions ****
UObject* (*const Z_Construct_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList_Statics::ClassParams = {
	&USteamCoreFriendsAsyncActionEnumerateFollowingList::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList_Statics::Class_MetaDataParams)
};
void USteamCoreFriendsAsyncActionEnumerateFollowingList::StaticRegisterNativesUSteamCoreFriendsAsyncActionEnumerateFollowingList()
{
	UClass* Class = USteamCoreFriendsAsyncActionEnumerateFollowingList::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList()
{
	if (!Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList.OuterSingleton, Z_Construct_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList.OuterSingleton;
}
USteamCoreFriendsAsyncActionEnumerateFollowingList::USteamCoreFriendsAsyncActionEnumerateFollowingList(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreFriendsAsyncActionEnumerateFollowingList);
USteamCoreFriendsAsyncActionEnumerateFollowingList::~USteamCoreFriendsAsyncActionEnumerateFollowingList() {}
// ********** End Class USteamCoreFriendsAsyncActionEnumerateFollowingList *************************

// ********** Begin Class USteamCoreFriendsAsyncActionIsFollowing Function HandleCallback **********
struct Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_HandleCallback_Statics
{
	struct SteamCoreFriendsAsyncActionIsFollowing_eventHandleCallback_Parms
	{
		FFriendsIsFollowing Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleCallback constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleCallback constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleCallback Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreFriendsAsyncActionIsFollowing_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FFriendsIsFollowing, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 4276444353
void Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SteamCoreFriendsAsyncActionIsFollowing_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreFriendsAsyncActionIsFollowing_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_HandleCallback_Statics::PropPointers) < 2048);
// ********** End Function HandleCallback Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreFriendsAsyncActionIsFollowing, nullptr, "HandleCallback", 	Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_HandleCallback_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_HandleCallback_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_HandleCallback_Statics::SteamCoreFriendsAsyncActionIsFollowing_eventHandleCallback_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_HandleCallback_Statics::SteamCoreFriendsAsyncActionIsFollowing_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreFriendsAsyncActionIsFollowing::execHandleCallback)
{
	P_GET_STRUCT_REF(FFriendsIsFollowing,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class USteamCoreFriendsAsyncActionIsFollowing Function HandleCallback ************

// ********** Begin Class USteamCoreFriendsAsyncActionIsFollowing Function IsFollowingAsync ********
struct Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics
{
	struct SteamCoreFriendsAsyncActionIsFollowing_eventIsFollowingAsync_Parms
	{
		UObject* WorldContextObject;
		FSteamID SteamID;
		float Timeout;
		USteamCoreFriendsAsyncActionIsFollowing* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Friends|Async" },
		{ "Comment", "/**\n\x09* Checks if the current user is following the specified user.\n\x09*\n\x09* @param\x09SteamID\x09\x09The Steam ID of the check if we are following.\n\x09* @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Is Following" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ToolTip", "Checks if the current user is following the specified user.\n\n@param        SteamID         The Steam ID of the check if we are following.\n@param        Timeout         How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsFollowingAsync constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsFollowingAsync constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsFollowingAsync Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreFriendsAsyncActionIsFollowing_eventIsFollowingAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreFriendsAsyncActionIsFollowing_eventIsFollowingAsync_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreFriendsAsyncActionIsFollowing_eventIsFollowingAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreFriendsAsyncActionIsFollowing_eventIsFollowingAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreFriendsAsyncActionIsFollowing_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::PropPointers) < 2048);
// ********** End Function IsFollowingAsync Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreFriendsAsyncActionIsFollowing, nullptr, "IsFollowingAsync", 	Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::SteamCoreFriendsAsyncActionIsFollowing_eventIsFollowingAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::SteamCoreFriendsAsyncActionIsFollowing_eventIsFollowingAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_IsFollowingAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreFriendsAsyncActionIsFollowing::execIsFollowingAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FSteamID,Z_Param_SteamID);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreFriendsAsyncActionIsFollowing**)Z_Param__Result=USteamCoreFriendsAsyncActionIsFollowing::IsFollowingAsync(Z_Param_WorldContextObject,Z_Param_SteamID,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class USteamCoreFriendsAsyncActionIsFollowing Function IsFollowingAsync **********

// ********** Begin Class USteamCoreFriendsAsyncActionIsFollowing **********************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionIsFollowing;
UClass* USteamCoreFriendsAsyncActionIsFollowing::GetPrivateStaticClass()
{
	using TClass = USteamCoreFriendsAsyncActionIsFollowing;
	if (!Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionIsFollowing.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreFriendsAsyncActionIsFollowing"),
			Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionIsFollowing.InnerSingleton,
			StaticRegisterNativesUSteamCoreFriendsAsyncActionIsFollowing,
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
	return Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionIsFollowing.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionIsFollowing_NoRegister()
{
	return USteamCoreFriendsAsyncActionIsFollowing::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreFriendsAsyncActionIsFollowing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreFriendsAsyncActionIsFollowing\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreFriendsAsyncActionIsFollowing\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreFriendsAsyncActionIsFollowing constinit property declarations **
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USteamCoreFriendsAsyncActionIsFollowing constinit property declarations ****
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("HandleCallback"), .Pointer = &USteamCoreFriendsAsyncActionIsFollowing::execHandleCallback },
		{ .NameUTF8 = UTF8TEXT("IsFollowingAsync"), .Pointer = &USteamCoreFriendsAsyncActionIsFollowing::execIsFollowingAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_HandleCallback, "HandleCallback" }, // 951891724
		{ &Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_IsFollowingAsync, "IsFollowingAsync" }, // 3260205225
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreFriendsAsyncActionIsFollowing>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreFriendsAsyncActionIsFollowing_Statics

// ********** Begin Class USteamCoreFriendsAsyncActionIsFollowing Property Definitions *************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreFriendsAsyncActionIsFollowing_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreFriendsAsyncActionIsFollowing, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnIsFollowingAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 1891109125
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreFriendsAsyncActionIsFollowing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreFriendsAsyncActionIsFollowing_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFriendsAsyncActionIsFollowing_Statics::PropPointers) < 2048);
// ********** End Class USteamCoreFriendsAsyncActionIsFollowing Property Definitions ***************
UObject* (*const Z_Construct_UClass_USteamCoreFriendsAsyncActionIsFollowing_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFriendsAsyncActionIsFollowing_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreFriendsAsyncActionIsFollowing_Statics::ClassParams = {
	&USteamCoreFriendsAsyncActionIsFollowing::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreFriendsAsyncActionIsFollowing_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFriendsAsyncActionIsFollowing_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFriendsAsyncActionIsFollowing_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreFriendsAsyncActionIsFollowing_Statics::Class_MetaDataParams)
};
void USteamCoreFriendsAsyncActionIsFollowing::StaticRegisterNativesUSteamCoreFriendsAsyncActionIsFollowing()
{
	UClass* Class = USteamCoreFriendsAsyncActionIsFollowing::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreFriendsAsyncActionIsFollowing_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionIsFollowing()
{
	if (!Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionIsFollowing.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionIsFollowing.OuterSingleton, Z_Construct_UClass_USteamCoreFriendsAsyncActionIsFollowing_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionIsFollowing.OuterSingleton;
}
USteamCoreFriendsAsyncActionIsFollowing::USteamCoreFriendsAsyncActionIsFollowing(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreFriendsAsyncActionIsFollowing);
USteamCoreFriendsAsyncActionIsFollowing::~USteamCoreFriendsAsyncActionIsFollowing() {}
// ********** End Class USteamCoreFriendsAsyncActionIsFollowing ************************************

// ********** Begin Class USteamCoreFriendsAsyncActionGetFollowerCount Function GetFollowerCountAsync 
struct Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics
{
	struct SteamCoreFriendsAsyncActionGetFollowerCount_eventGetFollowerCountAsync_Parms
	{
		UObject* WorldContextObject;
		FSteamID SteamID;
		float Timeout;
		USteamCoreFriendsAsyncActionGetFollowerCount* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Friends|Async" },
		{ "Comment", "/**\n\x09* Gets the number of users following the specified user.\n\x09*\n\x09* @param\x09SteamID\x09\x09The user to get the follower count for.\n\x09* @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Get Follower Count" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ToolTip", "Gets the number of users following the specified user.\n\n@param        SteamID         The user to get the follower count for.\n@param        Timeout         How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetFollowerCountAsync constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFollowerCountAsync constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFollowerCountAsync Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreFriendsAsyncActionGetFollowerCount_eventGetFollowerCountAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreFriendsAsyncActionGetFollowerCount_eventGetFollowerCountAsync_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreFriendsAsyncActionGetFollowerCount_eventGetFollowerCountAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreFriendsAsyncActionGetFollowerCount_eventGetFollowerCountAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreFriendsAsyncActionGetFollowerCount_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::PropPointers) < 2048);
// ********** End Function GetFollowerCountAsync Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreFriendsAsyncActionGetFollowerCount, nullptr, "GetFollowerCountAsync", 	Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::SteamCoreFriendsAsyncActionGetFollowerCount_eventGetFollowerCountAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::SteamCoreFriendsAsyncActionGetFollowerCount_eventGetFollowerCountAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreFriendsAsyncActionGetFollowerCount::execGetFollowerCountAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FSteamID,Z_Param_SteamID);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreFriendsAsyncActionGetFollowerCount**)Z_Param__Result=USteamCoreFriendsAsyncActionGetFollowerCount::GetFollowerCountAsync(Z_Param_WorldContextObject,Z_Param_SteamID,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class USteamCoreFriendsAsyncActionGetFollowerCount Function GetFollowerCountAsync 

// ********** Begin Class USteamCoreFriendsAsyncActionGetFollowerCount Function HandleCallback *****
struct Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_HandleCallback_Statics
{
	struct SteamCoreFriendsAsyncActionGetFollowerCount_eventHandleCallback_Parms
	{
		FFriendsGetFollowerCount Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleCallback constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleCallback constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleCallback Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreFriendsAsyncActionGetFollowerCount_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FFriendsGetFollowerCount, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3665830447
void Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SteamCoreFriendsAsyncActionGetFollowerCount_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreFriendsAsyncActionGetFollowerCount_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::PropPointers) < 2048);
// ********** End Function HandleCallback Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreFriendsAsyncActionGetFollowerCount, nullptr, "HandleCallback", 	Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::SteamCoreFriendsAsyncActionGetFollowerCount_eventHandleCallback_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::SteamCoreFriendsAsyncActionGetFollowerCount_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreFriendsAsyncActionGetFollowerCount::execHandleCallback)
{
	P_GET_STRUCT_REF(FFriendsGetFollowerCount,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class USteamCoreFriendsAsyncActionGetFollowerCount Function HandleCallback *******

// ********** Begin Class USteamCoreFriendsAsyncActionGetFollowerCount *****************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionGetFollowerCount;
UClass* USteamCoreFriendsAsyncActionGetFollowerCount::GetPrivateStaticClass()
{
	using TClass = USteamCoreFriendsAsyncActionGetFollowerCount;
	if (!Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionGetFollowerCount.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreFriendsAsyncActionGetFollowerCount"),
			Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionGetFollowerCount.InnerSingleton,
			StaticRegisterNativesUSteamCoreFriendsAsyncActionGetFollowerCount,
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
	return Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionGetFollowerCount.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionGetFollowerCount_NoRegister()
{
	return USteamCoreFriendsAsyncActionGetFollowerCount::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreFriendsAsyncActionGetFollowerCount_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreFriendsAsyncActionGetFollowerCount\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreFriendsAsyncActionGetFollowerCount\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreFriendsAsyncActionGetFollowerCount constinit property declarations 
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USteamCoreFriendsAsyncActionGetFollowerCount constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetFollowerCountAsync"), .Pointer = &USteamCoreFriendsAsyncActionGetFollowerCount::execGetFollowerCountAsync },
		{ .NameUTF8 = UTF8TEXT("HandleCallback"), .Pointer = &USteamCoreFriendsAsyncActionGetFollowerCount::execHandleCallback },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync, "GetFollowerCountAsync" }, // 3974161102
		{ &Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_HandleCallback, "HandleCallback" }, // 4038273296
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreFriendsAsyncActionGetFollowerCount>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreFriendsAsyncActionGetFollowerCount_Statics

// ********** Begin Class USteamCoreFriendsAsyncActionGetFollowerCount Property Definitions ********
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreFriendsAsyncActionGetFollowerCount_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreFriendsAsyncActionGetFollowerCount, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnGetFollowerCountAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 433572875
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreFriendsAsyncActionGetFollowerCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreFriendsAsyncActionGetFollowerCount_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFriendsAsyncActionGetFollowerCount_Statics::PropPointers) < 2048);
// ********** End Class USteamCoreFriendsAsyncActionGetFollowerCount Property Definitions **********
UObject* (*const Z_Construct_UClass_USteamCoreFriendsAsyncActionGetFollowerCount_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFriendsAsyncActionGetFollowerCount_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreFriendsAsyncActionGetFollowerCount_Statics::ClassParams = {
	&USteamCoreFriendsAsyncActionGetFollowerCount::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreFriendsAsyncActionGetFollowerCount_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFriendsAsyncActionGetFollowerCount_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFriendsAsyncActionGetFollowerCount_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreFriendsAsyncActionGetFollowerCount_Statics::Class_MetaDataParams)
};
void USteamCoreFriendsAsyncActionGetFollowerCount::StaticRegisterNativesUSteamCoreFriendsAsyncActionGetFollowerCount()
{
	UClass* Class = USteamCoreFriendsAsyncActionGetFollowerCount::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreFriendsAsyncActionGetFollowerCount_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionGetFollowerCount()
{
	if (!Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionGetFollowerCount.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionGetFollowerCount.OuterSingleton, Z_Construct_UClass_USteamCoreFriendsAsyncActionGetFollowerCount_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionGetFollowerCount.OuterSingleton;
}
USteamCoreFriendsAsyncActionGetFollowerCount::USteamCoreFriendsAsyncActionGetFollowerCount(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreFriendsAsyncActionGetFollowerCount);
USteamCoreFriendsAsyncActionGetFollowerCount::~USteamCoreFriendsAsyncActionGetFollowerCount() {}
// ********** End Class USteamCoreFriendsAsyncActionGetFollowerCount *******************************

// ********** Begin Class USteamCoreFriendsAsyncActionRequestUserInformation Function HandleCallback 
struct Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_HandleCallback_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleCallback constinit property declarations ************************
// ********** End Function HandleCallback constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation, nullptr, "HandleCallback", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_HandleCallback_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreFriendsAsyncActionRequestUserInformation::execHandleCallback)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback();
	P_NATIVE_END;
}
// ********** End Class USteamCoreFriendsAsyncActionRequestUserInformation Function HandleCallback *

// ********** Begin Class USteamCoreFriendsAsyncActionRequestUserInformation Function RequestUserInformationAsync 
struct Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics
{
	struct SteamCoreFriendsAsyncActionRequestUserInformation_eventRequestUserInformationAsync_Parms
	{
		UObject* WorldContextObject;
		FSteamID SteamIDUser;
		bool bRequireNameOnly;
		float Timeout;
		USteamCoreFriendsAsyncActionRequestUserInformation* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Friends|Async" },
		{ "Comment", "/**\n\x09* Requests the persona name and optionally the avatar of a specified user.\n\x09*\n\x09* Using this node you don't have to bind any OnPersonaStateChange callback delegate, it's handled automatically with this node.\n\x09*\n\x09* @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Request User Information (Async)" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ToolTip", "Requests the persona name and optionally the avatar of a specified user.\n\nUsing this node you don't have to bind any OnPersonaStateChange callback delegate, it's handled automatically with this node.\n\n@param        Timeout         How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestUserInformationAsync constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static void NewProp_bRequireNameOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireNameOnly;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestUserInformationAsync constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestUserInformationAsync Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreFriendsAsyncActionRequestUserInformation_eventRequestUserInformationAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreFriendsAsyncActionRequestUserInformation_eventRequestUserInformationAsync_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
void Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::NewProp_bRequireNameOnly_SetBit(void* Obj)
{
	((SteamCoreFriendsAsyncActionRequestUserInformation_eventRequestUserInformationAsync_Parms*)Obj)->bRequireNameOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::NewProp_bRequireNameOnly = { "bRequireNameOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreFriendsAsyncActionRequestUserInformation_eventRequestUserInformationAsync_Parms), &Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::NewProp_bRequireNameOnly_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreFriendsAsyncActionRequestUserInformation_eventRequestUserInformationAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreFriendsAsyncActionRequestUserInformation_eventRequestUserInformationAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::NewProp_SteamIDUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::NewProp_bRequireNameOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::PropPointers) < 2048);
// ********** End Function RequestUserInformationAsync Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation, nullptr, "RequestUserInformationAsync", 	Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::SteamCoreFriendsAsyncActionRequestUserInformation_eventRequestUserInformationAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::SteamCoreFriendsAsyncActionRequestUserInformation_eventRequestUserInformationAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreFriendsAsyncActionRequestUserInformation::execRequestUserInformationAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
	P_GET_UBOOL(Z_Param_bRequireNameOnly);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreFriendsAsyncActionRequestUserInformation**)Z_Param__Result=USteamCoreFriendsAsyncActionRequestUserInformation::RequestUserInformationAsync(Z_Param_WorldContextObject,Z_Param_SteamIDUser,Z_Param_bRequireNameOnly,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class USteamCoreFriendsAsyncActionRequestUserInformation Function RequestUserInformationAsync 

// ********** Begin Class USteamCoreFriendsAsyncActionRequestUserInformation ***********************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionRequestUserInformation;
UClass* USteamCoreFriendsAsyncActionRequestUserInformation::GetPrivateStaticClass()
{
	using TClass = USteamCoreFriendsAsyncActionRequestUserInformation;
	if (!Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionRequestUserInformation.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreFriendsAsyncActionRequestUserInformation"),
			Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionRequestUserInformation.InnerSingleton,
			StaticRegisterNativesUSteamCoreFriendsAsyncActionRequestUserInformation,
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
	return Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionRequestUserInformation.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation_NoRegister()
{
	return USteamCoreFriendsAsyncActionRequestUserInformation::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreFriendsAsyncActionRequestUserInformation\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreFriendsAsyncActionRequestUserInformation\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreFriendsAsyncActionRequestUserInformation constinit property declarations 
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USteamCoreFriendsAsyncActionRequestUserInformation constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("HandleCallback"), .Pointer = &USteamCoreFriendsAsyncActionRequestUserInformation::execHandleCallback },
		{ .NameUTF8 = UTF8TEXT("RequestUserInformationAsync"), .Pointer = &USteamCoreFriendsAsyncActionRequestUserInformation::execRequestUserInformationAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_HandleCallback, "HandleCallback" }, // 1315721104
		{ &Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync, "RequestUserInformationAsync" }, // 880245303
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreFriendsAsyncActionRequestUserInformation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation_Statics

// ********** Begin Class USteamCoreFriendsAsyncActionRequestUserInformation Property Definitions **
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreFriendsAsyncActionRequestUserInformation, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnRequestUserInformationAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 310088120
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation_Statics::PropPointers) < 2048);
// ********** End Class USteamCoreFriendsAsyncActionRequestUserInformation Property Definitions ****
UObject* (*const Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation_Statics::ClassParams = {
	&USteamCoreFriendsAsyncActionRequestUserInformation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation_Statics::Class_MetaDataParams)
};
void USteamCoreFriendsAsyncActionRequestUserInformation::StaticRegisterNativesUSteamCoreFriendsAsyncActionRequestUserInformation()
{
	UClass* Class = USteamCoreFriendsAsyncActionRequestUserInformation::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation()
{
	if (!Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionRequestUserInformation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionRequestUserInformation.OuterSingleton, Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionRequestUserInformation.OuterSingleton;
}
USteamCoreFriendsAsyncActionRequestUserInformation::USteamCoreFriendsAsyncActionRequestUserInformation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreFriendsAsyncActionRequestUserInformation);
USteamCoreFriendsAsyncActionRequestUserInformation::~USteamCoreFriendsAsyncActionRequestUserInformation() {}
// ********** End Class USteamCoreFriendsAsyncActionRequestUserInformation *************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h__Script_SteamCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName, USteamCoreFriendsAsyncActionSetPersonaName::StaticClass, TEXT("USteamCoreFriendsAsyncActionSetPersonaName"), &Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionSetPersonaName, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreFriendsAsyncActionSetPersonaName), 762282439U) },
		{ Z_Construct_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts, USteamCoreFriendsAsyncActionDownloadClanActivityCounts::StaticClass, TEXT("USteamCoreFriendsAsyncActionDownloadClanActivityCounts"), &Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreFriendsAsyncActionDownloadClanActivityCounts), 3283414352U) },
		{ Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList, USteamCoreFriendsAsyncActionRequestClanOfficerList::StaticClass, TEXT("USteamCoreFriendsAsyncActionRequestClanOfficerList"), &Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreFriendsAsyncActionRequestClanOfficerList), 3637909U) },
		{ Z_Construct_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom, USteamCoreFriendsAsyncActionJoinClanChatRoom::StaticClass, TEXT("USteamCoreFriendsAsyncActionJoinClanChatRoom"), &Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreFriendsAsyncActionJoinClanChatRoom), 473759788U) },
		{ Z_Construct_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList, USteamCoreFriendsAsyncActionEnumerateFollowingList::StaticClass, TEXT("USteamCoreFriendsAsyncActionEnumerateFollowingList"), &Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreFriendsAsyncActionEnumerateFollowingList), 1440550024U) },
		{ Z_Construct_UClass_USteamCoreFriendsAsyncActionIsFollowing, USteamCoreFriendsAsyncActionIsFollowing::StaticClass, TEXT("USteamCoreFriendsAsyncActionIsFollowing"), &Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionIsFollowing, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreFriendsAsyncActionIsFollowing), 592147172U) },
		{ Z_Construct_UClass_USteamCoreFriendsAsyncActionGetFollowerCount, USteamCoreFriendsAsyncActionGetFollowerCount::StaticClass, TEXT("USteamCoreFriendsAsyncActionGetFollowerCount"), &Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionGetFollowerCount, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreFriendsAsyncActionGetFollowerCount), 1782219735U) },
		{ Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation, USteamCoreFriendsAsyncActionRequestUserInformation::StaticClass, TEXT("USteamCoreFriendsAsyncActionRequestUserInformation"), &Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionRequestUserInformation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreFriendsAsyncActionRequestUserInformation), 1509511684U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h__Script_SteamCore_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h__Script_SteamCore_2412653830{
	TEXT("/Script/SteamCore"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h__Script_SteamCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h__Script_SteamCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
