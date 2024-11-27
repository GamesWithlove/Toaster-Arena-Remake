// Copyright Epic Games, Inc. All Rights Reserved.

#include "PCGGraphExecutor.h"

#include "PCGCommon.h"
#include "PCGComponent.h"
#include "PCGCrc.h"
#include "PCGGraph.h"
#include "PCGInputOutputSettings.h"
#include "PCGModule.h"
#include "PCGParamData.h"
#include "PCGPin.h"
#include "PCGSubsystem.h"
#include "PCGWorldActor.h"
#include "Compute/Elements/PCGComputeGraphElement.h"
#include "Grid/PCGPartitionActor.h"
#include "Helpers/PCGActorHelpers.h"
#include "Helpers/PCGAsync.h"
#include "Helpers/PCGHelpers.h"
#include "Metadata/PCGMetadata.h"
#include "Utils/PCGGraphExecutionLogging.h"

#include "Algo/AnyOf.h"
#include "Algo/ForEach.h"
#include "GameFramework/Actor.h"
#include "Misc/ScopeExit.h"
#include "Tasks/Task.h"

#if WITH_EDITOR
#include "Editor.h"
#include "Editor/IPCGEditorModule.h"
#include "Modules/ModuleManager.h"
#else
#include "GameFramework/Actor.h"
#endif

// World partition support for in-editor workflows needs these includes
#if WITH_EDITOR
#include "FileHelpers.h"
#endif

#include UE_INLINE_GENERATED_CPP_BY_NAME(PCGGraphExecutor)

static TAutoConsoleVariable<int32> CVarMaxNumTasks(
	TEXT("pcg.MaxConcurrentTasks"),
	4096,
	TEXT("Maximum number of concurrent tasks for PCG processing"));

static TAutoConsoleVariable<float> CVarMaxPercentageOfThreadsToUse(
	TEXT("pcg.MaxPercentageOfThreadsToUse"),
	0.9f,
	TEXT("Maximum percentage of number of threads for concurrent PCG processing"));

namespace PCGGraphExecutor
{
	TAutoConsoleVariable<float> CVarTimePerFrame(
		TEXT("pcg.FrameTime"),
		1000.0f / 60.0f,
		TEXT("Allocated time in ms per frame"));

	TAutoConsoleVariable<bool> CVarGraphMultithreading(
		TEXT("pcg.GraphMultithreading"),
		false,
		TEXT("Controls whether the graph can dispatch multiple tasks at the same time"));

#if WITH_EDITOR
	TAutoConsoleVariable<float> CVarEditorTimePerFrame(
		TEXT("pcg.EditorFrameTime"),
		1000.0f / 20.0f,
		TEXT("Allocated time in ms per frame when running in editor (non pie)"));

	TAutoConsoleVariable<float> CVarEditorNotificationDelayInSeconds(
		TEXT("pcg.EditorNotificationDelayInSeconds"),
		3.0f,
		TEXT("Time in seconds to wait before showing a notification to avoid spamming for short tasks"));
#endif

	TAutoConsoleVariable<bool> CVarDynamicTaskCulling(
		TEXT("pcg.Graph.DynamicTaskCulling"),
		true,
		TEXT("Controls whether tasks are culled at execution time, for example in response to an deactivated dynamic branch pin"));

	TAutoConsoleVariable<bool> CVarExecuteV2(
		TEXT("pcg.Graph.ExecuteV2"),
		true,
		TEXT("Enables the new execute allowing tasks to run out of tick"));

	TAutoConsoleVariable<int32> CVarMaxWorkerTasks(
		TEXT("pcg.Graph.MaxWorkerTasks"),
		32,
		TEXT("Max in flight PCG Element tasks allowed at the same time. Note that PCG Element execution can spawn async tasks themselves"));

	void ClearAsyncFlags(TSet<TObjectPtr<UObject>>& AsyncObjects)
	{
		// Remove Async Flags from Objects created in Async PCG Tasks so that they can get tracked by the GarbageCollector properly
		// The reason to do this here and not in the FPCGContext destructor is that FPCGContext might get copied in Blueprint node execution causing multiple instances of the same AsyncObjects list
		// The FPCGGraphActiveTask is the true owner of the original context (throughg TUniquePtr) so we let it do the cleanup
		for (TObjectPtr<UObject>& AsyncObject : AsyncObjects)
		{
			if (ensure(AsyncObject->HasAnyInternalFlags(EInternalObjectFlags::Async)))
			{
				AsyncObject->ClearInternalFlags(EInternalObjectFlags::Async);
				ForEachObjectWithOuter(AsyncObject, [&AsyncObjects](UObject* SubObject)
				{
					if (AsyncObjects.Contains(SubObject))
					{
						return;
					}
					
					SubObject->ClearInternalFlags(EInternalObjectFlags::Async);
				}, true);
			}
		}
	}

	// Needs to be called by owner of LiveTasksLock
	void AddToActiveTaskArrayNoLock(TArray<TSharedPtr<FPCGGraphActiveTask>>& ActiveTaskArray, TSharedPtr<FPCGGraphActiveTask> ActiveTask)
	{
		ActiveTaskArray.Add(ActiveTask);
		ActiveTask->TaskIndex = ActiveTaskArray.Num() - 1;
	}

	// Needs to be called by owner of LiveTasksLock
	void RemoveAtFromActiveTaskArrayNoLock(TArray<TSharedPtr<FPCGGraphActiveTask>>& ActiveTaskArray, int32 Index)
	{
		if (ActiveTaskArray.IsValidIndex(Index))
		{
			ActiveTaskArray.RemoveAtSwap(Index, EAllowShrinking::No);

			if (ActiveTaskArray.IsValidIndex(Index))
			{
				ActiveTaskArray[Index]->TaskIndex = Index;
			}
		}
	}
		
	// Similar to existing UE::TScopeLock but allows optional TryLock in which case caller is responsible to 
	// check if Lock succeeded or not with IsLocked(). This allows execution code to be skipped if non main thread
	// tasks fail to get the lock instead of spinning for nothing
	template<typename MutexType>
	class TScopeLock
	{
	public:
		UE_NONCOPYABLE(TScopeLock);

		UE_NODISCARD_CTOR TScopeLock(MutexType& InMutex, bool bTryLock=false)
			: Mutex(&InMutex), bLocked(false)
		{
			check(Mutex);
			if (bTryLock)
			{
				bLocked = Mutex->TryLock();
			}
			else
			{
				Mutex->Lock();
				bLocked = true;
			}
		}

		~TScopeLock()
		{
			if (bLocked && Mutex)
			{
				Mutex->Unlock();
				Mutex = nullptr;
			}
		}
			
		bool IsLocked() const
		{
			return bLocked;
		}

	private:
		MutexType* Mutex;
		bool bLocked;
	};
}

FPCGGraphExecutor::FPCGGraphExecutor()
	: FPCGGraphExecutor(nullptr)
{
}

FPCGGraphExecutor::FPCGGraphExecutor(UWorld* InWorld)
	: World(InWorld)
{
	static_assert((int8)(EExecutionCacheDataType::Count) == ExecutionCacheSize);

	GameThreadHandler = MakeShared<FGameThreadHandler>(this);
}

FPCGGraphExecutor::~FPCGGraphExecutor()
{
	GameThreadHandler = nullptr;
	
	// We don't really need to do this here (it would be done in the destructor of these both)
	// but this is to clarify/ensure the order in which this happens
	GraphCache.ClearCache();

#if WITH_EDITOR
	// Cleanup + clear notification
	ClearAllTasks();
	ReleaseGenerationNotification();
#endif
}

void FPCGGraphExecutor::Compile(UPCGGraph* Graph)
{
	GraphCompiler.Compile(Graph);
}

FPCGTaskId FPCGGraphExecutor::Schedule(UPCGComponent* Component, const TArray<FPCGTaskId>& ExternalDependencies, const FPCGStack* InFromStack)
{
	check(Component);
	UPCGGraph* Graph = Component->GetGraph();

	return Schedule(Graph, Component, GetPreGraphElement(), GetFetchInputElement(), ExternalDependencies, InFromStack, /*bAllowHierarchicalGeneration=*/true);
}

FPCGTaskId FPCGGraphExecutor::Schedule(
	UPCGGraph* Graph,
	UPCGComponent* SourceComponent,
	FPCGElementPtr PreGraphElement,
	FPCGElementPtr InputElement,
	const TArray<FPCGTaskId>& ExternalDependencies,
	const FPCGStack* InFromStack,
	bool bAllowHierarchicalGeneration)
{
	check(SourceComponent);

	PCGGraphExecutionLogging::LogGraphSchedule(SourceComponent, Graph);
	
	FPCGTaskId ScheduledId = InvalidPCGTaskId;

	uint32 GenerationGridSize = PCGHiGenGrid::UninitializedGridSize();
	if (bAllowHierarchicalGeneration && Graph->IsHierarchicalGenerationEnabled())
	{
		if (SourceComponent->IsLocalComponent() || SourceComponent->IsPartitioned())
		{
			GenerationGridSize = SourceComponent->GetGenerationGridSize();
		}
	}

	// Get compiled tasks from compiler
	TSharedPtr<FPCGStackContext> StackContextPtr = MakeShared<FPCGStackContext>();
	TArray<FPCGGraphTask> CompiledTasks = GraphCompiler.GetCompiledTasks(Graph, GenerationGridSize, *StackContextPtr);

	// Create the final stack context by including the current stack frames
	if (InFromStack)
	{
		StackContextPtr->PrependParentStack(InFromStack);
	}
	else
	{
		FPCGStack ComponentStack;
		ComponentStack.PushFrame(SourceComponent);
		StackContextPtr->PrependParentStack(&ComponentStack);		
	}

#if WITH_EDITOR
	if (UPCGSubsystem* Subsystem = SourceComponent->GetSubsystem())
	{
		Subsystem->OnScheduleGraph(*StackContextPtr);
	}
#endif

	// Assign this component to the tasks
	for (FPCGGraphTask& Task : CompiledTasks)
	{
		Task.SourceComponent = SourceComponent;
		Task.StackContext = StackContextPtr;
	}

	// Prepare scheduled task that will be promoted in the next Execute call.
	if (CompiledTasks.Num() > 0)
	{ 
		check(CompiledTasks[0].Node == Graph->GetInputNode());

		// Setup fetch task on input node
		CompiledTasks[0].Element = InputElement;

		PCGGraphExecutor::TScopeLock ScopeLock(ScheduleLock);

		FPCGGraphScheduleTask& ScheduledTask = ScheduledTasks.Emplace_GetRef();
		ScheduledTask.Tasks = MoveTemp(CompiledTasks);
		ScheduledTask.SourceComponent = SourceComponent;

		// Offset task node ids
		FPCGGraphCompiler::OffsetNodeIds(ScheduledTask.Tasks, NextTaskId, InvalidPCGTaskId);
		NextTaskId += ScheduledTask.Tasks.Num();
		ScheduledId = NextTaskId - 1; // This is true because the last task is from the output node or is the post-execute task

		const FPCGTaskId GraphExecutionTaskId = InFromStack ? InFromStack->GetGraphExecutionTaskId() : ScheduledId;
		StackContextPtr->SetGraphExecutionTaskId(GraphExecutionTaskId);

		// Push task (not data) dependencies on the pre-execute task
		// Note must be done after the offset ids, otherwise we'll break the dependencies
		check(ScheduledTask.Tasks.Num() >= 2 && ScheduledTask.Tasks[ScheduledTask.Tasks.Num() - 2].Node == nullptr);
		FPCGGraphTask& PreGraphTask = ScheduledTask.Tasks[ScheduledTask.Tasks.Num() - 2];

		if(PreGraphElement.IsValid())
		{
			PreGraphTask.Element = PreGraphElement;
		}

		for (FPCGTaskId ExternalDependency : ExternalDependencies)
		{
			// For the pre-task, we don't consume any input
			PreGraphTask.Inputs.Emplace(ExternalDependency, /*InUpstreamPin=*/FPCGGraphTaskInput::NoPin, /*InDownstreamPin=*/FPCGGraphTaskInput::NoPin, /*bInProvideData=*/false);
		}

		ScheduledTask.FirstTaskIndex = ScheduledTask.Tasks.Num() - 2;
		ScheduledTask.LastTaskIndex = ScheduledTask.Tasks.Num() - 1;
	}

	return ScheduledId;
}

TArray<UPCGComponent*> FPCGGraphExecutor::Cancel(UPCGComponent* InComponent)
{
	auto CancelIfSameComponent = [InComponent](TWeakObjectPtr<UPCGComponent> Component)
	{
		return Component.IsValid() && InComponent == Component;
	};

	return Cancel(CancelIfSameComponent).Array();
}

TArray<UPCGComponent*> FPCGGraphExecutor::Cancel(UPCGGraph* InGraph)
{
	auto CancelIfComponentUsesGraph = [InGraph](TWeakObjectPtr<UPCGComponent> Component)
	{
		return (Component.IsValid() && Component->GetGraph() == InGraph);
	};

	return Cancel(CancelIfComponentUsesGraph).Array();
}

TArray<UPCGComponent*> FPCGGraphExecutor::CancelAll()
{
	auto CancelAllGeneration = [](TWeakObjectPtr<UPCGComponent> Component)
	{
		return Component.IsValid();
	};

	return Cancel(CancelAllGeneration).Array();
}

