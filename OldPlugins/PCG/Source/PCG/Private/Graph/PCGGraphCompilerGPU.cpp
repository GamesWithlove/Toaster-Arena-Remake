// Copyright Epic Games, Inc. All Rights Reserved.

#include "Graph/PCGGraphCompilerGPU.h"

#include "PCGGraph.h"
#include "PCGModule.h"
#include "PCGPin.h"
#include "Compute/PCGComputeCommon.h"
#include "Compute/PCGComputeKernelSource.h"
#include "Compute/DataInterfaces/PCGCustomKernelDataInterface.h"
#include "Compute/DataInterfaces/PCGDataCollectionDataInterface.h"
#include "Compute/DataInterfaces/PCGDataCollectionUploadDataInterface.h"
#include "Compute/DataInterfaces/PCGDebugDataInterface.h"
#include "Compute/DataInterfaces/PCGLandscapeDataInterface.h"
#include "Compute/DataInterfaces/PCGTextureDataInterface.h"
#include "Compute/Elements/PCGComputeGraphElement.h"
#include "Elements/PCGStaticMeshSpawner.h"
#include "Graph/PCGGPUGraphCompilationContext.h"
#include "Graph/PCGGraphCompiler.h"
#include "Graph/PCGGraphExecutor.h"

#include "ComputeFramework/ComputeKernel.h"
#include "HAL/IConsoleManager.h"
#include "Misc/App.h"
#include "Shader/ShaderTypes.h"
#include "UObject/Package.h"

#if WITH_EDITOR
namespace PCGGraphCompilerGPU
{
	static TAutoConsoleVariable<bool> CVarEnableDebugging(
		TEXT("pcg.GraphExecution.GPU.EnableDebugging"),
		false,
		TEXT("Enable verbose logging of GPU compilation and execution."));
}

void FPCGGraphCompilerGPU::LabelConnectedGPUNodeIslands(
	const TArray<FPCGGraphTask>& InCompiledTasks,
	const TSet<FPCGTaskId>& InGPUCompatibleTaskIds,
	const FTaskToSuccessors& InTaskSuccessors,
	TArray<uint32>& OutIslandIDs)
{
	OutIslandIDs.SetNumZeroed(InCompiledTasks.Num());

	// Traverses task inputs and successors and assigns the given island ID to each one. Memoized via output OutIslandIDs.
	auto FloodFillIslandID = [&InCompiledTasks, &InTaskSuccessors, &InGPUCompatibleTaskIds, &OutIslandIDs](FPCGTaskId InTaskId, int InIslandID, FPCGTaskId InTraversedFromTaskId, auto&& RecursiveCall) -> void
	{
		check(InTaskId != InTraversedFromTaskId);

		OutIslandIDs[InTaskId] = InIslandID;

		for (const FPCGGraphTaskInput& Input : InCompiledTasks[InTaskId].Inputs)
		{
			if (Input.TaskId == InTraversedFromTaskId)
			{
				continue;
			}

			if (OutIslandIDs[Input.TaskId] == 0 && InGPUCompatibleTaskIds.Contains(Input.TaskId))
			{
				RecursiveCall(Input.TaskId, InIslandID, InTaskId, RecursiveCall);
			}
		}

		if (const TArray<FPCGTaskId>* Successors = InTaskSuccessors.Find(InTaskId))
		{
			for (FPCGTaskId Successor : *Successors)
			{
				if (Successor == InTraversedFromTaskId)
				{
					continue;
				}

				if (OutIslandIDs[Successor] == 0 && InGPUCompatibleTaskIds.Contains(Successor))
				{
					RecursiveCall(Successor, InIslandID, InTaskId, RecursiveCall);
				}
			}
		}
	};

	for (FPCGTaskId GPUTaskId : InGPUCompatibleTaskIds)
	{
		if (OutIslandIDs[GPUTaskId] == 0)
		{
			// Really doesn't matter what the island IDs are so just use ID of first task encountered in island.
			const uint32 IslandID = static_cast<uint32>(GPUTaskId);
			FloodFillIslandID(GPUTaskId, IslandID, InvalidPCGTaskId, FloodFillIslandID);
		}
	}
}

void FPCGGraphCompilerGPU::CollectGPUNodeSubsets(
	const TArray<FPCGGraphTask>& InCompiledTasks,
	const FTaskToSuccessors& InTaskSuccessors,
	const TSet<FPCGTaskId>& InGPUCompatibleTaskIds,
	TArray<TSet<FPCGTaskId>>& OutNodeSubsetsToConvertToCFGraph)
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGGraphCompilerGPU::CollectGPUNodeSubsets);

	// Identifies connected sets of GPU nodes, giving each a non-zero ID value.
	TArray<uint32> ConnectedGPUNodeIslandIDs;
	LabelConnectedGPUNodeIslands(InCompiledTasks, InGPUCompatibleTaskIds, InTaskSuccessors, ConnectedGPUNodeIslandIDs);

	// For every CPU node that has one or more downstream GPU node connected, check for a GPU -> CPU -> GPU pattern where data flows
	// from a GPU node island to the CPU and then back to the same island. For such cases, we traverse the entire tree of GPU nodes that
	// are in the island and downstream of the CPU node and bump their island ID - splitting the island into a portion that is independent
	// of the CPU node and a portion that is dependent on it, so that we can read the data back to CPU, execute the CPU portion, then
	// re-upload to GPU.
	
	// Any new island IDs will be created from the task count which will be larger than any island IDs presently set.
	uint32 NextIslandId = InCompiledTasks.Num();

	// Cache dependencies. Since our islands are only ever split (rather than replaced or removed), the dependency on each island ID is invariant.
	TMap<TPair<FPCGTaskId, /*IslandId*/uint32>, /*bIsDependent*/bool> CPUNodeIsDependentOnIslandCached;

	// Visit tasks in execution order so that splits happen as upstream to minimize island splits.
	FPCGGraphCompiler::VisitTasksInExecutionOrder(
		InCompiledTasks,
		InTaskSuccessors,
		[&InCompiledTasks, &InTaskSuccessors, &InGPUCompatibleTaskIds, &ConnectedGPUNodeIslandIDs, &NextIslandId, &CPUNodeIsDependentOnIslandCached](FPCGTaskId InTaskId) -> bool
		{
			if (InGPUCompatibleTaskIds.Contains(InTaskId))
			{
				// Skip GPU nodes.
				return true;
			}

			if (const TArray<FPCGTaskId>* Successors = InTaskSuccessors.Find(InTaskId))
			{
				for (FPCGTaskId SuccessorTaskId : *Successors)
				{
					if (!InGPUCompatibleTaskIds.Contains(SuccessorTaskId))
					{
						continue;
					}

					const uint32 SuccessorIsland = ConnectedGPUNodeIslandIDs[SuccessorTaskId];

					// Recursively check entire node tree upstream of this CPU node to see if it can be fed by any node in the GPU island.
					auto CPUNodeIsDependentOnIsland = [&InCompiledTasks, &InTaskSuccessors, &InGPUCompatibleTaskIds, &ConnectedGPUNodeIslandIDs, &CPUNodeIsDependentOnIslandCached](FPCGTaskId InTaskId, uint32 InIslandID, auto&& RecursiveCall) -> bool
					{
						if (bool* CachedValue = CPUNodeIsDependentOnIslandCached.Find({ InTaskId, InIslandID }))
						{
							return *CachedValue;
						}

						// Is this task is part of the specified island.
						bool bIsDependent = ConnectedGPUNodeIslandIDs[InTaskId] == InIslandID;

						if (!bIsDependent)
						{
							// Check upstream tasks recursively.
							for (const FPCGGraphTaskInput& Input : InCompiledTasks[InTaskId].Inputs)
							{
								if (RecursiveCall(Input.TaskId, InIslandID, RecursiveCall))
								{
									bIsDependent = true;
									break;
								}
							}
						}

						CPUNodeIsDependentOnIslandCached.Add({ InTaskId, InIslandID }, bIsDependent);

						return bIsDependent;
					};

					if (CPUNodeIsDependentOnIsland(InTaskId, SuccessorIsland, CPUNodeIsDependentOnIsland))
					{
						// Propagate a new island ID to all downstream GPU tasks within the island.

						auto PropagateIslandIDDownstream = [&InCompiledTasks, &InTaskSuccessors, &InGPUCompatibleTaskIds, &ConnectedGPUNodeIslandIDs](FPCGTaskId InTaskId, uint32 InOldIslandID, uint32 InNewIslandID, auto&& RecursiveCall) -> void
						{
							ConnectedGPUNodeIslandIDs[InTaskId] = InNewIslandID;

							if (const TArray<FPCGTaskId>* Successors = InTaskSuccessors.Find(InTaskId))
							{
								for (FPCGTaskId Successor : *Successors)
								{
									if (ConnectedGPUNodeIslandIDs[Successor] == InOldIslandID && InGPUCompatibleTaskIds.Contains(Successor))
									{
										RecursiveCall(Successor, InOldIslandID, InNewIslandID, RecursiveCall);
									}
								}
							}
						};

						PropagateIslandIDDownstream(SuccessorTaskId, SuccessorIsland, NextIslandId++, PropagateIslandIDDownstream);
					}
				}
			}

			return true;
		});

	// Island IDs now correctly identify subsets of nodes that will be assembled into compute graphs for GPU execution.
	for (FPCGTaskId TaskId = 0; TaskId < InCompiledTasks.Num(); ++TaskId)
	{
		if (ConnectedGPUNodeIslandIDs[TaskId] != 0)
		{
			TSet<FPCGTaskId> GPUNodeSubset;

			const uint32 IslandId = ConnectedGPUNodeIslandIDs[TaskId];

			for (FPCGTaskId OtherTaskId = TaskId; OtherTaskId < InCompiledTasks.Num(); ++OtherTaskId)
			{
				if (ConnectedGPUNodeIslandIDs[OtherTaskId] == IslandId)
				{
					GPUNodeSubset.Add(OtherTaskId);

					ConnectedGPUNodeIslandIDs[OtherTaskId] = 0;
				}
			}

			OutNodeSubsetsToConvertToCFGraph.Add(MoveTemp(GPUNodeSubset));
		}
	}
}

