// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamGameServer/SteamGameServer.h"
#include "Engine/GameInstance.h"
#include "SteamCore/SteamTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSteamGameServer() {}

// ********** Begin Cross Module References ********************************************************
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
STEAMCORE_API UClass* Z_Construct_UClass_USteamGameServer();
STEAMCORE_API UClass* Z_Construct_UClass_USteamGameServer_NoRegister();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamBeginAuthSessionResult();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamUserHasLicenseForAppResult();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGSClientApprove__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGSClientDeny__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGSClientGroupStatus__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGSPolicyResponse__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGSValidateAuthTicketResponse__DelegateSignature();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamTicketHandle();
UPackage* Z_Construct_UPackage__Script_SteamCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USteamGameServer Function AssociateWithClan ******************************
struct Z_Construct_UFunction_USteamGameServer_AssociateWithClan_Statics
{
	struct SteamGameServer_eventAssociateWithClan_Parms
	{
		FScriptDelegate Callback;
		FSteamID SteamIDClan;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Associate this game server with this clan for the purposes of computing player compatibility.\n\x09*\n\x09* @param\x09SteamIDClan\x09\x09The Steam ID of the group you want to be associated with.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Associate this game server with this clan for the purposes of computing player compatibility.\n\n@param        SteamIDClan             The Steam ID of the group you want to be associated with." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AssociateWithClan constinit property declarations *********************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AssociateWithClan constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AssociateWithClan Property Definitions ********************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamGameServer_AssociateWithClan_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameServer_eventAssociateWithClan_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 3972485719
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamGameServer_AssociateWithClan_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameServer_eventAssociateWithClan_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_AssociateWithClan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_AssociateWithClan_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_AssociateWithClan_Statics::NewProp_SteamIDClan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_AssociateWithClan_Statics::PropPointers) < 2048);
// ********** End Function AssociateWithClan Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_AssociateWithClan_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "AssociateWithClan", 	Z_Construct_UFunction_USteamGameServer_AssociateWithClan_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_AssociateWithClan_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamGameServer_AssociateWithClan_Statics::SteamGameServer_eventAssociateWithClan_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_AssociateWithClan_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameServer_AssociateWithClan_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamGameServer_AssociateWithClan_Statics::SteamGameServer_eventAssociateWithClan_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameServer_AssociateWithClan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_AssociateWithClan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameServer::execAssociateWithClan)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AssociateWithClan(FOnAssociateWithClan(Z_Param_Out_Callback),Z_Param_SteamIDClan);
	P_NATIVE_END;
}
// ********** End Class USteamGameServer Function AssociateWithClan ********************************

// ********** Begin Class USteamGameServer Function BeginAuthSession *******************************
struct Z_Construct_UFunction_USteamGameServer_BeginAuthSession_Statics
{
	struct SteamGameServer_eventBeginAuthSession_Parms
	{
		TArray<uint8> Ticket;
		FSteamID SteamID;
		ESteamBeginAuthSessionResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Authenticate the ticket from the entity Steam ID to be sure it is valid and isn't reused.\n\x09*\n\x09* The ticket is created on the entity with ISteamUser::GetAuthSessionTicket or GetAuthSessionTicket and then needs to be provided over the network for the other end to validate.\n\x09* This registers for ValidateAuthTicketResponse_t Callbacks if the entity goes offline or cancels the ticket. See EAuthSessionResponse for more information.\n\x09* When the multiplayer session terminates you must call EndAuthSession.\n\x09*\n\x09* @param\x09Ticket\x09\x09The auth ticket to validate.\n\x09* @param\x09SteamID\x09\x09The entity's Steam ID that sent this ticket.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Authenticate the ticket from the entity Steam ID to be sure it is valid and isn't reused.\n\nThe ticket is created on the entity with ISteamUser::GetAuthSessionTicket or GetAuthSessionTicket and then needs to be provided over the network for the other end to validate.\nThis registers for ValidateAuthTicketResponse_t Callbacks if the entity goes offline or cancels the ticket. See EAuthSessionResponse for more information.\nWhen the multiplayer session terminates you must call EndAuthSession.\n\n@param        Ticket          The auth ticket to validate.\n@param        SteamID         The entity's Steam ID that sent this ticket." },
	};
#endif // WITH_METADATA

// ********** Begin Function BeginAuthSession constinit property declarations **********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Ticket_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Ticket;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BeginAuthSession constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BeginAuthSession Property Definitions *********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamGameServer_BeginAuthSession_Statics::NewProp_Ticket_Inner = { "Ticket", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamGameServer_BeginAuthSession_Statics::NewProp_Ticket = { "Ticket", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameServer_eventBeginAuthSession_Parms, Ticket), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamGameServer_BeginAuthSession_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameServer_eventBeginAuthSession_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamGameServer_BeginAuthSession_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamGameServer_BeginAuthSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameServer_eventBeginAuthSession_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamBeginAuthSessionResult, METADATA_PARAMS(0, nullptr) }; // 1657082080
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_BeginAuthSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_BeginAuthSession_Statics::NewProp_Ticket_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_BeginAuthSession_Statics::NewProp_Ticket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_BeginAuthSession_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_BeginAuthSession_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_BeginAuthSession_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_BeginAuthSession_Statics::PropPointers) < 2048);
// ********** End Function BeginAuthSession Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_BeginAuthSession_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "BeginAuthSession", 	Z_Construct_UFunction_USteamGameServer_BeginAuthSession_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_BeginAuthSession_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamGameServer_BeginAuthSession_Statics::SteamGameServer_eventBeginAuthSession_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_BeginAuthSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameServer_BeginAuthSession_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamGameServer_BeginAuthSession_Statics::SteamGameServer_eventBeginAuthSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameServer_BeginAuthSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_BeginAuthSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameServer::execBeginAuthSession)
{
	P_GET_TARRAY(uint8,Z_Param_Ticket);
	P_GET_STRUCT(FSteamID,Z_Param_SteamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamBeginAuthSessionResult*)Z_Param__Result=P_THIS->BeginAuthSession(Z_Param_Ticket,Z_Param_SteamID);
	P_NATIVE_END;
}
// ********** End Class USteamGameServer Function BeginAuthSession *********************************

// ********** Begin Class USteamGameServer Function BLoggedOn **************************************
struct Z_Construct_UFunction_USteamGameServer_BLoggedOn_Statics
{
	struct SteamGameServer_eventBLoggedOn_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Checks if the game server is logged on.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Checks if the game server is logged on." },
	};
#endif // WITH_METADATA

// ********** Begin Function BLoggedOn constinit property declarations *****************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BLoggedOn constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BLoggedOn Property Definitions ****************************************
void Z_Construct_UFunction_USteamGameServer_BLoggedOn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamGameServer_eventBLoggedOn_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamGameServer_BLoggedOn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamGameServer_eventBLoggedOn_Parms), &Z_Construct_UFunction_USteamGameServer_BLoggedOn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_BLoggedOn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_BLoggedOn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_BLoggedOn_Statics::PropPointers) < 2048);
// ********** End Function BLoggedOn Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_BLoggedOn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "BLoggedOn", 	Z_Construct_UFunction_USteamGameServer_BLoggedOn_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_BLoggedOn_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamGameServer_BLoggedOn_Statics::SteamGameServer_eventBLoggedOn_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_BLoggedOn_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameServer_BLoggedOn_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamGameServer_BLoggedOn_Statics::SteamGameServer_eventBLoggedOn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameServer_BLoggedOn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_BLoggedOn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameServer::execBLoggedOn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BLoggedOn();
	P_NATIVE_END;
}
// ********** End Class USteamGameServer Function BLoggedOn ****************************************

// ********** Begin Class USteamGameServer Function BSecure ****************************************
struct Z_Construct_UFunction_USteamGameServer_BSecure_Statics
{
	struct SteamGameServer_eventBSecure_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Checks whether the game server is in \"Secure\" mode.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Checks whether the game server is in \"Secure\" mode." },
	};
#endif // WITH_METADATA

// ********** Begin Function BSecure constinit property declarations *******************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BSecure constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BSecure Property Definitions ******************************************
void Z_Construct_UFunction_USteamGameServer_BSecure_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamGameServer_eventBSecure_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamGameServer_BSecure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamGameServer_eventBSecure_Parms), &Z_Construct_UFunction_USteamGameServer_BSecure_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_BSecure_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_BSecure_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_BSecure_Statics::PropPointers) < 2048);
// ********** End Function BSecure Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_BSecure_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "BSecure", 	Z_Construct_UFunction_USteamGameServer_BSecure_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_BSecure_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamGameServer_BSecure_Statics::SteamGameServer_eventBSecure_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_BSecure_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameServer_BSecure_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamGameServer_BSecure_Statics::SteamGameServer_eventBSecure_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameServer_BSecure()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_BSecure_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameServer::execBSecure)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BSecure();
	P_NATIVE_END;
}
// ********** End Class USteamGameServer Function BSecure ******************************************

// ********** Begin Class USteamGameServer Function BUpdateUserData ********************************
struct Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics
{
	struct SteamGameServer_eventBUpdateUserData_Parms
	{
		FSteamID SteamIDUser;
		FString PlayerName;
		int32 Score;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Checks whether the game server is in \"Secure\" mode.\n\x09*\n\x09* @param\x09SteamIDUser\x09\x09The Steam ID of the user.\n\x09* @param\x09PlayerName\x09\x09The name of the user.\n\x09* @param\x09Score\x09\x09\x09The current score of the user.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Checks whether the game server is in \"Secure\" mode.\n\n@param        SteamIDUser             The Steam ID of the user.\n@param        PlayerName              The name of the user.\n@param        Score                   The current score of the user." },
	};
#endif // WITH_METADATA

// ********** Begin Function BUpdateUserData constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BUpdateUserData constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BUpdateUserData Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameServer_eventBUpdateUserData_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameServer_eventBUpdateUserData_Parms, PlayerName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameServer_eventBUpdateUserData_Parms, Score), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamGameServer_eventBUpdateUserData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamGameServer_eventBUpdateUserData_Parms), &Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics::NewProp_SteamIDUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics::NewProp_PlayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics::NewProp_Score,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics::PropPointers) < 2048);
// ********** End Function BUpdateUserData Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "BUpdateUserData", 	Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics::SteamGameServer_eventBUpdateUserData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics::SteamGameServer_eventBUpdateUserData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameServer_BUpdateUserData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameServer::execBUpdateUserData)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
	P_GET_PROPERTY(FStrProperty,Z_Param_PlayerName);
	P_GET_PROPERTY(FIntProperty,Z_Param_Score);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BUpdateUserData(Z_Param_SteamIDUser,Z_Param_PlayerName,Z_Param_Score);
	P_NATIVE_END;
}
// ********** End Class USteamGameServer Function BUpdateUserData **********************************

