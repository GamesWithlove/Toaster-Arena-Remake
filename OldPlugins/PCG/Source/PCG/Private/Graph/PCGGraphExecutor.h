// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "PCGContext.h"
#include "PCGElement.h"
#include "PCGPin.h"
#include "PCGSettings.h"
#include "PCGSubsystem.h"
#include "Graph/PCGGraphCache.h"
#include "Graph/PCGGraphCompiler.h"
#include "Graph/PCGGraphTask.h"
#include "Graph/PCGStackContext.h"

#include "Misc/SpinLock.h"
#include "Tasks/Task.h"
#include "Templates/UniquePtr.h"
#include "UObject/GCObject.h"

#if WITH_EDITOR
#include "Editor/IPCGEditorProgressNotification.h"
#include "WorldPartition/WorldPartitionHandle.h" // Needed for FWorldPartitionReference
#endif

#include "PCGGraphExecutor.generated.h"

class UPCGComponent;
class UPCGGraph;
class UPCGNode;
struct FPCGStack;
class FTextFormat;

namespace PCGGraphExecutor
{
	extern PCG_API TAutoConsoleVariable<float> CVarTimePerFrame;
	extern PCG_API TAutoConsoleVariable<bool> CVarGraphMultithreading;

#if WITH_EDITOR
	extern PCG_API TAutoConsoleVariable<float> CVarEditorTimePerFrame;
#endif

	void ClearAsyncFlags(TSet<TObjectPtr<UObject>>& AsyncObjects);
}

class FPCGGraphExecutor : public FGCObject
{
public:
	// Default constructor used by unittests
	FPCGGraphExecutor();
	FPCGGraphExecutor(UWorld* InWorld);
	~FPCGGraphExecutor();

	/** Compile (and cache) a graph for later use. This call is threadsafe */
	void Compile(UPCGGraph* InGraph);

	/** Schedules the execution of a given graph with specified inputs. This call is threadsafe */
	FPCGTaskId Schedule(UPCGComponent* InComponent, const TArray<FPCGTaskId>& TaskDependency = TArray<FPCGTaskId>(), const FPCGStack* InFromStack = nullptr);

	/** Schedules the execution of a given graph with specified inputs. This call is threadsafe */
	FPCGTaskId Schedule(
		UPCGGraph* Graph,
		UPCGComponent* InSourceComponent,
		FPCGElementPtr PreGraphElement,
		FPCGElementPtr InputElement,
		const TArray<FPCGTaskId>& TaskDependency,
		const FPCGStack* InFromStack,
		bool bAllowHierarchicalGeneration);

	/** Cancels all tasks originating from the given component */
	TArray<UPCGComponent*> Cancel(UPCGComponent* InComponent);
	
	/** Cancels all tasks running a given graph */
	TArray<UPCGComponent*> Cancel(UPCGGraph* InGraph);

	/** Cancels all tasks */
	TArray<UPCGComponent*> CancelAll();

	/** Returns true if any task is scheduled or executing for the given graph. */
	bool IsGraphCurrentlyExecuting(const UPCGGraph* InGraph);

	/** Returns true if any task is scheduled or executing for any graph */
	bool IsAnyGraphCurrentlyExecuting() const;
	
	// Back compatibility function. Use ScheduleGenericWithContext
	FPCGTaskId ScheduleGeneric(TFunction<bool()> InOperation, UPCGComponent* InSourceComponent, const TArray<FPCGTaskId>& TaskExecutionDependencies);
	FPCGTaskId ScheduleGeneric(TFunction<bool()> InOperation, TFunction<void()> InAbortOperation, UPCGComponent* InSourceComponent, const TArray<FPCGTaskId>& TaskExecutionDependencies);

	/** General job scheduling
	*  @param InOperation:               Callback that takes a Context as argument and returns true if the task is done, false otherwise
	*  @param InSourceComponent:         PCG component associated with this task. Can be null.
	*  @param TaskExecutionDependencies: Task will wait on these tasks to execute and won't take their output data as input.
	*  @param TaskDataDependencies:      Task will wait on these tasks to execute and will take their output data as input.
	*/
	FPCGTaskId ScheduleGenericWithContext(TFunction<bool(FPCGContext*)> InOperation, UPCGComponent* InSourceComponent, const TArray<FPCGTaskId>& TaskExecutionDependencies, const TArray<FPCGTaskId>& TaskDataDependencies);