void FPCGGraphCompilerGPU::CreateGatherTasksAtGPUInputs(UPCGGraph* InGraph, const TSet<FPCGTaskId>& InGPUCompatibleTaskIds, TArray<FPCGGraphTask>& InOutCompiledTasks)
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGGraphCompilerGPU::CreateGatherTasksAtGPUInputs);

	using FOriginalInputPinKey = TPair<FPCGTaskId /* Original GPU task */, FName /* Input pin label */>;

	// These are local to loop below but hoisted here for efficiency.
	TSet<FOriginalInputPinKey> EncounteredInputPins; // TODO this is heavyweight, could use simple array.
	TMap<FOriginalInputPinKey, FPCGTaskId /* Gather task */> InputPinToGatherTask;

	// Add all compute graph task inputs and outputs.
	for (FPCGTaskId GPUTaskId : InGPUCompatibleTaskIds)
	{
		EncounteredInputPins.Reset();
		InputPinToGatherTask.Reset();

		// First pass - create gather tasks for all original input pins which have more than one incident edge.
		// This is so we can gather on the CPU (much more efficient than going it on the GPU).
		for (int InputIndex = 0; InputIndex < InOutCompiledTasks[GPUTaskId].Inputs.Num(); ++InputIndex)
		{
			// Helper to get current input. We avoid simply taking a local reference as InOutCompiledTasks can be modified below.
			auto CurrentInput = [&InOutCompiledTasks, InputIndex, GPUTaskId]() -> FPCGGraphTaskInput&
			{
				return InOutCompiledTasks[GPUTaskId].Inputs[InputIndex];
			};

			if (!CurrentInput().DownstreamPin.IsSet())
			{
				continue;
			}

			const FOriginalInputPinKey PinKey = { GPUTaskId, CurrentInput().DownstreamPin->Label };

			// If already created a gather task, then nothing more to do for this pin.
			if (const FPCGTaskId* GatherTaskId = InputPinToGatherTask.Find(PinKey))
			{
				continue;
			}

			// If we're encountering pin for first time, register it.
			if (!EncounteredInputPins.Contains(PinKey))
			{
				EncounteredInputPins.Add(PinKey);
				continue;
			}

			// Second time we've encountered this input pin - create a gather element because we need one edge connected to
			// each virtual input pin, so that we can obtain the data items from the input data collection using the unique
			// virtual pin label at execution time.
			const FPCGTaskId GatherTaskId = InOutCompiledTasks.Num();
			FPCGGraphTask& GatherTask = InOutCompiledTasks.Emplace_GetRef();
			GatherTask.NodeId = GatherTaskId;
			GatherTask.ParentId = InOutCompiledTasks[GPUTaskId].ParentId;
			GatherTask.ElementSource = EPCGElementSource::Gather;

			InputPinToGatherTask.Add(PinKey, GatherTaskId);
		}

		EncounteredInputPins.Reset();

		// Second pass - wire up the newly added gather tasks once we have the full picture of which edges are affected.
		for (int InputIndex = 0; InputIndex < InOutCompiledTasks[GPUTaskId].Inputs.Num(); ++InputIndex)
		{
			auto CurrentInput = [&InOutCompiledTasks, InputIndex, GPUTaskId]() -> FPCGGraphTaskInput&
			{
				return InOutCompiledTasks[GPUTaskId].Inputs[InputIndex];
			};

			if (!CurrentInput().DownstreamPin.IsSet())
			{
				continue;
			}

			const FOriginalInputPinKey PinKey = { GPUTaskId, CurrentInput().DownstreamPin->Label };

			if (const FPCGTaskId* GatherTaskId = InputPinToGatherTask.Find(PinKey))
			{
				// Wire the upstream output pin to the gather task.
				FPCGGraphTaskInput& WireUpstreamNodeToGather = InOutCompiledTasks[*GatherTaskId].Inputs.Add_GetRef(CurrentInput());
				if (WireUpstreamNodeToGather.DownstreamPin.IsSet())
				{
					WireUpstreamNodeToGather.DownstreamPin->Label = PCGPinConstants::DefaultInputLabel;
				}

				if (!EncounteredInputPins.Contains(PinKey))
				{
					// First time we're encountering this input pin, wire it to the gather task.
					EncounteredInputPins.Add(PinKey);

					CurrentInput().TaskId = *GatherTaskId;
					if (CurrentInput().UpstreamPin.IsSet())
					{
						CurrentInput().UpstreamPin->Label = PCGPinConstants::DefaultOutputLabel;
					}
				}
				else
				{
					// Input pin already encountered, already wired to gather task. Remove this input.
					InOutCompiledTasks[GPUTaskId].Inputs.RemoveAt(InputIndex);
					--InputIndex;
				}
			}
		}
	}
}