// ********** Begin Class USteamGameServer Function CancelAuthTicket *******************************
struct Z_Construct_UFunction_USteamGameServer_CancelAuthTicket_Statics
{
	struct SteamGameServer_eventCancelAuthTicket_Parms
	{
		FSteamTicketHandle TicketHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Cancels an auth ticket received from ISteamUser::GetAuthSessionTicket. This should be called when no longer playing with the specified entity.\n\x09*\n\x09* @param\x09TicketHandle\x09The active auth ticket to cancel.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Cancels an auth ticket received from ISteamUser::GetAuthSessionTicket. This should be called when no longer playing with the specified entity.\n\n@param        TicketHandle    The active auth ticket to cancel." },
	};
#endif // WITH_METADATA

// ********** Begin Function CancelAuthTicket constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_TicketHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CancelAuthTicket constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CancelAuthTicket Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamGameServer_CancelAuthTicket_Statics::NewProp_TicketHandle = { "TicketHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameServer_eventCancelAuthTicket_Parms, TicketHandle), Z_Construct_UScriptStruct_FSteamTicketHandle, METADATA_PARAMS(0, nullptr) }; // 1701472596
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_CancelAuthTicket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_CancelAuthTicket_Statics::NewProp_TicketHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_CancelAuthTicket_Statics::PropPointers) < 2048);
// ********** End Function CancelAuthTicket Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_CancelAuthTicket_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "CancelAuthTicket", 	Z_Construct_UFunction_USteamGameServer_CancelAuthTicket_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_CancelAuthTicket_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamGameServer_CancelAuthTicket_Statics::SteamGameServer_eventCancelAuthTicket_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_CancelAuthTicket_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameServer_CancelAuthTicket_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamGameServer_CancelAuthTicket_Statics::SteamGameServer_eventCancelAuthTicket_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameServer_CancelAuthTicket()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_CancelAuthTicket_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameServer::execCancelAuthTicket)
{
	P_GET_STRUCT(FSteamTicketHandle,Z_Param_TicketHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CancelAuthTicket(Z_Param_TicketHandle);
	P_NATIVE_END;
}
// ********** End Class USteamGameServer Function CancelAuthTicket *********************************

// ********** Begin Class USteamGameServer Function ClearAllKeyValues ******************************
struct Z_Construct_UFunction_USteamGameServer_ClearAllKeyValues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Clears the whole list of key/values that are sent in rules queries.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Clears the whole list of key/values that are sent in rules queries." },
	};
#endif // WITH_METADATA

// ********** Begin Function ClearAllKeyValues constinit property declarations *********************
// ********** End Function ClearAllKeyValues constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_ClearAllKeyValues_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "ClearAllKeyValues", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_ClearAllKeyValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameServer_ClearAllKeyValues_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USteamGameServer_ClearAllKeyValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_ClearAllKeyValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameServer::execClearAllKeyValues)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearAllKeyValues();
	P_NATIVE_END;
}
// ********** End Class USteamGameServer Function ClearAllKeyValues ********************************

// ********** Begin Class USteamGameServer Function ComputeNewPlayerCompatibility ******************
struct Z_Construct_UFunction_USteamGameServer_ComputeNewPlayerCompatibility_Statics
{
	struct SteamGameServer_eventComputeNewPlayerCompatibility_Parms
	{
		FScriptDelegate Callback;
		FSteamID SteamIDNewPlayer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Checks if any of the current players don't want to play with this new player that is attempting to join - or vice versa; based on the frenemy system.\n\x09*\n\x09* @param\x09SteamIDNewPlayer\x09The Steam ID of the player that is attempting to join.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Checks if any of the current players don't want to play with this new player that is attempting to join - or vice versa; based on the frenemy system.\n\n@param        SteamIDNewPlayer        The Steam ID of the player that is attempting to join." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ComputeNewPlayerCompatibility constinit property declarations *********
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDNewPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ComputeNewPlayerCompatibility constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ComputeNewPlayerCompatibility Property Definitions ********************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamGameServer_ComputeNewPlayerCompatibility_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameServer_eventComputeNewPlayerCompatibility_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 4276534740
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamGameServer_ComputeNewPlayerCompatibility_Statics::NewProp_SteamIDNewPlayer = { "SteamIDNewPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameServer_eventComputeNewPlayerCompatibility_Parms, SteamIDNewPlayer), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_ComputeNewPlayerCompatibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_ComputeNewPlayerCompatibility_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_ComputeNewPlayerCompatibility_Statics::NewProp_SteamIDNewPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_ComputeNewPlayerCompatibility_Statics::PropPointers) < 2048);
// ********** End Function ComputeNewPlayerCompatibility Property Definitions **********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_ComputeNewPlayerCompatibility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "ComputeNewPlayerCompatibility", 	Z_Construct_UFunction_USteamGameServer_ComputeNewPlayerCompatibility_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_ComputeNewPlayerCompatibility_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamGameServer_ComputeNewPlayerCompatibility_Statics::SteamGameServer_eventComputeNewPlayerCompatibility_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_ComputeNewPlayerCompatibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameServer_ComputeNewPlayerCompatibility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamGameServer_ComputeNewPlayerCompatibility_Statics::SteamGameServer_eventComputeNewPlayerCompatibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameServer_ComputeNewPlayerCompatibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_ComputeNewPlayerCompatibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameServer::execComputeNewPlayerCompatibility)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDNewPlayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ComputeNewPlayerCompatibility(FOnComputeNewPlayerCompatibility(Z_Param_Out_Callback),Z_Param_SteamIDNewPlayer);
	P_NATIVE_END;
}
// ********** End Class USteamGameServer Function ComputeNewPlayerCompatibility ********************

// ********** Begin Class USteamGameServer Function CreateUnauthenticatedUserConnection ************
struct Z_Construct_UFunction_USteamGameServer_CreateUnauthenticatedUserConnection_Statics
{
	struct SteamGameServer_eventCreateUnauthenticatedUserConnection_Parms
	{
		FSteamID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Creates a fake user (ie, a bot) which will be listed as playing on the server, but skips validation.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Creates a fake user (ie, a bot) which will be listed as playing on the server, but skips validation." },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateUnauthenticatedUserConnection constinit property declarations ***
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateUnauthenticatedUserConnection constinit property declarations *****
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateUnauthenticatedUserConnection Property Definitions **************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamGameServer_CreateUnauthenticatedUserConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameServer_eventCreateUnauthenticatedUserConnection_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_CreateUnauthenticatedUserConnection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_CreateUnauthenticatedUserConnection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_CreateUnauthenticatedUserConnection_Statics::PropPointers) < 2048);
// ********** End Function CreateUnauthenticatedUserConnection Property Definitions ****************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_CreateUnauthenticatedUserConnection_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "CreateUnauthenticatedUserConnection", 	Z_Construct_UFunction_USteamGameServer_CreateUnauthenticatedUserConnection_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_CreateUnauthenticatedUserConnection_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamGameServer_CreateUnauthenticatedUserConnection_Statics::SteamGameServer_eventCreateUnauthenticatedUserConnection_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_CreateUnauthenticatedUserConnection_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameServer_CreateUnauthenticatedUserConnection_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamGameServer_CreateUnauthenticatedUserConnection_Statics::SteamGameServer_eventCreateUnauthenticatedUserConnection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameServer_CreateUnauthenticatedUserConnection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_CreateUnauthenticatedUserConnection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameServer::execCreateUnauthenticatedUserConnection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamID*)Z_Param__Result=P_THIS->CreateUnauthenticatedUserConnection();
	P_NATIVE_END;
}
// ********** End Class USteamGameServer Function CreateUnauthenticatedUserConnection **************

// ********** Begin Class USteamGameServer Function EnableHeartbeats *******************************
struct Z_Construct_UFunction_USteamGameServer_EnableHeartbeats_Statics
{
	struct SteamGameServer_eventEnableHeartbeats_Parms
	{
		bool bActive;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Tells the Steam master servers whether or not you want to be active.\n\x09*\n\x09* If this is enabled then the server will talk to the master servers, if it's not then incoming messages are ignored and heartbeats will not be sent.\n\x09*\n\x09* @param\x09""bActive\x09\x09""Enable (true) or disable (false) the master server updater.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Tells the Steam master servers whether or not you want to be active.\n\nIf this is enabled then the server will talk to the master servers, if it's not then incoming messages are ignored and heartbeats will not be sent.\n\n@param        bActive         Enable (true) or disable (false) the master server updater." },
	};
#endif // WITH_METADATA

// ********** Begin Function EnableHeartbeats constinit property declarations **********************
	static void NewProp_bActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EnableHeartbeats constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EnableHeartbeats Property Definitions *********************************
void Z_Construct_UFunction_USteamGameServer_EnableHeartbeats_Statics::NewProp_bActive_SetBit(void* Obj)
{
	((SteamGameServer_eventEnableHeartbeats_Parms*)Obj)->bActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamGameServer_EnableHeartbeats_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamGameServer_eventEnableHeartbeats_Parms), &Z_Construct_UFunction_USteamGameServer_EnableHeartbeats_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_EnableHeartbeats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_EnableHeartbeats_Statics::NewProp_bActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_EnableHeartbeats_Statics::PropPointers) < 2048);
// ********** End Function EnableHeartbeats Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_EnableHeartbeats_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "EnableHeartbeats", 	Z_Construct_UFunction_USteamGameServer_EnableHeartbeats_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_EnableHeartbeats_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamGameServer_EnableHeartbeats_Statics::SteamGameServer_eventEnableHeartbeats_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_EnableHeartbeats_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameServer_EnableHeartbeats_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamGameServer_EnableHeartbeats_Statics::SteamGameServer_eventEnableHeartbeats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameServer_EnableHeartbeats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_EnableHeartbeats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameServer::execEnableHeartbeats)
{
	P_GET_UBOOL(Z_Param_bActive);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableHeartbeats(Z_Param_bActive);
	P_NATIVE_END;
}
// ********** End Class USteamGameServer Function EnableHeartbeats *********************************

// ********** Begin Class USteamGameServer Function EndAuthSession *********************************
struct Z_Construct_UFunction_USteamGameServer_EndAuthSession_Statics
{
	struct SteamGameServer_eventEndAuthSession_Parms
	{
		FSteamID SteamID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Ends an auth session that was started with BeginAuthSession. This should be called when no longer playing with the specified entity.\n\x09*\n\x09* @param\x09SteamID\x09\x09The entity to end the active auth session with.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Ends an auth session that was started with BeginAuthSession. This should be called when no longer playing with the specified entity.\n\n@param        SteamID         The entity to end the active auth session with." },
	};
#endif // WITH_METADATA

// ********** Begin Function EndAuthSession constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EndAuthSession constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EndAuthSession Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamGameServer_EndAuthSession_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameServer_eventEndAuthSession_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_EndAuthSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_EndAuthSession_Statics::NewProp_SteamID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_EndAuthSession_Statics::PropPointers) < 2048);
// ********** End Function EndAuthSession Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_EndAuthSession_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "EndAuthSession", 	Z_Construct_UFunction_USteamGameServer_EndAuthSession_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_EndAuthSession_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamGameServer_EndAuthSession_Statics::SteamGameServer_eventEndAuthSession_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_EndAuthSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameServer_EndAuthSession_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamGameServer_EndAuthSession_Statics::SteamGameServer_eventEndAuthSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameServer_EndAuthSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_EndAuthSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameServer::execEndAuthSession)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndAuthSession(Z_Param_SteamID);
	P_NATIVE_END;
}
// ********** End Class USteamGameServer Function EndAuthSession ***********************************

// ********** Begin Class USteamGameServer Function ForceHeartbeat *********************************
struct Z_Construct_UFunction_USteamGameServer_ForceHeartbeat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Force a heartbeat to the Steam master servers at the next opportunity.\n\x09*\n\x09* You usually don't need to use this.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Force a heartbeat to the Steam master servers at the next opportunity.\n\nYou usually don't need to use this." },
	};
#endif // WITH_METADATA

