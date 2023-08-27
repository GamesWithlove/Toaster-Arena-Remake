/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCoreWeb Documentation: https://eeldev.com
*/

#pragma once

#include "CoreMinimal.h"
#include "OnlineAsyncTaskManager.h"
#include "SteamWebTypes.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "SteamCoreWeb/SteamCoreWebSettings.h"
#include "SteamCoreWeb/SteamCoreWeb.h"
#include "Interfaces/IHttpRequest.h"
#include "Online/HTTP/Public/HttpModule.h"
#include "Runtime/Launch/Resources/Version.h"
#include "SteamCoreWebAsync.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSteamCoreWebFailure);

class USteamCoreWebSubsystem;

class FOnlineAsyncTaskSteamCoreWeb : public FOnlineAsyncTaskBasic<class USteamCoreSubsystem>
{
public:
	FOnlineAsyncTaskSteamCoreWeb(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, FString InterfaceName, FString FunctionName, FString APIKey = "", int32 APIVersion = 1, EVerb Verb = EVerb::GET, bool bPublicURL = false)
		: OnCallback(Callback)
		, m_Subsystem(Subsystem)
		, bInit(false)
		, bReceivedCallback(false)
		, m_InterfaceName(InterfaceName)
		, m_FunctionName(FunctionName)
		, m_RequestString(FRequestString(APIKey))
		, m_APIv(APIVersion)
		, bUsePublicURL(bPublicURL)
	{
		switch (Verb)
		{
		case EVerb::GET:
			m_Verb = TEXT("GET");
			break;
		case EVerb::POST:
			m_Verb = TEXT("POST");
			break;
		case EVerb::PUT:
			m_Verb = TEXT("PUT");
			break;
		}
	}

	virtual ~FOnlineAsyncTaskSteamCoreWeb() override
	{
		m_HTTPRequest->OnProcessRequestComplete().Unbind();
	}

public:
	FOnSteamCoreWebCallback OnCallback;
protected:
	USteamCoreWebSubsystem* m_Subsystem;
#if !UE_VERSION_OLDER_THAN(4,26,0)
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> m_HTTPRequest = FHttpModule::Get().CreateRequest();
#else
	TSharedRef<IHttpRequest> m_HTTPRequest = FHttpModule::Get().CreateRequest();
#endif
	FHttpRequestPtr m_Request;
	FHttpResponsePtr m_Response;
	bool bInit;
	bool bReceivedCallback;
public:
	FString m_InterfaceName;
	FString m_FunctionName;
	FRequestString m_RequestString;
	int32 m_APIv;
	FString m_Verb;
	bool bUsePublicURL;
protected:
	virtual FString ToString() const override { return ""; }
	virtual void Tick() override;
	virtual void Finalize() override;
	virtual void OnProcessRequestComplete(FHttpRequestPtr request, FHttpResponsePtr response, bool bConnectedSuccessfully);
private:
	float AsyncTimeout = GetDefault<USteamCoreWebSettings>()->AsyncTaskTimeout;
};

class FOnlineAsyncTaskManagerSteamCoreWeb : public FOnlineAsyncTaskManager
{
public:
	FOnlineAsyncTaskManagerSteamCoreWeb()
	: SteamCoreWebSubsystem(nullptr)
	{
	}

	FOnlineAsyncTaskManagerSteamCoreWeb(class USteamCoreWebSubsystem* subsystem)
		: SteamCoreWebSubsystem(subsystem)
	{
	}

	virtual ~FOnlineAsyncTaskManagerSteamCoreWeb() override
	{
	}

private:
	class USteamCoreWebSubsystem* SteamCoreWebSubsystem;
protected:
	virtual void OnlineTick() override;
};

UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncAction : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:
	USteamCoreWebAsyncAction()
		: m_WorldContextObject(nullptr)
	{
		OnCallbackInternal.BindUFunction(this, "HandleCallback");
	}

	virtual ~USteamCoreWebAsyncAction() override
	{
		OnCallbackInternal.Unbind();
	}

public:
	UPROPERTY(BlueprintAssignable)
	FOnSteamCoreWebAsyncCallback OnCallback;

	FOnSteamCoreWebCallback OnCallbackInternal;
public:
	UFUNCTION()
	virtual void HandleCallback(const FString& data, bool bWasSuccessful);

protected:
	TWeakObjectPtr<UObject> m_WorldContextObject;
};
