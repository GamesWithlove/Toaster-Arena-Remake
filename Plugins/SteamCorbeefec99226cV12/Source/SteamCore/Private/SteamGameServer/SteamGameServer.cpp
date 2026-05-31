/**
* Copyright (C) 2017-2025 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamGameServer
*/

#include "SteamGameServer/SteamGameServer.h"
#include "SteamGameServer/SteamGameServerAsyncTasks.h"
#include "SteamCorePluginPrivatePCH.h"

void USteamGameServer::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
#if WITH_STEAMCORE
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
#if WITH_STEAMCORE
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
		LogSteamCoreError("This function can only be called on a Dedicated Server!");
	}

	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
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
		LogSteamCoreError("This function can only be called on a Dedicated Server!");
	}

	LogSteamCoreVerbose("");

	ESteamBeginAuthSessionResult Result = ESteamBeginAuthSessionResult::InvalidTicket;

#if WITH_STEAMCORE
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
		LogSteamCoreError("This function can only be called on a Dedicated Server!");
	}

	if (!IsRunningDedicatedServer())
	{
		LogSteamCoreError("This function can only be called on a Dedicated Server!");
	}

	LogSteamCoreVeryVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
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
		LogSteamCoreError("This function can only be called on a Dedicated Server!");
	}

	LogSteamCoreVeryVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
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
		LogSteamCoreError("This function can only be called on a Dedicated Server!");
	}

	LogSteamCoreVeryVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
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
		LogSteamCoreError("This function can only be called on a Dedicated Server!");
	}

	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
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
		LogSteamCoreError("This function can only be called on a Dedicated Server!");
	}

	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
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
		LogSteamCoreError("This function can only be called on a Dedicated Server!");
	}

	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
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
		LogSteamCoreError("This function can only be called on a Dedicated Server!");
	}

	LogSteamCoreVerbose("");

	FSteamID Result;

#if WITH_STEAMCORE
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
		LogSteamCoreError("This function can only be called on a Dedicated Server!");
	}

	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
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
		LogSteamCoreError("This function can only be called on a Dedicated Server!");
	}

	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
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
		LogSteamCoreError("This function can only be called on a Dedicated Server!");
	}

	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
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
		LogSteamCoreError("This function can only be called on a Dedicated Server!");
	}

	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
#if UE_VERSION_NEWER_THAN(5,0,3)
	LogSteamCoreWarning("ForceHeartbeat is deprecated and should not be used");
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
		LogSteamCoreError("This function can only be called on a Dedicated Server!");
	}

	LogSteamCoreVeryVerbose("");

	FSteamTicketHandle TicketHandle;
	Ticket.Empty();

#if WITH_STEAMCORE
#if UE_VERSION_OLDER_THAN(5,4,0)
	if (SteamGameServer())
	{
		uint32 TicketSize = 0;
		TicketHandle = SteamGameServer()->GetAuthSessionTicket(Ticket.GetData(), 8192, &TicketSize);
		Ticket.SetNum(TicketSize);
	}
#else
	if (SteamGameServer())
	{
		uint32 TicketSize = 0;
		TicketHandle = SteamGameServer()->GetAuthSessionTicket(Ticket.GetData(), 8192, &TicketSize, nullptr);
		Ticket.SetNum(TicketSize);
	}
#endif
#endif
	
	return TicketHandle;
}

FString USteamGameServer::GetServerPublicIP()
{
	if (!IsRunningDedicatedServer())
	{
		LogSteamCoreError("This function can only be called on a Dedicated Server!");
	}

	LogSteamCoreVeryVerbose("");

	FString Result = FString("INVALID");

#if WITH_STEAMCORE
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
		LogSteamCoreError("This function can only be called on a Dedicated Server!");
	}

	LogSteamCoreVeryVerbose("");

	FSteamID Result;

#if WITH_STEAMCORE
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
		LogSteamCoreError("This function can only be called on a Dedicated Server!");
	}

	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
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
		LogSteamCoreError("This function can only be called on a Dedicated Server!");
	}

	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
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
		LogSteamCoreError("This function can only be called on a Dedicated Server!");
	}

	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
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
		LogSteamCoreError("This function can only be called on a Dedicated Server!");
	}

	LogSteamCoreVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
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
		LogSteamCoreError("This function can only be called on a Dedicated Server!");
	}

	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
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
		LogSteamCoreError("This function can only be called on a Dedicated Server!");
	}

	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
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
		LogSteamCoreError("This function can only be called on a Dedicated Server!");
	}

	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
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
		LogSteamCoreError("This function can only be called on a Dedicated Server!");
	}

	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
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
		LogSteamCoreError("This function can only be called on a Dedicated Server!");
	}

	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
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
		LogSteamCoreError("This function can only be called on a Dedicated Server!");
	}

	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
#if UE_VERSION_NEWER_THAN(5,0,3)
	LogSteamCoreWarning("SetHeartbeatInterval is deprecated and should not be used");
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
		LogSteamCoreError("This function can only be called on a Dedicated Server!");
	}

	LogSteamCoreVerbose("");

	if (Key.Len() == 0 || Value.Len() == 0)
	{
		return;
	}

#if WITH_STEAMCORE
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
		LogSteamCoreError("This function can only be called on a Dedicated Server!");
	}

	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
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
		LogSteamCoreError("This function can only be called on a Dedicated Server!");
	}

	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
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
		LogSteamCoreError("This function can only be called on a Dedicated Server!");
	}

	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
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
		LogSteamCoreError("This function can only be called on a Dedicated Server!");
	}

	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
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
		LogSteamCoreError("This function can only be called on a Dedicated Server!");
	}

	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
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
		LogSteamCoreError("This function can only be called on a Dedicated Server!");
	}

	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
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
		LogSteamCoreError("This function can only be called on a Dedicated Server!");
	}

	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
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
		LogSteamCoreError("This function can only be called on a Dedicated Server!");
	}

	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
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
		LogSteamCoreError("This function can only be called on a Dedicated Server!");
	}

	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
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
		LogSteamCoreError("This function can only be called on a Dedicated Server!");
	}

	LogSteamCoreVerbose("");

	ESteamUserHasLicenseForAppResult Result = ESteamUserHasLicenseForAppResult::DoesNotHaveLicense;

#if WITH_STEAMCORE
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
		LogSteamCoreError("This function can only be called on a Dedicated Server!");
	}

	LogSteamCoreVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
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

#if WITH_STEAMCORE
void USteamGameServer::OnGSPolicyResponse(GSPolicyResponse_t* pParam)
{
	if (!IsRunningDedicatedServer())
	{
		LogSteamCoreError("This function can only be called on a Dedicated Server!");
	}

	LogSteamCoreVerbose("");

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
		LogSteamCoreError("This function can only be called on a Dedicated Server!");
	}

	LogSteamCoreVerbose("");

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
		LogSteamCoreError("This function can only be called on a Dedicated Server!");
	}

	LogSteamCoreVerbose("");

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
		LogSteamCoreError("This function can only be called on a Dedicated Server!");
	}

	LogSteamCoreVerbose("");

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
		LogSteamCoreError("This function can only be called on a Dedicated Server!");
	}

	LogSteamCoreVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		GSClientDeny.Broadcast(Data);
	});
}
#endif