// ********** Begin Function ForceHeartbeat constinit property declarations ************************
// ********** End Function ForceHeartbeat constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_ForceHeartbeat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "ForceHeartbeat", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_ForceHeartbeat_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameServer_ForceHeartbeat_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USteamGameServer_ForceHeartbeat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_ForceHeartbeat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameServer::execForceHeartbeat)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ForceHeartbeat();
	P_NATIVE_END;
}
// ********** End Class USteamGameServer Function ForceHeartbeat ***********************************

// ********** Begin Class USteamGameServer Function GetAuthSessionTicket ***************************
struct Z_Construct_UFunction_USteamGameServer_GetAuthSessionTicket_Statics
{
	struct SteamGameServer_eventGetAuthSessionTicket_Parms
	{
		TArray<uint8> Ticket;
		FSteamTicketHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Retrieve a authentication ticket to be sent to the entity who wishes to authenticate you.\n\x09*\n\x09* After calling this you can send the ticket to the entity where they can then call ISteamUser::BeginAuthSession to verify this entities integrity.\n\x09* When creating a ticket for use by the ISteamUserAuth/AuthenticateUserTicket Web API, the calling application should wait for the GetAuthSessionTicketResponse_t Callback \n\x09* generated by the API call before attempting to use the ticket to ensure that the ticket has been communicated to the server. \n\x09* If this Callback does not come in a timely fashion (10 - 20 seconds), then your client is not connected to Steam, and the AuthenticateUserTicket call will fail because it can not authenticate the user.\n\x09*\n\x09* @param\x09Ticket\x09\x09The buffer where the new auth ticket will be copied into if the call was successful.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Retrieve a authentication ticket to be sent to the entity who wishes to authenticate you.\n\nAfter calling this you can send the ticket to the entity where they can then call ISteamUser::BeginAuthSession to verify this entities integrity.\nWhen creating a ticket for use by the ISteamUserAuth/AuthenticateUserTicket Web API, the calling application should wait for the GetAuthSessionTicketResponse_t Callback\ngenerated by the API call before attempting to use the ticket to ensure that the ticket has been communicated to the server.\nIf this Callback does not come in a timely fashion (10 - 20 seconds), then your client is not connected to Steam, and the AuthenticateUserTicket call will fail because it can not authenticate the user.\n\n@param        Ticket          The buffer where the new auth ticket will be copied into if the call was successful." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAuthSessionTicket constinit property declarations ******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Ticket_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Ticket;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAuthSessionTicket constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAuthSessionTicket Property Definitions *****************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamGameServer_GetAuthSessionTicket_Statics::NewProp_Ticket_Inner = { "Ticket", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamGameServer_GetAuthSessionTicket_Statics::NewProp_Ticket = { "Ticket", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameServer_eventGetAuthSessionTicket_Parms, Ticket), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamGameServer_GetAuthSessionTicket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameServer_eventGetAuthSessionTicket_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamTicketHandle, METADATA_PARAMS(0, nullptr) }; // 1701472596
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_GetAuthSessionTicket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_GetAuthSessionTicket_Statics::NewProp_Ticket_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_GetAuthSessionTicket_Statics::NewProp_Ticket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_GetAuthSessionTicket_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_GetAuthSessionTicket_Statics::PropPointers) < 2048);
// ********** End Function GetAuthSessionTicket Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_GetAuthSessionTicket_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "GetAuthSessionTicket", 	Z_Construct_UFunction_USteamGameServer_GetAuthSessionTicket_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_GetAuthSessionTicket_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamGameServer_GetAuthSessionTicket_Statics::SteamGameServer_eventGetAuthSessionTicket_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_GetAuthSessionTicket_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameServer_GetAuthSessionTicket_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamGameServer_GetAuthSessionTicket_Statics::SteamGameServer_eventGetAuthSessionTicket_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameServer_GetAuthSessionTicket()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_GetAuthSessionTicket_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameServer::execGetAuthSessionTicket)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Ticket);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamTicketHandle*)Z_Param__Result=P_THIS->GetAuthSessionTicket(Z_Param_Out_Ticket);
	P_NATIVE_END;
}
// ********** End Class USteamGameServer Function GetAuthSessionTicket *****************************

// ********** Begin Class USteamGameServer Function GetServerPublicIP ******************************
struct Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Statics
{
	struct SteamGameServer_eventGetServerPublicIP_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Gets the Steam ID of the game server.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Gets the Steam ID of the game server." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetServerPublicIP constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetServerPublicIP constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetServerPublicIP Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameServer_eventGetServerPublicIP_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Statics::PropPointers) < 2048);
// ********** End Function GetServerPublicIP Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "GetServerPublicIP", 	Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Statics::SteamGameServer_eventGetServerPublicIP_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Statics::SteamGameServer_eventGetServerPublicIP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameServer_GetServerPublicIP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameServer::execGetServerPublicIP)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetServerPublicIP();
	P_NATIVE_END;
}
// ********** End Class USteamGameServer Function GetServerPublicIP ********************************

// ********** Begin Class USteamGameServer Function GetServerPublicIP_Pure *************************
struct Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Pure_Statics
{
	struct SteamGameServer_eventGetServerPublicIP_Pure_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Gets the Steam ID of the game server.\n\x09*/" },
		{ "DisplayName", "Get Server Public Ip (Pure)" },
		{ "Keywords", "Get Ip" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Gets the Steam ID of the game server." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetServerPublicIP_Pure constinit property declarations ****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetServerPublicIP_Pure constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetServerPublicIP_Pure Property Definitions ***************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Pure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameServer_eventGetServerPublicIP_Pure_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Pure_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Pure_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Pure_Statics::PropPointers) < 2048);
// ********** End Function GetServerPublicIP_Pure Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Pure_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "GetServerPublicIP_Pure", 	Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Pure_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Pure_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Pure_Statics::SteamGameServer_eventGetServerPublicIP_Pure_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Pure_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Pure_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Pure_Statics::SteamGameServer_eventGetServerPublicIP_Pure_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Pure()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Pure_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameServer::execGetServerPublicIP_Pure)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetServerPublicIP_Pure();
	P_NATIVE_END;
}
// ********** End Class USteamGameServer Function GetServerPublicIP_Pure ***************************

// ********** Begin Class USteamGameServer Function GetServerPublicIP_PureCompact ******************
struct Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_PureCompact_Statics
{
	struct SteamGameServer_eventGetServerPublicIP_PureCompact_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Gets the Steam ID of the game server.\n\x09*/" },
		{ "CompactNodeTitle", "Server Ip" },
		{ "DisplayName", "Get Server Public Ip (Compact)" },
		{ "Keywords", "Get Ip" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Gets the Steam ID of the game server." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetServerPublicIP_PureCompact constinit property declarations *********
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetServerPublicIP_PureCompact constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetServerPublicIP_PureCompact Property Definitions ********************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_PureCompact_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameServer_eventGetServerPublicIP_PureCompact_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_PureCompact_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_PureCompact_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_PureCompact_Statics::PropPointers) < 2048);
// ********** End Function GetServerPublicIP_PureCompact Property Definitions **********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_PureCompact_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "GetServerPublicIP_PureCompact", 	Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_PureCompact_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_PureCompact_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_PureCompact_Statics::SteamGameServer_eventGetServerPublicIP_PureCompact_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_PureCompact_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_PureCompact_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_PureCompact_Statics::SteamGameServer_eventGetServerPublicIP_PureCompact_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_PureCompact()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_PureCompact_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameServer::execGetServerPublicIP_PureCompact)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetServerPublicIP_PureCompact();
	P_NATIVE_END;
}
// ********** End Class USteamGameServer Function GetServerPublicIP_PureCompact ********************

