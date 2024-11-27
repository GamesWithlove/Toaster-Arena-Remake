// Copyright Epic Games, Inc. All Rights Reserved.

#include "Compute/DataInterfaces/PCGDebugDataInterface.h"

#include "PCGModule.h"

#include "RenderGraphBuilder.h"
#include "RenderGraphResources.h"
#include "ShaderCompilerCore.h"
#include "ShaderParameterMetadataBuilder.h"
#include "ComputeFramework/ComputeMetadataBuilder.h"
#include "ComputeFramework/ShaderParameterMetadataAllocation.h"
#include "ComputeFramework/ShaderParamTypeDefinition.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(PCGDebugDataInterface)

void UPCGDebugDataInterface::GetSupportedOutputs(TArray<FShaderFunctionDefinition>& OutFunctions) const
{
	OutFunctions.AddDefaulted_GetRef()
		.SetName("WriteDebugValue")
		.AddParam(EShaderFundamentalType::Uint)
		.AddParam(EShaderFundamentalType::Float);
}

BEGIN_SHADER_PARAMETER_STRUCT(FPCGDebugDataInterfaceParameters, )
	SHADER_PARAMETER_RDG_BUFFER_UAV(RWByteAddressBuffer, DebugBuffer)
END_SHADER_PARAMETER_STRUCT()

void UPCGDebugDataInterface::GetShaderParameters(TCHAR const* UID, FShaderParametersMetadataBuilder& InOutBuilder, FShaderParametersMetadataAllocations& InOutAllocations) const
{
	InOutBuilder.AddNestedStruct<FPCGDebugDataInterfaceParameters>(UID);
}

void UPCGDebugDataInterface::GetShaderHash(FString& InOutKey) const
{
	// UComputeGraph::BuildKernelSource hashes the result of GetHLSL()
	// Only append additional hashes here if the HLSL contains any additional includes	
}

void UPCGDebugDataInterface::GetHLSL(FString& OutHLSL, FString const& InDataInterfaceName) const
{
	const FString WriteDebugValueImpl = (DebugBufferSize > 0)
		? FString::Format(TEXT(
			"\n{\n"
			"	if (Index < {0})\n"
			"	{\n"
			"		return {1}_DebugBuffer.Store(Index * 4, Value);\n"
			"	}\n"
			"}\n"),
			{ DebugBufferSize, *InDataInterfaceName })
		: TEXT("{ /* No-Op */ }\n");

	OutHLSL += FString::Format(TEXT(
		"RWByteAddressBuffer {0}_DebugBuffer;\n"
		"void WriteDebugValue_{0}(uint Index, float Value) {1}"),
		{ *InDataInterfaceName, WriteDebugValueImpl });
}

bool UPCGDebugDataInterface::GetRequiresReadback() const
{
	return DebugBufferSize > 0;
}

UComputeDataProvider* UPCGDebugDataInterface::CreateDataProvider(TObjectPtr<UObject> InBinding, uint64 InInputMask, uint64 InOutputMask) const
{
	UPCGDebugDataProvider* Provider = NewObject<UPCGDebugDataProvider>();
	Provider->DebugBufferSize = DebugBufferSize;
	return Provider;
}

FComputeDataProviderRenderProxy* UPCGDebugDataProvider::GetRenderProxy()
{
	TWeakObjectPtr<UPCGDebugDataProvider> ThisWeakPtr(this);

	auto ProcessReadbackData_RenderThread = [ThisWeakPtr](const void* InData, int InNumBytes)
	{
		if (!ThisWeakPtr.IsValid() || !ThisWeakPtr.Get() || !InData)
		{
			return;
		}

		check(ThisWeakPtr->DebugBufferSize * sizeof(float) == InNumBytes);

		UPCGDebugDataProvider* DataProvider = ThisWeakPtr.Get();
		
		const float* DataAsFloat = static_cast<const float*>(InData);

		UE_LOG(LogPCG, Warning, TEXT("Logging kernel debug..."));

		for (int Index = 0; Index < InNumBytes / sizeof(float); ++Index)
		{
			UE_LOG(LogPCG, Warning, TEXT("\t%d:\t%f"), Index, DataAsFloat[Index]);
		}

		DataProvider->bOperationComplete = true;
	};

	return new FPCGDebugDataProviderProxy(DebugBufferSize, ProcessReadbackData_RenderThread);
}

bool FPCGDebugDataProviderProxy::IsValid(FValidationData const& InValidationData) const
{
	if (InValidationData.ParameterStructSize != sizeof(FParameters))
	{
		UE_LOG(LogPCG, Error, TEXT("Proxy invalid due to mismatching ParameterStructSize."));
		return false;
	}

	return true;
}

void FPCGDebugDataProviderProxy::GatherDispatchData(FDispatchData const& InDispatchData)
{
	const TStridedView<FParameters> ParameterArray = MakeStridedParameterView<FParameters>(InDispatchData);
	for (int32 InvocationIndex = 0; InvocationIndex < InDispatchData.NumInvocations; ++InvocationIndex)
	{
		FParameters& Parameters = ParameterArray[InvocationIndex];
		Parameters.DebugBuffer = DebugBufferUAV;
	}
}

void FPCGDebugDataProviderProxy::AllocateResources(FRDGBuilder& GraphBuilder, FAllocationData const& InAllocationData)
{
	if (DebugBufferSize > 0)
	{
		FRDGBufferDesc Desc = FRDGBufferDesc::CreateStructuredDesc(sizeof(float), DebugBufferSize);
		Desc.Usage = EBufferUsageFlags(Desc.Usage | BUF_SourceCopy);
		DebugBuffer = GraphBuilder.CreateBuffer(Desc, TEXT("PCGDebugBuffer"));
		DebugBufferUAV = GraphBuilder.CreateUAV(DebugBuffer);

		TArray<float> ZeroInitializedBuffer;
		ZeroInitializedBuffer.SetNumZeroed(DebugBufferSize);

		GraphBuilder.QueueBufferUpload(DebugBuffer, ZeroInitializedBuffer.GetData(), ZeroInitializedBuffer.Num() * sizeof(float), ERDGInitialDataFlags::None);
	}
}

void FPCGDebugDataProviderProxy::GetReadbackData(TArray<FReadbackData>& OutReadbackData) const
{
	FReadbackData Data;
	Data.Buffer = DebugBuffer;
	Data.NumBytes = DebugBufferSize * sizeof(float);
	Data.ReadbackCallback_RenderThread = &AsyncReadbackCallback_RenderThread;

	OutReadbackData.Add(MoveTemp(Data));
}
