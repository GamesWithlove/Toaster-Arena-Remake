/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamUser
*/

#include "SteamUser/SteamUser.h"
#include "SteamUser/SteamUserAsyncTasks.h"
#include "SteamCorePluginPrivatePCH.h"

void UUser::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

#if ENABLE_STEAMCORE
	OnClientGameServerDenyCallbackCallback.Register(this, &UUser::OnClientGameServerDeny);
	OnGameWebCallbackCallback.Register(this, &UUser::OnGameWebCallback);
	OnGetAuthSessionTicketResponseCallback.Register(this, &UUser::OnGetAuthSessionTicketResponse);
	OnIPCFailureCallback.Register(this, &UUser::OnIPCFailure);
	OnLicensesUpdatedCallback.Register(this, &UUser::OnLicensesUpdated);
	OnMicroTxnAuthorizationResponseCallback.Register(this, &UUser::OnMicroTxnAuthorizationResponse);
	OnSteamServersConnectedCallback.Register(this, &UUser::OnSteamServersConnected);
	OnSteamServerConnectFailureCallback.Register(this, &UUser::OnSteamServerConnectFailure);
	OnSteamServersDisconnectedCallback.Register(this, &UUser::OnSteamServersDisconnected);
	OnValidateAuthTicketResponseCallback.Register(this, &UUser::OnValidateAuthTicketResponse);
	OnEncryptedAppTicketResponseCallback.Register(this, &UUser::OnEncryptedAppTicketResponse);

	if (IsRunningDedicatedServer())
	{
		OnClientGameServerDenyCallbackCallback.SetGameserverFlag();
		OnGameWebCallbackCallback.SetGameserverFlag();
		OnGetAuthSessionTicketResponseCallback.SetGameserverFlag();
		OnIPCFailureCallback.SetGameserverFlag();
		OnLicensesUpdatedCallback.SetGameserverFlag();
		OnMicroTxnAuthorizationResponseCallback.SetGameserverFlag();
		OnSteamServersConnectedCallback.SetGameserverFlag();
		OnSteamServerConnectFailureCallback.SetGameserverFlag();
		OnSteamServersDisconnectedCallback.SetGameserverFlag();
		OnValidateAuthTicketResponseCallback.SetGameserverFlag();
		OnEncryptedAppTicketResponseCallback.SetGameserverFlag();
	}
#endif
}

void UUser::Deinitialize()
{
#if ENABLE_STEAMCORE
	OnClientGameServerDenyCallbackCallback.Unregister();
	OnGameWebCallbackCallback.Unregister();
	OnGetAuthSessionTicketResponseCallback.Unregister();
	OnIPCFailureCallback.Unregister();
	OnLicensesUpdatedCallback.Unregister();
	OnMicroTxnAuthorizationResponseCallback.Unregister();
	OnSteamServersConnectedCallback.Unregister();
	OnSteamServerConnectFailureCallback.Unregister();
	OnSteamServersDisconnectedCallback.Unregister();
	OnValidateAuthTicketResponseCallback.Unregister();
	OnEncryptedAppTicketResponseCallback.Unregister();
#endif

	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UUser::AdvertiseGame(FSteamID SteamIDGameServer, FString ServerIP, int32 ServerPort)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamUser())
	{
		FIPv4Address IP;
		FIPv4Address::Parse(ServerIP, IP);

		SteamUser()->AdvertiseGame(SteamIDGameServer, IP.Value, ServerPort);
	}
#endif
}

ESteamBeginAuthSessionResult UUser::BeginAuthSession(TArray<uint8> Ticket, FSteamID SteamID)
{
	LogVerbose("");

	ESteamBeginAuthSessionResult Result = ESteamBeginAuthSessionResult::InvalidTicket;

#if ENABLE_STEAMCORE
	if (SteamUser())
	{
		Result = static_cast<ESteamBeginAuthSessionResult>(SteamUser()->BeginAuthSession(Ticket.GetData(), Ticket.Num(), SteamID));
	}
#endif

	return Result;
}

bool UUser::BIsBehindNAT()
{
	LogVeryVerbose("");

	bool bResult = false;

#if ENABLE_STEAMCORE
	if (SteamUser())
	{
		bResult = SteamUser()->BIsBehindNAT();
	}
#endif

	return bResult;
}

bool UUser::BIsPhoneIdentifying()
{
	LogVeryVerbose("");

	bool bResult = false;

#if ENABLE_STEAMCORE
	if (SteamUser())
	{
		bResult = SteamUser()->BIsPhoneIdentifying();
	}
#endif

	return bResult;
}

bool UUser::BIsPhoneRequiringVerification()
{
	LogVeryVerbose("");

	bool bResult = false;

#if ENABLE_STEAMCORE
	if (SteamUser())
	{
		bResult = SteamUser()->BIsPhoneRequiringVerification();
	}
#endif

	return bResult;
}