// ********** Begin Class USteamGameServer Function GetServerSteamID *******************************
struct Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Statics
{
	struct SteamGameServer_eventGetServerSteamID_Parms
	{
		FSteamID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Gets the Steam ID of the game server.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Gets the Steam ID of the game server." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetServerSteamID constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetServerSteamID constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetServerSteamID Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameServer_eventGetServerSteamID_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Statics::PropPointers) < 2048);
// ********** End Function GetServerSteamID Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "GetServerSteamID", 	Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Statics::SteamGameServer_eventGetServerSteamID_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Statics::SteamGameServer_eventGetServerSteamID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameServer_GetServerSteamID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameServer::execGetServerSteamID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamID*)Z_Param__Result=P_THIS->GetServerSteamID();
	P_NATIVE_END;
}
// ********** End Class USteamGameServer Function GetServerSteamID *********************************

// ********** Begin Class USteamGameServer Function GetServerSteamID_Pure **************************
struct Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Pure_Statics
{
	struct SteamGameServer_eventGetServerSteamID_Pure_Parms
	{
		FSteamID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Gets the Steam ID of the game server.\n\x09*/" },
		{ "DisplayName", "Get Server Steam Id (Pure)" },
		{ "Keywords", "Get Steam Id" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Gets the Steam ID of the game server." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetServerSteamID_Pure constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetServerSteamID_Pure constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetServerSteamID_Pure Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Pure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameServer_eventGetServerSteamID_Pure_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Pure_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Pure_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Pure_Statics::PropPointers) < 2048);
// ********** End Function GetServerSteamID_Pure Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Pure_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "GetServerSteamID_Pure", 	Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Pure_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Pure_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Pure_Statics::SteamGameServer_eventGetServerSteamID_Pure_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Pure_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Pure_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Pure_Statics::SteamGameServer_eventGetServerSteamID_Pure_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Pure()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Pure_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameServer::execGetServerSteamID_Pure)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamID*)Z_Param__Result=P_THIS->GetServerSteamID_Pure();
	P_NATIVE_END;
}
// ********** End Class USteamGameServer Function GetServerSteamID_Pure ****************************

// ********** Begin Class USteamGameServer Function GetServerSteamID_PureCompact *******************
struct Z_Construct_UFunction_USteamGameServer_GetServerSteamID_PureCompact_Statics
{
	struct SteamGameServer_eventGetServerSteamID_PureCompact_Parms
	{
		FSteamID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Gets the Steam ID of the game server.\n\x09*/" },
		{ "CompactNodeTitle", "Server Id" },
		{ "DisplayName", "Get Server Steam Id (Compact)" },
		{ "Keywords", "Get Steam Id" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Gets the Steam ID of the game server." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetServerSteamID_PureCompact constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetServerSteamID_PureCompact constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetServerSteamID_PureCompact Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamGameServer_GetServerSteamID_PureCompact_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameServer_eventGetServerSteamID_PureCompact_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_GetServerSteamID_PureCompact_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_GetServerSteamID_PureCompact_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_GetServerSteamID_PureCompact_Statics::PropPointers) < 2048);
// ********** End Function GetServerSteamID_PureCompact Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_GetServerSteamID_PureCompact_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "GetServerSteamID_PureCompact", 	Z_Construct_UFunction_USteamGameServer_GetServerSteamID_PureCompact_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_GetServerSteamID_PureCompact_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamGameServer_GetServerSteamID_PureCompact_Statics::SteamGameServer_eventGetServerSteamID_PureCompact_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_GetServerSteamID_PureCompact_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameServer_GetServerSteamID_PureCompact_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamGameServer_GetServerSteamID_PureCompact_Statics::SteamGameServer_eventGetServerSteamID_PureCompact_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameServer_GetServerSteamID_PureCompact()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_GetServerSteamID_PureCompact_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameServer::execGetServerSteamID_PureCompact)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamID*)Z_Param__Result=P_THIS->GetServerSteamID_PureCompact();
	P_NATIVE_END;
}
// ********** End Class USteamGameServer Function GetServerSteamID_PureCompact *********************

// ********** Begin Class USteamGameServer Function LogOff *****************************************
struct Z_Construct_UFunction_USteamGameServer_LogOff_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Begin process of logging the game server out of steam.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Begin process of logging the game server out of steam." },
	};
#endif // WITH_METADATA

// ********** Begin Function LogOff constinit property declarations ********************************
// ********** End Function LogOff constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_LogOff_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "LogOff", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_LogOff_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameServer_LogOff_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USteamGameServer_LogOff()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_LogOff_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameServer::execLogOff)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LogOff();
	P_NATIVE_END;
}
// ********** End Class USteamGameServer Function LogOff *******************************************

// ********** Begin Class USteamGameServer Function LogOn ******************************************
struct Z_Construct_UFunction_USteamGameServer_LogOn_Statics
{
	struct SteamGameServer_eventLogOn_Parms
	{
		FString Token;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Begin process to login to a persistent game server account.\n\x09* \n\x09* @param\x09Token\x09\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Begin process to login to a persistent game server account.\n\n@param        Token" },
	};
#endif // WITH_METADATA

// ********** Begin Function LogOn constinit property declarations *********************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Token;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LogOn constinit property declarations ***********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LogOn Property Definitions ********************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameServer_LogOn_Statics::NewProp_Token = { "Token", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameServer_eventLogOn_Parms, Token), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_LogOn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_LogOn_Statics::NewProp_Token,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_LogOn_Statics::PropPointers) < 2048);
// ********** End Function LogOn Property Definitions **********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_LogOn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "LogOn", 	Z_Construct_UFunction_USteamGameServer_LogOn_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_LogOn_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamGameServer_LogOn_Statics::SteamGameServer_eventLogOn_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_LogOn_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameServer_LogOn_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamGameServer_LogOn_Statics::SteamGameServer_eventLogOn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameServer_LogOn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_LogOn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameServer::execLogOn)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Token);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LogOn(Z_Param_Token);
	P_NATIVE_END;
}
// ********** End Class USteamGameServer Function LogOn ********************************************

// ********** Begin Class USteamGameServer Function LogOnAnonymous *********************************
struct Z_Construct_UFunction_USteamGameServer_LogOnAnonymous_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Login to a generic, anonymous account.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Login to a generic, anonymous account." },
	};
#endif // WITH_METADATA

// ********** Begin Function LogOnAnonymous constinit property declarations ************************
// ********** End Function LogOnAnonymous constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_LogOnAnonymous_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "LogOnAnonymous", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_LogOnAnonymous_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameServer_LogOnAnonymous_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USteamGameServer_LogOnAnonymous()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_LogOnAnonymous_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameServer::execLogOnAnonymous)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LogOnAnonymous();
	P_NATIVE_END;
}
// ********** End Class USteamGameServer Function LogOnAnonymous ***********************************

// ********** Begin Class USteamGameServer Function RequestUserGroupStatus *************************
struct Z_Construct_UFunction_USteamGameServer_RequestUserGroupStatus_Statics
{
	struct SteamGameServer_eventRequestUserGroupStatus_Parms
	{
		FSteamID SteamIDUser;
		FSteamID SteamIDGroup;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Checks if a user is in the specified Steam group.\n\x09*\n\x09* @param\x09SteamIDUser\x09\x09The user to check the group status of.\n\x09* @param\x09SteamIDGroup\x09The group to check.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Checks if a user is in the specified Steam group.\n\n@param        SteamIDUser             The user to check the group status of.\n@param        SteamIDGroup    The group to check." },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestUserGroupStatus constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDGroup;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestUserGroupStatus constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestUserGroupStatus Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamGameServer_RequestUserGroupStatus_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameServer_eventRequestUserGroupStatus_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamGameServer_RequestUserGroupStatus_Statics::NewProp_SteamIDGroup = { "SteamIDGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameServer_eventRequestUserGroupStatus_Parms, SteamIDGroup), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
void Z_Construct_UFunction_USteamGameServer_RequestUserGroupStatus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamGameServer_eventRequestUserGroupStatus_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamGameServer_RequestUserGroupStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamGameServer_eventRequestUserGroupStatus_Parms), &Z_Construct_UFunction_USteamGameServer_RequestUserGroupStatus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_RequestUserGroupStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_RequestUserGroupStatus_Statics::NewProp_SteamIDUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_RequestUserGroupStatus_Statics::NewProp_SteamIDGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_RequestUserGroupStatus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_RequestUserGroupStatus_Statics::PropPointers) < 2048);
// ********** End Function RequestUserGroupStatus Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_RequestUserGroupStatus_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "RequestUserGroupStatus", 	Z_Construct_UFunction_USteamGameServer_RequestUserGroupStatus_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_RequestUserGroupStatus_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamGameServer_RequestUserGroupStatus_Statics::SteamGameServer_eventRequestUserGroupStatus_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_RequestUserGroupStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameServer_RequestUserGroupStatus_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamGameServer_RequestUserGroupStatus_Statics::SteamGameServer_eventRequestUserGroupStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameServer_RequestUserGroupStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_RequestUserGroupStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameServer::execRequestUserGroupStatus)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDGroup);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RequestUserGroupStatus(Z_Param_SteamIDUser,Z_Param_SteamIDGroup);
	P_NATIVE_END;
}
// ********** End Class USteamGameServer Function RequestUserGroupStatus ***************************

// ********** Begin Class USteamGameServer Function SetAdvertiseServerActive ***********************
struct Z_Construct_UFunction_USteamGameServer_SetAdvertiseServerActive_Statics
{
	struct SteamGameServer_eventSetAdvertiseServerActive_Parms
	{
		bool bActive;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Indicate whether you wish to be listed on the master server list\n\x09* and/or respond to server browser / LAN discovery packets.\n\x09* The server starts with this value set to false.  You should set all\n\x09*  relevant server parameters before enabling advertisement on the server.\n\x09*  \x09\n\x09*  (This function used to be named EnableHeartbeats, so if you are wondering\n\x09*  where that function went, it's right here.  It does the same thing as before,\n\x09*  the old name was just confusing.)\n\x09*\n\x09* @param\x09""bActive\x09\x09""Enable (true) or disable (false) the master server updater.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Indicate whether you wish to be listed on the master server list\nand/or respond to server browser / LAN discovery packets.\nThe server starts with this value set to false.  You should set all\n relevant server parameters before enabling advertisement on the server.\n\n (This function used to be named EnableHeartbeats, so if you are wondering\n where that function went, it's right here.  It does the same thing as before,\n the old name was just confusing.)\n\n@param        bActive         Enable (true) or disable (false) the master server updater." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetAdvertiseServerActive constinit property declarations **************
	static void NewProp_bActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetAdvertiseServerActive constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetAdvertiseServerActive Property Definitions *************************
void Z_Construct_UFunction_USteamGameServer_SetAdvertiseServerActive_Statics::NewProp_bActive_SetBit(void* Obj)
{
	((SteamGameServer_eventSetAdvertiseServerActive_Parms*)Obj)->bActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamGameServer_SetAdvertiseServerActive_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamGameServer_eventSetAdvertiseServerActive_Parms), &Z_Construct_UFunction_USteamGameServer_SetAdvertiseServerActive_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_SetAdvertiseServerActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_SetAdvertiseServerActive_Statics::NewProp_bActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetAdvertiseServerActive_Statics::PropPointers) < 2048);
// ********** End Function SetAdvertiseServerActive Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_SetAdvertiseServerActive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "SetAdvertiseServerActive", 	Z_Construct_UFunction_USteamGameServer_SetAdvertiseServerActive_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetAdvertiseServerActive_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamGameServer_SetAdvertiseServerActive_Statics::SteamGameServer_eventSetAdvertiseServerActive_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetAdvertiseServerActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameServer_SetAdvertiseServerActive_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamGameServer_SetAdvertiseServerActive_Statics::SteamGameServer_eventSetAdvertiseServerActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameServer_SetAdvertiseServerActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_SetAdvertiseServerActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameServer::execSetAdvertiseServerActive)
{
	P_GET_UBOOL(Z_Param_bActive);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAdvertiseServerActive(Z_Param_bActive);
	P_NATIVE_END;
}
// ********** End Class USteamGameServer Function SetAdvertiseServerActive *************************

// ********** Begin Class USteamGameServer Function SetBotPlayerCount ******************************
struct Z_Construct_UFunction_USteamGameServer_SetBotPlayerCount_Statics
{
	struct SteamGameServer_eventSetBotPlayerCount_Parms
	{
		int32 Botplayers;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Sets the number of bot/AI players on the game server. The default value is 0.\n\x09*\n\x09* @param\x09""Botplayers\x09The number of bot/AI players currently playing on the server.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Sets the number of bot/AI players on the game server. The default value is 0.\n\n@param        Botplayers      The number of bot/AI players currently playing on the server." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetBotPlayerCount constinit property declarations *********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Botplayers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetBotPlayerCount constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetBotPlayerCount Property Definitions ********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamGameServer_SetBotPlayerCount_Statics::NewProp_Botplayers = { "Botplayers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameServer_eventSetBotPlayerCount_Parms, Botplayers), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_SetBotPlayerCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_SetBotPlayerCount_Statics::NewProp_Botplayers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetBotPlayerCount_Statics::PropPointers) < 2048);
// ********** End Function SetBotPlayerCount Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_SetBotPlayerCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "SetBotPlayerCount", 	Z_Construct_UFunction_USteamGameServer_SetBotPlayerCount_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetBotPlayerCount_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamGameServer_SetBotPlayerCount_Statics::SteamGameServer_eventSetBotPlayerCount_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetBotPlayerCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameServer_SetBotPlayerCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamGameServer_SetBotPlayerCount_Statics::SteamGameServer_eventSetBotPlayerCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameServer_SetBotPlayerCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_SetBotPlayerCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameServer::execSetBotPlayerCount)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Botplayers);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBotPlayerCount(Z_Param_Botplayers);
	P_NATIVE_END;
}
// ********** End Class USteamGameServer Function SetBotPlayerCount ********************************

