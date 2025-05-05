// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamFriends/SteamFriendsAsyncActions.h"
#include "SteamCore/Public/SteamCore/SteamTypes.h"
#include "SteamCore/Public/SteamFriends/SteamFriendsTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamFriendsAsyncActions() {}
// Cross Module References
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
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SteamCore_OnSetPersonaNameAsyncDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnSetPersonaNameAsyncDelegate_Parms
		{
			FSetPersonaNameResponse data;
			bool bWasSuccessful;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_data;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnSetPersonaNameAsyncDelegate__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnSetPersonaNameAsyncDelegate__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnSetPersonaNameAsyncDelegate_Parms, data), Z_Construct_UScriptStruct_FSetPersonaNameResponse, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnSetPersonaNameAsyncDelegate__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSetPersonaNameAsyncDelegate__DelegateSignature_Statics::NewProp_data_MetaData)) }; // 846031727
	void Z_Construct_UDelegateFunction_SteamCore_OnSetPersonaNameAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnSetPersonaNameAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnSetPersonaNameAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamCore_eventOnSetPersonaNameAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnSetPersonaNameAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnSetPersonaNameAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnSetPersonaNameAsyncDelegate__DelegateSignature_Statics::NewProp_data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnSetPersonaNameAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnSetPersonaNameAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnSetPersonaNameAsyncDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnSetPersonaNameAsyncDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnSetPersonaNameAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnSetPersonaNameAsyncDelegate_Parms), Z_Construct_UDelegateFunction_SteamCore_OnSetPersonaNameAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSetPersonaNameAsyncDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnSetPersonaNameAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSetPersonaNameAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSetPersonaNameAsyncDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnSetPersonaNameAsyncDelegate__DelegateSignature_Statics::FuncParams);
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
	struct Z_Construct_UDelegateFunction_SteamCore_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnDownloadClanActivityCountsAsyncDelegate_Parms
		{
			FDownloadClanActivityCountsResult data;
			bool bWasSuccessful;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_data;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnDownloadClanActivityCountsAsyncDelegate_Parms, data), Z_Construct_UScriptStruct_FDownloadClanActivityCountsResult, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::NewProp_data_MetaData)) }; // 2680518778
	void Z_Construct_UDelegateFunction_SteamCore_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnDownloadClanActivityCountsAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamCore_eventOnDownloadClanActivityCountsAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::NewProp_data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnDownloadClanActivityCountsAsyncDelegate_Parms), Z_Construct_UDelegateFunction_SteamCore_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature_Statics::FuncParams);
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
	struct Z_Construct_UDelegateFunction_SteamCore_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnRequestClanOfficerListAsyncDelegate_Parms
		{
			FClanOfficerListResponse data;
			bool bWasSuccessful;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_data;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnRequestClanOfficerListAsyncDelegate_Parms, data), Z_Construct_UScriptStruct_FClanOfficerListResponse, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::NewProp_data_MetaData)) }; // 4173454109
	void Z_Construct_UDelegateFunction_SteamCore_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnRequestClanOfficerListAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamCore_eventOnRequestClanOfficerListAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::NewProp_data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnRequestClanOfficerListAsyncDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnRequestClanOfficerListAsyncDelegate_Parms), Z_Construct_UDelegateFunction_SteamCore_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestClanOfficerListAsyncDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnRequestClanOfficerListAsyncDelegate__DelegateSignature_Statics::FuncParams);
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
	struct Z_Construct_UDelegateFunction_SteamCore_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnJoinClanChatRoomAsyncDelegate_Parms
		{
			FJoinClanChatRoomCompletionResult data;
			bool bWasSuccessful;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_data;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnJoinClanChatRoomAsyncDelegate_Parms, data), Z_Construct_UScriptStruct_FJoinClanChatRoomCompletionResult, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::NewProp_data_MetaData)) }; // 1491884566
	void Z_Construct_UDelegateFunction_SteamCore_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnJoinClanChatRoomAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamCore_eventOnJoinClanChatRoomAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::NewProp_data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnJoinClanChatRoomAsyncDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnJoinClanChatRoomAsyncDelegate_Parms), Z_Construct_UDelegateFunction_SteamCore_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnJoinClanChatRoomAsyncDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnJoinClanChatRoomAsyncDelegate__DelegateSignature_Statics::FuncParams);
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
	struct Z_Construct_UDelegateFunction_SteamCore_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnEnumerateFollowingListAsyncDelegate_Parms
		{
			FFriendsEnumerateFollowingList data;
			bool bWasSuccessful;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_data;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnEnumerateFollowingListAsyncDelegate_Parms, data), Z_Construct_UScriptStruct_FFriendsEnumerateFollowingList, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::NewProp_data_MetaData)) }; // 3881129984
	void Z_Construct_UDelegateFunction_SteamCore_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnEnumerateFollowingListAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamCore_eventOnEnumerateFollowingListAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::NewProp_data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnEnumerateFollowingListAsyncDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnEnumerateFollowingListAsyncDelegate_Parms), Z_Construct_UDelegateFunction_SteamCore_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnEnumerateFollowingListAsyncDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnEnumerateFollowingListAsyncDelegate__DelegateSignature_Statics::FuncParams);
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
	struct Z_Construct_UDelegateFunction_SteamCore_OnIsFollowingAsyncDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnIsFollowingAsyncDelegate_Parms
		{
			FFriendsIsFollowing data;
			bool bWasSuccessful;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_data;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnIsFollowingAsyncDelegate_Parms, data), Z_Construct_UScriptStruct_FFriendsIsFollowing, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::NewProp_data_MetaData)) }; // 3600745523
	void Z_Construct_UDelegateFunction_SteamCore_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnIsFollowingAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamCore_eventOnIsFollowingAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::NewProp_data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnIsFollowingAsyncDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnIsFollowingAsyncDelegate_Parms), Z_Construct_UDelegateFunction_SteamCore_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnIsFollowingAsyncDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnIsFollowingAsyncDelegate__DelegateSignature_Statics::FuncParams);
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
	struct Z_Construct_UDelegateFunction_SteamCore_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnGetFollowerCountAsyncDelegate_Parms
		{
			FFriendsGetFollowerCount data;
			bool bWasSuccessful;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_data;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnGetFollowerCountAsyncDelegate_Parms, data), Z_Construct_UScriptStruct_FFriendsGetFollowerCount, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::NewProp_data_MetaData)) }; // 3017430637
	void Z_Construct_UDelegateFunction_SteamCore_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnGetFollowerCountAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamCore_eventOnGetFollowerCountAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::NewProp_data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnGetFollowerCountAsyncDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnGetFollowerCountAsyncDelegate_Parms), Z_Construct_UDelegateFunction_SteamCore_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGetFollowerCountAsyncDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnGetFollowerCountAsyncDelegate__DelegateSignature_Statics::FuncParams);
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
	struct Z_Construct_UDelegateFunction_SteamCore_OnRequestUserInformationAsyncDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnRequestUserInformationAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnRequestUserInformationAsyncDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnRequestUserInformationAsyncDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnRequestUserInformationAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestUserInformationAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestUserInformationAsyncDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnRequestUserInformationAsyncDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnRequestUserInformationAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRequestUserInformationAsyncDelegate)
{
	OnRequestUserInformationAsyncDelegate.ProcessMulticastDelegate<UObject>(NULL);
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
	void USteamCoreFriendsAsyncActionSetPersonaName::StaticRegisterNativesUSteamCoreFriendsAsyncActionSetPersonaName()
	{
		UClass* Class = USteamCoreFriendsAsyncActionSetPersonaName::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleCallback", &USteamCoreFriendsAsyncActionSetPersonaName::execHandleCallback },
			{ "SetPersonaNameAsync", &USteamCoreFriendsAsyncActionSetPersonaName::execSetPersonaNameAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback_Statics
	{
		struct SteamCoreFriendsAsyncActionSetPersonaName_eventHandleCallback_Parms
		{
			FSetPersonaNameResponse Data;
			bool bWasSuccessful;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreFriendsAsyncActionSetPersonaName_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FSetPersonaNameResponse, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback_Statics::NewProp_Data_MetaData)) }; // 846031727
	void Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((SteamCoreFriendsAsyncActionSetPersonaName_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamCoreFriendsAsyncActionSetPersonaName_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName, nullptr, "HandleCallback", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback_Statics::SteamCoreFriendsAsyncActionSetPersonaName_eventHandleCallback_Parms), Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics
	{
		struct SteamCoreFriendsAsyncActionSetPersonaName_eventSetPersonaNameAsync_Parms
		{
			UObject* WorldContextObject;
			FString Name;
			float Timeout;
			USteamCoreFriendsAsyncActionSetPersonaName* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreFriendsAsyncActionSetPersonaName_eventSetPersonaNameAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreFriendsAsyncActionSetPersonaName_eventSetPersonaNameAsync_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreFriendsAsyncActionSetPersonaName_eventSetPersonaNameAsync_Parms, Timeout), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreFriendsAsyncActionSetPersonaName_eventSetPersonaNameAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::NewProp_Timeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Friends|Async" },
		{ "Comment", "/**\n\x09* Sets the current users persona name, stores it on the server and publishes the changes to all friends who are online.\n\x09* Changes take place locally immediately, and a PersonaStateChange_t callback is posted, presuming success.\n\x09* If the name change fails to happen on the server, then an additional PersonaStateChange_t\n\x09* callback will be posted to change the name back, in addition to the final result available in the call result.\n\x09*\n\x09* @param\x09Name\x09\x09The users new persona name. Can not be longer than k_cchPersonaNameMax bytes.\n\x09* @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Set Persona Name" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ToolTip", "Sets the current users persona name, stores it on the server and publishes the changes to all friends who are online.\nChanges take place locally immediately, and a PersonaStateChange_t callback is posted, presuming success.\nIf the name change fails to happen on the server, then an additional PersonaStateChange_t\ncallback will be posted to change the name back, in addition to the final result available in the call result.\n\n@param        Name            The users new persona name. Can not be longer than k_cchPersonaNameMax bytes.\n@param        Timeout         How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName, nullptr, "SetPersonaNameAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::SteamCoreFriendsAsyncActionSetPersonaName_eventSetPersonaNameAsync_Parms), Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreFriendsAsyncActionSetPersonaName);
	UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_NoRegister()
	{
		return USteamCoreFriendsAsyncActionSetPersonaName::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback, "HandleCallback" }, // 3442589201
		{ &Z_Construct_UFunction_USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync, "SetPersonaNameAsync" }, // 120220303
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreFriendsAsyncActionSetPersonaName\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreFriendsAsyncActionSetPersonaName\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamCoreFriendsAsyncActionSetPersonaName, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnSetPersonaNameAsyncDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_Statics::NewProp_OnCallback_MetaData)) }; // 3075768509
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreFriendsAsyncActionSetPersonaName>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName()
	{
		if (!Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionSetPersonaName.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionSetPersonaName.OuterSingleton, Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionSetPersonaName.OuterSingleton;
	}
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreFriendsAsyncActionSetPersonaName>()
	{
		return USteamCoreFriendsAsyncActionSetPersonaName::StaticClass();
	}
	USteamCoreFriendsAsyncActionSetPersonaName::USteamCoreFriendsAsyncActionSetPersonaName(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreFriendsAsyncActionSetPersonaName);
	USteamCoreFriendsAsyncActionSetPersonaName::~USteamCoreFriendsAsyncActionSetPersonaName() {}
	DEFINE_FUNCTION(USteamCoreFriendsAsyncActionDownloadClanActivityCounts::execHandleCallback)
	{
		P_GET_STRUCT_REF(FDownloadClanActivityCountsResult,Z_Param_Out_Data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
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
	void USteamCoreFriendsAsyncActionDownloadClanActivityCounts::StaticRegisterNativesUSteamCoreFriendsAsyncActionDownloadClanActivityCounts()
	{
		UClass* Class = USteamCoreFriendsAsyncActionDownloadClanActivityCounts::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DownloadClanActivityCountsAsync", &USteamCoreFriendsAsyncActionDownloadClanActivityCounts::execDownloadClanActivityCountsAsync },
			{ "HandleCallback", &USteamCoreFriendsAsyncActionDownloadClanActivityCounts::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics
	{
		struct SteamCoreFriendsAsyncActionDownloadClanActivityCounts_eventDownloadClanActivityCountsAsync_Parms
		{
			UObject* WorldContextObject;
			TArray<FSteamID> SteamIDClans;
			float Timeout;
			USteamCoreFriendsAsyncActionDownloadClanActivityCounts* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClans_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SteamIDClans;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreFriendsAsyncActionDownloadClanActivityCounts_eventDownloadClanActivityCountsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::NewProp_SteamIDClans_Inner = { "SteamIDClans", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::NewProp_SteamIDClans = { "SteamIDClans", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreFriendsAsyncActionDownloadClanActivityCounts_eventDownloadClanActivityCountsAsync_Parms, SteamIDClans), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreFriendsAsyncActionDownloadClanActivityCounts_eventDownloadClanActivityCountsAsync_Parms, Timeout), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreFriendsAsyncActionDownloadClanActivityCounts_eventDownloadClanActivityCountsAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::NewProp_SteamIDClans_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::NewProp_SteamIDClans,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::NewProp_Timeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Friends|Async" },
		{ "Comment", "/**\n\x09* Refresh the Steam Group activity data or get the data from groups other than one that the current\n\x09* user is a member.\n\x09* After receiving the callback you can then use GetClanActivityCounts to get the up to date user counts.\n\x09*\n\x09* @param\x09SteamIDClans\x09""A list of steam groups to get the updated data for.\n\x09* @param\x09Timeout\x09\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Download Clan Activity Counts" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ToolTip", "Refresh the Steam Group activity data or get the data from groups other than one that the current\nuser is a member.\nAfter receiving the callback you can then use GetClanActivityCounts to get the up to date user counts.\n\n@param        SteamIDClans    A list of steam groups to get the updated data for.\n@param        Timeout                 How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts, nullptr, "DownloadClanActivityCountsAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::SteamCoreFriendsAsyncActionDownloadClanActivityCounts_eventDownloadClanActivityCountsAsync_Parms), Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics
	{
		struct SteamCoreFriendsAsyncActionDownloadClanActivityCounts_eventHandleCallback_Parms
		{
			FDownloadClanActivityCountsResult Data;
			bool bWasSuccessful;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreFriendsAsyncActionDownloadClanActivityCounts_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FDownloadClanActivityCountsResult, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::NewProp_Data_MetaData)) }; // 2680518778
	void Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((SteamCoreFriendsAsyncActionDownloadClanActivityCounts_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamCoreFriendsAsyncActionDownloadClanActivityCounts_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts, nullptr, "HandleCallback", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::SteamCoreFriendsAsyncActionDownloadClanActivityCounts_eventHandleCallback_Parms), Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreFriendsAsyncActionDownloadClanActivityCounts);
	UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_NoRegister()
	{
		return USteamCoreFriendsAsyncActionDownloadClanActivityCounts::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync, "DownloadClanActivityCountsAsync" }, // 3797459341
		{ &Z_Construct_UFunction_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_HandleCallback, "HandleCallback" }, // 3608237489
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreFriendsAsyncActionDownloadClanActivityCounts\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreFriendsAsyncActionDownloadClanActivityCounts\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamCoreFriendsAsyncActionDownloadClanActivityCounts, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnDownloadClanActivityCountsAsyncDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_Statics::NewProp_OnCallback_MetaData)) }; // 2977252669
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreFriendsAsyncActionDownloadClanActivityCounts>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts()
	{
		if (!Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts.OuterSingleton, Z_Construct_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts.OuterSingleton;
	}
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreFriendsAsyncActionDownloadClanActivityCounts>()
	{
		return USteamCoreFriendsAsyncActionDownloadClanActivityCounts::StaticClass();
	}
	USteamCoreFriendsAsyncActionDownloadClanActivityCounts::USteamCoreFriendsAsyncActionDownloadClanActivityCounts(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreFriendsAsyncActionDownloadClanActivityCounts);
	USteamCoreFriendsAsyncActionDownloadClanActivityCounts::~USteamCoreFriendsAsyncActionDownloadClanActivityCounts() {}
	DEFINE_FUNCTION(USteamCoreFriendsAsyncActionRequestClanOfficerList::execHandleCallback)
	{
		P_GET_STRUCT_REF(FClanOfficerListResponse,Z_Param_Out_Data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
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
	void USteamCoreFriendsAsyncActionRequestClanOfficerList::StaticRegisterNativesUSteamCoreFriendsAsyncActionRequestClanOfficerList()
	{
		UClass* Class = USteamCoreFriendsAsyncActionRequestClanOfficerList::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleCallback", &USteamCoreFriendsAsyncActionRequestClanOfficerList::execHandleCallback },
			{ "RequestClanOfficerListAsync", &USteamCoreFriendsAsyncActionRequestClanOfficerList::execRequestClanOfficerListAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics
	{
		struct SteamCoreFriendsAsyncActionRequestClanOfficerList_eventHandleCallback_Parms
		{
			FClanOfficerListResponse Data;
			bool bWasSuccessful;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreFriendsAsyncActionRequestClanOfficerList_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FClanOfficerListResponse, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::NewProp_Data_MetaData)) }; // 4173454109
	void Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((SteamCoreFriendsAsyncActionRequestClanOfficerList_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamCoreFriendsAsyncActionRequestClanOfficerList_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList, nullptr, "HandleCallback", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::SteamCoreFriendsAsyncActionRequestClanOfficerList_eventHandleCallback_Parms), Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics
	{
		struct SteamCoreFriendsAsyncActionRequestClanOfficerList_eventRequestClanOfficerListAsync_Parms
		{
			UObject* WorldContextObject;
			FSteamID SteamIDClan;
			float Timeout;
			USteamCoreFriendsAsyncActionRequestClanOfficerList* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreFriendsAsyncActionRequestClanOfficerList_eventRequestClanOfficerListAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreFriendsAsyncActionRequestClanOfficerList_eventRequestClanOfficerListAsync_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreFriendsAsyncActionRequestClanOfficerList_eventRequestClanOfficerListAsync_Parms, Timeout), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreFriendsAsyncActionRequestClanOfficerList_eventRequestClanOfficerListAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::NewProp_SteamIDClan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::NewProp_Timeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Friends|Async" },
		{ "Comment", "/**\n\x09* Requests information about a Steam group officers (administrators and moderators).\n\x09* You can only ask about Steam groups that a user is a member of.\n\x09* This won't download avatars for the officers automatically. If no avatar image is available for an officer, then call RequestUserInformation to download the avatar.\n\x09*\n\x09* @param\x09SteamIDClan\x09\x09The Steam group to get the officers list for.\n\x09* @param\x09Timeout\x09\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Request Clan Officer List" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ToolTip", "Requests information about a Steam group officers (administrators and moderators).\nYou can only ask about Steam groups that a user is a member of.\nThis won't download avatars for the officers automatically. If no avatar image is available for an officer, then call RequestUserInformation to download the avatar.\n\n@param        SteamIDClan             The Steam group to get the officers list for.\n@param        Timeout                 How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList, nullptr, "RequestClanOfficerListAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::SteamCoreFriendsAsyncActionRequestClanOfficerList_eventRequestClanOfficerListAsync_Parms), Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreFriendsAsyncActionRequestClanOfficerList);
	UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList_NoRegister()
	{
		return USteamCoreFriendsAsyncActionRequestClanOfficerList::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_HandleCallback, "HandleCallback" }, // 3602787234
		{ &Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync, "RequestClanOfficerListAsync" }, // 2299493082
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreFriendsAsyncActionRequestClanOfficerList\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreFriendsAsyncActionRequestClanOfficerList\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamCoreFriendsAsyncActionRequestClanOfficerList, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnRequestClanOfficerListAsyncDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList_Statics::NewProp_OnCallback_MetaData)) }; // 3174484394
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreFriendsAsyncActionRequestClanOfficerList>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList()
	{
		if (!Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList.OuterSingleton, Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList.OuterSingleton;
	}
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreFriendsAsyncActionRequestClanOfficerList>()
	{
		return USteamCoreFriendsAsyncActionRequestClanOfficerList::StaticClass();
	}
	USteamCoreFriendsAsyncActionRequestClanOfficerList::USteamCoreFriendsAsyncActionRequestClanOfficerList(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreFriendsAsyncActionRequestClanOfficerList);
	USteamCoreFriendsAsyncActionRequestClanOfficerList::~USteamCoreFriendsAsyncActionRequestClanOfficerList() {}
	DEFINE_FUNCTION(USteamCoreFriendsAsyncActionJoinClanChatRoom::execHandleCallback)
	{
		P_GET_STRUCT_REF(FJoinClanChatRoomCompletionResult,Z_Param_Out_Data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
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
	void USteamCoreFriendsAsyncActionJoinClanChatRoom::StaticRegisterNativesUSteamCoreFriendsAsyncActionJoinClanChatRoom()
	{
		UClass* Class = USteamCoreFriendsAsyncActionJoinClanChatRoom::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleCallback", &USteamCoreFriendsAsyncActionJoinClanChatRoom::execHandleCallback },
			{ "JoinClanChatRoomAsync", &USteamCoreFriendsAsyncActionJoinClanChatRoom::execJoinClanChatRoomAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics
	{
		struct SteamCoreFriendsAsyncActionJoinClanChatRoom_eventHandleCallback_Parms
		{
			FJoinClanChatRoomCompletionResult Data;
			bool bWasSuccessful;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreFriendsAsyncActionJoinClanChatRoom_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FJoinClanChatRoomCompletionResult, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::NewProp_Data_MetaData)) }; // 1491884566
	void Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((SteamCoreFriendsAsyncActionJoinClanChatRoom_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamCoreFriendsAsyncActionJoinClanChatRoom_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom, nullptr, "HandleCallback", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::SteamCoreFriendsAsyncActionJoinClanChatRoom_eventHandleCallback_Parms), Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics
	{
		struct SteamCoreFriendsAsyncActionJoinClanChatRoom_eventJoinClanChatRoomAsync_Parms
		{
			UObject* WorldContextObject;
			FSteamID SteamIDClan;
			float Timeout;
			USteamCoreFriendsAsyncActionJoinClanChatRoom* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreFriendsAsyncActionJoinClanChatRoom_eventJoinClanChatRoomAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreFriendsAsyncActionJoinClanChatRoom_eventJoinClanChatRoomAsync_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreFriendsAsyncActionJoinClanChatRoom_eventJoinClanChatRoomAsync_Parms, Timeout), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreFriendsAsyncActionJoinClanChatRoom_eventJoinClanChatRoomAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::NewProp_SteamIDClan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::NewProp_Timeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Friends|Async" },
		{ "Comment", "/**\n\x09* Allows the user to join Steam group (clan) chats right within the game.\n\x09* The behavior is somewhat complicated, because the user may or may not be already in the group chat from outside the game or in the overlay.\n\x09* You can use ActivateGameOverlayToUser to open the in-game overlay version of the chat.\n\x09*\n\x09* @param\x09SteamIDClan\x09\x09The Steam ID of the Steam group to join.\n\x09* @param\x09Timeout\x09\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Join Clan Chat Room" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ToolTip", "Allows the user to join Steam group (clan) chats right within the game.\nThe behavior is somewhat complicated, because the user may or may not be already in the group chat from outside the game or in the overlay.\nYou can use ActivateGameOverlayToUser to open the in-game overlay version of the chat.\n\n@param        SteamIDClan             The Steam ID of the Steam group to join.\n@param        Timeout                 How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom, nullptr, "JoinClanChatRoomAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::SteamCoreFriendsAsyncActionJoinClanChatRoom_eventJoinClanChatRoomAsync_Parms), Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreFriendsAsyncActionJoinClanChatRoom);
	UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom_NoRegister()
	{
		return USteamCoreFriendsAsyncActionJoinClanChatRoom::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_HandleCallback, "HandleCallback" }, // 1163900716
		{ &Z_Construct_UFunction_USteamCoreFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync, "JoinClanChatRoomAsync" }, // 2931613202
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreFriendsAsyncActionJoinClanChatRoom\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreFriendsAsyncActionJoinClanChatRoom\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamCoreFriendsAsyncActionJoinClanChatRoom, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnJoinClanChatRoomAsyncDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom_Statics::NewProp_OnCallback_MetaData)) }; // 1394627111
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreFriendsAsyncActionJoinClanChatRoom>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom()
	{
		if (!Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom.OuterSingleton, Z_Construct_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom.OuterSingleton;
	}
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreFriendsAsyncActionJoinClanChatRoom>()
	{
		return USteamCoreFriendsAsyncActionJoinClanChatRoom::StaticClass();
	}
	USteamCoreFriendsAsyncActionJoinClanChatRoom::USteamCoreFriendsAsyncActionJoinClanChatRoom(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreFriendsAsyncActionJoinClanChatRoom);
	USteamCoreFriendsAsyncActionJoinClanChatRoom::~USteamCoreFriendsAsyncActionJoinClanChatRoom() {}
	DEFINE_FUNCTION(USteamCoreFriendsAsyncActionEnumerateFollowingList::execHandleCallback)
	{
		P_GET_STRUCT_REF(FFriendsEnumerateFollowingList,Z_Param_Out_Data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
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
	void USteamCoreFriendsAsyncActionEnumerateFollowingList::StaticRegisterNativesUSteamCoreFriendsAsyncActionEnumerateFollowingList()
	{
		UClass* Class = USteamCoreFriendsAsyncActionEnumerateFollowingList::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnumerateFollowingListAsync", &USteamCoreFriendsAsyncActionEnumerateFollowingList::execEnumerateFollowingListAsync },
			{ "HandleCallback", &USteamCoreFriendsAsyncActionEnumerateFollowingList::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics
	{
		struct SteamCoreFriendsAsyncActionEnumerateFollowingList_eventEnumerateFollowingListAsync_Parms
		{
			UObject* WorldContextObject;
			int32 StartIndex;
			float Timeout;
			USteamCoreFriendsAsyncActionEnumerateFollowingList* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreFriendsAsyncActionEnumerateFollowingList_eventEnumerateFollowingListAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::NewProp_StartIndex = { "StartIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreFriendsAsyncActionEnumerateFollowingList_eventEnumerateFollowingListAsync_Parms, StartIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreFriendsAsyncActionEnumerateFollowingList_eventEnumerateFollowingListAsync_Parms, Timeout), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreFriendsAsyncActionEnumerateFollowingList_eventEnumerateFollowingListAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::NewProp_StartIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::NewProp_Timeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Friends|Async" },
		{ "Comment", "/**\n\x09* Gets the list of users that the current user is following.\n\x09* You can be following people that are not your friends.\n\x09* Following allows you to receive updates when the person does things like\n\x09* post a new piece of content to the Steam Workshop.\n\x09*\n\x09* @param\x09StartIndex\x09The index to start receiving followers from. This should be 0 on the initial call.\n\x09* @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Enumerate Following List" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ToolTip", "Gets the list of users that the current user is following.\nYou can be following people that are not your friends.\nFollowing allows you to receive updates when the person does things like\npost a new piece of content to the Steam Workshop.\n\n@param        StartIndex      The index to start receiving followers from. This should be 0 on the initial call.\n@param        Timeout         How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList, nullptr, "EnumerateFollowingListAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::SteamCoreFriendsAsyncActionEnumerateFollowingList_eventEnumerateFollowingListAsync_Parms), Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics
	{
		struct SteamCoreFriendsAsyncActionEnumerateFollowingList_eventHandleCallback_Parms
		{
			FFriendsEnumerateFollowingList Data;
			bool bWasSuccessful;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreFriendsAsyncActionEnumerateFollowingList_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FFriendsEnumerateFollowingList, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::NewProp_Data_MetaData)) }; // 3881129984
	void Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((SteamCoreFriendsAsyncActionEnumerateFollowingList_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamCoreFriendsAsyncActionEnumerateFollowingList_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList, nullptr, "HandleCallback", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::SteamCoreFriendsAsyncActionEnumerateFollowingList_eventHandleCallback_Parms), Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreFriendsAsyncActionEnumerateFollowingList);
	UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList_NoRegister()
	{
		return USteamCoreFriendsAsyncActionEnumerateFollowingList::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync, "EnumerateFollowingListAsync" }, // 487539209
		{ &Z_Construct_UFunction_USteamCoreFriendsAsyncActionEnumerateFollowingList_HandleCallback, "HandleCallback" }, // 2763966105
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreFriendsAsyncActionEnumerateFollowingList\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreFriendsAsyncActionEnumerateFollowingList\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamCoreFriendsAsyncActionEnumerateFollowingList, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnEnumerateFollowingListAsyncDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList_Statics::NewProp_OnCallback_MetaData)) }; // 2390773506
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreFriendsAsyncActionEnumerateFollowingList>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList()
	{
		if (!Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList.OuterSingleton, Z_Construct_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList.OuterSingleton;
	}
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreFriendsAsyncActionEnumerateFollowingList>()
	{
		return USteamCoreFriendsAsyncActionEnumerateFollowingList::StaticClass();
	}
	USteamCoreFriendsAsyncActionEnumerateFollowingList::USteamCoreFriendsAsyncActionEnumerateFollowingList(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreFriendsAsyncActionEnumerateFollowingList);
	USteamCoreFriendsAsyncActionEnumerateFollowingList::~USteamCoreFriendsAsyncActionEnumerateFollowingList() {}
	DEFINE_FUNCTION(USteamCoreFriendsAsyncActionIsFollowing::execHandleCallback)
	{
		P_GET_STRUCT_REF(FFriendsIsFollowing,Z_Param_Out_Data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
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
	void USteamCoreFriendsAsyncActionIsFollowing::StaticRegisterNativesUSteamCoreFriendsAsyncActionIsFollowing()
	{
		UClass* Class = USteamCoreFriendsAsyncActionIsFollowing::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleCallback", &USteamCoreFriendsAsyncActionIsFollowing::execHandleCallback },
			{ "IsFollowingAsync", &USteamCoreFriendsAsyncActionIsFollowing::execIsFollowingAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_HandleCallback_Statics
	{
		struct SteamCoreFriendsAsyncActionIsFollowing_eventHandleCallback_Parms
		{
			FFriendsIsFollowing Data;
			bool bWasSuccessful;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_HandleCallback_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreFriendsAsyncActionIsFollowing_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FFriendsIsFollowing, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_HandleCallback_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_HandleCallback_Statics::NewProp_Data_MetaData)) }; // 3600745523
	void Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((SteamCoreFriendsAsyncActionIsFollowing_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamCoreFriendsAsyncActionIsFollowing_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_HandleCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_HandleCallback_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_HandleCallback_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreFriendsAsyncActionIsFollowing, nullptr, "HandleCallback", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_HandleCallback_Statics::SteamCoreFriendsAsyncActionIsFollowing_eventHandleCallback_Parms), Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics
	{
		struct SteamCoreFriendsAsyncActionIsFollowing_eventIsFollowingAsync_Parms
		{
			UObject* WorldContextObject;
			FSteamID SteamID;
			float Timeout;
			USteamCoreFriendsAsyncActionIsFollowing* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreFriendsAsyncActionIsFollowing_eventIsFollowingAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreFriendsAsyncActionIsFollowing_eventIsFollowingAsync_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreFriendsAsyncActionIsFollowing_eventIsFollowingAsync_Parms, Timeout), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreFriendsAsyncActionIsFollowing_eventIsFollowingAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreFriendsAsyncActionIsFollowing_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::NewProp_SteamID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::NewProp_Timeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Friends|Async" },
		{ "Comment", "/**\n\x09* Checks if the current user is following the specified user.\n\x09*\n\x09* @param\x09SteamID\x09\x09The Steam ID of the check if we are following.\n\x09* @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Is Following" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ToolTip", "Checks if the current user is following the specified user.\n\n@param        SteamID         The Steam ID of the check if we are following.\n@param        Timeout         How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreFriendsAsyncActionIsFollowing, nullptr, "IsFollowingAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::SteamCoreFriendsAsyncActionIsFollowing_eventIsFollowingAsync_Parms), Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_IsFollowingAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_IsFollowingAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreFriendsAsyncActionIsFollowing);
	UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionIsFollowing_NoRegister()
	{
		return USteamCoreFriendsAsyncActionIsFollowing::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreFriendsAsyncActionIsFollowing_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreFriendsAsyncActionIsFollowing_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreFriendsAsyncActionIsFollowing_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_HandleCallback, "HandleCallback" }, // 4265133395
		{ &Z_Construct_UFunction_USteamCoreFriendsAsyncActionIsFollowing_IsFollowingAsync, "IsFollowingAsync" }, // 700978757
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreFriendsAsyncActionIsFollowing_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreFriendsAsyncActionIsFollowing\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreFriendsAsyncActionIsFollowing\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreFriendsAsyncActionIsFollowing_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreFriendsAsyncActionIsFollowing_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamCoreFriendsAsyncActionIsFollowing, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnIsFollowingAsyncDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreFriendsAsyncActionIsFollowing_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFriendsAsyncActionIsFollowing_Statics::NewProp_OnCallback_MetaData)) }; // 784768405
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreFriendsAsyncActionIsFollowing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreFriendsAsyncActionIsFollowing_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreFriendsAsyncActionIsFollowing_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreFriendsAsyncActionIsFollowing>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreFriendsAsyncActionIsFollowing_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFriendsAsyncActionIsFollowing_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionIsFollowing()
	{
		if (!Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionIsFollowing.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionIsFollowing.OuterSingleton, Z_Construct_UClass_USteamCoreFriendsAsyncActionIsFollowing_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionIsFollowing.OuterSingleton;
	}
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreFriendsAsyncActionIsFollowing>()
	{
		return USteamCoreFriendsAsyncActionIsFollowing::StaticClass();
	}
	USteamCoreFriendsAsyncActionIsFollowing::USteamCoreFriendsAsyncActionIsFollowing(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreFriendsAsyncActionIsFollowing);
	USteamCoreFriendsAsyncActionIsFollowing::~USteamCoreFriendsAsyncActionIsFollowing() {}
	DEFINE_FUNCTION(USteamCoreFriendsAsyncActionGetFollowerCount::execHandleCallback)
	{
		P_GET_STRUCT_REF(FFriendsGetFollowerCount,Z_Param_Out_Data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
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
	void USteamCoreFriendsAsyncActionGetFollowerCount::StaticRegisterNativesUSteamCoreFriendsAsyncActionGetFollowerCount()
	{
		UClass* Class = USteamCoreFriendsAsyncActionGetFollowerCount::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFollowerCountAsync", &USteamCoreFriendsAsyncActionGetFollowerCount::execGetFollowerCountAsync },
			{ "HandleCallback", &USteamCoreFriendsAsyncActionGetFollowerCount::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics
	{
		struct SteamCoreFriendsAsyncActionGetFollowerCount_eventGetFollowerCountAsync_Parms
		{
			UObject* WorldContextObject;
			FSteamID SteamID;
			float Timeout;
			USteamCoreFriendsAsyncActionGetFollowerCount* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreFriendsAsyncActionGetFollowerCount_eventGetFollowerCountAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreFriendsAsyncActionGetFollowerCount_eventGetFollowerCountAsync_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreFriendsAsyncActionGetFollowerCount_eventGetFollowerCountAsync_Parms, Timeout), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreFriendsAsyncActionGetFollowerCount_eventGetFollowerCountAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreFriendsAsyncActionGetFollowerCount_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::NewProp_SteamID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::NewProp_Timeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Friends|Async" },
		{ "Comment", "/**\n\x09* Gets the number of users following the specified user.\n\x09*\n\x09* @param\x09SteamID\x09\x09The user to get the follower count for.\n\x09* @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Get Follower Count" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ToolTip", "Gets the number of users following the specified user.\n\n@param        SteamID         The user to get the follower count for.\n@param        Timeout         How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreFriendsAsyncActionGetFollowerCount, nullptr, "GetFollowerCountAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::SteamCoreFriendsAsyncActionGetFollowerCount_eventGetFollowerCountAsync_Parms), Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_HandleCallback_Statics
	{
		struct SteamCoreFriendsAsyncActionGetFollowerCount_eventHandleCallback_Parms
		{
			FFriendsGetFollowerCount Data;
			bool bWasSuccessful;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreFriendsAsyncActionGetFollowerCount_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FFriendsGetFollowerCount, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::NewProp_Data_MetaData)) }; // 3017430637
	void Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((SteamCoreFriendsAsyncActionGetFollowerCount_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamCoreFriendsAsyncActionGetFollowerCount_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreFriendsAsyncActionGetFollowerCount, nullptr, "HandleCallback", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::SteamCoreFriendsAsyncActionGetFollowerCount_eventHandleCallback_Parms), Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreFriendsAsyncActionGetFollowerCount);
	UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionGetFollowerCount_NoRegister()
	{
		return USteamCoreFriendsAsyncActionGetFollowerCount::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreFriendsAsyncActionGetFollowerCount_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreFriendsAsyncActionGetFollowerCount_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreFriendsAsyncActionGetFollowerCount_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync, "GetFollowerCountAsync" }, // 155343677
		{ &Z_Construct_UFunction_USteamCoreFriendsAsyncActionGetFollowerCount_HandleCallback, "HandleCallback" }, // 1938460770
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreFriendsAsyncActionGetFollowerCount_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreFriendsAsyncActionGetFollowerCount\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreFriendsAsyncActionGetFollowerCount\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreFriendsAsyncActionGetFollowerCount_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreFriendsAsyncActionGetFollowerCount_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamCoreFriendsAsyncActionGetFollowerCount, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnGetFollowerCountAsyncDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreFriendsAsyncActionGetFollowerCount_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFriendsAsyncActionGetFollowerCount_Statics::NewProp_OnCallback_MetaData)) }; // 2710390365
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreFriendsAsyncActionGetFollowerCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreFriendsAsyncActionGetFollowerCount_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreFriendsAsyncActionGetFollowerCount_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreFriendsAsyncActionGetFollowerCount>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreFriendsAsyncActionGetFollowerCount_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFriendsAsyncActionGetFollowerCount_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionGetFollowerCount()
	{
		if (!Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionGetFollowerCount.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionGetFollowerCount.OuterSingleton, Z_Construct_UClass_USteamCoreFriendsAsyncActionGetFollowerCount_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionGetFollowerCount.OuterSingleton;
	}
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreFriendsAsyncActionGetFollowerCount>()
	{
		return USteamCoreFriendsAsyncActionGetFollowerCount::StaticClass();
	}
	USteamCoreFriendsAsyncActionGetFollowerCount::USteamCoreFriendsAsyncActionGetFollowerCount(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreFriendsAsyncActionGetFollowerCount);
	USteamCoreFriendsAsyncActionGetFollowerCount::~USteamCoreFriendsAsyncActionGetFollowerCount() {}
	DEFINE_FUNCTION(USteamCoreFriendsAsyncActionRequestUserInformation::execHandleCallback)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback();
		P_NATIVE_END;
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
	void USteamCoreFriendsAsyncActionRequestUserInformation::StaticRegisterNativesUSteamCoreFriendsAsyncActionRequestUserInformation()
	{
		UClass* Class = USteamCoreFriendsAsyncActionRequestUserInformation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleCallback", &USteamCoreFriendsAsyncActionRequestUserInformation::execHandleCallback },
			{ "RequestUserInformationAsync", &USteamCoreFriendsAsyncActionRequestUserInformation::execRequestUserInformationAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_HandleCallback_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation, nullptr, "HandleCallback", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
		static void NewProp_bRequireNameOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireNameOnly;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreFriendsAsyncActionRequestUserInformation_eventRequestUserInformationAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreFriendsAsyncActionRequestUserInformation_eventRequestUserInformationAsync_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	void Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::NewProp_bRequireNameOnly_SetBit(void* Obj)
	{
		((SteamCoreFriendsAsyncActionRequestUserInformation_eventRequestUserInformationAsync_Parms*)Obj)->bRequireNameOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::NewProp_bRequireNameOnly = { "bRequireNameOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamCoreFriendsAsyncActionRequestUserInformation_eventRequestUserInformationAsync_Parms), &Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::NewProp_bRequireNameOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreFriendsAsyncActionRequestUserInformation_eventRequestUserInformationAsync_Parms, Timeout), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreFriendsAsyncActionRequestUserInformation_eventRequestUserInformationAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::NewProp_SteamIDUser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::NewProp_bRequireNameOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::NewProp_Timeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Friends|Async" },
		{ "Comment", "/**\n\x09* Requests the persona name and optionally the avatar of a specified user.\n\x09*\n\x09* Using this node you don't have to bind any OnPersonaStateChange callback delegate, it's handled automatically with this node.\n\x09*\n\x09* @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Request User Information (Async)" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ToolTip", "Requests the persona name and optionally the avatar of a specified user.\n\nUsing this node you don't have to bind any OnPersonaStateChange callback delegate, it's handled automatically with this node.\n\n@param        Timeout         How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation, nullptr, "RequestUserInformationAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::SteamCoreFriendsAsyncActionRequestUserInformation_eventRequestUserInformationAsync_Parms), Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreFriendsAsyncActionRequestUserInformation);
	UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation_NoRegister()
	{
		return USteamCoreFriendsAsyncActionRequestUserInformation::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_HandleCallback, "HandleCallback" }, // 3860692947
		{ &Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync, "RequestUserInformationAsync" }, // 2426080442
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreFriendsAsyncActionRequestUserInformation\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreFriendsAsyncActionRequestUserInformation\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation_Statics::NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriendsAsyncActions.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamCoreFriendsAsyncActionRequestUserInformation, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnRequestUserInformationAsyncDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation_Statics::NewProp_OnCallback_MetaData)) }; // 819096006
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreFriendsAsyncActionRequestUserInformation>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation()
	{
		if (!Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionRequestUserInformation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionRequestUserInformation.OuterSingleton, Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionRequestUserInformation.OuterSingleton;
	}
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreFriendsAsyncActionRequestUserInformation>()
	{
		return USteamCoreFriendsAsyncActionRequestUserInformation::StaticClass();
	}
	USteamCoreFriendsAsyncActionRequestUserInformation::USteamCoreFriendsAsyncActionRequestUserInformation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreFriendsAsyncActionRequestUserInformation);
	USteamCoreFriendsAsyncActionRequestUserInformation::~USteamCoreFriendsAsyncActionRequestUserInformation() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName, USteamCoreFriendsAsyncActionSetPersonaName::StaticClass, TEXT("USteamCoreFriendsAsyncActionSetPersonaName"), &Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionSetPersonaName, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreFriendsAsyncActionSetPersonaName), 1545656754U) },
		{ Z_Construct_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts, USteamCoreFriendsAsyncActionDownloadClanActivityCounts::StaticClass, TEXT("USteamCoreFriendsAsyncActionDownloadClanActivityCounts"), &Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreFriendsAsyncActionDownloadClanActivityCounts), 1104066690U) },
		{ Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList, USteamCoreFriendsAsyncActionRequestClanOfficerList::StaticClass, TEXT("USteamCoreFriendsAsyncActionRequestClanOfficerList"), &Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreFriendsAsyncActionRequestClanOfficerList), 2278891425U) },
		{ Z_Construct_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom, USteamCoreFriendsAsyncActionJoinClanChatRoom::StaticClass, TEXT("USteamCoreFriendsAsyncActionJoinClanChatRoom"), &Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreFriendsAsyncActionJoinClanChatRoom), 2210665784U) },
		{ Z_Construct_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList, USteamCoreFriendsAsyncActionEnumerateFollowingList::StaticClass, TEXT("USteamCoreFriendsAsyncActionEnumerateFollowingList"), &Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreFriendsAsyncActionEnumerateFollowingList), 4061791644U) },
		{ Z_Construct_UClass_USteamCoreFriendsAsyncActionIsFollowing, USteamCoreFriendsAsyncActionIsFollowing::StaticClass, TEXT("USteamCoreFriendsAsyncActionIsFollowing"), &Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionIsFollowing, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreFriendsAsyncActionIsFollowing), 4018132242U) },
		{ Z_Construct_UClass_USteamCoreFriendsAsyncActionGetFollowerCount, USteamCoreFriendsAsyncActionGetFollowerCount::StaticClass, TEXT("USteamCoreFriendsAsyncActionGetFollowerCount"), &Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionGetFollowerCount, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreFriendsAsyncActionGetFollowerCount), 4049347885U) },
		{ Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation, USteamCoreFriendsAsyncActionRequestUserInformation::StaticClass, TEXT("USteamCoreFriendsAsyncActionRequestUserInformation"), &Z_Registration_Info_UClass_USteamCoreFriendsAsyncActionRequestUserInformation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreFriendsAsyncActionRequestUserInformation), 2402587742U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_1581897733(TEXT("/Script/SteamCore"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriendsAsyncActions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