bool UUser::BIsPhoneVerified()
{
	LogVeryVerbose("");

	bool bResult = false;

#if ENABLE_STEAMCORE
	if (SteamUser())
	{
		bResult = SteamUser()->BIsPhoneVerified();
	}
#endif

	return bResult;
}

bool UUser::BIsTwoFactorEnabled()
{
	LogVeryVerbose("");

	bool bResult = false;

#if ENABLE_STEAMCORE
	if (SteamUser())
	{
		bResult = SteamUser()->BIsTwoFactorEnabled();
	}
#endif

	return bResult;
}

bool UUser::BLoggedOn()
{
	LogVeryVerbose("");

	bool bResult = false;

#if ENABLE_STEAMCORE
	if (SteamUser())
	{
		bResult = SteamUser()->BLoggedOn();
	}
#endif

	return bResult;
}

void UUser::CancelAuthTicket(FSteamTicketHandle TicketHandle)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamUser())
	{
		SteamUser()->CancelAuthTicket(TicketHandle);
	}
#endif
}

ESteamVoiceResult UUser::DecompressVoice(const TArray<uint8>& CompressedBuffer, int32 DesiredSampleRate, TArray<uint8>& DestBuffer)
{
	LogVeryVerbose("");

	ESteamVoiceResult Result = ESteamVoiceResult::NotInitialized;
	DestBuffer.Empty();

#if ENABLE_STEAMCORE
	if (SteamUser())
	{
		uint32 BytesWritten = 0;
		DestBuffer.SetNum(1024 * 20);

		Result = static_cast<ESteamVoiceResult>(SteamUser()->DecompressVoice(CompressedBuffer.GetData(), CompressedBuffer.Num(), DestBuffer.GetData(), DestBuffer.Num(), &BytesWritten, DesiredSampleRate));

		if (Result == ESteamVoiceResult::BufferTooSmall)
		{
			DestBuffer.Empty();
			DestBuffer.SetNum(BytesWritten);

			Result = static_cast<ESteamVoiceResult>(SteamUser()->DecompressVoice(CompressedBuffer.GetData(), CompressedBuffer.Num(), DestBuffer.GetData(), DestBuffer.Num(), &BytesWritten, DesiredSampleRate));
		}

		DestBuffer.SetNum(BytesWritten);

		//LogVerbose("Bytes Written: %d, destBuffer: %d", BytesWritten, destBuffer.Num());
	}
#endif

	return Result;
}

void UUser::EndAuthSession(FSteamID SteamID)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamUser())
	{
		SteamUser()->EndAuthSession(SteamID);
	}
#endif
}

FSteamTicketHandle UUser::GetAuthSessionTicket(TArray<uint8>& OutTicket)
{
	LogVeryVerbose("");

	FSteamTicketHandle Result;
	OutTicket.Empty();

#if ENABLE_STEAMCORE
	if (SteamUser())
	{
		uint32 TicketSize = 0;
		OutTicket.SetNum(8192);
		Result = SteamUser()->GetAuthSessionTicket(OutTicket.GetData(), 8192, &TicketSize);

		OutTicket.SetNum(TicketSize);
	}
#endif

	return Result;
}

ESteamVoiceResult UUser::GetAvailableVoice(int32& OutCompressedBytes, int32& OutUncompressedBytes, int32 UncompressedVoiceDesiredSampleRate)
{
	LogVeryVerbose("");

	ESteamVoiceResult Result = ESteamVoiceResult::NotInitialized;
	uint32 CompressedBytes = 0;
	uint32 UncompressedBytes = 0;

#if ENABLE_STEAMCORE
	if (SteamUser())
	{
		Result = static_cast<ESteamVoiceResult>(SteamUser()->GetAvailableVoice(&CompressedBytes, &UncompressedBytes, UncompressedVoiceDesiredSampleRate));
	}

	OutCompressedBytes = CompressedBytes;
	OutUncompressedBytes = UncompressedBytes;
#endif

	return Result;
}

bool UUser::GetEncryptedAppTicket(TArray<uint8>& OutTicket)
{
	LogVeryVerbose("");

	bool bResult = false;
	OutTicket.Empty();

#if ENABLE_STEAMCORE
	if (SteamUser())
	{
		uint32 TicketSize = 0;
		OutTicket.SetNum(8192);
		bResult = SteamUser()->GetEncryptedAppTicket(OutTicket.GetData(), OutTicket.Num(), &TicketSize);
		OutTicket.SetNum(TicketSize);
	}
#endif

	return bResult;
}

int32 UUser::GetGameBadgeLevel(int32 Series, bool bFoil)
{
	LogVeryVerbose("");

	int32 Result = 0;

#if ENABLE_STEAMCORE
	if (SteamUser())
	{
		Result = SteamUser()->GetGameBadgeLevel(Series, bFoil);
	}
#endif

	return Result;
}

int32 UUser::GetPlayerSteamLevel()
{
	LogVeryVerbose("");

	int32 Result = 0;

#if ENABLE_STEAMCORE
	if (SteamUser())
	{
		Result = SteamUser()->GetPlayerSteamLevel();
	}
#endif

	return Result;
}

