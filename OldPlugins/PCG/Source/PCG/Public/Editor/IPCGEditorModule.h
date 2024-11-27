// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Editor/IPCGEditorProgressNotification.h"

#include "Internationalization/Text.h"
#include "Modules/ModuleInterface.h"

class IPCGEditorModule : public IModuleInterface
{
public:
	virtual TWeakPtr<IPCGEditorProgressNotification> CreateProgressNotification(const FTextFormat& TextFormat, bool bCanCancel) = 0;
	virtual void ReleaseProgressNotification(TWeakPtr<IPCGEditorProgressNotification> InNotification) = 0;
	virtual void SetOutlinerUIRefreshDelay(float InDelay) = 0;
};