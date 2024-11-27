// Copyright Epic Games, Inc. All Rights Reserved.

#include "PCGClassTemplate.h"

#include "PCGNode.h"
#include "PCGSettings.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(PCGClassTemplate)

UPCGNativeSettingsClassTemplate::UPCGNativeSettingsClassTemplate(const FObjectInitializer& ObjectInitializer)
	: UPluginClassTemplate(ObjectInitializer)
{
	PluginName = TEXT("PCG");
	SetGeneratedBaseClass(UPCGSettings::StaticClass());
}

FString UPCGNativeSettingsClassTemplate::GetFilename() const
{
	return TEXT("PCGTemplateSettings");
}

UPCGNativeNodeClassTemplate::UPCGNativeNodeClassTemplate(const FObjectInitializer& ObjectInitializer)
	: UPluginClassTemplate(ObjectInitializer)
{
	PluginName = TEXT("PCG");
	SetGeneratedBaseClass(UPCGNode::StaticClass());
}

FString UPCGNativeNodeClassTemplate::GetFilename() const
{
	return TEXT("PCGTemplateSettings");
}