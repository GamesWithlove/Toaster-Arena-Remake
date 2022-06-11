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
}

void USteamGameServer::Deinitialize()
{
	OnGSPolicyResponseCallback.Unregister();
	OnGSClientGroupStatusCallback.Unregister();
	OnGSValidateAuthTicketResponseCallback.Unregister();
	OnGSClientApproveCallback.Unregister();
	OnGSClientDenyCallback.Unregister();

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

	if (SteamGameServer())
	{
		FOnlineAsyncTaskSteamCoreGameServerAssociateWithClan* Task = new FOnlineAsyncTaskSteamCoreGameServerAssociateWithClan(this, Callback, SteamIDClan);
		QueueAsyncTask(Task);
	}
}

ESteamBeginAuthSessionResult USteamGameServer::BeginAuthSession(TArray<uint8> Ticket, FSteamID SteamID)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

	ESteamBeginAuthSessionResult Result = ESteamBeginAuthSessionResult::InvalidTicket;

	if (SteamGameServer())
	{
		Result = static_cast<ESteamBeginAuthSessionResult>(SteamGameServer()->BeginAuthSession(Ticket.GetData(), Ticket.Num(), SteamID));
	}

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

	if (SteamGameServer())
	{
		bResult = SteamGameServer()->BLoggedOn();
	}

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

	if (SteamGameServer())
	{
		bResult = SteamGameServer()->BSecure();
	}

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

	if (SteamGameServer())
	{
		bResult = SteamGameServer()->BUpdateUserData(SteamIDUser, TCHAR_TO_UTF8(*PlayerName), Score);
	}

	return bResult;
}

void USteamGameServer::CancelAuthTicket(FSteamTicketHandle TicketHandle)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

	if (SteamGameServer())
	{
		SteamGameServer()->CancelAuthTicket(TicketHandle);
	}
}

void USteamGameServer::ClearAllKeyValues()
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

	if (SteamGameServer())
	{
		SteamGameServer()->ClearAllKeyValues();
	}
}

void USteamGameServer::ComputeNewPlayerCompatibility(const FOnComputeNewPlayerCompatibility& Callback, FSteamID SteamIDNewPlayer)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

	if (SteamGameServer())
	{
		FOnlineAsyncTaskSteamCoreGameServerComputeNewPlayerCompatibility* Task = new FOnlineAsyncTaskSteamCoreGameServerComputeNewPlayerCompatibility(this, Callback, SteamIDNewPlayer);
		QueueAsyncTask(Task);
	}
}

FSteamID USteamGameServer::CreateUnauthenticatedUserConnection()
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

	FSteamID Result;

	if (SteamGameServer())
	{
		Result = SteamGameServer()->CreateUnauthenticatedUserConnection();
	}

	return Result;
}

void USteamGameServer::EnableHeartbeats(bool bActive)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

	if (SteamGameServer())
	{
		SteamGameServer()->EnableHeartbeats(bActive);
	}
}

void USteamGameServer::EndAuthSession(FSteamID SteamID)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

	if (SteamGameServer())
	{
		SteamGameServer()->EndAuthSession(SteamID);
	}
}

void USteamGameServer::ForceHeartbeat()
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

	if (SteamGameServer())
	{
		SteamGameServer()->ForceHeartbeat();
	}
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

	if (SteamGameServer())
	{
		uint32 TicketSize = 0;
		TicketHandle = SteamGameServer()->GetAuthSessionTicket(Ticket.GetData(), 8192, &TicketSize);
		Ticket.SetNum(TicketSize);
	}

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

	if (SteamGameServer())
	{
#if STEAM_VERSION > 146
		Result = FIPv4Address(SteamGameServer()->GetPublicIP().m_unIPv4).ToString();
#else
		Result = FIPv4Address(SteamGameServer()->GetPublicIP()).ToString();
#endif
	}

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

	if (SteamGameServer())
	{
		Result = FSteamID(SteamGameServer()->GetSteamID().ConvertToUint64());
	}

	return Result;
}

void USteamGameServer::LogOff()
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

	if (SteamGameServer())
	{
		SteamGameServer()->LogOff();
	}
}

void USteamGameServer::LogOn(FString Token)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

	if (SteamGameServer())
	{
		SteamGameServer()->LogOn(TCHAR_TO_UTF8(*Token));
	}
}

