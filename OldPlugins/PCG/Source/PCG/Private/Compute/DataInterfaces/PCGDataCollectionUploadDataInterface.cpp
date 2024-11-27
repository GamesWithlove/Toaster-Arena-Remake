// Copyright Epic Games, Inc. All Rights Reserved.

#include "Compute/DataInterfaces/PCGDataCollectionUploadDataInterface.h"

#include "PCGEdge.h"
#include "PCGModule.h"
#include "PCGNode.h"
#include "PCGSettings.h"
#include "Compute/PCGComputeCommon.h"
#include "Compute/PCGComputeGraph.h"
#include "Compute/PCGDataBinding.h"

#include "RenderGraphBuilder.h"
#include "RenderGraphResources.h"

UComputeDataProvider* UPCGDataCollectionUploadDataInterface::CreateDataProvider(TObjectPtr<UObject> InBinding, uint64 InInputMask, uint64 InOutputMask) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(UPCGDataCollectionUploadDataInterface::CreateDataProvider);
	UPCGDataBinding* Binding = CastChecked<UPCGDataBinding>(InBinding);

	UPCGDataProviderDataCollectionUpload* Provider = NewObject<UPCGDataProviderDataCollectionUpload>();
	Provider->Binding = Binding;

	// Pick the data items from input data collection using any of the compute graph element virtual input pin labels.
	// TODO: Ideally we could call ProducerSettings->ComputeOutputPinDataDesc() but some settings do not have associated nodes/pins.
	check(!DownstreamInputPinLabelAliases.IsEmpty());
	Provider->PinDesc = FPCGDataCollectionDesc::BuildFromInputDataCollectionAndInputPinLabel(
		Binding->DataForGPU.InputDataCollection,
		DownstreamInputPinLabelAliases[0],
		Binding->GetAttributeLookupTable(),
		Binding->GetStringTable());

	Provider->DownstreamInputPinLabels = DownstreamInputPinLabelAliases;

	return Provider;
}

FComputeDataProviderRenderProxy* UPCGDataProviderDataCollectionUpload::GetRenderProxy()
{
	TRACE_CPUPROFILER_EVENT_SCOPE(UPCGDataProviderDataCollectionUpload::GetRenderProxy);
	TArray<uint32> PackedDataCollection;

	// Use any downstream input pin label to grab data from the collection.
	check(!DownstreamInputPinLabels.IsEmpty());
	PinDesc.PackDataCollection(Binding->DataForGPU.InputDataCollection, DownstreamInputPinLabels[0], Binding->GetStringTable(), PackedDataCollection);

	if (PCGComputeHelpers::IsBufferSizeTooLarge(PackedDataCollection.Num() * PackedDataCollection.GetTypeSize()))
	{
		return nullptr;
	}

	FPCGDataProviderDataCollectionUploadProxy* Proxy = new FPCGDataProviderDataCollectionUploadProxy(PinDesc, MoveTemp(PackedDataCollection), DownstreamInputPinLabels);

#if WITH_EDITOR
	if (const UPCGNode* Node = Cast<UPCGNode>(ProducerSettings ? ProducerSettings->GetOuter() : nullptr))
	{
		Proxy->SetBufferName(FString::Format(TEXT("PCG_UDC_{0}_{1}"), { Node->GetNodeTitle(EPCGNodeTitleType::ListView).ToString(), OutputPinLabel.ToString() }));
	}
	else
	{
		Proxy->SetBufferName(TEXT("PCG_UDC"));
	}
#endif

	return Proxy;
}

FPCGDataProviderDataCollectionUploadProxy::FPCGDataProviderDataCollectionUploadProxy(const FPCGDataCollectionDesc& InPinDesc, TArray<uint32>&& InPackedDataCollection, const TArray<FName>& InDownstreamInputPinLabels)
	: FPCGDataCollectionDataProviderProxy(InPinDesc, EPCGReadbackMode::None)
	, PackedDataCollection(MoveTemp(InPackedDataCollection))
	, DownstreamInputPinLabels(InDownstreamInputPinLabels)
{
}

void FPCGDataProviderDataCollectionUploadProxy::AllocateResources(FRDGBuilder& GraphBuilder, FAllocationData const& InAllocationData)
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGDataProviderDataCollectionUploadProxy::AllocateResources);

	const TCHAR* DebugName =
#if WITH_EDITOR
		*BufferName;
#else
		TEXT("PCGDataCollectionUploadBuffer");
#endif

	const FRDGBufferDesc Desc = FRDGBufferDesc::CreateStructuredDesc(sizeof(uint32), PackedDataCollection.Num());
	Buffer = GraphBuilder.CreateBuffer(Desc, DebugName);
	BufferUAV = GraphBuilder.CreateUAV(Buffer);

	GraphBuilder.QueueBufferUpload(Buffer, PackedDataCollection.GetData(), PackedDataCollection.Num() * PackedDataCollection.GetTypeSize(), ERDGInitialDataFlags::None);
}