void FPCGGraphCompilerGPU::SetupVirtualPins(
	const TSet<FPCGTaskId>& InCollapsedTasks,
	const TArray<FPCGGraphTask>& InCompiledTasks,
	const FTaskToSuccessors& InTaskSuccessors,
	FOriginalToVirtualPin& OutOriginalToVirtualPin,
	TMap<TSoftObjectPtr<const UPCGPin>, FName>& OutOutputCPUPinToVirtualPin)
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGGraphCompilerGPU::SetupVirtualPins);

	// Used to construct unique input/output labels, ultimately consumed in graph executor in BuildTaskInput and PostExecute for input/output respectively.
	int InputCount = 0;
	int OutputCount = 0;

	// Add all compute graph task inputs and outputs.
	for (FPCGTaskId GPUTaskId : InCollapsedTasks)
	{
		// First input edges to the compute graph.
		for (const FPCGGraphTaskInput& Input : InCompiledTasks[GPUTaskId].Inputs)
		{
			if (InCollapsedTasks.Contains(Input.TaskId))
			{
				continue;
			}

			// TODO is pinless fine with skipping?
			if (Input.DownstreamPin.IsSet())
			{
				const FName VirtualLabel = *FString::Format(TEXT("{0}-VirtualIn{1}"), { Input.DownstreamPin->Label.ToString(), InputCount });
				const bool bIsInputPin = true;
				OutOriginalToVirtualPin.Add({ GPUTaskId, Input.DownstreamPin->Label, bIsInputPin }, VirtualLabel);

				++InputCount;

				const FPCGGraphTask& UpstreamTask = InCompiledTasks[Input.TaskId];
				const UPCGPin* OutputPin = UpstreamTask.Node ? UpstreamTask.Node->GetOutputPin(Input.UpstreamPin->Label) : nullptr;

				// Grid Linkages don't have a node associated, so ask the GridLinkageElement for the output pin instead.
				if (!OutputPin)
				{
					// TODO: In the future FPCGGridLinkageElement shoud be stateless (like all other elements), and we should always only consult the
					// linkage settings for the upstream pin.
					if (UpstreamTask.Element && UpstreamTask.Element->IsGridLinkage())
					{
						const PCGGraphExecutor::FPCGGridLinkageElement* LinkageElement = static_cast<const PCGGraphExecutor::FPCGGridLinkageElement*>(UpstreamTask.Element.Get());
						OutputPin = LinkageElement->GetUpstreamPin();
					}
					else if (UpstreamTask.CookedSettings && UpstreamTask.CookedSettings->IsA<UPCGGridLinkageSettings>())
					{
						const UPCGGridLinkageSettings* LinkageSettings = CastChecked<UPCGGridLinkageSettings>(UpstreamTask.CookedSettings);
						OutputPin = LinkageSettings->UpstreamPin.Get();
					}
				}

				if (OutputPin)
				{
					OutOutputCPUPinToVirtualPin.Add(OutputPin, VirtualLabel);
				}
				else
				{
					UE_LOG(LogPCG, Warning, TEXT("Edge dropped during compilation due to missing upstream output pin."))
				}
			}
		}

		if (!InTaskSuccessors.Contains(GPUTaskId))
		{
			continue;
		}

		// Next consider output edges of the compute graph.
		for (FPCGTaskId Successor : InTaskSuccessors[GPUTaskId])
		{
			if (InCollapsedTasks.Contains(Successor))
			{
				continue;
			}

			// Rewire inputs of this downstream CPU node to the outputs of the compute graph task.
			const FPCGGraphTask& DownstreamCPUNode = InCompiledTasks[Successor];

			for (int SuccessorInputIndex = 0; SuccessorInputIndex < DownstreamCPUNode.Inputs.Num(); ++SuccessorInputIndex)
			{
				// Skip irrelevant edges.
				if (DownstreamCPUNode.Inputs[SuccessorInputIndex].TaskId != GPUTaskId)
				{
					continue;
				}

				if (DownstreamCPUNode.Inputs[SuccessorInputIndex].UpstreamPin.IsSet())
				{
					const FNodePin PinKey = { GPUTaskId, DownstreamCPUNode.Inputs[SuccessorInputIndex].UpstreamPin->Label, /*Pin is input*/false };
					if (!OutOriginalToVirtualPin.Contains(PinKey))
					{
						const FName VirtualLabel = *FString::Format(TEXT("{0}-VirtualOut{1}"), { DownstreamCPUNode.Inputs[SuccessorInputIndex].UpstreamPin->Label.ToString(), OutputCount });
						OutOriginalToVirtualPin.Add(PinKey, VirtualLabel);

						++OutputCount;
					}
				}
			}
		}
	}
}

void FPCGGraphCompilerGPU::WireGPUGraphNode(
	FPCGTaskId InGPUGraphTaskId,
	const TSet<FPCGTaskId>& InCollapsedTasks,
	TArray<FPCGGraphTask>& InOutCompiledTasks,
	const FTaskToSuccessors& InTaskSuccessors,
	const FOriginalToVirtualPin& InOriginalToVirtualPin,
	const TMap<TSoftObjectPtr<const UPCGPin>, FName>& InOutputCPUPinToVirtualPin)
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGGraphCompilerGPU::WireGPUGraphNode);

	FPCGGraphTask& GPUGraphTask = InOutCompiledTasks[InGPUGraphTaskId];

	// Add all compute graph task inputs and outputs.
	for (FPCGTaskId GPUTaskId : InCollapsedTasks)
	{
		// First find CPU to GPU edges and wire in the GPU graph node inputs.
		for (const FPCGGraphTaskInput& Input : InOutCompiledTasks[GPUTaskId].Inputs)
		{
			if (InCollapsedTasks.Contains(Input.TaskId))
			{
				continue;
			}

			FPCGGraphTaskInput& AddedInput = GPUGraphTask.Inputs.Add_GetRef(Input);

			// TODO is pinless fine with skipping?
			if (AddedInput.DownstreamPin.IsSet())
			{
				const FName* FoundVirtualLabel = InOriginalToVirtualPin.Find({ GPUTaskId, AddedInput.DownstreamPin->Label, /*bIsInputPin=*/true });
				if (ensure(FoundVirtualLabel))
				{
					AddedInput.DownstreamPin->Label = *FoundVirtualLabel;
				}
			}
		}

		if (!InTaskSuccessors.Contains(GPUTaskId))
		{
			continue;
		}

		// Next consider GPU to CPU edges to wire in the GPU graph node outputs.
		for (FPCGTaskId Successor : InTaskSuccessors[GPUTaskId])
		{
			if (InCollapsedTasks.Contains(Successor))
			{
				continue;
			}

			// Rewire inputs of this downstream CPU node to the outputs of the compute graph task.
			FPCGGraphTask& DownstreamCPUNode = InOutCompiledTasks[Successor];

			// Order matters here! We can never reorder inputs as it will impact execution.
			const int InputCountBefore = DownstreamCPUNode.Inputs.Num();
			for (int SuccessorInputIndex = 0; SuccessorInputIndex < InputCountBefore; ++SuccessorInputIndex)
			{
				// Implementation note: we modify the Inputs array in this loop, so don't take a reference to the current element.

				// Skip irrelevant edges.
				if (DownstreamCPUNode.Inputs[SuccessorInputIndex].TaskId != GPUTaskId)
				{
					continue;
				}

				// Wire downstream CPU node to compute graph task.
				FPCGGraphTaskInput InputCopy = DownstreamCPUNode.Inputs[SuccessorInputIndex];

				InputCopy.TaskId = InGPUGraphTaskId;

				if (DownstreamCPUNode.Inputs[SuccessorInputIndex].UpstreamPin.IsSet())
				{
					const FNodePin PinKey = { GPUTaskId, InputCopy.UpstreamPin->Label, /*Pin is input*/false };
					const FName* FoundVirtualPinLabel = InOriginalToVirtualPin.Find(PinKey);
					if (ensure(FoundVirtualPinLabel))
					{
						// Wire to the existing virtual output pin.
						InputCopy.UpstreamPin->Label = *FoundVirtualPinLabel;
					}
				}

				DownstreamCPUNode.Inputs.Add(MoveTemp(InputCopy));
			}
		}
	}
}

