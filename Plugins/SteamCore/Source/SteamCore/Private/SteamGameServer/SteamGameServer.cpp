/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamGameServer
*/

#include "SteamGameServer/SteamGameServer.h"
#include "SteamGameServer/SteamGameServerAsyncTasks.h"
#include "SteamCorePluginPrivatePCH.h"

void USteamGameServer::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
#if ENABLE_STEAMCORE
	OnGSPolicyResponseCallback.Register(this, &USteamGameServer::OnGSPolicyResponse);
	OnGSClientGroupStatusCallback.Register(this, &USteamGameServer::OnGSClientGroupStatus);
	OnGSValidateAuthTicketResponseCallback.Register(this, &USteamGameServer::OnGSValidateAuthTicketResponse);
	OnGSClientApproveCallback.Register(this, &USteamGameServer::OnGSClientApprove);
	OnGSClientDenyCallback.Register(this, &USteamGameServer::OnGSClientDeny);

	if (IsRunningDedicatedServer())
	{
		OnGSPolicyResponseCallback.SetGameserverFlag();
		OnGSClientGroupStatusCallback.SetGameserverFlag();
		OnGSValidateAuthTicketResponseCallback.SetGameserverFlag();
		OnGSClientApproveCallback.SetGameserverFlag();
		OnGSClientDenyCallback.SetGameserverFlag();
	}
#endif
}

void USteamGameServer::Deinitialize()
{
#if ENABLE_STEAMCORE
	OnGSPolicyResponseCallback.Unregister();
	OnGSClientGroupStatusCallback.Unregister();
	OnGSValidateAuthTicketResponseCallback.Unregister();
	OnGSClientApproveCallback.Unregister();
	OnGSClientDenyCallback.Unregister();
#endif
	Super::Deinitialize();
}

bool USteamGameServer::ShouldCreateSubsystem(UObject* Outer) const
{
	if (IsRunningDedicatedServer())
	{
		return Super::ShouldCreateSubsystem(Outer);
	}

	return false;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void USteamGameServer::AssociateWithClan(const FOnAssociateWithClan& Callback, FSteamID SteamIDClan)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamGameServer())
	{
		FOnlineAsyncTaskSteamCoreGameServerAssociateWithClan* Task = new FOnlineAsyncTaskSteamCoreGameServerAssociateWithClan(this, Callback, SteamIDClan);
		QueueAsyncTask(Task);
	}
#endif
}

ESteamBeginAuthSessionResult USteamGameServer::BeginAuthSession(TArray<uint8> Ticket, FSteamID SteamID)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

	ESteamBeginAuthSessionResult Result = ESteamBeginAuthSessionResult::InvalidTicket;

#if ENABLE_STEAMCORE
	if (SteamGameServer())
	{
		Result = static_cast<ESteamBeginAuthSessionResult>(SteamGameServer()->BeginAuthSession(Ticket.GetData(), Ticket.Num(), SteamID));
	}
#endif

	return Result;
}

bool USteamGameServer::BLoggedOn()
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVeryVerbose("");

	bool bResult = false;

#if ENABLE_STEAMCORE
	if (SteamGameServer())
	{
		bResult = SteamGameServer()->BLoggedOn();
	}
#endif

	return bResult;
}

bool USteamGameServer::BSecure()
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVeryVerbose("");

	bool bResult = false;

#if ENABLE_STEAMCORE
	if (SteamGameServer())
	{
		bResult = SteamGameServer()->BSecure();
	}
#endif
	
	return bResult;
}

bool USteamGameServer::BUpdateUserData(FSteamID SteamIDUser, FString PlayerName, int32 Score)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVeryVerbose("");

	bool bResult = false;

#if ENABLE_STEAMCORE
	if (SteamGameServer())
	{
		bResult = SteamGameServer()->BUpdateUserData(SteamIDUser, TCHAR_TO_UTF8(*PlayerName), Score);
	}
#endif
	
	return bResult;
}

void USteamGameServer::CancelAuthTicket(FSteamTicketHandle TicketHandle)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamGameServer())
	{
		SteamGameServer()->CancelAuthTicket(TicketHandle);
	}
#endif
}

void USteamGameServer::ClearAllKeyValues()
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamGameServer())
	{
		SteamGameServer()->ClearAllKeyValues();
	}
#endif
}

void USteamGameServer::ComputeNewPlayerCompatibility(const FOnComputeNewPlayerCompatibility& Callback, FSteamID SteamIDNewPlayer)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamGameServer())
	{
		FOnlineAsyncTaskSteamCoreGameServerComputeNewPlayerCompatibility* Task = new FOnlineAsyncTaskSteamCoreGameServerComputeNewPlayerCompatibility(this, Callback, SteamIDNewPlayer);
		QueueAsyncTask(Task);
	}