FSteamID UUser::GetSteamID()
{
	LogVeryVerbose("");

	FSteamID Result;

#if ENABLE_STEAMCORE
	if (SteamUser())
	{
		Result = FSteamID(SteamUser()->GetSteamID());
	}
#endif

	return Result;
}

ESteamVoiceResult UUser::GetVoice(TArray<uint8>& OutDestBuffer, int32& OutBytesWritten)
{
	LogVeryVerbose("");

	ESteamVoiceResult Result = ESteamVoiceResult::NotInitialized;
	OutDestBuffer.Empty();
	uint32 BytesWritten = 0;

#if ENABLE_STEAMCORE
	if (SteamUser())
	{
		// get the required buffer size
		uint32 AvailableVoiceBufferSize = 0;
		SteamUser()->GetAvailableVoice(&AvailableVoiceBufferSize);

		OutDestBuffer.SetNum(AvailableVoiceBufferSize);

		Result = static_cast<ESteamVoiceResult>(SteamUser()->GetVoice(true, OutDestBuffer.GetData(), AvailableVoiceBufferSize, &BytesWritten));
		OutDestBuffer.SetNum(BytesWritten);
	}

	OutBytesWritten = BytesWritten;
#endif

	return Result;
}

int32 UUser::GetVoiceOptimalSampleRate()
{
	LogVeryVerbose("");

	int32 Result = 0;

#if ENABLE_STEAMCORE
	if (SteamUser())
	{
		Result = SteamUser()->GetVoiceOptimalSampleRate();
	}
#endif

	return Result;
}

void UUser::RequestEncryptedAppTicket(const FOnRequestEncryptedAppTicket& Callback, TArray<uint8> DataToInclude)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamUser())
	{
		FOnlineAsyncTaskSteamCoreUserRequestEncryptedAppTicket* Task = new FOnlineAsyncTaskSteamCoreUserRequestEncryptedAppTicket(this, Callback, DataToInclude);
		QueueAsyncTask(Task);
	}
#endif
}

void UUser::RequestStoreAuthURL(const FOnStoreAuthURLResponse& Callback, FString RedirectURL)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamUser())
	{
		FOnlineAsyncTaskSteamCoreUserRequestStoreAuthURL* Task = new FOnlineAsyncTaskSteamCoreUserRequestStoreAuthURL(this, Callback, RedirectURL);
		QueueAsyncTask(Task);
	}
#endif
}

void UUser::StartVoiceRecording()
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamUser())
	{
		SteamUser()->StartVoiceRecording();
	}
#endif
}

void UUser::StopVoiceRecording()
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamUser())
	{
		SteamUser()->StopVoiceRecording();
	}
#endif
}

ESteamUserHasLicenseForAppResult UUser::UserHasLicenseForApp(FSteamID SteamID, int32 AppID)
{
	LogVerbose("");

	ESteamUserHasLicenseForAppResult Result = ESteamUserHasLicenseForAppResult::NoAuth;

#if ENABLE_STEAMCORE
	if (SteamUser())
	{
		Result = static_cast<ESteamUserHasLicenseForAppResult>(SteamUser()->UserHasLicenseForApp(SteamID, AppID));
	}
#endif

	return Result;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

#if ENABLE_STEAMCORE
void UUser::OnClientGameServerDeny(ClientGameServerDeny_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		ClientGameServerDeny.Broadcast(Data);
	});
}

void UUser::OnGameWebCallback(GameWebCallback_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		GameWebCallback.Broadcast(Data);
	});
}

void UUser::OnGetAuthSessionTicketResponse(GetAuthSessionTicketResponse_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		GetAuthSessionTicketResponse.Broadcast(Data);
	});
}

void UUser::OnIPCFailure(IPCFailure_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		IpcFailure.Broadcast(Data);
	});
}

void UUser::OnLicensesUpdated(LicensesUpdated_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		LicensesUpdated.Broadcast(Data);
	});
}

void UUser::OnMicroTxnAuthorizationResponse(MicroTxnAuthorizationResponse_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		MicroTxnAuthorizationResponse.Broadcast(Data);
	});
}

void UUser::OnSteamServersConnected(SteamServersConnected_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		SteamServersConnected.Broadcast(Data);
	});
}

void UUser::OnSteamServerConnectFailure(SteamServerConnectFailure_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		SteamServerConnectFailure.Broadcast(Data);
	});
}

void UUser::OnSteamServersDisconnected(SteamServersDisconnected_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		SteamServersDisconnected.Broadcast(Data);
	});
}

void UUser::OnValidateAuthTicketResponse(ValidateAuthTicketResponse_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		ValidateAuthTicketResponse.Broadcast(Data);
	});
}

void UUser::OnEncryptedAppTicketResponse(EncryptedAppTicketResponse_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		EncryptedAppTicketResponse.Broadcast(Data);
	});
}
#endif