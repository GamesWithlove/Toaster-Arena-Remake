// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamGameServer/SteamGameServer.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
#include "SteamCore/Public/SteamCore/SteamTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamGameServer() {}
// Cross Module References
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
// End Cross Module References
	DEFINE_FUNCTION(USteamGameServer::execWasRestartRequested)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->WasRestartRequested();
		P_NATIVE_END;
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
	DEFINE_FUNCTION(USteamGameServer::execSetSpectatorServerName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SpectatorServerName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSpectatorServerName(Z_Param_SpectatorServerName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execSetSpectatorPort)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SpectatorPort);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSpectatorPort(Z_Param_SpectatorPort);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execSetServerName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ServerName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetServerName(Z_Param_ServerName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execSetRegion)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Region);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRegion(Z_Param_Region);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execSetProduct)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Product);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetProduct(Z_Param_Product);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execSetPasswordProtected)
	{
		P_GET_UBOOL(Z_Param_bPasswordProtected);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPasswordProtected(Z_Param_bPasswordProtected);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execSetModDir)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ModDir);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetModDir(Z_Param_ModDir);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execSetMaxPlayerCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayersMax);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxPlayerCount(Z_Param_PlayersMax);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execSetMapName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MapName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMapName(Z_Param_MapName);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(USteamGameServer::execSetHeartbeatInterval)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_HeartbeatInterval);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHeartbeatInterval(Z_Param_HeartbeatInterval);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execSetGameTags)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_GameTags);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGameTags(Z_Param_GameTags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execSetGameDescription)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_GameDescription);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGameDescription(Z_Param_GameDescription);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execSetGameData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_GameData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGameData(Z_Param_GameData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execSetDedicatedServer)
	{
		P_GET_UBOOL(Z_Param_bDedicated);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDedicatedServer(Z_Param_bDedicated);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execSetBotPlayerCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Botplayers);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBotPlayerCount(Z_Param_Botplayers);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(USteamGameServer::execLogOnAnonymous)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LogOnAnonymous();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execLogOn)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Token);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LogOn(Z_Param_Token);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execLogOff)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LogOff();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execGetServerSteamID_PureCompact)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=P_THIS->GetServerSteamID_PureCompact();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execGetServerSteamID_Pure)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=P_THIS->GetServerSteamID_Pure();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execGetServerSteamID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=P_THIS->GetServerSteamID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execGetServerPublicIP_PureCompact)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetServerPublicIP_PureCompact();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execGetServerPublicIP_Pure)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetServerPublicIP_Pure();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execGetServerPublicIP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetServerPublicIP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execGetAuthSessionTicket)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Ticket);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamTicketHandle*)Z_Param__Result=P_THIS->GetAuthSessionTicket(Z_Param_Out_Ticket);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execForceHeartbeat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForceHeartbeat();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execEndAuthSession)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndAuthSession(Z_Param_SteamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execSetAdvertiseServerActive)
	{
		P_GET_UBOOL(Z_Param_bActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAdvertiseServerActive(Z_Param_bActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execEnableHeartbeats)
	{
		P_GET_UBOOL(Z_Param_bActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableHeartbeats(Z_Param_bActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execCreateUnauthenticatedUserConnection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=P_THIS->CreateUnauthenticatedUserConnection();
		P_NATIVE_END;
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
	DEFINE_FUNCTION(USteamGameServer::execClearAllKeyValues)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearAllKeyValues();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execCancelAuthTicket)
	{
		P_GET_STRUCT(FSteamTicketHandle,Z_Param_TicketHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelAuthTicket(Z_Param_TicketHandle);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(USteamGameServer::execBSecure)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BSecure();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execBLoggedOn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BLoggedOn();
		P_NATIVE_END;
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
	DEFINE_FUNCTION(USteamGameServer::execAssociateWithClan)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AssociateWithClan(FOnAssociateWithClan(Z_Param_Out_Callback),Z_Param_SteamIDClan);
		P_NATIVE_END;
	}
	void USteamGameServer::StaticRegisterNativesUSteamGameServer()
	{
		UClass* Class = USteamGameServer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AssociateWithClan", &USteamGameServer::execAssociateWithClan },
			{ "BeginAuthSession", &USteamGameServer::execBeginAuthSession },
			{ "BLoggedOn", &USteamGameServer::execBLoggedOn },
			{ "BSecure", &USteamGameServer::execBSecure },
			{ "BUpdateUserData", &USteamGameServer::execBUpdateUserData },
			{ "CancelAuthTicket", &USteamGameServer::execCancelAuthTicket },
			{ "ClearAllKeyValues", &USteamGameServer::execClearAllKeyValues },
			{ "ComputeNewPlayerCompatibility", &USteamGameServer::execComputeNewPlayerCompatibility },
			{ "CreateUnauthenticatedUserConnection", &USteamGameServer::execCreateUnauthenticatedUserConnection },
			{ "EnableHeartbeats", &USteamGameServer::execEnableHeartbeats },
			{ "EndAuthSession", &USteamGameServer::execEndAuthSession },
			{ "ForceHeartbeat", &USteamGameServer::execForceHeartbeat },
			{ "GetAuthSessionTicket", &USteamGameServer::execGetAuthSessionTicket },
			{ "GetServerPublicIP", &USteamGameServer::execGetServerPublicIP },
			{ "GetServerPublicIP_Pure", &USteamGameServer::execGetServerPublicIP_Pure },
			{ "GetServerPublicIP_PureCompact", &USteamGameServer::execGetServerPublicIP_PureCompact },
			{ "GetServerSteamID", &USteamGameServer::execGetServerSteamID },
			{ "GetServerSteamID_Pure", &USteamGameServer::execGetServerSteamID_Pure },
			{ "GetServerSteamID_PureCompact", &USteamGameServer::execGetServerSteamID_PureCompact },
			{ "LogOff", &USteamGameServer::execLogOff },
			{ "LogOn", &USteamGameServer::execLogOn },
			{ "LogOnAnonymous", &USteamGameServer::execLogOnAnonymous },
			{ "RequestUserGroupStatus", &USteamGameServer::execRequestUserGroupStatus },
			{ "SetAdvertiseServerActive", &USteamGameServer::execSetAdvertiseServerActive },
			{ "SetBotPlayerCount", &USteamGameServer::execSetBotPlayerCount },
			{ "SetDedicatedServer", &USteamGameServer::execSetDedicatedServer },
			{ "SetGameData", &USteamGameServer::execSetGameData },
			{ "SetGameDescription", &USteamGameServer::execSetGameDescription },
			{ "SetGameTags", &USteamGameServer::execSetGameTags },
			{ "SetHeartbeatInterval", &USteamGameServer::execSetHeartbeatInterval },
			{ "SetKeyValue", &USteamGameServer::execSetKeyValue },
			{ "SetMapName", &USteamGameServer::execSetMapName },
			{ "SetMaxPlayerCount", &USteamGameServer::execSetMaxPlayerCount },
			{ "SetModDir", &USteamGameServer::execSetModDir },
			{ "SetPasswordProtected", &USteamGameServer::execSetPasswordProtected },
			{ "SetProduct", &USteamGameServer::execSetProduct },
			{ "SetRegion", &USteamGameServer::execSetRegion },
			{ "SetServerName", &USteamGameServer::execSetServerName },
			{ "SetSpectatorPort", &USteamGameServer::execSetSpectatorPort },
			{ "SetSpectatorServerName", &USteamGameServer::execSetSpectatorServerName },
			{ "UserHasLicenseForApp", &USteamGameServer::execUserHasLicenseForApp },
			{ "WasRestartRequested", &USteamGameServer::execWasRestartRequested },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamGameServer_AssociateWithClan_Statics
	{
		struct SteamGameServer_eventAssociateWithClan_Parms
		{
			FScriptDelegate Callback;
			FSteamID SteamIDClan;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_AssociateWithClan_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamGameServer_AssociateWithClan_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameServer_eventAssociateWithClan_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_AssociateWithClan_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_AssociateWithClan_Statics::NewProp_Callback_MetaData)) }; // 50751182
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamGameServer_AssociateWithClan_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameServer_eventAssociateWithClan_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_AssociateWithClan_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_AssociateWithClan_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_AssociateWithClan_Statics::NewProp_SteamIDClan,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_AssociateWithClan_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Associate this game server with this clan for the purposes of computing player compatibility.\n\x09*\n\x09* @param\x09SteamIDClan\x09\x09The Steam ID of the group you want to be associated with.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Associate this game server with this clan for the purposes of computing player compatibility.\n\n@param        SteamIDClan             The Steam ID of the group you want to be associated with." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_AssociateWithClan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "AssociateWithClan", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamGameServer_AssociateWithClan_Statics::SteamGameServer_eventAssociateWithClan_Parms), Z_Construct_UFunction_USteamGameServer_AssociateWithClan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_AssociateWithClan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_AssociateWithClan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_AssociateWithClan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_AssociateWithClan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_AssociateWithClan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_BeginAuthSession_Statics
	{
		struct SteamGameServer_eventBeginAuthSession_Parms
		{
			TArray<uint8> Ticket;
			FSteamID SteamID;
			ESteamBeginAuthSessionResult ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Ticket_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Ticket;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamGameServer_BeginAuthSession_Statics::NewProp_Ticket_Inner = { "Ticket", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamGameServer_BeginAuthSession_Statics::NewProp_Ticket = { "Ticket", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameServer_eventBeginAuthSession_Parms, Ticket), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamGameServer_BeginAuthSession_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameServer_eventBeginAuthSession_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamGameServer_BeginAuthSession_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamGameServer_BeginAuthSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameServer_eventBeginAuthSession_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamBeginAuthSessionResult, METADATA_PARAMS(nullptr, 0) }; // 1279482194
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_BeginAuthSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_BeginAuthSession_Statics::NewProp_Ticket_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_BeginAuthSession_Statics::NewProp_Ticket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_BeginAuthSession_Statics::NewProp_SteamID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_BeginAuthSession_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_BeginAuthSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_BeginAuthSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Authenticate the ticket from the entity Steam ID to be sure it is valid and isn't reused.\n\x09*\n\x09* The ticket is created on the entity with ISteamUser::GetAuthSessionTicket or GetAuthSessionTicket and then needs to be provided over the network for the other end to validate.\n\x09* This registers for ValidateAuthTicketResponse_t Callbacks if the entity goes offline or cancels the ticket. See EAuthSessionResponse for more information.\n\x09* When the multiplayer session terminates you must call EndAuthSession.\n\x09*\n\x09* @param\x09Ticket\x09\x09The auth ticket to validate.\n\x09* @param\x09SteamID\x09\x09The entity's Steam ID that sent this ticket.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Authenticate the ticket from the entity Steam ID to be sure it is valid and isn't reused.\n\nThe ticket is created on the entity with ISteamUser::GetAuthSessionTicket or GetAuthSessionTicket and then needs to be provided over the network for the other end to validate.\nThis registers for ValidateAuthTicketResponse_t Callbacks if the entity goes offline or cancels the ticket. See EAuthSessionResponse for more information.\nWhen the multiplayer session terminates you must call EndAuthSession.\n\n@param        Ticket          The auth ticket to validate.\n@param        SteamID         The entity's Steam ID that sent this ticket." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_BeginAuthSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "BeginAuthSession", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamGameServer_BeginAuthSession_Statics::SteamGameServer_eventBeginAuthSession_Parms), Z_Construct_UFunction_USteamGameServer_BeginAuthSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_BeginAuthSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_BeginAuthSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_BeginAuthSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_BeginAuthSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_BeginAuthSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_BLoggedOn_Statics
	{
		struct SteamGameServer_eventBLoggedOn_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USteamGameServer_BLoggedOn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamGameServer_eventBLoggedOn_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamGameServer_BLoggedOn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamGameServer_eventBLoggedOn_Parms), &Z_Construct_UFunction_USteamGameServer_BLoggedOn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_BLoggedOn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_BLoggedOn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_BLoggedOn_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Checks if the game server is logged on.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Checks if the game server is logged on." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_BLoggedOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "BLoggedOn", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamGameServer_BLoggedOn_Statics::SteamGameServer_eventBLoggedOn_Parms), Z_Construct_UFunction_USteamGameServer_BLoggedOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_BLoggedOn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_BLoggedOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_BLoggedOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_BLoggedOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_BLoggedOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_BSecure_Statics
	{
		struct SteamGameServer_eventBSecure_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USteamGameServer_BSecure_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamGameServer_eventBSecure_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamGameServer_BSecure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamGameServer_eventBSecure_Parms), &Z_Construct_UFunction_USteamGameServer_BSecure_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_BSecure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_BSecure_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_BSecure_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Checks whether the game server is in \"Secure\" mode.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Checks whether the game server is in \"Secure\" mode." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_BSecure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "BSecure", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamGameServer_BSecure_Statics::SteamGameServer_eventBSecure_Parms), Z_Construct_UFunction_USteamGameServer_BSecure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_BSecure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_BSecure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_BSecure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_BSecure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_BSecure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics
	{
		struct SteamGameServer_eventBUpdateUserData_Parms
		{
			FSteamID SteamIDUser;
			FString PlayerName;
			int32 Score;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameServer_eventBUpdateUserData_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameServer_eventBUpdateUserData_Parms, PlayerName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameServer_eventBUpdateUserData_Parms, Score), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamGameServer_eventBUpdateUserData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamGameServer_eventBUpdateUserData_Parms), &Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics::NewProp_SteamIDUser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics::NewProp_PlayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics::NewProp_Score,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Checks whether the game server is in \"Secure\" mode.\n\x09*\n\x09* @param\x09SteamIDUser\x09\x09The Steam ID of the user.\n\x09* @param\x09PlayerName\x09\x09The name of the user.\n\x09* @param\x09Score\x09\x09\x09The current score of the user.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Checks whether the game server is in \"Secure\" mode.\n\n@param        SteamIDUser             The Steam ID of the user.\n@param        PlayerName              The name of the user.\n@param        Score                   The current score of the user." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "BUpdateUserData", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics::SteamGameServer_eventBUpdateUserData_Parms), Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_BUpdateUserData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_CancelAuthTicket_Statics
	{
		struct SteamGameServer_eventCancelAuthTicket_Parms
		{
			FSteamTicketHandle TicketHandle;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TicketHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamGameServer_CancelAuthTicket_Statics::NewProp_TicketHandle = { "TicketHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameServer_eventCancelAuthTicket_Parms, TicketHandle), Z_Construct_UScriptStruct_FSteamTicketHandle, METADATA_PARAMS(nullptr, 0) }; // 1818574373
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_CancelAuthTicket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_CancelAuthTicket_Statics::NewProp_TicketHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_CancelAuthTicket_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Cancels an auth ticket received from ISteamUser::GetAuthSessionTicket. This should be called when no longer playing with the specified entity.\n\x09*\n\x09* @param\x09TicketHandle\x09The active auth ticket to cancel.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Cancels an auth ticket received from ISteamUser::GetAuthSessionTicket. This should be called when no longer playing with the specified entity.\n\n@param        TicketHandle    The active auth ticket to cancel." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_CancelAuthTicket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "CancelAuthTicket", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamGameServer_CancelAuthTicket_Statics::SteamGameServer_eventCancelAuthTicket_Parms), Z_Construct_UFunction_USteamGameServer_CancelAuthTicket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_CancelAuthTicket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_CancelAuthTicket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_CancelAuthTicket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_CancelAuthTicket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_CancelAuthTicket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_ClearAllKeyValues_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_ClearAllKeyValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Clears the whole list of key/values that are sent in rules queries.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Clears the whole list of key/values that are sent in rules queries." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_ClearAllKeyValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "ClearAllKeyValues", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_ClearAllKeyValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_ClearAllKeyValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_ClearAllKeyValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_ClearAllKeyValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_ComputeNewPlayerCompatibility_Statics
	{
		struct SteamGameServer_eventComputeNewPlayerCompatibility_Parms
		{
			FScriptDelegate Callback;
			FSteamID SteamIDNewPlayer;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDNewPlayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_ComputeNewPlayerCompatibility_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamGameServer_ComputeNewPlayerCompatibility_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameServer_eventComputeNewPlayerCompatibility_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_ComputeNewPlayerCompatibility_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_ComputeNewPlayerCompatibility_Statics::NewProp_Callback_MetaData)) }; // 2057041449
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamGameServer_ComputeNewPlayerCompatibility_Statics::NewProp_SteamIDNewPlayer = { "SteamIDNewPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameServer_eventComputeNewPlayerCompatibility_Parms, SteamIDNewPlayer), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_ComputeNewPlayerCompatibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_ComputeNewPlayerCompatibility_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_ComputeNewPlayerCompatibility_Statics::NewProp_SteamIDNewPlayer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_ComputeNewPlayerCompatibility_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Checks if any of the current players don't want to play with this new player that is attempting to join - or vice versa; based on the frenemy system.\n\x09*\n\x09* @param\x09SteamIDNewPlayer\x09The Steam ID of the player that is attempting to join.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Checks if any of the current players don't want to play with this new player that is attempting to join - or vice versa; based on the frenemy system.\n\n@param        SteamIDNewPlayer        The Steam ID of the player that is attempting to join." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_ComputeNewPlayerCompatibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "ComputeNewPlayerCompatibility", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamGameServer_ComputeNewPlayerCompatibility_Statics::SteamGameServer_eventComputeNewPlayerCompatibility_Parms), Z_Construct_UFunction_USteamGameServer_ComputeNewPlayerCompatibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_ComputeNewPlayerCompatibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_ComputeNewPlayerCompatibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_ComputeNewPlayerCompatibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_ComputeNewPlayerCompatibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_ComputeNewPlayerCompatibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_CreateUnauthenticatedUserConnection_Statics
	{
		struct SteamGameServer_eventCreateUnauthenticatedUserConnection_Parms
		{
			FSteamID ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamGameServer_CreateUnauthenticatedUserConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameServer_eventCreateUnauthenticatedUserConnection_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_CreateUnauthenticatedUserConnection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_CreateUnauthenticatedUserConnection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_CreateUnauthenticatedUserConnection_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Creates a fake user (ie, a bot) which will be listed as playing on the server, but skips validation.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Creates a fake user (ie, a bot) which will be listed as playing on the server, but skips validation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_CreateUnauthenticatedUserConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "CreateUnauthenticatedUserConnection", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamGameServer_CreateUnauthenticatedUserConnection_Statics::SteamGameServer_eventCreateUnauthenticatedUserConnection_Parms), Z_Construct_UFunction_USteamGameServer_CreateUnauthenticatedUserConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_CreateUnauthenticatedUserConnection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_CreateUnauthenticatedUserConnection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_CreateUnauthenticatedUserConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_CreateUnauthenticatedUserConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_CreateUnauthenticatedUserConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_EnableHeartbeats_Statics
	{
		struct SteamGameServer_eventEnableHeartbeats_Parms
		{
			bool bActive;
		};
		static void NewProp_bActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bActive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USteamGameServer_EnableHeartbeats_Statics::NewProp_bActive_SetBit(void* Obj)
	{
		((SteamGameServer_eventEnableHeartbeats_Parms*)Obj)->bActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamGameServer_EnableHeartbeats_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamGameServer_eventEnableHeartbeats_Parms), &Z_Construct_UFunction_USteamGameServer_EnableHeartbeats_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_EnableHeartbeats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_EnableHeartbeats_Statics::NewProp_bActive,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_EnableHeartbeats_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Tells the Steam master servers whether or not you want to be active.\n\x09*\n\x09* If this is enabled then the server will talk to the master servers, if it's not then incoming messages are ignored and heartbeats will not be sent.\n\x09*\n\x09* @param\x09""bActive\x09\x09""Enable (true) or disable (false) the master server updater.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Tells the Steam master servers whether or not you want to be active.\n\nIf this is enabled then the server will talk to the master servers, if it's not then incoming messages are ignored and heartbeats will not be sent.\n\n@param        bActive         Enable (true) or disable (false) the master server updater." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_EnableHeartbeats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "EnableHeartbeats", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamGameServer_EnableHeartbeats_Statics::SteamGameServer_eventEnableHeartbeats_Parms), Z_Construct_UFunction_USteamGameServer_EnableHeartbeats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_EnableHeartbeats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_EnableHeartbeats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_EnableHeartbeats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_EnableHeartbeats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_EnableHeartbeats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_EndAuthSession_Statics
	{
		struct SteamGameServer_eventEndAuthSession_Parms
		{
			FSteamID SteamID;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamGameServer_EndAuthSession_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameServer_eventEndAuthSession_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_EndAuthSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_EndAuthSession_Statics::NewProp_SteamID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_EndAuthSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Ends an auth session that was started with BeginAuthSession. This should be called when no longer playing with the specified entity.\n\x09*\n\x09* @param\x09SteamID\x09\x09The entity to end the active auth session with.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Ends an auth session that was started with BeginAuthSession. This should be called when no longer playing with the specified entity.\n\n@param        SteamID         The entity to end the active auth session with." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_EndAuthSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "EndAuthSession", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamGameServer_EndAuthSession_Statics::SteamGameServer_eventEndAuthSession_Parms), Z_Construct_UFunction_USteamGameServer_EndAuthSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_EndAuthSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_EndAuthSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_EndAuthSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_EndAuthSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_EndAuthSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_ForceHeartbeat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_ForceHeartbeat_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Force a heartbeat to the Steam master servers at the next opportunity.\n\x09*\n\x09* You usually don't need to use this.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Force a heartbeat to the Steam master servers at the next opportunity.\n\nYou usually don't need to use this." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_ForceHeartbeat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "ForceHeartbeat", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_ForceHeartbeat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_ForceHeartbeat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_ForceHeartbeat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_ForceHeartbeat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_GetAuthSessionTicket_Statics
	{
		struct SteamGameServer_eventGetAuthSessionTicket_Parms
		{
			TArray<uint8> Ticket;
			FSteamTicketHandle ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Ticket_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Ticket;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamGameServer_GetAuthSessionTicket_Statics::NewProp_Ticket_Inner = { "Ticket", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamGameServer_GetAuthSessionTicket_Statics::NewProp_Ticket = { "Ticket", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameServer_eventGetAuthSessionTicket_Parms, Ticket), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamGameServer_GetAuthSessionTicket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameServer_eventGetAuthSessionTicket_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamTicketHandle, METADATA_PARAMS(nullptr, 0) }; // 1818574373
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_GetAuthSessionTicket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_GetAuthSessionTicket_Statics::NewProp_Ticket_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_GetAuthSessionTicket_Statics::NewProp_Ticket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_GetAuthSessionTicket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_GetAuthSessionTicket_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Retrieve a authentication ticket to be sent to the entity who wishes to authenticate you.\n\x09*\n\x09* After calling this you can send the ticket to the entity where they can then call ISteamUser::BeginAuthSession to verify this entities integrity.\n\x09* When creating a ticket for use by the ISteamUserAuth/AuthenticateUserTicket Web API, the calling application should wait for the GetAuthSessionTicketResponse_t Callback \n\x09* generated by the API call before attempting to use the ticket to ensure that the ticket has been communicated to the server. \n\x09* If this Callback does not come in a timely fashion (10 - 20 seconds), then your client is not connected to Steam, and the AuthenticateUserTicket call will fail because it can not authenticate the user.\n\x09*\n\x09* @param\x09Ticket\x09\x09The buffer where the new auth ticket will be copied into if the call was successful.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Retrieve a authentication ticket to be sent to the entity who wishes to authenticate you.\n\nAfter calling this you can send the ticket to the entity where they can then call ISteamUser::BeginAuthSession to verify this entities integrity.\nWhen creating a ticket for use by the ISteamUserAuth/AuthenticateUserTicket Web API, the calling application should wait for the GetAuthSessionTicketResponse_t Callback\ngenerated by the API call before attempting to use the ticket to ensure that the ticket has been communicated to the server.\nIf this Callback does not come in a timely fashion (10 - 20 seconds), then your client is not connected to Steam, and the AuthenticateUserTicket call will fail because it can not authenticate the user.\n\n@param        Ticket          The buffer where the new auth ticket will be copied into if the call was successful." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_GetAuthSessionTicket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "GetAuthSessionTicket", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamGameServer_GetAuthSessionTicket_Statics::SteamGameServer_eventGetAuthSessionTicket_Parms), Z_Construct_UFunction_USteamGameServer_GetAuthSessionTicket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_GetAuthSessionTicket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_GetAuthSessionTicket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_GetAuthSessionTicket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_GetAuthSessionTicket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_GetAuthSessionTicket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Statics
	{
		struct SteamGameServer_eventGetServerPublicIP_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameServer_eventGetServerPublicIP_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Gets the Steam ID of the game server.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Gets the Steam ID of the game server." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "GetServerPublicIP", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Statics::SteamGameServer_eventGetServerPublicIP_Parms), Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_GetServerPublicIP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Pure_Statics
	{
		struct SteamGameServer_eventGetServerPublicIP_Pure_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Pure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameServer_eventGetServerPublicIP_Pure_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Pure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Pure_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Pure_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Gets the Steam ID of the game server.\n\x09*/" },
		{ "DisplayName", "Get Server Public Ip (Pure)" },
		{ "Keywords", "Get Ip" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Gets the Steam ID of the game server." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Pure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "GetServerPublicIP_Pure", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Pure_Statics::SteamGameServer_eventGetServerPublicIP_Pure_Parms), Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Pure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Pure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Pure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Pure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Pure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Pure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_PureCompact_Statics
	{
		struct SteamGameServer_eventGetServerPublicIP_PureCompact_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_PureCompact_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameServer_eventGetServerPublicIP_PureCompact_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_PureCompact_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_PureCompact_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_PureCompact_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Gets the Steam ID of the game server.\n\x09*/" },
		{ "CompactNodeTitle", "Server Ip" },
		{ "DisplayName", "Get Server Public Ip (Compact)" },
		{ "Keywords", "Get Ip" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Gets the Steam ID of the game server." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_PureCompact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "GetServerPublicIP_PureCompact", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_PureCompact_Statics::SteamGameServer_eventGetServerPublicIP_PureCompact_Parms), Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_PureCompact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_PureCompact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_PureCompact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_PureCompact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_PureCompact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_PureCompact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Statics
	{
		struct SteamGameServer_eventGetServerSteamID_Parms
		{
			FSteamID ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameServer_eventGetServerSteamID_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Gets the Steam ID of the game server.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Gets the Steam ID of the game server." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "GetServerSteamID", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Statics::SteamGameServer_eventGetServerSteamID_Parms), Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_GetServerSteamID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Pure_Statics
	{
		struct SteamGameServer_eventGetServerSteamID_Pure_Parms
		{
			FSteamID ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Pure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameServer_eventGetServerSteamID_Pure_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Pure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Pure_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Pure_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Gets the Steam ID of the game server.\n\x09*/" },
		{ "DisplayName", "Get Server Steam Id (Pure)" },
		{ "Keywords", "Get Steam Id" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Gets the Steam ID of the game server." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Pure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "GetServerSteamID_Pure", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Pure_Statics::SteamGameServer_eventGetServerSteamID_Pure_Parms), Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Pure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Pure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Pure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Pure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Pure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Pure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_GetServerSteamID_PureCompact_Statics
	{
		struct SteamGameServer_eventGetServerSteamID_PureCompact_Parms
		{
			FSteamID ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamGameServer_GetServerSteamID_PureCompact_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameServer_eventGetServerSteamID_PureCompact_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_GetServerSteamID_PureCompact_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_GetServerSteamID_PureCompact_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_GetServerSteamID_PureCompact_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Gets the Steam ID of the game server.\n\x09*/" },
		{ "CompactNodeTitle", "Server Id" },
		{ "DisplayName", "Get Server Steam Id (Compact)" },
		{ "Keywords", "Get Steam Id" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Gets the Steam ID of the game server." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_GetServerSteamID_PureCompact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "GetServerSteamID_PureCompact", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamGameServer_GetServerSteamID_PureCompact_Statics::SteamGameServer_eventGetServerSteamID_PureCompact_Parms), Z_Construct_UFunction_USteamGameServer_GetServerSteamID_PureCompact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_GetServerSteamID_PureCompact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_GetServerSteamID_PureCompact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_GetServerSteamID_PureCompact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_GetServerSteamID_PureCompact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_GetServerSteamID_PureCompact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_LogOff_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_LogOff_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Begin process of logging the game server out of steam.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Begin process of logging the game server out of steam." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_LogOff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "LogOff", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_LogOff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_LogOff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_LogOff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_LogOff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_LogOn_Statics
	{
		struct SteamGameServer_eventLogOn_Parms
		{
			FString Token;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Token;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameServer_LogOn_Statics::NewProp_Token = { "Token", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameServer_eventLogOn_Parms, Token), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_LogOn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_LogOn_Statics::NewProp_Token,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_LogOn_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Begin process to login to a persistent game server account.\n\x09* \n\x09* @param\x09Token\x09\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Begin process to login to a persistent game server account.\n\n@param        Token" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_LogOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "LogOn", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamGameServer_LogOn_Statics::SteamGameServer_eventLogOn_Parms), Z_Construct_UFunction_USteamGameServer_LogOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_LogOn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_LogOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_LogOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_LogOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_LogOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_LogOnAnonymous_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_LogOnAnonymous_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Login to a generic, anonymous account.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Login to a generic, anonymous account." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_LogOnAnonymous_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "LogOnAnonymous", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_LogOnAnonymous_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_LogOnAnonymous_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_LogOnAnonymous()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_LogOnAnonymous_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_RequestUserGroupStatus_Statics
	{
		struct SteamGameServer_eventRequestUserGroupStatus_Parms
		{
			FSteamID SteamIDUser;
			FSteamID SteamIDGroup;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDGroup;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamGameServer_RequestUserGroupStatus_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameServer_eventRequestUserGroupStatus_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamGameServer_RequestUserGroupStatus_Statics::NewProp_SteamIDGroup = { "SteamIDGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameServer_eventRequestUserGroupStatus_Parms, SteamIDGroup), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	void Z_Construct_UFunction_USteamGameServer_RequestUserGroupStatus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamGameServer_eventRequestUserGroupStatus_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamGameServer_RequestUserGroupStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamGameServer_eventRequestUserGroupStatus_Parms), &Z_Construct_UFunction_USteamGameServer_RequestUserGroupStatus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_RequestUserGroupStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_RequestUserGroupStatus_Statics::NewProp_SteamIDUser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_RequestUserGroupStatus_Statics::NewProp_SteamIDGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_RequestUserGroupStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_RequestUserGroupStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Checks if a user is in the specified Steam group.\n\x09*\n\x09* @param\x09SteamIDUser\x09\x09The user to check the group status of.\n\x09* @param\x09SteamIDGroup\x09The group to check.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Checks if a user is in the specified Steam group.\n\n@param        SteamIDUser             The user to check the group status of.\n@param        SteamIDGroup    The group to check." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_RequestUserGroupStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "RequestUserGroupStatus", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamGameServer_RequestUserGroupStatus_Statics::SteamGameServer_eventRequestUserGroupStatus_Parms), Z_Construct_UFunction_USteamGameServer_RequestUserGroupStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_RequestUserGroupStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_RequestUserGroupStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_RequestUserGroupStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_RequestUserGroupStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_RequestUserGroupStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_SetAdvertiseServerActive_Statics
	{
		struct SteamGameServer_eventSetAdvertiseServerActive_Parms
		{
			bool bActive;
		};
		static void NewProp_bActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bActive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USteamGameServer_SetAdvertiseServerActive_Statics::NewProp_bActive_SetBit(void* Obj)
	{
		((SteamGameServer_eventSetAdvertiseServerActive_Parms*)Obj)->bActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamGameServer_SetAdvertiseServerActive_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamGameServer_eventSetAdvertiseServerActive_Parms), &Z_Construct_UFunction_USteamGameServer_SetAdvertiseServerActive_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_SetAdvertiseServerActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_SetAdvertiseServerActive_Statics::NewProp_bActive,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_SetAdvertiseServerActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Indicate whether you wish to be listed on the master server list\n\x09* and/or respond to server browser / LAN discovery packets.\n\x09* The server starts with this value set to false.  You should set all\n\x09*  relevant server parameters before enabling advertisement on the server.\n\x09*  \x09\n\x09*  (This function used to be named EnableHeartbeats, so if you are wondering\n\x09*  where that function went, it's right here.  It does the same thing as before,\n\x09*  the old name was just confusing.)\n\x09*\n\x09* @param\x09""bActive\x09\x09""Enable (true) or disable (false) the master server updater.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Indicate whether you wish to be listed on the master server list\nand/or respond to server browser / LAN discovery packets.\nThe server starts with this value set to false.  You should set all\n relevant server parameters before enabling advertisement on the server.\n\n (This function used to be named EnableHeartbeats, so if you are wondering\n where that function went, it's right here.  It does the same thing as before,\n the old name was just confusing.)\n\n@param        bActive         Enable (true) or disable (false) the master server updater." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_SetAdvertiseServerActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "SetAdvertiseServerActive", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamGameServer_SetAdvertiseServerActive_Statics::SteamGameServer_eventSetAdvertiseServerActive_Parms), Z_Construct_UFunction_USteamGameServer_SetAdvertiseServerActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetAdvertiseServerActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_SetAdvertiseServerActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetAdvertiseServerActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_SetAdvertiseServerActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_SetAdvertiseServerActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_SetBotPlayerCount_Statics
	{
		struct SteamGameServer_eventSetBotPlayerCount_Parms
		{
			int32 Botplayers;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Botplayers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamGameServer_SetBotPlayerCount_Statics::NewProp_Botplayers = { "Botplayers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameServer_eventSetBotPlayerCount_Parms, Botplayers), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_SetBotPlayerCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_SetBotPlayerCount_Statics::NewProp_Botplayers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_SetBotPlayerCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Sets the number of bot/AI players on the game server. The default value is 0.\n\x09*\n\x09* @param\x09""Botplayers\x09The number of bot/AI players currently playing on the server.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Sets the number of bot/AI players on the game server. The default value is 0.\n\n@param        Botplayers      The number of bot/AI players currently playing on the server." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_SetBotPlayerCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "SetBotPlayerCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamGameServer_SetBotPlayerCount_Statics::SteamGameServer_eventSetBotPlayerCount_Parms), Z_Construct_UFunction_USteamGameServer_SetBotPlayerCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetBotPlayerCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_SetBotPlayerCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetBotPlayerCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_SetBotPlayerCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_SetBotPlayerCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_SetDedicatedServer_Statics
	{
		struct SteamGameServer_eventSetDedicatedServer_Parms
		{
			bool bDedicated;
		};
		static void NewProp_bDedicated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDedicated;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USteamGameServer_SetDedicatedServer_Statics::NewProp_bDedicated_SetBit(void* Obj)
	{
		((SteamGameServer_eventSetDedicatedServer_Parms*)Obj)->bDedicated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamGameServer_SetDedicatedServer_Statics::NewProp_bDedicated = { "bDedicated", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamGameServer_eventSetDedicatedServer_Parms), &Z_Construct_UFunction_USteamGameServer_SetDedicatedServer_Statics::NewProp_bDedicated_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_SetDedicatedServer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_SetDedicatedServer_Statics::NewProp_bDedicated,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_SetDedicatedServer_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Sets the whether this is a dedicated server or a listen server. The default is listen server.\n\x09*\n\x09* @param\x09""bDedicated\x09\x09Is this a dedicated server (true) or a listen server (false)?\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Sets the whether this is a dedicated server or a listen server. The default is listen server.\n\n@param        bDedicated              Is this a dedicated server (true) or a listen server (false)?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_SetDedicatedServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "SetDedicatedServer", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamGameServer_SetDedicatedServer_Statics::SteamGameServer_eventSetDedicatedServer_Parms), Z_Construct_UFunction_USteamGameServer_SetDedicatedServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetDedicatedServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_SetDedicatedServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetDedicatedServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_SetDedicatedServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_SetDedicatedServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_SetGameData_Statics
	{
		struct SteamGameServer_eventSetGameData_Parms
		{
			FString GameData;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_GameData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameServer_SetGameData_Statics::NewProp_GameData = { "GameData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameServer_eventSetGameData_Parms, GameData), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_SetGameData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_SetGameData_Statics::NewProp_GameData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_SetGameData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Sets a string defining the \"gamedata\" for this server.\n\x09*\n\x09* This is optional, but if set it allows users to filter in the matchmaking/server-browser interfaces based on the value.\n\x09* This is usually formatted as a comma or semicolon separated list.\n\x09* Don't set this unless it actually changes, its only uploaded to the master once; when acknowledged.\n\x09*\n\x09* @param\x09GameData\x09The new \"gamedata\" value to set. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerGameData.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Sets a string defining the \"gamedata\" for this server.\n\nThis is optional, but if set it allows users to filter in the matchmaking/server-browser interfaces based on the value.\nThis is usually formatted as a comma or semicolon separated list.\nDon't set this unless it actually changes, its only uploaded to the master once; when acknowledged.\n\n@param        GameData        The new \"gamedata\" value to set. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerGameData." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_SetGameData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "SetGameData", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamGameServer_SetGameData_Statics::SteamGameServer_eventSetGameData_Parms), Z_Construct_UFunction_USteamGameServer_SetGameData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetGameData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_SetGameData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetGameData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_SetGameData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_SetGameData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_SetGameDescription_Statics
	{
		struct SteamGameServer_eventSetGameDescription_Parms
		{
			FString GameDescription;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_GameDescription;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameServer_SetGameDescription_Statics::NewProp_GameDescription = { "GameDescription", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameServer_eventSetGameDescription_Parms, GameDescription), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_SetGameDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_SetGameDescription_Statics::NewProp_GameDescription,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_SetGameDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Sets the game description. Setting this to the full name of your game is recommended.\n\x09*\n\x09* This is required for all game servers and can only be set before calling LogOn or LogOnAnonymous.\n\x09*\n\x09* @param\x09GameDescription\x09\x09The description of your game. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerGameDescription.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Sets the game description. Setting this to the full name of your game is recommended.\n\nThis is required for all game servers and can only be set before calling LogOn or LogOnAnonymous.\n\n@param        GameDescription         The description of your game. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerGameDescription." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_SetGameDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "SetGameDescription", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamGameServer_SetGameDescription_Statics::SteamGameServer_eventSetGameDescription_Parms), Z_Construct_UFunction_USteamGameServer_SetGameDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetGameDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_SetGameDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetGameDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_SetGameDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_SetGameDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_SetGameTags_Statics
	{
		struct SteamGameServer_eventSetGameTags_Parms
		{
			FString GameTags;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_GameTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameServer_SetGameTags_Statics::NewProp_GameTags = { "GameTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameServer_eventSetGameTags_Parms, GameTags), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_SetGameTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_SetGameTags_Statics::NewProp_GameTags,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_SetGameTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Sets a string defining the \"gametags\" for this server, this is optional, but if set it allows users to filter in the matchmaking/server-browser interfaces based on the value.\n\x09*\n\x09* This is usually formatted as a comma or semicolon separated list.\n\x09* Don't set this unless it actually changes, its only uploaded to the master once; when acknowledged.\n\x09*\n\x09* @param\x09GameTags\x09The new \"gametags\" value to set. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerTags.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Sets a string defining the \"gametags\" for this server, this is optional, but if set it allows users to filter in the matchmaking/server-browser interfaces based on the value.\n\nThis is usually formatted as a comma or semicolon separated list.\nDon't set this unless it actually changes, its only uploaded to the master once; when acknowledged.\n\n@param        GameTags        The new \"gametags\" value to set. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerTags." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_SetGameTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "SetGameTags", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamGameServer_SetGameTags_Statics::SteamGameServer_eventSetGameTags_Parms), Z_Construct_UFunction_USteamGameServer_SetGameTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetGameTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_SetGameTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetGameTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_SetGameTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_SetGameTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_SetHeartbeatInterval_Statics
	{
		struct SteamGameServer_eventSetHeartbeatInterval_Parms
		{
			int32 HeartbeatInterval;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_HeartbeatInterval;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamGameServer_SetHeartbeatInterval_Statics::NewProp_HeartbeatInterval = { "HeartbeatInterval", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameServer_eventSetHeartbeatInterval_Parms, HeartbeatInterval), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_SetHeartbeatInterval_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_SetHeartbeatInterval_Statics::NewProp_HeartbeatInterval,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_SetHeartbeatInterval_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Changes how often heartbeats are sent to the Steam master servers.\n\x09*\n\x09* You usually don't need to use this.\n\x09*\n\x09* @param\x09HeartbeatInterval\x09The interval between sending heartbeats in milliseconds. Typically would range between 250-1000. Use -1 to use the default value.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Changes how often heartbeats are sent to the Steam master servers.\n\nYou usually don't need to use this.\n\n@param        HeartbeatInterval       The interval between sending heartbeats in milliseconds. Typically would range between 250-1000. Use -1 to use the default value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_SetHeartbeatInterval_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "SetHeartbeatInterval", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamGameServer_SetHeartbeatInterval_Statics::SteamGameServer_eventSetHeartbeatInterval_Parms), Z_Construct_UFunction_USteamGameServer_SetHeartbeatInterval_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetHeartbeatInterval_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_SetHeartbeatInterval_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetHeartbeatInterval_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_SetHeartbeatInterval()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_SetHeartbeatInterval_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_SetKeyValue_Statics
	{
		struct SteamGameServer_eventSetKeyValue_Parms
		{
			FString Key;
			FString Value;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameServer_SetKeyValue_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameServer_eventSetKeyValue_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameServer_SetKeyValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameServer_eventSetKeyValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_SetKeyValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_SetKeyValue_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_SetKeyValue_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_SetKeyValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/** \n\x09* Add/update a rules key/value pair.\n\x09*\n\x09* @param\x09Key\x09\x09\x09key to update\n\x09* @param\x09Value\x09\x09value to set\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Add/update a rules key/value pair.\n\n@param        Key                     key to update\n@param        Value           value to set" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_SetKeyValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "SetKeyValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamGameServer_SetKeyValue_Statics::SteamGameServer_eventSetKeyValue_Parms), Z_Construct_UFunction_USteamGameServer_SetKeyValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetKeyValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_SetKeyValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetKeyValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_SetKeyValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_SetKeyValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_SetMapName_Statics
	{
		struct SteamGameServer_eventSetMapName_Parms
		{
			FString MapName;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_MapName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameServer_SetMapName_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameServer_eventSetMapName_Parms, MapName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_SetMapName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_SetMapName_Statics::NewProp_MapName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_SetMapName_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Sets the name of map to report in the server browser.\n\x09*\n\x09* @param\x09MapName\x09\x09The new map name to set. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerMapName.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Sets the name of map to report in the server browser.\n\n@param        MapName         The new map name to set. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerMapName." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_SetMapName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "SetMapName", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamGameServer_SetMapName_Statics::SteamGameServer_eventSetMapName_Parms), Z_Construct_UFunction_USteamGameServer_SetMapName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetMapName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_SetMapName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetMapName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_SetMapName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_SetMapName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_SetMaxPlayerCount_Statics
	{
		struct SteamGameServer_eventSetMaxPlayerCount_Parms
		{
			int32 PlayersMax;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayersMax;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamGameServer_SetMaxPlayerCount_Statics::NewProp_PlayersMax = { "PlayersMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameServer_eventSetMaxPlayerCount_Parms, PlayersMax), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_SetMaxPlayerCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_SetMaxPlayerCount_Statics::NewProp_PlayersMax,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_SetMaxPlayerCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Sets the maximum number of players allowed on the server at once.\n\x09*\n\x09* This value may be changed at any time.\n\x09*\n\x09* @param\x09PlayersMax\x09\x09The new maximum number of players allowed on this server.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Sets the maximum number of players allowed on the server at once.\n\nThis value may be changed at any time.\n\n@param        PlayersMax              The new maximum number of players allowed on this server." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_SetMaxPlayerCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "SetMaxPlayerCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamGameServer_SetMaxPlayerCount_Statics::SteamGameServer_eventSetMaxPlayerCount_Parms), Z_Construct_UFunction_USteamGameServer_SetMaxPlayerCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetMaxPlayerCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_SetMaxPlayerCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetMaxPlayerCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_SetMaxPlayerCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_SetMaxPlayerCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_SetModDir_Statics
	{
		struct SteamGameServer_eventSetModDir_Parms
		{
			FString ModDir;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ModDir;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameServer_SetModDir_Statics::NewProp_ModDir = { "ModDir", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameServer_eventSetModDir_Parms, ModDir), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_SetModDir_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_SetModDir_Statics::NewProp_ModDir,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_SetModDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Sets the game directory.\n\x09*\n\x09* This should be the same directory game where gets installed into. Just the folder name, not the whole path. I.e. \"Spacewar\".\n\x09*\n\x09* @param\x09ModDir\x09\x09The game directory to set. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerGameDir.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Sets the game directory.\n\nThis should be the same directory game where gets installed into. Just the folder name, not the whole path. I.e. \"Spacewar\".\n\n@param        ModDir          The game directory to set. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerGameDir." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_SetModDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "SetModDir", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamGameServer_SetModDir_Statics::SteamGameServer_eventSetModDir_Parms), Z_Construct_UFunction_USteamGameServer_SetModDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetModDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_SetModDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetModDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_SetModDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_SetModDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_SetPasswordProtected_Statics
	{
		struct SteamGameServer_eventSetPasswordProtected_Parms
		{
			bool bPasswordProtected;
		};
		static void NewProp_bPasswordProtected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPasswordProtected;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USteamGameServer_SetPasswordProtected_Statics::NewProp_bPasswordProtected_SetBit(void* Obj)
	{
		((SteamGameServer_eventSetPasswordProtected_Parms*)Obj)->bPasswordProtected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamGameServer_SetPasswordProtected_Statics::NewProp_bPasswordProtected = { "bPasswordProtected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamGameServer_eventSetPasswordProtected_Parms), &Z_Construct_UFunction_USteamGameServer_SetPasswordProtected_Statics::NewProp_bPasswordProtected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_SetPasswordProtected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_SetPasswordProtected_Statics::NewProp_bPasswordProtected,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_SetPasswordProtected_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Set whether the game server will require a password once when the user tries to join.\n\x09*\n\x09* @param\x09""bPasswordProtected\x09\x09""Enable (true) or disable (false) password protection.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Set whether the game server will require a password once when the user tries to join.\n\n@param        bPasswordProtected              Enable (true) or disable (false) password protection." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_SetPasswordProtected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "SetPasswordProtected", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamGameServer_SetPasswordProtected_Statics::SteamGameServer_eventSetPasswordProtected_Parms), Z_Construct_UFunction_USteamGameServer_SetPasswordProtected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetPasswordProtected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_SetPasswordProtected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetPasswordProtected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_SetPasswordProtected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_SetPasswordProtected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_SetProduct_Statics
	{
		struct SteamGameServer_eventSetProduct_Parms
		{
			FString Product;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Product;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameServer_SetProduct_Statics::NewProp_Product = { "Product", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameServer_eventSetProduct_Parms, Product), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_SetProduct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_SetProduct_Statics::NewProp_Product,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_SetProduct_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Sets the game product identifier. This is currently used by the master server for version checking purposes.\n\x09*\n\x09* Converting the games app ID to a string for this is recommended.\n\x09*\n\x09* @param\x09Product\x09\x09The unique identifier for your game. Must not be NULL or an empty string (\"\").\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Sets the game product identifier. This is currently used by the master server for version checking purposes.\n\nConverting the games app ID to a string for this is recommended.\n\n@param        Product         The unique identifier for your game. Must not be NULL or an empty string (\"\")." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_SetProduct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "SetProduct", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamGameServer_SetProduct_Statics::SteamGameServer_eventSetProduct_Parms), Z_Construct_UFunction_USteamGameServer_SetProduct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetProduct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_SetProduct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetProduct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_SetProduct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_SetProduct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_SetRegion_Statics
	{
		struct SteamGameServer_eventSetRegion_Parms
		{
			FString Region;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Region;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameServer_SetRegion_Statics::NewProp_Region = { "Region", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameServer_eventSetRegion_Parms, Region), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_SetRegion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_SetRegion_Statics::NewProp_Region,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_SetRegion_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Region identifier. This is an optional field, the default value is an empty string, meaning the \"world\" region.\n\x09*\n\x09* @param\x09Region\x09\x09region\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Region identifier. This is an optional field, the default value is an empty string, meaning the \"world\" region.\n\n@param        Region          region" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_SetRegion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "SetRegion", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamGameServer_SetRegion_Statics::SteamGameServer_eventSetRegion_Parms), Z_Construct_UFunction_USteamGameServer_SetRegion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetRegion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_SetRegion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetRegion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_SetRegion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_SetRegion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_SetServerName_Statics
	{
		struct SteamGameServer_eventSetServerName_Parms
		{
			FString ServerName;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ServerName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameServer_SetServerName_Statics::NewProp_ServerName = { "ServerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameServer_eventSetServerName_Parms, ServerName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_SetServerName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_SetServerName_Statics::NewProp_ServerName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_SetServerName_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Sets the name of server as it will appear in the server browser.\n\x09*\n\x09* @param\x09ServerName\x09\x09The new server name to set. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerName.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Sets the name of server as it will appear in the server browser.\n\n@param        ServerName              The new server name to set. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerName." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_SetServerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "SetServerName", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamGameServer_SetServerName_Statics::SteamGameServer_eventSetServerName_Parms), Z_Construct_UFunction_USteamGameServer_SetServerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetServerName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_SetServerName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetServerName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_SetServerName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_SetServerName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_SetSpectatorPort_Statics
	{
		struct SteamGameServer_eventSetSpectatorPort_Parms
		{
			int32 SpectatorPort;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SpectatorPort;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamGameServer_SetSpectatorPort_Statics::NewProp_SpectatorPort = { "SpectatorPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameServer_eventSetSpectatorPort_Parms, SpectatorPort), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_SetSpectatorPort_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_SetSpectatorPort_Statics::NewProp_SpectatorPort,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_SetSpectatorPort_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Set whether the game server allows spectators, and what port they should connect on. The default value is 0, meaning the service is not used.\n\x09*\n\x09* @param\x09SpectatorPort\x09\x09The port for spectators to join.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Set whether the game server allows spectators, and what port they should connect on. The default value is 0, meaning the service is not used.\n\n@param        SpectatorPort           The port for spectators to join." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_SetSpectatorPort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "SetSpectatorPort", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamGameServer_SetSpectatorPort_Statics::SteamGameServer_eventSetSpectatorPort_Parms), Z_Construct_UFunction_USteamGameServer_SetSpectatorPort_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetSpectatorPort_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_SetSpectatorPort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetSpectatorPort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_SetSpectatorPort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_SetSpectatorPort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_SetSpectatorServerName_Statics
	{
		struct SteamGameServer_eventSetSpectatorServerName_Parms
		{
			FString SpectatorServerName;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_SpectatorServerName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameServer_SetSpectatorServerName_Statics::NewProp_SpectatorServerName = { "SpectatorServerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameServer_eventSetSpectatorServerName_Parms, SpectatorServerName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_SetSpectatorServerName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_SetSpectatorServerName_Statics::NewProp_SpectatorServerName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_SetSpectatorServerName_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Sets the name of the spectator server. This is only used if spectator port is nonzero.\n\x09*\n\x09* @param\x09SpectatorServerName\x09\x09The spectator server name to set. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerMapName.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Sets the name of the spectator server. This is only used if spectator port is nonzero.\n\n@param        SpectatorServerName             The spectator server name to set. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerMapName." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_SetSpectatorServerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "SetSpectatorServerName", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamGameServer_SetSpectatorServerName_Statics::SteamGameServer_eventSetSpectatorServerName_Parms), Z_Construct_UFunction_USteamGameServer_SetSpectatorServerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetSpectatorServerName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_SetSpectatorServerName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetSpectatorServerName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_SetSpectatorServerName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_SetSpectatorServerName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_UserHasLicenseForApp_Statics
	{
		struct SteamGameServer_eventUserHasLicenseForApp_Parms
		{
			FSteamID SteamID;
			int32 AppID;
			ESteamUserHasLicenseForAppResult ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamGameServer_UserHasLicenseForApp_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameServer_eventUserHasLicenseForApp_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamGameServer_UserHasLicenseForApp_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameServer_eventUserHasLicenseForApp_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamGameServer_UserHasLicenseForApp_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamGameServer_UserHasLicenseForApp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameServer_eventUserHasLicenseForApp_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamUserHasLicenseForAppResult, METADATA_PARAMS(nullptr, 0) }; // 1515824211
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_UserHasLicenseForApp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_UserHasLicenseForApp_Statics::NewProp_SteamID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_UserHasLicenseForApp_Statics::NewProp_AppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_UserHasLicenseForApp_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_UserHasLicenseForApp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_UserHasLicenseForApp_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Checks if the user owns a specific piece of Downloadable Content (DLC).\n\x09*\n\x09* This can only be called after sending the users auth ticket to BeginAuthSession/\n\x09*\n\x09* @param\x09SteamID\x09\x09The Steam ID of the user that sent the auth ticket.\n\x09* @param\x09""AppID\x09\x09The DLC App ID to check if the user owns it.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Checks if the user owns a specific piece of Downloadable Content (DLC).\n\nThis can only be called after sending the users auth ticket to BeginAuthSession/\n\n@param        SteamID         The Steam ID of the user that sent the auth ticket.\n@param        AppID           The DLC App ID to check if the user owns it." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_UserHasLicenseForApp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "UserHasLicenseForApp", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamGameServer_UserHasLicenseForApp_Statics::SteamGameServer_eventUserHasLicenseForApp_Parms), Z_Construct_UFunction_USteamGameServer_UserHasLicenseForApp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_UserHasLicenseForApp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_UserHasLicenseForApp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_UserHasLicenseForApp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_UserHasLicenseForApp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_UserHasLicenseForApp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_WasRestartRequested_Statics
	{
		struct SteamGameServer_eventWasRestartRequested_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USteamGameServer_WasRestartRequested_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamGameServer_eventWasRestartRequested_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamGameServer_WasRestartRequested_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamGameServer_eventWasRestartRequested_Parms), &Z_Construct_UFunction_USteamGameServer_WasRestartRequested_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_WasRestartRequested_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_WasRestartRequested_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_WasRestartRequested_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Checks if the master server has alerted us that we are out of date.\n\x09*\n\x09* This reverts back to false after calling this function.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
		{ "ToolTip", "Checks if the master server has alerted us that we are out of date.\n\nThis reverts back to false after calling this function." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_WasRestartRequested_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "WasRestartRequested", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamGameServer_WasRestartRequested_Statics::SteamGameServer_eventWasRestartRequested_Parms), Z_Construct_UFunction_USteamGameServer_WasRestartRequested_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_WasRestartRequested_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_WasRestartRequested_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_WasRestartRequested_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_WasRestartRequested()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameServer_WasRestartRequested_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamGameServer);
	UClass* Z_Construct_UClass_USteamGameServer_NoRegister()
	{
		return USteamGameServer::StaticClass();
	}
	struct Z_Construct_UClass_USteamGameServer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GSPolicyResponse_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GSPolicyResponse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GSClientGroupStatus_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GSClientGroupStatus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GSValidateAuthTicketResponse_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GSValidateAuthTicketResponse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GSClientApprove_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GSClientApprove;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GSClientDeny_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GSClientDeny;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamGameServer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamGameServer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamGameServer_AssociateWithClan, "AssociateWithClan" }, // 3496009695
		{ &Z_Construct_UFunction_USteamGameServer_BeginAuthSession, "BeginAuthSession" }, // 1663583351
		{ &Z_Construct_UFunction_USteamGameServer_BLoggedOn, "BLoggedOn" }, // 2847768217
		{ &Z_Construct_UFunction_USteamGameServer_BSecure, "BSecure" }, // 2253937559
		{ &Z_Construct_UFunction_USteamGameServer_BUpdateUserData, "BUpdateUserData" }, // 725869090
		{ &Z_Construct_UFunction_USteamGameServer_CancelAuthTicket, "CancelAuthTicket" }, // 3664783263
		{ &Z_Construct_UFunction_USteamGameServer_ClearAllKeyValues, "ClearAllKeyValues" }, // 3027890809
		{ &Z_Construct_UFunction_USteamGameServer_ComputeNewPlayerCompatibility, "ComputeNewPlayerCompatibility" }, // 1732091636
		{ &Z_Construct_UFunction_USteamGameServer_CreateUnauthenticatedUserConnection, "CreateUnauthenticatedUserConnection" }, // 897379449
		{ &Z_Construct_UFunction_USteamGameServer_EnableHeartbeats, "EnableHeartbeats" }, // 3619303165
		{ &Z_Construct_UFunction_USteamGameServer_EndAuthSession, "EndAuthSession" }, // 1040052640
		{ &Z_Construct_UFunction_USteamGameServer_ForceHeartbeat, "ForceHeartbeat" }, // 1629095985
		{ &Z_Construct_UFunction_USteamGameServer_GetAuthSessionTicket, "GetAuthSessionTicket" }, // 513519288
		{ &Z_Construct_UFunction_USteamGameServer_GetServerPublicIP, "GetServerPublicIP" }, // 1626925030
		{ &Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Pure, "GetServerPublicIP_Pure" }, // 1809980177
		{ &Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_PureCompact, "GetServerPublicIP_PureCompact" }, // 436730741
		{ &Z_Construct_UFunction_USteamGameServer_GetServerSteamID, "GetServerSteamID" }, // 3024730153
		{ &Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Pure, "GetServerSteamID_Pure" }, // 3870370698
		{ &Z_Construct_UFunction_USteamGameServer_GetServerSteamID_PureCompact, "GetServerSteamID_PureCompact" }, // 1189573529
		{ &Z_Construct_UFunction_USteamGameServer_LogOff, "LogOff" }, // 263712318
		{ &Z_Construct_UFunction_USteamGameServer_LogOn, "LogOn" }, // 304761379
		{ &Z_Construct_UFunction_USteamGameServer_LogOnAnonymous, "LogOnAnonymous" }, // 3330981074
		{ &Z_Construct_UFunction_USteamGameServer_RequestUserGroupStatus, "RequestUserGroupStatus" }, // 1770966634
		{ &Z_Construct_UFunction_USteamGameServer_SetAdvertiseServerActive, "SetAdvertiseServerActive" }, // 475440084
		{ &Z_Construct_UFunction_USteamGameServer_SetBotPlayerCount, "SetBotPlayerCount" }, // 2192748686
		{ &Z_Construct_UFunction_USteamGameServer_SetDedicatedServer, "SetDedicatedServer" }, // 411183394
		{ &Z_Construct_UFunction_USteamGameServer_SetGameData, "SetGameData" }, // 3824749153
		{ &Z_Construct_UFunction_USteamGameServer_SetGameDescription, "SetGameDescription" }, // 2038120092
		{ &Z_Construct_UFunction_USteamGameServer_SetGameTags, "SetGameTags" }, // 187130150
		{ &Z_Construct_UFunction_USteamGameServer_SetHeartbeatInterval, "SetHeartbeatInterval" }, // 4078824552
		{ &Z_Construct_UFunction_USteamGameServer_SetKeyValue, "SetKeyValue" }, // 3421638299
		{ &Z_Construct_UFunction_USteamGameServer_SetMapName, "SetMapName" }, // 3075786562
		{ &Z_Construct_UFunction_USteamGameServer_SetMaxPlayerCount, "SetMaxPlayerCount" }, // 1088826587
		{ &Z_Construct_UFunction_USteamGameServer_SetModDir, "SetModDir" }, // 4219135854
		{ &Z_Construct_UFunction_USteamGameServer_SetPasswordProtected, "SetPasswordProtected" }, // 2318699235
		{ &Z_Construct_UFunction_USteamGameServer_SetProduct, "SetProduct" }, // 1474520123
		{ &Z_Construct_UFunction_USteamGameServer_SetRegion, "SetRegion" }, // 403414136
		{ &Z_Construct_UFunction_USteamGameServer_SetServerName, "SetServerName" }, // 2923745454
		{ &Z_Construct_UFunction_USteamGameServer_SetSpectatorPort, "SetSpectatorPort" }, // 1352262725
		{ &Z_Construct_UFunction_USteamGameServer_SetSpectatorServerName, "SetSpectatorServerName" }, // 3448067435
		{ &Z_Construct_UFunction_USteamGameServer_UserHasLicenseForApp, "UserHasLicenseForApp" }, // 1117946118
		{ &Z_Construct_UFunction_USteamGameServer_WasRestartRequested, "WasRestartRequested" }, // 366452891
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamGameServer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SteamGameServer/SteamGameServer.h" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamGameServer_Statics::NewProp_GSPolicyResponse_MetaData[] = {
		{ "Category", "SteamCore|GameServer|Delegates" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameServer_Statics::NewProp_GSPolicyResponse = { "GSPolicyResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamGameServer, GSPolicyResponse), Z_Construct_UDelegateFunction_SteamCore_OnGSPolicyResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamGameServer_Statics::NewProp_GSPolicyResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamGameServer_Statics::NewProp_GSPolicyResponse_MetaData)) }; // 1084895982
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamGameServer_Statics::NewProp_GSClientGroupStatus_MetaData[] = {
		{ "Category", "SteamCore|GameServer|Delegates" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameServer_Statics::NewProp_GSClientGroupStatus = { "GSClientGroupStatus", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamGameServer, GSClientGroupStatus), Z_Construct_UDelegateFunction_SteamCore_OnGSClientGroupStatus__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamGameServer_Statics::NewProp_GSClientGroupStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamGameServer_Statics::NewProp_GSClientGroupStatus_MetaData)) }; // 4101284056
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamGameServer_Statics::NewProp_GSValidateAuthTicketResponse_MetaData[] = {
		{ "Category", "SteamCore|GameServer|Delegates" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameServer_Statics::NewProp_GSValidateAuthTicketResponse = { "GSValidateAuthTicketResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamGameServer, GSValidateAuthTicketResponse), Z_Construct_UDelegateFunction_SteamCore_OnGSValidateAuthTicketResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamGameServer_Statics::NewProp_GSValidateAuthTicketResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamGameServer_Statics::NewProp_GSValidateAuthTicketResponse_MetaData)) }; // 2904377024
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamGameServer_Statics::NewProp_GSClientApprove_MetaData[] = {
		{ "Category", "SteamCore|GameServer|Delegates" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameServer_Statics::NewProp_GSClientApprove = { "GSClientApprove", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamGameServer, GSClientApprove), Z_Construct_UDelegateFunction_SteamCore_OnGSClientApprove__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamGameServer_Statics::NewProp_GSClientApprove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamGameServer_Statics::NewProp_GSClientApprove_MetaData)) }; // 1510702465
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamGameServer_Statics::NewProp_GSClientDeny_MetaData[] = {
		{ "Category", "SteamCore|GameServer|Delegates" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServer.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameServer_Statics::NewProp_GSClientDeny = { "GSClientDeny", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamGameServer, GSClientDeny), Z_Construct_UDelegateFunction_SteamCore_OnGSClientDeny__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamGameServer_Statics::NewProp_GSClientDeny_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamGameServer_Statics::NewProp_GSClientDeny_MetaData)) }; // 456531182
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamGameServer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameServer_Statics::NewProp_GSPolicyResponse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameServer_Statics::NewProp_GSClientGroupStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameServer_Statics::NewProp_GSValidateAuthTicketResponse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameServer_Statics::NewProp_GSClientApprove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameServer_Statics::NewProp_GSClientDeny,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamGameServer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamGameServer>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamGameServer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamGameServer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamGameServer()
	{
		if (!Z_Registration_Info_UClass_USteamGameServer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamGameServer.OuterSingleton, Z_Construct_UClass_USteamGameServer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamGameServer.OuterSingleton;
	}
	template<> STEAMCORE_API UClass* StaticClass<USteamGameServer>()
	{
		return USteamGameServer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamGameServer);
	USteamGameServer::~USteamGameServer() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USteamGameServer, USteamGameServer::StaticClass, TEXT("USteamGameServer"), &Z_Registration_Info_UClass_USteamGameServer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamGameServer), 207067945U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServer_h_2647742890(TEXT("/Script/SteamCore"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