TSet<UPCGComponent*> FPCGGraphExecutor::Cancel(TFunctionRef<bool(TWeakObjectPtr<UPCGComponent>)> CancelFilter)
{
	check(IsInGameThread());
	TSet<UPCGComponent*> CancelledComponents;
	const FPCGGraphExecutor::EExecuteVersion CurrentExecuteVersion = GetExecuteVersion();

	// Visit scheduled tasks
	{
		PCGGraphExecutor::TScopeLock ScopeLock(ScheduleLock);
		for (const FPCGGraphScheduleTask& ScheduledTask : ScheduledTasks)
		{
			if (CancelFilter(ScheduledTask.SourceComponent))
			{
				CancelledComponents.Add(ScheduledTask.SourceComponent.Get());
			}
		}
	}
		
	{
		// Visit ready tasks
		PCGGraphExecutor::TScopeLock ScopeLock(LiveTasksLock);
		for (const FPCGGraphTask& Task : ReadyTasks)
		{
			if (CancelFilter(Task.SourceComponent))
			{
				CancelledComponents.Add(Task.SourceComponent.Get());
			}
		}

		auto GatherCancelledComponentsForActiveTasks = [&CancelFilter, &CancelledComponents](const TArray<TSharedPtr<FPCGGraphActiveTask>>& InActiveTasks)
		{
			for (const TSharedPtr<FPCGGraphActiveTask>& Task : InActiveTasks)
			{
				if (Task->Context && CancelFilter(Task->Context->SourceComponent))
				{
					CancelledComponents.Add(Task->Context->SourceComponent.Get());
				}
			}
		};

		GatherCancelledComponentsForActiveTasks(ActiveTasks);
		GatherCancelledComponentsForActiveTasks(ActiveTasksGameThreadOnly);
		GatherCancelledComponentsForActiveTasks(SleepingTasks);
	}

	// In one instance this function was observed to return nullptr in the CancelledComponents set.
	// All the cancel filter lambdas check the ptr is valid, so it's not clear why. It seems perhaps
	// the SourceComponent weak ptr became nullptr between calling CancelFilter and adding the component
	// to the set.
	ensure(CancelledComponents.Remove(nullptr) == 0);

	// Early out - nothing to cancel
	if (CancelledComponents.IsEmpty())
	{
		return CancelledComponents;
	}

	PCGGraphExecutionLogging::LogComponentCancellation(CancelledComponents);

	auto TryAbortScheduledTasks = [](FPCGGraphScheduleTask& ScheduledTask)
	{
		if (ScheduledTask.bHasAbortCallbacks)
		{
			for (FPCGGraphTask& InternalTask : ScheduledTask.Tasks)
			{
				if (InternalTask.Element)
				{
					InternalTask.Element->Abort(InternalTask.Context);
				}
			}
		}
	};

	TArray<FPCGTaskId> CancelledScheduledTasks;

	bool bStableCancellationSet = false;
	while (!bStableCancellationSet)
	{
		bStableCancellationSet = true;

		// Remove from scheduled tasks
		{
			PCGGraphExecutor::TScopeLock ScopeLock(ScheduleLock);
			for (int32 ScheduledTaskIndex = ScheduledTasks.Num() - 1; ScheduledTaskIndex >= 0; --ScheduledTaskIndex)
			{
				FPCGGraphScheduleTask& ScheduledTask = ScheduledTasks[ScheduledTaskIndex];
				if (CancelledComponents.Contains(ScheduledTask.SourceComponent.Get()))
				{
					CancelledScheduledTasks.Add(ScheduledTask.Tasks[ScheduledTask.LastTaskIndex].NodeId);

					TryAbortScheduledTasks(ScheduledTask);
					ScheduledTasks.RemoveAtSwap(ScheduledTaskIndex);
				}
			}

			// WARNING: variable upper bound
			for (int32 CancelledTaskIdIndex = 0; CancelledTaskIdIndex < CancelledScheduledTasks.Num(); ++CancelledTaskIdIndex)
			{
				const FPCGTaskId EndTaskId = CancelledScheduledTasks[CancelledTaskIdIndex];
				for (int32 ScheduledTaskIndex = ScheduledTasks.Num() - 1; ScheduledTaskIndex >= 0; --ScheduledTaskIndex)
				{
					FPCGGraphScheduleTask& ScheduledTask = ScheduledTasks[ScheduledTaskIndex];
					const bool bContainsDependency = Algo::AnyOf(ScheduledTask.Tasks[ScheduledTask.FirstTaskIndex].Inputs, [EndTaskId](const FPCGGraphTaskInput& Input) { return Input.TaskId == EndTaskId; });

					if (bContainsDependency)
					{
						UPCGComponent* TaskComponent = ScheduledTask.SourceComponent.Get();
						if (TaskComponent && !CancelledComponents.Contains(TaskComponent))
						{
							CancelledComponents.Add(TaskComponent);
							bStableCancellationSet = false;
						}

						CancelledScheduledTasks.Add(ScheduledTask.Tasks[ScheduledTask.LastTaskIndex].NodeId);

						TryAbortScheduledTasks(ScheduledTask);
						ScheduledTasks.RemoveAtSwap(ScheduledTaskIndex);
					}
				}
			}

			CancelledScheduledTasks.Reset();
		}
				
		// Mark as cancelled in the active tasks - needed to make sure we're not breaking the current execution (if any)
		{
			TArray<TTuple<TSharedPtr<FPCGGraphActiveTask>, UE::Tasks::TTask<bool>>> CancelledActiveTasks;
			{
				auto CancelActiveTasks = [CurrentExecuteVersion, &CancelledComponents, &CancelledActiveTasks](TArray<TSharedPtr<FPCGGraphActiveTask>>& InActiveTasks)
				{
					for (int32 ActiveTaskIndex = InActiveTasks.Num() - 1; ActiveTaskIndex >= 0; --ActiveTaskIndex)
					{
						TSharedPtr<FPCGGraphActiveTask> ActiveTask = InActiveTasks[ActiveTaskIndex];
						if (ActiveTask->Context && CancelledComponents.Contains(ActiveTask->Context->SourceComponent.Get()))
						{
							// While we have lock Task can't complete, but we can't wait on this task with the lock neither so we capture it here 
							// and are going to wait on it outside of the LiveTaskLock
							UE::Tasks::TTask<bool> TaskHandle = ActiveTask->ExecutingTask;
							ActiveTask->bWasCancelled = true;

							CancelledActiveTasks.Add({ ActiveTask, MoveTemp(TaskHandle) });
							
							// Avoid removing if using old execution path as it doesn't keep a sharedptr to the executing task (which would have been a way of allowing removal here, but since that path is going away, lets keep it this way)
							if (CurrentExecuteVersion == EExecuteVersion::V2)
							{
								check(ActiveTask->TaskIndex == ActiveTaskIndex);
								PCGGraphExecutor::RemoveAtFromActiveTaskArrayNoLock(InActiveTasks, ActiveTaskIndex);
								ActiveTask->TaskIndex = INDEX_NONE;
							}
						}
					}
				};
				
				PCGGraphExecutor::TScopeLock ScopeLock(LiveTasksLock);
				CancelActiveTasks(ActiveTasks);
				CancelActiveTasks(ActiveTasksGameThreadOnly);
			}

			for (TTuple<TSharedPtr<FPCGGraphActiveTask>, UE::Tasks::TTask<bool>>& CancelledActiveTask : CancelledActiveTasks)
			{
				// Wait for Task (if any) to complete
				UE::Tasks::TTask<bool> TaskHandle = CancelledActiveTask.Get<UE::Tasks::TTask<bool>>();
				TaskHandle.Wait();
				
				TSharedPtr<FPCGGraphActiveTask> ActiveTask = CancelledActiveTask.Get<TSharedPtr<FPCGGraphActiveTask>>();			
				check(ActiveTask->Element);
				ActiveTask->Element->Abort(ActiveTask->Context.Get());
												
				bStableCancellationSet &= !CancelNextTasks(ActiveTask->NodeId, CancelledComponents);
			}
		}

		// Remove from ready tasks
		{
			TArray<FPCGGraphTask> CancelledReadyTasks;
			{
				PCGGraphExecutor::TScopeLock ScopeLock(LiveTasksLock);
				for (int32 ReadyTaskIndex = ReadyTasks.Num() - 1; ReadyTaskIndex >= 0; --ReadyTaskIndex)
				{
					FPCGGraphTask& Task = ReadyTasks[ReadyTaskIndex];

					if (CancelledComponents.Contains(Task.SourceComponent.Get()))
					{
						CancelledReadyTasks.Add(MoveTemp(Task));
						ReadyTasks.RemoveAtSwap(ReadyTaskIndex);
					}
				}
			}

			for (FPCGGraphTask& CancelledReadyTask : CancelledReadyTasks)
			{
				if (CancelledReadyTask.Element)
				{
					CancelledReadyTask.Element->Abort(CancelledReadyTask.Context);
				}

				FPCGTaskId CancelledTaskId = CancelledReadyTask.NodeId;
				RemoveTaskFromInputSuccessors(CancelledTaskId, CancelledReadyTask.Inputs);

				delete CancelledReadyTask.Context;
				bStableCancellationSet &= !CancelNextTasks(CancelledTaskId, CancelledComponents);
			}
		}

		// Remove from sleeping tasks
		{
			TArray<TSharedPtr<FPCGGraphActiveTask>> CancelledSleepingTasks;
			{
				PCGGraphExecutor::TScopeLock ScopeLock(LiveTasksLock);
				for (int32 SleepingTaskIndex = SleepingTasks.Num() - 1; SleepingTaskIndex >= 0; --SleepingTaskIndex)
				{
					TSharedPtr<FPCGGraphActiveTask> Task = SleepingTasks[SleepingTaskIndex];
					if (Task->Context && CancelledComponents.Contains(Task->Context->SourceComponent.Get()))
					{
						check(Task->TaskIndex == SleepingTaskIndex);
						CancelledSleepingTasks.Add(Task);
						PCGGraphExecutor::RemoveAtFromActiveTaskArrayNoLock(SleepingTasks, SleepingTaskIndex);
						Task->TaskIndex = INDEX_NONE;
					}
				}
			}

			for (TSharedPtr<FPCGGraphActiveTask>& CancelledSleepingTask : CancelledSleepingTasks)
			{
				check(CancelledSleepingTask->Element);
				CancelledSleepingTask->Element->Abort(CancelledSleepingTask->Context.Get());

				FPCGTaskId CancelledTaskId = CancelledSleepingTask->NodeId;
				RemoveTaskFromInputSuccessors(CancelledTaskId, CancelledSleepingTask->Inputs);
								
				bStableCancellationSet &= !CancelNextTasks(CancelledTaskId, CancelledComponents);
			}
		}
	}

	// Finally, update the notification so it shows the new information
#if WITH_EDITOR
	UpdateGenerationNotification();
#endif

	return CancelledComponents;
}

bool FPCGGraphExecutor::IsGraphCurrentlyExecuting(const UPCGGraph* InGraph)
{
	bool bAnyPresent = false;

	// This makes use of the Cancel function which runs over all tasks, but it always returns false so no tasks are cancelled.
	auto CheckIfAnyGraphTasksPresent = [InGraph, &bAnyPresent](TWeakObjectPtr<UPCGComponent> Component)
	{
		bAnyPresent |= Component.IsValid() && Component->GetGraph() == InGraph;
		return false;
	};

	Cancel(CheckIfAnyGraphTasksPresent);

	return bAnyPresent;
}

bool FPCGGraphExecutor::IsAnyGraphCurrentlyExecuting() const
{
	if (GetNonScheduledRemainingTaskCount() > 0)
	{
		return true;
	}

	return ScheduledTasks.Num() > 0;
}

int32 FPCGGraphExecutor::GetNonScheduledRemainingTaskCount() const
{
	return Tasks.Num() + ReadyTasks.Num() + ActiveTasks.Num() + ActiveTasksGameThreadOnly.Num() + SleepingTasks.Num();
}

UPCGData* FPCGGraphExecutor::GetExecutionCacheData(FPCGTaskId InGraphExecutionTaskId, EExecutionCacheDataType InExecutionCacheDataType)
{
	if (InGraphExecutionTaskId != InvalidPCGTaskId)
	{
		PCGGraphExecutor::TScopeLock ScopeLock(GraphExecutionCachesLock);
		if (FGraphExecutionCache* GraphExecutionCache = GraphExecutionCaches.Find(InGraphExecutionTaskId))
		{
			return GraphExecutionCache->Data[(int8)InExecutionCacheDataType];
		}
	}

	return nullptr;
}

void FPCGGraphExecutor::SetExecutionCacheData(FPCGTaskId InGraphExecutionTaskId, EExecutionCacheDataType InExecutionCacheDataType, UPCGData* InData)
{
	if (InGraphExecutionTaskId != InvalidPCGTaskId)
	{
		PCGGraphExecutor::TScopeLock ScopeLock(GraphExecutionCachesLock);
		FGraphExecutionCache& GraphExecutionCache = GraphExecutionCaches.FindOrAdd(InGraphExecutionTaskId);
		check(!GraphExecutionCache.Data[(int8)InExecutionCacheDataType]);
		GraphExecutionCache.Data[(int8)InExecutionCacheDataType] = InData;
	}
}

FPCGTaskId FPCGGraphExecutor::ScheduleGeneric(TFunction<bool()> InOperation, UPCGComponent* InSourceComponent, const TArray<FPCGTaskId>& TaskExecutionDependencies)
{
	return ScheduleGeneric(
		InOperation,
		TFunction<void()>(),
		InSourceComponent,
		TaskExecutionDependencies);
}

FPCGTaskId FPCGGraphExecutor::ScheduleGeneric(TFunction<bool()> InOperation, TFunction<void()> InAbortOperation, UPCGComponent* InSourceComponent, const TArray<FPCGTaskId>& TaskExecutionDependencies)
{
	// Since we have no context, the generic task will consume no input (no data dependencies).
	return ScheduleGenericWithContext(
		[Operation = MoveTemp(InOperation)](FPCGContext*) -> bool
		{
			return Operation && Operation();
		}, 
		[AbortOperation = MoveTemp(InAbortOperation)](FPCGContext*)
		{
			if(AbortOperation)
			{
				AbortOperation();
			}
		},
		InSourceComponent,
		TaskExecutionDependencies,
		/*TaskDataDependencies=*/{});
}

FPCGTaskId FPCGGraphExecutor::ScheduleGenericWithContext(TFunction<bool(FPCGContext*)> InOperation, UPCGComponent* InSourceComponent, const TArray<FPCGTaskId>& TaskExecutionDependencies, const TArray<FPCGTaskId>& TaskDataDependencies)
{
	return ScheduleGenericWithContext(
		InOperation,
		TFunction<void(FPCGContext*)>(),
		InSourceComponent,
		TaskExecutionDependencies,
		TaskDataDependencies);
}

FPCGTaskId FPCGGraphExecutor::ScheduleGenericWithContext(TFunction<bool(FPCGContext*)> InOperation, TFunction<void(FPCGContext*)> InAbortOperation, UPCGComponent* InSourceComponent, const TArray<FPCGTaskId>& TaskExecutionDependencies, const TArray<FPCGTaskId>& TaskDataDependencies)
{
	// Build task & element to hold the operation to perform
	FPCGGraphTask Task;

	for (FPCGTaskId TaskDependency : TaskExecutionDependencies)
	{
		ensure(TaskDependency != InvalidPCGTaskId);
		Task.Inputs.Emplace(TaskDependency, /*InUpstreamPin=*/FPCGGraphTaskInput::NoPin, /*InDownstreamPin=*/FPCGGraphTaskInput::NoPin, /*bInProvideData=*/false);
	}

	for (FPCGTaskId TaskDependency : TaskDataDependencies)
	{
		ensure(TaskDependency != InvalidPCGTaskId);
		Task.Inputs.Emplace(TaskDependency);
	}

	Task.SourceComponent = InSourceComponent;
	Task.Element = MakeShared<FPCGGenericElement>(InOperation, InAbortOperation);

	{
		PCGGraphExecutor::TScopeLock ScopeLock(ScheduleLock);

		// Assign task id
		Task.NodeId = NextTaskId++;

		FPCGGraphScheduleTask& ScheduledTask = ScheduledTasks.Emplace_GetRef();
		ScheduledTask.Tasks.Add(Task);
		ScheduledTask.SourceComponent = InSourceComponent;
		ScheduledTask.bHasAbortCallbacks = !!InAbortOperation;
	}
	return Task.NodeId;
}

void FPCGGraphExecutor::MarkInputResults(TArrayView<const FPCGTaskId> InInputResults)
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGGraphExecutor::MarkInputResults);
	if (InInputResults.Num() > 0)
	{
		PCGGraphExecutor::TScopeLock ScopeLock(TaskOutputsLock);
		for (FPCGTaskId TaskId : InInputResults)
		{
			FOutputDataInfo& OutputDataInfo = TaskOutputs[TaskId];
			if (!OutputDataInfo.bNeedsManualClear && --OutputDataInfo.RemainingSuccessorCount == 0)
			{
				TaskOutputs.Remove(TaskId);
			}
		}
	}
}

bool FPCGGraphExecutor::GetOutputData(FPCGTaskId TaskId, FPCGDataCollection& OutData)
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGGraphExecutor::GetOutputData);
	PCGGraphExecutor::TScopeLock ScopeLock(TaskOutputsLock);
	if (FOutputDataInfo* OutputDataInfo = TaskOutputs.Find(TaskId))
	{
		ensure(!OutputDataInfo->bCulled);
		OutData = OutputDataInfo->DataCollection;
		return true;
	}
	else
	{
		return false;
	}
}

void FPCGGraphExecutor::ClearOutputData(FPCGTaskId TaskId)
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGGraphExecutor::ClearOutputData);
	PCGGraphExecutor::TScopeLock ScopeLock(TaskOutputsLock);
	if (FOutputDataInfo* OutputDataInfo = TaskOutputs.Find(TaskId); OutputDataInfo && ensure(OutputDataInfo->bNeedsManualClear))
	{
		TaskOutputs.Remove(TaskId);
	}
}

bool FPCGGraphExecutor::ProcessScheduledTasks()
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGGraphExecutor::ProcessScheduledTasks);
	bool bProcessedNewTasks = false;
	const bool bIsInGameThread = IsInGameThread();
	TArray<FCachedResult*> CachedResults;

	{
		// Process any newly scheduled graphs to execute
		PCGGraphExecutor::TScopeLock ScopeLock(ScheduleLock, !bIsInGameThread);
		if (ScopeLock.IsLocked())
		{
			for (int32 ScheduledTaskIndex = ScheduledTasks.Num() - 1; ScheduledTaskIndex >= 0; --ScheduledTaskIndex)
			{
				FPCGGraphScheduleTask& ScheduledTask = ScheduledTasks[ScheduledTaskIndex];

				check(ScheduledTask.Tasks.Num() > 0);
				// Push tasks to the primary task list & build successors map
				for (FPCGGraphTask& Task : ScheduledTask.Tasks)
				{
					const FPCGTaskId TaskId = Task.NodeId;

					// TODO: review if it's actually possible for a task with inputs to be ready at this point - it seems very unlikely
					bool bPushToReady = true;
					{
						PCGGraphExecutor::TScopeLock ChildScopeLock(TasksLock);
						PCGGraphExecutor::TScopeLock OutputLock(TaskOutputsLock);
						for (const FPCGGraphTaskInput& Input : Task.Inputs)
						{
							if (!TaskOutputs.Contains(Input.TaskId))
							{
								TaskSuccessors.FindOrAdd(Input.TaskId).Add(TaskId);
								bPushToReady = false;
							}
						}
					}

					// Automatically push inputless/already satisfied tasks to the ready queue
					if (bPushToReady)
					{
						OnTaskInputsReady(Task, CachedResults, bIsInGameThread);
					}
					else
					{
						PCGGraphExecutor::TScopeLock ChildScopeLock(TasksLock);
						Tasks.Add(TaskId, MoveTemp(Task));
					}
					bProcessedNewTasks = true;
				}
			}

			if (!ScheduledTasks.IsEmpty())
			{
				PCGGraphExecutor::TScopeLock ChildScopeLock(TasksLock);
				PCGGraphExecutionLogging::LogGraphPostSchedule(Tasks, TaskSuccessors);
			}

			ScheduledTasks.Reset();
		}
	}

	ProcessCachedResults(MoveTemp(CachedResults));
		
	if (bIsInGameThread)
	{
		PCGGraphExecutor::TScopeLock ScopeLock(TasksLock);
		PCGGraphExecutor::TScopeLock ChildScopeLock(LiveTasksLock);
		PCGGraphExecutor::TScopeLock CachingResultsScopeLock(CachingResultsLock);
		// This is a safeguard to check if we're in a stuck state
		if (CollectGCCachingResults.Num() == 0 && ReadyTasks.Num() == 0 && ActiveTasks.Num() == 0 && ActiveTasksGameThreadOnly.Num() == 0 && SleepingTasks.Num() == 0 && Tasks.Num() > 0)
		{
			UE_LOG(LogPCG, Error, TEXT("PCG Graph executor error: tasks are in a deadlocked state. Will drop all tasks."));
			ClearAllTasks();
		}
	}

	return bProcessedNewTasks;
}

