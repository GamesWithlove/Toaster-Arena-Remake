// Copyright Epic Games, Inc. All Rights Reserved.

#include "PCGInstanceDataInterface.h"

#include "PCGData.h"
#include "PCGNode.h"
#include "PCGSettings.h"
#include "PCGSceneWriterCS.h"
#include "Compute/PCGComputeCommon.h"
#include "Compute/PCGDataBinding.h"
#include "Data/PCGTextureData.h"

#include "GlobalRenderResources.h"
#include "GlobalShader.h"
#include "GPUSceneWriter.h"
#include "InstanceDataSceneProxy.h"
#include "PrimitiveSceneInfo.h"
#include "PrimitiveSceneProxy.h"
#include "RendererUtils.h"
#include "RenderGraphBuilder.h"
#include "RenderGraphUtils.h"
#include "RHIResources.h"
#include "RHIStaticStates.h"
#include "SceneComputeUpdates.h"
#include "ShaderCompilerCore.h"
#include "ShaderCore.h"
#include "ShaderParameterMetadataBuilder.h"
#include "ShaderParameterStruct.h"
#include "TextureResource.h"
#include "Components/PrimitiveComponent.h"
#include "ComputeFramework/ComputeKernelPermutationSet.h"
#include "ComputeFramework/ShaderParamTypeDefinition.h"
#include "Engine/Texture.h"
#include "Engine/World.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(PCGInstanceDataInterface)

void UPCGInstanceDataInterface::GetSupportedOutputs(TArray<FShaderFunctionDefinition>& OutFunctions) const
{
	OutFunctions.AddDefaulted_GetRef()
		.SetName(TEXT("InstanceData_GetNumPrimitives"))
		.AddReturnType(EShaderFundamentalType::Uint);

	OutFunctions.AddDefaulted_GetRef()
		.SetName(TEXT("InstanceData_GetNumInstancesAllPrimitives"))
		.AddReturnType(EShaderFundamentalType::Uint);

	OutFunctions.AddDefaulted_GetRef()
		.SetName(TEXT("InstanceData_GetIndexToWriteTo"))
		.AddReturnType(EShaderFundamentalType::Int)
		.AddParam(EShaderFundamentalType::Uint); // InPrimitiveIndex

	OutFunctions.AddDefaulted_GetRef()
		.SetName(TEXT("InstanceData_WriteInstanceLocalToWorld"))
		.AddParam(EShaderFundamentalType::Uint) // InInstanceIndex
		.AddParam(EShaderFundamentalType::Float, 4, 4);  // InTransform

	OutFunctions.AddDefaulted_GetRef()
		.SetName(TEXT("InstanceData_WriteCustomFloat"))
		.AddParam(EShaderFundamentalType::Uint) // InInstanceIndex
		.AddParam(EShaderFundamentalType::Uint) // InCustomFloatIndex
		.AddParam(EShaderFundamentalType::Float); // InValue

	OutFunctions.AddDefaulted_GetRef()
		.SetName(TEXT("InstanceData_WriteCustomFloatRaw"))
		.AddParam(EShaderFundamentalType::Uint) // InInstanceIndex
		.AddParam(EShaderFundamentalType::Uint) // InCustomFloatIndex
		.AddParam(EShaderFundamentalType::Uint); // InValueAsUint
}

BEGIN_SHADER_PARAMETER_STRUCT(FPCGInstanceDataInterfaceParameters,)
	SHADER_PARAMETER_ARRAY(FUintVector4, PrimitiveParameters, [PCGComputeConstants::MAX_PRIMITIVE_COMPONENTS_PER_SPAWNER]) // (NumInstancesAllocated, InstanceOffset, Unused, Unused)
	SHADER_PARAMETER(uint32, NumPrimitives)
	SHADER_PARAMETER(uint32, NumInstancesAllPrimitives)
	SHADER_PARAMETER(uint32, NumCustomFloatsPerInstance)
	SHADER_PARAMETER_RDG_BUFFER_UAV(RWStructuredBuffer<FUintVector4>, InstanceData)
	SHADER_PARAMETER_RDG_BUFFER_UAV(RWStructuredBuffer<uint32>, InstanceCustomFloatData)
	SHADER_PARAMETER_RDG_BUFFER_UAV(RWStructuredBuffer<uint32>, WriteCounters)
