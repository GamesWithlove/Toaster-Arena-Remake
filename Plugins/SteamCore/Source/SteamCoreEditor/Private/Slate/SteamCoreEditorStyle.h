/**
* Copyright (C) 2017-2022 eelDev AB
*/

#pragma once

#include "CoreMinimal.h"
#include "Styling/SlateStyle.h"

class FSlateStyleSet;

class FSteamCoreEditorStyle
{
public:
	static void Initialize();
	static void Shutdown();
	static void ReloadTextures();
	static const ISlateStyle& Get();
	static FName GetStyleSetName();

	static const FSlateBrush* GetBrush(FName PropertyName, const ANSICHAR* Specifier = nullptr)
	{
		return StyleInstance->GetBrush(PropertyName, Specifier);
	}

private:
	static TSharedRef<FSlateStyleSet> Create();
	static TSharedPtr<FSlateStyleSet> StyleInstance;
};