void FPCGGraphExecutor::ExecuteTasksEnded()
{
	check(IsInGameThread());
	if (!bNeedToExecuteTasksEnded)
	{
		return;
	}
	bNeedToExecuteTasksEnded = false;

	check(IsInGameThread());
	// Nothing left to do; we'll release everything here.
	// TODO: this is fine and will make sure any intermediate data is properly
	// garbage collected, however, this goes a bit against our goals if we want to
	// keep a cache of intermediate results.
	if (GetNonScheduledRemainingTaskCount() == 0)
	{
		{
			PCGGraphExecutor::TScopeLock ScopeLock(TasksLock);
			if (!ensure(TaskSuccessors.IsEmpty()))
			{
				TaskSuccessors.Reset();
			}
		}

		ClearResults();

#if WITH_EDITOR
		// Call the notification update here to prevent it from sticking around - needed because we early out before this
		UpdateGenerationNotification();
#endif

		PCGGraphExecutionLogging::LogGraphExecuteFrameFinished();
	}

	// Purge things from cache if memory usage is too high
	if (GraphCache.EnforceMemoryBudget())
	{
		CollectGarbage(GARBAGE_COLLECTION_KEEPFLAGS, true);
	}
}

void FPCGGraphExecutor::PostTaskExecute(TSharedPtr<FPCGGraphActiveTask> ActiveTaskPtr, bool bIsDone)
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGGraphExecutor::PostTaskExecute);
	check(ActiveTaskPtr);
	FPCGGraphActiveTask& ActiveTask = *ActiveTaskPtr;
	check(ActiveTask.Context);
	check(ActiveTask.bIsExecutingTask || ActiveTask.bWasCancelled);

	if (!bIsDone)
	{
		TRACE_CPUPROFILER_EVENT_SCOPE(FPCGGraphExecutor::PostTaskExecute::NotDone);
		PCGGraphExecutor::TScopeLock ScopeLock(LiveTasksLock);
		
		// Once we get the lock check for cancellation again in case task was cancelled while executing
		if (!ActiveTaskPtr->bWasCancelled)
		{
			ActiveTask.StopExecuting();

			TArray<TSharedPtr<FPCGGraphActiveTask>>& ActiveTaskArrayToRemove = ActiveTask.bIsGameThreadOnly ? ActiveTasksGameThreadOnly : ActiveTasks;
			const int32 TaskRemoveIndex = ActiveTask.TaskIndex;
			check(TaskRemoveIndex != INDEX_NONE && ActiveTaskArrayToRemove[TaskRemoveIndex] == ActiveTaskPtr);

			if (ActiveTask.Context->bIsPaused)
			{
				PCGGraphExecutor::AddToActiveTaskArrayNoLock(SleepingTasks, ActiveTaskPtr);
				PCGGraphExecutor::RemoveAtFromActiveTaskArrayNoLock(ActiveTaskArrayToRemove, TaskRemoveIndex);
			}
			else if (ActiveTask.bIsGameThreadOnly != ActiveTask.CanExecuteOnlyOnMainThread())
			{
				ActiveTask.bIsGameThreadOnly = !ActiveTask.bIsGameThreadOnly;
				TArray<TSharedPtr<FPCGGraphActiveTask>>& ActiveTaskArrayToAdd = ActiveTask.bIsGameThreadOnly ? ActiveTasksGameThreadOnly : ActiveTasks;

				PCGGraphExecutor::AddToActiveTaskArrayNoLock(ActiveTaskArrayToAdd, ActiveTaskPtr);
				PCGGraphExecutor::RemoveAtFromActiveTaskArrayNoLock(ActiveTaskArrayToRemove, TaskRemoveIndex);
			}

			// Task might have been moved to SleepingTasks or changed from ActiveTasks to ActiveTasksGameThreadOnly (or vice-versa) 
			// but it isn't done so we return
			return;
		}
	}

	const bool bTaskFullyExecuted = !ActiveTask.bWasCancelled && ActiveTask.Context->CurrentPhase == EPCGExecutionPhase::Done;

#if WITH_EDITOR
	const bool bTaskWasBypassed = ActiveTask.bIsBypassed;
#else
	const bool bTaskWasBypassed = false;
#endif

	bNeedToExecuteTasksEnded = true;

	const UPCGSettingsInterface* ActiveTaskSettingsInterface = ActiveTask.Context->GetInputSettingsInterface();
	const uint64 InactivePinMask = ActiveTask.Context->OutputData.InactiveOutputPinBitmask;

	if (InactivePinMask != 0 && ActiveTaskSettingsInterface)
	{
		const UPCGSettings* ActiveTaskSettings = ActiveTaskSettingsInterface ? ActiveTaskSettingsInterface->GetSettings() : nullptr;

		// If output pins may have been deactivated then perform culling and update information for editor visualization.
		if (ActiveTaskSettings && ActiveTaskSettings->OutputPinsCanBeDeactivated())
		{
			CullInactiveDownstreamNodes(ActiveTask.NodeId, InactivePinMask);

#if WITH_EDITOR
			SendInactivePinNotification(ActiveTask.Context->Node, ActiveTask.StackContext->GetStack(ActiveTask.StackIndex), InactivePinMask);
#endif
		}
	}

	if (ActiveTask.Context->AsyncState.NumAvailableTasks > 0)
	{
		CurrentlyUsedThreads -= ActiveTask.Context->AsyncState.NumAvailableTasks;
	}

	if (bTaskWasBypassed || bTaskFullyExecuted)
	{
#if WITH_EDITOR
		// No need to add if we are post executing off of main thread
		if(!IsInGameThread())
		{
			PCGGraphExecutor::TScopeLock ScopeLock(CollectGCReferenceTasksLock);
			CollectGCReferenceTasks.Add(ActiveTaskPtr);
		}

		PCGHelpers::ExecuteOnGameThread(UE_SOURCE_LOCATION, [WeakHandler = GameThreadHandler->AsWeak(), ActiveTaskPtr]()
		{
			if (TSharedPtr<FPCGGraphExecutor::FGameThreadHandler> Handler = WeakHandler.Pin())
			{
				ActiveTaskPtr->Element->DebugDisplay(ActiveTaskPtr->Context.Get());

				PCGGraphExecutor::TScopeLock ScopeLock(Handler->GetExecutor()->CollectGCReferenceTasksLock);
				Handler->GetExecutor()->CollectGCReferenceTasks.Remove(ActiveTaskPtr);
			}
		});
		
		if (UPCGComponent* SourceComponent = ActiveTask.Context->SourceComponent.Get())
		{
			if (ActiveTask.StackIndex != INDEX_NONE)
			{
				const FPCGStack* Stack = ActiveTask.StackContext->GetStack(ActiveTask.StackIndex);
				SourceComponent->StoreInspectionData(Stack, ActiveTask.Context->Node, &ActiveTask.Context->Timer, ActiveTask.Context->InputData, ActiveTask.Context->OutputData, /*bUsedCache=*/false);
			}
		}
#endif // WITH_EDITOR

		// If the task is a post execute, then we can safely clear the data after getting it from the results.
		const bool bTaskIsPostExecute = (ActiveTask.Element == GraphCompiler.GetSharedTrivialPostGraphElement());

		// Store output in data map.
		StoreResults(ActiveTask.NodeId, ActiveTask.Context->OutputData, bTaskIsPostExecute);

		// Book-keeping
		QueueNextTasks(ActiveTask.NodeId);
	}

	// Erase from ActiveTasks
	{
		PCGGraphExecutor::TScopeLock ScopeLock(LiveTasksLock);
		TArray<TSharedPtr<FPCGGraphActiveTask>>& ActiveTaskArray = ActiveTask.bIsGameThreadOnly ? ActiveTasksGameThreadOnly : ActiveTasks;
		const int32 TaskIndex = ActiveTask.TaskIndex >= 0 ? ActiveTask.TaskIndex : ActiveTaskArray.Find(ActiveTaskPtr);
		if (ActiveTaskArray.IsValidIndex(TaskIndex))
		{
			check(ActiveTaskArray[TaskIndex] == ActiveTaskPtr);
			// Remove current active task from list
			PCGGraphExecutor::RemoveAtFromActiveTaskArrayNoLock(ActiveTaskArray, TaskIndex);
		}

		// Make sure we set this to false inside lock
		ActiveTask.StopExecuting();

		// Next Scheduling call needs to check if this task completion unblocked some sleeping task(s)
		bNeedToCheckSleepingTasks = true;
	}
}

void FPCGGraphExecutor::OnTaskInputsReady(FPCGGraphTask& Task, TArray<FCachedResult*>& OutCachedResults, bool bIsInGameThread)
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGGraphExecutor::OnTaskInputsReady);
	TArray<FPCGTaskId> ResultsToMarkAsRead;
	if (SetupTask(Task, ResultsToMarkAsRead))
	{
		check(Task.Element);

		FCachedResult* CachedResult = nullptr;

		// Query Cache if we can here, if not the Task will be pushed to ReadyTasks and PrepareForExecute will be called on MainThread if needed
		if (bIsInGameThread || !Task.CanExecuteOnlyOnMainThread())
		{
			PrepareForExecute(Task, CachedResult, /*bLiveTasksLockAlreadyLocked=*/false);
		}

		PCGGraphExecutor::TScopeLock ChildScopeLock(LiveTasksLock);
		if (CachedResult)
		{
			check(CachedResult->TaskId != InvalidPCGTaskId);
			OutCachedResults.Add(CachedResult);
		}
		else 
		{
			ReadyTasks.Emplace(MoveTemp(Task));
		}
	}

	MarkInputResults(ResultsToMarkAsRead);
}

bool FPCGGraphExecutor::SetupTask(FPCGGraphTask& Task, TArray<FPCGTaskId>& ResultsToMarkAsRead)
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGGraphExecutor::SetupTask);
	if (Task.bHasDoneSetup)
	{
		return true;
	}

	Task.bHasDoneSetup = true;

	// Build input
	BuildTaskInput(Task, ResultsToMarkAsRead);

	// Initialize the element if needed (required to know whether it will run on the main thread or not)
	if (!Task.Element)
	{
		// TODO: It may be more efficient to do this in UPCGGraph::PostLoad(), since these are only related to cooking (with the exception of EPCGElementSource::FromNode).
		if (Task.ElementSource == EPCGElementSource::Trivial)
		{
			Task.Element = GraphCompiler.GetSharedTrivialElement();
		}
		else if (Task.ElementSource == EPCGElementSource::TrivialPostGraph)
		{
			Task.Element = GraphCompiler.GetSharedTrivialPostGraphElement();
		}
		else if (Task.ElementSource == EPCGElementSource::Gather)
		{
			Task.Element = GraphCompiler.GetSharedGatherElement();
		}
		else if (Task.ElementSource == EPCGElementSource::FromNode)
		{
			// Get appropriate settings
			check(Task.Node);
			const UPCGSettings* Settings = Task.TaskInput.GetSettings(Task.Node->GetSettings());

			if (Settings)
			{
				Task.Element = Settings->GetElement();
			}
		}
		else if (Task.ElementSource == EPCGElementSource::FromCookedSettings)
		{
			check(Task.CookedSettings);
			Task.Element = Task.CookedSettings->GetElement();
		}
		else
		{
			checkNoEntry();
		}
	}

	// At this point, if the task doesn't have an element, we will never be able to execute it, so we can drop it.
	if (!Task.Element)
	{
		check(!Task.Context);
		return false;
	}

	return true;
}

void FPCGGraphExecutor::PrepareForExecute(FPCGGraphTask& Task, FCachedResult*& OutCachedResult, bool bLiveTasksLockAlreadyLocked)
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGGraphExecutor::PrepareForExecute);
	check(Task.bHasDoneSetup && !Task.bHasDonePrepareForExecute);
	
	// Set this only when exiting this method so that Context is created and is referencing the inputs
	ON_SCOPE_EXIT
	{
		Task.bHasDonePrepareForExecute = true;
	};

	PCGGraphExecutionLogging::LogTaskExecute(Task);

	// If a task is cacheable and has been cached, then we don't need to create an active task for it unless
	// there is an execution mode that would prevent us from doing so.
	const UPCGSettingsInterface* TaskSettingsInterface = Task.TaskInput.GetSettingsInterface(Task.Node ? Task.Node->GetSettingsInterface() : nullptr);
	const UPCGSettings* TaskSettings = TaskSettingsInterface ? TaskSettingsInterface->GetSettings() : nullptr;

	// Calculate Crc of dependencies (input data Crcs, settings) and use this as the key in the cache lookup
	FPCGCrc DependenciesCrc;
	EPCGCachingStatus CacheStatus = EPCGCachingStatus::NotInCache;
	bool bResultAlreadyInCache = false;

	// This section requires the lock on the caching results to prevent interaction between different tasks and the GC.
	{
		PCGGraphExecutor::TScopeLock ScopeLock(CachingResultsLock);
		FCachedResult LocalCachedResult;
		CacheStatus = Task.Element->RetrieveResultsFromCache(&GraphCache, Task.Node, Task.TaskInput, Task.SourceComponent.Get(), LocalCachedResult.Output, &DependenciesCrc);

		bResultAlreadyInCache = (CacheStatus == EPCGCachingStatus::Cached);
		if (bResultAlreadyInCache)
		{
			check(!CollectGCCachingResults.Contains(Task.NodeId));
			TUniquePtr<FCachedResult>& CachingResultPtr = CollectGCCachingResults.Add(Task.NodeId, MakeUnique<FCachedResult>());
			OutCachedResult = CachingResultPtr.Get();
			OutCachedResult->TaskId = Task.NodeId;
			OutCachedResult->Output = MoveTemp(LocalCachedResult.Output);
		}
	}

	if (CacheStatus == EPCGCachingStatus::NotCacheable)
	{
		PCGGraphExecutionLogging::LogTaskExecuteCachingDisabled(Task);
	}

#if WITH_EDITOR
	const bool bNeedsToCreateActiveTask = !bResultAlreadyInCache || TaskSettingsInterface->bDebug;
#else
	const bool bNeedsToCreateActiveTask = !bResultAlreadyInCache;
#endif

	if (!bNeedsToCreateActiveTask)
	{
		check(OutCachedResult);
#if WITH_EDITOR
		// Doing this now since we're about to modify ReadyTasks potentially reallocating while Task is a reference. 
		if (UPCGComponent* SourceComponent = Task.SourceComponent.Get())
		{
			if (Task.StackIndex != INDEX_NONE)
			{
				const FPCGStack* Stack = Task.GetStack();
				SourceComponent->StoreInspectionData(Stack, Task.Node, nullptr, Task.TaskInput, OutCachedResult->Output, /*bUsedCache=*/true);
			}
		}
#endif

		if (PCGGraphExecutor::CVarDynamicTaskCulling.GetValueOnAnyThread() && TaskSettings && TaskSettings->OutputPinsCanBeDeactivated() && OutCachedResult->Output.InactiveOutputPinBitmask != 0)
		{
			OutCachedResult->bDoDynamicTaskCulling = true;
			OutCachedResult->Stack = Task.GetStack();
			OutCachedResult->Node = Task.Node;
		}

		// If the task is a post execute, then we can safely clear the data after getting it from the results.
		OutCachedResult->bIsPostGraphTask = (Task.Element == GraphCompiler.GetSharedTrivialPostGraphElement());

		bNeedToExecuteTasksEnded = true;

		return;
	}
		
	// Allocate context if not previously done
	check(!Task.Context);
	
	{
		Task.Context = Task.Element->Initialize(Task.TaskInput, Task.SourceComponent, Task.Node);
		
		// Skip PostLoad only when in GeV2 and not on GameThread
		// The reason is that some nodes like SpawnActor / CreateTargetActor have TemplateActor subobjects that need PostLoad calls to function properly
		// If a node supports being prepared outside of the GameThread it needs to make sure that it and its sub-object do not depend on PostLoad being called.
		// This is true for most nodes as they only run some deprecation code in their PostLoad which isn't needed after duplication
		const bool bSkipPostLoad = GetExecuteVersion() == EExecuteVersion::V2 && !IsInGameThread();
		Task.Context->InitializeSettings(bSkipPostLoad);
		
		Task.Context->TaskId = Task.NodeId;
		Task.Context->CompiledTaskId = Task.CompiledTaskId;
		Task.Context->DependenciesCrc = DependenciesCrc;
		Task.Context->Stack = Task.GetStack();

		// Safe to remove async flags on CombineParams here
		PCGGraphExecutor::ClearAsyncFlags(Task.CombineParamsAsyncObjects);
	}