#endif
}

FSteamID USteamGameServer::CreateUnauthenticatedUserConnection()
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

	FSteamID Result;

#if ENABLE_STEAMCORE
	if (SteamGameServer())
	{
		Result = SteamGameServer()->CreateUnauthenticatedUserConnection();
	}
#endif
	
	return Result;
}

void USteamGameServer::EnableHeartbeats(bool bActive)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamGameServer())
	{
#if UE_VERSION_NEWER_THAN(5,0,3)
		SteamGameServer()->SetAdvertiseServerActive(bActive);
#else
		SteamGameServer()->EnableHeartbeats(bActive);
#endif
	}
#endif
}

void USteamGameServer::SetAdvertiseServerActive(bool bActive)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamGameServer())
	{
#if UE_VERSION_NEWER_THAN(5,0,3)
		SteamGameServer()->SetAdvertiseServerActive(bActive);
#else
		SteamGameServer()->EnableHeartbeats(bActive);
#endif
	}
#endif
}

void USteamGameServer::EndAuthSession(FSteamID SteamID)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamGameServer())
	{
		SteamGameServer()->EndAuthSession(SteamID);
	}
#endif
}

void USteamGameServer::ForceHeartbeat()
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

#if ENABLE_STEAMCORE
#if UE_VERSION_NEWER_THAN(5,0,3)
	LogWarning("ForceHeartbeat is deprecated and should not be used");
#else
	if (SteamGameServer())
	{
		SteamGameServer()->ForceHeartbeat();
	}
#endif
#endif
}

FSteamTicketHandle USteamGameServer::GetAuthSessionTicket(TArray<uint8>& Ticket)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVeryVerbose("");

	FSteamTicketHandle TicketHandle;
	Ticket.Empty();

#if ENABLE_STEAMCORE
	if (SteamGameServer())
	{
		uint32 TicketSize = 0;
		TicketHandle = SteamGameServer()->GetAuthSessionTicket(Ticket.GetData(), 8192, &TicketSize);
		Ticket.SetNum(TicketSize);
	}
#endif
	
	return TicketHandle;
}

FString USteamGameServer::GetServerPublicIP()
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVeryVerbose("");

	FString Result = FString("INVALID");

#if ENABLE_STEAMCORE
	if (SteamGameServer())
	{
#if STEAM_VERSION > 146
		Result = FIPv4Address(SteamGameServer()->GetPublicIP().m_unIPv4).ToString();
#else
		Result = FIPv4Address(SteamGameServer()->GetPublicIP()).ToString();
#endif
	}
#endif
	
	return Result;
}

FSteamID USteamGameServer::GetServerSteamID()
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVeryVerbose("");

	FSteamID Result;

#if ENABLE_STEAMCORE
	if (SteamGameServer())
	{
		Result = FSteamID(SteamGameServer()->GetSteamID().ConvertToUint64());
	}
#endif
	
	return Result;
}

void USteamGameServer::LogOff()
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamGameServer())
	{
		SteamGameServer()->LogOff();
	}
#endif
}

void USteamGameServer::LogOn(FString Token)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamGameServer())
	{
		SteamGameServer()->LogOn(TCHAR_TO_UTF8(*Token));
	}
#endif
}

void USteamGameServer::LogOnAnonymous()
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamGameServer())
	{
		SteamGameServer()->LogOnAnonymous();
	}
#endif
}

bool USteamGameServer::RequestUserGroupStatus(FSteamID SteamIDUser, FSteamID SteamIDGroup)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

	bool bResult = false;

#if ENABLE_STEAMCORE
	if (SteamGameServer())
	{
		bResult = SteamGameServer()->RequestUserGroupStatus(SteamIDUser, SteamIDGroup);
	}
#endif
	
	return bResult;
}

void USteamGameServer::SetBotPlayerCount(int32 Botplayers)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamGameServer())
	{
		SteamGameServer()->SetBotPlayerCount(Botplayers);
	}
#endif
}

void USteamGameServer::SetDedicatedServer(bool bDedicated)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamGameServer())
	{
		SteamGameServer()->SetDedicatedServer(bDedicated);
	}
#endif
}

void USteamGameServer::SetGameData(FString GameData)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamGameServer())
	{
		SteamGameServer()->SetGameData(TCHAR_TO_UTF8(*GameData));
	}
#endif
}

void USteamGameServer::SetGameDescription(FString GameDescription)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamGameServer())
	{
		SteamGameServer()->SetGameDescription(TCHAR_TO_UTF8(*GameDescription));
	}
