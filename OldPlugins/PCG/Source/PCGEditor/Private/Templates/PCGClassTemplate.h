// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "ClassTemplateEditorSubsystem.h"

#include "PCGClassTemplate.generated.h"


UCLASS(Hidden)
class UPCGNativeSettingsClassTemplate : public UPluginClassTemplate
{
	GENERATED_UCLASS_BODY()

protected:
	virtual FString GetFilename() const override;
};

UCLASS(Hidden)
class UPCGNativeNodeClassTemplate : public UPluginClassTemplate
{
	GENERATED_UCLASS_BODY()
	
protected:
	virtual FString GetFilename() const override;
};