#if WITH_EDITOR
	if (bResultAlreadyInCache)
	{
		check(OutCachedResult->TaskId != InvalidPCGTaskId);
		Task.bIsBypassed = true;

		// Directly transfer Cache result for debugged tasks to Context output
		PCGGraphExecutor::TScopeLock ScopeLock(CachingResultsLock);
		Task.Context->OutputData = MoveTemp(OutCachedResult->Output);
		OutCachedResult = nullptr;
		CollectGCCachingResults.Remove(Task.NodeId);
	}
#endif
}

void FPCGGraphExecutor::Execute()
{
#if WITH_EDITOR
	if (PCGSystemSwitches::CVarPausePCGExecution.GetValueOnAnyThread())
	{
		UpdateGenerationNotification();
		return;
	}
#endif // WITH_EDITOR

	if (GetExecuteVersion() == EExecuteVersion::V2)
	{
		ExecuteVersion = EExecuteVersion::V2;
		ExecuteV2();
	}
	else
	{
		ExecuteVersion = EExecuteVersion::V1;
		ExecuteV1();
	}

	// Allow switching execute method if we are done
	if (GetNonScheduledRemainingTaskCount() == 0)
	{
		ExecuteVersion = EExecuteVersion::None;

		// TODO: Remove when removing V1 code path
		// Reset as V2 doesn't properly maintain that value (doesn't need to) and it will cause a failed check when going from V2 to V1
		CurrentlyUsedThreads = 0;
	}
}

double FPCGGraphExecutor::GetTickBudgetInSeconds() const
{
#if WITH_EDITOR
	if (GEditor && !GEditor->IsPlaySessionInProgress())
	{
		return PCGGraphExecutor::CVarEditorTimePerFrame.GetValueOnAnyThread() / 1000.0;
	}
#endif

	return PCGGraphExecutor::CVarTimePerFrame.GetValueOnAnyThread() / 1000.0;
}

FPCGGraphExecutor::EExecuteVersion FPCGGraphExecutor::GetExecuteVersion() const
{
	if (ExecuteVersion == EExecuteVersion::None)
	{
		check(GetNonScheduledRemainingTaskCount() == 0);
		return PCGGraphExecutor::CVarExecuteV2.GetValueOnAnyThread() ? EExecuteVersion::V2 : EExecuteVersion::V1;
	}

	return ExecuteVersion;
}

bool FPCGGraphExecutor::ExecuteScheduling(double EndTime, TSharedPtr<FPCGGraphActiveTask>* OutMainThreadTask, bool bForceCheckSleepingTasks)
{
	bool bStateChanged = false;
	const bool bIsInGameThread = IsInGameThread();
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGGraphExecutor::ExecuteScheduling);
	
	const float MaxPercentageOfThreadsToUse = FMath::Clamp(CVarMaxPercentageOfThreadsToUse.GetValueOnAnyThread(), 0.0f, 1.0f);
	const int32 MaxNumThreads = FMath::Max(0, FMath::Min((int32)(FPlatformMisc::NumberOfCoresIncludingHyperthreads() * MaxPercentageOfThreadsToUse), CVarMaxNumTasks.GetValueOnAnyThread() - 1));

	TArray<FCachedResult*> CachedResults;
	{
		TRACE_CPUPROFILER_EVENT_SCOPE(FPCGGraphExecutor::ExecuteScheduling::ReadyTasks);
		PCGGraphExecutor::TScopeLock ScopeLock(LiveTasksLock, !bIsInGameThread);
		if (ScopeLock.IsLocked())
		{
			if (bNeedToCheckSleepingTasks || bForceCheckSleepingTasks)
			{
				bNeedToCheckSleepingTasks = false;

				// First, wake up any sleeping tasks that can be reactivated
				for (int32 SleepingTaskIndex = SleepingTasks.Num() - 1; SleepingTaskIndex >= 0; --SleepingTaskIndex)
				{
					TSharedPtr<FPCGGraphActiveTask>& SleepingTask = SleepingTasks[SleepingTaskIndex];

					if (SleepingTask->Context->bIsPaused)
					{
						continue; // still sleeping
					}

					const bool bIsGameThreadOnly = SleepingTask->CanExecuteOnlyOnMainThread();

					TArray<TSharedPtr<FPCGGraphActiveTask>>& ActiveTaskArray = bIsGameThreadOnly ? ActiveTasksGameThreadOnly : ActiveTasks;
					SleepingTask->bIsGameThreadOnly = bIsGameThreadOnly;

					PCGGraphExecutor::AddToActiveTaskArrayNoLock(ActiveTaskArray, SleepingTask);
					PCGGraphExecutor::RemoveAtFromActiveTaskArrayNoLock(SleepingTasks, SleepingTaskIndex);
					bStateChanged = true;
				}
			}

			for (int32 ReadyTaskIndex = ReadyTasks.Num() - 1; ReadyTaskIndex >= 0; --ReadyTaskIndex)
			{
				FPCGGraphTask& Task = ReadyTasks[ReadyTaskIndex];
				check(Task.bHasDoneSetup);

				if (!Task.bHasDonePrepareForExecute)
				{
					if (!bIsInGameThread && Task.CanExecuteOnlyOnMainThread())
					{
						continue;
					}

					FCachedResult* CachedResult = nullptr;
					PrepareForExecute(Task, CachedResult, /*bLiveTasksLockAlreadyLocked=*/true);
					check(Task.bHasDonePrepareForExecute);

					if (CachedResult)
					{
#if WITH_EDITOR
						check(!Task.bIsBypassed);
#endif
						check(CachedResult->TaskId != InvalidPCGTaskId);
						CachedResults.Add(MoveTemp(CachedResult));
						ReadyTasks.RemoveAtSwap(ReadyTaskIndex, EAllowShrinking::No);
						bStateChanged = true;
						continue;
					}

					check(Task.Context);
				}

				// Validate that we can start this task now
				const bool bIsGameThreadOnly = Task.CanExecuteOnlyOnMainThread();
				TArray<TSharedPtr<FPCGGraphActiveTask>>& ActiveTaskArray = bIsGameThreadOnly ? ActiveTasksGameThreadOnly : ActiveTasks;

				FPCGGraphActiveTask& ActiveTask = *ActiveTaskArray.Emplace_GetRef(MakeShared<FPCGGraphActiveTask>());
				ActiveTask.TaskIndex = ActiveTaskArray.Num() - 1;
				ActiveTask.bIsGameThreadOnly = bIsGameThreadOnly;
				ActiveTask.Inputs = MoveTemp(Task.Inputs);
				ActiveTask.Element = Task.Element;
				ActiveTask.NodeId = Task.NodeId;
				ActiveTask.Context = TUniquePtr<FPCGContext>(Task.Context);
				ActiveTask.StackIndex = Task.StackIndex;
				ActiveTask.StackContext = Task.StackContext;
#if WITH_EDITOR
				ActiveTask.bIsBypassed = Task.bIsBypassed;
#endif
				// Move the task up front if it needs to run on the main thread
				ReadyTasks.RemoveAtSwap(ReadyTaskIndex, EAllowShrinking::No);
				bStateChanged = true;
			}
		}
	}
		
	ProcessCachedResults(MoveTemp(CachedResults));

	// Dispatch Tasks
	{
		PCGGraphExecutor::TScopeLock ScopeLock(LiveTasksLock, !bIsInGameThread);
		if (ScopeLock.IsLocked())
		{
			if (bIsInGameThread && OutMainThreadTask)
			{
				TRACE_CPUPROFILER_EVENT_SCOPE(FPCGGraphExecutor::Execute::SelectMainThreadTask);
				// Execute main thread task
				if (!ActiveTasksGameThreadOnly.IsEmpty() || !ActiveTasks.IsEmpty())
				{
					auto FindTaskToExecute = [](const TSharedPtr<FPCGGraphActiveTask>& InActiveTask)
					{
						return !InActiveTask->bIsExecutingTask && !InActiveTask->Context->bIsPaused;
					};

					TSharedPtr<FPCGGraphActiveTask>* FoundActiveTask = ActiveTasksGameThreadOnly.FindByPredicate(FindTaskToExecute);
					if (!FoundActiveTask)
					{
						FoundActiveTask = ActiveTasks.FindByPredicate(FindTaskToExecute);
					}

					if (FoundActiveTask)
					{
						// Sort should give us best target to execute
						TSharedPtr<FPCGGraphActiveTask>& ActiveTask = *FoundActiveTask;

						// Skip already running task
						check (!ActiveTask->bIsExecutingTask && !ActiveTask->Context->bIsPaused)
						
						ActiveTask->StartExecuting();
						ActiveTask->Context->AsyncState.NumAvailableTasks = FMath::Max(1, MaxNumThreads);
						ActiveTask->Context->AsyncState.bIsRunningOnMainThread = true;
						ActiveTask->Context->AsyncState.bIsRunningOutOfTick = false;
						ActiveTask->Context->AsyncState.EndTime = EndTime;
						*OutMainThreadTask = ActiveTask;
						bStateChanged = true;
					}
				}
			}

			// PCGGraphExecutor::CVarMaxWorkerTasks.GetValueOnAnyThread()+1 because the mainthread doesn't count
			if (PCGGraphExecutor::CVarGraphMultithreading.GetValueOnAnyThread() && PCGGraphExecutor::CVarMaxWorkerTasks.GetValueOnAnyThread()+1 > FPCGGraphActiveTask::NumExecuting && MaxNumThreads > 0)
			{
				TRACE_CPUPROFILER_EVENT_SCOPE(FPCGGraphExecutor::ExecuteScheduling::LaunchTasks);
				for (int32 ExecutionIndex = 0; ExecutionIndex < ActiveTasks.Num(); ++ExecutionIndex)
				{
					TSharedPtr<FPCGGraphActiveTask>& ActiveTask = ActiveTasks[ExecutionIndex];

					if (PCGGraphExecutor::CVarMaxWorkerTasks.GetValueOnAnyThread()+1 <= FPCGGraphActiveTask::NumExecuting)
					{
						break;
					}

					// Running task
					if (ActiveTask->bIsExecutingTask || ActiveTask->Context->bIsPaused)
					{
						continue;
					}

					// Main thread only
					if (ActiveTask->CanExecuteOnlyOnMainThread())
					{
						continue;
					}
#if WITH_EDITOR
					if (!ActiveTask->bIsBypassed)
#endif
					{
						check(ActiveTask->Context->CurrentPhase != EPCGExecutionPhase::Done);
						check(MaxNumThreads > 0);
						ActiveTask->Context->AsyncState.NumAvailableTasks = MaxNumThreads;
						ActiveTask->Context->AsyncState.EndTime = EndTime;
						ActiveTask->Context->AsyncState.bIsRunningOnMainThread = false;

						// Capture copy of SharedPtr so task stays valid while Async task is alive
						ActiveTask->StartExecuting();
						ActiveTask->ExecutingTask = UE::Tasks::Launch(UE_SOURCE_LOCATION, [this, ActiveTask]() -> bool
						{
							TRACE_CPUPROFILER_EVENT_SCOPE(FPCGGraphExecutor::ExecuteAsyncTask);

							// Set Out Of tick budget time (minimum 1ms)
							const float OutOfTickBudgetInSeconds = FMath::Max(1.0f, FPCGAsync::ConsoleVar::CVarAsyncOutOfTickBudgetInMilliseconds.GetValueOnAnyThread()) / 1000.f;
							ActiveTask->Context->AsyncState.EndTime = FPlatformTime::Seconds() + OutOfTickBudgetInSeconds;

							const bool bIsDone = ActiveTask->bWasCancelled || ActiveTask->Element->Execute(ActiveTask->Context.Get());
							const bool bIsPaused = ActiveTask->Context->bIsPaused;

							PostTaskExecute(ActiveTask, bIsDone);

							if (bIsDone || bIsPaused)
							{
								// Budget is provided by CVarAsyncOutOfTickBudgetInMilliseconds
								ExecuteScheduling(-1.0);
							}

							return bIsDone;
						});
						bStateChanged = true;
					}
				}
			}
		}
	}

	bStateChanged |= ProcessScheduledTasks();

	return bStateChanged;
}

/**
 * Graph Execution Pipeline:
 * 
 * - New Tasks first enter the execution pipeline through [ScheduledTasks]
 * - Each [ScheduledTasks] is a list of Task with Input dependencies on other Tasks
 * - [ScheduleTasks] are processed through [FPCGraphExecutor::ProcessScheduledTasks] which can happen on GameThread/WorkerThread 
 * - On WorkerThreads [FPCGraphExecutor::ProcessScheduledTasks] will try to acquire the Lock and if it can't will just skip through, on GameThread it will wait until it can grab the lock (ScheduleLock)
*	 The reason why WorkerThreads will only Try to lock is because [FPCGGraphExecutor::ExecuteScheduling] runs in the same UE::Task as the Node execution and we don't want to make those spin for too long. (Let's call it opportunistic scheduling)
* 
 * - [FPCGGraphExecutor::ProcessScheduledTasks] will move [ScheduledTasks] into one of [Tasks] if task still waiting on other task inputs or [ReadyTasks] if tasks is ready to execute
 * 
 * - When moving a [ScheduledTasks] into [ReadyTasks] we call [FPCGGraphExecutor::SetupTask] which will build the task inputs and its FPCGGraphElement used for execution.
 *	 It will also try and call [FPCGGraphExecutor::PrepareForExecute] on the task if it is on the GameThread or if it is on a WorkerThread and the FPCGGraphElement allows it [!FPCGGraphElement::CanExecuteOnlyOnMainThread(nullptr)]
 * - [FPCGGraphExecutor::PrepareForExecute] will query the Cache and might return a valid Output or it will create the FPCGContext for the task so that it can be executed
 *
 * - [ReadyTasks] are processed through [FPCGGraphExecutor::ExecuteScheduling] which can happen on GameThread/WorkerThread
 * - On WorkerThreads [FPCGGraphExecutor::ExecuteScheduling] will try to acquire the Lock and if it can't will just skip through, on GameThread it will wait until it can grab the lock. (LiveTasksLock) (same reason as above)
 *	 
 * - [ReadyTasks] will be moved to [ActiveTasks/ActiveTasksGameThreadOnly] through [FPCGGraphExecutor::ExecuteScheduling]
 * - This will only happen if Task.bHasDonePrepareForExecute is true or if we can run [FPCGGraphExecutor::PrepareForExecute] on it. (this can always happen on GameThread but not always on WorkerThreads as explained before)
 * 
 * - [ActiveTasks/ActiveTasksGameThreadOnly] are also processed in [FPCGGraphExecutor::ExecuteScheduling]
 * - The GameThread will always try to execute the first [ActiveTasksGameThreadOnly] or [ActiveTasks] if no tasks need to be executed on GameThread, it will do this [FPCGGraphExecutor::ExecuteScheduling] while it exhausts its GameThread budget
 * - Both GameThread/WorkerThread will also spawn new UE::Tasks for the remaining [ActiveTasks] that are allowed to run outside of the GameThread still happens in [FPCGGraphExecutor::ExecuteScheduling]
 * 
 * - When an [ActiveTasks/ActiveTasksGameThreadOnly] Execute call returns and it returns true, it means that the task is done. In this case we call [FPCGGraphExecutor::StoreResults] followed by [FPCGGraphExecutor::QueueNextTasks] this will potentially move some [Tasks] to [ReadyTasks]
 *   so that new tasks can get executed now that their inputs have been filled
 * 
 * - After a call to Execute, if a [ActiveTasks/ActiveTasksGameThreadOnly] bPaused flag is true, it gets moved to [SleepingTasks]
 * - [SleepingTasks] gets processed at least once a frame to see if some tasks are no longer paused and need to be moved back to [ActiveTasks/ActiveTasksGameThreadOnly]
 * - It will also be processed again if some other [ActiveTasks/ActiveTasksGameThreadOnly] completes execution
 * 
 * - Cache information: When we call [FPCGGraphExecutor::PrepareForExecute] is called on a task, if a Cache result is found for this task then we can directly call [FPCGGraphExecutor::StoreResults] and [FPCGGraphExecutor::QueueNextTasks] on it skipping execution [FPCGGraphExecutor::ProcessCachedResults]
 * - An exception to this is when the FPCGElement is marked for debugging then we move the task through the normal execution pipeline but set a flag on it so that the actual Execute call can be skipped
 * - [CachingResults] exists only to keep GC references to PCG Data that has been read from the Cache but hasn't yet been moved to the [TaskOutputs]
 * 
 * - [CVars]
 *   pcg.Graph.ExecuteV2 : To enable this pipeline (this will be removed once stability is considered on par with previous impl.)
 *   pcg.GraphMultithreading : Enables multithreading on this execution pipeline, without that flag most multithreading happens only in PCGAsync.h/.cpp
 *	 pcg.Graph.MaxWorkerTasks : Limits the number of UE::Tasks that [FPCGGraphExecutor::ExecuteScheduling] can launch
 *   pcg.DisableAsyncTimeSlicing : Disables timeslicing in UE::Tasks launched by [FPCGGraphExecutor::ExecuteScheduling]
 *   pcg.Async.OutOfTickBudgetInMilliseconds : Timeslicing budget for UE::Tasks launched by [FPCGGraphExecutor::ExecuteScheduling]
 *   pcg.DisableAsyncTimeSlicingOnGameThread : Disables timeslicing on GameThread execution
 */
