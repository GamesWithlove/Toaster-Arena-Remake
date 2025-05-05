// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamUser/SteamUser.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
#include "SteamCore/Public/SteamCore/SteamTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamUser() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
	STEAMCORE_API UClass* Z_Construct_UClass_UUser();
	STEAMCORE_API UClass* Z_Construct_UClass_UUser_NoRegister();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamBeginAuthSessionResult();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamUserHasLicenseForAppResult();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamVoiceResult();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnClientGameServerDeny__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGameWebCallback__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGetAuthSessionTicketResponse__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnIPCFailure__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLicensesUpdated__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnMicroTxnAuthorizationResponse__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicket__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicketResponse__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamServerConnectFailure__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamServersConnected__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamServersDisconnected__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnStoreAuthURLResponse__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnValidateAuthTicketResponse__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamTicketHandle();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	DEFINE_FUNCTION(UUser::execUserHasLicenseForApp)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamUserHasLicenseForAppResult*)Z_Param__Result=UUser::UserHasLicenseForApp(Z_Param_SteamID,Z_Param_AppID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execStopVoiceRecording)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UUser::StopVoiceRecording();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execStartVoiceRecording)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UUser::StartVoiceRecording();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execRequestStoreAuthURL)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_RedirectURL);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestStoreAuthURL(FOnStoreAuthURLResponse(Z_Param_Out_Callback),Z_Param_RedirectURL);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execRequestEncryptedAppTicket)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_TARRAY(uint8,Z_Param_DataToInclude);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestEncryptedAppTicket(FOnRequestEncryptedAppTicket(Z_Param_Out_Callback),Z_Param_DataToInclude);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execGetVoiceOptimalSampleRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUser::GetVoiceOptimalSampleRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execGetVoice)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_DestBuffer);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BytesWritten);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamVoiceResult*)Z_Param__Result=UUser::GetVoice(Z_Param_Out_DestBuffer,Z_Param_Out_BytesWritten);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execGetSteamID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=UUser::GetSteamID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execGetSteamID_Pure)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=UUser::GetSteamID_Pure();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execGetPlayerSteamLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUser::GetPlayerSteamLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execGetGameBadgeLevel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Series);
		P_GET_UBOOL(Z_Param_bFoil);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUser::GetGameBadgeLevel(Z_Param_Series,Z_Param_bFoil);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execGetEncryptedAppTicket)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Ticket);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUser::GetEncryptedAppTicket(Z_Param_Out_Ticket);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execGetAvailableVoice)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_CompressedBytes);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_UncompressedBytes);
		P_GET_PROPERTY(FIntProperty,Z_Param_UncompressedVoiceDesiredSampleRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamVoiceResult*)Z_Param__Result=UUser::GetAvailableVoice(Z_Param_Out_CompressedBytes,Z_Param_Out_UncompressedBytes,Z_Param_UncompressedVoiceDesiredSampleRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execGetAuthSessionTicket)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Ticket);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamTicketHandle*)Z_Param__Result=UUser::GetAuthSessionTicket(Z_Param_Out_Ticket);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execEndAuthSession)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUser::EndAuthSession(Z_Param_SteamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execDecompressVoice)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_CompressedBuffer);
		P_GET_PROPERTY(FIntProperty,Z_Param_DesiredSampleRate);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_DestBuffer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamVoiceResult*)Z_Param__Result=UUser::DecompressVoice(Z_Param_Out_CompressedBuffer,Z_Param_DesiredSampleRate,Z_Param_Out_DestBuffer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execCancelAuthTicket)
	{
		P_GET_STRUCT(FSteamTicketHandle,Z_Param_TicketHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUser::CancelAuthTicket(Z_Param_TicketHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execBLoggedOn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUser::BLoggedOn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execBIsTwoFactorEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUser::BIsTwoFactorEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execBIsPhoneVerified)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUser::BIsPhoneVerified();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execBIsPhoneRequiringVerification)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUser::BIsPhoneRequiringVerification();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execBIsPhoneIdentifying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUser::BIsPhoneIdentifying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execBIsBehindNAT)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUser::BIsBehindNAT();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execBeginAuthSession)
	{
		P_GET_TARRAY(uint8,Z_Param_Ticket);
		P_GET_STRUCT(FSteamID,Z_Param_SteamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamBeginAuthSessionResult*)Z_Param__Result=UUser::BeginAuthSession(Z_Param_Ticket,Z_Param_SteamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execAdvertiseGame)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDGameServer);
		P_GET_PROPERTY(FStrProperty,Z_Param_ServerIP);
		P_GET_PROPERTY(FIntProperty,Z_Param_ServerPort);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUser::AdvertiseGame(Z_Param_SteamIDGameServer,Z_Param_ServerIP,Z_Param_ServerPort);
		P_NATIVE_END;
	}
	void UUser::StaticRegisterNativesUUser()
	{
		UClass* Class = UUser::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AdvertiseGame", &UUser::execAdvertiseGame },
			{ "BeginAuthSession", &UUser::execBeginAuthSession },
			{ "BIsBehindNAT", &UUser::execBIsBehindNAT },
			{ "BIsPhoneIdentifying", &UUser::execBIsPhoneIdentifying },
			{ "BIsPhoneRequiringVerification", &UUser::execBIsPhoneRequiringVerification },
			{ "BIsPhoneVerified", &UUser::execBIsPhoneVerified },
			{ "BIsTwoFactorEnabled", &UUser::execBIsTwoFactorEnabled },
			{ "BLoggedOn", &UUser::execBLoggedOn },
			{ "CancelAuthTicket", &UUser::execCancelAuthTicket },
			{ "DecompressVoice", &UUser::execDecompressVoice },
			{ "EndAuthSession", &UUser::execEndAuthSession },
			{ "GetAuthSessionTicket", &UUser::execGetAuthSessionTicket },
			{ "GetAvailableVoice", &UUser::execGetAvailableVoice },
			{ "GetEncryptedAppTicket", &UUser::execGetEncryptedAppTicket },
			{ "GetGameBadgeLevel", &UUser::execGetGameBadgeLevel },
			{ "GetPlayerSteamLevel", &UUser::execGetPlayerSteamLevel },
			{ "GetSteamID", &UUser::execGetSteamID },
			{ "GetSteamID_Pure", &UUser::execGetSteamID_Pure },
			{ "GetVoice", &UUser::execGetVoice },
			{ "GetVoiceOptimalSampleRate", &UUser::execGetVoiceOptimalSampleRate },
			{ "RequestEncryptedAppTicket", &UUser::execRequestEncryptedAppTicket },
			{ "RequestStoreAuthURL", &UUser::execRequestStoreAuthURL },
			{ "StartVoiceRecording", &UUser::execStartVoiceRecording },
			{ "StopVoiceRecording", &UUser::execStopVoiceRecording },
			{ "UserHasLicenseForApp", &UUser::execUserHasLicenseForApp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUser_AdvertiseGame_Statics
	{
		struct User_eventAdvertiseGame_Parms
		{
			FSteamID SteamIDGameServer;
			FString ServerIP;
			int32 ServerPort;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDGameServer;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ServerIP;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ServerPort;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUser_AdvertiseGame_Statics::NewProp_SteamIDGameServer = { "SteamIDGameServer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(User_eventAdvertiseGame_Parms, SteamIDGameServer), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUser_AdvertiseGame_Statics::NewProp_ServerIP = { "ServerIP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(User_eventAdvertiseGame_Parms, ServerIP), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUser_AdvertiseGame_Statics::NewProp_ServerPort = { "ServerPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(User_eventAdvertiseGame_Parms, ServerPort), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_AdvertiseGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_AdvertiseGame_Statics::NewProp_SteamIDGameServer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_AdvertiseGame_Statics::NewProp_ServerIP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_AdvertiseGame_Statics::NewProp_ServerPort,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_AdvertiseGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Set the rich presence data for an unsecured game server that the user is playing on. This allows friends to be able to view the game info and join your game.\n\x09*\n\x09* When you are using Steam authentication system this call is never required, the auth system automatically sets the appropriate rich presence.\n\x09*\n\x09* @param\x09SteamIDGameServer\x09This should be k_steamIDNonSteamGS if you're setting the IP/Port, otherwise it should be k_steamIDNil if you're clearing this.\n\x09* @param\x09ServerIP\x09\x09\x09The IP of the game server in host order, i.e 127.0.0.1 == 0x7f000001.\n\x09* @param\x09ServerPort\x09\x09\x09The connection port of the game server, in host order.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
		{ "ToolTip", "Set the rich presence data for an unsecured game server that the user is playing on. This allows friends to be able to view the game info and join your game.\n\nWhen you are using Steam authentication system this call is never required, the auth system automatically sets the appropriate rich presence.\n\n@param        SteamIDGameServer       This should be k_steamIDNonSteamGS if you're setting the IP/Port, otherwise it should be k_steamIDNil if you're clearing this.\n@param        ServerIP                        The IP of the game server in host order, i.e 127.0.0.1 == 0x7f000001.\n@param        ServerPort                      The connection port of the game server, in host order." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_AdvertiseGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "AdvertiseGame", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUser_AdvertiseGame_Statics::User_eventAdvertiseGame_Parms), Z_Construct_UFunction_UUser_AdvertiseGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_AdvertiseGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_AdvertiseGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_AdvertiseGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_AdvertiseGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUser_AdvertiseGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_BeginAuthSession_Statics
	{
		struct User_eventBeginAuthSession_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUser_BeginAuthSession_Statics::NewProp_Ticket_Inner = { "Ticket", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUser_BeginAuthSession_Statics::NewProp_Ticket = { "Ticket", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(User_eventBeginAuthSession_Parms, Ticket), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUser_BeginAuthSession_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(User_eventBeginAuthSession_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUser_BeginAuthSession_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUser_BeginAuthSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(User_eventBeginAuthSession_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamBeginAuthSessionResult, METADATA_PARAMS(nullptr, 0) }; // 1279482194
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_BeginAuthSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_BeginAuthSession_Statics::NewProp_Ticket_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_BeginAuthSession_Statics::NewProp_Ticket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_BeginAuthSession_Statics::NewProp_SteamID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_BeginAuthSession_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_BeginAuthSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_BeginAuthSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Authenticate the ticket from the entity Steam ID to be sure it is valid and isn't reused.\n\x09*\n\x09* The ticket is created on the entity with GetAuthSessionTicket or ISteamGameServer::GetAuthSessionTicket and then needs to be provided over the network for the other end to validate.\n\x09* This registers for ValidateAuthTicketResponse_t callbacks if the entity goes offline or cancels the ticket. See EAuthSessionResponse for more information.\n\x09* When the multiplayer session terminates you must call EndAuthSession.\n\x09*\n\x09* @param\x09Ticket\x09\x09The auth ticket to validate.\n\x09* @param\x09SteamID\x09\x09The entity's Steam ID that sent this ticket.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
		{ "ToolTip", "Authenticate the ticket from the entity Steam ID to be sure it is valid and isn't reused.\n\nThe ticket is created on the entity with GetAuthSessionTicket or ISteamGameServer::GetAuthSessionTicket and then needs to be provided over the network for the other end to validate.\nThis registers for ValidateAuthTicketResponse_t callbacks if the entity goes offline or cancels the ticket. See EAuthSessionResponse for more information.\nWhen the multiplayer session terminates you must call EndAuthSession.\n\n@param        Ticket          The auth ticket to validate.\n@param        SteamID         The entity's Steam ID that sent this ticket." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_BeginAuthSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "BeginAuthSession", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUser_BeginAuthSession_Statics::User_eventBeginAuthSession_Parms), Z_Construct_UFunction_UUser_BeginAuthSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_BeginAuthSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_BeginAuthSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_BeginAuthSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_BeginAuthSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUser_BeginAuthSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_BIsBehindNAT_Statics
	{
		struct User_eventBIsBehindNAT_Parms
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
	void Z_Construct_UFunction_UUser_BIsBehindNAT_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((User_eventBIsBehindNAT_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUser_BIsBehindNAT_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(User_eventBIsBehindNAT_Parms), &Z_Construct_UFunction_UUser_BIsBehindNAT_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_BIsBehindNAT_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_BIsBehindNAT_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_BIsBehindNAT_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Checks if the current users looks like they are behind a NAT device.\n\x09*\n\x09* This is only valid if the user is connected to the Steam servers and may not catch all forms of NAT.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
		{ "ToolTip", "Checks if the current users looks like they are behind a NAT device.\n\nThis is only valid if the user is connected to the Steam servers and may not catch all forms of NAT." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_BIsBehindNAT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "BIsBehindNAT", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUser_BIsBehindNAT_Statics::User_eventBIsBehindNAT_Parms), Z_Construct_UFunction_UUser_BIsBehindNAT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_BIsBehindNAT_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_BIsBehindNAT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_BIsBehindNAT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_BIsBehindNAT()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUser_BIsBehindNAT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_BIsPhoneIdentifying_Statics
	{
		struct User_eventBIsPhoneIdentifying_Parms
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
	void Z_Construct_UFunction_UUser_BIsPhoneIdentifying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((User_eventBIsPhoneIdentifying_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUser_BIsPhoneIdentifying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(User_eventBIsPhoneIdentifying_Parms), &Z_Construct_UFunction_UUser_BIsPhoneIdentifying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_BIsPhoneIdentifying_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_BIsPhoneIdentifying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_BIsPhoneIdentifying_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Checks whether the user's phone number is used to uniquely identify them.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
		{ "ToolTip", "Checks whether the user's phone number is used to uniquely identify them." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_BIsPhoneIdentifying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "BIsPhoneIdentifying", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUser_BIsPhoneIdentifying_Statics::User_eventBIsPhoneIdentifying_Parms), Z_Construct_UFunction_UUser_BIsPhoneIdentifying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_BIsPhoneIdentifying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_BIsPhoneIdentifying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_BIsPhoneIdentifying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_BIsPhoneIdentifying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUser_BIsPhoneIdentifying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_BIsPhoneRequiringVerification_Statics
	{
		struct User_eventBIsPhoneRequiringVerification_Parms
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
	void Z_Construct_UFunction_UUser_BIsPhoneRequiringVerification_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((User_eventBIsPhoneRequiringVerification_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUser_BIsPhoneRequiringVerification_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(User_eventBIsPhoneRequiringVerification_Parms), &Z_Construct_UFunction_UUser_BIsPhoneRequiringVerification_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_BIsPhoneRequiringVerification_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_BIsPhoneRequiringVerification_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_BIsPhoneRequiringVerification_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Checks whether the current user's phone number is awaiting (re)verification.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
		{ "ToolTip", "Checks whether the current user's phone number is awaiting (re)verification." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_BIsPhoneRequiringVerification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "BIsPhoneRequiringVerification", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUser_BIsPhoneRequiringVerification_Statics::User_eventBIsPhoneRequiringVerification_Parms), Z_Construct_UFunction_UUser_BIsPhoneRequiringVerification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_BIsPhoneRequiringVerification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_BIsPhoneRequiringVerification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_BIsPhoneRequiringVerification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_BIsPhoneRequiringVerification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUser_BIsPhoneRequiringVerification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_BIsPhoneVerified_Statics
	{
		struct User_eventBIsPhoneVerified_Parms
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
	void Z_Construct_UFunction_UUser_BIsPhoneVerified_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((User_eventBIsPhoneVerified_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUser_BIsPhoneVerified_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(User_eventBIsPhoneVerified_Parms), &Z_Construct_UFunction_UUser_BIsPhoneVerified_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_BIsPhoneVerified_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_BIsPhoneVerified_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_BIsPhoneVerified_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Checks whether the current user has verified their phone number.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
		{ "ToolTip", "Checks whether the current user has verified their phone number." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_BIsPhoneVerified_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "BIsPhoneVerified", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUser_BIsPhoneVerified_Statics::User_eventBIsPhoneVerified_Parms), Z_Construct_UFunction_UUser_BIsPhoneVerified_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_BIsPhoneVerified_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_BIsPhoneVerified_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_BIsPhoneVerified_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_BIsPhoneVerified()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUser_BIsPhoneVerified_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_BIsTwoFactorEnabled_Statics
	{
		struct User_eventBIsTwoFactorEnabled_Parms
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
	void Z_Construct_UFunction_UUser_BIsTwoFactorEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((User_eventBIsTwoFactorEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUser_BIsTwoFactorEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(User_eventBIsTwoFactorEnabled_Parms), &Z_Construct_UFunction_UUser_BIsTwoFactorEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_BIsTwoFactorEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_BIsTwoFactorEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_BIsTwoFactorEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Checks whether the current user has Steam Guard two factor authentication enabled on their account.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
		{ "ToolTip", "Checks whether the current user has Steam Guard two factor authentication enabled on their account." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_BIsTwoFactorEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "BIsTwoFactorEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUser_BIsTwoFactorEnabled_Statics::User_eventBIsTwoFactorEnabled_Parms), Z_Construct_UFunction_UUser_BIsTwoFactorEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_BIsTwoFactorEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_BIsTwoFactorEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_BIsTwoFactorEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_BIsTwoFactorEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUser_BIsTwoFactorEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_BLoggedOn_Statics
	{
		struct User_eventBLoggedOn_Parms
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
	void Z_Construct_UFunction_UUser_BLoggedOn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((User_eventBLoggedOn_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUser_BLoggedOn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(User_eventBLoggedOn_Parms), &Z_Construct_UFunction_UUser_BLoggedOn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_BLoggedOn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_BLoggedOn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_BLoggedOn_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Checks if the current user's Steam client is connected to the Steam servers.\n\x09*\n\x09* If it's not then no real-time services provided by the Steamworks API will be enabled. \n\x09* The Steam client will automatically be trying to recreate the connection as often as possible. \n\x09* When the connection is restored a SteamServersConnected_t callback will be posted.\n\x09* You usually don't need to check for this yourself. \n\x09* All of the API calls that rely on this will check internally. Forcefully disabling \n\x09* stuff when the player loses access is usually not a very good experience for the player and you could be \n\x09* preventing them from accessing APIs that do not need a live connection to Steam.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
		{ "ToolTip", "Checks if the current user's Steam client is connected to the Steam servers.\n\nIf it's not then no real-time services provided by the Steamworks API will be enabled.\nThe Steam client will automatically be trying to recreate the connection as often as possible.\nWhen the connection is restored a SteamServersConnected_t callback will be posted.\nYou usually don't need to check for this yourself.\nAll of the API calls that rely on this will check internally. Forcefully disabling\nstuff when the player loses access is usually not a very good experience for the player and you could be\npreventing them from accessing APIs that do not need a live connection to Steam." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_BLoggedOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "BLoggedOn", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUser_BLoggedOn_Statics::User_eventBLoggedOn_Parms), Z_Construct_UFunction_UUser_BLoggedOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_BLoggedOn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_BLoggedOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_BLoggedOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_BLoggedOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUser_BLoggedOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_CancelAuthTicket_Statics
	{
		struct User_eventCancelAuthTicket_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUser_CancelAuthTicket_Statics::NewProp_TicketHandle = { "TicketHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(User_eventCancelAuthTicket_Parms, TicketHandle), Z_Construct_UScriptStruct_FSteamTicketHandle, METADATA_PARAMS(nullptr, 0) }; // 1818574373
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_CancelAuthTicket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_CancelAuthTicket_Statics::NewProp_TicketHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_CancelAuthTicket_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Cancels an auth ticket received from GetAuthSessionTicket. This should be called when no longer playing with the specified entity.\n\x09*\n\x09* @param\x09TicketHandle\x09The active auth ticket to cancel.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
		{ "ToolTip", "Cancels an auth ticket received from GetAuthSessionTicket. This should be called when no longer playing with the specified entity.\n\n@param        TicketHandle    The active auth ticket to cancel." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_CancelAuthTicket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "CancelAuthTicket", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUser_CancelAuthTicket_Statics::User_eventCancelAuthTicket_Parms), Z_Construct_UFunction_UUser_CancelAuthTicket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_CancelAuthTicket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_CancelAuthTicket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_CancelAuthTicket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_CancelAuthTicket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUser_CancelAuthTicket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_DecompressVoice_Statics
	{
		struct User_eventDecompressVoice_Parms
		{
			TArray<uint8> CompressedBuffer;
			int32 DesiredSampleRate;
			TArray<uint8> DestBuffer;
			ESteamVoiceResult ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_CompressedBuffer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompressedBuffer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CompressedBuffer;
		static const UECodeGen_Private::FIntPropertyParams NewProp_DesiredSampleRate;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DestBuffer_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DestBuffer;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUser_DecompressVoice_Statics::NewProp_CompressedBuffer_Inner = { "CompressedBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_DecompressVoice_Statics::NewProp_CompressedBuffer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUser_DecompressVoice_Statics::NewProp_CompressedBuffer = { "CompressedBuffer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(User_eventDecompressVoice_Parms, CompressedBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UUser_DecompressVoice_Statics::NewProp_CompressedBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_DecompressVoice_Statics::NewProp_CompressedBuffer_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUser_DecompressVoice_Statics::NewProp_DesiredSampleRate = { "DesiredSampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(User_eventDecompressVoice_Parms, DesiredSampleRate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUser_DecompressVoice_Statics::NewProp_DestBuffer_Inner = { "DestBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUser_DecompressVoice_Statics::NewProp_DestBuffer = { "DestBuffer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(User_eventDecompressVoice_Parms, DestBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUser_DecompressVoice_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUser_DecompressVoice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(User_eventDecompressVoice_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamVoiceResult, METADATA_PARAMS(nullptr, 0) }; // 2544043136
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_DecompressVoice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_DecompressVoice_Statics::NewProp_CompressedBuffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_DecompressVoice_Statics::NewProp_CompressedBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_DecompressVoice_Statics::NewProp_DesiredSampleRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_DecompressVoice_Statics::NewProp_DestBuffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_DecompressVoice_Statics::NewProp_DestBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_DecompressVoice_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_DecompressVoice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_DecompressVoice_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Decodes the compressed voice data returned by GetVoice.\n\x09*\n\x09* The output data is raw single-channel 16-bit PCM audio. The decoder supports any sample rate from 11025 to 48000. See GetVoiceOptimalSampleRate for more information.\n\x09* It is recommended that you start with a 20KiB buffer and then reallocate as necessary.\n\x09*\n\x09* @param\x09""CompressedBuffer\x09\x09The compressed data received from GetVoice.\n\x09* @param\x09""DesiredSampleRate\x09\x09The sample rate that will be returned. This can be from 11025 to 48000, you should either use the rate that works best for your audio playback system, which likely takes the users audio hardware into account, or you can use GetVoiceOptimalSampleRate to get the native sample rate of the Steam voice decoder.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
		{ "ToolTip", "Decodes the compressed voice data returned by GetVoice.\n\nThe output data is raw single-channel 16-bit PCM audio. The decoder supports any sample rate from 11025 to 48000. See GetVoiceOptimalSampleRate for more information.\nIt is recommended that you start with a 20KiB buffer and then reallocate as necessary.\n\n@param        CompressedBuffer                The compressed data received from GetVoice.\n@param        DesiredSampleRate               The sample rate that will be returned. This can be from 11025 to 48000, you should either use the rate that works best for your audio playback system, which likely takes the users audio hardware into account, or you can use GetVoiceOptimalSampleRate to get the native sample rate of the Steam voice decoder." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_DecompressVoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "DecompressVoice", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUser_DecompressVoice_Statics::User_eventDecompressVoice_Parms), Z_Construct_UFunction_UUser_DecompressVoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_DecompressVoice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_DecompressVoice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_DecompressVoice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_DecompressVoice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUser_DecompressVoice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_EndAuthSession_Statics
	{
		struct User_eventEndAuthSession_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUser_EndAuthSession_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(User_eventEndAuthSession_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_EndAuthSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_EndAuthSession_Statics::NewProp_SteamID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_EndAuthSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Ends an auth session that was started with BeginAuthSession. This should be called when no longer playing with the specified entity.\n\x09*\n\x09* @param\x09SteamID\x09\x09The entity to end the active auth session with.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
		{ "ToolTip", "Ends an auth session that was started with BeginAuthSession. This should be called when no longer playing with the specified entity.\n\n@param        SteamID         The entity to end the active auth session with." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_EndAuthSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "EndAuthSession", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUser_EndAuthSession_Statics::User_eventEndAuthSession_Parms), Z_Construct_UFunction_UUser_EndAuthSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_EndAuthSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_EndAuthSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_EndAuthSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_EndAuthSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUser_EndAuthSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_GetAuthSessionTicket_Statics
	{
		struct User_eventGetAuthSessionTicket_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUser_GetAuthSessionTicket_Statics::NewProp_Ticket_Inner = { "Ticket", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUser_GetAuthSessionTicket_Statics::NewProp_Ticket = { "Ticket", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(User_eventGetAuthSessionTicket_Parms, Ticket), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUser_GetAuthSessionTicket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(User_eventGetAuthSessionTicket_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamTicketHandle, METADATA_PARAMS(nullptr, 0) }; // 1818574373
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_GetAuthSessionTicket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetAuthSessionTicket_Statics::NewProp_Ticket_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetAuthSessionTicket_Statics::NewProp_Ticket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetAuthSessionTicket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_GetAuthSessionTicket_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Retrieve a authentication ticket to be sent to the entity who wishes to authenticate you.\n\x09*\n\x09* After calling this you can send the ticket to the entity where they can then call BeginAuthSession/ISteamGameServer::BeginAuthSession \n\x09* to verify this entities integrity.\n\x09* When creating a ticket for use by the ISteamUserAuth/AuthenticateUserTicket Web API, \n\x09* the calling application should wait for the GetAuthSessionTicketResponse_t callback generated by the \n\x09* API call before attempting to use the ticket to ensure that the ticket has been communicated to the server. \n\x09* If this callback does not come in a timely fashion (10 - 20 seconds), then your client is not connected to Steam\n\x09* and the AuthenticateUserTicket call will fail because it can not authenticate the user.\n\x09*\n\x09* @param\x09Ticket\x09\x09The buffer where the new auth ticket will be copied into if the call was successful.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
		{ "ToolTip", "Retrieve a authentication ticket to be sent to the entity who wishes to authenticate you.\n\nAfter calling this you can send the ticket to the entity where they can then call BeginAuthSession/ISteamGameServer::BeginAuthSession\nto verify this entities integrity.\nWhen creating a ticket for use by the ISteamUserAuth/AuthenticateUserTicket Web API,\nthe calling application should wait for the GetAuthSessionTicketResponse_t callback generated by the\nAPI call before attempting to use the ticket to ensure that the ticket has been communicated to the server.\nIf this callback does not come in a timely fashion (10 - 20 seconds), then your client is not connected to Steam\nand the AuthenticateUserTicket call will fail because it can not authenticate the user.\n\n@param        Ticket          The buffer where the new auth ticket will be copied into if the call was successful." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_GetAuthSessionTicket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "GetAuthSessionTicket", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUser_GetAuthSessionTicket_Statics::User_eventGetAuthSessionTicket_Parms), Z_Construct_UFunction_UUser_GetAuthSessionTicket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_GetAuthSessionTicket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_GetAuthSessionTicket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_GetAuthSessionTicket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_GetAuthSessionTicket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUser_GetAuthSessionTicket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_GetAvailableVoice_Statics
	{
		struct User_eventGetAvailableVoice_Parms
		{
			int32 CompressedBytes;
			int32 UncompressedBytes;
			int32 UncompressedVoiceDesiredSampleRate;
			ESteamVoiceResult ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_CompressedBytes;
		static const UECodeGen_Private::FIntPropertyParams NewProp_UncompressedBytes;
		static const UECodeGen_Private::FIntPropertyParams NewProp_UncompressedVoiceDesiredSampleRate;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUser_GetAvailableVoice_Statics::NewProp_CompressedBytes = { "CompressedBytes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(User_eventGetAvailableVoice_Parms, CompressedBytes), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUser_GetAvailableVoice_Statics::NewProp_UncompressedBytes = { "UncompressedBytes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(User_eventGetAvailableVoice_Parms, UncompressedBytes), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUser_GetAvailableVoice_Statics::NewProp_UncompressedVoiceDesiredSampleRate = { "UncompressedVoiceDesiredSampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(User_eventGetAvailableVoice_Parms, UncompressedVoiceDesiredSampleRate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUser_GetAvailableVoice_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUser_GetAvailableVoice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(User_eventGetAvailableVoice_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamVoiceResult, METADATA_PARAMS(nullptr, 0) }; // 2544043136
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_GetAvailableVoice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetAvailableVoice_Statics::NewProp_CompressedBytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetAvailableVoice_Statics::NewProp_UncompressedBytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetAvailableVoice_Statics::NewProp_UncompressedVoiceDesiredSampleRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetAvailableVoice_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetAvailableVoice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_GetAvailableVoice_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Checks to see if there is captured audio data available from GetVoice, and gets the size of the data.\n\x09*\n\x09* Most applications will only use compressed data and should ignore the other parameters, \n\x09* which exist primarily for backwards compatibility. See GetVoice for further explanation of \"uncompressed\" data.\n\x09*\n\x09* @param\x09""CompressedBytes\x09\x09\x09\x09\x09\x09\x09Returns the size of the available voice data in bytes.\n\x09* @param\x09UncompressedBytes\x09\x09\x09\x09\x09\x09""Deprecated\n\x09* @param\x09UncompressedVoiceDesiredSampleRate\x09\x09""Deprecated\n\x09*/" },
		{ "CPP_Default_UncompressedVoiceDesiredSampleRate", "0" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
		{ "ToolTip", "Checks to see if there is captured audio data available from GetVoice, and gets the size of the data.\n\nMost applications will only use compressed data and should ignore the other parameters,\nwhich exist primarily for backwards compatibility. See GetVoice for further explanation of \"uncompressed\" data.\n\n@param        CompressedBytes                                                 Returns the size of the available voice data in bytes.\n@param        UncompressedBytes                                               Deprecated\n@param        UncompressedVoiceDesiredSampleRate              Deprecated" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_GetAvailableVoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "GetAvailableVoice", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUser_GetAvailableVoice_Statics::User_eventGetAvailableVoice_Parms), Z_Construct_UFunction_UUser_GetAvailableVoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_GetAvailableVoice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_GetAvailableVoice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_GetAvailableVoice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_GetAvailableVoice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUser_GetAvailableVoice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_GetEncryptedAppTicket_Statics
	{
		struct User_eventGetEncryptedAppTicket_Parms
		{
			TArray<uint8> Ticket;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Ticket_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Ticket;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUser_GetEncryptedAppTicket_Statics::NewProp_Ticket_Inner = { "Ticket", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUser_GetEncryptedAppTicket_Statics::NewProp_Ticket = { "Ticket", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(User_eventGetEncryptedAppTicket_Parms, Ticket), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUser_GetEncryptedAppTicket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((User_eventGetEncryptedAppTicket_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUser_GetEncryptedAppTicket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(User_eventGetEncryptedAppTicket_Parms), &Z_Construct_UFunction_UUser_GetEncryptedAppTicket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_GetEncryptedAppTicket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetEncryptedAppTicket_Statics::NewProp_Ticket_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetEncryptedAppTicket_Statics::NewProp_Ticket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetEncryptedAppTicket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_GetEncryptedAppTicket_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Retrieve an encrypted ticket.\n\x09*\n\x09* This should be called after requesting an encrypted app ticket with RequestEncryptedAppTicket and receiving the EncryptedAppTicketResponse_t call result.\n\x09* You should then pass this encrypted ticket to your secure servers to be decrypted using your secret key using SteamEncryptedAppTicket::BDecryptTicket.\n\x09* NOTE: If you call this without calling RequestEncryptedAppTicket, the call may succeed but you will likely get a stale ticket.\n\x09*\n\x09* @param\x09Ticket\x09\x09The encrypted app ticket is copied into this buffer.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
		{ "ToolTip", "Retrieve an encrypted ticket.\n\nThis should be called after requesting an encrypted app ticket with RequestEncryptedAppTicket and receiving the EncryptedAppTicketResponse_t call result.\nYou should then pass this encrypted ticket to your secure servers to be decrypted using your secret key using SteamEncryptedAppTicket::BDecryptTicket.\nNOTE: If you call this without calling RequestEncryptedAppTicket, the call may succeed but you will likely get a stale ticket.\n\n@param        Ticket          The encrypted app ticket is copied into this buffer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_GetEncryptedAppTicket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "GetEncryptedAppTicket", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUser_GetEncryptedAppTicket_Statics::User_eventGetEncryptedAppTicket_Parms), Z_Construct_UFunction_UUser_GetEncryptedAppTicket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_GetEncryptedAppTicket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_GetEncryptedAppTicket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_GetEncryptedAppTicket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_GetEncryptedAppTicket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUser_GetEncryptedAppTicket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_GetGameBadgeLevel_Statics
	{
		struct User_eventGetGameBadgeLevel_Parms
		{
			int32 Series;
			bool bFoil;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Series;
		static void NewProp_bFoil_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFoil;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUser_GetGameBadgeLevel_Statics::NewProp_Series = { "Series", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(User_eventGetGameBadgeLevel_Parms, Series), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUser_GetGameBadgeLevel_Statics::NewProp_bFoil_SetBit(void* Obj)
	{
		((User_eventGetGameBadgeLevel_Parms*)Obj)->bFoil = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUser_GetGameBadgeLevel_Statics::NewProp_bFoil = { "bFoil", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(User_eventGetGameBadgeLevel_Parms), &Z_Construct_UFunction_UUser_GetGameBadgeLevel_Statics::NewProp_bFoil_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUser_GetGameBadgeLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(User_eventGetGameBadgeLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_GetGameBadgeLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetGameBadgeLevel_Statics::NewProp_Series,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetGameBadgeLevel_Statics::NewProp_bFoil,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetGameBadgeLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_GetGameBadgeLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Gets the level of the users Steam badge for your game.\n\x09*\n\x09* The user can have two different badges for a series; the regular badge (max level 5) and the foil badge (max level 1).\n\x09*\n\x09* @param\x09Series\x09If you only have one set of cards, the series will be 1.\n\x09* @param\x09""bFoil\x09""Check if they have received the foil badge.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
		{ "ToolTip", "Gets the level of the users Steam badge for your game.\n\nThe user can have two different badges for a series; the regular badge (max level 5) and the foil badge (max level 1).\n\n@param        Series  If you only have one set of cards, the series will be 1.\n@param        bFoil   Check if they have received the foil badge." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_GetGameBadgeLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "GetGameBadgeLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUser_GetGameBadgeLevel_Statics::User_eventGetGameBadgeLevel_Parms), Z_Construct_UFunction_UUser_GetGameBadgeLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_GetGameBadgeLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_GetGameBadgeLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_GetGameBadgeLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_GetGameBadgeLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUser_GetGameBadgeLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_GetPlayerSteamLevel_Statics
	{
		struct User_eventGetPlayerSteamLevel_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUser_GetPlayerSteamLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(User_eventGetPlayerSteamLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_GetPlayerSteamLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetPlayerSteamLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_GetPlayerSteamLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Gets the Steam level of the user, as shown on their Steam community profile.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
		{ "ToolTip", "Gets the Steam level of the user, as shown on their Steam community profile." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_GetPlayerSteamLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "GetPlayerSteamLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUser_GetPlayerSteamLevel_Statics::User_eventGetPlayerSteamLevel_Parms), Z_Construct_UFunction_UUser_GetPlayerSteamLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_GetPlayerSteamLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_GetPlayerSteamLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_GetPlayerSteamLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_GetPlayerSteamLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUser_GetPlayerSteamLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_GetSteamID_Statics
	{
		struct User_eventGetSteamID_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUser_GetSteamID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(User_eventGetSteamID_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_GetSteamID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetSteamID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_GetSteamID_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Gets the Steam ID of the account currently logged into the Steam client. This is commonly called the 'current user', or 'local user'.\n\x09*\n\x09* A Steam ID is a unique identifier for a Steam accounts, Steam groups, Lobbies and Chat rooms, and used to differentiate users in all parts of the Steamworks API.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
		{ "ToolTip", "Gets the Steam ID of the account currently logged into the Steam client. This is commonly called the 'current user', or 'local user'.\n\nA Steam ID is a unique identifier for a Steam accounts, Steam groups, Lobbies and Chat rooms, and used to differentiate users in all parts of the Steamworks API." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_GetSteamID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "GetSteamID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUser_GetSteamID_Statics::User_eventGetSteamID_Parms), Z_Construct_UFunction_UUser_GetSteamID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_GetSteamID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_GetSteamID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_GetSteamID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_GetSteamID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUser_GetSteamID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_GetSteamID_Pure_Statics
	{
		struct User_eventGetSteamID_Pure_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUser_GetSteamID_Pure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(User_eventGetSteamID_Pure_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_GetSteamID_Pure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetSteamID_Pure_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_GetSteamID_Pure_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Gets the Steam ID of the account currently logged into the Steam client. This is commonly called the 'current user', or 'local user'.\n\x09*\n\x09* A Steam ID is a unique identifier for a Steam accounts, Steam groups, Lobbies and Chat rooms, and used to differentiate users in all parts of the Steamworks API.\n\x09*/" },
		{ "DisplayName", "Get Steam ID (Pure)" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
		{ "ToolTip", "Gets the Steam ID of the account currently logged into the Steam client. This is commonly called the 'current user', or 'local user'.\n\nA Steam ID is a unique identifier for a Steam accounts, Steam groups, Lobbies and Chat rooms, and used to differentiate users in all parts of the Steamworks API." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_GetSteamID_Pure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "GetSteamID_Pure", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUser_GetSteamID_Pure_Statics::User_eventGetSteamID_Pure_Parms), Z_Construct_UFunction_UUser_GetSteamID_Pure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_GetSteamID_Pure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_GetSteamID_Pure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_GetSteamID_Pure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_GetSteamID_Pure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUser_GetSteamID_Pure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_GetVoice_Statics
	{
		struct User_eventGetVoice_Parms
		{
			TArray<uint8> DestBuffer;
			int32 BytesWritten;
			ESteamVoiceResult ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_DestBuffer_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DestBuffer;
		static const UECodeGen_Private::FIntPropertyParams NewProp_BytesWritten;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUser_GetVoice_Statics::NewProp_DestBuffer_Inner = { "DestBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUser_GetVoice_Statics::NewProp_DestBuffer = { "DestBuffer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(User_eventGetVoice_Parms, DestBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUser_GetVoice_Statics::NewProp_BytesWritten = { "BytesWritten", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(User_eventGetVoice_Parms, BytesWritten), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUser_GetVoice_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUser_GetVoice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(User_eventGetVoice_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamVoiceResult, METADATA_PARAMS(nullptr, 0) }; // 2544043136
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_GetVoice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetVoice_Statics::NewProp_DestBuffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetVoice_Statics::NewProp_DestBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetVoice_Statics::NewProp_BytesWritten,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetVoice_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetVoice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_GetVoice_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Read captured audio data from the microphone buffer.\n\x09*\n\x09* The compressed data can be transmitted by your application and decoded back into raw audio data using DecompressVoice \n\x09* on the other side. The compressed data provided is in an arbitrary format and is not meant to be played directly.\n\x09*\n\x09* This should be called once per frame, and at worst no more than four times a second to keep the microphone input delay as low as possible. \n\x09* Calling this any less may result in gaps in the returned stream.\n\x09*\n\x09* It is recommended that you pass in an 8 kilobytes or larger destination buffer for compressed audio. \n\x09* Static buffers are recommended for performance reasons. However, if you would like to allocate precisely the right \n\x09* amount of space for a buffer before each call you may use GetAvailableVoice to find out how much data is available to be read.\n\x09* NOTE: \"Uncompressed\" audio is a deprecated feature and should not be used by most applications. \n\x09* It is raw single-channel 16-bit PCM wave data which may have been run through preprocessing filters and/or had silence removed, \n\x09* so the uncompressed audio could have a shorter duration than you expect. \n\x09* There may be no data at all during long periods of silence. Also, fetching uncompressed audio will cause GetVoice to discard \n\x09* any leftover compressed audio, so you must fetch both types at once. Finally, GetAvailableVoice is not precisely accurate when the \n\x09* uncompressed size is requested. So if you really need to use uncompressed audio, you should call GetVoice frequently with two \n\x09* very large (20KiB+) output buffers instead of trying to allocate perfectly-sized buffers. But most applications should ignore \n\x09* all of these details and simply leave the \"uncompressed\" parameters as NULL/0.\n\x09*\n\x09* @param\x09""DestBuffer\x09\x09\x09\x09\x09\x09\x09\x09The buffer where the audio data will be copied into.\n\x09* @param\x09""BytesWritten\x09\x09\x09\x09\x09\x09\x09Returns the number of bytes written into pDestBuffer. This should always be the size returned by ISteamUser::GetAvailableVoice.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
		{ "ToolTip", "Read captured audio data from the microphone buffer.\n\nThe compressed data can be transmitted by your application and decoded back into raw audio data using DecompressVoice\non the other side. The compressed data provided is in an arbitrary format and is not meant to be played directly.\n\nThis should be called once per frame, and at worst no more than four times a second to keep the microphone input delay as low as possible.\nCalling this any less may result in gaps in the returned stream.\n\nIt is recommended that you pass in an 8 kilobytes or larger destination buffer for compressed audio.\nStatic buffers are recommended for performance reasons. However, if you would like to allocate precisely the right\namount of space for a buffer before each call you may use GetAvailableVoice to find out how much data is available to be read.\nNOTE: \"Uncompressed\" audio is a deprecated feature and should not be used by most applications.\nIt is raw single-channel 16-bit PCM wave data which may have been run through preprocessing filters and/or had silence removed,\nso the uncompressed audio could have a shorter duration than you expect.\nThere may be no data at all during long periods of silence. Also, fetching uncompressed audio will cause GetVoice to discard\nany leftover compressed audio, so you must fetch both types at once. Finally, GetAvailableVoice is not precisely accurate when the\nuncompressed size is requested. So if you really need to use uncompressed audio, you should call GetVoice frequently with two\nvery large (20KiB+) output buffers instead of trying to allocate perfectly-sized buffers. But most applications should ignore\nall of these details and simply leave the \"uncompressed\" parameters as NULL/0.\n\n@param        DestBuffer                                                              The buffer where the audio data will be copied into.\n@param        BytesWritten                                                    Returns the number of bytes written into pDestBuffer. This should always be the size returned by ISteamUser::GetAvailableVoice." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_GetVoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "GetVoice", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUser_GetVoice_Statics::User_eventGetVoice_Parms), Z_Construct_UFunction_UUser_GetVoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_GetVoice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_GetVoice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_GetVoice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_GetVoice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUser_GetVoice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_GetVoiceOptimalSampleRate_Statics
	{
		struct User_eventGetVoiceOptimalSampleRate_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUser_GetVoiceOptimalSampleRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(User_eventGetVoiceOptimalSampleRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_GetVoiceOptimalSampleRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetVoiceOptimalSampleRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_GetVoiceOptimalSampleRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Gets the native sample rate of the Steam voice decoder.\n\x09*\n\x09* Using this sample rate for DecompressVoice will perform the least CPU processing.\n\x09* However, the final audio quality will depend on how well the audio device (and/or your application's audio output SDK) \n\x09* deals with lower sample rates. You may find that you get the best audio output quality when you ignore this function and \n\x09* use the native sample rate of your audio output device, which is usually 48000 or 44100.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
		{ "ToolTip", "Gets the native sample rate of the Steam voice decoder.\n\nUsing this sample rate for DecompressVoice will perform the least CPU processing.\nHowever, the final audio quality will depend on how well the audio device (and/or your application's audio output SDK)\ndeals with lower sample rates. You may find that you get the best audio output quality when you ignore this function and\nuse the native sample rate of your audio output device, which is usually 48000 or 44100." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_GetVoiceOptimalSampleRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "GetVoiceOptimalSampleRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUser_GetVoiceOptimalSampleRate_Statics::User_eventGetVoiceOptimalSampleRate_Parms), Z_Construct_UFunction_UUser_GetVoiceOptimalSampleRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_GetVoiceOptimalSampleRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_GetVoiceOptimalSampleRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_GetVoiceOptimalSampleRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_GetVoiceOptimalSampleRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUser_GetVoiceOptimalSampleRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_RequestEncryptedAppTicket_Statics
	{
		struct User_eventRequestEncryptedAppTicket_Parms
		{
			FScriptDelegate Callback;
			TArray<uint8> DataToInclude;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DataToInclude_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataToInclude;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_RequestEncryptedAppTicket_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUser_RequestEncryptedAppTicket_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(User_eventRequestEncryptedAppTicket_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicket__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUser_RequestEncryptedAppTicket_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_RequestEncryptedAppTicket_Statics::NewProp_Callback_MetaData)) }; // 3904673038
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUser_RequestEncryptedAppTicket_Statics::NewProp_DataToInclude_Inner = { "DataToInclude", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUser_RequestEncryptedAppTicket_Statics::NewProp_DataToInclude = { "DataToInclude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(User_eventRequestEncryptedAppTicket_Parms, DataToInclude), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_RequestEncryptedAppTicket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_RequestEncryptedAppTicket_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_RequestEncryptedAppTicket_Statics::NewProp_DataToInclude_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_RequestEncryptedAppTicket_Statics::NewProp_DataToInclude,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_RequestEncryptedAppTicket_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Requests an application ticket encrypted with the secret \"encrypted app ticket key\".\n\x09*\n\x09* The encryption key can be obtained from the Encrypted App Ticket Key page on the App Admin for your app.\n\x09* There can only be one EncryptedAppTicketResponse_t pending, and this call is subject to a 60 second rate limit.\n\x09* After receiving the response you should call GetEncryptedAppTicket to get the ticket data, and then you need to send it to a secure server to be decrypted with the SteamEncryptedAppTicket functions.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
		{ "ToolTip", "Requests an application ticket encrypted with the secret \"encrypted app ticket key\".\n\nThe encryption key can be obtained from the Encrypted App Ticket Key page on the App Admin for your app.\nThere can only be one EncryptedAppTicketResponse_t pending, and this call is subject to a 60 second rate limit.\nAfter receiving the response you should call GetEncryptedAppTicket to get the ticket data, and then you need to send it to a secure server to be decrypted with the SteamEncryptedAppTicket functions." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_RequestEncryptedAppTicket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "RequestEncryptedAppTicket", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUser_RequestEncryptedAppTicket_Statics::User_eventRequestEncryptedAppTicket_Parms), Z_Construct_UFunction_UUser_RequestEncryptedAppTicket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_RequestEncryptedAppTicket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_RequestEncryptedAppTicket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_RequestEncryptedAppTicket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_RequestEncryptedAppTicket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUser_RequestEncryptedAppTicket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_RequestStoreAuthURL_Statics
	{
		struct User_eventRequestStoreAuthURL_Parms
		{
			FScriptDelegate Callback;
			FString RedirectURL;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_RedirectURL;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_RequestStoreAuthURL_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUser_RequestStoreAuthURL_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(User_eventRequestStoreAuthURL_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnStoreAuthURLResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUser_RequestStoreAuthURL_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_RequestStoreAuthURL_Statics::NewProp_Callback_MetaData)) }; // 2874472916
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUser_RequestStoreAuthURL_Statics::NewProp_RedirectURL = { "RedirectURL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(User_eventRequestStoreAuthURL_Parms, RedirectURL), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_RequestStoreAuthURL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_RequestStoreAuthURL_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_RequestStoreAuthURL_Statics::NewProp_RedirectURL,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_RequestStoreAuthURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Requests a URL which authenticates an in-game browser for store check-out, and then redirects to the specified URL.\n\x09*\n\x09* As long as the in-game browser accepts and handles session cookies, Steam microtransaction checkout pages will automatically recognize the user instead of presenting a login page.\n\x09* NOTE: The URL has a very short lifetime to prevent history-snooping attacks, so you should only call this API when you are about to launch the browser, or else immediately navigate to the result URL using a hidden browser window.\n\x09* NOTE: The resulting authorization cookie has an expiration time of one day, so it would be a good idea to request and visit a new auth URL every 12 hours.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
		{ "ToolTip", "Requests a URL which authenticates an in-game browser for store check-out, and then redirects to the specified URL.\n\nAs long as the in-game browser accepts and handles session cookies, Steam microtransaction checkout pages will automatically recognize the user instead of presenting a login page.\nNOTE: The URL has a very short lifetime to prevent history-snooping attacks, so you should only call this API when you are about to launch the browser, or else immediately navigate to the result URL using a hidden browser window.\nNOTE: The resulting authorization cookie has an expiration time of one day, so it would be a good idea to request and visit a new auth URL every 12 hours." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_RequestStoreAuthURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "RequestStoreAuthURL", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUser_RequestStoreAuthURL_Statics::User_eventRequestStoreAuthURL_Parms), Z_Construct_UFunction_UUser_RequestStoreAuthURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_RequestStoreAuthURL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_RequestStoreAuthURL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_RequestStoreAuthURL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_RequestStoreAuthURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUser_RequestStoreAuthURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_StartVoiceRecording_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_StartVoiceRecording_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Starts voice recording.\n\x09*\n\x09* Once started, use GetAvailableVoice and GetVoice to get the data, and then call StopVoiceRecording when the user has released their push-to-talk hotkey or the game session has completed.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
		{ "ToolTip", "Starts voice recording.\n\nOnce started, use GetAvailableVoice and GetVoice to get the data, and then call StopVoiceRecording when the user has released their push-to-talk hotkey or the game session has completed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_StartVoiceRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "StartVoiceRecording", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_StartVoiceRecording_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_StartVoiceRecording_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_StartVoiceRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUser_StartVoiceRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_StopVoiceRecording_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_StopVoiceRecording_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Stops voice recording.\n\x09*\n\x09* Because people often release push-to-talk keys early, the system will keep recording for a little bit after this function is called. As such, GetVoice should continue to be called until it returns k_EVoiceResultNotRecording, only then will voice recording be stopped.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
		{ "ToolTip", "Stops voice recording.\n\nBecause people often release push-to-talk keys early, the system will keep recording for a little bit after this function is called. As such, GetVoice should continue to be called until it returns k_EVoiceResultNotRecording, only then will voice recording be stopped." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_StopVoiceRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "StopVoiceRecording", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_StopVoiceRecording_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_StopVoiceRecording_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_StopVoiceRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUser_StopVoiceRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_UserHasLicenseForApp_Statics
	{
		struct User_eventUserHasLicenseForApp_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUser_UserHasLicenseForApp_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(User_eventUserHasLicenseForApp_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUser_UserHasLicenseForApp_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(User_eventUserHasLicenseForApp_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUser_UserHasLicenseForApp_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUser_UserHasLicenseForApp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(User_eventUserHasLicenseForApp_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamUserHasLicenseForAppResult, METADATA_PARAMS(nullptr, 0) }; // 1515824211
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_UserHasLicenseForApp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_UserHasLicenseForApp_Statics::NewProp_SteamID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_UserHasLicenseForApp_Statics::NewProp_AppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_UserHasLicenseForApp_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_UserHasLicenseForApp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_UserHasLicenseForApp_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Checks if the user owns a specific piece of Downloadable Content (DLC).\n\x09*\n\x09* This can only be called after sending the users auth ticket to ISteamGameServer::BeginAuthSession/\n\x09*\n\x09* @param\x09SteamID\x09\x09The Steam ID of the user that sent the auth ticket.\n\x09* @param\x09""AppID\x09\x09The DLC App ID to check if the user owns it.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
		{ "ToolTip", "Checks if the user owns a specific piece of Downloadable Content (DLC).\n\nThis can only be called after sending the users auth ticket to ISteamGameServer::BeginAuthSession/\n\n@param        SteamID         The Steam ID of the user that sent the auth ticket.\n@param        AppID           The DLC App ID to check if the user owns it." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_UserHasLicenseForApp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "UserHasLicenseForApp", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUser_UserHasLicenseForApp_Statics::User_eventUserHasLicenseForApp_Parms), Z_Construct_UFunction_UUser_UserHasLicenseForApp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_UserHasLicenseForApp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_UserHasLicenseForApp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_UserHasLicenseForApp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_UserHasLicenseForApp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUser_UserHasLicenseForApp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUser);
	UClass* Z_Construct_UClass_UUser_NoRegister()
	{
		return UUser::StaticClass();
	}
	struct Z_Construct_UClass_UUser_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientGameServerDeny_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ClientGameServerDeny;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameWebCallback_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GameWebCallback;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GetAuthSessionTicketResponse_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GetAuthSessionTicketResponse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IpcFailure_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_IpcFailure;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LicensesUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_LicensesUpdated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MicroTxnAuthorizationResponse_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_MicroTxnAuthorizationResponse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamServerConnectFailure_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamServerConnectFailure;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamServersConnected_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamServersConnected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamServersDisconnected_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamServersDisconnected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValidateAuthTicketResponse_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ValidateAuthTicketResponse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EncryptedAppTicketResponse_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_EncryptedAppTicketResponse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUser_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUser_AdvertiseGame, "AdvertiseGame" }, // 277800040
		{ &Z_Construct_UFunction_UUser_BeginAuthSession, "BeginAuthSession" }, // 3261044585
		{ &Z_Construct_UFunction_UUser_BIsBehindNAT, "BIsBehindNAT" }, // 2223258698
		{ &Z_Construct_UFunction_UUser_BIsPhoneIdentifying, "BIsPhoneIdentifying" }, // 4042121151
		{ &Z_Construct_UFunction_UUser_BIsPhoneRequiringVerification, "BIsPhoneRequiringVerification" }, // 485629671
		{ &Z_Construct_UFunction_UUser_BIsPhoneVerified, "BIsPhoneVerified" }, // 3764854848
		{ &Z_Construct_UFunction_UUser_BIsTwoFactorEnabled, "BIsTwoFactorEnabled" }, // 3219238346
		{ &Z_Construct_UFunction_UUser_BLoggedOn, "BLoggedOn" }, // 2751238543
		{ &Z_Construct_UFunction_UUser_CancelAuthTicket, "CancelAuthTicket" }, // 3571322623
		{ &Z_Construct_UFunction_UUser_DecompressVoice, "DecompressVoice" }, // 1832982366
		{ &Z_Construct_UFunction_UUser_EndAuthSession, "EndAuthSession" }, // 1290099860
		{ &Z_Construct_UFunction_UUser_GetAuthSessionTicket, "GetAuthSessionTicket" }, // 940506361
		{ &Z_Construct_UFunction_UUser_GetAvailableVoice, "GetAvailableVoice" }, // 1726850390
		{ &Z_Construct_UFunction_UUser_GetEncryptedAppTicket, "GetEncryptedAppTicket" }, // 3699174227
		{ &Z_Construct_UFunction_UUser_GetGameBadgeLevel, "GetGameBadgeLevel" }, // 1945453739
		{ &Z_Construct_UFunction_UUser_GetPlayerSteamLevel, "GetPlayerSteamLevel" }, // 2864033078
		{ &Z_Construct_UFunction_UUser_GetSteamID, "GetSteamID" }, // 3338977829
		{ &Z_Construct_UFunction_UUser_GetSteamID_Pure, "GetSteamID_Pure" }, // 2865686645
		{ &Z_Construct_UFunction_UUser_GetVoice, "GetVoice" }, // 2158412909
		{ &Z_Construct_UFunction_UUser_GetVoiceOptimalSampleRate, "GetVoiceOptimalSampleRate" }, // 3567384565
		{ &Z_Construct_UFunction_UUser_RequestEncryptedAppTicket, "RequestEncryptedAppTicket" }, // 2035314078
		{ &Z_Construct_UFunction_UUser_RequestStoreAuthURL, "RequestStoreAuthURL" }, // 2706727424
		{ &Z_Construct_UFunction_UUser_StartVoiceRecording, "StartVoiceRecording" }, // 2838369411
		{ &Z_Construct_UFunction_UUser_StopVoiceRecording, "StopVoiceRecording" }, // 2459472404
		{ &Z_Construct_UFunction_UUser_UserHasLicenseForApp, "UserHasLicenseForApp" }, // 3310658010
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUser_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SteamUser/SteamUser.h" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUser_Statics::NewProp_ClientGameServerDeny_MetaData[] = {
		{ "Category", "SteamCore|User|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUser_Statics::NewProp_ClientGameServerDeny = { "ClientGameServerDeny", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUser, ClientGameServerDeny), Z_Construct_UDelegateFunction_SteamCore_OnClientGameServerDeny__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUser_Statics::NewProp_ClientGameServerDeny_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUser_Statics::NewProp_ClientGameServerDeny_MetaData)) }; // 343378018
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUser_Statics::NewProp_GameWebCallback_MetaData[] = {
		{ "Category", "SteamCore|User|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUser_Statics::NewProp_GameWebCallback = { "GameWebCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUser, GameWebCallback), Z_Construct_UDelegateFunction_SteamCore_OnGameWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUser_Statics::NewProp_GameWebCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUser_Statics::NewProp_GameWebCallback_MetaData)) }; // 278276202
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUser_Statics::NewProp_GetAuthSessionTicketResponse_MetaData[] = {
		{ "Category", "SteamCore|User|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUser_Statics::NewProp_GetAuthSessionTicketResponse = { "GetAuthSessionTicketResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUser, GetAuthSessionTicketResponse), Z_Construct_UDelegateFunction_SteamCore_OnGetAuthSessionTicketResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUser_Statics::NewProp_GetAuthSessionTicketResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUser_Statics::NewProp_GetAuthSessionTicketResponse_MetaData)) }; // 3506849865
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUser_Statics::NewProp_IpcFailure_MetaData[] = {
		{ "Category", "SteamCore|User|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUser_Statics::NewProp_IpcFailure = { "IpcFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUser, IpcFailure), Z_Construct_UDelegateFunction_SteamCore_OnIPCFailure__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUser_Statics::NewProp_IpcFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUser_Statics::NewProp_IpcFailure_MetaData)) }; // 1799803722
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUser_Statics::NewProp_LicensesUpdated_MetaData[] = {
		{ "Category", "SteamCore|User|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUser_Statics::NewProp_LicensesUpdated = { "LicensesUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUser, LicensesUpdated), Z_Construct_UDelegateFunction_SteamCore_OnLicensesUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUser_Statics::NewProp_LicensesUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUser_Statics::NewProp_LicensesUpdated_MetaData)) }; // 2462648289
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUser_Statics::NewProp_MicroTxnAuthorizationResponse_MetaData[] = {
		{ "Category", "SteamCore|User|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUser_Statics::NewProp_MicroTxnAuthorizationResponse = { "MicroTxnAuthorizationResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUser, MicroTxnAuthorizationResponse), Z_Construct_UDelegateFunction_SteamCore_OnMicroTxnAuthorizationResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUser_Statics::NewProp_MicroTxnAuthorizationResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUser_Statics::NewProp_MicroTxnAuthorizationResponse_MetaData)) }; // 1860894842
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUser_Statics::NewProp_SteamServerConnectFailure_MetaData[] = {
		{ "Category", "SteamCore|User|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUser_Statics::NewProp_SteamServerConnectFailure = { "SteamServerConnectFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUser, SteamServerConnectFailure), Z_Construct_UDelegateFunction_SteamCore_OnSteamServerConnectFailure__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUser_Statics::NewProp_SteamServerConnectFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUser_Statics::NewProp_SteamServerConnectFailure_MetaData)) }; // 2265215002
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUser_Statics::NewProp_SteamServersConnected_MetaData[] = {
		{ "Category", "SteamCore|User|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUser_Statics::NewProp_SteamServersConnected = { "SteamServersConnected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUser, SteamServersConnected), Z_Construct_UDelegateFunction_SteamCore_OnSteamServersConnected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUser_Statics::NewProp_SteamServersConnected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUser_Statics::NewProp_SteamServersConnected_MetaData)) }; // 3413855025
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUser_Statics::NewProp_SteamServersDisconnected_MetaData[] = {
		{ "Category", "SteamCore|User|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUser_Statics::NewProp_SteamServersDisconnected = { "SteamServersDisconnected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUser, SteamServersDisconnected), Z_Construct_UDelegateFunction_SteamCore_OnSteamServersDisconnected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUser_Statics::NewProp_SteamServersDisconnected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUser_Statics::NewProp_SteamServersDisconnected_MetaData)) }; // 3731413581
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUser_Statics::NewProp_ValidateAuthTicketResponse_MetaData[] = {
		{ "Category", "SteamCore|User|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUser_Statics::NewProp_ValidateAuthTicketResponse = { "ValidateAuthTicketResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUser, ValidateAuthTicketResponse), Z_Construct_UDelegateFunction_SteamCore_OnValidateAuthTicketResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUser_Statics::NewProp_ValidateAuthTicketResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUser_Statics::NewProp_ValidateAuthTicketResponse_MetaData)) }; // 2601347864
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUser_Statics::NewProp_EncryptedAppTicketResponse_MetaData[] = {
		{ "Category", "SteamCore|User|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUser_Statics::NewProp_EncryptedAppTicketResponse = { "EncryptedAppTicketResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUser, EncryptedAppTicketResponse), Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicketResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUser_Statics::NewProp_EncryptedAppTicketResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUser_Statics::NewProp_EncryptedAppTicketResponse_MetaData)) }; // 1714487533
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUser_Statics::NewProp_ClientGameServerDeny,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUser_Statics::NewProp_GameWebCallback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUser_Statics::NewProp_GetAuthSessionTicketResponse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUser_Statics::NewProp_IpcFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUser_Statics::NewProp_LicensesUpdated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUser_Statics::NewProp_MicroTxnAuthorizationResponse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUser_Statics::NewProp_SteamServerConnectFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUser_Statics::NewProp_SteamServersConnected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUser_Statics::NewProp_SteamServersDisconnected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUser_Statics::NewProp_ValidateAuthTicketResponse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUser_Statics::NewProp_EncryptedAppTicketResponse,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUser>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUser_Statics::ClassParams = {
		&UUser::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUser_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUser_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUser_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUser()
	{
		if (!Z_Registration_Info_UClass_UUser.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUser.OuterSingleton, Z_Construct_UClass_UUser_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUser.OuterSingleton;
	}
	template<> STEAMCORE_API UClass* StaticClass<UUser>()
	{
		return UUser::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUser);
	UUser::~UUser() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUser_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUser_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUser, UUser::StaticClass, TEXT("UUser"), &Z_Registration_Info_UClass_UUser, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUser), 3560943948U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUser_h_918465679(TEXT("/Script/SteamCore"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUser_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUser_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
