// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamRemotePlay/SteamRemotePlay.h"
#include "Engine/GameInstance.h"
#include "SteamTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSteamRemotePlay() {}

// ********** Begin Cross Module References ********************************************************
STEAMCORE_API UClass* Z_Construct_UClass_URemotePlay();
STEAMCORE_API UClass* Z_Construct_UClass_URemotePlay_NoRegister();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreDeviceFormFactor();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionConnected__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionDisconnected__DelegateSignature();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
UPackage* Z_Construct_UPackage__Script_SteamCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URemotePlay Function BGetSessionClientResolution *************************
struct Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution_Statics
{
	struct RemotePlay_eventBGetSessionClientResolution_Parms
	{
		int32 SessionID;
		int32 ResolutionX;
		int32 ResolutionY;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemotePlay" },
		{ "Comment", "/**\n\x09* Get the resolution, in pixels, of the session client device. This is set to 0x0 if the resolution is not available.\n\x09*\n\x09* @param\x09SessionID\x09\x09The session ID to get information about\n\x09* @param\x09ResolutionX\x09\x09""A pointer to a variable to fill with the device resolution width\n\x09* @param\x09ResolutionY\x09\x09""A pointer to a variable to fill with the device resolution height\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlay.h" },
		{ "ToolTip", "Get the resolution, in pixels, of the session client device. This is set to 0x0 if the resolution is not available.\n\n@param        SessionID               The session ID to get information about\n@param        ResolutionX             A pointer to a variable to fill with the device resolution width\n@param        ResolutionY             A pointer to a variable to fill with the device resolution height" },
	};
#endif // WITH_METADATA

// ********** Begin Function BGetSessionClientResolution constinit property declarations ***********
	static const UECodeGen_Private::FIntPropertyParams NewProp_SessionID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ResolutionX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ResolutionY;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BGetSessionClientResolution constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BGetSessionClientResolution Property Definitions **********************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RemotePlay_eventBGetSessionClientResolution_Parms, SessionID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution_Statics::NewProp_ResolutionX = { "ResolutionX", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RemotePlay_eventBGetSessionClientResolution_Parms, ResolutionX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution_Statics::NewProp_ResolutionY = { "ResolutionY", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RemotePlay_eventBGetSessionClientResolution_Parms, ResolutionY), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RemotePlay_eventBGetSessionClientResolution_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RemotePlay_eventBGetSessionClientResolution_Parms), &Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution_Statics::NewProp_SessionID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution_Statics::NewProp_ResolutionX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution_Statics::NewProp_ResolutionY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution_Statics::PropPointers) < 2048);
// ********** End Function BGetSessionClientResolution Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URemotePlay, nullptr, "BGetSessionClientResolution", 	Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution_Statics::RemotePlay_eventBGetSessionClientResolution_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution_Statics::Function_MetaDataParams), Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution_Statics::RemotePlay_eventBGetSessionClientResolution_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class URemotePlay Function BGetSessionClientResolution ***************************