	/** General job scheduling
	*  @param InOperation:               Callback that takes a Context as argument and returns true if the task is done, false otherwise
	*  @param InAbortOperation:          Callback that is called if the task is aborted (cancelled) before fully executed.
	*  @param InSourceComponent:         PCG component associated with this task. Can be null.
	*  @param TaskExecutionDependencies: Task will wait on these tasks to execute and won't take their output data as input.
	*  @param TaskDataDependencies:      Task will wait on these tasks to execute and will take their output data as input.
	*/
	FPCGTaskId ScheduleGenericWithContext(TFunction<bool(FPCGContext*)> InOperation, TFunction<void(FPCGContext*)> InAbortOperation, UPCGComponent* InSourceComponent, const TArray<FPCGTaskId>& TaskExecutionDependencies, const TArray<FPCGTaskId>& TaskDataDependencies);

	/** Gets data in the output results. Returns false if data is not ready. */
	bool GetOutputData(FPCGTaskId InTaskId, FPCGDataCollection& OutData);

	/** Clear output data */
	void ClearOutputData(FPCGTaskId InTaskId);

	/** Accessor so PCG tools (e.g. profiler) can easily decode graph task ids **/
	FPCGGraphCompiler* GetCompiler() { return &GraphCompiler; }

	/** Accessor so PCG tools (e.g. profiler) can easily decode graph task ids **/
	const FPCGGraphCompiler* GetCompiler() const { return &GraphCompiler; }

#if WITH_EDITOR
	FPCGTaskId ScheduleDebugWithTaskCallback(UPCGComponent* InComponent, TFunction<void(FPCGTaskId, const UPCGNode*, const FPCGDataCollection&)> TaskCompleteCallback);

	/** Notify compiler that graph has changed so it'll be removed from the cache */
	void NotifyGraphChanged(UPCGGraph* InGraph, EPCGChangeType ChangeType);

	/** Returns the number of entries currently in the cache for InElement. */
	uint32 GetGraphCacheEntryCount(IPCGElement* InElement) const { return GraphCache.GetGraphCacheEntryCount(InElement); }
#endif

	/** "Tick" of the graph executor. This call is NOT THREADSAFE */
	void Execute();

	/** Expose cache so it can be dirtied */
	FPCGGraphCache& GetCache() { return GraphCache; }

	/** True if graph cache debugging is enabled. */
	bool IsGraphCacheDebuggingEnabled() const { return GraphCache.IsDebuggingEnabled(); }

	//~Begin FGCObject interface
	virtual void AddReferencedObjects(FReferenceCollector& Collector) override;
	virtual FString GetReferencerName() const override { return TEXT("FPCGGraphExecutor"); }
	//~End FGCObject interface

private:
	friend UPCGSubsystem;

	enum class EExecutionCacheDataType : int8
	{
		PCGData = 0,
		InputData,
		ActorData,
		LandscapeData,
		LandscapeHeightData,
		OriginalActorData,
		Count
	};

	static constexpr int8 ExecutionCacheSize = 6;

	UPCGData* GetExecutionCacheData(FPCGTaskId InGraphExecutionTaskId, EExecutionCacheDataType InExecutionCacheDataType);

	UPCGData* GetPCGData(FPCGTaskId InGraphExecutionTaskId) { return GetExecutionCacheData(InGraphExecutionTaskId, EExecutionCacheDataType::PCGData); }
	UPCGData* GetInputPCGData(FPCGTaskId InGraphExecutionTaskId) { return GetExecutionCacheData(InGraphExecutionTaskId, EExecutionCacheDataType::InputData); }
	UPCGData* GetActorPCGData(FPCGTaskId InGraphExecutionTaskId) { return GetExecutionCacheData(InGraphExecutionTaskId, EExecutionCacheDataType::ActorData); }
	UPCGData* GetLandscapePCGData(FPCGTaskId InGraphExecutionTaskId) { return GetExecutionCacheData(InGraphExecutionTaskId, EExecutionCacheDataType::LandscapeData); }
	UPCGData* GetLandscapeHeightPCGData(FPCGTaskId InGraphExecutionTaskId) { return GetExecutionCacheData(InGraphExecutionTaskId, EExecutionCacheDataType::LandscapeHeightData); }
	UPCGData* GetOriginalActorPCGData(FPCGTaskId InGraphExecutionTaskId) { return GetExecutionCacheData(InGraphExecutionTaskId, EExecutionCacheDataType::OriginalActorData); }

