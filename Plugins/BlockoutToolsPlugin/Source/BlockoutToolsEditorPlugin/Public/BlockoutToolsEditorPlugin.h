// Copyright 2024 Dmitry Karpukhin. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "Templates/SubclassOf.h"
#include "Styling/SlateStyle.h"
#include "BlockoutToolsParent.h"

class FBlockoutToolsEditorPluginModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	TSharedPtr<FSlateStyleSet> StyleSet;

};