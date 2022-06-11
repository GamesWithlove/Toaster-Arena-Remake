/**
* Copyright (C) 2017-2022 eelDev AB
*/

#include "SteamGameSearch/SteamGameSearch.h"
#include "SteamCorePluginPrivatePCH.h"

void USteamGameSearch::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	if (SteamGameSearch())
	{
		OnSearchForGameProgressCallback.Register(this, &USteamGameSearch::OnSearchForGameProgressUpdated);
		OnSearchForGameResultCallback.Register(this, &USteamGameSearch::OnSearchForGameResultUpdated);
		OnRequestPlayersForGameProgressCallback.Register(this, &USteamGameSearch::OnRequestPlayersForGameProgressUpdated);
		OnRequestPlayersForGameResultCallback.Register(this, &USteamGameSearch::OnRequestPlayersForGameResultUpdated);
		OnRequestPlayersForGameFinalResultCallback.Register(this, &USteamGameSearch::OnRequestPlayersForGameFinalResultUpdated);
		OnSubmitPlayerResultResultCallback.Register(this, &USteamGameSearch::OnSubmitPlayerResultResultUpdated);
		OnEndGameResultCallback.Register(this, &USteamGameSearch::OnEndGameResultUpdated);

		if (IsRunningDedicatedServer())
		{
			OnSearchForGameProgressCallback.SetGameserverFlag();
			OnSearchForGameResultCallback.SetGameserverFlag();
			OnRequestPlayersForGameProgressCallback.SetGameserverFlag();
			OnRequestPlayersForGameResultCallback.SetGameserverFlag();
			OnRequestPlayersForGameFinalResultCallback.SetGameserverFlag();
			OnSubmitPlayerResultResultCallback.SetGameserverFlag();
			OnEndGameResultCallback.SetGameserverFlag();
		}
	}
}