void FPCGGraphExecutor::ExecuteV2()
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGGraphExecutor::Execute);

	ProcessScheduledTasks();
#if WITH_EDITOR
	// Update Notifications before capturing StartTime so that this call doesn't eat up task budget
	UpdateGenerationNotification();
#endif
				
	bool bContinueExecute = GetNonScheduledRemainingTaskCount() > 0;
	bool bFirstLoop = true;

	const double StartTime = FPlatformTime::Seconds(); 
	const double EndTime = StartTime + GetTickBudgetInSeconds();

	while ((bFirstLoop || (FPlatformTime::Seconds() < EndTime)) && bContinueExecute)
	{
		TSharedPtr<FPCGGraphActiveTask> MainThreadTask;
		bContinueExecute = ExecuteScheduling(EndTime, &MainThreadTask, /*bForceCheckSleepingTasks=*/bFirstLoop);
		bFirstLoop = false;

		if (MainThreadTask)
		{
			TRACE_CPUPROFILER_EVENT_SCOPE(FPCGGraphExecutor::Execute::ExecuteMainThreadTask);
#if WITH_EDITOR
			const bool bIsDone = (MainThreadTask->bIsBypassed || MainThreadTask->bWasCancelled || MainThreadTask->Element->Execute(MainThreadTask->Context.Get()));
#else
			const bool bIsDone = (MainThreadTask->bWasCancelled || MainThreadTask->Element->Execute(MainThreadTask->Context.Get()));
#endif
			PostTaskExecute(MainThreadTask, bIsDone);
		}
	}

	ExecuteTasksEnded();
}

void FPCGGraphExecutor::ExecuteV1()
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGGraphExecutor::Execute);

	ProcessScheduledTasks();
		
	// TODO: change this if we support tasks that are not framebound
	bool bHasAlreadyCheckedSleepingTasks = false;

#if WITH_EDITOR
	// Update Notifications before capturing StartTime so that this call doesn't eat up task budget
	UpdateGenerationNotification();
#endif

	const float MaxPercentageOfThreadsToUse = FMath::Clamp(CVarMaxPercentageOfThreadsToUse.GetValueOnAnyThread(), 0.0f, 1.0f);
	const int32 MaxNumThreads = FMath::Max(0, FMath::Min((int32)(FPlatformMisc::NumberOfCoresIncludingHyperthreads() * MaxPercentageOfThreadsToUse), CVarMaxNumTasks.GetValueOnAnyThread() - 1));
	const bool bAllowMultiDispatch = PCGGraphExecutor::CVarGraphMultithreading.GetValueOnAnyThread();
	
	const double StartTime = FPlatformTime::Seconds();
	const double EndTime = StartTime + GetTickBudgetInSeconds();

	while (ReadyTasks.Num() > 0 || ActiveTasks.Num() > 0 || (!bHasAlreadyCheckedSleepingTasks && SleepingTasks.Num() > 0))
	{
		// If we only have sleeping tasks, we will go through this loop only once. If all tasks are still sleeping after one iteration,
		// we will wake them up only at next tick. It will avoid spinning for our whole frametime budget.
		bHasAlreadyCheckedSleepingTasks = ReadyTasks.Num() == 0 && ActiveTasks.Num() == 0 && SleepingTasks.Num() > 0;

		// First: if we have free resources, move ready tasks to the active tasks
		bool bMainThreadAvailable = (ActiveTasks.Num() == 0 || !ActiveTasks[0]->CanExecuteOnlyOnMainThread());
		int32 NumAvailableThreads = FMath::Max(0, MaxNumThreads - CurrentlyUsedThreads);

		const bool bMainThreadWasAvailable = bMainThreadAvailable;
		const int32 TasksAlreadyLaunchedCount = ActiveTasks.Num();

		bool bHasDispatchedTasks = !ActiveTasks.IsEmpty();

		auto CannotDispatchMoreTasks = [&bMainThreadAvailable, &NumAvailableThreads, &bHasDispatchedTasks, bAllowMultiDispatch]
		{
			return ((!bAllowMultiDispatch && bHasDispatchedTasks) || (!bMainThreadAvailable && NumAvailableThreads == 0));
		};

		if (!CannotDispatchMoreTasks())
		{
			TRACE_CPUPROFILER_EVENT_SCOPE(FPCGGraphExecutor::Execute::PrepareTasks);
			// Sort tasks by priority (highest priority should be at the end)
			// TODO
			auto TaskDispatchBookKeeping = [&bMainThreadAvailable, &NumAvailableThreads, &bHasDispatchedTasks](bool bIsMainThreadTask)
			{
				bHasDispatchedTasks = true;

				if (bIsMainThreadTask || NumAvailableThreads == 0)
				{
					bMainThreadAvailable = false;
				}
				else
				{
					--NumAvailableThreads;
				}
			};

			// First, wake up any sleeping tasks that can be reactivated
			for (int32 SleepingTaskIndex = SleepingTasks.Num() - 1; SleepingTaskIndex >= 0; --SleepingTaskIndex)
			{
				if (CannotDispatchMoreTasks())
				{
					break;
				}

				TSharedPtr<FPCGGraphActiveTask>& SleepingTask = SleepingTasks[SleepingTaskIndex];

				if (SleepingTask->Context->bIsPaused)
				{
					continue; // still sleeping
				}

				// Validate that we can start this task now
				const bool bIsMainThreadTask = SleepingTask->CanExecuteOnlyOnMainThread();

				if (!bIsMainThreadTask || bMainThreadAvailable)
				{
					PCGGraphExecutor::AddToActiveTaskArrayNoLock(ActiveTasks, SleepingTask);

					// Move task up front if it has to run on the main thread
					if (bIsMainThreadTask && ActiveTasks.Num() > 1)
					{
						ActiveTasks.Swap(0, ActiveTasks.Num() - 1);
						ActiveTasks[0]->TaskIndex = 0;
						ActiveTasks[ActiveTasks.Num() - 1]->TaskIndex = ActiveTasks.Num() - 1;
					}

					TaskDispatchBookKeeping(bIsMainThreadTask);

					PCGGraphExecutor::RemoveAtFromActiveTaskArrayNoLock(SleepingTasks, SleepingTaskIndex);
				}
			}

			for (int32 ReadyTaskIndex = ReadyTasks.Num() - 1; ReadyTaskIndex >= 0; --ReadyTaskIndex)
			{
				if (CannotDispatchMoreTasks())
				{
					break;
				}

				FPCGGraphTask& Task = ReadyTasks[ReadyTaskIndex];
				check(Task.bHasDoneSetup && Task.bHasDonePrepareForExecute);

				// Validate that we can start this task now
				const bool bIsMainThreadTask = Task.CanExecuteOnlyOnMainThread();

				if (!bIsMainThreadTask || bMainThreadAvailable)
				{
					FPCGGraphActiveTask& ActiveTask = *ActiveTasks.Emplace_GetRef(MakeShared<FPCGGraphActiveTask>());
					ActiveTask.TaskIndex = ActiveTasks.Num() - 1;
					ActiveTask.Inputs = MoveTemp(Task.Inputs);
					ActiveTask.Element = Task.Element;
					ActiveTask.NodeId = Task.NodeId;
					ActiveTask.Context = TUniquePtr<FPCGContext>(Task.Context);
					ActiveTask.StackIndex = Task.StackIndex;
					ActiveTask.StackContext = Task.StackContext;
#if WITH_EDITOR
					ActiveTask.bIsBypassed = Task.bIsBypassed;
#endif

					// Move the task up front if it needs to run on the main thread
					if (bIsMainThreadTask && ActiveTasks.Num() > 1)
					{
						ActiveTasks.Swap(0, ActiveTasks.Num() - 1);
						ActiveTasks[0]->TaskIndex = 0;
						ActiveTasks[ActiveTasks.Num() - 1]->TaskIndex = ActiveTasks.Num() - 1;
					}

					TaskDispatchBookKeeping(bIsMainThreadTask);

					ReadyTasks.RemoveAtSwap(ReadyTaskIndex);
				}
			}
		}

		check(NumAvailableThreads >= 0);

		const int32 NumTasksToLaunch = ActiveTasks.Num() - TasksAlreadyLaunchedCount;

		// Assign resources
		if (NumTasksToLaunch > 0)
		{
			TRACE_CPUPROFILER_EVENT_SCOPE(FPCGGraphExecutor::Execute::AssignResources);
			const int32 NumAdditionalThreads = ((NumTasksToLaunch > 0) ? (NumAvailableThreads / NumTasksToLaunch) : 0);
			check(NumAdditionalThreads >= 0);

			for (int32 ExecutionIndex = 0; ExecutionIndex < ActiveTasks.Num(); ++ExecutionIndex)
			{
				FPCGGraphActiveTask& ActiveTask = *ActiveTasks[ExecutionIndex];

				// Tasks that were already launched already have assigned tasks, so don't touch them
				if (ActiveTask.Context->AsyncState.NumAvailableTasks == 0)
				{
					ActiveTask.Context->AsyncState.NumAvailableTasks = 1 + NumAdditionalThreads;
					CurrentlyUsedThreads += ActiveTask.Context->AsyncState.NumAvailableTasks;
				}
			}
		}

		{
			TRACE_CPUPROFILER_EVENT_SCOPE(FPCGGraphExecutor::Execute::StartTasks);
			for (int32 ExecutionIndex = 1; ExecutionIndex < ActiveTasks.Num(); ++ExecutionIndex)
			{
				FPCGGraphActiveTask& ActiveTask = *ActiveTasks[ExecutionIndex];
				check(!ActiveTask.Context->bIsPaused);

	#if WITH_EDITOR
				if (!ActiveTask.bIsBypassed)
	#endif
				{
					check(!ActiveTask.CanExecuteOnlyOnMainThread());
					ActiveTask.Context->AsyncState.EndTime = EndTime;
					ActiveTask.Context->AsyncState.bIsRunningOnMainThread = false;
					ActiveTask.StartExecuting();
					ActiveTask.ExecutingTask = UE::Tasks::Launch(UE_SOURCE_LOCATION, [&ActiveTask]()
					{
						TRACE_CPUPROFILER_EVENT_SCOPE(FPCGGraphExecutor::ExecuteAsyncTask);
						return ActiveTask.Element->Execute(ActiveTask.Context.Get());
					});
				}
			}
		}
				
		{
			TRACE_CPUPROFILER_EVENT_SCOPE(FPCGGraphExecutor::Execute::ExecuteTasks);
			bool bMainTaskDone = false;
			// Execute main thread task
			if (!ActiveTasks.IsEmpty())
			{
				TRACE_CPUPROFILER_EVENT_SCOPE(FPCGGraphExecutor::Execute::ExecuteTasks::MainThreadTask);
				FPCGGraphActiveTask& MainThreadTask = *ActiveTasks[0];
				check(!MainThreadTask.Context->bIsPaused);
				MainThreadTask.Context->AsyncState.EndTime = EndTime;
				MainThreadTask.Context->AsyncState.bIsRunningOnMainThread = true;
				MainThreadTask.StartExecuting();

#if WITH_EDITOR
				if(MainThreadTask.bIsBypassed || MainThreadTask.bWasCancelled || MainThreadTask.Element->Execute(MainThreadTask.Context.Get()))
#else
				if(MainThreadTask.bWasCancelled || MainThreadTask.Element->Execute(MainThreadTask.Context.Get()))
#endif
				{
					bMainTaskDone = true;
				}
			}

			{
				TRACE_CPUPROFILER_EVENT_SCOPE(FPCGGraphExecutor::Execute::ExecuteTasks::WaitForTasks);

				// Then wait after all futures - start from the back so we can more easily manage the ActiveTasks array
				for (int32 ExecutionIndex = ActiveTasks.Num() - 1; ExecutionIndex > 0; --ExecutionIndex)
				{
					FPCGGraphActiveTask& ActiveTask = *ActiveTasks[ExecutionIndex];
					bool bTaskDone = false;
					// Wait on the future if any
					if (ActiveTask.ExecutingTask.IsValid())
					{
						ActiveTask.ExecutingTask.Wait();
						bTaskDone = ActiveTask.ExecutingTask.GetResult();
					}

					if (bTaskDone || ActiveTasks[ExecutionIndex]->bWasCancelled)
					{
						PostTaskExecute(ActiveTasks[ExecutionIndex], true);
					}
				}
			}

			if (bMainTaskDone)
			{
				PostTaskExecute(ActiveTasks[0], true);
			}
		}

		// Any paused tasks at that point should relinquish their resources
		if (ActiveTasks.Num() > 0)
		{
			TRACE_CPUPROFILER_EVENT_SCOPE(FPCGGraphExecutor::Execute::ExecuteTasks::CheckSleepingTasks);
			for (int32 ActiveTaskIndex = ActiveTasks.Num() - 1; ActiveTaskIndex >= 0; --ActiveTaskIndex)
			{
				// Any paused tasks at that point should relinquish their resources
				TSharedPtr<FPCGGraphActiveTask> ActiveTask = ActiveTasks[ActiveTaskIndex];
#if WITH_EDITOR
				check(ActiveTask->bIsExecutingTask || ActiveTask->bIsBypassed);
#else
				check(ActiveTask->bIsExecutingTask);
#endif

				// Any task that asks to be paused or now needs to run on the main thread but doesn't have that slot currently will be moved to the sleeping queue
				const bool bTaskShouldBePutAside = (ActiveTask->Context->bIsPaused || (ActiveTaskIndex > 0 && ActiveTask->CanExecuteOnlyOnMainThread()));
				if (bTaskShouldBePutAside)
				{
					if (ActiveTask->Context->AsyncState.NumAvailableTasks > 0)
					{
						CurrentlyUsedThreads -= ActiveTask->Context->AsyncState.NumAvailableTasks;
					}
					ActiveTask->Context->AsyncState.NumAvailableTasks = 0;

					PCGGraphExecutor::AddToActiveTaskArrayNoLock(SleepingTasks, ActiveTask);
					PCGGraphExecutor::RemoveAtFromActiveTaskArrayNoLock(ActiveTasks, ActiveTaskIndex);
				}

				ActiveTask->StopExecuting();
			}
		}

		check(ActiveTasks.Num() > 0 || CurrentlyUsedThreads == 0);

		if (FPlatformTime::Seconds() >= EndTime)
		{
			break;
		}
	}

	ExecuteTasksEnded();
}

void FPCGGraphExecutor::ClearAllTasks()
{
	check(IsInGameThread());

	Tasks.Reset();
	TaskSuccessors.Reset();
	
	// Make sure we don't leak preallocated contexts
	for (FPCGGraphTask& ReadyTask : ReadyTasks)
	{
		delete ReadyTask.Context;
	}

	ReadyTasks.Reset();
	ActiveTasks.Reset();
	ActiveTasksGameThreadOnly.Reset();
	SleepingTasks.Reset();
}

