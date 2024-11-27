// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "ComputeFramework/ComputeDataInterface.h"

#include "PCGComputeDataInterface.generated.h"

UCLASS(Abstract, ClassGroup = (Procedural))
class UPCGComputeDataInterface : public UComputeDataInterface
{
	GENERATED_BODY()

public:
	/** Register a downstream pin (and optionally compute graph element pin alias). */
	virtual void AddDownstreamInputPin(FName InInputPinLabel, const FName* InOptionalInputPinLabelAlias = nullptr)
	{
		DownstreamInputPinLabelAliases.AddUnique(InOptionalInputPinLabelAlias ? *InOptionalInputPinLabelAlias : InInputPinLabel);
	}

	/** Set the output pin label and label alias that this data interface is associated with. */
	virtual void SetOutputPin(FName InOutputPinLabel, const FName* InOptionalOutputPinLabelAlias = nullptr)
	{
		OutputPinLabel = InOutputPinLabel;
		OutputPinLabelAlias = InOptionalOutputPinLabelAlias ? *InOptionalOutputPinLabelAlias : InOutputPinLabel;
	}

protected:
	/** Label of output pin that this data interface is associated with. */
	UPROPERTY()
	FName OutputPinLabel;

	UPROPERTY()
	FName OutputPinLabelAlias;

	/** Generated PCG data will be assigned these labels. */
	UPROPERTY()
	TArray<FName> DownstreamInputPinLabelAliases;
};