// ********** Begin Class URemotePlay Function BSendRemotePlayTogetherInvite ***********************
struct Z_Construct_UFunction_URemotePlay_BSendRemotePlayTogetherInvite_Statics
{
	struct RemotePlay_eventBSendRemotePlayTogetherInvite_Parms
	{
		FSteamID SteamIDFriend;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemotePlay" },
		{ "Comment", "/**\n\x09* Invite a friend to join the game using Remote Play Together\n\x09*\n\x09* @param\x09SteamIDFriend\x09\x09The Steam ID of the friend you'd like to invite\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlay.h" },
		{ "ToolTip", "Invite a friend to join the game using Remote Play Together\n\n@param        SteamIDFriend           The Steam ID of the friend you'd like to invite" },
	};
#endif // WITH_METADATA

// ********** Begin Function BSendRemotePlayTogetherInvite constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BSendRemotePlayTogetherInvite constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BSendRemotePlayTogetherInvite Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URemotePlay_BSendRemotePlayTogetherInvite_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RemotePlay_eventBSendRemotePlayTogetherInvite_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
void Z_Construct_UFunction_URemotePlay_BSendRemotePlayTogetherInvite_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RemotePlay_eventBSendRemotePlayTogetherInvite_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemotePlay_BSendRemotePlayTogetherInvite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RemotePlay_eventBSendRemotePlayTogetherInvite_Parms), &Z_Construct_UFunction_URemotePlay_BSendRemotePlayTogetherInvite_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemotePlay_BSendRemotePlayTogetherInvite_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemotePlay_BSendRemotePlayTogetherInvite_Statics::NewProp_SteamIDFriend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemotePlay_BSendRemotePlayTogetherInvite_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URemotePlay_BSendRemotePlayTogetherInvite_Statics::PropPointers) < 2048);
// ********** End Function BSendRemotePlayTogetherInvite Property Definitions **********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URemotePlay_BSendRemotePlayTogetherInvite_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URemotePlay, nullptr, "BSendRemotePlayTogetherInvite", 	Z_Construct_UFunction_URemotePlay_BSendRemotePlayTogetherInvite_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URemotePlay_BSendRemotePlayTogetherInvite_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URemotePlay_BSendRemotePlayTogetherInvite_Statics::RemotePlay_eventBSendRemotePlayTogetherInvite_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URemotePlay_BSendRemotePlayTogetherInvite_Statics::Function_MetaDataParams), Z_Construct_UFunction_URemotePlay_BSendRemotePlayTogetherInvite_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URemotePlay_BSendRemotePlayTogetherInvite_Statics::RemotePlay_eventBSendRemotePlayTogetherInvite_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URemotePlay_BSendRemotePlayTogetherInvite()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URemotePlay_BSendRemotePlayTogetherInvite_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URemotePlay::execBSendRemotePlayTogetherInvite)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BSendRemotePlayTogetherInvite(Z_Param_SteamIDFriend);
	P_NATIVE_END;
}
// ********** End Class URemotePlay Function BSendRemotePlayTogetherInvite *************************

// ********** Begin Class URemotePlay Function GetSessionClientFormFactor **************************
struct Z_Construct_UFunction_URemotePlay_GetSessionClientFormFactor_Statics
{
	struct RemotePlay_eventGetSessionClientFormFactor_Parms
	{
		int32 SessionID;
		ESteamCoreDeviceFormFactor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemotePlay" },
		{ "Comment", "/**\n\x09* Get the form factor of the session client device\n\x09*\n\x09* @param\x09SessionID\x09The session ID to get information about\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlay.h" },
		{ "ToolTip", "Get the form factor of the session client device\n\n@param        SessionID       The session ID to get information about" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSessionClientFormFactor constinit property declarations ************
	static const UECodeGen_Private::FIntPropertyParams NewProp_SessionID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSessionClientFormFactor constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSessionClientFormFactor Property Definitions ***********************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemotePlay_GetSessionClientFormFactor_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RemotePlay_eventGetSessionClientFormFactor_Parms, SessionID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URemotePlay_GetSessionClientFormFactor_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URemotePlay_GetSessionClientFormFactor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RemotePlay_eventGetSessionClientFormFactor_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamCoreDeviceFormFactor, METADATA_PARAMS(0, nullptr) }; // 2390476670
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemotePlay_GetSessionClientFormFactor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemotePlay_GetSessionClientFormFactor_Statics::NewProp_SessionID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemotePlay_GetSessionClientFormFactor_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemotePlay_GetSessionClientFormFactor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URemotePlay_GetSessionClientFormFactor_Statics::PropPointers) < 2048);
// ********** End Function GetSessionClientFormFactor Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URemotePlay_GetSessionClientFormFactor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URemotePlay, nullptr, "GetSessionClientFormFactor", 	Z_Construct_UFunction_URemotePlay_GetSessionClientFormFactor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URemotePlay_GetSessionClientFormFactor_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URemotePlay_GetSessionClientFormFactor_Statics::RemotePlay_eventGetSessionClientFormFactor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URemotePlay_GetSessionClientFormFactor_Statics::Function_MetaDataParams), Z_Construct_UFunction_URemotePlay_GetSessionClientFormFactor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URemotePlay_GetSessionClientFormFactor_Statics::RemotePlay_eventGetSessionClientFormFactor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URemotePlay_GetSessionClientFormFactor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URemotePlay_GetSessionClientFormFactor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URemotePlay::execGetSessionClientFormFactor)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SessionID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamCoreDeviceFormFactor*)Z_Param__Result=P_THIS->GetSessionClientFormFactor(Z_Param_SessionID);
	P_NATIVE_END;
}
// ********** End Class URemotePlay Function GetSessionClientFormFactor ****************************

