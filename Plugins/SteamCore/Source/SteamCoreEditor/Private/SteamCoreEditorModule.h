/**
* Copyright (C) 2017-2022 eelDev AB
*/

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "HttpModule.h"
#include "Interfaces/IHttpRequest.h"
#include "Interfaces/IHttpResponse.h"
#include "SteamCoreEditorTypes.h"
#include "Containers/Ticker.h"
#include "Runtime/Launch/Resources/Version.h"
#include "Misc/EngineVersionComparison.h"

class FSteamCoreEditorModule : public IModuleInterface
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	virtual bool SupportsDynamicReloading() override
	{
		return false;
	}

	virtual bool SupportsAutomaticShutdown() override
	{
		return false;
	}

public:
	void UpdateDisableVersionCheck(bool bNewState);
private:
	void OnRequestResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bConnectedSuccessfully);
	static TArray<FString> ParseResponseItem(const TArray<FString>& ResponseData);
	void CreatePopup(FXmlItemData Data);
public:
	static FString s_PluginName;
	static FString s_PluginVersion;
private:
#if UE_VERSION_NEWER_THAN(4,27,2)
	FTSTicker::FDelegateHandle m_InitHandle;
#else
	FDelegateHandle m_InitHandle;
#endif
};