	void SetExecutionCacheData(FPCGTaskId InGraphExecutionTaskId, EExecutionCacheDataType InExecutionCacheDataType, UPCGData* InData);

	void SetPCGData(FPCGTaskId InGraphExecutionTaskId, UPCGData* InData) { SetExecutionCacheData(InGraphExecutionTaskId, EExecutionCacheDataType::PCGData, InData); }
	void SetInputPCGData(FPCGTaskId InGraphExecutionTaskId, UPCGData* InData) { SetExecutionCacheData(InGraphExecutionTaskId, EExecutionCacheDataType::InputData, InData); }
	void SetActorPCGData(FPCGTaskId InGraphExecutionTaskId, UPCGData* InData) { SetExecutionCacheData(InGraphExecutionTaskId, EExecutionCacheDataType::ActorData, InData); }
	void SetLandscapePCGData(FPCGTaskId InGraphExecutionTaskId, UPCGData* InData) { SetExecutionCacheData(InGraphExecutionTaskId, EExecutionCacheDataType::LandscapeData, InData); }
	void SetLandscapeHeightPCGData(FPCGTaskId InGraphExecutionTaskId, UPCGData* InData) { SetExecutionCacheData(InGraphExecutionTaskId, EExecutionCacheDataType::LandscapeHeightData, InData); }
	void SetOriginalActorPCGData(FPCGTaskId InGraphExecutionTaskId, UPCGData* InData) { SetExecutionCacheData(InGraphExecutionTaskId, EExecutionCacheDataType::OriginalActorData, InData); }

	void ExecuteV1();
	void ExecuteV2();
	double GetTickBudgetInSeconds() const;
		
	struct FCachedResult
	{
		FPCGTaskId TaskId = InvalidPCGTaskId;
		FPCGDataCollection Output;
		const FPCGStack* Stack = nullptr;
		const UPCGNode* Node = nullptr;
		bool bDoDynamicTaskCulling = false;
		bool bIsPostGraphTask = false;		
	};
		
	void PostTaskExecute(TSharedPtr<FPCGGraphActiveTask> ActiveTask, bool bIsDone);
	bool ProcessScheduledTasks();
	void ExecuteTasksEnded();
	bool ExecuteScheduling(double EndTime, TSharedPtr<FPCGGraphActiveTask>* OutMainThreadTask = nullptr, bool bForceCheckSleepingTasks = false);

	TSet<UPCGComponent*> Cancel(TFunctionRef<bool(TWeakObjectPtr<UPCGComponent>)> CancelFilter);
	void ClearAllTasks();
	void QueueNextTasks(FPCGTaskId FinishedTask);
	TArray<FCachedResult*> QueueNextTasksInternal(FPCGTaskId FinishedTask);

	bool CancelNextTasks(FPCGTaskId CancelledTask, TSet<UPCGComponent*>& OutCancelledComponents);
	void RemoveTaskFromInputSuccessors(FPCGTaskId CancelledTask, const TArray<FPCGGraphTaskInput>& CancelledTaskInputs);
	void RemoveTaskFromInputSuccessorsNoLock(FPCGTaskId CancelledTask, const TArray<FPCGGraphTaskInput>& CancelledTaskInputs);
	
	/** Called from QueueNextTasks/ProcessScheduledTasks will try and setup/prepare task for execution */
	void OnTaskInputsReady(FPCGGraphTask& Task, TArray<FCachedResult*>& OutCachedResults, bool bIsInGameThread);

	/** SetupTask will call BuildTaskInput and assign a IPCGElement to the FPCGGraphTask */
	bool SetupTask(FPCGGraphTask& Task, TArray<FPCGTaskId>& ResultsToMarkAsRead);
	void BuildTaskInput(FPCGGraphTask& Task, TArray<FPCGTaskId>& ResultsToMarkAsRead);
	/** Will check the cache for existing result or create and initialize the FPCGContext to the task */
	void PrepareForExecute(FPCGGraphTask& Task, FCachedResult*& OutCachedResult, bool bLiveTasksLockAlreadyLocked);

