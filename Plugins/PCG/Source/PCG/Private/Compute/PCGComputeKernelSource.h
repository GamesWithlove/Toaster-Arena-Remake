// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "ComputeFramework/ComputeKernelSource.h"

#include "PCGComputeKernelSource.generated.h"

UCLASS()
class PCG_API UPCGComputeKernelSource : public UComputeKernelSource
{
	GENERATED_BODY()

public:
	void SetSource(FString const& InSource)
	{
		Source = InSource;
	}
	
	//~ Begin UComputeKernelSource Interface.
	FString GetSource() const override
	{
		return Source;
	}
	//~ End UComputeKernelSource Interface.

protected:
	UPROPERTY()
	FString Source;
};
