// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamRemotePlay/SteamRemotePlay.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
#include "SteamCore/Public/SteamCore/SteamTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamRemotePlay() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_URemotePlay();
	STEAMCORE_API UClass* Z_Construct_UClass_URemotePlay_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreDeviceFormFactor();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionConnected__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionDisconnected__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	DEFINE_FUNCTION(URemotePlay::execBSendRemotePlayTogetherInvite)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BSendRemotePlayTogetherInvite(Z_Param_SteamIDFriend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemotePlay::execBGetSessionClientResolution)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SessionID);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_ResolutionX);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_ResolutionY);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BGetSessionClientResolution(Z_Param_SessionID,Z_Param_Out_ResolutionX,Z_Param_Out_ResolutionY);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemotePlay::execGetSessionClientFormFactor)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SessionID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamCoreDeviceFormFactor*)Z_Param__Result=P_THIS->GetSessionClientFormFactor(Z_Param_SessionID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemotePlay::execGetSessionClientName)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SessionID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetSessionClientName(Z_Param_SessionID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemotePlay::execGetSessionSteamID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SessionID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=P_THIS->GetSessionSteamID(Z_Param_SessionID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemotePlay::execGetSessionID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SessionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSessionID(Z_Param_SessionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemotePlay::execGetSessionCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSessionCount();
		P_NATIVE_END;
	}
	void URemotePlay::StaticRegisterNativesURemotePlay()
	{
		UClass* Class = URemotePlay::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BGetSessionClientResolution", &URemotePlay::execBGetSessionClientResolution },
			{ "BSendRemotePlayTogetherInvite", &URemotePlay::execBSendRemotePlayTogetherInvite },
			{ "GetSessionClientFormFactor", &URemotePlay::execGetSessionClientFormFactor },
			{ "GetSessionClientName", &URemotePlay::execGetSessionClientName },
			{ "GetSessionCount", &URemotePlay::execGetSessionCount },
			{ "GetSessionID", &URemotePlay::execGetSessionID },
			{ "GetSessionSteamID", &URemotePlay::execGetSessionSteamID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution_Statics
	{
		struct RemotePlay_eventBGetSessionClientResolution_Parms
		{
			int32 SessionID;
			int32 ResolutionX;
			int32 ResolutionY;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SessionID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ResolutionX;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ResolutionY;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemotePlay_eventBGetSessionClientResolution_Parms, SessionID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution_Statics::NewProp_ResolutionX = { "ResolutionX", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemotePlay_eventBGetSessionClientResolution_Parms, ResolutionX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution_Statics::NewProp_ResolutionY = { "ResolutionY", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemotePlay_eventBGetSessionClientResolution_Parms, ResolutionY), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemotePlay_eventBGetSessionClientResolution_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RemotePlay_eventBGetSessionClientResolution_Parms), &Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution_Statics::NewProp_SessionID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution_Statics::NewProp_ResolutionX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution_Statics::NewProp_ResolutionY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemotePlay" },
		{ "Comment", "/**\n\x09* Get the resolution, in pixels, of the session client device. This is set to 0x0 if the resolution is not available.\n\x09*\n\x09* @param\x09SessionID\x09\x09The session ID to get information about\n\x09* @param\x09ResolutionX\x09\x09""A pointer to a variable to fill with the device resolution width\n\x09* @param\x09ResolutionY\x09\x09""A pointer to a variable to fill with the device resolution height\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlay.h" },
		{ "ToolTip", "Get the resolution, in pixels, of the session client device. This is set to 0x0 if the resolution is not available.\n\n@param        SessionID               The session ID to get information about\n@param        ResolutionX             A pointer to a variable to fill with the device resolution width\n@param        ResolutionY             A pointer to a variable to fill with the device resolution height" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemotePlay, nullptr, "BGetSessionClientResolution", nullptr, nullptr, sizeof(Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution_Statics::RemotePlay_eventBGetSessionClientResolution_Parms), Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemotePlay_BSendRemotePlayTogetherInvite_Statics
	{
		struct RemotePlay_eventBSendRemotePlayTogetherInvite_Parms
		{
			FSteamID SteamIDFriend;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URemotePlay_BSendRemotePlayTogetherInvite_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemotePlay_eventBSendRemotePlayTogetherInvite_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	void Z_Construct_UFunction_URemotePlay_BSendRemotePlayTogetherInvite_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemotePlay_eventBSendRemotePlayTogetherInvite_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemotePlay_BSendRemotePlayTogetherInvite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RemotePlay_eventBSendRemotePlayTogetherInvite_Parms), &Z_Construct_UFunction_URemotePlay_BSendRemotePlayTogetherInvite_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemotePlay_BSendRemotePlayTogetherInvite_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemotePlay_BSendRemotePlayTogetherInvite_Statics::NewProp_SteamIDFriend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemotePlay_BSendRemotePlayTogetherInvite_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemotePlay_BSendRemotePlayTogetherInvite_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemotePlay" },
		{ "Comment", "/**\n\x09* Invite a friend to join the game using Remote Play Together\n\x09*\n\x09* @param\x09SteamIDFriend\x09\x09The Steam ID of the friend you'd like to invite\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlay.h" },
		{ "ToolTip", "Invite a friend to join the game using Remote Play Together\n\n@param        SteamIDFriend           The Steam ID of the friend you'd like to invite" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URemotePlay_BSendRemotePlayTogetherInvite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemotePlay, nullptr, "BSendRemotePlayTogetherInvite", nullptr, nullptr, sizeof(Z_Construct_UFunction_URemotePlay_BSendRemotePlayTogetherInvite_Statics::RemotePlay_eventBSendRemotePlayTogetherInvite_Parms), Z_Construct_UFunction_URemotePlay_BSendRemotePlayTogetherInvite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemotePlay_BSendRemotePlayTogetherInvite_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemotePlay_BSendRemotePlayTogetherInvite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemotePlay_BSendRemotePlayTogetherInvite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemotePlay_BSendRemotePlayTogetherInvite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URemotePlay_BSendRemotePlayTogetherInvite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemotePlay_GetSessionClientFormFactor_Statics
	{
		struct RemotePlay_eventGetSessionClientFormFactor_Parms
		{
			int32 SessionID;
			ESteamCoreDeviceFormFactor ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SessionID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemotePlay_GetSessionClientFormFactor_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemotePlay_eventGetSessionClientFormFactor_Parms, SessionID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URemotePlay_GetSessionClientFormFactor_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URemotePlay_GetSessionClientFormFactor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemotePlay_eventGetSessionClientFormFactor_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamCoreDeviceFormFactor, METADATA_PARAMS(nullptr, 0) }; // 3502350453
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemotePlay_GetSessionClientFormFactor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemotePlay_GetSessionClientFormFactor_Statics::NewProp_SessionID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemotePlay_GetSessionClientFormFactor_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemotePlay_GetSessionClientFormFactor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemotePlay_GetSessionClientFormFactor_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemotePlay" },
		{ "Comment", "/**\n\x09* Get the form factor of the session client device\n\x09*\n\x09* @param\x09SessionID\x09The session ID to get information about\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlay.h" },
		{ "ToolTip", "Get the form factor of the session client device\n\n@param        SessionID       The session ID to get information about" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URemotePlay_GetSessionClientFormFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemotePlay, nullptr, "GetSessionClientFormFactor", nullptr, nullptr, sizeof(Z_Construct_UFunction_URemotePlay_GetSessionClientFormFactor_Statics::RemotePlay_eventGetSessionClientFormFactor_Parms), Z_Construct_UFunction_URemotePlay_GetSessionClientFormFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemotePlay_GetSessionClientFormFactor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemotePlay_GetSessionClientFormFactor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemotePlay_GetSessionClientFormFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemotePlay_GetSessionClientFormFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URemotePlay_GetSessionClientFormFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemotePlay_GetSessionClientName_Statics
	{
		struct RemotePlay_eventGetSessionClientName_Parms
		{
			int32 SessionID;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SessionID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemotePlay_GetSessionClientName_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemotePlay_eventGetSessionClientName_Parms, SessionID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URemotePlay_GetSessionClientName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemotePlay_eventGetSessionClientName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemotePlay_GetSessionClientName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemotePlay_GetSessionClientName_Statics::NewProp_SessionID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemotePlay_GetSessionClientName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemotePlay_GetSessionClientName_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemotePlay" },
		{ "Comment", "/**\n\x09* Get the name of the session client device\n\x09*\n\x09* @param\x09SessionID\x09The session ID to get information about\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlay.h" },
		{ "ToolTip", "Get the name of the session client device\n\n@param        SessionID       The session ID to get information about" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URemotePlay_GetSessionClientName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemotePlay, nullptr, "GetSessionClientName", nullptr, nullptr, sizeof(Z_Construct_UFunction_URemotePlay_GetSessionClientName_Statics::RemotePlay_eventGetSessionClientName_Parms), Z_Construct_UFunction_URemotePlay_GetSessionClientName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemotePlay_GetSessionClientName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemotePlay_GetSessionClientName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemotePlay_GetSessionClientName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemotePlay_GetSessionClientName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URemotePlay_GetSessionClientName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemotePlay_GetSessionCount_Statics
	{
		struct RemotePlay_eventGetSessionCount_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemotePlay_GetSessionCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemotePlay_eventGetSessionCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemotePlay_GetSessionCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemotePlay_GetSessionCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemotePlay_GetSessionCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemotePlay" },
		{ "Comment", "/**\n\x09* Get the number of currently connected Steam Remote Play sessions\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlay.h" },
		{ "ToolTip", "Get the number of currently connected Steam Remote Play sessions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URemotePlay_GetSessionCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemotePlay, nullptr, "GetSessionCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_URemotePlay_GetSessionCount_Statics::RemotePlay_eventGetSessionCount_Parms), Z_Construct_UFunction_URemotePlay_GetSessionCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemotePlay_GetSessionCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemotePlay_GetSessionCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemotePlay_GetSessionCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemotePlay_GetSessionCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URemotePlay_GetSessionCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemotePlay_GetSessionID_Statics
	{
		struct RemotePlay_eventGetSessionID_Parms
		{
			int32 SessionIndex;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SessionIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemotePlay_GetSessionID_Statics::NewProp_SessionIndex = { "SessionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemotePlay_eventGetSessionID_Parms, SessionIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemotePlay_GetSessionID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemotePlay_eventGetSessionID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemotePlay_GetSessionID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemotePlay_GetSessionID_Statics::NewProp_SessionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemotePlay_GetSessionID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemotePlay_GetSessionID_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemotePlay" },
		{ "Comment", "/**\n\x09* Get the currently connected Steam Remote Play session ID at the specified index\n\x09*\n\x09* @param\x09SessionIndex\x09The index of the specified session\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlay.h" },
		{ "ToolTip", "Get the currently connected Steam Remote Play session ID at the specified index\n\n@param        SessionIndex    The index of the specified session" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URemotePlay_GetSessionID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemotePlay, nullptr, "GetSessionID", nullptr, nullptr, sizeof(Z_Construct_UFunction_URemotePlay_GetSessionID_Statics::RemotePlay_eventGetSessionID_Parms), Z_Construct_UFunction_URemotePlay_GetSessionID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemotePlay_GetSessionID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemotePlay_GetSessionID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemotePlay_GetSessionID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemotePlay_GetSessionID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URemotePlay_GetSessionID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemotePlay_GetSessionSteamID_Statics
	{
		struct RemotePlay_eventGetSessionSteamID_Parms
		{
			int32 SessionID;
			FSteamID ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SessionID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemotePlay_GetSessionSteamID_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemotePlay_eventGetSessionSteamID_Parms, SessionID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URemotePlay_GetSessionSteamID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemotePlay_eventGetSessionSteamID_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemotePlay_GetSessionSteamID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemotePlay_GetSessionSteamID_Statics::NewProp_SessionID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemotePlay_GetSessionSteamID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemotePlay_GetSessionSteamID_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemotePlay" },
		{ "Comment", "/**\n\x09* Get the SteamID of the connected user\n\x09*\n\x09* @param\x09SessionID\x09The session ID to get information about\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlay.h" },
		{ "ToolTip", "Get the SteamID of the connected user\n\n@param        SessionID       The session ID to get information about" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URemotePlay_GetSessionSteamID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemotePlay, nullptr, "GetSessionSteamID", nullptr, nullptr, sizeof(Z_Construct_UFunction_URemotePlay_GetSessionSteamID_Statics::RemotePlay_eventGetSessionSteamID_Parms), Z_Construct_UFunction_URemotePlay_GetSessionSteamID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemotePlay_GetSessionSteamID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemotePlay_GetSessionSteamID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemotePlay_GetSessionSteamID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemotePlay_GetSessionSteamID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URemotePlay_GetSessionSteamID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URemotePlay);
	UClass* Z_Construct_UClass_URemotePlay_NoRegister()
	{
		return URemotePlay::StaticClass();
	}
	struct Z_Construct_UClass_URemotePlay_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamRemotePlaySessionConnected_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamRemotePlaySessionConnected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamRemotePlaySessionDisconnected_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamRemotePlaySessionDisconnected;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URemotePlay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URemotePlay_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution, "BGetSessionClientResolution" }, // 660001876
		{ &Z_Construct_UFunction_URemotePlay_BSendRemotePlayTogetherInvite, "BSendRemotePlayTogetherInvite" }, // 1806354771
		{ &Z_Construct_UFunction_URemotePlay_GetSessionClientFormFactor, "GetSessionClientFormFactor" }, // 1753491647
		{ &Z_Construct_UFunction_URemotePlay_GetSessionClientName, "GetSessionClientName" }, // 2931678956
		{ &Z_Construct_UFunction_URemotePlay_GetSessionCount, "GetSessionCount" }, // 364434036
		{ &Z_Construct_UFunction_URemotePlay_GetSessionID, "GetSessionID" }, // 68563019
		{ &Z_Construct_UFunction_URemotePlay_GetSessionSteamID, "GetSessionSteamID" }, // 614801878
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemotePlay_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SteamRemotePlay/SteamRemotePlay.h" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlay.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemotePlay_Statics::NewProp_SteamRemotePlaySessionConnected_MetaData[] = {
		{ "Category", "SteamCore|RemotePlay|Delegates" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlay.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URemotePlay_Statics::NewProp_SteamRemotePlaySessionConnected = { "SteamRemotePlaySessionConnected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemotePlay, SteamRemotePlaySessionConnected), Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionConnected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URemotePlay_Statics::NewProp_SteamRemotePlaySessionConnected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemotePlay_Statics::NewProp_SteamRemotePlaySessionConnected_MetaData)) }; // 3342171244
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemotePlay_Statics::NewProp_SteamRemotePlaySessionDisconnected_MetaData[] = {
		{ "Category", "SteamCore|RemotePlay|Delegates" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlay.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URemotePlay_Statics::NewProp_SteamRemotePlaySessionDisconnected = { "SteamRemotePlaySessionDisconnected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemotePlay, SteamRemotePlaySessionDisconnected), Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionDisconnected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URemotePlay_Statics::NewProp_SteamRemotePlaySessionDisconnected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemotePlay_Statics::NewProp_SteamRemotePlaySessionDisconnected_MetaData)) }; // 1439022530
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URemotePlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemotePlay_Statics::NewProp_SteamRemotePlaySessionConnected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemotePlay_Statics::NewProp_SteamRemotePlaySessionDisconnected,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URemotePlay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URemotePlay>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URemotePlay_Statics::ClassParams = {
		&URemotePlay::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URemotePlay_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URemotePlay_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URemotePlay_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URemotePlay_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URemotePlay()
	{
		if (!Z_Registration_Info_UClass_URemotePlay.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URemotePlay.OuterSingleton, Z_Construct_UClass_URemotePlay_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URemotePlay.OuterSingleton;
	}
	template<> STEAMCORE_API UClass* StaticClass<URemotePlay>()
	{
		return URemotePlay::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URemotePlay);
	URemotePlay::~URemotePlay() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamRemotePlay_SteamRemotePlay_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamRemotePlay_SteamRemotePlay_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URemotePlay, URemotePlay::StaticClass, TEXT("URemotePlay"), &Z_Registration_Info_UClass_URemotePlay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URemotePlay), 4033009309U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamRemotePlay_SteamRemotePlay_h_854242087(TEXT("/Script/SteamCore"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamRemotePlay_SteamRemotePlay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamRemotePlay_SteamRemotePlay_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