	/** Store cache results and Queue next tasks */
	void ProcessCachedResults(TArray<FCachedResult*> CachedResults);
	TArray<FPCGTaskId> ProcessCachedResultsInternal(TArray<FCachedResult*> CachedResults);

	/** Combine all param data into one on the Params pin, if any.*/
	void CombineParams(FPCGGraphTask& Task);
	void StoreResults(FPCGTaskId InTaskId, const FPCGDataCollection& InTaskOutput, bool bNeedsManualClear);
	void ClearResults();
	void MarkInputResults(TArrayView<const FPCGTaskId> InInputResults);

	/** If the completed task has one or more deactivated pins, delete any downstream tasks that are inactive as a result. */
	void CullInactiveDownstreamNodes(FPCGTaskId CompletedTaskId, uint64 InInactiveOutputPinBitmask);

	/** Builds an array of all deactivated unique pin IDs. */
	static void GetPinIdsToDeactivate(FPCGTaskId TaskId, uint64 InactiveOutputPinBitmask, TArray<FPCGPinId>& InOutPinIds);

	FPCGElementPtr GetFetchInputElement();
	FPCGElementPtr GetPreGraphElement();

	void LogTaskState() const;

	int32 GetNonScheduledRemainingTaskCount() const;

#if WITH_EDITOR
	/** Notify the component that the given pins were deactivated during execution. */
	void SendInactivePinNotification(const UPCGNode* InNode, const FPCGStack* InStack, uint64 InactiveOutputPinBitmask);

	void UpdateGenerationNotification();
	void ReleaseGenerationNotification();
	void OnNotificationCancel();
	static FTextFormat GetNotificationTextFormat();
#endif

	/** Graph compiler that turns a graph into tasks */
	FPCGGraphCompiler GraphCompiler;

	/** Graph results cache */
	FPCGGraphCache GraphCache;

	/** Input fetch element, stored here so we have only one */
	FPCGElementPtr FetchInputElementPtr;

	/** PreGraph element, stored here so we have only one */
	FPCGElementPtr PreGraphElementPtr;

	/** 
	 * Define a Lock level for future reference. Rule is when we have a lock, we can't lock a lower or equal level lock to prevent deadlocks.
	 * Example: When locking LiveTasksLock we can't lock ScheduleLock or CollectGCReferenceTasksLock 
	 */

	/** Lock level - 1 (top most lock) */
	UE::FSpinLock ScheduleLock;
	TArray<FPCGGraphScheduleTask> ScheduledTasks;

	/** Lock level 2 */
	mutable UE::FSpinLock TasksLock;
	TMap<FPCGTaskId, FPCGGraphTask> Tasks;
	TMap<FPCGTaskId, TSet<FPCGTaskId>> TaskSuccessors;

	/** Lock level 3 */
	UE::FSpinLock LiveTasksLock;
	TArray<FPCGGraphTask> ReadyTasks;
	TArray<TSharedPtr<FPCGGraphActiveTask>> ActiveTasks;
	TArray<TSharedPtr<FPCGGraphActiveTask>> ActiveTasksGameThreadOnly;
	TArray<TSharedPtr<FPCGGraphActiveTask>> SleepingTasks;
	bool bNeedToCheckSleepingTasks = false;

	/** Lock level 3 */
	UE::FSpinLock CollectGCReferenceTasksLock;
	TSet<TSharedPtr<FPCGGraphActiveTask>> CollectGCReferenceTasks;
			
	/** Map of node instances to their output, could be cleared once execution is done */
	/** Note: this should at some point unload based on loaded/unloaded proxies, otherwise memory cost will be unbounded */
	struct FOutputDataInfo
	{
		FPCGDataCollection DataCollection;
		// Controls whether the results will be expunged from the OutputData as soon as the successor count reaches 0 or not.
		bool bNeedsManualClear = false;
		// Successor count, updated after a successor is done executing (MarkInputResults).
		int32 RemainingSuccessorCount = 0;
		// Culled
		bool bCulled = false;
	};