void FPCGGraphCompilerGPU::BuildGPUGraphTask(
	FPCGGPUCompilationContext& InOutContext,
	UPCGGraph* InGraph,
	uint32 InGridSize,
	uint32 InComputeGraphIndex,
	FPCGTaskId InGPUGraphTaskId,
	const TSet<FPCGTaskId>& InCollapsedTasks,
	const TSet<FPCGTaskId>& InAllGPUCompatibleTasks,
	const FTaskToSuccessors& InTaskSuccessors,
	TArray<FPCGGraphTask>& InOutCompiledTasks,
	const FOriginalToVirtualPin& InOriginalToVirtualPin,
	const TMap<TSoftObjectPtr<const UPCGPin>, FName>& InOutputCPUPinToVirtualPin)
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGGraphCompilerGPU::BuildGPUGraphTask);

	check(InGraph);

	FPCGGraphCompiler& GraphCompiler = InOutContext.GetGraphCompiler();
	UPCGComputeGraph* ComputeGraph = GraphCompiler.GetComputeGraph(InGraph, InGridSize, InComputeGraphIndex);

	// If the graph does not exist already, create it.
	if (!ComputeGraph)
	{
		// TODO: There is a race condition here where two threads can try to find this graph at the same time and both fail, so both create the graph.
		// This is fine, as they'll both create the same graph and place it at the same compute graph index. However it would be ideal perf-wise to
		// avoid this, as creating the compute graph can be expensive.
		ComputeGraph = CompileComputeGraph(
			InOutContext,
			InGraph,
			InCollapsedTasks,
			InAllGPUCompatibleTasks,
			InTaskSuccessors,
			InOutCompiledTasks,
			InOriginalToVirtualPin,
			InOutputCPUPinToVirtualPin);
	}

	const int32 ComputeGraphIndex = InOutContext.AddCompiledComputeGraph(ComputeGraph);
	ensure(ComputeGraphIndex == InComputeGraphIndex);

	if (GraphCompiler.IsCooking())
	{
		TObjectPtr<UPCGComputeGraphSettings> Settings = NewObject<UPCGComputeGraphSettings>(InGraph);
		Settings->ComputeGraphIndex = ComputeGraphIndex;
		InOutCompiledTasks[InGPUGraphTaskId].ElementSource = EPCGElementSource::FromCookedSettings;
		InOutCompiledTasks[InGPUGraphTaskId].CookedSettings = Settings;
	}
	else
	{
		InOutCompiledTasks[InGPUGraphTaskId].Element = MakeShared<FPCGComputeGraphElement>(ComputeGraphIndex);
	}

	if (FApp::CanEverRender() && IsInGameThread() && ensure(ComputeGraph))
	{
		TRACE_CPUPROFILER_EVENT_SCOPE(UpdateResources);

		// Compile shader resources and create render proxies.
		ComputeGraph->UpdateResources();
	}
}

