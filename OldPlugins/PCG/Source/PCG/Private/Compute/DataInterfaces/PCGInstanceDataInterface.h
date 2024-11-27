// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Compute/DataInterfaces/PCGComputeDataInterface.h"

#include "RHIResources.h"
#include "ComputeFramework/ComputeDataProvider.h"

#include "PCGInstanceDataInterface.generated.h"

class FPCGInstanceDataInterfaceParameters;
class FPrimitiveSceneProxy;
class UPCGSettings;

/** Data Interface for writing instance data (transform and custom floats) to an intermediate buffer, which is then injected into the GPU Scene. */
UCLASS(ClassGroup = (Procedural))
class UPCGInstanceDataInterface : public UPCGComputeDataInterface
{
	GENERATED_BODY()

public:
	//~ Begin UComputeDataInterface Interface
	TCHAR const* GetClassName() const override { return TEXT("PCGInstanceData"); }
	void GetSupportedOutputs(TArray<FShaderFunctionDefinition>& OutFunctions) const override;
	void GetShaderParameters(TCHAR const* UID, FShaderParametersMetadataBuilder& InOutBuilder, FShaderParametersMetadataAllocations& InOutAllocations) const override;
	TCHAR const* GetShaderVirtualPath() const override;
	void GetShaderHash(FString& InOutKey) const override;
	void GetHLSL(FString& OutHLSL, FString const& InDataInterfaceName) const override;
	UComputeDataProvider* CreateDataProvider(TObjectPtr<UObject> InBinding, uint64 InInputMask, uint64 InOutputMask) const override;
	//~ End UComputeDataInterface Interface

	void SetProducerSettings(const UPCGSettings* InProducerSettings) { ProducerSettings = InProducerSettings; }

public:
	UPROPERTY()
	FName InputPinProvidingData = NAME_None;

private:
	/** Settings of node that produces this data, normally the upstream node. */
	UPROPERTY()
	TObjectPtr<const UPCGSettings> ProducerSettings;

	static TCHAR const* TemplateFilePath;
};

/** Compute Framework Data Provider for writing to the GPU Scene. */
UCLASS()
class UPCGInstanceDataProvider : public UComputeDataProvider
{
	GENERATED_BODY()

public:
	//~ Begin UComputeDataProvider Interface
	FComputeDataProviderRenderProxy* GetRenderProxy() override;
	//~ End UComputeDataProvider Interface

	UPROPERTY()
	TArray<TObjectPtr<UPrimitiveComponent>> Primitives;

	UPROPERTY()
	uint32 NumInstancesAllPrimitives = 0;

	UPROPERTY()
	uint32 NumCustomFloatsPerInstance = 0;
};

class FPCGInstanceDataProviderProxy : public FComputeDataProviderRenderProxy
{
public:
	FPCGInstanceDataProviderProxy(TArray<FPrimitiveSceneProxy*>&& InPrimitiveSceneProxies, uint32 InNumInstances, uint32 InNumCustomFloatsPerInstance);

	//~ Begin FComputeDataProviderRenderProxy Interface
	bool IsValid(FValidationData const& InValidationData) const override;
	void AllocateResources(FRDGBuilder& GraphBuilder, FAllocationData const& InAllocationData);
	void GatherDispatchData(FDispatchData const& InDispatchData) override;
	void PostGraphDispatch(FRDGBuilder& GraphBuilder) const override;
	//~ End FComputeDataProviderRenderProxy Interface

protected:
	using FParameters = FPCGInstanceDataInterfaceParameters;

	TArray<FPrimitiveSceneProxy*> PrimitiveSceneProxies;
	TArray<uint32> PrimitiveCounts;

	/** Instance transforms of all instances across all primitives. Three float4s per instance. */
	FRDGBufferRef InstanceData = nullptr;
	FRDGBufferSRVRef InstanceDataSRV = nullptr;
	FRDGBufferUAVRef InstanceDataUAV = nullptr;

	/** Custom float data for all instances across all primitives. N per instance. Number of custom floats N comes from inputs (and is static). */
	FRDGBufferRef InstanceCustomFloatData = nullptr;
	FRDGBufferSRVRef InstanceCustomFloatDataSRV = nullptr;
	FRDGBufferUAVRef InstanceCustomFloatDataUAV = nullptr;

	/** A per-primitive instance counter. Updated atomically and used to place instances into a segmented array (one segment per primitive). */
	FRDGBufferRef WriteCounters = nullptr;
	FRDGBufferSRVRef WriteCountersSRV = nullptr;
	FRDGBufferUAVRef WriteCountersUAV = nullptr;

	uint32 NumInstancesAllPrimitives = 0;
	uint32 NumCustomFloatsPerInstance = 0;
};