TArray<FPCGGraphExecutor::FCachedResult*> FPCGGraphExecutor::QueueNextTasksInternal(FPCGTaskId FinishedTask)
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGGraphExecutor::QueueNextTasks);
	TArray<FCachedResult*> CachedResults;
	const bool bIsInGameThread = IsInGameThread();

	{
		TSet<FPCGTaskId> Successors;
		{
			PCGGraphExecutor::TScopeLock ScopeLock(TasksLock);
		
			if (TaskSuccessors.RemoveAndCopyValue(FinishedTask, Successors))
			{
				for (FPCGTaskId Successor : Successors)
				{
					bool bAllPrerequisitesMet = true;

					// When running multithreaded it is possible for the Successor to already have been moved to ReadyTask after the current task stored its results
					if (FPCGGraphTask* SuccessorTaskPtr = Tasks.Find(Successor))
					{
						FPCGGraphTask& SuccessorTask = *SuccessorTaskPtr;

						if (SuccessorTask.Inputs.Num() > 0)
						{
							PCGGraphExecutor::TScopeLock OutputLock(TaskOutputsLock);
							for (const FPCGGraphTaskInput& Input : SuccessorTask.Inputs)
							{
								bAllPrerequisitesMet &= TaskOutputs.Contains(Input.TaskId);
							}
						}

						if (bAllPrerequisitesMet)
						{
							OnTaskInputsReady(SuccessorTask, CachedResults, bIsInGameThread);
							Tasks.Remove(Successor);
					}
				}
				}
			}
		}
	}

	return CachedResults;
}

void FPCGGraphExecutor::QueueNextTasks(FPCGTaskId FinishedTask)
{
	TArray<FCachedResult*> CachedResults = QueueNextTasksInternal(FinishedTask);

	ProcessCachedResults(MoveTemp(CachedResults));
}

void FPCGGraphExecutor::ProcessCachedResults(TArray<FCachedResult*> CachedResults)
{
	while (CachedResults.Num() > 0)
	{
		TArray<FPCGTaskId> NextTasks = ProcessCachedResultsInternal(MoveTemp(CachedResults));
		check(CachedResults.IsEmpty());

		for (const FPCGTaskId& NextTask : NextTasks)
		{
			CachedResults.Append(QueueNextTasksInternal(NextTask));
		}
	}
}

TArray<FPCGTaskId> FPCGGraphExecutor::ProcessCachedResultsInternal(TArray<FCachedResult*> CachedResults)
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGGraphExecutor::ProcessCachedResults);
	TArray<FPCGTaskId> NextTasks;
	NextTasks.Reserve(CachedResults.Num());

	for (FCachedResult* CachedResult : CachedResults)
	{
		check(CachedResult);
		if (CachedResult->bDoDynamicTaskCulling)
		{
			CullInactiveDownstreamNodes(CachedResult->TaskId, CachedResult->Output.InactiveOutputPinBitmask);
#if WITH_EDITOR
			SendInactivePinNotification(CachedResult->Node, CachedResult->Stack, CachedResult->Output.InactiveOutputPinBitmask);
#endif
		}

		StoreResults(CachedResult->TaskId, CachedResult->Output, CachedResult->bIsPostGraphTask);
		NextTasks.Add(CachedResult->TaskId);
	}

	if (CachedResults.Num() > 0)
	{
		PCGGraphExecutor::TScopeLock ScopeLock(CachingResultsLock);
		for (const FCachedResult* CachedResult : CachedResults)
		{
			check(CollectGCCachingResults.Contains(CachedResult->TaskId));
			CollectGCCachingResults.Remove(CachedResult->TaskId);
		}

		// Next Scheduling call needs to check if this task completion unblocked some sleeping task(s)
		bNeedToCheckSleepingTasks = true;
	}

	return NextTasks;
}

bool FPCGGraphExecutor::CancelNextTasks(FPCGTaskId CancelledTask, TSet<UPCGComponent*>& OutCancelledComponents)
{
	check(IsInGameThread());

	bool bAddedComponents = false;

	TSet<FPCGTaskId> LocalSuccessors;
	{
		PCGGraphExecutor::TScopeLock ScopeLock(TasksLock);
		if (TSet<FPCGTaskId>* Successors = TaskSuccessors.Find(CancelledTask))
		{
			LocalSuccessors = MoveTemp(*Successors);
			TaskSuccessors.Remove(CancelledTask);

			for (FPCGTaskId Successor : LocalSuccessors)
			{
				if (FPCGGraphTask* Task = Tasks.Find(Successor))
				{
					if (!OutCancelledComponents.Contains(Task->SourceComponent.Get()))
					{
						OutCancelledComponents.Add(Task->SourceComponent.Get());
						bAddedComponents = true;
					}

					if (Task->Element)
					{
						Task->Element->Abort(Task->Context);
					}

					RemoveTaskFromInputSuccessorsNoLock(Task->NodeId, Task->Inputs);
					Tasks.Remove(Successor);
				}
			}
		}
	}

	for (FPCGTaskId Successor : LocalSuccessors)
	{
		bAddedComponents |= CancelNextTasks(Successor, OutCancelledComponents);
	}
		
	// Tasks cancelled might have an impact on scheduled-but-not-processed tasks
	{
		PCGGraphExecutor::TScopeLock ScopeLock(ScheduleLock);
		for (FPCGGraphScheduleTask& ScheduledTask : ScheduledTasks)
		{
			if (!OutCancelledComponents.Contains(ScheduledTask.SourceComponent.Get()) &&
				Algo::AnyOf(ScheduledTask.Tasks[ScheduledTask.FirstTaskIndex].Inputs, [CancelledTask](const FPCGGraphTaskInput& Input) { return Input.TaskId == CancelledTask; }))
			{
				OutCancelledComponents.Add(ScheduledTask.SourceComponent.Get());
				bAddedComponents = true;
			}
		}
	}
	return bAddedComponents;
}

void FPCGGraphExecutor::RemoveTaskFromInputSuccessors(FPCGTaskId CancelledTask, const TArray<FPCGGraphTaskInput>& CancelledTaskInputs)
{
	PCGGraphExecutor::TScopeLock ScopeLock(TasksLock);
	RemoveTaskFromInputSuccessorsNoLock(CancelledTask, CancelledTaskInputs);
}

void FPCGGraphExecutor::RemoveTaskFromInputSuccessorsNoLock(FPCGTaskId CancelledTask, const TArray<FPCGGraphTaskInput>& CancelledTaskInputs)
{
	for (const FPCGGraphTaskInput& Input : CancelledTaskInputs)
	{
		if (TSet<FPCGTaskId>* Successors = TaskSuccessors.Find(Input.TaskId))
		{
			Successors->Remove(CancelledTask);
		}
	}
}

void FPCGGraphExecutor::BuildTaskInput(FPCGGraphTask& Task, TArray<FPCGTaskId>& ResultsToMarkAsRead)
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGGraphExecutor::BuildTaskInput);

	auto LogDiscardedData = [&Task](const TOptional<FPCGPinProperties>& DownstreamPin)
	{
#if !(UE_BUILD_SHIPPING || UE_BUILD_TEST) || USE_LOGGING_IN_SHIPPING
		// Turn off eventual errors/warnings when the node is disabled, as this is irrelevant.
		const bool bNodeIsDisabled = (Task.Context && Task.Context->GetOriginalSettings<UPCGSettings>() && !Task.Context->GetOriginalSettings<UPCGSettings>()->bEnabled);
		if (bNodeIsDisabled)
		{
			return;
		}

		const FString Message = FString::Printf(
			TEXT("[%s] %s - BuildTaskInput - too many data items arriving on single data pin '%s', only first data item will be used"),
			(Task.SourceComponent.Get() && Task.SourceComponent->GetOwner()) ? *Task.SourceComponent->GetOwner()->GetName() : TEXT("MissingComponent"),
			Task.Node ? *Task.Node->GetNodeTitle(EPCGNodeTitleType::ListView).ToString() : TEXT("MissingNode"),
			DownstreamPin.IsSet() ? *DownstreamPin.GetValue().Label.ToString() : TEXT("NoPin"));

#if WITH_EDITOR
		Task.LogVisual(ELogVerbosity::Warning, FText::FromString(Message));
#endif // WITH_EDITOR

		UE_LOG(LogPCG, Warning, TEXT("%s"), *Message);
#endif
	};

	// Initialize a Crc onto which each input Crc will be combined (using random prime number).
	FPCGCrc Crc(1000033);

	// Random prime numbers to use as placeholders in the CRC computation when there are no defined in/out pins.
	// Note that they aren't strictly needed, but will make sure we don't introduce issues if we rework this bit of code.
	constexpr uint32 DefaultHashForNoInputPin = 955333;
	constexpr uint32 DefaultHashForNoOutputPin = 999983;

	// Hoisted out of loop for performance reasons.
	TArray<FPCGTaggedData, TInlineAllocator<16>> InputDataOnPin;
	TArray<FPCGCrc, TInlineAllocator<16>> InputDataCrcsOnPin;
	
	for (const FPCGGraphTaskInput& Input : Task.Inputs)
	{
		PCGGraphExecutor::TScopeLock OutputLock(TaskOutputsLock);
		
		const FOutputDataInfo& TaskOutput = TaskOutputs.FindChecked(Input.TaskId);
		
		ResultsToMarkAsRead.AddUnique(Input.TaskId);

		// Input was culled before this task managed to get scheduled (moved from ScheduleTasks to Tasks)
		if (TaskOutput.bCulled)
		{
			continue;
		}

		// If the input does not provide any data, don't add it to the task input.
		if (!Input.bProvideData)
		{
			continue;
		}

		const bool bAllowMultipleData = Input.DownstreamPin.IsSet() ? Input.DownstreamPin.GetValue().bAllowMultipleData : true;
		const uint32 InputPinLabelCrc = Input.DownstreamPin.IsSet() ? GetTypeHash(Input.DownstreamPin.GetValue().Label) : DefaultHashForNoOutputPin;

		// Enforce single data - if already have input for this pin, don't add more. Early check before other side effects below.
		if (Input.DownstreamPin.IsSet() && !bAllowMultipleData && Task.TaskInput.GetInputCountByPin(Input.DownstreamPin.GetValue().Label) > 0)
		{
			LogDiscardedData(Input.DownstreamPin);
			continue;
		}

		const FPCGDataCollection& InputCollection = TaskOutput.DataCollection;
		
		Task.TaskInput.bCancelExecution |= InputCollection.bCancelExecution;

		const int32 TaggedDataOffset = Task.TaskInput.TaggedData.Num();

		// Get input data at the given pin (or everything). This will add the data and include the input pin Crc to uniquely identify
		// inputs per-pin, or use a placeholder for symmetry.
		// Note: The input data CRC will already contain the output pin (calculated in element post execute).
		if (Input.UpstreamPin.IsSet())
		{
			InputDataOnPin.Reset();
			InputDataCrcsOnPin.Reset();
			InputCollection.GetInputsAndCrcsByPin(Input.UpstreamPin.GetValue().Label, InputDataOnPin, InputDataCrcsOnPin);

			if (!InputDataOnPin.IsEmpty())
			{
				// Proceed carefully when adding data items - if pin is single-data, only add first item.
				if (!ensure(InputDataOnPin.Num() == InputDataCrcsOnPin.Num()))
				{
					InputDataCrcsOnPin.SetNumZeroed(InputDataOnPin.Num());
				}

				const int NumberDataItemsToTake = bAllowMultipleData ? InputDataOnPin.Num() : 1;

				Task.TaskInput.AddDataForPin(
					MakeArrayView(InputDataOnPin.GetData(), NumberDataItemsToTake),
					MakeArrayView(InputDataCrcsOnPin.GetData(), NumberDataItemsToTake),
					InputPinLabelCrc);

				if (NumberDataItemsToTake < InputDataOnPin.Num())
				{
					LogDiscardedData(Input.DownstreamPin);
				}
			}
		}
		else
		{
			Task.TaskInput.AddData(InputCollection.TaggedData, InputCollection.DataCrcs);
		}

		// Apply labelling on data; technically, we should ensure that we do this only for pass-through nodes,
		// Otherwise we could also null out the label on the input...
		// Also marking the data used multiple times if the given input is used multiple times.
		if (Input.DownstreamPin.IsSet() || Input.bIsUsedMultipleTimes)
		{
			for (int32 TaggedDataIndex = TaggedDataOffset; TaggedDataIndex < Task.TaskInput.TaggedData.Num(); ++TaggedDataIndex)
			{
				FPCGTaggedData& TaggedData = Task.TaskInput.TaggedData[TaggedDataIndex];
				if (Input.DownstreamPin.IsSet())
				{
					TaggedData.Pin = Input.DownstreamPin.GetValue().Label;
				}

				TaggedData.bIsUsedMultipleTimes |= Input.bIsUsedMultipleTimes;
			}
		}
	}

	// Then combine params if needed
	CombineParams(Task);
}

void FPCGGraphExecutor::CombineParams(FPCGGraphTask& Task)
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGGraphExecutor::CombineParams);
	
	TArray<FPCGTaggedData> AllParamsData = Task.TaskInput.GetParamsByPin(PCGPinConstants::DefaultParamsLabel);
	if (AllParamsData.Num() > 1)
	{
		UPCGParamData* CombinedParamData = nullptr;
		bool bSuccess = true;

		for (const FPCGTaggedData& TaggedDatum : AllParamsData)
		{
			if (const UPCGParamData* ParamData = Cast<UPCGParamData>(TaggedDatum.Data))
			{
				if (!CombinedParamData)
				{
					// We always need a Context to allow capture of Async objects if this runs outside of the game thread
					FPCGContext TempContext;
					TempContext.AsyncState.bIsRunningOnMainThread = IsInGameThread();
				
					CombinedParamData = ParamData->DuplicateData(&TempContext);

					if (!TempContext.AsyncState.bIsRunningOnMainThread)
					{
						Task.CombineParamsAsyncObjects = std::move(TempContext.AsyncObjects);
					}
				}
				else
				{
					bSuccess &= PCGMetadataHelpers::CopyAllAttributes(ParamData, CombinedParamData, nullptr);
				}
			}
		}

		if (!bSuccess)
		{
			return;
		}

		const int32 NewNumberOfInputs = Task.TaskInput.TaggedData.Num() - AllParamsData.Num() + (CombinedParamData ? 1 : 0);
		check(NewNumberOfInputs >= 0);

		TArray<FPCGTaggedData> TempTaggedData{};
		TempTaggedData.Reserve(NewNumberOfInputs);
		for (FPCGTaggedData& TaggedData : Task.TaskInput.TaggedData)
		{
			if (TaggedData.Pin != PCGPinConstants::DefaultParamsLabel)
			{
				TempTaggedData.Add(std::move(TaggedData));
			}
		}

		// Add to the root set since we created a new object, that needs to be kept alive for the duration of the task.
		if (CombinedParamData)
		{
			FPCGTaggedData CombineParams{};
			CombineParams.Data = CombinedParamData;
			CombineParams.Pin = PCGPinConstants::DefaultParamsLabel;
			TempTaggedData.Add(CombineParams);
		}

		Task.TaskInput.TaggedData = std::move(TempTaggedData);
	}
}

void FPCGGraphExecutor::StoreResults(FPCGTaskId InTaskId, const FPCGDataCollection& InTaskOutput, bool bNeedsManualClear)
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGGraphExecutor::StoreResults);

	FOutputDataInfo OutputDataInfo;
	OutputDataInfo.DataCollection = InTaskOutput;
	OutputDataInfo.bNeedsManualClear = bNeedsManualClear;

	{
		TRACE_CPUPROFILER_EVENT_SCOPE(FPCGGraphExecutor::StoreResults::Successors);
		PCGGraphExecutor::TScopeLock ScopeLock(TasksLock);
		if (TSet<FPCGTaskId>* Successors = TaskSuccessors.Find(InTaskId))
		{
			OutputDataInfo.RemainingSuccessorCount = Successors->Num();
		}
	}

	// Store output in map
	PCGGraphExecutor::TScopeLock OutputLock(TaskOutputsLock);
	TaskOutputs.Add(InTaskId, MoveTemp(OutputDataInfo));
}

void FPCGGraphExecutor::ClearResults()
{
	{
		PCGGraphExecutor::TScopeLock ScopeLock(ScheduleLock);
		// Only reset if we have no more scheduled tasks, to avoid breaking dependencies
		if (ScheduledTasks.IsEmpty())
		{
			NextTaskId = 0;

			PCGGraphExecutor::TScopeLock ChildScopeLock(GraphExecutionCachesLock);
			GraphExecutionCaches.Empty();
		}
	}

	PCGGraphExecutor::TScopeLock OutputLock(TaskOutputsLock);
	TaskOutputs.Reset();
}