UPCGComputeGraph* FPCGGraphCompilerGPU::CompileComputeGraph(
	FPCGGPUCompilationContext& InOutContext,
	UPCGGraph* InGraph,
	const TSet<FPCGTaskId>& InCollapsedTasks,
	const TSet<FPCGTaskId>& InAllGPUCompatibleTasks,
	const FTaskToSuccessors& InTaskSuccessors,
	TArray<FPCGGraphTask>& InOutCompiledTasks,
	const FOriginalToVirtualPin& InOriginalToVirtualPin,
	const TMap<TSoftObjectPtr<const UPCGPin>, FName>& InOutputCPUPinToVirtualPin)
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGGraphCompilerGPU::CompileComputeGraph);

	// Create a new compute graph.
	UObject* ComputeGraphOuter = InOutContext.GetGraphCompiler().IsCooking() ? InGraph : Cast<UObject>(GetTransientPackage());
	const FName GraphName = MakeUniqueObjectName(InGraph, UPCGComputeGraph::StaticClass(), InGraph->GetFName());
	UPCGComputeGraph* ComputeGraph = InOutContext.NewObject_AnyThread<UPCGComputeGraph>(ComputeGraphOuter, GraphName);

	ComputeGraph->OutputCPUPinToInputGPUPinAlias = InOutputCPUPinToVirtualPin;

	// Not incredibly useful for us - DG adds GetComponentSource()->GetComponentClass() object which allows it to bind at execution time by class.
	// But execution code requires it currently.
	ComputeGraph->Bindings.Add(UPCGDataBinding::StaticClass());

	// Create data interfaces which allow kernels to read or write data. Each data interface is associated with a node output pin.
	// For CPU->GPU edges, an upload data interface is created. For GPU->CPU edges, a readback data interface is created.
	auto CreateDataInterface = [&InOutContext, &InCollapsedTasks, &InOutCompiledTasks, ComputeGraph](FPCGTaskId InTaskId, bool bRequiresReadback, const FPCGPinProperties& InOutputPinProperties) -> UPCGComputeDataInterface*
	{
		TRACE_CPUPROFILER_EVENT_SCOPE(CreateDataInterface);

		const bool bUpstreamIsGPUTask = InCollapsedTasks.Contains(InTaskId);

		EPCGDataType PinType = InOutputPinProperties.AllowedTypes;

		// Dynamically typed pins could have a different type
		const UPCGSettings* Settings = InOutCompiledTasks[InTaskId].Node ? InOutCompiledTasks[InTaskId].Node->GetSettings() : nullptr;
		const UPCGPin* Pin = InOutCompiledTasks[InTaskId].Node ? InOutCompiledTasks[InTaskId].Node->GetOutputPin(InOutputPinProperties.Label) : nullptr;
		if (Settings && Pin)
		{
			PinType = Settings->GetCurrentPinTypes(Pin);
		}

		UPCGComputeDataInterface* DataInterface = nullptr;

		switch (PinType)
		{
		case EPCGDataType::Point:
		case EPCGDataType::Param:
		{
			UPCGDataCollectionDataInterface* DataInterfacePCGData = nullptr;

			if (bUpstreamIsGPUTask)
			{
				// Provides data for GPU -> GPU and GPU -> CPU edges.
				DataInterfacePCGData = InOutContext.NewObject_AnyThread<UPCGDataCollectionDataInterface>(ComputeGraph);
			}
			else
			{
				// Provides data for CPU -> GPU edge.
				DataInterfacePCGData = InOutContext.NewObject_AnyThread<UPCGDataCollectionUploadDataInterface>(ComputeGraph);
			}

			check(DataInterfacePCGData);
			DataInterfacePCGData->SetProducerSettings(InOutCompiledTasks[InTaskId].Node ? InOutCompiledTasks[InTaskId].Node->GetSettings() : nullptr);
			DataInterfacePCGData->SetRequiresReadback(bRequiresReadback);

			DataInterface = DataInterfacePCGData;
			break;
		}
		case EPCGDataType::Texture:
		{
			DataInterface = InOutContext.NewObject_AnyThread<UPCGTextureDataInterface>(ComputeGraph);
			break;
		}
		case EPCGDataType::Landscape:
		{
			DataInterface = InOutContext.NewObject_AnyThread<UPCGLandscapeDataInterface>(ComputeGraph);
			break;
		}
		default:
		{
			UE_LOG(LogPCG, Error, TEXT("Unsupported connected upstream pin '%s' on node '%s' with type %s. Consider adding a conversion to a supported type such as Point."),
				*InOutputPinProperties.Label.ToString(),
				InOutCompiledTasks[InTaskId].Node ? *InOutCompiledTasks[InTaskId].Node->GetNodeTitle(EPCGNodeTitleType::ListView).ToString() : TEXT("MISSING"),
				StaticEnum<EPCGDataType>() ? *StaticEnum<EPCGDataType>()->GetNameStringByValue(static_cast<int64>(PinType)) : TEXT("MISSING")
			);
			break;
		}
		}

		if (DataInterface)
		{
			DataInterface->SetOutputPin(InOutputPinProperties.Label);
		}

		return DataInterface;
	};

	TMap<TPair</* Node task*/FPCGTaskId, /*Node output pin*/FName>, UPCGComputeDataInterface*> OutputPinDataInterfaces;

	// Create all the output data interfaces.
	for (FPCGTaskId TaskId : InCollapsedTasks)
	{
		// Create DIs for all output pins, because the kernels currently need their outputs to be bound to valid resources.
		if (const UPCGSettings* Settings = InOutCompiledTasks[TaskId].Node ? InOutCompiledTasks[TaskId].Node->GetSettings() : nullptr)
		{
			for (const FPCGPinProperties& OutputPinProperties : Settings->AllOutputPinProperties())
			{
				if (OutputPinProperties.Label == NAME_None)
				{
					continue;
				}

				if (OutputPinDataInterfaces.Contains({ TaskId, OutputPinProperties.Label }))
				{
					ensure(false);
					continue;
				}

				bool bRequiresReadback = false;
				if (const TArray<FPCGTaskId>* Successors = InTaskSuccessors.Find(TaskId))
				{
					for (FPCGTaskId Successor : *Successors)
					{
						for (const FPCGGraphTaskInput& Input : InOutCompiledTasks[Successor].Inputs)
						{
							if (Input.UpstreamPin.IsSet() && (*Input.UpstreamPin == OutputPinProperties) && !InCollapsedTasks.Contains(Successor))
							{
								bRequiresReadback = true;
								break;
							}
						}
					}
				}

				if (UPCGComputeDataInterface* OutputDI = CreateDataInterface(TaskId, bRequiresReadback, OutputPinProperties))
				{
					OutputDI->SetOutputPin(OutputPinProperties.Label);
					ComputeGraph->DataInterfaces.Add(OutputDI);
					OutputPinDataInterfaces.Add({ TaskId, OutputPinProperties.Label }, OutputDI);

					// TODO: This seems like a once-per-settings process rather than repeating for each output pin?
					TArray<FPCGKernelAttributeKey> AttributeKeys;
					Settings->GetKernelAttributeKeys(AttributeKeys);

					for (const FPCGKernelAttributeKey& Key : AttributeKeys)
					{
						FPCGKernelAttributeIDAndType* FoundEntry = ComputeGraph->GlobalAttributeLookupTable.Find(Key.Name);
						if (FoundEntry)
						{
							// If we already registered this attribute, populate the type if not populated already, or otherwise ensure type matches.
							if (Key.Type != EPCGKernelAttributeType::None)
							{
								if (FoundEntry->Type == EPCGKernelAttributeType::None)
								{
									FoundEntry->Type = Key.Type;
								}
								else if (Key.Type != FoundEntry->Type)
								{
									// TODO: This is more a limitation of the current system rather than an issue with the user's data. Log for bug reports etc but remove this
									// later when we properly flow attribute table and string table down graph branches.
									UE_LOG(LogPCG, Warning, TEXT("Attribute '%s' multiply defined with different types (existing: %d, new: %d)."), *Key.Name.ToString(), FoundEntry->Type, Key.Type);
								}
							}
						}
						else
						{
							const FPCGKernelAttributeIDAndType IDAndType(ComputeGraph->GlobalAttributeLookupTable.Num() + PCGComputeConstants::NUM_RESERVED_ATTRS, Key.Type);
							ComputeGraph->GlobalAttributeLookupTable.Add(Key.Name, IDAndType);
						}
					}

					Settings->AddStaticCreatedStrings(ComputeGraph->StringTable);
				}
			}
		}

		// Create any DIs for upstream nodes outside of this compute graph.
		for (const FPCGGraphTaskInput& Input : InOutCompiledTasks[TaskId].Inputs)
		{
			// Never wire directly to the GPU-compatible tasks, these are collapsed into compute graphs (and will be culled in a next step).
			if (InAllGPUCompatibleTasks.Contains(Input.TaskId))
			{
				continue;
			}

			if (!Input.DownstreamPin.IsSet())
			{
				continue;
			}

			if (const UPCGNode* DownstreamNode = InOutCompiledTasks[TaskId].Node)
			{
				if (const UPCGPin* InputPin = DownstreamNode->GetInputPin(Input.DownstreamPin->Label))
				{
					ComputeGraph->PinsReceivingDataFromCPU.Add(InputPin);
				}
			}

			if (!Input.UpstreamPin.IsSet())
			{
				continue;
			}

			if (OutputPinDataInterfaces.Contains({ Input.TaskId, Input.UpstreamPin->Label }))
			{
				// Skip if already created.
				continue;
			}

			if (UPCGComputeDataInterface* OutputDI = CreateDataInterface(Input.TaskId, /*bRequiresReadback=*/false, *Input.UpstreamPin))
			{
				OutputDI->SetOutputPin(Input.UpstreamPin->Label);
				ComputeGraph->DataInterfaces.Add(OutputDI);
				OutputPinDataInterfaces.Add({ Input.TaskId, Input.UpstreamPin->Label }, OutputDI);
			}
		}
	}

	TSet<FPCGTaskId> RemainingTasks = InCollapsedTasks;

	while (!RemainingTasks.IsEmpty())
	{
		// Find a ready task
		FPCGTaskId TaskId = InvalidPCGTaskId;
		for (FPCGTaskId RemainingTask : RemainingTasks)
		{
			// TODO: use 'QueueSuccessors' pattern rather than brute force searching for ready tasks
			bool bReady = true;
			for (const FPCGGraphTaskInput& Input : InOutCompiledTasks[RemainingTask].Inputs)
			{
				if (RemainingTasks.Contains(Input.TaskId))
				{
					bReady = false;
					break;
				}
			}

			if (bReady)
			{
				TaskId = RemainingTask;
				break;
			}
		}

		if (TaskId == InvalidPCGTaskId)
		{
			// Tasks in RemainingTasks are unreachable?
			ensure(false);
			break;
		}

		RemainingTasks.Remove(TaskId);

		const UPCGNode* Node = InOutCompiledTasks[TaskId].Node;

		const UPCGSettings* Settings = Node ? Node->GetSettings() : nullptr;
		check(Settings && Settings->bEnabled && Settings->ShouldExecuteOnGPU());

		if (Settings->IsA<UPCGStaticMeshSpawnerSettings>())
		{
			ComputeGraph->StaticMeshSpawners.Add(Settings);
		}

		// One data interface may be connected to multiple downstream pins. Because each entry in these arrays produces its own bindings and graph edges,
		// we also need to specify the pin label to uniquely describe each edge.
		TArray<TPair</*DataInterfaceIndex=*/int, /*PinLabel=*/FName>> InputDataInterfaceIndexAndPin;
		TArray<TPair</*DataInterfaceIndex=*/int, /*PinLabel=*/FName>> OutputDataInterfaceIndexAndPin;
		InputDataInterfaceIndexAndPin.Reserve(Settings->InputPinProperties().Num());
		OutputDataInterfaceIndexAndPin.Reserve(Settings->OutputPinProperties().Num());

		// Add DIs (PCG -> CF transcoding).

		for (const FPCGGraphTaskInput& Input : InOutCompiledTasks[TaskId].Inputs)
		{
			// Currently the new compute graph tasks are wired into the graph in parallel to each GPU node task. The GPU node tasks
			// will be culled at the end, leaving only the compute graphs. Only create DIs for tasks within this compute graph (in InCollapsedTasks),
			// or for tasks that will not be culled (not in InAllGPUCompatibleTasks).
			const bool bValidInput = InCollapsedTasks.Contains(Input.TaskId) || !InAllGPUCompatibleTasks.Contains(Input.TaskId);
			if (!bValidInput)
			{
				continue;
			}

			if (!Input.UpstreamPin.IsSet())
			{
				// Execution-only dependencies not supported currently. Unclear if this should ever be supported for GPU graphs.
				// Writes followed by reads will be protected via barriers added by RDG.
				continue;
			}

			UPCGComputeDataInterface* UpstreamDI = nullptr;
			if (UPCGComputeDataInterface** FoundUpstreamDI = OutputPinDataInterfaces.Find({ Input.TaskId, Input.UpstreamPin->Label }))
			{
				UpstreamDI = *FoundUpstreamDI;
			}

			if (!UpstreamDI)
			{
				UE_LOG(LogPCG, Warning, TEXT("Encountered missing data interface, skipping."))
				continue;
			}

			const int Index = ComputeGraph->DataInterfaces.Find(UpstreamDI);
			if (Index == INDEX_NONE)
			{
				ensure(false);
				continue;
			}

			const FName DownstreamInputPinLabel = Input.DownstreamPin->Label;
			InputDataInterfaceIndexAndPin.Emplace(Index, DownstreamInputPinLabel);

			const bool bIsInputPin = true;
			UpstreamDI->AddDownstreamInputPin(DownstreamInputPinLabel, InOriginalToVirtualPin.Find({ TaskId, DownstreamInputPinLabel, bIsInputPin }));
		}

		// Always create a DI for every output pin, so kernel always has something to write to.
		for (const FPCGPinProperties& OutputPinProperties : Settings->AllOutputPinProperties())
		{
			if (OutputPinProperties.Label == NAME_None)
			{
				continue;
			}

			UPCGComputeDataInterface** FoundDI = OutputPinDataInterfaces.Find({ TaskId, OutputPinProperties.Label });
			if (!ensure(FoundDI) || !ensure(*FoundDI))
			{
				continue;
			}

			const int Index = ComputeGraph->DataInterfaces.Find(*FoundDI);
			if (Index == INDEX_NONE)
			{
				ensure(false);
				continue;
			}

			OutputDataInterfaceIndexAndPin.Emplace(Index, OutputPinProperties.Label);
		}

		// Make sure every downstream input pin is registered with the upstream DI.
		if (const TArray<FPCGTaskId>* Successors = InTaskSuccessors.Find(TaskId))
		{
			for (FPCGTaskId Successor : *Successors)
			{
				for (const FPCGGraphTaskInput& SuccessorInput : InOutCompiledTasks[Successor].Inputs)
				{
					if (SuccessorInput.TaskId != TaskId)
					{
						continue;
					}

					if (!SuccessorInput.UpstreamPin.IsSet() || !SuccessorInput.DownstreamPin.IsSet())
					{
						continue;
					}

					FName OutputPinLabel = SuccessorInput.UpstreamPin->Label;

					// DIs for output pins should have all been created.
					UPCGComputeDataInterface** FoundOutputDI = OutputPinDataInterfaces.Find({ TaskId, OutputPinLabel });
					if (!ensure(FoundOutputDI) || !ensure(*FoundOutputDI))
					{
						continue;
					}

					// If the map has an entry for this task and output pin label, then its a GPU->CPU readback.
					const bool bIsInputPin = false;
					(*FoundOutputDI)->SetOutputPin(OutputPinLabel, InOriginalToVirtualPin.Find({ TaskId, OutputPinLabel, bIsInputPin }));
				}
			}
		}

		UPCGCustomKernelDataInterface* KernelDI = InOutContext.NewObject_AnyThread<UPCGCustomKernelDataInterface>(ComputeGraph);
		KernelDI->Settings = Settings;

		const int32 KernelDIIndex = ComputeGraph->DataInterfaces.Num();
		ComputeGraph->DataInterfaces.Add(KernelDI);
		InputDataInterfaceIndexAndPin.Emplace(KernelDIIndex, NAME_None);

		TArray<TObjectPtr<UComputeDataInterface>> AdditionalInputDIs, AdditionalOutputDIs;
		Settings->CreateAdditionalInputDataInterfaces(InOutContext, ComputeGraph, AdditionalInputDIs);
		Settings->CreateAdditionalOutputDataInterfaces(InOutContext, ComputeGraph, AdditionalOutputDIs);

		auto AddAdditionalDataInterface = [ComputeGraph](TObjectPtr<UComputeDataInterface> DataInterface) -> int32
		{
			if (ensure(DataInterface))
			{
				const int32 DataInterfaceIndex = ComputeGraph->DataInterfaces.Num();
				ComputeGraph->DataInterfaces.Add(DataInterface);

				return DataInterfaceIndex;
			}

			return static_cast<int32>(INDEX_NONE);
		};

		for (TObjectPtr<UComputeDataInterface> DataInterface : AdditionalInputDIs)
		{
			const int32 DataInterfaceIndex = AddAdditionalDataInterface(DataInterface);

			if (DataInterfaceIndex != INDEX_NONE)
			{
				InputDataInterfaceIndexAndPin.Emplace(DataInterfaceIndex, NAME_None);
			}
		}

		for (TObjectPtr<UComputeDataInterface> DataInterface : AdditionalOutputDIs)
		{
			const int32 DataInterfaceIndex = AddAdditionalDataInterface(DataInterface);

			if (DataInterfaceIndex != INDEX_NONE)
			{
				OutputDataInterfaceIndexAndPin.Emplace(DataInterfaceIndex, NAME_None);
			}
		}

		// TODO once we support cooking for different platforms/configs, don't create the interface if logging is not present.
		if (Settings->bPrintShaderDebugValues)
		{
			UPCGDebugDataInterface* DebugDI = InOutContext.NewObject_AnyThread<UPCGDebugDataInterface>(ComputeGraph);
			DebugDI->SetDebugBufferSize(Settings->DebugBufferSize);

			const int32 DebugDIIndex = ComputeGraph->DataInterfaces.Num();
			ComputeGraph->DataInterfaces.Add(DebugDI);
			OutputDataInterfaceIndexAndPin.Emplace(DebugDIIndex, NAME_None);
		}

		ComputeGraph->bLogDataDescriptions |= Settings->bDumpDataDescriptions;

		// Now that all data interfaces added, create the (trivial) binding mapping. All map to primary binding, index 0.
		ComputeGraph->DataInterfaceToBinding.SetNumZeroed(ComputeGraph->DataInterfaces.Num());

		struct FInterfaceBinding
		{
			const UComputeDataInterface* DataInterface = nullptr;
			int32 DataInterfaceBindingIndex = INDEX_NONE;
			FName PinLabel = NAME_None; // Required to uniquely identify this binding if this data interface is connected to multiple pins.
			FString BindingFunctionName = TEXT("");
		};

		struct FKernelWithDataBindings
		{
			UComputeKernel* Kernel = nullptr;
			TArray<FInterfaceBinding> InputDataBindings;
			TArray<FInterfaceBinding> OutputDataBindings;
		};

		FKernelWithDataBindings KernelWithBindings;

		KernelWithBindings.Kernel = InOutContext.NewObject_AnyThread<UComputeKernel>(ComputeGraph);
		const int KernelIndex = ComputeGraph->KernelInvocations.Num();
		ComputeGraph->KernelInvocations.Add(KernelWithBindings.Kernel);
		ComputeGraph->KernelToNode.Add(Node);

		auto SetupAllInputBindings = [&KernelWithBindings, ComputeGraph](const TPair<int, FName>& InDataInterfaceIndex)
		{
			const UComputeDataInterface* DataInterface = ComputeGraph->DataInterfaces[InDataInterfaceIndex.Key];
			TArray<FShaderFunctionDefinition> Functions;
			DataInterface->GetSupportedInputs(Functions);

			for (int FuncIndex = 0; FuncIndex < Functions.Num(); ++FuncIndex)
			{
				FInterfaceBinding& Binding = KernelWithBindings.InputDataBindings.Emplace_GetRef();
				Binding.DataInterface = DataInterface;
				Binding.PinLabel = InDataInterfaceIndex.Value;
				Binding.BindingFunctionName = Functions[FuncIndex].Name;
				Binding.DataInterfaceBindingIndex = FuncIndex;
			}
		};

		auto SetupAllOutputBindings = [&KernelWithBindings, ComputeGraph](const TPair<int, FName>& InDataInterfaceIndex)
		{
			const UComputeDataInterface* DataInterface = ComputeGraph->DataInterfaces[InDataInterfaceIndex.Key];
			TArray<FShaderFunctionDefinition> Functions;
			DataInterface->GetSupportedOutputs(Functions);

			for (int FuncIndex = 0; FuncIndex < Functions.Num(); ++FuncIndex)
			{
				FInterfaceBinding& Binding = KernelWithBindings.OutputDataBindings.Emplace_GetRef();
				Binding.DataInterface = DataInterface;
				Binding.PinLabel = InDataInterfaceIndex.Value;
				Binding.BindingFunctionName = Functions[FuncIndex].Name;
				Binding.DataInterfaceBindingIndex = FuncIndex;
			}
		};

		// Bind data interfaces.
		for (const TPair<int, FName>& InputDataInterfaceIndex : InputDataInterfaceIndexAndPin)
		{
			SetupAllInputBindings(InputDataInterfaceIndex);
		}

		for (const TPair<int, FName>& OutputDataInterfaceIndex : OutputDataInterfaceIndexAndPin)
		{
			SetupAllOutputBindings(OutputDataInterfaceIndex);
		}

		{
			UPCGComputeKernelSource* KernelSource = InOutContext.NewObject_AnyThread<UPCGComputeKernelSource>(KernelWithBindings.Kernel); // is outer to kernel fine?
			KernelWithBindings.Kernel->KernelSource = KernelSource;

			// These could be exposed through PCGSettings API later when the need arises (and/or when GPU feature matures).
			KernelSource->EntryPoint = TEXT("Main");
			KernelSource->GroupSize = FIntVector(PCGComputeConstants::THREAD_GROUP_SIZE, 1, 1);

			KernelSource->SetSource(Settings->GetCookedKernelSource(ComputeGraph->GlobalAttributeLookupTable));

			if (Settings->bDumpCookedHLSL)
			{
				UE_LOG(LogPCG, Log, TEXT("Cooked HLSL:\n%s\n"), *KernelSource->GetSource());
			}

			if (PCGGraphCompilerGPU::CVarEnableDebugging.GetValueOnAnyThread())
			{
				UE_LOG(LogPCG, Warning, TEXT("ATTRIBUTE LOOK-UP TABLE [%s]"), *Settings->GetDefaultNodeTitle().ToString());

				for (const TPair<FName, FPCGKernelAttributeIDAndType>& Pair : ComputeGraph->GlobalAttributeLookupTable)
				{
					UE_LOG(LogPCG, Warning, TEXT("%s: %s (%s)"),
						*FString::FromInt(Pair.Value.Id),
						*Pair.Key.ToString(),
						*UEnum::GetValueAsString(Pair.Value.Type));
				}
			}

			// Add functions for external inputs/outputs which must be fulfilled by DIs
			for (FInterfaceBinding& Binding : KernelWithBindings.InputDataBindings)
			{
				TArray<FShaderFunctionDefinition> Functions;
				Binding.DataInterface->GetSupportedInputs(Functions);
				check(Functions.IsValidIndex(Binding.DataInterfaceBindingIndex));

				FShaderFunctionDefinition FuncDef = Functions[Binding.DataInterfaceBindingIndex];
				for (FShaderParamTypeDefinition& ParamType : FuncDef.ParamTypes)
				{
					// Making sure parameter has type declaration generated
					ParamType.ResetTypeDeclaration();
				}

				KernelSource->ExternalInputs.Emplace(FuncDef);
			}

			for (FInterfaceBinding& Binding : KernelWithBindings.OutputDataBindings)
			{
				TArray<FShaderFunctionDefinition> Functions;
				Binding.DataInterface->GetSupportedOutputs(Functions);
				check(Functions.IsValidIndex(Binding.DataInterfaceBindingIndex));

				FShaderFunctionDefinition FuncDef = Functions[Binding.DataInterfaceBindingIndex];
				for (FShaderParamTypeDefinition& ParamType : FuncDef.ParamTypes)
				{
					// Making sure parameter has type declaration generated
					ParamType.ResetTypeDeclaration();
				}

				KernelSource->ExternalOutputs.Emplace(FuncDef);
			}
		}

		auto AddAllEdgesForKernel = [&KernelWithBindings, ComputeGraph](int32 InKernelIndex, bool bInEdgesAreInputs)
		{
			TArray<FInterfaceBinding>& Bindings = bInEdgesAreInputs ? KernelWithBindings.InputDataBindings : KernelWithBindings.OutputDataBindings;

			// Add all graph edges for bindings. This is somewhat odd but likely what we'll do vs the more finegrained interface
			// definitions in optimus, but we need to see.
			for (int BindingIndex = 0; BindingIndex < Bindings.Num(); ++BindingIndex)
			{
				FInterfaceBinding& Binding = Bindings[BindingIndex];

				FComputeGraphEdge& Edge = ComputeGraph->GraphEdges.Emplace_GetRef();
				Edge.KernelIndex = InKernelIndex;
				Edge.KernelBindingIndex = BindingIndex;
				Edge.DataInterfaceIndex = ComputeGraph->DataInterfaces.IndexOfByPredicate([&Binding](const UComputeDataInterface* In) { return Binding.DataInterface == In; });
				check(Edge.DataInterfaceIndex != INDEX_NONE);
				Edge.DataInterfaceBindingIndex = Binding.DataInterfaceBindingIndex;
				Edge.bKernelInput = bInEdgesAreInputs;

				UComputeDataInterface* DataInterface = ComputeGraph->DataInterfaces[Edge.DataInterfaceIndex];
				check(DataInterface);

				if (Binding.PinLabel != NAME_None)
				{
					TArray<FShaderFunctionDefinition> DataInterfaceFunctions;
					if (bInEdgesAreInputs)
					{
						DataInterface->GetSupportedInputs(DataInterfaceFunctions);
					}
					else
					{
						DataInterface->GetSupportedOutputs(DataInterfaceFunctions);
					}

					Edge.BindingFunctionNameOverride = FString::Format(
						TEXT("{0}_{1}"),
						{ Binding.PinLabel.ToString(), DataInterfaceFunctions[Edge.DataInterfaceBindingIndex].Name }
					);
				}
			}
		};

		AddAllEdgesForKernel(KernelIndex, /*bInEdgesAreInputs=*/true);
		AddAllEdgesForKernel(KernelIndex, /*bInEdgesAreInputs=*/false);
	}

	// Register all virtual pin aliases with the corresponding pins for downstream usage.
	for (const TPair<TTuple<FPCGTaskId, FName, bool>, FName>& Mapping : InOriginalToVirtualPin)
	{
		const bool bIsInputPin = Mapping.Get<0>().Get<2>();
		if (bIsInputPin)
		{
			const FPCGTaskId TaskId = Mapping.Get<0>().Get<0>();

			if (const UPCGNode* Node = InOutCompiledTasks[TaskId].Node)
			{
				const FName& OriginalLabel = Mapping.Get<0>().Get<1>();

				if (const UPCGPin* Pin = Node->GetInputPin(OriginalLabel))
				{
					const FName& VirtualLabel = Mapping.Get<1>();
					ComputeGraph->InputPinLabelAliases.FindOrAdd(Pin) = VirtualLabel;
				}
			}
		}
	}

	// Remove empty strings (at execution time empty string is placed in table slot 0).
	// NOTE: This can scramble order but order is not important at this stage (key values created at execution time in data binding).
	ComputeGraph->StringTable.RemoveAllSwap([](const FString& InString) { return InString.IsEmpty(); });

	return ComputeGraph;
}