	/** Lock level 4 */
	UE::FSpinLock CachingResultsLock;
	// Used to keep GC references to in flight caching results (not yet stored to output and might not be in cache anymore)
	TMap<FPCGTaskId, TUniquePtr<FCachedResult>> CollectGCCachingResults;

	/** Lock level 4 */
	UE::FSpinLock TaskOutputsLock;
	TMap<FPCGTaskId, FOutputDataInfo> TaskOutputs;
	
	/** Monotonically increasing id. Should be reset once all tasks are executed, should be protected by the ScheduleLock */
	FPCGTaskId NextTaskId = 0;

	/** Struct holding different UPCGData caches that we want to compute only once per graph execution */
	struct FGraphExecutionCache
	{
		FGraphExecutionCache();

		void AddStructReferencedObjects(FReferenceCollector& Collector);

		// Must be equal to 
		TObjectPtr<UPCGData> Data[ExecutionCacheSize];
	};

	/** Per graph execution cache, gets emptied when executor has no more work to do */
	UE::FSpinLock GraphExecutionCachesLock;
	TMap<FPCGTaskId, FGraphExecutionCache> GraphExecutionCaches;

	std::atomic<bool> bNeedToExecuteTasksEnded = false;

	/** Runtime information */
	int32 CurrentlyUsedThreads = 0;

#if WITH_EDITOR
	TWeakPtr<IPCGEditorProgressNotification> GenerationProgressNotification;
	double GenerationProgressNotificationStartTime = 0.0;
	int32 GenerationProgressLastTaskNum = 0;
#endif

	TObjectPtr<UWorld> World = nullptr;

	// Temporary while the 2 schedulers exist
	enum class EExecuteVersion : uint8
	{
		None,
		V1,
		V2
	};
	EExecuteVersion ExecuteVersion = EExecuteVersion::None;

	EExecuteVersion GetExecuteVersion() const;

	// Handler that we can use as a Weak ptr to determine if the Executor is still valid
	class FGameThreadHandler : public TSharedFromThis<FGameThreadHandler>
	{
	public:
		FGameThreadHandler(FPCGGraphExecutor* InExecutor)
			: Executor(InExecutor) { }

		FPCGGraphExecutor* GetExecutor() { return Executor; }

	private:
		FPCGGraphExecutor* Executor = nullptr;
	};

	TSharedPtr<FGameThreadHandler> GameThreadHandler;
};

class FPCGFetchInputElement : public IPCGElement
{
public:
	virtual bool IsCacheable(const UPCGSettings* InSettings) const override { return false; }
	virtual bool CanExecuteOnlyOnMainThread(FPCGContext* Context) const override { return true; }

protected:
	virtual bool ExecuteInternal(FPCGContext* Context) const override;
	virtual bool IsPassthrough(const UPCGSettings* InSettings) const override { return true; }
};

class FPCGPreGraphElement : public IPCGElement
{
public:
	virtual bool IsCacheable(const UPCGSettings* InSettings) const override { return false; }
	virtual bool CanExecuteOnlyOnMainThread(FPCGContext* Context) const override { return true; }
protected:
	virtual bool ExecuteInternal(FPCGContext* Context) const override;
	virtual bool IsPassthrough(const UPCGSettings* InSettings) const override { return true; }
};

class FPCGGenericElement : public IPCGElement
{
public:
	using FContextAllocator = TFunction<FPCGContext*(const FPCGDataCollection&, TWeakObjectPtr<UPCGComponent>, const UPCGNode*)>;

	FPCGGenericElement(
		TFunction<bool(FPCGContext*)> InOperation,
		const FContextAllocator& InContextAllocator = (FContextAllocator)[](const FPCGDataCollection&, TWeakObjectPtr<UPCGComponent>, const UPCGNode*)
	{
		return new FPCGContext();
	});

	FPCGGenericElement(
		TFunction<bool(FPCGContext*)> InOperation,
		TFunction<void(FPCGContext*)> InAbortOperation,
		const FContextAllocator& InContextAllocator = (FContextAllocator)[](const FPCGDataCollection&, TWeakObjectPtr<UPCGComponent>, const UPCGNode*)
	{
		return new FPCGContext();
	});
	
	virtual FPCGContext* Initialize(const FPCGDataCollection& InputData, TWeakObjectPtr<UPCGComponent> SourceComponent, const UPCGNode* Node) override;