// ********** Begin Class USteamGameServer Function SetDedicatedServer *****************************
struct Z_Construct_UFunction_USteamGameServer_SetDedicatedServer_Statics
{
	struct SteamGameServer_eventSetDedicatedServer_Parms
	{
		bool bDedicated;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Sets the whether this is a dedicated server or a listen server. The default is listen server.\n\x09*\n\x09* @param\x09""bDedicated\x09\x09Is this a dedicated server (true) or a listen server (false)?\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Sets the whether this is a dedicated server or a listen server. The default is listen server.\n\n@param        bDedicated              Is this a dedicated server (true) or a listen server (false)?" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetDedicatedServer constinit property declarations ********************
	static void NewProp_bDedicated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDedicated;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetDedicatedServer constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetDedicatedServer Property Definitions *******************************
void Z_Construct_UFunction_USteamGameServer_SetDedicatedServer_Statics::NewProp_bDedicated_SetBit(void* Obj)
{
	((SteamGameServer_eventSetDedicatedServer_Parms*)Obj)->bDedicated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamGameServer_SetDedicatedServer_Statics::NewProp_bDedicated = { "bDedicated", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamGameServer_eventSetDedicatedServer_Parms), &Z_Construct_UFunction_USteamGameServer_SetDedicatedServer_Statics::NewProp_bDedicated_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_SetDedicatedServer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_SetDedicatedServer_Statics::NewProp_bDedicated,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetDedicatedServer_Statics::PropPointers) < 2048);
// ********** End Function SetDedicatedServer Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_SetDedicatedServer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "SetDedicatedServer", 	Z_Construct_UFunction_USteamGameServer_SetDedicatedServer_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetDedicatedServer_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamGameServer_SetDedicatedServer_Statics::SteamGameServer_eventSetDedicatedServer_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetDedicatedServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameServer_SetDedicatedServer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamGameServer_SetDedicatedServer_Statics::SteamGameServer_eventSetDedicatedServer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameServer_SetDedicatedServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_SetDedicatedServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameServer::execSetDedicatedServer)
{
	P_GET_UBOOL(Z_Param_bDedicated);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDedicatedServer(Z_Param_bDedicated);
	P_NATIVE_END;
}
// ********** End Class USteamGameServer Function SetDedicatedServer *******************************

// ********** Begin Class USteamGameServer Function SetGameData ************************************
struct Z_Construct_UFunction_USteamGameServer_SetGameData_Statics
{
	struct SteamGameServer_eventSetGameData_Parms
	{
		FString GameData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Sets a string defining the \"gamedata\" for this server.\n\x09*\n\x09* This is optional, but if set it allows users to filter in the matchmaking/server-browser interfaces based on the value.\n\x09* This is usually formatted as a comma or semicolon separated list.\n\x09* Don't set this unless it actually changes, its only uploaded to the master once; when acknowledged.\n\x09*\n\x09* @param\x09GameData\x09The new \"gamedata\" value to set. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerGameData.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Sets a string defining the \"gamedata\" for this server.\n\nThis is optional, but if set it allows users to filter in the matchmaking/server-browser interfaces based on the value.\nThis is usually formatted as a comma or semicolon separated list.\nDon't set this unless it actually changes, its only uploaded to the master once; when acknowledged.\n\n@param        GameData        The new \"gamedata\" value to set. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerGameData." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetGameData constinit property declarations ***************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetGameData constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetGameData Property Definitions **************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameServer_SetGameData_Statics::NewProp_GameData = { "GameData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameServer_eventSetGameData_Parms, GameData), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_SetGameData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_SetGameData_Statics::NewProp_GameData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetGameData_Statics::PropPointers) < 2048);
// ********** End Function SetGameData Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_SetGameData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "SetGameData", 	Z_Construct_UFunction_USteamGameServer_SetGameData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetGameData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamGameServer_SetGameData_Statics::SteamGameServer_eventSetGameData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetGameData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameServer_SetGameData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamGameServer_SetGameData_Statics::SteamGameServer_eventSetGameData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameServer_SetGameData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_SetGameData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameServer::execSetGameData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_GameData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGameData(Z_Param_GameData);
	P_NATIVE_END;
}
// ********** End Class USteamGameServer Function SetGameData **************************************

// ********** Begin Class USteamGameServer Function SetGameDescription *****************************
struct Z_Construct_UFunction_USteamGameServer_SetGameDescription_Statics
{
	struct SteamGameServer_eventSetGameDescription_Parms
	{
		FString GameDescription;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Sets the game description. Setting this to the full name of your game is recommended.\n\x09*\n\x09* This is required for all game servers and can only be set before calling LogOn or LogOnAnonymous.\n\x09*\n\x09* @param\x09GameDescription\x09\x09The description of your game. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerGameDescription.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Sets the game description. Setting this to the full name of your game is recommended.\n\nThis is required for all game servers and can only be set before calling LogOn or LogOnAnonymous.\n\n@param        GameDescription         The description of your game. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerGameDescription." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetGameDescription constinit property declarations ********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameDescription;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetGameDescription constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetGameDescription Property Definitions *******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameServer_SetGameDescription_Statics::NewProp_GameDescription = { "GameDescription", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameServer_eventSetGameDescription_Parms, GameDescription), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_SetGameDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_SetGameDescription_Statics::NewProp_GameDescription,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetGameDescription_Statics::PropPointers) < 2048);
// ********** End Function SetGameDescription Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_SetGameDescription_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "SetGameDescription", 	Z_Construct_UFunction_USteamGameServer_SetGameDescription_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetGameDescription_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamGameServer_SetGameDescription_Statics::SteamGameServer_eventSetGameDescription_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetGameDescription_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameServer_SetGameDescription_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamGameServer_SetGameDescription_Statics::SteamGameServer_eventSetGameDescription_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameServer_SetGameDescription()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_SetGameDescription_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameServer::execSetGameDescription)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_GameDescription);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGameDescription(Z_Param_GameDescription);
	P_NATIVE_END;
}
// ********** End Class USteamGameServer Function SetGameDescription *******************************

// ********** Begin Class USteamGameServer Function SetGameTags ************************************
struct Z_Construct_UFunction_USteamGameServer_SetGameTags_Statics
{
	struct SteamGameServer_eventSetGameTags_Parms
	{
		FString GameTags;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Sets a string defining the \"gametags\" for this server, this is optional, but if set it allows users to filter in the matchmaking/server-browser interfaces based on the value.\n\x09*\n\x09* This is usually formatted as a comma or semicolon separated list.\n\x09* Don't set this unless it actually changes, its only uploaded to the master once; when acknowledged.\n\x09*\n\x09* @param\x09GameTags\x09The new \"gametags\" value to set. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerTags.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Sets a string defining the \"gametags\" for this server, this is optional, but if set it allows users to filter in the matchmaking/server-browser interfaces based on the value.\n\nThis is usually formatted as a comma or semicolon separated list.\nDon't set this unless it actually changes, its only uploaded to the master once; when acknowledged.\n\n@param        GameTags        The new \"gametags\" value to set. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerTags." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetGameTags constinit property declarations ***************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetGameTags constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetGameTags Property Definitions **************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameServer_SetGameTags_Statics::NewProp_GameTags = { "GameTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameServer_eventSetGameTags_Parms, GameTags), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_SetGameTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_SetGameTags_Statics::NewProp_GameTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetGameTags_Statics::PropPointers) < 2048);
// ********** End Function SetGameTags Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_SetGameTags_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "SetGameTags", 	Z_Construct_UFunction_USteamGameServer_SetGameTags_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetGameTags_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamGameServer_SetGameTags_Statics::SteamGameServer_eventSetGameTags_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetGameTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameServer_SetGameTags_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamGameServer_SetGameTags_Statics::SteamGameServer_eventSetGameTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameServer_SetGameTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_SetGameTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameServer::execSetGameTags)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_GameTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGameTags(Z_Param_GameTags);
	P_NATIVE_END;
}
// ********** End Class USteamGameServer Function SetGameTags **************************************

// ********** Begin Class USteamGameServer Function SetHeartbeatInterval ***************************
struct Z_Construct_UFunction_USteamGameServer_SetHeartbeatInterval_Statics
{
	struct SteamGameServer_eventSetHeartbeatInterval_Parms
	{
		int32 HeartbeatInterval;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Changes how often heartbeats are sent to the Steam master servers.\n\x09*\n\x09* You usually don't need to use this.\n\x09*\n\x09* @param\x09HeartbeatInterval\x09The interval between sending heartbeats in milliseconds. Typically would range between 250-1000. Use -1 to use the default value.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Changes how often heartbeats are sent to the Steam master servers.\n\nYou usually don't need to use this.\n\n@param        HeartbeatInterval       The interval between sending heartbeats in milliseconds. Typically would range between 250-1000. Use -1 to use the default value." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetHeartbeatInterval constinit property declarations ******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_HeartbeatInterval;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetHeartbeatInterval constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetHeartbeatInterval Property Definitions *****************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamGameServer_SetHeartbeatInterval_Statics::NewProp_HeartbeatInterval = { "HeartbeatInterval", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameServer_eventSetHeartbeatInterval_Parms, HeartbeatInterval), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_SetHeartbeatInterval_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_SetHeartbeatInterval_Statics::NewProp_HeartbeatInterval,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetHeartbeatInterval_Statics::PropPointers) < 2048);
// ********** End Function SetHeartbeatInterval Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_SetHeartbeatInterval_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "SetHeartbeatInterval", 	Z_Construct_UFunction_USteamGameServer_SetHeartbeatInterval_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetHeartbeatInterval_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamGameServer_SetHeartbeatInterval_Statics::SteamGameServer_eventSetHeartbeatInterval_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetHeartbeatInterval_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameServer_SetHeartbeatInterval_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamGameServer_SetHeartbeatInterval_Statics::SteamGameServer_eventSetHeartbeatInterval_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameServer_SetHeartbeatInterval()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_SetHeartbeatInterval_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameServer::execSetHeartbeatInterval)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_HeartbeatInterval);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHeartbeatInterval(Z_Param_HeartbeatInterval);
	P_NATIVE_END;
}
// ********** End Class USteamGameServer Function SetHeartbeatInterval *****************************

// ********** Begin Class USteamGameServer Function SetKeyValue ************************************
struct Z_Construct_UFunction_USteamGameServer_SetKeyValue_Statics
{
	struct SteamGameServer_eventSetKeyValue_Parms
	{
		FString Key;
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/** \n\x09* Add/update a rules key/value pair.\n\x09*\n\x09* @param\x09Key\x09\x09\x09key to update\n\x09* @param\x09Value\x09\x09value to set\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Add/update a rules key/value pair.\n\n@param        Key                     key to update\n@param        Value           value to set" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetKeyValue constinit property declarations ***************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetKeyValue constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetKeyValue Property Definitions **************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameServer_SetKeyValue_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameServer_eventSetKeyValue_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameServer_SetKeyValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameServer_eventSetKeyValue_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_SetKeyValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_SetKeyValue_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_SetKeyValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetKeyValue_Statics::PropPointers) < 2048);
// ********** End Function SetKeyValue Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_SetKeyValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "SetKeyValue", 	Z_Construct_UFunction_USteamGameServer_SetKeyValue_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetKeyValue_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamGameServer_SetKeyValue_Statics::SteamGameServer_eventSetKeyValue_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetKeyValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameServer_SetKeyValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamGameServer_SetKeyValue_Statics::SteamGameServer_eventSetKeyValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameServer_SetKeyValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_SetKeyValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameServer::execSetKeyValue)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetKeyValue(Z_Param_Key,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class USteamGameServer Function SetKeyValue **************************************

// ********** Begin Class USteamGameServer Function SetMapName *************************************
struct Z_Construct_UFunction_USteamGameServer_SetMapName_Statics
{
	struct SteamGameServer_eventSetMapName_Parms
	{
		FString MapName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Sets the name of map to report in the server browser.\n\x09*\n\x09* @param\x09MapName\x09\x09The new map name to set. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerMapName.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Sets the name of map to report in the server browser.\n\n@param        MapName         The new map name to set. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerMapName." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetMapName constinit property declarations ****************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_MapName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetMapName constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetMapName Property Definitions ***************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameServer_SetMapName_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameServer_eventSetMapName_Parms, MapName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_SetMapName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_SetMapName_Statics::NewProp_MapName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetMapName_Statics::PropPointers) < 2048);
// ********** End Function SetMapName Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_SetMapName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "SetMapName", 	Z_Construct_UFunction_USteamGameServer_SetMapName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetMapName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamGameServer_SetMapName_Statics::SteamGameServer_eventSetMapName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetMapName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameServer_SetMapName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamGameServer_SetMapName_Statics::SteamGameServer_eventSetMapName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameServer_SetMapName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_SetMapName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameServer::execSetMapName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_MapName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMapName(Z_Param_MapName);
	P_NATIVE_END;
}
// ********** End Class USteamGameServer Function SetMapName ***************************************

// ********** Begin Class USteamGameServer Function SetMaxPlayerCount ******************************
struct Z_Construct_UFunction_USteamGameServer_SetMaxPlayerCount_Statics
{
	struct SteamGameServer_eventSetMaxPlayerCount_Parms
	{
		int32 PlayersMax;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Sets the maximum number of players allowed on the server at once.\n\x09*\n\x09* This value may be changed at any time.\n\x09*\n\x09* @param\x09PlayersMax\x09\x09The new maximum number of players allowed on this server.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Sets the maximum number of players allowed on the server at once.\n\nThis value may be changed at any time.\n\n@param        PlayersMax              The new maximum number of players allowed on this server." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetMaxPlayerCount constinit property declarations *********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayersMax;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetMaxPlayerCount constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetMaxPlayerCount Property Definitions ********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamGameServer_SetMaxPlayerCount_Statics::NewProp_PlayersMax = { "PlayersMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameServer_eventSetMaxPlayerCount_Parms, PlayersMax), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_SetMaxPlayerCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_SetMaxPlayerCount_Statics::NewProp_PlayersMax,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetMaxPlayerCount_Statics::PropPointers) < 2048);
// ********** End Function SetMaxPlayerCount Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_SetMaxPlayerCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "SetMaxPlayerCount", 	Z_Construct_UFunction_USteamGameServer_SetMaxPlayerCount_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetMaxPlayerCount_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamGameServer_SetMaxPlayerCount_Statics::SteamGameServer_eventSetMaxPlayerCount_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetMaxPlayerCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameServer_SetMaxPlayerCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamGameServer_SetMaxPlayerCount_Statics::SteamGameServer_eventSetMaxPlayerCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameServer_SetMaxPlayerCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_SetMaxPlayerCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameServer::execSetMaxPlayerCount)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayersMax);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMaxPlayerCount(Z_Param_PlayersMax);
	P_NATIVE_END;
}
// ********** End Class USteamGameServer Function SetMaxPlayerCount ********************************

// ********** Begin Class USteamGameServer Function SetModDir **************************************
struct Z_Construct_UFunction_USteamGameServer_SetModDir_Statics
{
	struct SteamGameServer_eventSetModDir_Parms
	{
		FString ModDir;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Sets the game directory.\n\x09*\n\x09* This should be the same directory game where gets installed into. Just the folder name, not the whole path. I.e. \"Spacewar\".\n\x09*\n\x09* @param\x09ModDir\x09\x09The game directory to set. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerGameDir.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Sets the game directory.\n\nThis should be the same directory game where gets installed into. Just the folder name, not the whole path. I.e. \"Spacewar\".\n\n@param        ModDir          The game directory to set. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerGameDir." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetModDir constinit property declarations *****************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ModDir;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetModDir constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetModDir Property Definitions ****************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameServer_SetModDir_Statics::NewProp_ModDir = { "ModDir", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameServer_eventSetModDir_Parms, ModDir), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_SetModDir_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_SetModDir_Statics::NewProp_ModDir,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetModDir_Statics::PropPointers) < 2048);
// ********** End Function SetModDir Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_SetModDir_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "SetModDir", 	Z_Construct_UFunction_USteamGameServer_SetModDir_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetModDir_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamGameServer_SetModDir_Statics::SteamGameServer_eventSetModDir_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetModDir_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameServer_SetModDir_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamGameServer_SetModDir_Statics::SteamGameServer_eventSetModDir_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameServer_SetModDir()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_SetModDir_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameServer::execSetModDir)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ModDir);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetModDir(Z_Param_ModDir);
	P_NATIVE_END;
}
// ********** End Class USteamGameServer Function SetModDir ****************************************

// ********** Begin Class USteamGameServer Function SetPasswordProtected ***************************
struct Z_Construct_UFunction_USteamGameServer_SetPasswordProtected_Statics
{
	struct SteamGameServer_eventSetPasswordProtected_Parms
	{
		bool bPasswordProtected;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Set whether the game server will require a password once when the user tries to join.\n\x09*\n\x09* @param\x09""bPasswordProtected\x09\x09""Enable (true) or disable (false) password protection.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Set whether the game server will require a password once when the user tries to join.\n\n@param        bPasswordProtected              Enable (true) or disable (false) password protection." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetPasswordProtected constinit property declarations ******************
	static void NewProp_bPasswordProtected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPasswordProtected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetPasswordProtected constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetPasswordProtected Property Definitions *****************************
void Z_Construct_UFunction_USteamGameServer_SetPasswordProtected_Statics::NewProp_bPasswordProtected_SetBit(void* Obj)
{
	((SteamGameServer_eventSetPasswordProtected_Parms*)Obj)->bPasswordProtected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamGameServer_SetPasswordProtected_Statics::NewProp_bPasswordProtected = { "bPasswordProtected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamGameServer_eventSetPasswordProtected_Parms), &Z_Construct_UFunction_USteamGameServer_SetPasswordProtected_Statics::NewProp_bPasswordProtected_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_SetPasswordProtected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_SetPasswordProtected_Statics::NewProp_bPasswordProtected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetPasswordProtected_Statics::PropPointers) < 2048);
// ********** End Function SetPasswordProtected Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_SetPasswordProtected_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "SetPasswordProtected", 	Z_Construct_UFunction_USteamGameServer_SetPasswordProtected_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetPasswordProtected_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamGameServer_SetPasswordProtected_Statics::SteamGameServer_eventSetPasswordProtected_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetPasswordProtected_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameServer_SetPasswordProtected_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamGameServer_SetPasswordProtected_Statics::SteamGameServer_eventSetPasswordProtected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameServer_SetPasswordProtected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_SetPasswordProtected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameServer::execSetPasswordProtected)
{
	P_GET_UBOOL(Z_Param_bPasswordProtected);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPasswordProtected(Z_Param_bPasswordProtected);
	P_NATIVE_END;
}
// ********** End Class USteamGameServer Function SetPasswordProtected *****************************

// ********** Begin Class USteamGameServer Function SetProduct *************************************
struct Z_Construct_UFunction_USteamGameServer_SetProduct_Statics
{
	struct SteamGameServer_eventSetProduct_Parms
	{
		FString Product;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Sets the game product identifier. This is currently used by the master server for version checking purposes.\n\x09*\n\x09* Converting the games app ID to a string for this is recommended.\n\x09*\n\x09* @param\x09Product\x09\x09The unique identifier for your game. Must not be NULL or an empty string (\"\").\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Sets the game product identifier. This is currently used by the master server for version checking purposes.\n\nConverting the games app ID to a string for this is recommended.\n\n@param        Product         The unique identifier for your game. Must not be NULL or an empty string (\"\")." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetProduct constinit property declarations ****************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Product;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetProduct constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetProduct Property Definitions ***************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameServer_SetProduct_Statics::NewProp_Product = { "Product", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameServer_eventSetProduct_Parms, Product), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_SetProduct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_SetProduct_Statics::NewProp_Product,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetProduct_Statics::PropPointers) < 2048);
// ********** End Function SetProduct Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_SetProduct_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "SetProduct", 	Z_Construct_UFunction_USteamGameServer_SetProduct_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetProduct_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamGameServer_SetProduct_Statics::SteamGameServer_eventSetProduct_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetProduct_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameServer_SetProduct_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamGameServer_SetProduct_Statics::SteamGameServer_eventSetProduct_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameServer_SetProduct()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_SetProduct_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameServer::execSetProduct)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Product);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetProduct(Z_Param_Product);
	P_NATIVE_END;
}
// ********** End Class USteamGameServer Function SetProduct ***************************************

// ********** Begin Class USteamGameServer Function SetRegion **************************************
struct Z_Construct_UFunction_USteamGameServer_SetRegion_Statics
{
	struct SteamGameServer_eventSetRegion_Parms
	{
		FString Region;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Region identifier. This is an optional field, the default value is an empty string, meaning the \"world\" region.\n\x09*\n\x09* @param\x09Region\x09\x09region\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Region identifier. This is an optional field, the default value is an empty string, meaning the \"world\" region.\n\n@param        Region          region" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetRegion constinit property declarations *****************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Region;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetRegion constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetRegion Property Definitions ****************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameServer_SetRegion_Statics::NewProp_Region = { "Region", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameServer_eventSetRegion_Parms, Region), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_SetRegion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_SetRegion_Statics::NewProp_Region,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetRegion_Statics::PropPointers) < 2048);
// ********** End Function SetRegion Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_SetRegion_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "SetRegion", 	Z_Construct_UFunction_USteamGameServer_SetRegion_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetRegion_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamGameServer_SetRegion_Statics::SteamGameServer_eventSetRegion_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetRegion_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameServer_SetRegion_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamGameServer_SetRegion_Statics::SteamGameServer_eventSetRegion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameServer_SetRegion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_SetRegion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameServer::execSetRegion)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Region);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRegion(Z_Param_Region);
	P_NATIVE_END;
}
// ********** End Class USteamGameServer Function SetRegion ****************************************

// ********** Begin Class USteamGameServer Function SetServerName **********************************
struct Z_Construct_UFunction_USteamGameServer_SetServerName_Statics
{
	struct SteamGameServer_eventSetServerName_Parms
	{
		FString ServerName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Sets the name of server as it will appear in the server browser.\n\x09*\n\x09* @param\x09ServerName\x09\x09The new server name to set. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerName.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Sets the name of server as it will appear in the server browser.\n\n@param        ServerName              The new server name to set. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerName." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetServerName constinit property declarations *************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServerName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetServerName constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetServerName Property Definitions ************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameServer_SetServerName_Statics::NewProp_ServerName = { "ServerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameServer_eventSetServerName_Parms, ServerName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_SetServerName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_SetServerName_Statics::NewProp_ServerName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetServerName_Statics::PropPointers) < 2048);
// ********** End Function SetServerName Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_SetServerName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "SetServerName", 	Z_Construct_UFunction_USteamGameServer_SetServerName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetServerName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamGameServer_SetServerName_Statics::SteamGameServer_eventSetServerName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetServerName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameServer_SetServerName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamGameServer_SetServerName_Statics::SteamGameServer_eventSetServerName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameServer_SetServerName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_SetServerName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameServer::execSetServerName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ServerName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetServerName(Z_Param_ServerName);
	P_NATIVE_END;
}
// ********** End Class USteamGameServer Function SetServerName ************************************

// ********** Begin Class USteamGameServer Function SetSpectatorPort *******************************
struct Z_Construct_UFunction_USteamGameServer_SetSpectatorPort_Statics
{
	struct SteamGameServer_eventSetSpectatorPort_Parms
	{
		int32 SpectatorPort;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Set whether the game server allows spectators, and what port they should connect on. The default value is 0, meaning the service is not used.\n\x09*\n\x09* @param\x09SpectatorPort\x09\x09The port for spectators to join.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Set whether the game server allows spectators, and what port they should connect on. The default value is 0, meaning the service is not used.\n\n@param        SpectatorPort           The port for spectators to join." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetSpectatorPort constinit property declarations **********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpectatorPort;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetSpectatorPort constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetSpectatorPort Property Definitions *********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamGameServer_SetSpectatorPort_Statics::NewProp_SpectatorPort = { "SpectatorPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameServer_eventSetSpectatorPort_Parms, SpectatorPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_SetSpectatorPort_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_SetSpectatorPort_Statics::NewProp_SpectatorPort,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetSpectatorPort_Statics::PropPointers) < 2048);
// ********** End Function SetSpectatorPort Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_SetSpectatorPort_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "SetSpectatorPort", 	Z_Construct_UFunction_USteamGameServer_SetSpectatorPort_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetSpectatorPort_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamGameServer_SetSpectatorPort_Statics::SteamGameServer_eventSetSpectatorPort_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetSpectatorPort_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameServer_SetSpectatorPort_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamGameServer_SetSpectatorPort_Statics::SteamGameServer_eventSetSpectatorPort_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameServer_SetSpectatorPort()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_SetSpectatorPort_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameServer::execSetSpectatorPort)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SpectatorPort);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSpectatorPort(Z_Param_SpectatorPort);
	P_NATIVE_END;
}
// ********** End Class USteamGameServer Function SetSpectatorPort *********************************

// ********** Begin Class USteamGameServer Function SetSpectatorServerName *************************
struct Z_Construct_UFunction_USteamGameServer_SetSpectatorServerName_Statics
{
	struct SteamGameServer_eventSetSpectatorServerName_Parms
	{
		FString SpectatorServerName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Sets the name of the spectator server. This is only used if spectator port is nonzero.\n\x09*\n\x09* @param\x09SpectatorServerName\x09\x09The spectator server name to set. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerMapName.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Sets the name of the spectator server. This is only used if spectator port is nonzero.\n\n@param        SpectatorServerName             The spectator server name to set. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerMapName." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetSpectatorServerName constinit property declarations ****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_SpectatorServerName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetSpectatorServerName constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetSpectatorServerName Property Definitions ***************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameServer_SetSpectatorServerName_Statics::NewProp_SpectatorServerName = { "SpectatorServerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameServer_eventSetSpectatorServerName_Parms, SpectatorServerName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_SetSpectatorServerName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_SetSpectatorServerName_Statics::NewProp_SpectatorServerName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetSpectatorServerName_Statics::PropPointers) < 2048);
// ********** End Function SetSpectatorServerName Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_SetSpectatorServerName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "SetSpectatorServerName", 	Z_Construct_UFunction_USteamGameServer_SetSpectatorServerName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetSpectatorServerName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamGameServer_SetSpectatorServerName_Statics::SteamGameServer_eventSetSpectatorServerName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetSpectatorServerName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameServer_SetSpectatorServerName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamGameServer_SetSpectatorServerName_Statics::SteamGameServer_eventSetSpectatorServerName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameServer_SetSpectatorServerName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_SetSpectatorServerName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameServer::execSetSpectatorServerName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SpectatorServerName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSpectatorServerName(Z_Param_SpectatorServerName);
	P_NATIVE_END;
}
// ********** End Class USteamGameServer Function SetSpectatorServerName ***************************

// ********** Begin Class USteamGameServer Function UserHasLicenseForApp ***************************
struct Z_Construct_UFunction_USteamGameServer_UserHasLicenseForApp_Statics
{
	struct SteamGameServer_eventUserHasLicenseForApp_Parms
	{
		FSteamID SteamID;
		int32 AppID;
		ESteamUserHasLicenseForAppResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Checks if the user owns a specific piece of Downloadable Content (DLC).\n\x09*\n\x09* This can only be called after sending the users auth ticket to BeginAuthSession/\n\x09*\n\x09* @param\x09SteamID\x09\x09The Steam ID of the user that sent the auth ticket.\n\x09* @param\x09""AppID\x09\x09The DLC App ID to check if the user owns it.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Checks if the user owns a specific piece of Downloadable Content (DLC).\n\nThis can only be called after sending the users auth ticket to BeginAuthSession/\n\n@param        SteamID         The Steam ID of the user that sent the auth ticket.\n@param        AppID           The DLC App ID to check if the user owns it." },
	};
#endif // WITH_METADATA

// ********** Begin Function UserHasLicenseForApp constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UserHasLicenseForApp constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UserHasLicenseForApp Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamGameServer_UserHasLicenseForApp_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameServer_eventUserHasLicenseForApp_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamGameServer_UserHasLicenseForApp_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameServer_eventUserHasLicenseForApp_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamGameServer_UserHasLicenseForApp_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamGameServer_UserHasLicenseForApp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameServer_eventUserHasLicenseForApp_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamUserHasLicenseForAppResult, METADATA_PARAMS(0, nullptr) }; // 3692570237
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_UserHasLicenseForApp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_UserHasLicenseForApp_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_UserHasLicenseForApp_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_UserHasLicenseForApp_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_UserHasLicenseForApp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_UserHasLicenseForApp_Statics::PropPointers) < 2048);
// ********** End Function UserHasLicenseForApp Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_UserHasLicenseForApp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "UserHasLicenseForApp", 	Z_Construct_UFunction_USteamGameServer_UserHasLicenseForApp_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_UserHasLicenseForApp_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamGameServer_UserHasLicenseForApp_Statics::SteamGameServer_eventUserHasLicenseForApp_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_UserHasLicenseForApp_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameServer_UserHasLicenseForApp_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamGameServer_UserHasLicenseForApp_Statics::SteamGameServer_eventUserHasLicenseForApp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameServer_UserHasLicenseForApp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_UserHasLicenseForApp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameServer::execUserHasLicenseForApp)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamID);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamUserHasLicenseForAppResult*)Z_Param__Result=P_THIS->UserHasLicenseForApp(Z_Param_SteamID,Z_Param_AppID);
	P_NATIVE_END;
}
// ********** End Class USteamGameServer Function UserHasLicenseForApp *****************************

// ********** Begin Class USteamGameServer Function WasRestartRequested ****************************
struct Z_Construct_UFunction_USteamGameServer_WasRestartRequested_Statics
{
	struct SteamGameServer_eventWasRestartRequested_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Checks if the master server has alerted us that we are out of date.\n\x09*\n\x09* This reverts back to false after calling this function.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Checks if the master server has alerted us that we are out of date.\n\nThis reverts back to false after calling this function." },
	};
#endif // WITH_METADATA

// ********** Begin Function WasRestartRequested constinit property declarations *******************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function WasRestartRequested constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function WasRestartRequested Property Definitions ******************************
void Z_Construct_UFunction_USteamGameServer_WasRestartRequested_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamGameServer_eventWasRestartRequested_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamGameServer_WasRestartRequested_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamGameServer_eventWasRestartRequested_Parms), &Z_Construct_UFunction_USteamGameServer_WasRestartRequested_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_WasRestartRequested_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_WasRestartRequested_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_WasRestartRequested_Statics::PropPointers) < 2048);
// ********** End Function WasRestartRequested Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_WasRestartRequested_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "WasRestartRequested", 	Z_Construct_UFunction_USteamGameServer_WasRestartRequested_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_WasRestartRequested_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamGameServer_WasRestartRequested_Statics::SteamGameServer_eventWasRestartRequested_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_WasRestartRequested_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameServer_WasRestartRequested_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamGameServer_WasRestartRequested_Statics::SteamGameServer_eventWasRestartRequested_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameServer_WasRestartRequested()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_WasRestartRequested_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameServer::execWasRestartRequested)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->WasRestartRequested();
	P_NATIVE_END;
}
// ********** End Class USteamGameServer Function WasRestartRequested ******************************

// ********** Begin Class USteamGameServer *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamGameServer;
UClass* USteamGameServer::GetPrivateStaticClass()
{
	using TClass = USteamGameServer;
	if (!Z_Registration_Info_UClass_USteamGameServer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamGameServer"),
			Z_Registration_Info_UClass_USteamGameServer.InnerSingleton,
			StaticRegisterNativesUSteamGameServer,
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
	return Z_Registration_Info_UClass_USteamGameServer.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamGameServer_NoRegister()
{
	return USteamGameServer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamGameServer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamGameServer/SteamGameServer.h" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GSPolicyResponse_MetaData[] = {
		{ "Category", "SteamCore|GameServer|Delegates" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GSClientGroupStatus_MetaData[] = {
		{ "Category", "SteamCore|GameServer|Delegates" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GSValidateAuthTicketResponse_MetaData[] = {
		{ "Category", "SteamCore|GameServer|Delegates" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GSClientApprove_MetaData[] = {
		{ "Category", "SteamCore|GameServer|Delegates" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GSClientDeny_MetaData[] = {
		{ "Category", "SteamCore|GameServer|Delegates" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamGameServer constinit property declarations *************************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GSPolicyResponse;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GSClientGroupStatus;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GSValidateAuthTicketResponse;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GSClientApprove;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GSClientDeny;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USteamGameServer constinit property declarations ***************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AssociateWithClan"), .Pointer = &USteamGameServer::execAssociateWithClan },
		{ .NameUTF8 = UTF8TEXT("BeginAuthSession"), .Pointer = &USteamGameServer::execBeginAuthSession },
		{ .NameUTF8 = UTF8TEXT("BLoggedOn"), .Pointer = &USteamGameServer::execBLoggedOn },
		{ .NameUTF8 = UTF8TEXT("BSecure"), .Pointer = &USteamGameServer::execBSecure },
		{ .NameUTF8 = UTF8TEXT("BUpdateUserData"), .Pointer = &USteamGameServer::execBUpdateUserData },
		{ .NameUTF8 = UTF8TEXT("CancelAuthTicket"), .Pointer = &USteamGameServer::execCancelAuthTicket },
		{ .NameUTF8 = UTF8TEXT("ClearAllKeyValues"), .Pointer = &USteamGameServer::execClearAllKeyValues },
		{ .NameUTF8 = UTF8TEXT("ComputeNewPlayerCompatibility"), .Pointer = &USteamGameServer::execComputeNewPlayerCompatibility },
		{ .NameUTF8 = UTF8TEXT("CreateUnauthenticatedUserConnection"), .Pointer = &USteamGameServer::execCreateUnauthenticatedUserConnection },
		{ .NameUTF8 = UTF8TEXT("EnableHeartbeats"), .Pointer = &USteamGameServer::execEnableHeartbeats },
		{ .NameUTF8 = UTF8TEXT("EndAuthSession"), .Pointer = &USteamGameServer::execEndAuthSession },
		{ .NameUTF8 = UTF8TEXT("ForceHeartbeat"), .Pointer = &USteamGameServer::execForceHeartbeat },
		{ .NameUTF8 = UTF8TEXT("GetAuthSessionTicket"), .Pointer = &USteamGameServer::execGetAuthSessionTicket },
		{ .NameUTF8 = UTF8TEXT("GetServerPublicIP"), .Pointer = &USteamGameServer::execGetServerPublicIP },
		{ .NameUTF8 = UTF8TEXT("GetServerPublicIP_Pure"), .Pointer = &USteamGameServer::execGetServerPublicIP_Pure },
		{ .NameUTF8 = UTF8TEXT("GetServerPublicIP_PureCompact"), .Pointer = &USteamGameServer::execGetServerPublicIP_PureCompact },
		{ .NameUTF8 = UTF8TEXT("GetServerSteamID"), .Pointer = &USteamGameServer::execGetServerSteamID },
		{ .NameUTF8 = UTF8TEXT("GetServerSteamID_Pure"), .Pointer = &USteamGameServer::execGetServerSteamID_Pure },
		{ .NameUTF8 = UTF8TEXT("GetServerSteamID_PureCompact"), .Pointer = &USteamGameServer::execGetServerSteamID_PureCompact },
		{ .NameUTF8 = UTF8TEXT("LogOff"), .Pointer = &USteamGameServer::execLogOff },
		{ .NameUTF8 = UTF8TEXT("LogOn"), .Pointer = &USteamGameServer::execLogOn },
		{ .NameUTF8 = UTF8TEXT("LogOnAnonymous"), .Pointer = &USteamGameServer::execLogOnAnonymous },
		{ .NameUTF8 = UTF8TEXT("RequestUserGroupStatus"), .Pointer = &USteamGameServer::execRequestUserGroupStatus },
		{ .NameUTF8 = UTF8TEXT("SetAdvertiseServerActive"), .Pointer = &USteamGameServer::execSetAdvertiseServerActive },
		{ .NameUTF8 = UTF8TEXT("SetBotPlayerCount"), .Pointer = &USteamGameServer::execSetBotPlayerCount },
		{ .NameUTF8 = UTF8TEXT("SetDedicatedServer"), .Pointer = &USteamGameServer::execSetDedicatedServer },
		{ .NameUTF8 = UTF8TEXT("SetGameData"), .Pointer = &USteamGameServer::execSetGameData },
		{ .NameUTF8 = UTF8TEXT("SetGameDescription"), .Pointer = &USteamGameServer::execSetGameDescription },
		{ .NameUTF8 = UTF8TEXT("SetGameTags"), .Pointer = &USteamGameServer::execSetGameTags },
		{ .NameUTF8 = UTF8TEXT("SetHeartbeatInterval"), .Pointer = &USteamGameServer::execSetHeartbeatInterval },
		{ .NameUTF8 = UTF8TEXT("SetKeyValue"), .Pointer = &USteamGameServer::execSetKeyValue },
		{ .NameUTF8 = UTF8TEXT("SetMapName"), .Pointer = &USteamGameServer::execSetMapName },
		{ .NameUTF8 = UTF8TEXT("SetMaxPlayerCount"), .Pointer = &USteamGameServer::execSetMaxPlayerCount },
		{ .NameUTF8 = UTF8TEXT("SetModDir"), .Pointer = &USteamGameServer::execSetModDir },
		{ .NameUTF8 = UTF8TEXT("SetPasswordProtected"), .Pointer = &USteamGameServer::execSetPasswordProtected },
		{ .NameUTF8 = UTF8TEXT("SetProduct"), .Pointer = &USteamGameServer::execSetProduct },
		{ .NameUTF8 = UTF8TEXT("SetRegion"), .Pointer = &USteamGameServer::execSetRegion },
		{ .NameUTF8 = UTF8TEXT("SetServerName"), .Pointer = &USteamGameServer::execSetServerName },
		{ .NameUTF8 = UTF8TEXT("SetSpectatorPort"), .Pointer = &USteamGameServer::execSetSpectatorPort },
		{ .NameUTF8 = UTF8TEXT("SetSpectatorServerName"), .Pointer = &USteamGameServer::execSetSpectatorServerName },
		{ .NameUTF8 = UTF8TEXT("UserHasLicenseForApp"), .Pointer = &USteamGameServer::execUserHasLicenseForApp },
		{ .NameUTF8 = UTF8TEXT("WasRestartRequested"), .Pointer = &USteamGameServer::execWasRestartRequested },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamGameServer_AssociateWithClan, "AssociateWithClan" }, // 532139106
		{ &Z_Construct_UFunction_USteamGameServer_BeginAuthSession, "BeginAuthSession" }, // 95723729
		{ &Z_Construct_UFunction_USteamGameServer_BLoggedOn, "BLoggedOn" }, // 4236214896
		{ &Z_Construct_UFunction_USteamGameServer_BSecure, "BSecure" }, // 162462765
		{ &Z_Construct_UFunction_USteamGameServer_BUpdateUserData, "BUpdateUserData" }, // 3883582201
		{ &Z_Construct_UFunction_USteamGameServer_CancelAuthTicket, "CancelAuthTicket" }, // 3512913196
		{ &Z_Construct_UFunction_USteamGameServer_ClearAllKeyValues, "ClearAllKeyValues" }, // 4269293715
		{ &Z_Construct_UFunction_USteamGameServer_ComputeNewPlayerCompatibility, "ComputeNewPlayerCompatibility" }, // 1086836972
		{ &Z_Construct_UFunction_USteamGameServer_CreateUnauthenticatedUserConnection, "CreateUnauthenticatedUserConnection" }, // 57551750
		{ &Z_Construct_UFunction_USteamGameServer_EnableHeartbeats, "EnableHeartbeats" }, // 796536356
		{ &Z_Construct_UFunction_USteamGameServer_EndAuthSession, "EndAuthSession" }, // 3342662742
		{ &Z_Construct_UFunction_USteamGameServer_ForceHeartbeat, "ForceHeartbeat" }, // 3134169254
		{ &Z_Construct_UFunction_USteamGameServer_GetAuthSessionTicket, "GetAuthSessionTicket" }, // 320076514
		{ &Z_Construct_UFunction_USteamGameServer_GetServerPublicIP, "GetServerPublicIP" }, // 3608025361
		{ &Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Pure, "GetServerPublicIP_Pure" }, // 3255356457
		{ &Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_PureCompact, "GetServerPublicIP_PureCompact" }, // 915491848
		{ &Z_Construct_UFunction_USteamGameServer_GetServerSteamID, "GetServerSteamID" }, // 894979127
		{ &Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Pure, "GetServerSteamID_Pure" }, // 4213373057
		{ &Z_Construct_UFunction_USteamGameServer_GetServerSteamID_PureCompact, "GetServerSteamID_PureCompact" }, // 2289950220
		{ &Z_Construct_UFunction_USteamGameServer_LogOff, "LogOff" }, // 1651025519
		{ &Z_Construct_UFunction_USteamGameServer_LogOn, "LogOn" }, // 4204103069
		{ &Z_Construct_UFunction_USteamGameServer_LogOnAnonymous, "LogOnAnonymous" }, // 1939532991
		{ &Z_Construct_UFunction_USteamGameServer_RequestUserGroupStatus, "RequestUserGroupStatus" }, // 2273084910
		{ &Z_Construct_UFunction_USteamGameServer_SetAdvertiseServerActive, "SetAdvertiseServerActive" }, // 114511741
		{ &Z_Construct_UFunction_USteamGameServer_SetBotPlayerCount, "SetBotPlayerCount" }, // 3436607998
		{ &Z_Construct_UFunction_USteamGameServer_SetDedicatedServer, "SetDedicatedServer" }, // 1104291879
		{ &Z_Construct_UFunction_USteamGameServer_SetGameData, "SetGameData" }, // 1787501791
		{ &Z_Construct_UFunction_USteamGameServer_SetGameDescription, "SetGameDescription" }, // 1014432143
		{ &Z_Construct_UFunction_USteamGameServer_SetGameTags, "SetGameTags" }, // 2095331206
		{ &Z_Construct_UFunction_USteamGameServer_SetHeartbeatInterval, "SetHeartbeatInterval" }, // 2091684420
		{ &Z_Construct_UFunction_USteamGameServer_SetKeyValue, "SetKeyValue" }, // 4171471719
		{ &Z_Construct_UFunction_USteamGameServer_SetMapName, "SetMapName" }, // 2614795180
		{ &Z_Construct_UFunction_USteamGameServer_SetMaxPlayerCount, "SetMaxPlayerCount" }, // 3079373366
		{ &Z_Construct_UFunction_USteamGameServer_SetModDir, "SetModDir" }, // 3695704105
		{ &Z_Construct_UFunction_USteamGameServer_SetPasswordProtected, "SetPasswordProtected" }, // 3751698103
		{ &Z_Construct_UFunction_USteamGameServer_SetProduct, "SetProduct" }, // 151349937
		{ &Z_Construct_UFunction_USteamGameServer_SetRegion, "SetRegion" }, // 747106365
		{ &Z_Construct_UFunction_USteamGameServer_SetServerName, "SetServerName" }, // 2460301807
		{ &Z_Construct_UFunction_USteamGameServer_SetSpectatorPort, "SetSpectatorPort" }, // 114128406
		{ &Z_Construct_UFunction_USteamGameServer_SetSpectatorServerName, "SetSpectatorServerName" }, // 272908026
		{ &Z_Construct_UFunction_USteamGameServer_UserHasLicenseForApp, "UserHasLicenseForApp" }, // 317111060
		{ &Z_Construct_UFunction_USteamGameServer_WasRestartRequested, "WasRestartRequested" }, // 4190245884
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamGameServer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamGameServer_Statics

// ********** Begin Class USteamGameServer Property Definitions ************************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameServer_Statics::NewProp_GSPolicyResponse = { "GSPolicyResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamGameServer, GSPolicyResponse), Z_Construct_UDelegateFunction_SteamCore_OnGSPolicyResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GSPolicyResponse_MetaData), NewProp_GSPolicyResponse_MetaData) }; // 2908769924
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameServer_Statics::NewProp_GSClientGroupStatus = { "GSClientGroupStatus", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamGameServer, GSClientGroupStatus), Z_Construct_UDelegateFunction_SteamCore_OnGSClientGroupStatus__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GSClientGroupStatus_MetaData), NewProp_GSClientGroupStatus_MetaData) }; // 1903308230
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameServer_Statics::NewProp_GSValidateAuthTicketResponse = { "GSValidateAuthTicketResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamGameServer, GSValidateAuthTicketResponse), Z_Construct_UDelegateFunction_SteamCore_OnGSValidateAuthTicketResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GSValidateAuthTicketResponse_MetaData), NewProp_GSValidateAuthTicketResponse_MetaData) }; // 1983236293
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameServer_Statics::NewProp_GSClientApprove = { "GSClientApprove", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamGameServer, GSClientApprove), Z_Construct_UDelegateFunction_SteamCore_OnGSClientApprove__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GSClientApprove_MetaData), NewProp_GSClientApprove_MetaData) }; // 2616369042
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameServer_Statics::NewProp_GSClientDeny = { "GSClientDeny", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamGameServer, GSClientDeny), Z_Construct_UDelegateFunction_SteamCore_OnGSClientDeny__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GSClientDeny_MetaData), NewProp_GSClientDeny_MetaData) }; // 3874782696
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamGameServer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameServer_Statics::NewProp_GSPolicyResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameServer_Statics::NewProp_GSClientGroupStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameServer_Statics::NewProp_GSValidateAuthTicketResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameServer_Statics::NewProp_GSClientApprove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameServer_Statics::NewProp_GSClientDeny,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamGameServer_Statics::PropPointers) < 2048);
// ********** End Class USteamGameServer Property Definitions **************************************
UObject* (*const Z_Construct_UClass_USteamGameServer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamGameServer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamGameServer_Statics::ClassParams = {
	&USteamGameServer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamGameServer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamGameServer_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamGameServer_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamGameServer_Statics::Class_MetaDataParams)
};
void USteamGameServer::StaticRegisterNativesUSteamGameServer()
{
	UClass* Class = USteamGameServer::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamGameServer_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamGameServer()
{
	if (!Z_Registration_Info_UClass_USteamGameServer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamGameServer.OuterSingleton, Z_Construct_UClass_USteamGameServer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamGameServer.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamGameServer);
USteamGameServer::~USteamGameServer() {}
// ********** End Class USteamGameServer ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServer_h__Script_SteamCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamGameServer, USteamGameServer::StaticClass, TEXT("USteamGameServer"), &Z_Registration_Info_UClass_USteamGameServer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamGameServer), 965406443U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServer_h__Script_SteamCore_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServer_h__Script_SteamCore_2898769471{
	TEXT("/Script/SteamCore"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServer_h__Script_SteamCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServer_h__Script_SteamCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