void USteamGameSearch::Deinitialize()
{
	if (SteamGameSearch())
	{
		OnSearchForGameProgressCallback.Unregister();
		OnSearchForGameResultCallback.Unregister();
		OnRequestPlayersForGameProgressCallback.Unregister();
		OnRequestPlayersForGameResultCallback.Unregister();
		OnRequestPlayersForGameFinalResultCallback.Unregister();
		OnSubmitPlayerResultResultCallback.Unregister();
		OnEndGameResultCallback.Unregister();
	}

	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		GameSearch API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

ESteamGameSearchErrorCode USteamGameSearch::AddGameSearchParams(FString KeyToFind, TArray<FString> ValuesToFind)
{
	LogVerbose("");

	EGameSearchErrorCode_t Result = k_EGameSearchErrorCode_Failed_Unknown_Error;

	if (SteamGameSearch())
	{
		TArray<char> Values;
		Values.SetNum(ValuesToFind.Num());

		for (int32 i = 0; i < ValuesToFind.Num(); i++)
		{
			if (i > 0)
			{
				Values[i] = *TCHAR_TO_UTF8(*FString::Printf(TEXT(",%s"), *ValuesToFind[i]));
			}
			else
			{
				Values[i] = *TCHAR_TO_UTF8(*FString::Printf(TEXT("%s"), *ValuesToFind[i]));
			}
		}

		Result = SteamGameSearch()->AddGameSearchParams(TCHAR_TO_UTF8(*KeyToFind), Values.GetData());
	}

	return static_cast<ESteamGameSearchErrorCode>(Result);
}

ESteamGameSearchErrorCode USteamGameSearch::SearchForGameWithLobby(FSteamID SteamIDLobby, int32 PlayerMin, int32 PlayerMax)
{
	LogVerbose("");

	EGameSearchErrorCode_t Result = k_EGameSearchErrorCode_Failed_Unknown_Error;

	if (SteamGameSearch())
	{
		Result = SteamGameSearch()->SearchForGameWithLobby(SteamIDLobby, PlayerMin, PlayerMax);
	}

	return static_cast<ESteamGameSearchErrorCode>(Result);
}

ESteamGameSearchErrorCode USteamGameSearch::SearchForGameSolo(int32 PlayerMin, int32 PlayerMax)
{
	LogVerbose("");

	EGameSearchErrorCode_t Result = k_EGameSearchErrorCode_Failed_Unknown_Error;

	if (SteamGameSearch())
	{
		Result = SteamGameSearch()->SearchForGameSolo(PlayerMin, PlayerMax);
	}

	return static_cast<ESteamGameSearchErrorCode>(Result);
}

ESteamGameSearchErrorCode USteamGameSearch::AcceptGame()
{
	LogVerbose("");

	EGameSearchErrorCode_t Result = k_EGameSearchErrorCode_Failed_Unknown_Error;

	if (SteamGameSearch())
	{
		Result = SteamGameSearch()->AcceptGame();
	}

	return static_cast<ESteamGameSearchErrorCode>(Result);
}

ESteamGameSearchErrorCode USteamGameSearch::DeclineGame()
{
	LogVerbose("");

	EGameSearchErrorCode_t Result = k_EGameSearchErrorCode_Failed_Unknown_Error;

	if (SteamGameSearch())
	{
		Result = SteamGameSearch()->DeclineGame();
	}

	return static_cast<ESteamGameSearchErrorCode>(Result);
}

ESteamGameSearchErrorCode USteamGameSearch::RetrieveConnectionDetails(FSteamID SteamIDHost, FString& ConnectionDetails, int32 NumConnectionDetails)
{
	LogVerbose("");

	EGameSearchErrorCode_t Result = k_EGameSearchErrorCode_Failed_Unknown_Error;

	if (SteamGameSearch())
	{
		char* ConnectionDetailsChar = nullptr;
		Result = SteamGameSearch()->RetrieveConnectionDetails(SteamIDHost, ConnectionDetailsChar, NumConnectionDetails);

		if (Result == k_EGameSearchErrorCode_OK)
		{
			ConnectionDetails = FString(ConnectionDetailsChar);
		}
	}

	return static_cast<ESteamGameSearchErrorCode>(Result);
}

ESteamGameSearchErrorCode USteamGameSearch::EndGameSearch()
{
	LogVerbose("");

	EGameSearchErrorCode_t Result = k_EGameSearchErrorCode_Failed_Unknown_Error;

	if (SteamGameSearch())
	{
		Result = SteamGameSearch()->EndGameSearch();
	}

	return static_cast<ESteamGameSearchErrorCode>(Result);
}

ESteamGameSearchErrorCode USteamGameSearch::SetGameHostParams(FString Key, TArray<FString> Values)
{
	EGameSearchErrorCode_t Result = k_EGameSearchErrorCode_Failed_Unknown_Error;

	if (SteamGameSearch())
	{
		TArray<char> CharValues;
		CharValues.SetNum(Values.Num());

		for (int32 i = 0; i < Values.Num(); i++)
		{
			if (i > 0)
			{
				CharValues[i] = *TCHAR_TO_UTF8(*FString::Printf(TEXT(",%s"), *Values[i]));
			}
			else
			{
				CharValues[i] = *TCHAR_TO_UTF8(*FString::Printf(TEXT("%s"), *Values[i]));
			}
		}

		Result = SteamGameSearch()->SetGameHostParams(TCHAR_TO_UTF8(*Key), CharValues.GetData());
	}

	return static_cast<ESteamGameSearchErrorCode>(Result);
}

ESteamGameSearchErrorCode USteamGameSearch::SetConnectionDetails(FString ConnectionDetails)
{
	EGameSearchErrorCode_t Result = k_EGameSearchErrorCode_Failed_Unknown_Error;

	if (SteamGameSearch())
	{
		Result = SteamGameSearch()->SetConnectionDetails(TCHAR_TO_UTF8(*ConnectionDetails), 1);
	}

	return static_cast<ESteamGameSearchErrorCode>(Result);
}

ESteamGameSearchErrorCode USteamGameSearch::RequestPlayersForGame(int32 PlayerMin, int32 PlayerMax, int32 MaxTeamSize)
{
	EGameSearchErrorCode_t Result = k_EGameSearchErrorCode_Failed_Unknown_Error;

	if (SteamGameSearch())
	{
		Result = SteamGameSearch()->RequestPlayersForGame(PlayerMin, PlayerMax, MaxTeamSize);
	}

	return static_cast<ESteamGameSearchErrorCode>(Result);
}

ESteamGameSearchErrorCode USteamGameSearch::HostConfirmGameStart(FString UniqueGameID)
{
	EGameSearchErrorCode_t Result = k_EGameSearchErrorCode_Failed_Unknown_Error;

	if (SteamGameSearch())
	{
		Result = SteamGameSearch()->HostConfirmGameStart(FCString::Atoi64(*UniqueGameID));
	}

	return static_cast<ESteamGameSearchErrorCode>(Result);
}

ESteamGameSearchErrorCode USteamGameSearch::CancelRequestPlayersForGame()
{
	EGameSearchErrorCode_t Result = k_EGameSearchErrorCode_Failed_Unknown_Error;

	if (SteamGameSearch())
	{
		Result = SteamGameSearch()->CancelRequestPlayersForGame();
	}

	return static_cast<ESteamGameSearchErrorCode>(Result);
}

ESteamGameSearchErrorCode USteamGameSearch::SubmitPlayerResult(FString UniqueGameID, FSteamID SteamIDPlayer, ESteamPlayerResult PlayerResult)
{
	EGameSearchErrorCode_t Result = k_EGameSearchErrorCode_Failed_Unknown_Error;

	if (SteamGameSearch())
	{
		Result = SteamGameSearch()->SubmitPlayerResult(FCString::Atoi64(*UniqueGameID), SteamIDPlayer, static_cast<EPlayerResult_t>(PlayerResult));
	}

	return static_cast<ESteamGameSearchErrorCode>(Result);
}

ESteamGameSearchErrorCode USteamGameSearch::EndGame(FString UniqueGameID)
{
	EGameSearchErrorCode_t Result = k_EGameSearchErrorCode_Failed_Unknown_Error;

	if (SteamGameSearch())
	{
		Result = SteamGameSearch()->EndGame(FCString::Atoi64(*UniqueGameID));
	}

	return static_cast<ESteamGameSearchErrorCode>(Result);
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void USteamGameSearch::OnEndGameResultUpdated(EndGameResultCallback_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		EndGameResultDelegate.Broadcast(Data);
	});
}

void USteamGameSearch::OnSubmitPlayerResultResultUpdated(SubmitPlayerResultResultCallback_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		SubmitPlayerResultResultDelegate.Broadcast(Data);
	});
}

void USteamGameSearch::OnRequestPlayersForGameFinalResultUpdated(RequestPlayersForGameFinalResultCallback_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		RequestPlayersForGameFinalResultDelegate.Broadcast(Data);
	});
}

void USteamGameSearch::OnRequestPlayersForGameResultUpdated(RequestPlayersForGameResultCallback_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		RequestPlayersForGameResultDelegate.Broadcast(Data);
	});
}

void USteamGameSearch::OnRequestPlayersForGameProgressUpdated(RequestPlayersForGameProgressCallback_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		RequestPlayersForGameProgressDelegate.Broadcast(Data);
	});
}

void USteamGameSearch::OnSearchForGameResultUpdated(SearchForGameResultCallback_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		SearchForGameResultDelegate.Broadcast(Data);
	});
}

void USteamGameSearch::OnSearchForGameProgressUpdated(SearchForGameProgressCallback_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		SearchForGameProgressDelegate.Broadcast(Data);
	});
}