	virtual bool IsCacheable(const UPCGSettings* InSettings) const override { return false; }
	virtual bool CanExecuteOnlyOnMainThread(FPCGContext* Context) const override { return true; }

protected:
	// Important note: generic elements must always be run on the main thread
	// as most of these will impact the editor in some way (loading, unloading, saving)
	virtual bool ExecuteInternal(FPCGContext* Context) const override;
	virtual void AbortInternal(FPCGContext* Context) const override;
	virtual bool IsCancellable() const override { return false; }

#if WITH_EDITOR
	virtual bool ShouldLog() const override { return false; }
#endif

private:
	TFunction<bool(FPCGContext*)> Operation;
	TFunction<void(FPCGContext*)> AbortOperation;

	/** Creates a context object for this element. */
	FContextAllocator ContextAllocator;
};

/** Context for linkage element which marshalls data across hierarchical generation grids. */
struct FPCGGridLinkageContext : public FPCGContext
{
	/** If we require data from a component that is not generated, we schedule it once to see if we can get the data later. */
	bool bScheduledGraph = false;
};

namespace PCGGraphExecutor
{
	/** Marshals data across grid sizes at execution time. */
	class FPCGGridLinkageElement : public FPCGGenericElement
	{
	public:
		FPCGGridLinkageElement(TFunction<bool(FPCGContext*)> InOperation, const FContextAllocator& InContextAllocator, EPCGHiGenGrid InFromGrid, EPCGHiGenGrid InToGrid, EPCGHiGenGrid InGenerationGrid, const FString& InResourceKey, const UPCGPin* InUpstreamPin)
			: FPCGGenericElement(InOperation, InContextAllocator)
			, FromGrid(InFromGrid)
			, ToGrid(InToGrid)
			, GenerationGrid(InGenerationGrid)
			, ResourceKey(InResourceKey)
		{
			if (IsValid(InUpstreamPin))
			{
				UpstreamPin = TWeakObjectPtr(InUpstreamPin);
			}
		}

		//~Begin IPCGElement interface
		virtual bool IsGridLinkage() const override { return true; }
		//~End IPCGElement interface

		const UPCGPin* GetUpstreamPin() const { return UpstreamPin.Get(); }

#if WITH_EDITOR
		/** Return true if the grid sizes & path match. */
		bool operator==(const FPCGGridLinkageElement& Other) const;
#endif

	private:
		// These values are stored here so that we can compare two grid linkage elements for equivalence.
		EPCGHiGenGrid FromGrid = EPCGHiGenGrid::Uninitialized;
		EPCGHiGenGrid ToGrid = EPCGHiGenGrid::Uninitialized;

		// This tells us which side of the From/To relationship this grid linkage is on.
		EPCGHiGenGrid GenerationGrid = EPCGHiGenGrid::Uninitialized; 

		FString ResourceKey;
		TWeakObjectPtr<const UPCGPin> UpstreamPin = nullptr;
	};

	/** Compares InFromGrid and InToGrid and performs data storage/retrieval as necessary to marshal data across execution grids. */
	bool ExecuteGridLinkage(
		EPCGHiGenGrid InGenerationGrid,
		EPCGHiGenGrid InFromGrid,
		EPCGHiGenGrid InToGrid,
		const FString& InResourceKey,
		FName InUpstreamPinLabel,
		FPCGGridLinkageContext* InContext);
}

UCLASS(ClassGroup = (Procedural))
class UPCGGridLinkageSettings : public UPCGSettings
{
	GENERATED_BODY()

public:
	UPCGGridLinkageSettings();

protected:
	virtual FPCGElementPtr CreateElement() const override;

public:
	UPROPERTY()
	EPCGHiGenGrid FromGrid = EPCGHiGenGrid::Uninitialized;

	UPROPERTY()
	EPCGHiGenGrid ToGrid = EPCGHiGenGrid::Uninitialized;

	UPROPERTY()
	EPCGHiGenGrid GenerationGrid = EPCGHiGenGrid::Uninitialized;

	UPROPERTY()
	FString ResourceKey;

	UPROPERTY()
	TSoftObjectPtr<const UPCGPin> UpstreamPin = nullptr;
};

