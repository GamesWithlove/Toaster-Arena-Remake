// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Elements/PCGCopyAttributes.h"

#include "PCGMetadataElement.generated.h"

/** Deprecated, use UPCGCopyAttributesSettings */
UCLASS(MinimalAPI, BlueprintType, ClassGroup = (Procedural))
class UE_DEPRECATED(5.5, "Use UPCGCopyAttributeSettings") UPCGMetadataOperationSettings : public UPCGCopyAttributesSettings
{
	GENERATED_BODY()

public:
	UPCGMetadataOperationSettings()
		: UPCGCopyAttributesSettings()
	{
#if WITH_EDITOR
		bExposeToLibrary = false;
#endif // WITH_EDITOR
	}
};