void USteamGameServer::LogOnAnonymous()
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

	if (SteamGameServer())
	{
		SteamGameServer()->LogOnAnonymous();
	}
}

bool USteamGameServer::RequestUserGroupStatus(FSteamID SteamIDUser, FSteamID SteamIDGroup)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

	bool bResult = false;

	if (SteamGameServer())
	{
		bResult = SteamGameServer()->RequestUserGroupStatus(SteamIDUser, SteamIDGroup);
	}

	return bResult;
}

void USteamGameServer::SetBotPlayerCount(int32 Botplayers)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

	if (SteamGameServer())
	{
		SteamGameServer()->SetBotPlayerCount(Botplayers);
	}
}

void USteamGameServer::SetDedicatedServer(bool bDedicated)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

	if (SteamGameServer())
	{
		SteamGameServer()->SetDedicatedServer(bDedicated);
	}
}

void USteamGameServer::SetGameData(FString GameData)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

	if (SteamGameServer())
	{
		SteamGameServer()->SetGameData(TCHAR_TO_UTF8(*GameData));
	}
}

void USteamGameServer::SetGameDescription(FString GameDescription)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

	if (SteamGameServer())
	{
		SteamGameServer()->SetGameDescription(TCHAR_TO_UTF8(*GameDescription));
	}
}

void USteamGameServer::SetGameTags(FString GameTags)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

	if (SteamGameServer())
	{
		SteamGameServer()->SetGameTags(TCHAR_TO_UTF8(*GameTags));
	}
}

void USteamGameServer::SetHeartbeatInterval(int32 HeartbeatInterval)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

	if (SteamGameServer())
	{
		SteamGameServer()->SetHeartbeatInterval(HeartbeatInterval);
	}
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

	if (SteamGameServer())
	{
		const FTCHARToUTF8 KeyChar(*Key);
		const FTCHARToUTF8 ValueChar(*Value);

		SteamGameServer()->SetKeyValue(KeyChar.Get(), ValueChar.Get());
	}
}

void USteamGameServer::SetMapName(FString MapName)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

	if (SteamGameServer())
	{
		SteamGameServer()->SetMapName(TCHAR_TO_UTF8(*MapName));
	}
}

void USteamGameServer::SetMaxPlayerCount(int32 PlayersMax)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

	if (SteamGameServer())
	{
		SteamGameServer()->SetMaxPlayerCount(PlayersMax);
	}
}

void USteamGameServer::SetModDir(FString ModDir)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

	if (SteamGameServer())
	{
		SteamGameServer()->SetModDir(TCHAR_TO_UTF8(*ModDir));
	}
}

void USteamGameServer::SetPasswordProtected(bool bPasswordProtected)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

	if (SteamGameServer())
	{
		SteamGameServer()->SetPasswordProtected(bPasswordProtected);
	}
}

void USteamGameServer::SetProduct(FString Product)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

	if (SteamGameServer())
	{
		SteamGameServer()->SetProduct(TCHAR_TO_UTF8(*Product));
	}
}

void USteamGameServer::SetRegion(FString Region)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

	if (SteamGameServer())
	{
		SteamGameServer()->SetRegion(TCHAR_TO_UTF8(*Region));
	}
}

void USteamGameServer::SetServerName(FString ServerName)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

	if (SteamGameServer())
	{
		SteamGameServer()->SetServerName(TCHAR_TO_UTF8(*ServerName));
	}
}

void USteamGameServer::SetSpectatorPort(int32 SpectatorPort)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

	if (SteamGameServer())
	{
		SteamGameServer()->SetSpectatorPort(SpectatorPort);
	}
}

void USteamGameServer::SetSpectatorServerName(FString SpectatorServerName)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

	if (SteamGameServer())
	{
		SteamGameServer()->SetSpectatorServerName(TCHAR_TO_UTF8(*SpectatorServerName));
	}
}

ESteamUserHasLicenseForAppResult USteamGameServer::UserHasLicenseForApp(FSteamID SteamID, int32 AppID)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

	ESteamUserHasLicenseForAppResult Result = ESteamUserHasLicenseForAppResult::DoesNotHaveLicense;

	if (SteamGameServer())
	{
		Result = static_cast<ESteamUserHasLicenseForAppResult>(SteamGameServer()->UserHasLicenseForApp(SteamID, AppID));
	}

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

	if (SteamGameServer())
	{
		bResult = SteamGameServer()->WasRestartRequested();
	}

	return bResult;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

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