// ********** Begin Class URemotePlay Function GetSessionClientName ********************************
struct Z_Construct_UFunction_URemotePlay_GetSessionClientName_Statics
{
	struct RemotePlay_eventGetSessionClientName_Parms
	{
		int32 SessionID;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemotePlay" },
		{ "Comment", "/**\n\x09* Get the name of the session client device\n\x09*\n\x09* @param\x09SessionID\x09The session ID to get information about\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlay.h" },
		{ "ToolTip", "Get the name of the session client device\n\n@param        SessionID       The session ID to get information about" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSessionClientName constinit property declarations ******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_SessionID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSessionClientName constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSessionClientName Property Definitions *****************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemotePlay_GetSessionClientName_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RemotePlay_eventGetSessionClientName_Parms, SessionID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URemotePlay_GetSessionClientName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RemotePlay_eventGetSessionClientName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemotePlay_GetSessionClientName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemotePlay_GetSessionClientName_Statics::NewProp_SessionID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemotePlay_GetSessionClientName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URemotePlay_GetSessionClientName_Statics::PropPointers) < 2048);
// ********** End Function GetSessionClientName Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URemotePlay_GetSessionClientName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URemotePlay, nullptr, "GetSessionClientName", 	Z_Construct_UFunction_URemotePlay_GetSessionClientName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URemotePlay_GetSessionClientName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URemotePlay_GetSessionClientName_Statics::RemotePlay_eventGetSessionClientName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URemotePlay_GetSessionClientName_Statics::Function_MetaDataParams), Z_Construct_UFunction_URemotePlay_GetSessionClientName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URemotePlay_GetSessionClientName_Statics::RemotePlay_eventGetSessionClientName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URemotePlay_GetSessionClientName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URemotePlay_GetSessionClientName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URemotePlay::execGetSessionClientName)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SessionID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetSessionClientName(Z_Param_SessionID);
	P_NATIVE_END;
}
// ********** End Class URemotePlay Function GetSessionClientName **********************************

// ********** Begin Class URemotePlay Function GetSessionCount *************************************
struct Z_Construct_UFunction_URemotePlay_GetSessionCount_Statics
{
	struct RemotePlay_eventGetSessionCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemotePlay" },
		{ "Comment", "/**\n\x09* Get the number of currently connected Steam Remote Play sessions\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlay.h" },
		{ "ToolTip", "Get the number of currently connected Steam Remote Play sessions" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSessionCount constinit property declarations ***********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSessionCount constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSessionCount Property Definitions **********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemotePlay_GetSessionCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RemotePlay_eventGetSessionCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemotePlay_GetSessionCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemotePlay_GetSessionCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URemotePlay_GetSessionCount_Statics::PropPointers) < 2048);
// ********** End Function GetSessionCount Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URemotePlay_GetSessionCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URemotePlay, nullptr, "GetSessionCount", 	Z_Construct_UFunction_URemotePlay_GetSessionCount_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URemotePlay_GetSessionCount_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URemotePlay_GetSessionCount_Statics::RemotePlay_eventGetSessionCount_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URemotePlay_GetSessionCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_URemotePlay_GetSessionCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URemotePlay_GetSessionCount_Statics::RemotePlay_eventGetSessionCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URemotePlay_GetSessionCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URemotePlay_GetSessionCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URemotePlay::execGetSessionCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetSessionCount();
	P_NATIVE_END;
}
// ********** End Class URemotePlay Function GetSessionCount ***************************************

