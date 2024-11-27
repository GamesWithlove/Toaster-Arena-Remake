// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "IDetailCustomization.h"

class FPCGEditor;

/**
 * Implements a details view customization for the Custom HLSL node settings.
 */
class FPCGCustomHLSLSettingsDetails : public IDetailCustomization
{
public:
	static TSharedRef<IDetailCustomization> MakeInstance()
	{
		return MakeShared<FPCGCustomHLSLSettingsDetails>();
	}

	virtual void CustomizeDetails(IDetailLayoutBuilder& DetailBuilder) override;

private:
	TWeakPtr<FPCGEditor> GetPCGEditor(const TArray<TWeakObjectPtr<UObject>>& InObjectsBeingCustomized);
};
