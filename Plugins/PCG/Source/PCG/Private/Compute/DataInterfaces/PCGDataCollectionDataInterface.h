// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Compute/PCGDataForGPU.h"
#include "Compute/DataInterfaces/PCGComputeDataInterface.h"

#include "ComputeFramework/ComputeDataProvider.h"

#include "PCGDataCollectionDataInterface.generated.h"

struct FPCGComputeGraphContext;
class FPCGDataCollectionDataInterfaceParameters;
class FRDGBuffer;
class FRDGBufferSRV;
class UPCGDataBinding;

UENUM(meta = (Bitflags))
enum class EPCGReadbackMode : uint8
{
	None = 0,
	/** Read back and store in compute graph output data collection. */
	GraphOutput = 1 << 1,
	/** Read back and store inspection data. */
	Inspection = 1 << 2,
	/** Read back and execute debug visualization. */
	DebugVisualization = 1 << 3,
};
ENUM_CLASS_FLAGS(EPCGReadbackMode);

/** Compute Framework Data Interface for reading PCG data. */
UCLASS(ClassGroup = (Procedural))
class UPCGDataCollectionDataInterface : public UPCGComputeDataInterface
{
	GENERATED_BODY()

public:
	//~ Begin UComputeDataInterface Interface
	TCHAR const* GetClassName() const override { return TEXT("PCGDataCollection"); }
	/** Return true if the associated UComputeDataProvider holds data that can be combined into a single dispatch invocation. */
	bool CanSupportUnifiedDispatch() const override { return false; } // I think this means compute shader can produce multiple buffers simultaneously?
	// TODO don't allow writing to an input!
	void GetSupportedInputs(TArray<FShaderFunctionDefinition>& OutFunctions) const override;
	// TODO could differentiate later for SRV vs UAV.
	void GetSupportedOutputs(TArray<FShaderFunctionDefinition>& OutFunctions) const override { GetSupportedInputs(OutFunctions); }
	void GetShaderParameters(TCHAR const* UID, FShaderParametersMetadataBuilder& InOutBuilder, FShaderParametersMetadataAllocations& InOutAllocations) const override;
	TCHAR const* GetShaderVirtualPath() const override; // TODO probably easier to just inline rather than external source?
	void GetShaderHash(FString& InOutKey) const override;
	void GetHLSL(FString& OutHLSL, FString const& InDataInterfaceName) const override;
	UComputeDataProvider* CreateDataProvider(TObjectPtr<UObject> InBinding, uint64 InInputMask, uint64 InOutputMask) const override;
	//~ End UComputeDataInterface Interface

	void SetProducerSettings(const UPCGSettings* InProducerSettings) { ProducerSettings = InProducerSettings; }

	bool GetRequiresReadback() const override;
	void SetRequiresReadback(bool bInRequiresReadback) { bRequiresReadback = bInRequiresReadback; }

protected:
	/** Settings of node that produces this data, normally the upstream node. */
	UPROPERTY()
	TObjectPtr<const UPCGSettings> ProducerSettings;

	/** Whether this data should be copied from GPU to CPU. */
	UPROPERTY()
	bool bRequiresReadback = false;

	static TCHAR const* TemplateFilePath;
};

/** Compute Framework Data Provider for reading a PCG Data Collection. */
UCLASS()
class UPCGDataCollectionDataProvider : public UComputeDataProvider
{
	GENERATED_BODY()

public:
	//~ Begin UComputeDataProvider Interface
	FComputeDataProviderRenderProxy* GetRenderProxy() override;
	//~ End UComputeDataProvider Interface

	bool RequiresReadback() const { return ReadbackMode != EPCGReadbackMode::None; }

	/** Processed read back data. Should be called after readback complete. Called from game thread. Returns true if data processed successfully. */
	bool ProcessReadBackData(FPCGComputeGraphContext* InContext);

	DECLARE_EVENT(UPCGDataProviderDataCollectionReadback, FOnReadbackComplete);
	FOnReadbackComplete& OnReadbackComplete_RenderThread() { return OnReadbackComplete; }

public:
	/** Settings of node that produces this data, normally the upstream node. */
	UPROPERTY()
	TObjectPtr<const UPCGSettings> ProducerSettings;

	TWeakObjectPtr<UPCGDataBinding> Binding;
	FPCGDataCollectionDesc PinDesc;

	EPCGReadbackMode ReadbackMode;

	FName OutputPinLabel;
	FName OutputPinLabelAlias;

protected:
	std::atomic<bool> bReadbackComplete = false;
	TArray<uint8> RawReadbackData;

	FOnReadbackComplete OnReadbackComplete;
};

class FPCGDataCollectionDataProviderProxy : public FComputeDataProviderRenderProxy
{
public:
	FPCGDataCollectionDataProviderProxy(const FPCGDataCollectionDesc& InPinDesc, EPCGReadbackMode InReadbackMode);

	//~ Begin FComputeDataProviderRenderProxy Interface
	bool IsValid(FValidationData const& InValidationData) const override;
	void GatherDispatchData(FDispatchData const& InDispatchData) override;
	void AllocateResources(FRDGBuilder& GraphBuilder, FAllocationData const& InAllocationData) override;
	void GetReadbackData(TArray<FReadbackData>& OutReadbackData) const override;
	//~ End FComputeDataProviderRenderProxy Interface

#if WITH_EDITOR
	void SetBufferName(const FString& InBufferName);
#endif

public:
	FReadbackCallback AsyncReadbackCallback_RenderThread;

protected:
	int SizeBytes = -1;

	EPCGReadbackMode ReadbackMode;

	using FParameters = FPCGDataCollectionDataInterfaceParameters;

	FPCGDataCollectionDesc PinDesc;

	FRDGBufferRef Buffer = nullptr;
	FRDGBufferUAVRef BufferUAV = nullptr;

#if WITH_EDITOR
	FString BufferName;
#endif
};