// ********** Begin Class URemotePlay Function GetSessionID ****************************************
struct Z_Construct_UFunction_URemotePlay_GetSessionID_Statics
{
	struct RemotePlay_eventGetSessionID_Parms
	{
		int32 SessionIndex;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemotePlay" },
		{ "Comment", "/**\n\x09* Get the currently connected Steam Remote Play session ID at the specified index\n\x09*\n\x09* @param\x09SessionIndex\x09The index of the specified session\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlay.h" },
		{ "ToolTip", "Get the currently connected Steam Remote Play session ID at the specified index\n\n@param        SessionIndex    The index of the specified session" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSessionID constinit property declarations **************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_SessionIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSessionID constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSessionID Property Definitions *************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemotePlay_GetSessionID_Statics::NewProp_SessionIndex = { "SessionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RemotePlay_eventGetSessionID_Parms, SessionIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemotePlay_GetSessionID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RemotePlay_eventGetSessionID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemotePlay_GetSessionID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemotePlay_GetSessionID_Statics::NewProp_SessionIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemotePlay_GetSessionID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URemotePlay_GetSessionID_Statics::PropPointers) < 2048);
// ********** End Function GetSessionID Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URemotePlay_GetSessionID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URemotePlay, nullptr, "GetSessionID", 	Z_Construct_UFunction_URemotePlay_GetSessionID_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URemotePlay_GetSessionID_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URemotePlay_GetSessionID_Statics::RemotePlay_eventGetSessionID_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URemotePlay_GetSessionID_Statics::Function_MetaDataParams), Z_Construct_UFunction_URemotePlay_GetSessionID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URemotePlay_GetSessionID_Statics::RemotePlay_eventGetSessionID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URemotePlay_GetSessionID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URemotePlay_GetSessionID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URemotePlay::execGetSessionID)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SessionIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetSessionID(Z_Param_SessionIndex);
	P_NATIVE_END;
}
// ********** End Class URemotePlay Function GetSessionID ******************************************

// ********** Begin Class URemotePlay Function GetSessionSteamID ***********************************
struct Z_Construct_UFunction_URemotePlay_GetSessionSteamID_Statics
{
	struct RemotePlay_eventGetSessionSteamID_Parms
	{
		int32 SessionID;
		FSteamID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemotePlay" },
		{ "Comment", "/**\n\x09* Get the SteamID of the connected user\n\x09*\n\x09* @param\x09SessionID\x09The session ID to get information about\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlay.h" },
		{ "ToolTip", "Get the SteamID of the connected user\n\n@param        SessionID       The session ID to get information about" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSessionSteamID constinit property declarations *********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_SessionID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSessionSteamID constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSessionSteamID Property Definitions ********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemotePlay_GetSessionSteamID_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RemotePlay_eventGetSessionSteamID_Parms, SessionID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URemotePlay_GetSessionSteamID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RemotePlay_eventGetSessionSteamID_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemotePlay_GetSessionSteamID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemotePlay_GetSessionSteamID_Statics::NewProp_SessionID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemotePlay_GetSessionSteamID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URemotePlay_GetSessionSteamID_Statics::PropPointers) < 2048);
// ********** End Function GetSessionSteamID Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URemotePlay_GetSessionSteamID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URemotePlay, nullptr, "GetSessionSteamID", 	Z_Construct_UFunction_URemotePlay_GetSessionSteamID_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URemotePlay_GetSessionSteamID_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URemotePlay_GetSessionSteamID_Statics::RemotePlay_eventGetSessionSteamID_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URemotePlay_GetSessionSteamID_Statics::Function_MetaDataParams), Z_Construct_UFunction_URemotePlay_GetSessionSteamID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URemotePlay_GetSessionSteamID_Statics::RemotePlay_eventGetSessionSteamID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URemotePlay_GetSessionSteamID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URemotePlay_GetSessionSteamID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URemotePlay::execGetSessionSteamID)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SessionID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamID*)Z_Param__Result=P_THIS->GetSessionSteamID(Z_Param_SessionID);
	P_NATIVE_END;
}
// ********** End Class URemotePlay Function GetSessionSteamID *************************************

// ********** Begin Class URemotePlay **************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_URemotePlay;
UClass* URemotePlay::GetPrivateStaticClass()
{
	using TClass = URemotePlay;
	if (!Z_Registration_Info_UClass_URemotePlay.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RemotePlay"),
			Z_Registration_Info_UClass_URemotePlay.InnerSingleton,
			StaticRegisterNativesURemotePlay,
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
	return Z_Registration_Info_UClass_URemotePlay.InnerSingleton;
}
UClass* Z_Construct_UClass_URemotePlay_NoRegister()
{
	return URemotePlay::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URemotePlay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamRemotePlay/SteamRemotePlay.h" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamRemotePlaySessionConnected_MetaData[] = {
		{ "Category", "SteamCore|RemotePlay|Delegates" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamRemotePlaySessionDisconnected_MetaData[] = {
		{ "Category", "SteamCore|RemotePlay|Delegates" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlay.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URemotePlay constinit property declarations ******************************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamRemotePlaySessionConnected;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamRemotePlaySessionDisconnected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URemotePlay constinit property declarations ********************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("BGetSessionClientResolution"), .Pointer = &URemotePlay::execBGetSessionClientResolution },
		{ .NameUTF8 = UTF8TEXT("BSendRemotePlayTogetherInvite"), .Pointer = &URemotePlay::execBSendRemotePlayTogetherInvite },
		{ .NameUTF8 = UTF8TEXT("GetSessionClientFormFactor"), .Pointer = &URemotePlay::execGetSessionClientFormFactor },
		{ .NameUTF8 = UTF8TEXT("GetSessionClientName"), .Pointer = &URemotePlay::execGetSessionClientName },
		{ .NameUTF8 = UTF8TEXT("GetSessionCount"), .Pointer = &URemotePlay::execGetSessionCount },
		{ .NameUTF8 = UTF8TEXT("GetSessionID"), .Pointer = &URemotePlay::execGetSessionID },
		{ .NameUTF8 = UTF8TEXT("GetSessionSteamID"), .Pointer = &URemotePlay::execGetSessionSteamID },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution, "BGetSessionClientResolution" }, // 3699575806
		{ &Z_Construct_UFunction_URemotePlay_BSendRemotePlayTogetherInvite, "BSendRemotePlayTogetherInvite" }, // 2504622389
		{ &Z_Construct_UFunction_URemotePlay_GetSessionClientFormFactor, "GetSessionClientFormFactor" }, // 321770016
		{ &Z_Construct_UFunction_URemotePlay_GetSessionClientName, "GetSessionClientName" }, // 4033654639
		{ &Z_Construct_UFunction_URemotePlay_GetSessionCount, "GetSessionCount" }, // 2406583753
		{ &Z_Construct_UFunction_URemotePlay_GetSessionID, "GetSessionID" }, // 3208391112
		{ &Z_Construct_UFunction_URemotePlay_GetSessionSteamID, "GetSessionSteamID" }, // 3271607106
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URemotePlay>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_URemotePlay_Statics

// ********** Begin Class URemotePlay Property Definitions *****************************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URemotePlay_Statics::NewProp_SteamRemotePlaySessionConnected = { "SteamRemotePlaySessionConnected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URemotePlay, SteamRemotePlaySessionConnected), Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionConnected__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamRemotePlaySessionConnected_MetaData), NewProp_SteamRemotePlaySessionConnected_MetaData) }; // 1483146005
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URemotePlay_Statics::NewProp_SteamRemotePlaySessionDisconnected = { "SteamRemotePlaySessionDisconnected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URemotePlay, SteamRemotePlaySessionDisconnected), Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionDisconnected__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamRemotePlaySessionDisconnected_MetaData), NewProp_SteamRemotePlaySessionDisconnected_MetaData) }; // 1279640665
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URemotePlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemotePlay_Statics::NewProp_SteamRemotePlaySessionConnected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemotePlay_Statics::NewProp_SteamRemotePlaySessionDisconnected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URemotePlay_Statics::PropPointers) < 2048);
// ********** End Class URemotePlay Property Definitions *******************************************
UObject* (*const Z_Construct_UClass_URemotePlay_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URemotePlay_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URemotePlay_Statics::Class_MetaDataParams), Z_Construct_UClass_URemotePlay_Statics::Class_MetaDataParams)
};
void URemotePlay::StaticRegisterNativesURemotePlay()
{
	UClass* Class = URemotePlay::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_URemotePlay_Statics::Funcs));
}
UClass* Z_Construct_UClass_URemotePlay()
{
	if (!Z_Registration_Info_UClass_URemotePlay.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URemotePlay.OuterSingleton, Z_Construct_UClass_URemotePlay_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URemotePlay.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URemotePlay);
URemotePlay::~URemotePlay() {}
// ********** End Class URemotePlay ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamRemotePlay_SteamRemotePlay_h__Script_SteamCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URemotePlay, URemotePlay::StaticClass, TEXT("URemotePlay"), &Z_Registration_Info_UClass_URemotePlay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URemotePlay), 4048955940U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamRemotePlay_SteamRemotePlay_h__Script_SteamCore_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamRemotePlay_SteamRemotePlay_h__Script_SteamCore_3208809142{
	TEXT("/Script/SteamCore"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamRemotePlay_SteamRemotePlay_h__Script_SteamCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamRemotePlay_SteamRemotePlay_h__Script_SteamCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
