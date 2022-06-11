/**
* Copyright (C) 2017-2022 eelDev AB
*/

#include "SteamCoreEditorModule.h"

#include "Misc/ConfigCacheIni.h"
#include "Framework/Application/SlateApplication.h"
#include "Slate/SSteamCoreEditorWindow.h"
#include "Slate/SteamCoreEditorStyle.h"
#include "SWebBrowser.h"
#include "Framework/Docking/TabManager.h"
#include "Interfaces/IPluginManager.h"

#define LOCTEXT_NAMESPACE "FSteamCoreEditorModule"

FString FSteamCoreEditorModule::s_PluginName;
FString FSteamCoreEditorModule::s_PluginVersion;

class UVersionUpdater : public UObject
{
public:
	void SaveIni()
	{
		GConfig->Flush(false, IniConfig);
		SaveConfig(CPF_Config, *IniConfig);
	};

	FString GetCachedVersion()
	{
		FString Result;

		GConfig->GetString(PLUGIN_INI_CONFIG_NAME, TEXT("CachedVersion"), Result, IniConfig);

		return Result;
	};

	bool IsVersionCheckDisabled()
	{
		bool bResult = false;

		GConfig->GetBool(PLUGIN_INI_CONFIG_NAME, TEXT("bDisableVersionChecking"), bResult, IniConfig);

		return bResult;
	};

	void UpdateCachedVersion(FString NewVersion)
	{
		GConfig->SetString(PLUGIN_INI_CONFIG_NAME, TEXT("CachedVersion"), *NewVersion, IniConfig);

		SaveIni();
	};

	void UpdateDisableVersionCheck(bool NewState)
	{
		GConfig->SetBool(PLUGIN_INI_CONFIG_NAME, TEXT("bDisableVersionChecking"), NewState, IniConfig);

		SaveIni();
	};
};

IMPLEMENT_MODULE(FSteamCoreEditorModule, SteamCoreEditor)

void FSteamCoreEditorModule::StartupModule()
{
	TSharedPtr<IPlugin> PluginPtr = IPluginManager::Get().FindPlugin("SteamCore");
	if (!PluginPtr)	PluginPtr = IPluginManager::Get().FindPlugin("SteamCoreLite");

	if (PluginPtr)
	{
		if (PluginPtr->GetDescriptor().FriendlyName.Contains("Lite"))
		{
			s_PluginName = "SteamCoreLite";
			s_PluginVersion = PluginPtr->GetDescriptor().VersionName;
		}
		else
		{
			s_PluginName = "SteamCore";
			s_PluginVersion = PluginPtr->GetDescriptor().VersionName;
		}
	}

	UVersionUpdater* VersionChecker = GetMutableDefault<UVersionUpdater>();

	if (VersionChecker->IsVersionCheckDisabled())
	{
		UE_LOG(LogTemp, Log, TEXT("(%s) Plugin update check is disabled"), *s_PluginName);
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("(%s) Checking for plugin updates"), *s_PluginName);

		const auto Lambda = FTickerDelegate::CreateLambda([this](float)
		{
#if ENGINE_MINOR_VERSION == 24 || ENGINE_MINOR_VERSION == 25
	TSharedRef<IHttpRequest> HTTPRequest = FHttpModule::Get().CreateRequest();
#else
			TSharedRef<IHttpRequest, ESPMode::ThreadSafe> HTTPRequest = FHttpModule::Get().CreateRequest();
#endif

			HTTPRequest->SetHeader(TEXT("Content-Type"), TEXT("text/html; charset=utf-8"));
			HTTPRequest->SetURL(PLUGIN_URL);
			HTTPRequest->SetVerb("GET");
			HTTPRequest->OnProcessRequestComplete().BindRaw(this, &FSteamCoreEditorModule::OnRequestResponse);
			HTTPRequest->ProcessRequest();

			return false;
		});

#if UE_VERSION_NEWER_THAN(4,27,2)
		m_InitHandle = FTSTicker::GetCoreTicker().AddTicker(Lambda, 3.0f);
#else
		m_InitHandle = FTicker::GetCoreTicker().AddTicker(Lambda, 3.0f);
#endif

		FSteamCoreEditorStyle::Initialize();
		FSteamCoreEditorStyle::ReloadTextures();
	}
}