void FPCGGraphExecutor::GetPinIdsToDeactivate(FPCGTaskId TaskId, uint64 InactiveOutputPinBitmask, TArray<FPCGPinId>& InOutPinIds)
{
	InOutPinIds.Reserve(InOutPinIds.Num() + FMath::CountBits(InactiveOutputPinBitmask));

	int OutputPinIndex = 0;

	while (InactiveOutputPinBitmask != 0)
	{
		if (InactiveOutputPinBitmask & 1)
		{
			InOutPinIds.AddUnique(PCGPinIdHelpers::NodeIdAndPinIndexToPinId(TaskId, OutputPinIndex));
		}

		InactiveOutputPinBitmask >>= 1;
		++OutputPinIndex;
	}
}

void FPCGGraphExecutor::CullInactiveDownstreamNodes(FPCGTaskId InCompletedTaskId, uint64 InInactiveOutputPinBitmask)
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGGraphExecutor::CullInactiveDownstreamNodes);

	TArray<FPCGPinId> PinIdsToDeactivate;
	GetPinIdsToDeactivate(InCompletedTaskId, InInactiveOutputPinBitmask, PinIdsToDeactivate);
	check(!PinIdsToDeactivate.IsEmpty());

	PCGGraphExecutionLogging::LogTaskCullingBegin(InCompletedTaskId, InInactiveOutputPinBitmask, PinIdsToDeactivate);

	TSet<FPCGTaskId> AllRemovedTasks;

	// Hoisted out of loop for performance reasons.
	TArray<FPCGTaskId, TInlineAllocator<64>> TasksToRemove;

	while (!PinIdsToDeactivate.IsEmpty())
	{
		const FPCGPinId PinId = PinIdsToDeactivate.Pop(EAllowShrinking::No);
		const FPCGTaskId PinTaskId = PCGPinIdHelpers::GetNodeIdFromPinId(PinId);

		PCGGraphExecutionLogging::LogTaskCullingBeginLoop(PinTaskId, PCGPinIdHelpers::GetPinIndexFromPinId(PinId), PinIdsToDeactivate);
		LogTaskState();

		PCGGraphExecutor::TScopeLock ScopeLock(TasksLock);
		const TSet<FPCGTaskId>* Successors = TaskSuccessors.Find(PinTaskId);
		if (!Successors)
		{
			continue;
		}

		TasksToRemove.SetNum(0, EAllowShrinking::No);

		// Build set of tasks that are candidates for culling when PinId is deactivated.
		for (const FPCGTaskId SuccessorTaskId : *Successors)
		{
			// Successors are updated at the end of this function, which means it may
			// contain task IDs that have been removed.
			if (FPCGGraphTask* FoundTask = Tasks.Find(SuccessorTaskId))
			{
				bool bDependencyExpressionBecameFalse;
				FoundTask->PinDependency.DeactivatePin(PinId, bDependencyExpressionBecameFalse);

				if (bDependencyExpressionBecameFalse)
				{
					TasksToRemove.AddUnique(SuccessorTaskId);
				}

				PCGGraphExecutionLogging::LogTaskCullingUpdatedPinDeps(SuccessorTaskId, FoundTask->PinDependency, bDependencyExpressionBecameFalse);
			}
		}

		// Now remove the tasks.
		for (const FPCGTaskId RemovedTaskId : TasksToRemove)
		{
			// Scope in which RemovedTask reference is valid.
			{
				FPCGGraphTask& RemovedTask = Tasks[RemovedTaskId];

				const UPCGNode* Node = RemovedTask.Node;
				const int PinCount = Node ? Node->GetOutputPins().Num() : 0;

				if (PinCount > 0)
				{
					// Deactivate all output pins.
					const uint64 InactiveOutputPinBitmask = (1ULL << PinCount) - 1;

					// Deactivate its pins - add to set of pins to deactivate.
					GetPinIdsToDeactivate(RemovedTaskId, InactiveOutputPinBitmask, PinIdsToDeactivate);

#if WITH_EDITOR
					SendInactivePinNotification(RemovedTask.Node, RemovedTask.GetStack(), InactiveOutputPinBitmask);
#endif
				}

				// Also register a special pin-less pin ID for this node, for task dependencies that do not have a specific pin.
				PinIdsToDeactivate.AddUnique(PCGPinIdHelpers::NodeIdToPinId(RemovedTaskId));

				// Remove task as successor of upstream node.
				RemoveTaskFromInputSuccessorsNoLock(RemovedTaskId, RemovedTask.Inputs);

				// Remove the deleted tasks from the inputs of downstream tasks.
				if (const TSet<FPCGTaskId>* SuccessorsOfRemovedTask = TaskSuccessors.Find(RemovedTaskId))
				{
					for (const FPCGTaskId SuccessorTaskId : *SuccessorsOfRemovedTask)
					{
						if (FPCGGraphTask* SuccessorTask = Tasks.Find(SuccessorTaskId))
						{
							for (int InputIndex = SuccessorTask->Inputs.Num() - 1; InputIndex >= 0; --InputIndex)
							{
								if (SuccessorTask->Inputs[InputIndex].TaskId == RemovedTaskId)
								{
									SuccessorTask->Inputs.RemoveAtSwap(InputIndex, EAllowShrinking::No);
								}
							}
						}
					}
				}
			}

			// Remove from tasks. After this step all traces of RemovedTaskId should be erased from tasks, task inputs. Task successors will be
			// updated below when queuing next tasks.
			Tasks.Remove(RemovedTaskId);
		}

		AllRemovedTasks.Append(TasksToRemove);
	}

	// Ensure any downstream tasks are enqueued.
	for (const FPCGTaskId TaskId : AllRemovedTasks)
	{
		{
			// Store culled output
			PCGGraphExecutor::TScopeLock OutputLock(TaskOutputsLock);
			FOutputDataInfo CullDataInfo;
			CullDataInfo.RemainingSuccessorCount = 0;
			CullDataInfo.bCulled = true;
			TaskOutputs.Add(TaskId, MoveTemp(CullDataInfo));
		}

		// Queue downstream tasks in a similar manner to when a task draws from the cache and is skipped.
		// Some downstream tasks will have been culled which we don't care about (hence the ignore flag),
		// but some may not be queued and may be ready for queuing.
		QueueNextTasks(TaskId);
	}
}

#if WITH_EDITOR
void FPCGGraphExecutor::SendInactivePinNotification(const UPCGNode* InNode, const FPCGStack* InStack, uint64 InactiveOutputPinBitmask)
{
	const UPCGComponent* Component = InStack ? InStack->GetRootComponent() : nullptr;
	if (Component && InNode)
	{
		Component->NotifyNodeDynamicInactivePins(InNode, InStack, InactiveOutputPinBitmask);
	}
}
#endif

void FPCGGraphExecutor::AddReferencedObjects(FReferenceCollector& Collector)
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGGraphExecutor::AddReferencedObjects);

	// Go through all data in the cached output map
	{
		PCGGraphExecutor::TScopeLock ScopeLock(TaskOutputsLock);
		for (auto& OutputDataEntry : TaskOutputs)
		{
			OutputDataEntry.Value.DataCollection.AddReferences(Collector);
		}
	}

	{
		PCGGraphExecutor::TScopeLock ScopeLock(LiveTasksLock);
		Algo::ForEach(ReadyTasks, [&Collector](auto& Task)
		{
			if (!Task.bHasDonePrepareForExecute)
			{
				check(!Task.Context);
				Task.TaskInput.AddReferences(Collector);
			}
			else if (Task.Context)
			{
				Task.Context->AddStructReferencedObjects(Collector);
			}
		});

		auto AddReferencesActiveTask = [&Collector](TSharedPtr<FPCGGraphActiveTask>& InActiveTask)
		{
			if (InActiveTask->bIsExecutingTask)
			{
				Collector.AddReferencedObjects(InActiveTask->ExecutingReferences);
				// @todo_pcg this is to allow referencing extra objects from the Context sub classes, should probably be part of the visiting pattern also
				if (InActiveTask->Context)
				{
					InActiveTask->Context->AddExtraStructReferencedObjects(Collector);
				}
			}
			else if (InActiveTask->Context)
			{
				InActiveTask->Context->AddStructReferencedObjects(Collector);
			}
		};

		Algo::ForEach(ActiveTasks, AddReferencesActiveTask);
		Algo::ForEach(ActiveTasksGameThreadOnly, AddReferencesActiveTask);
		Algo::ForEach(SleepingTasks, AddReferencesActiveTask);
	}

	{
		PCGGraphExecutor::TScopeLock ScopeLock(CachingResultsLock);
		Algo::ForEach(CollectGCCachingResults, [&Collector](auto& CachingResult)
		{
			CachingResult.Value->Output.AddReferences(Collector);
		});
	}

	// Some task might have been delayed to the game thread and we are no longer referencing them through (Ready/Sleep/Active)
	// but we still want their UObject references to stay valid
	{
		PCGGraphExecutor::TScopeLock ScopeLock(CollectGCReferenceTasksLock);
		Algo::ForEach(CollectGCReferenceTasks, [&Collector](auto& Task)
		{
			if (Task->Context)
			{
				Task->Context->AddStructReferencedObjects(Collector);
			}
		});
	}

	{
		PCGGraphExecutor::TScopeLock ScopeLock(GraphExecutionCachesLock);
		for (TMap<FPCGTaskId, FGraphExecutionCache>::TIterator It = GraphExecutionCaches.CreateIterator(); It; ++It)
		{
			It.Value().AddStructReferencedObjects(Collector);
		}
	}

	GraphCompiler.AddReferencedObjects(Collector);
}

FPCGGraphExecutor::FGraphExecutionCache::FGraphExecutionCache()
{
	for (int32 i = 0; i < (int32)EExecutionCacheDataType::Count; ++i)
	{
		Data[i] = nullptr;
	}
}

void FPCGGraphExecutor::FGraphExecutionCache::AddStructReferencedObjects(FReferenceCollector& Collector)
{
	for (int32 i = 0; i < (int32)EExecutionCacheDataType::Count; ++i)
	{
		Collector.AddReferencedObject(Data[i]);
	}
}

FPCGElementPtr FPCGGraphExecutor::GetFetchInputElement()
{
	if (!FetchInputElementPtr)
	{
		FetchInputElementPtr = MakeShared<FPCGFetchInputElement>();
	}

	return FetchInputElementPtr;
}

FPCGElementPtr FPCGGraphExecutor::GetPreGraphElement()
{
	if (!PreGraphElementPtr)
	{
		PreGraphElementPtr = MakeShared<FPCGPreGraphElement>();
	}

	return PreGraphElementPtr;
}

void FPCGGraphExecutor::LogTaskState() const
{
#if WITH_EDITOR
	if (PCGGraphExecutionLogging::CullingLogEnabled())
	{
		UE_LOG(LogPCG, Log, TEXT("\tDORMANT (FPCGGraphExecutor::Tasks):"));
		PCGGraphExecutor::TScopeLock ScopeLock(TasksLock);
		PCGGraphExecutionLogging::LogGraphTasks(Tasks, &TaskSuccessors);
	}
#endif
}

#if WITH_EDITOR

FPCGTaskId FPCGGraphExecutor::ScheduleDebugWithTaskCallback(UPCGComponent* InComponent, TFunction<void(FPCGTaskId/* TaskId*/, const UPCGNode*/* Node*/, const FPCGDataCollection&/* TaskOutput*/)> TaskCompleteCallback)
{
	check(InComponent);
	FPCGTaskId FinalTaskID = Schedule(InComponent, {});
	InComponent->CurrentGenerationTask = FinalTaskID;

	const bool bNonPartitionedComponent = !InComponent->IsLocalComponent() && !InComponent->IsPartitioned();
	const uint32 GenerationGridSize = bNonPartitionedComponent ? PCGHiGenGrid::UninitializedGridSize() : InComponent->GetGenerationGridSize();

	FPCGStackContext DummyStackContext;
	TArray<FPCGGraphTask> CompiledTasks = GraphCompiler.GetCompiledTasks(InComponent->GetGraph(), GenerationGridSize, DummyStackContext, /*bIsTopGraph=*/true);
	CompiledTasks.Pop(); // Remove the final task

	// Set up all final dependencies for the entire execution
	TArray<FPCGTaskId> FinalDependencies;
	FinalDependencies.Reserve(CompiledTasks.Num() + 1);
	FinalDependencies.Add(FinalTaskID);

	for (const FPCGGraphTask& CompiledTask : CompiledTasks)
	{
		// Schedule the output capture hooks
		FPCGTaskId CaptureTaskId = ScheduleGeneric([this, TaskCompleteCallback, CompiledTask]
		{
			FPCGDataCollection TaskOutputData;
			if (CompiledTask.Node && GetOutputData(CompiledTask.NodeId, TaskOutputData))
			{
				TaskCompleteCallback(CompiledTask.NodeId, CompiledTask.Node, TaskOutputData);
			}

			return true;
		}, InComponent, {CompiledTask.NodeId});

		// Add these tasks to the final dependencies
		FinalDependencies.Add(CaptureTaskId);
	}

	// Finally, add a task to wait on the graph itself plus the capture tasks
	return ScheduleGeneric([] { return true; }, InComponent, FinalDependencies);
}

void FPCGGraphExecutor::NotifyGraphChanged(UPCGGraph* InGraph, EPCGChangeType ChangeType)
{
	GraphCompiler.NotifyGraphChanged(InGraph, ChangeType);
}

void FPCGGraphExecutor::UpdateGenerationNotification()
{
	// Avoid Notifications for test executors / commandlets / non simulating game world executors
	if (!World || IsRunningCommandlet() || (World->IsGameWorld() && GEditor && !GEditor->IsSimulateInEditorInProgress()))
	{
		return;
	}

	const int32 RemainingTaskNum = GetNonScheduledRemainingTaskCount();
	const bool bPaused = PCGSystemSwitches::CVarPausePCGExecution.GetValueOnAnyThread();
	if (RemainingTaskNum == 0 || bPaused)
	{
		// If we had tasks on the last frame, start a timer to avoid releasing the existing notification too soon
		if (GenerationProgressLastTaskNum != 0)
		{
			// Start Release timer
			GenerationProgressNotificationStartTime = FPlatformTime::Seconds();
		}

		if (bPaused || (FPlatformTime::Seconds() - GenerationProgressNotificationStartTime) > PCGGraphExecutor::CVarEditorNotificationDelayInSeconds.GetValueOnAnyThread())
		{
			ReleaseGenerationNotification();
		}
		else if(GenerationProgressNotification.IsValid())
		{
			GenerationProgressNotification.Pin()->Update(0);
		}

		GenerationProgressLastTaskNum = 0;
		return;
	}

	if (!GenerationProgressNotification.IsValid())
	{
		// If we didn't have tasks on the prior frame, start a timer to create the new one to cause a delay and avoid spamming on and off for short tasks
		if (GenerationProgressLastTaskNum == 0)
		{
			// Start Create timer
			GenerationProgressNotificationStartTime = FPlatformTime::Seconds();
		}

		if ((FPlatformTime::Seconds() - GenerationProgressNotificationStartTime) > PCGGraphExecutor::CVarEditorNotificationDelayInSeconds.GetValueOnAnyThread())
		{
			GenerationProgressNotificationStartTime = 0.0;

			IPCGEditorModule* EditorModule = FModuleManager::GetModulePtr<IPCGEditorModule>("PCGEditor");
			if (!EditorModule)
			{
				return;
			}

			GenerationProgressNotification = EditorModule->CreateProgressNotification(GetNotificationTextFormat(), /*bCanCancel=*/true);
			if (GenerationProgressNotification.IsValid())
			{
				GenerationProgressNotification.Pin()->OnCancelTasks().AddRaw(this, &FPCGGraphExecutor::OnNotificationCancel);
			}
		}
	}

	if (GenerationProgressNotification.IsValid())
	{
		GenerationProgressNotification.Pin()->Update(RemainingTaskNum);
	}

	GenerationProgressLastTaskNum = RemainingTaskNum;
}

void FPCGGraphExecutor::ReleaseGenerationNotification()
{
	if (GenerationProgressNotification.IsValid())
	{
		GenerationProgressNotification.Pin()->OnCancelTasks().RemoveAll(this);
		if (IPCGEditorModule* EditorModule = FModuleManager::GetModulePtr<IPCGEditorModule>("PCGEditor"))
		{
			EditorModule->ReleaseProgressNotification(GenerationProgressNotification);
		}
		GenerationProgressNotification = nullptr;
	}
	GenerationProgressNotificationStartTime = 0.0;
}

