// Copyright Epic Games, Inc. All Rights Reserved.

// Based on OptimusDataInterfaceSkinnedMesh.h

#pragma once

#include "Compute/DataInterfaces/PCGDataCollectionDataInterface.h"

#include "Compute/PCGDataBinding.h"

#include "PCGDataCollectionUploadDataInterface.generated.h"

/** Compute Framework Data Interface for reading PCG data. */
UCLASS(ClassGroup = (Procedural))
class UPCGDataCollectionUploadDataInterface : public UPCGDataCollectionDataInterface
{
	GENERATED_BODY()

public:
	//~ Begin UComputeDataInterface Interface
	UComputeDataProvider* CreateDataProvider(TObjectPtr<UObject> InBinding, uint64 InInputMask, uint64 InOutputMask) const override;
	//~ End UComputeDataInterface Interface
};

/** Compute Framework Data Provider for reading a PCG Data Collection. */
UCLASS()
class UPCGDataProviderDataCollectionUpload : public UPCGDataCollectionDataProvider
{
	GENERATED_BODY()

public:
	//~ Begin UComputeDataProvider Interface
	FComputeDataProviderRenderProxy* GetRenderProxy() override;
	//~ End UComputeDataProvider Interface

	TArray<FName> DownstreamInputPinLabels;
};

class FPCGDataProviderDataCollectionUploadProxy : public FPCGDataCollectionDataProviderProxy
{
public:
	FPCGDataProviderDataCollectionUploadProxy(const FPCGDataCollectionDesc& InPinDesc, TArray<uint32>&& PackedDataCollection, const TArray<FName>& InDownstreamInputPinLabels);

	//~ Begin FComputeDataProviderRenderProxy Interface
	void AllocateResources(FRDGBuilder& GraphBuilder, FAllocationData const& InAllocationData) override;
	//~ End FComputeDataProviderRenderProxy Interface

	TArray<uint32> PackedDataCollection;

	TArray<FName> DownstreamInputPinLabels;
};
