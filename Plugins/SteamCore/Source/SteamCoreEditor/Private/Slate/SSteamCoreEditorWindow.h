/**
* Copyright (C) 2017-2022 eelDev AB
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCoreEditorTypes.h"
#include "SteamCoreEditorModule.h"
#include "SWebBrowserView.h"

class SWebBrowserView;

class SUpdaterCoreWindow : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SUpdaterCoreWindow)
		{
		}

		SLATE_ATTRIBUTE(TSharedPtr<FSteamCoreEditorModule>, ModulePtr)
		SLATE_ATTRIBUTE(FXmlItemData, XmlData)
		SLATE_ATTRIBUTE(TSharedPtr<SWebBrowserView>, BrowserView)
	SLATE_END_ARGS()

public:
	void Construct(const FArguments& InArgs);
private:
	TSharedPtr<FSteamCoreEditorModule> m_ModulePtr;
	TSharedPtr<SWebBrowserView> m_BrowserView;
	FXmlItemData m_XmlData;
};