void FSteamCoreEditorModule::ShutdownModule()
{
	if (m_InitHandle.IsValid())
	{
#if UE_VERSION_NEWER_THAN(4,27,2)
		FTSTicker::GetCoreTicker().RemoveTicker(m_InitHandle);
#else
		FTicker::GetCoreTicker().RemoveTicker(m_InitHandle);
#endif
	}
	FSteamCoreEditorStyle::Shutdown();
}

void FSteamCoreEditorModule::UpdateDisableVersionCheck(bool bNewState)
{
	UVersionUpdater* VersionChecker = GetMutableDefault<UVersionUpdater>();

	VersionChecker->UpdateDisableVersionCheck(bNewState);
}

void FSteamCoreEditorModule::OnRequestResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bConnectedSuccessfully)
{
	if (bConnectedSuccessfully)
	{
		const FString Result = Response->GetContentAsString();

		TArray<FString> Array;
		Result.ParseIntoArray(Array, TEXT("\n"));

		// check for new update
		for (auto& Element : Array)
		{
			if (Element.Contains("lastBuildDate"))
			{
				bool bNewVersion = false;

				// format the string
				const FString FormattedString = PrepareXmlString(Element);
				const FString HashedVersion = FMD5::HashAnsiString(*FormattedString);

				UVersionUpdater* VersionChecker = GetMutableDefault<UVersionUpdater>();

				bNewVersion = VersionChecker->GetCachedVersion() != HashedVersion;

				if (bNewVersion)
				{
					UE_LOG(LogTemp, Log, TEXT("(%s) New plugin update"), *s_PluginName);

					VersionChecker->UpdateCachedVersion(HashedVersion);

					const FXmlItemData ParsedXml(ParseResponseItem(Array));
					CreatePopup(ParsedXml);
				}
				else
				{
					UE_LOG(LogTemp, Log, TEXT("(%s) No new plugin update"), *s_PluginName);
				}

				break;
			}
		}
	}

	//	HTTPRequest->OnProcessRequestComplete().Unbind();
}

TArray<FString> FSteamCoreEditorModule::ParseResponseItem(const TArray<FString>& ResponseData)
{
	TArray<FString> ItemArray;

	int32 FirstIndex = 0;
	int32 SecondIndex = 0;

	for (int32 i = 0; i < ResponseData.Num(); i++)
	{
		if (ResponseData[i].Contains("<item>"))
		{
			FirstIndex = i;
			break;
		}
	}

	for (int32 i = 0; i < ResponseData.Num(); i++)
	{
		if (ResponseData[i].Contains("</item>"))
		{
			SecondIndex = i;
			break;
		}
	}

	for (int32 i = FirstIndex; i < SecondIndex; i++)
	{
		ItemArray.Add(ResponseData[i]);
	}

	return ItemArray;
}

void FSteamCoreEditorModule::CreatePopup(FXmlItemData Data)
{
	TSharedPtr<SWindow> UpdaterCoreWindow = SNew(SWindow).Title(LOCTEXT("LatestUpdateText", "Latest Plugin Update")).SupportsMaximize(false).SupportsMinimize(false).MinHeight(550.f).Style(&FSteamCoreEditorStyle::Get().GetWidgetStyle<FWindowStyle>("SteamCoreEditor.Window")).MinWidth(800.f);

	const TSharedPtr<SWebBrowserView> BrowserWidget = SNew(SWebBrowserView).InitialURL(Data.Link + "?print=print");

	UpdaterCoreWindow->SetContent(SNew(SUpdaterCoreWindow).ModulePtr(MakeShareable(this)).XmlData(Data).BrowserView(BrowserWidget));

	FSlateApplication::Get().AddWindowAsNativeChild(UpdaterCoreWindow.ToSharedRef(), FGlobalTabmanager::Get()->GetRootWindow().ToSharedRef());
}

#undef LOCTEXT_NAMESPACE
