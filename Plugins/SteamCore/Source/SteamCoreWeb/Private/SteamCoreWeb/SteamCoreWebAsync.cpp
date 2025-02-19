/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCoreWeb Documentation: https://eeldev.com
*/

#include "SteamCoreWeb/SteamCoreWebAsync.h"
#include "SteamCoreWeb/SteamCoreWebPluginPrivatePCH.h"
#include "SteamCoreWeb/SteamCoreWeb.h"

void FOnlineAsyncTaskManagerSteamCoreWeb::OnlineTick()
{
}

void USteamCoreWebAsyncAction::HandleCallback(const FString& data, bool bWasSuccessful)
{
	OnCallback.Broadcast(data, bWasSuccessful);

	SetReadyToDestroy();
}

void FOnlineAsyncTaskSteamCoreWeb::Tick()
{
	if (!bInit)
	{
		m_HTTPRequest->OnProcessRequestComplete().BindRaw(this, &FOnlineAsyncTaskSteamCoreWeb::OnProcessRequestComplete);

		FString RequestString = m_RequestString.Get();
		FString URL = FRequestURL(m_InterfaceName, m_FunctionName, RequestString, m_APIv, bUsePublicURL);

		if (m_Verb == "POST")
		{
			if (!m_RequestString.IsJson())
			{
				URL = FRequestURL(m_InterfaceName, m_FunctionName, TEXT(""), m_APIv, bUsePublicURL);
				m_HTTPRequest->SetContentAsString(RequestString);
			}
		}

		m_HTTPRequest->SetHeader(TEXT("Content-Type"), TEXT("application/x-www-form-urlencoded"));
		m_HTTPRequest->SetURL(FRequestURL(m_InterfaceName, m_FunctionName, RequestString, m_APIv, bUsePublicURL));
		m_HTTPRequest->SetVerb(m_Verb);

		if (SteamCoreWebDebugging())
		{
			UE_LOG(SteamCoreWebLog, Log, TEXT("HTTP Request: %s | Request String: %s"), *m_HTTPRequest->GetURL(), *RequestString);
		}

		if (SteamCoreWebDevMode())
		{
			// if we're in dev mode, mark as completed so we don't wait for a reply that we will never receive
			bIsComplete = true;
			bReceivedCallback = true;
		}
		else
		{
			m_HTTPRequest->ProcessRequest();
		}

		bInit = true;
	}

	bool bTimedOut = (GetElapsedTime() >= AsyncTimeout) ? true : false;

	if (bTimedOut || bReceivedCallback)
	{
		bIsComplete = true;
		bReceivedCallback = true;
	}
}

void FOnlineAsyncTaskSteamCoreWeb::Finalize()
{
	if (SteamCoreWebDebugging() && m_Response.IsValid())
	{
		if (m_Subsystem && m_Subsystem->GetWorld() && m_Request)
		{
			UE_LOG(SteamCoreWebLog, Log, TEXT("HTTP Callback [%s] Url=[%s] Response=[%d] [%s]"), *m_Request->GetVerb(), *m_Request->GetURL(), m_Response->GetResponseCode(), *m_Response->GetContentAsString());
		}
	}

	if (m_Response.IsValid())
	{
		OnCallback.ExecuteIfBound(m_Response->GetContentAsString(), bWasSuccessful);
	}
	else
	{
		OnCallback.ExecuteIfBound(FString(), false);
	}

	m_HTTPRequest->OnProcessRequestComplete().Unbind();
}

void FOnlineAsyncTaskSteamCoreWeb::OnProcessRequestComplete(FHttpRequestPtr request, FHttpResponsePtr response, bool bConnectedSuccessfully)
{
	m_Request = request;
	m_Response = response;
	bWasSuccessful = bConnectedSuccessfully;
	bReceivedCallback = true;
}