#endif
}

void USteamGameServer::SetGameTags(FString GameTags)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamGameServer())
	{
		SteamGameServer()->SetGameTags(TCHAR_TO_UTF8(*GameTags));
	}
#endif
}

void USteamGameServer::SetHeartbeatInterval(int32 HeartbeatInterval)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

#if ENABLE_STEAMCORE
#if UE_VERSION_NEWER_THAN(5,0,3)
	LogWarning("SetHeartbeatInterval is deprecated and should not be used");
#else
	if (SteamGameServer())
	{
		SteamGameServer()->SetHeartbeatInterval(HeartbeatInterval);
	}
#endif
#endif
}

void USteamGameServer::SetKeyValue(FString Key, FString Value)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

	if (Key.Len() == 0 || Value.Len() == 0)
	{
		return;
	}

#if ENABLE_STEAMCORE
	if (SteamGameServer())
	{
		const FTCHARToUTF8 KeyChar(*Key);
		const FTCHARToUTF8 ValueChar(*Value);

		SteamGameServer()->SetKeyValue(KeyChar.Get(), ValueChar.Get());
	}
#endif
}

void USteamGameServer::SetMapName(FString MapName)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamGameServer())
	{
		SteamGameServer()->SetMapName(TCHAR_TO_UTF8(*MapName));
	}
#endif
}

void USteamGameServer::SetMaxPlayerCount(int32 PlayersMax)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamGameServer())
	{
		SteamGameServer()->SetMaxPlayerCount(PlayersMax);
	}
#endif
}

void USteamGameServer::SetModDir(FString ModDir)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamGameServer())
	{
		SteamGameServer()->SetModDir(TCHAR_TO_UTF8(*ModDir));
	}
#endif
}

void USteamGameServer::SetPasswordProtected(bool bPasswordProtected)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamGameServer())
	{
		SteamGameServer()->SetPasswordProtected(bPasswordProtected);
	}
#endif
}

void USteamGameServer::SetProduct(FString Product)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamGameServer())
	{
		SteamGameServer()->SetProduct(TCHAR_TO_UTF8(*Product));
	}
#endif
}

void USteamGameServer::SetRegion(FString Region)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamGameServer())
	{
		SteamGameServer()->SetRegion(TCHAR_TO_UTF8(*Region));
	}
#endif
}

void USteamGameServer::SetServerName(FString ServerName)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamGameServer())
	{
		SteamGameServer()->SetServerName(TCHAR_TO_UTF8(*ServerName));
	}
#endif
}

void USteamGameServer::SetSpectatorPort(int32 SpectatorPort)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamGameServer())
	{
		SteamGameServer()->SetSpectatorPort(SpectatorPort);
	}
#endif
}

void USteamGameServer::SetSpectatorServerName(FString SpectatorServerName)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamGameServer())
	{
		SteamGameServer()->SetSpectatorServerName(TCHAR_TO_UTF8(*SpectatorServerName));
	}
#endif
}

ESteamUserHasLicenseForAppResult USteamGameServer::UserHasLicenseForApp(FSteamID SteamID, int32 AppID)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

	ESteamUserHasLicenseForAppResult Result = ESteamUserHasLicenseForAppResult::DoesNotHaveLicense;

#if ENABLE_STEAMCORE
	if (SteamGameServer())
	{
		Result = static_cast<ESteamUserHasLicenseForAppResult>(SteamGameServer()->UserHasLicenseForApp(SteamID, AppID));
	}
#endif
	
	return Result;
}

bool USteamGameServer::WasRestartRequested()
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

	bool bResult = false;

#if ENABLE_STEAMCORE
	if (SteamGameServer())
	{
		bResult = SteamGameServer()->WasRestartRequested();
	}
#endif
	
	return bResult;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

#if ENABLE_STEAMCORE
void USteamGameServer::OnGSPolicyResponse(GSPolicyResponse_t* pParam)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		GSPolicyResponse.Broadcast(Data);
	});
}

void USteamGameServer::OnGSClientGroupStatus(GSClientGroupStatus_t* pParam)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		GSClientGroupStatus.Broadcast(Data);
	});
}

void USteamGameServer::OnGSValidateAuthTicketResponse(ValidateAuthTicketResponse_t* pParam)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		GSValidateAuthTicketResponse.Broadcast(Data);
	});
}

void USteamGameServer::OnGSClientApprove(GSClientApprove_t* pParam)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		GSClientApprove.Broadcast(Data);
	});
}

void USteamGameServer::OnGSClientDeny(GSClientDeny_t* pParam)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		GSClientDeny.Broadcast(Data);
	});
}
#endif