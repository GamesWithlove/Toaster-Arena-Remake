// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Compute/DataInterfaces/PCGComputeDataInterface.h"
#include "ComputeFramework/ComputeDataProvider.h"

#include "PCGLandscapeDataInterface.generated.h"

class ALandscape;
class FPCGLandscapeDataInterfaceParameters;
class FPCGLandscapeResource;

/** Data Interface allowing sampling of a Landscape. */
UCLASS(ClassGroup = (Procedural))
class UPCGLandscapeDataInterface : public UPCGComputeDataInterface
{
	GENERATED_BODY()

public:
	//~ Begin UComputeDataInterface Interface
	TCHAR const* GetClassName() const override { return TEXT("PCGLandscape"); }
	void GetSupportedInputs(TArray<FShaderFunctionDefinition>& OutFunctions) const override;
	void GetShaderParameters(TCHAR const* UID, FShaderParametersMetadataBuilder& InOutBuilder, FShaderParametersMetadataAllocations& InOutAllocations) const override;
	TCHAR const* GetShaderVirtualPath() const override;
	void GetShaderHash(FString& InOutKey) const override;
	void GetHLSL(FString& OutHLSL, FString const& InDataInterfaceName) const override;
	UComputeDataProvider* CreateDataProvider(TObjectPtr<UObject> InBinding, uint64 InInputMask, uint64 InOutputMask) const override;
	//~ End UComputeDataInterface Interface

private:
	static TCHAR const* TemplateFilePath;
};

/** Compute Framework Data Provider for reading a landscape. */
UCLASS()
class UPCGLandscapeDataProvider : public UComputeDataProvider
{
	GENERATED_BODY()

public:
	void Initialize(ALandscape* InLandscape, const FBox& Bounds);

	//~ Begin UComputeDataProvider Interface
	FComputeDataProviderRenderProxy* GetRenderProxy() override;
	//~ End UComputeDataProvider Interface

private:
	TUniquePtr<FPCGLandscapeResource> Resource;
};

class FPCGLandscapeDataProviderProxy : public FComputeDataProviderRenderProxy
{
public:
	FPCGLandscapeDataProviderProxy(const FPCGLandscapeResource* InResource)
		: Resource(InResource)
	{}

	//~ Begin FComputeDataProviderRenderProxy Interface
	bool IsValid(FValidationData const& InValidationData) const override;
	void GatherDispatchData(FDispatchData const& InDispatchData) override;
	void AllocateResources(FRDGBuilder& GraphBuilder, FAllocationData const& InAllocationData) override;
	//~ End FComputeDataProviderRenderProxy Interface

protected:
	using FParameters = FPCGLandscapeDataInterfaceParameters;

	const FPCGLandscapeResource* Resource = nullptr;
};