void FPCGGraphCompilerGPU::CreateGPUNodes(FPCGGraphCompiler& InOutCompiler, UPCGGraph* InGraph, uint32 InGridSize, TArray<FPCGGraphTask>& InOutCompiledTasks)
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGGraphCompilerGPU::CreateGPUNodes);

	if (!InGraph)
	{
		ensure(false);
		return;
	}

	FPCGGPUCompilationContext Context(InOutCompiler);

	TSet<FPCGTaskId> GPUCompatibleTaskIds;
	GPUCompatibleTaskIds.Reserve(InOutCompiledTasks.Num());
	for (FPCGTaskId TaskId = 0; TaskId < InOutCompiledTasks.Num(); ++TaskId)
	{
		const UPCGNode* Node = InOutCompiledTasks[TaskId].Node;
		const UPCGSettings* Settings = Node ? Node->GetSettings() : nullptr;
		if (Settings && Settings->ShouldExecuteOnGPU() && Settings->bEnabled)
		{
			GPUCompatibleTaskIds.Add(TaskId);
		}
	}

	if (GPUCompatibleTaskIds.IsEmpty())
	{
		// Nothing to do for this graph.
		return;
	}

	// For input pins at CPU -> GPU boundary, inject gather elements to pre-combine data on CPU side
	// before passing to GPU.
	CreateGatherTasksAtGPUInputs(InGraph, GPUCompatibleTaskIds, InOutCompiledTasks);

	FTaskToSuccessors TaskSuccessors;
	TaskSuccessors.Reserve(InOutCompiledTasks.Num());
	for (FPCGTaskId TaskId = 0; TaskId < InOutCompiledTasks.Num(); ++TaskId)
	{
		for (int InputIndex = 0; InputIndex < InOutCompiledTasks[TaskId].Inputs.Num(); ++InputIndex)
		{
			// Only add unique task successors to avoid storing the data from each output pin
			// multiple times when multiple pins connect to the same downstream node.
			TaskSuccessors.FindOrAdd(InOutCompiledTasks[TaskId].Inputs[InputIndex].TaskId).AddUnique(TaskId);
		}
	}

	TArray<TSet<FPCGTaskId>> NodeSubsetsToConvertToCFGraph;
	CollectGPUNodeSubsets(InOutCompiledTasks, TaskSuccessors, GPUCompatibleTaskIds, NodeSubsetsToConvertToCFGraph);

	const uint32 NumComputeGraphs = NodeSubsetsToConvertToCFGraph.Num();

	// Mapping from task ID & pin label to a virtual pin label. Compute graphs are executed within a generated element,
	// and the input and output pins of this element must have unique virtual pin labels so that we can parse the data that
	// PCG provides through the input data collection correctly, and route the output data to the downstream pins correctly.
	TArray<FOriginalToVirtualPin> OriginalToVirtualPin;

	TArray<TMap<TSoftObjectPtr<const UPCGPin>, FName>> OutputCPUPinToVirtualPin;

	OriginalToVirtualPin.SetNum(NumComputeGraphs);
	OutputCPUPinToVirtualPin.SetNum(NumComputeGraphs);

	// Setup mappings from existing pins to compute graph element virtual pins as a prestep before wiring in the compute graph tasks.
	for (uint32 ComputeGraphIndex = 0; ComputeGraphIndex < NumComputeGraphs; ++ComputeGraphIndex)
	{
		SetupVirtualPins(
			NodeSubsetsToConvertToCFGraph[ComputeGraphIndex],
			InOutCompiledTasks,
			TaskSuccessors,
			OriginalToVirtualPin[ComputeGraphIndex],
			OutputCPUPinToVirtualPin[ComputeGraphIndex]);
	}

	// Do actual collapsing now, one subset at a time. Each collapse will do all fixup of task ids? That will invalidate
	// ids in NodeSubsetsToConvertToCFGraph, so may need remap table. But can ignore this for now.
	for (uint32 ComputeGraphIndex = 0; ComputeGraphIndex < NumComputeGraphs; ++ComputeGraphIndex)
	{
		TSet<FPCGTaskId>& NodeSubsetToConvertToCFGraph = NodeSubsetsToConvertToCFGraph[ComputeGraphIndex];

		if (NodeSubsetToConvertToCFGraph.IsEmpty())
		{
			ensure(false);
			continue;
		}

		// Add a new compute graph task. Then kill the original GPU tasks.
		const FPCGTaskId ComputeGraphTaskId = InOutCompiledTasks.Num();
		FPCGGraphTask& ComputeGraphTask = InOutCompiledTasks.Emplace_GetRef();
		ComputeGraphTask.NodeId = ComputeGraphTaskId;

		// All nodes in subset will be from same stack/parent, so assign from any.
		for (FPCGTaskId GPUTaskId : NodeSubsetToConvertToCFGraph)
		{
			ComputeGraphTask.ParentId = InOutCompiledTasks[GPUTaskId].ParentId;
			ComputeGraphTask.StackIndex = InOutCompiledTasks[GPUTaskId].StackIndex;
			break;
		}

		// Wire in the compute graph task, side by side with the individual GPU tasks, which will be culled below.
		WireGPUGraphNode(
			ComputeGraphTaskId,
			NodeSubsetToConvertToCFGraph,
			InOutCompiledTasks,
			TaskSuccessors,
			OriginalToVirtualPin[ComputeGraphIndex],
			OutputCPUPinToVirtualPin[ComputeGraphIndex]);

		// Generate a compute graph from all of the individual GPU tasks.
		BuildGPUGraphTask(
			Context,
			InGraph,
			InGridSize,
			ComputeGraphIndex,
			ComputeGraphTaskId,
			NodeSubsetToConvertToCFGraph,
			GPUCompatibleTaskIds,
			TaskSuccessors,
			InOutCompiledTasks,
			OriginalToVirtualPin[ComputeGraphIndex],
			OutputCPUPinToVirtualPin[ComputeGraphIndex]);
	}

	{
		FWriteScopeLock Lock(InOutCompiler.GetCache().GraphToTaskMapLock);
		TMap<uint32, TArray<TObjectPtr<UPCGComputeGraph>>>& GridSizeToComputeGraphs = InOutCompiler.GetCache().TopGraphToComputeGraphMap.FindOrAdd(InGraph);
		TArray<TObjectPtr<UPCGComputeGraph>>& ComputeGraphs = GridSizeToComputeGraphs.FindOrAdd(InGridSize);

		// Replace any existing compute graphs with the newly compiled ones. It's okay if multiple threads do this, because
		// compute graph index order should be deterministic, so different threads will produce the same results.
		ComputeGraphs = MoveTemp(Context.GetCompiledComputeGraphs());
		ensure(ComputeGraphs.Num() == NumComputeGraphs);
	}

	// Now cull all the GPU compatible nodes. The compute graph task are already wired in so we're fine to just delete.
	FPCGGraphCompiler::CullTasks(InOutCompiledTasks, /*bAddPassthroughWires=*/false, [&NodeSubsetsToConvertToCFGraph](const FPCGGraphTask& InTask)
	{
		for (TSet<FPCGTaskId>& NodeSubsetToConvertToCFGraph : NodeSubsetsToConvertToCFGraph)
		{
			if (NodeSubsetToConvertToCFGraph.Contains(InTask.NodeId))
			{
				return true;
			}
		}

		return false;
	});
}
#endif // WITH_EDITOR