END_SHADER_PARAMETER_STRUCT()

void UPCGInstanceDataInterface::GetShaderParameters(TCHAR const* UID, FShaderParametersMetadataBuilder& InOutBuilder, FShaderParametersMetadataAllocations& InOutAllocations) const
{
	InOutBuilder.AddNestedStruct<FPCGInstanceDataInterfaceParameters>(UID);
}

TCHAR const* UPCGInstanceDataInterface::TemplateFilePath = TEXT("/Plugin/PCG/Private/PCGInstanceDataInterface.ush");

TCHAR const* UPCGInstanceDataInterface::GetShaderVirtualPath() const
{
	return TemplateFilePath;
}

void UPCGInstanceDataInterface::GetShaderHash(FString& InOutKey) const
{
	GetShaderFileHash(TemplateFilePath, EShaderPlatform::SP_PCD3D_SM5).AppendString(InOutKey);
}

void UPCGInstanceDataInterface::GetHLSL(FString& OutHLSL, FString const& InDataInterfaceName) const
{
	TMap<FString, FStringFormatArg> TemplateArgs =
	{
		{ TEXT("DataInterfaceName"), InDataInterfaceName },
	};

	FString TemplateFile;
	if (ensure(LoadShaderSourceFile(TemplateFilePath, EShaderPlatform::SP_PCD3D_SM5, &TemplateFile, nullptr)))
	{
		OutHLSL += FString::Format(*TemplateFile, TemplateArgs);
	}
}

UComputeDataProvider* UPCGInstanceDataInterface::CreateDataProvider(TObjectPtr<UObject> InBinding, uint64 InInputMask, uint64 InOutputMask) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(UPCGInstanceDataInterface::CreateDataProvider);
	UPCGDataBinding* Binding = CastChecked<UPCGDataBinding>(InBinding);
	check(ProducerSettings);

	TObjectPtr<UPCGInstanceDataProvider> DataProvider = NewObject<UPCGInstanceDataProvider>();

	// If there were 0 input points (or too many input points) for this execution, we will not have created any primitives, so check for null.
	if (FPCGSpawnerPrimitives* FoundPrimitives = Binding->MeshSpawnersToPrimitives.Find(ProducerSettings))
	{
		const FPCGDataCollectionDesc InputDataDesc = PCGDataForGPUHelpers::ComputeInputPinDataDesc(ProducerSettings, InputPinProvidingData, Binding);
		DataProvider->NumInstancesAllPrimitives = InputDataDesc.ComputeDataElementCount(EPCGDataType::Point);

		if (!ensure(FoundPrimitives->Primitives.Num() <= PCGComputeConstants::MAX_PRIMITIVE_COMPONENTS_PER_SPAWNER))
		{
			// Last resort - should be clamped earlier during setup and not come to this.
			FoundPrimitives->Primitives.SetNum(PCGComputeConstants::MAX_PRIMITIVE_COMPONENTS_PER_SPAWNER);
		}

		DataProvider->Primitives = FoundPrimitives->Primitives;
		DataProvider->NumCustomFloatsPerInstance = FoundPrimitives->NumCustomFloats;

		if (FoundPrimitives->SelectorAttributeId != -1)
		{
			// When selecting primitives dynamically (by attribute), we don't know statically how many instances will end up in each primitive, so run worst case.
			DataProvider->NumInstancesAllPrimitives *= FoundPrimitives->Primitives.Num();
		}
	}

	return DataProvider;
}

FComputeDataProviderRenderProxy* UPCGInstanceDataProvider::GetRenderProxy()
{
	TRACE_CPUPROFILER_EVENT_SCOPE(UPCGInstanceDataProvider::GetRenderProxy);
	TArray<FPrimitiveSceneProxy*> PrimitiveProxies;
	PrimitiveProxies.Reserve(Primitives.Num());
	
	for (TObjectPtr<UPrimitiveComponent>& Primitive : Primitives)
	{
		UWorld* World = Primitive ? Primitive->GetWorld() : nullptr;
		FSceneInterface* Scene = World ? World->Scene : nullptr;
		if (FPrimitiveSceneProxy* PrimitiveSceneProxy = Primitive ? Primitive->GetSceneProxy() : nullptr)
		{
			PrimitiveProxies.Add(PrimitiveSceneProxy);
		}
	}

	return new FPCGInstanceDataProviderProxy(MoveTemp(PrimitiveProxies), NumInstancesAllPrimitives, NumCustomFloatsPerInstance);
}

