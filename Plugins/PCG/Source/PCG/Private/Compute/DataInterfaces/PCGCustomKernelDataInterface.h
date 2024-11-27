// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Compute/PCGDataBinding.h"

#include "ComputeFramework/ComputeDataInterface.h"
#include "ComputeFramework/ComputeDataProvider.h"

#include "PCGCustomKernelDataInterface.generated.h"

class FPCGCustomKernelDataInterfaceParameters;

/** Interface for any meta data provided to the compute kernel, such as num threads. */
UCLASS(ClassGroup = (Procedural))
class PCG_API UPCGCustomKernelDataInterface : public UComputeDataInterface
{
	GENERATED_BODY()

public:
	static const TCHAR* NumThreadsReservedName;
	
	//~ Begin UComputeDataInterface Interface
	TCHAR const* GetClassName() const override { return TEXT("PCGCustomKernel"); }
	bool CanSupportUnifiedDispatch() const override { return true; }
	void GetSupportedInputs(TArray<FShaderFunctionDefinition>& OutFunctions) const override;
	void GetShaderParameters(TCHAR const* UID, FShaderParametersMetadataBuilder& InOutBuilder, FShaderParametersMetadataAllocations& InOutAllocations) const override;
	void GetHLSL(FString& OutHLSL, FString const& InDataInterfaceName) const override;
	UComputeDataProvider* CreateDataProvider(TObjectPtr<UObject> InBinding, uint64 InInputMask, uint64 InOutputMask) const override;

	// This DI will provide execution parameters like dispatch information.
	bool IsExecutionInterface() const override { return true; }
	//~ End UComputeDataInterface Interface

	UPROPERTY()
	TObjectPtr<const UPCGSettings> Settings = nullptr;
};

/** Compute Framework Data Provider for each custom compute kernel. */
UCLASS()
class UPCGCustomComputeKernelDataProvider : public UComputeDataProvider
{
	GENERATED_BODY()

public:
	//~ Begin UComputeDataProvider Interface
	FComputeDataProviderRenderProxy* GetRenderProxy() override;
	//~ End UComputeDataProvider Interface

	int32 ThreadCount = -1;
	uint32 ThreadCountMultiplier = 0;

	uint32 Seed = 42;
	uint32 SeedSettings = 42;
	uint32 SeedComponent = 42;

	FBox SourceComponentBounds;
};

class FPCGCustomComputeKernelDataProviderProxy : public FComputeDataProviderRenderProxy
{
public:
	FPCGCustomComputeKernelDataProviderProxy(int32 InThreadCount, uint32 InThreadCountMultiplier, uint32 InSeed, uint32 InSeedSettings, uint32 InSeedComponent, const FBox& InSourceComponentBounds)
		: ThreadCount(InThreadCount)
		, ThreadCountMultiplier(InThreadCountMultiplier)
		, Seed(InSeed)
		, SeedSettings(InSeedSettings)
		, SeedComponent(InSeedComponent)
		, SourceComponentBounds(InSourceComponentBounds)
	{}

	//~ Begin FComputeDataProviderRenderProxy Interface
	bool IsValid(FValidationData const& InValidationData) const override;
	int32 GetDispatchThreadCount(TArray<FIntVector>& InOutThreadCounts) const override;
	void GatherDispatchData(FDispatchData const& InDispatchData) override;
	//~ End FComputeDataProviderRenderProxy Interface

protected:
	using FParameters = FPCGCustomKernelDataInterfaceParameters;

	int32 ThreadCount = -1;
	uint32 ThreadCountMultiplier = 0;

	uint32 Seed = 42;
	uint32 SeedSettings = 42;
	uint32 SeedComponent = 42;

	FBox SourceComponentBounds;
};
