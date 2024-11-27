// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "ComputeFramework/ComputeDataInterface.h"
#include "ComputeFramework/ComputeDataProvider.h"

#include "PCGDebugDataInterface.generated.h"

class FPCGDebugDataInterfaceParameters;
class FRDGBuffer;
class FRDGBufferUAV;

/** Interface for data about the kernel debug, such as debug value buffer. */
UCLASS(ClassGroup = (Procedural))
class PCG_API UPCGDebugDataInterface : public UComputeDataInterface
{
	GENERATED_BODY()

public:
	//~ Begin UComputeDataInterface Interface
	TCHAR const* GetClassName() const override { return TEXT("KernelDebug"); }
	void GetSupportedOutputs(TArray<FShaderFunctionDefinition>& OutFunctions) const override;
	void GetShaderParameters(TCHAR const* UID, FShaderParametersMetadataBuilder& InOutBuilder, FShaderParametersMetadataAllocations& InOutAllocations) const override;
	void GetShaderHash(FString& InOutKey) const override;
	void GetHLSL(FString& OutHLSL, FString const& InDataInterfaceName) const override;
	bool GetRequiresReadback() const override;
	UComputeDataProvider* CreateDataProvider(TObjectPtr<UObject> InBinding, uint64 InInputMask, uint64 InOutputMask) const override;
	//~ End UComputeDataInterface Interface

	void SetDebugBufferSize(uint32 InDebugBufferSize) { DebugBufferSize = InDebugBufferSize; }

private:
	uint32 DebugBufferSize = 0;
};

/** Compute Framework Data Provider for each custom compute kernel. */
UCLASS()
class UPCGDebugDataProvider : public UComputeDataProvider
{
	GENERATED_BODY()

public:
	//~ Begin UComputeDataProvider Interface
	FComputeDataProviderRenderProxy* GetRenderProxy() override;
	//~ End UComputeDataProvider Interface

	uint32 DebugBufferSize = 0;
	std::atomic<bool> bOperationComplete = false;
};

class FPCGDebugDataProviderProxy : public FComputeDataProviderRenderProxy
{
public:
	FPCGDebugDataProviderProxy(uint32 InDebugBufferSize, FReadbackCallback InAsyncReadbackCallback_RenderThread)
		: DebugBufferSize(InDebugBufferSize)
		, AsyncReadbackCallback_RenderThread(InAsyncReadbackCallback_RenderThread)
	{}

	//~ Begin FComputeDataProviderRenderProxy Interface
	bool IsValid(FValidationData const& InValidationData) const override;
	void GatherDispatchData(FDispatchData const& InDispatchData) override;
	void AllocateResources(FRDGBuilder& GraphBuilder, FAllocationData const& InAllocationData) override;
	void GetReadbackData(TArray<FReadbackData>& OutReadbackData) const override;
	//~ End FComputeDataProviderRenderProxy Interface

protected:
	using FParameters = FPCGDebugDataInterfaceParameters;

	FRDGBufferRef DebugBuffer = nullptr;
	FRDGBufferUAVRef DebugBufferUAV = nullptr;
	uint32 DebugBufferSize = 0;
	FReadbackCallback AsyncReadbackCallback_RenderThread;
};