FPCGInstanceDataProviderProxy::FPCGInstanceDataProviderProxy(TArray<FPrimitiveSceneProxy*>&& InPrimitiveSceneProxies, uint32 InNumInstancesAllPrimitives, uint32 InNumCustomFloatsPerInstance)
	: PrimitiveSceneProxies(MoveTemp(InPrimitiveSceneProxies))
	, NumInstancesAllPrimitives(InNumInstancesAllPrimitives)
	, NumCustomFloatsPerInstance(InNumCustomFloatsPerInstance)
{
}

bool FPCGInstanceDataProviderProxy::IsValid(FValidationData const& InValidationData) const
{
	return InValidationData.ParameterStructSize == sizeof(FParameters);
}

void FPCGInstanceDataProviderProxy::AllocateResources(FRDGBuilder& GraphBuilder, FAllocationData const& InAllocationData)
{
	const uint32 StrideUint4s = 3;
	InstanceData = GraphBuilder.CreateBuffer(FRDGBufferDesc::CreateStructuredDesc(sizeof(FUintVector4) * StrideUint4s, FMath::Max(1u, NumInstancesAllPrimitives)), TEXT("PCGInstanceDataBuffer"));
	InstanceDataSRV = GraphBuilder.CreateSRV(InstanceData);
	InstanceDataUAV = GraphBuilder.CreateUAV(InstanceData);

	const uint32 CustomFloatsRequired = FMath::Max(1u, NumInstancesAllPrimitives * NumCustomFloatsPerInstance);
	InstanceCustomFloatData = GraphBuilder.CreateBuffer(FRDGBufferDesc::CreateStructuredDesc(sizeof(uint32), CustomFloatsRequired), TEXT("PCGInstanceCustomFloatDataBuffer"));
	InstanceCustomFloatDataSRV = GraphBuilder.CreateSRV(InstanceCustomFloatData);
	InstanceCustomFloatDataUAV = GraphBuilder.CreateUAV(InstanceCustomFloatData);

	const int32 NumCountersRequired = FMath::Max(1, PrimitiveSceneProxies.Num());
	WriteCounters = GraphBuilder.CreateBuffer(FRDGBufferDesc::CreateStructuredDesc(sizeof(uint32), NumCountersRequired), TEXT("PCGWriteCounters"));
	WriteCountersSRV = GraphBuilder.CreateSRV(WriteCounters);
	WriteCountersUAV = GraphBuilder.CreateUAV(WriteCounters);
	TArray<uint32> Zeros;
	Zeros.SetNumZeroed(NumCountersRequired);
	GraphBuilder.QueueBufferUpload(WriteCounters, Zeros.GetData(), Zeros.Num() * Zeros.GetTypeSize());
}

void FPCGInstanceDataProviderProxy::GatherDispatchData(FDispatchData const& InDispatchData)
{
	const TStridedView<FParameters> ParameterArray = MakeStridedParameterView<FParameters>(InDispatchData);
	for (int32 InvocationIndex = 0; InvocationIndex < ParameterArray.Num(); ++InvocationIndex)
	{
		FParameters& Parameters = ParameterArray[InvocationIndex];
		Parameters.NumPrimitives = PrimitiveSceneProxies.Num();
		Parameters.NumInstancesAllPrimitives = NumInstancesAllPrimitives;
		Parameters.NumCustomFloatsPerInstance = NumCustomFloatsPerInstance;
		Parameters.InstanceData = InstanceDataUAV;
		Parameters.InstanceCustomFloatData = InstanceCustomFloatDataUAV;
		Parameters.WriteCounters = WriteCountersUAV;

		uint32 CumulativeInstanceCount = 0;
		for (int32 Index = 0; Index < PrimitiveSceneProxies.Num(); ++Index)
		{
			const uint32 PrimitiveInstanceCount = PrimitiveSceneProxies[Index]->GetInstanceDataHeader().NumInstances;

			Parameters.PrimitiveParameters[Index] = FUintVector4(
				PrimitiveInstanceCount,
				CumulativeInstanceCount,
				0, 0); // Unused

			CumulativeInstanceCount += PrimitiveInstanceCount;
		}
	}
}