void FPCGGraphExecutor::OnNotificationCancel()
{
	ReleaseGenerationNotification();

	if (UPCGSubsystem* PCGSubsystem = UWorld::GetSubsystem<UPCGSubsystem>(World))
	{
		PCGSubsystem->CancelAllGeneration();
	}
}

FTextFormat FPCGGraphExecutor::GetNotificationTextFormat()
{
	return NSLOCTEXT("PCG", "PCGGenerationNotificationFormat", "Executing PCG {0}|plural(one=Task,other=Tasks)");
}

#endif // WITH_EDITOR

bool FPCGPreGraphElement::ExecuteInternal(FPCGContext* Context) const
{
	check(Context);

	check(IsInGameThread());
	UPCGComponent* Component = Context->SourceComponent.Get();

	// Early out if the component has been deleted/is invalid
	if (!Component)
	{
		// If the component should exist but it doesn't (which is all the time here, previously we checked for it), then this should be cancelled
		Context->OutputData.bCancelExecution = true;
		return true;
	}

#if WITH_EDITOR
	Component->StartGenerationInProgress();
#endif

	ensureMsgf(Component->GetGenerationTaskId() != InvalidPCGTaskId, TEXT("Component was Scheduled for generation without having its CurrentGenerationTask assigned"));

	{
		PCG_EXECUTION_CACHE_VALIDATION_CREATE_SCOPE(Component);
		
		// Call getters which will create the data and cache it
		Component->GetActorPCGData();
		Component->GetOriginalActorPCGData();
	}
	return true;
}

bool FPCGFetchInputElement::ExecuteInternal(FPCGContext* Context) const
{
	check(Context);
	// First: any input can be passed through to the output trivially
	Context->OutputData = Context->InputData;

	// Second: fetch the inputs provided by the component
	UPCGComponent* Component = Context->SourceComponent.Get();
	
	// Early out if the component has been deleted/is invalid
	if (!Component)
	{
		// If the component should exist but it doesn't (which is all the time here, previously we checked for it), then this should be cancelled
		Context->OutputData.bCancelExecution = true;
		return true;
	}

#if WITH_EDITOR
	check(Component->IsGenerationInProgress());
#endif

	check(Context->Node);

	if (Context->Node->IsOutputPinConnected(PCGPinConstants::DefaultInputLabel))
	{
		if (UPCGData* PCGData = Component->GetPCGData())
		{
			FPCGTaggedData& TaggedData = Context->OutputData.TaggedData.Emplace_GetRef();
			TaggedData.Data = PCGData;
			TaggedData.Pin = PCGPinConstants::DefaultInputLabel;
		}
	}

	if (Context->Node->IsOutputPinConnected(PCGInputOutputConstants::DefaultInputLabel))
	{
		if (UPCGData* InputPCGData = Component->GetInputPCGData())
		{
			FPCGTaggedData& TaggedData = Context->OutputData.TaggedData.Emplace_GetRef();
			TaggedData.Data = InputPCGData;
			TaggedData.Pin = PCGInputOutputConstants::DefaultInputLabel;
		}
	}

	if (Context->Node->IsOutputPinConnected(PCGInputOutputConstants::DefaultActorLabel))
	{
		if (UPCGData* ActorPCGData = Component->GetActorPCGData())
		{
			FPCGTaggedData& TaggedData = Context->OutputData.TaggedData.Emplace_GetRef();
			TaggedData.Data = ActorPCGData;
			TaggedData.Pin = PCGInputOutputConstants::DefaultActorLabel;
		}
	}

	if (Context->Node->IsOutputPinConnected(PCGInputOutputConstants::DefaultLandscapeLabel))
	{
		if (UPCGData* LandscapePCGData = Component->GetLandscapePCGData())
		{
			FPCGTaggedData& TaggedData = Context->OutputData.TaggedData.Emplace_GetRef();
			TaggedData.Data = LandscapePCGData;
			TaggedData.Pin = PCGInputOutputConstants::DefaultLandscapeLabel;
		}
	}

	if (Context->Node->IsOutputPinConnected(PCGInputOutputConstants::DefaultLandscapeHeightLabel))
	{
		if (UPCGData* LandscapeHeightPCGData = Component->GetLandscapeHeightPCGData())
		{
			FPCGTaggedData& TaggedData = Context->OutputData.TaggedData.Emplace_GetRef();
			TaggedData.Data = LandscapeHeightPCGData;
			TaggedData.Pin = PCGInputOutputConstants::DefaultLandscapeHeightLabel;
		}
	}

	if (Context->Node->IsOutputPinConnected(PCGInputOutputConstants::DefaultOriginalActorLabel))
	{
		if (UPCGData* OriginalActorPCGData = Component->GetOriginalActorPCGData())
		{
			FPCGTaggedData& TaggedData = Context->OutputData.TaggedData.Emplace_GetRef();
			TaggedData.Data = OriginalActorPCGData;
			TaggedData.Pin = PCGInputOutputConstants::DefaultOriginalActorLabel;
		}
	}

	return true;
}

FPCGGenericElement::FPCGGenericElement(TFunction<bool(FPCGContext*)> InOperation, const FContextAllocator& InContextAllocator)
	: Operation(InOperation)
	, ContextAllocator(InContextAllocator)
{
}

FPCGGenericElement::FPCGGenericElement(TFunction<bool(FPCGContext*)> InOperation, TFunction<void(FPCGContext*)> InAbortOperation, const FContextAllocator& InContextAllocator)
	: Operation(InOperation)
	, AbortOperation(InAbortOperation)
	, ContextAllocator(InContextAllocator)
{
}

FPCGContext* FPCGGenericElement::Initialize(const FPCGDataCollection& InputData, TWeakObjectPtr<UPCGComponent> SourceComponent, const UPCGNode* Node)
{
	check(ContextAllocator);
	FPCGContext* Context = ContextAllocator(InputData, SourceComponent, Node);
	Context->InputData = InputData;
	Context->SourceComponent = SourceComponent;
	Context->Node = Node;

	return Context;
}

bool FPCGGenericElement::ExecuteInternal(FPCGContext* Context) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGGenericElement::Execute);
	return Operation && Operation(Context);
}

void FPCGGenericElement::AbortInternal(FPCGContext* Context) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGGenericElement::Abort);
	if(AbortOperation)
	{
		AbortOperation(Context);
	}
}

namespace PCGGraphExecutor
{
#if WITH_EDITOR
	bool FPCGGridLinkageElement::operator==(const FPCGGridLinkageElement& Other) const
	{
		return FromGrid == Other.FromGrid && ToGrid == Other.ToGrid && ResourceKey == Other.ResourceKey;
	}
#endif

	bool ExecuteGridLinkage(
		EPCGHiGenGrid InGenerationGrid,
		EPCGHiGenGrid InFromGrid,
		EPCGHiGenGrid InToGrid,
		const FString& InResourceKey,
		FName InUpstreamPinLabel,
		FPCGGridLinkageContext* InContext)
	{
		check(InContext);
		TRACE_CPUPROFILER_EVENT_SCOPE(PCGGraphExecutor::ExecuteGridLinkage);

		if (!InContext->SourceComponent.IsValid())
		{
			// Source no longer exists, nothing to be done.
			return true;
		}

		// Non-hierarchical generation - no linkage required - data should just pass through.
		if (!InContext->SourceComponent->GetGraph()->IsHierarchicalGenerationEnabled()
			|| !ensure(PCGHiGenGrid::IsValidGrid(InFromGrid) || InFromGrid == EPCGHiGenGrid::Unbounded))
		{
			InContext->OutputData = InContext->InputData;
			return true;
		}

		const uint32 FromGridSize = PCGHiGenGrid::IsValidGrid(InFromGrid) ? PCGHiGenGrid::GridToGridSize(InFromGrid) : PCGHiGenGrid::UnboundedGridSize();
		const uint32 ToGridSize = PCGHiGenGrid::IsValidGrid(InToGrid) ? PCGHiGenGrid::GridToGridSize(InToGrid) : PCGHiGenGrid::UnboundedGridSize();

		// Never allow a large grid to read data from small grid - this violates hierarchy.
		if (FromGridSize < ToGridSize)
		{
#if WITH_EDITOR
			if (UPCGSubsystem* Subsystem = UPCGSubsystem::GetInstance(InContext->SourceComponent->GetWorld()))
			{
				// Using the low level logging call because we have only a node pointer for the downstream node. Note that InContext
				// is the context for the linkage element/task, which is not represented on the graph and cannot receive graph warnings/errors.
				if (ToGridSize == PCGHiGenGrid::UnboundedGridSize())
				{
					Subsystem->GetNodeVisualLogsMutable().Log(
						*InContext->Stack,
						ELogVerbosity::Error,
						FText::Format(
							NSLOCTEXT("PCGGraphCompiler", "InvalidLinkageToUnbounded", "Could not read data across grid levels - cannot read from grid size {0} to Unbounded domain."),
							FromGridSize,
							ToGridSize));
				}
				else
				{
					Subsystem->GetNodeVisualLogsMutable().Log(
						*InContext->Stack,
						ELogVerbosity::Error,
						FText::Format(
							NSLOCTEXT("PCGGraphCompiler", "InvalidLinkageInvalidGridSizes", "Could not read data across grid levels - origin grid size {0} must be greater than destination grid size {1}. Graph default grid size may need increasing."),
							FromGridSize,
							ToGridSize));
				}
			}
#endif

			return true;
		}

		if (!!(InFromGrid & InGenerationGrid) && FromGridSize != ToGridSize)
		{
			FPCGDataCollection Data;

			// Grid linkages have a single virtual input pin with the label matching the upstream pin. A grid linkage is created for each edge.
			Data.TaggedData = InContext->InputData.GetInputsByPin(InUpstreamPinLabel);

			PCGGraphExecutionLogging::LogGridLinkageTaskExecuteStore(InContext, InGenerationGrid, FromGridSize, ToGridSize, InResourceKey, Data.TaggedData.Num());
			
			InContext->SourceComponent->StoreOutputDataForPin(InResourceKey, Data);
		}
		else if (InToGrid == InGenerationGrid && FromGridSize != ToGridSize)
		{
			PCGGraphExecutionLogging::LogGridLinkageTaskExecuteRetrieve(InContext, InGenerationGrid, FromGridSize, ToGridSize, InResourceKey);

			UPCGSubsystem* Subsystem = UPCGSubsystem::GetInstance(InContext->SourceComponent->GetWorld());
			if (!ensure(Subsystem))
			{
				return false;
			}

			UPCGComponent* ComponentWithData = nullptr;
			bool bComponentWithDataIsOriginalComponent = false;
			if (FromGridSize == PCGHiGenGrid::UnboundedGridSize())
			{
				ComponentWithData = InContext->SourceComponent->GetOriginalComponent();
				bComponentWithDataIsOriginalComponent = true;
			}
			else
			{
				const AActor* ComponentActor = InContext->SourceComponent->GetOwner();
				if (ComponentActor)
				{
					const UPCGComponent* OriginalComponent = InContext->SourceComponent->GetOriginalComponent();
					if (!ensure(OriginalComponent))
					{
						return false;
					}

					const FPCGGridDescriptor GridDescriptor = OriginalComponent->GetGridDescriptor(FromGridSize);

					// Get grid coords using the parent grid (FromGridSize).
					const FIntVector CellCoords = UPCGActorHelpers::GetCellCoord(ComponentActor->GetActorLocation(), GridDescriptor.GetGridSize(), GridDescriptor.Is2DGrid());

					ComponentWithData = Subsystem->GetLocalComponent(GridDescriptor, CellCoords, OriginalComponent);
				}
			}

			if (!ComponentWithData)
			{
				// Nothing we can do currently if PCG component not present. One idea is to schedule an artifact-less execution but that
				// comes with complications - artifacts/side effects are an integral part of execution. Most likely we'll do a cleanup
				// pass of any unwanted artifacts/local-components later.
				PCGGraphExecutionLogging::LogGridLinkageTaskExecuteRetrieveNoLocalComponent(InContext, InResourceKey);
				return true;
			}

			// Once we've found our component, try to retrieve the data.
			if (const FPCGDataCollection* Data = ComponentWithData->RetrieveOutputDataForPin(InResourceKey))
			{
				PCGGraphExecutionLogging::LogGridLinkageTaskExecuteRetrieveSuccess(InContext, ComponentWithData, InResourceKey, Data->TaggedData.Num());
				InContext->OutputData = *Data;

				// Grid Linkages have a single virtual output pin which forwards the same label as the upstream output pin. Apply the label now.
				// The normal path in IPCGElement::CleanupAndValidateOutput() to fix up the output label does not run because Grid Linkages
				// have no Settings.
				for (FPCGTaggedData& TaggedData : InContext->OutputData.TaggedData)
				{
					TaggedData.Pin = InUpstreamPinLabel;
				}

				return true;
			}

			// At this point we could not get to the data, so we'll try executing the graph if we did not do that already.

			auto WakeUpLambda = [InContext, ComponentWithData]()
			{
				PCGGraphExecutionLogging::LogGridLinkageTaskExecuteRetrieveWakeUp(InContext, ComponentWithData);
				InContext->bIsPaused = false;
				return true;
			};

			// If we need data from a local component but the local component is still generating, then we'll wait for it. On the other hand
			// if we need data from the original component we assume the generation has already happened because it is always scheduled before
			// the local components.
			const bool bWaitForGeneration = bComponentWithDataIsOriginalComponent ? false : ComponentWithData->IsGenerating();
			if (bWaitForGeneration)
			{
				PCGGraphExecutionLogging::LogGridLinkageTaskExecuteRetrieveWaitOnScheduledGraph(InContext, ComponentWithData, InResourceKey);

				// The component was already generating, but we were not asleep. Not really clear what's happening here,
				// but in any case go to sleep and wake up when it's done.
				InContext->bIsPaused = true;

				// Wake up this task after graph has generated.
				FPCGTaskId GenerationTask = ComponentWithData->GetGenerationTaskId();
				if (ensure(GenerationTask != InvalidPCGTaskId))
				{
					Subsystem->ScheduleGeneric(WakeUpLambda, InContext->SourceComponent.Get(), { ComponentWithData->GetGenerationTaskId() });
				}

				return false;
			}

			// Graph is not currently generating. If we have not already tried generating, try it once now.
			// But don't do this for the original component as this will always be scheduled before the local components.
			if (!InContext->bScheduledGraph && !bComponentWithDataIsOriginalComponent)
			{
				PCGGraphExecutionLogging::LogGridLinkageTaskExecuteRetrieveScheduleGraph(InContext, ComponentWithData, InResourceKey);

				EPCGComponentGenerationTrigger GenTrigger = (InContext->SourceComponent->IsManagedByRuntimeGenSystem()) ?
					EPCGComponentGenerationTrigger::GenerateAtRuntime : EPCGComponentGenerationTrigger::GenerateOnDemand;

				// Wake up this task after graph has generated.
				const FPCGTaskId GraphTaskId = ComponentWithData->GenerateLocalGetTaskId(GenTrigger, /*bForce=*/true);
				Subsystem->ScheduleGeneric(WakeUpLambda, InContext->SourceComponent.Get(), { GraphTaskId });

				// Update state and go to sleep.
				InContext->bScheduledGraph = true;
				InContext->bIsPaused = true;
				return false;
			}
			else
			{
				// We tried generating but no luck, at this point give up.
				PCGGraphExecutionLogging::LogGridLinkageTaskExecuteRetrieveNoData(InContext, ComponentWithData, InResourceKey);
				return true;
			}
		}
		else
		{
			// Graceful no op - no linkage required.
			InContext->OutputData = InContext->InputData;
		}

		return true;
	}
}

UPCGGridLinkageSettings::UPCGGridLinkageSettings()
{
#if WITH_EDITOR
	bExposeToLibrary = false;
#endif // WITH_EDITOR
}

FPCGElementPtr UPCGGridLinkageSettings::CreateElement() const
{
	auto GridLinkageOperation = [this](FPCGContext* InContext)
	{
		return PCGGraphExecutor::ExecuteGridLinkage(
			GenerationGrid,
			FromGrid,
			ToGrid,
			ResourceKey,
			UpstreamPin.Get() ? UpstreamPin->Properties.Label : NAME_None,
			static_cast<FPCGGridLinkageContext*>(InContext));
	};

	FPCGGenericElement::FContextAllocator ContextAllocator = [](const FPCGDataCollection&, TWeakObjectPtr<UPCGComponent>, const UPCGNode*)
	{
		return new FPCGGridLinkageContext();
	};

	return MakeShared<PCGGraphExecutor::FPCGGridLinkageElement>(GridLinkageOperation, ContextAllocator, FromGrid, ToGrid, GenerationGrid, ResourceKey, UpstreamPin.Get());
}