void FPCGInstanceDataProviderProxy::PostGraphDispatch(FRDGBuilder& GraphBuilder) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGInstanceDataProviderProxy::PostGraphDispatch);

	if (NumInstancesAllPrimitives == 0)
	{
		return;
	}

	const FSceneComputeUpdatesBlackboardEntry* SceneComputeUpdatesBB = GraphBuilder.Blackboard.Get<FSceneComputeUpdatesBlackboardEntry>();
	if (!SceneComputeUpdatesBB || !ensure(SceneComputeUpdatesBB->SceneComputeUpdates))
	{
		UE_LOG(LogPCG, Warning, TEXT("Scene Compute Updates interface missing from graph builder blackboard. Scene will not be updated."));
		return;
	}

	uint32 CumulativeInstanceCount = 0;

	// One dispatch per primitive. If the scene compute update API supported writing to multiple primitives this could be done in one unified call.
	for (int32 PrimitiveIndex = 0; PrimitiveIndex < PrimitiveSceneProxies.Num(); ++PrimitiveIndex)
	{
		FPrimitiveSceneProxy* PrimitiveSceneProxy = PrimitiveSceneProxies[PrimitiveIndex];
		FPrimitiveSceneInfo* SceneInfo = PrimitiveSceneProxy ? PrimitiveSceneProxy->GetPrimitiveSceneInfo() : nullptr;
		if (!ensure(SceneInfo))
		{
			return;
		}

		const int32 NumInstancesAllocatedInGPUScene = PrimitiveSceneProxy->GetInstanceDataHeader().NumInstances;

		// Post graph dispatch, the instance data will have been populated. Enqueue a scene update to write the instance data into the scene.
		// Will get executed on same frame and in same builder.
		SceneComputeUpdatesBB->SceneComputeUpdates->EnqueueUpdate(SceneInfo,
			FGPUSceneWriteDelegate::CreateLambda([PrimitiveIndex, NumInstancesAllocatedInGPUScene, CumulativeInstanceCount, InstanceDataSRV=InstanceDataSRV, InstanceCustomFloatDataSRV=InstanceCustomFloatDataSRV, WriteCountersSRV=WriteCountersSRV](FRDGBuilder& GraphBuilder, const FGPUSceneWriteDelegateParams& Params)
			{
				RDG_EVENT_SCOPE(GraphBuilder, "SceneComputeUpdateInterface->EnqueueUpdate");
				check(Params.PersistentPrimitiveId != (uint32)INDEX_NONE);

				// Write instances
				FPCGSceneWriterCS::FParameters* Parameters = GraphBuilder.AllocParameters<FPCGSceneWriterCS::FParameters>();
				Parameters->InPrimitiveIndex = PrimitiveIndex;
				Parameters->InNumInstancesAllocatedInGPUScene = NumInstancesAllocatedInGPUScene;
				Parameters->InInstanceOffset = CumulativeInstanceCount;
				Parameters->InInstanceData = InstanceDataSRV;
				Parameters->InInstanceCustomFloatData = InstanceCustomFloatDataSRV;
				Parameters->InWriteCounters = WriteCountersSRV;
				Parameters->InPrimitiveId = Params.PersistentPrimitiveId;
				Parameters->GPUSceneWriterParameters = Params.GPUWriteParams;
				Parameters->InCustomDataCount = Params.NumCustomDataFloats;
				Parameters->InPayloadDataFlags = Params.PackedInstanceSceneDataFlags;
			
				// We're using a custom compute shader here rather than using a compute graph kernel, because ultimately the scene update will incorporate the
				// new instance data. In the future we will not write directly to the scene here.
				TShaderMapRef<FPCGSceneWriterCS> Shader(GetGlobalShaderMap(GMaxRHIFeatureLevel));
				const int GroupCount = FMath::DivideAndRoundUp<int>(NumInstancesAllocatedInGPUScene, FPCGSceneWriterCS::NumThreadsPerGroup);
				FComputeShaderUtils::AddPass(GraphBuilder, RDG_EVENT_NAME("PCGWriteInstanceData"), ERDGPassFlags::Compute | ERDGPassFlags::NeverCull, Shader, Parameters, FIntVector(GroupCount, 1, 1));
			}));

		CumulativeInstanceCount += NumInstancesAllocatedInGPUScene;
	}
}
