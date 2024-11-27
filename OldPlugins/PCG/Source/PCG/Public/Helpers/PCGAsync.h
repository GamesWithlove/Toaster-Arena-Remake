// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Helpers/PCGAsyncState.h"

#include "Async/Async.h"
#include "Containers/Array.h"
#include "Containers/Map.h"
#include "Containers/MpscQueue.h"
#include "Tasks/Task.h"

#include <atomic>

struct FPCGContext;
struct FPCGPoint;

namespace FPCGAsync
{
	namespace ConsoleVar
	{
		extern PCG_API TAutoConsoleVariable<bool> CVarDisableAsyncTimeSlicing;
		extern PCG_API TAutoConsoleVariable<bool> CVarDisableAsyncTimeSlicingOnGameThread;
		extern PCG_API TAutoConsoleVariable<float> CVarAsyncOutOfTickBudgetInMilliseconds;
		extern PCG_API TAutoConsoleVariable<int32> CVarAsyncOverrideChunkSize;
	};

	/** 
	* Helper to do simple point processing loops
	* @param Context - The context containing the information about how many tasks to launch
	* @param NumIterations - The number of calls that will be done to the provided function, also an upper bound on the number of points generated
	* @param OutPoints - The array in which the results will be written to. Note that the array will be cleared before execution
	* @param PointFunc - A function that has the index [0; NumIterations] and has to write to the point & return true when the current call generates a point
	*/
	PCG_API void AsyncPointProcessing(FPCGContext* Context, int32 NumIterations, TArray<FPCGPoint>& OutPoints, const TFunction<bool(int32, FPCGPoint&)>& PointFunc);
	
	/** 
	* Helper to do simple point processing loops
	* @param Context - The context containing the information about how many tasks to launch
	* @param InPoints - The array in which the source points will be read from
	* @param OutPoints - The array in which the results will be written to. Note that the array will be cleared before execution
	* @param PointFunc - A function that has the input point and has to write to the output point & return true when the current call generates a point
	*/
	PCG_API void AsyncPointProcessing(FPCGContext* Context, const TArray<FPCGPoint>& InPoints, TArray<FPCGPoint>& OutPoints, const TFunction<bool(const FPCGPoint&, FPCGPoint&)>& PointFunc);

	/**
	* Helper to do simple point filtering loops
	* @param Context - The context containing the information about how many tasks to launch
	* @param NumIterations - The number of calls that will be done to the provided function, also an upper bound on the number of points generated
	* @param InFilterPoints - The array in which the in-filter results will be written to. Note that the array will be cleared before execution
	* @param OutFilterPoints - The array in which the out-filter results will be written to. Note that the array will be cleared before execution
	* @param PointFunc - A function that has the index [0; NumIterations] and has to write to the point & return true when the current call generates a point
	*/
	PCG_API void AsyncPointFilterProcessing(FPCGContext* Context, int32 NumIterations, TArray<FPCGPoint>& InFilterPoints, TArray<FPCGPoint>& OutFilterPoints, const TFunction<bool(int32, FPCGPoint&, FPCGPoint&)>& PointFunc);

	/**
	* Helper to do simple 1:N point processing loops
	* @param Context - The context containing the information about how many tasks to launch
	* @param NumIterations - The number of calls that will be done to the provided function, also an upper bound on the number of points generated
	* @param OutPoints - The array in which the results will be written to. Note that the array will be cleared before execution
	* @param PointFunc - A function that has the index [0; NumIterations] and has to write to the point & return true when the current call generates a point
	*/
	PCG_API void AsyncMultiPointProcessing(FPCGContext* Context, int32 NumIterations, TArray<FPCGPoint>& OutPoints, const TFunction<TArray<FPCGPoint>(int32)>& PointFunc);

	namespace Private
	{
	template <typename InitializeFunc, typename InnerLoopFunc, typename MoveDataRangeFunc, typename FinishedFunc>
	bool AsyncProcessing(FPCGAsyncState& AsyncState, int32 NumIterations, InitializeFunc&& Initialize, InnerLoopFunc&& IterationInnerLoop, MoveDataRangeFunc&& MoveDataRange, FinishedFunc&& Finished, const bool bInEnableTimeSlicing, const int32 InChunkSize, const bool bAllowChunkSizeOverride)
	{
		TRACE_CPUPROFILER_EVENT_SCOPE(FPCGAsync::AsyncProcessing);

		const int32 OverrideChunkSize = ConsoleVar::CVarAsyncOverrideChunkSize.GetValueOnAnyThread();
		const int32 ChunkSize = bAllowChunkSizeOverride && OverrideChunkSize > 0 ? OverrideChunkSize : InChunkSize;

		const bool bIsInGameThread = IsInGameThread();
		const bool bEnableTimeSlicing = bInEnableTimeSlicing && ((bIsInGameThread && !ConsoleVar::CVarDisableAsyncTimeSlicingOnGameThread.GetValueOnAnyThread()) || (!bIsInGameThread && !ConsoleVar::CVarDisableAsyncTimeSlicing.GetValueOnAnyThread()));
				

		if (AsyncState.NumAvailableTasks == 0 || ChunkSize <= 0 || NumIterations <= 0)
		{
			// Invalid request
			return true;
		}

		const int32 ChunksNumber = 1 + ((NumIterations - 1) / ChunkSize);

		if (AsyncState.CurrentChunkToCollapse >= ChunksNumber)
		{
			// Nothing left to do
			return true;
		}

		if (!AsyncState.bStarted)
		{
			TRACE_CPUPROFILER_EVENT_SCOPE(FPCGAsync::Private::AsyncProcessing::Initialize);

			Initialize();

			AsyncState.bStarted = true;

			// At the beginning, dispatch the chunks that each task needs to process.
			// It will be stored on the AsyncState so that it can be reused.
			// Each task will update its current counter directly in the AsyncState.
			// It's OK to not protect it since they all will read/write from different place in memory.

			int32 NumTasks = ChunksNumber;
			if (AsyncState.NumAvailableTasks > 0)
			{
				NumTasks = FMath::Min(AsyncState.NumAvailableTasks, NumTasks);
			}

			const int32 IterationsPerTask = ChunksNumber / NumTasks;
			
			// Some tasks will have an extra chunk of work if NumTasks doesn't divide ChunksNumber.
			const int32 ExtraChunkLimit = ChunksNumber - (IterationsPerTask * NumTasks);

			// Main thread is also doing work.
			const int32 NumFutures = NumTasks - 1;
			if (NumFutures != 0)
			{
				int32 Count = 0;
				AsyncState.TasksChunksStartEnd.Reserve(NumTasks);
				for (int32 i = 0; i < NumTasks; ++i)
				{
					const int32 NumChunkForThisTask = i < ExtraChunkLimit ? IterationsPerTask + 1 : IterationsPerTask;
					AsyncState.TasksChunksStartEnd.Emplace_GetRef(Count, Count + NumChunkForThisTask);
					Count += NumChunkForThisTask;
				}

				check(Count == ChunksNumber);
			}
		}

		const int32 NumFutures = FMath::Max(0, AsyncState.TasksChunksStartEnd.Num() - 1);

		// Synchronisation structure to be shared between async tasks and collapsing main thread.
		struct FSynchroStruct 
		{
			// Atomic to indicate tasks to stop processing new chunks.
			std::atomic<bool> bQuit = false;

			// Queue for worker to indicate the current chunk that was processed and the number of elements written.
			// Threadsafe for MPSC: Multiple Producers (async tasks) and Single Consumer (collapsing task).
			TMpscQueue<TPair<int32, int32>> ChunkProcessedIndexAndNumElementsWrittenQueue;
		};

		// We won't stop if we are not time slicing.
		auto ShouldStop = [&AsyncState, bEnableTimeSlicing]() -> bool
		{
			return bEnableTimeSlicing && AsyncState.ShouldStop();
		};

		// Main thread will either work if there is no future, or work and collapse arrays if there are some.
		if (NumFutures == 0)
		{
			// Main thread is working
			check(ChunksNumber > 0);

			// Do at least one run, as we could fall into an infinite loop if we always have to stop before doing anything.
			do
			{
				const int32 StartReadIndex = AsyncState.CurrentChunkToCollapse * ChunkSize;
				const int32 StartWriteIndex = AsyncState.AsyncCurrentWriteIndex;
				const int32 Count = FMath::Min(ChunkSize, NumIterations - StartReadIndex);

				check(Count > 0);

				int32 NumElementsWritten;

				{
					TRACE_CPUPROFILER_EVENT_SCOPE(FPCGAsync::Private::AsyncProcessing::IterationInnerLoop);

					NumElementsWritten = IterationInnerLoop(StartReadIndex, StartWriteIndex, Count);
				}

				AsyncState.AsyncCurrentWriteIndex += NumElementsWritten;
			} while (++AsyncState.CurrentChunkToCollapse < ChunksNumber && !ShouldStop());
		}
		else
		{
			// Main thread is collapsing
			// First start the futures
			FSynchroStruct SynchroStruct{};

			// Futures are not returning anything.
			TArray<UE::Tasks::TTask<void>> AsyncTasks;
			AsyncTasks.Reserve(NumFutures);

			// A job task will pick up the chunk to process, do the work on it, and push in the queue info that it processed the chunk and how many points it has written.
			auto JobTask = [&IterationInnerLoop, &SynchroStruct, ChunkSize, NumIterations](const int32 CurrentChunkToProcess)
			{
				const int32 StartReadIndex = CurrentChunkToProcess * ChunkSize;
				// We write in the same "memory space" with the async task (in preallocated output array) and will be collapsed by the main thread.
				const int32 StartWriteIndex = StartReadIndex;
				const int32 Count = FMath::Min(ChunkSize, NumIterations - StartReadIndex);

				check(Count > 0);
				int32 NumElementsWritten;

				{
					TRACE_CPUPROFILER_EVENT_SCOPE(FPCGAsync::Private::AsyncProcessing::InnerLoop);

					NumElementsWritten = IterationInnerLoop(StartReadIndex, StartWriteIndex, Count);
				}

				SynchroStruct.ChunkProcessedIndexAndNumElementsWrittenQueue.Enqueue(CurrentChunkToProcess, NumElementsWritten);
			};

			// Starting all the tasks, only if the associated task has still some work to do.
			for (int32 TaskIndex = 0; TaskIndex < NumFutures; ++TaskIndex)
			{
				TRACE_CPUPROFILER_EVENT_SCOPE(FPCGAsync::Private::AsyncProcessing::StartingTasks);

				if (AsyncState.TasksChunksStartEnd[TaskIndex].Get<0>() == AsyncState.TasksChunksStartEnd[TaskIndex].Get<1>())
				{
					// No work left to do.
					continue;
				}

				AsyncTasks.Emplace(UE::Tasks::Launch(UE_SOURCE_LOCATION, [&JobTask, &SynchroStruct, &StartEnd = AsyncState.TasksChunksStartEnd[TaskIndex]]() -> void
				{
					// Do at least one run, as we could fall into an infinite loop if we always have to stop before doing anything.
					// Quit if we have no more work to do or we were told to stop.
					do
					{
						JobTask(StartEnd.Get<0>()++);
					} while (!SynchroStruct.bQuit && StartEnd.Get<0>() != StartEnd.Get<1>());
				}));
			}

			auto FlushQueue = [&SynchroStruct, &AsyncState]()
			{
				TPair<int32, int32> QueueItem;
				while (SynchroStruct.ChunkProcessedIndexAndNumElementsWrittenQueue.Dequeue(QueueItem))
				{
					AsyncState.ChunkToNumElementsWrittenMap.Add(QueueItem);
				}
			};

			// Collapsing needs to be done in order, so we have a map between chunk index and the number of elements written for this chunk.
			// Note that we need to collpase because points can be discarded, so we can have less points "kept" than the chunk size.
			// Do at least one run, as we could fall into an infinite loop if we always have to stop before doing anything.
			bool bHasRunOnce = false;
			while (true)
			{
				// Either we should stop because the time has elapsed or all workloads have been processed
				if (bHasRunOnce && (ShouldStop() || SynchroStruct.bQuit))
				{
					SynchroStruct.bQuit = true;

					{
						TRACE_CPUPROFILER_EVENT_SCOPE(FPCGAsync::AsyncProcessing::Wait);
						// Wait for all futures to finish their job
						UE::Tasks::Wait(AsyncTasks);
					}

					// Make sure to dequeue everything
					FlushQueue();

					// Exit
					break;
				}

				bHasRunOnce = true;

				// Try to flush queue before trying anything.
				FlushQueue();
				
				// If we have work to do, do it.
				if (AsyncState.TasksChunksStartEnd.Last().Get<0>() != AsyncState.TasksChunksStartEnd.Last().Get<1>())
				{
					JobTask(AsyncState.TasksChunksStartEnd.Last().Get<0>()++);
					continue;
				}

				// At that point, we are on collapse duty, don't stop until we finish the collapse or we have to stop.
				// Don't check stop too often.
				constexpr int32 NumCheckStop = 20;
				int32 CheckStop = 0;
				while (AsyncState.CurrentChunkToCollapse != ChunksNumber)
				{
					if (++CheckStop == NumCheckStop)
					{
						CheckStop = 0;
						if (ShouldStop())
						{
							SynchroStruct.bQuit = true;
							break;
						}
					}

					// Try to remove the current chunk we need to process. If it is not in the map it means it has not yet been processed (or dequeued)
					// so flush the queue and try again.
					int32 NumberOfElementsWritten = 0;
					if (!AsyncState.ChunkToNumElementsWrittenMap.RemoveAndCopyValue(AsyncState.CurrentChunkToCollapse, NumberOfElementsWritten))
					{
						FlushQueue();
						continue;
					}

					TRACE_CPUPROFILER_EVENT_SCOPE(FPCGAsync::AsyncProcessing::CollapsingNewData);
					const int32 ReadStartIndexForCurrentChunkToCollapse = AsyncState.CurrentChunkToCollapse * ChunkSize;
					check(NumberOfElementsWritten <= ChunkSize);

					// If ReadStartIndexForCurrentChunkToCollapse == AsyncState.AsyncCurrentWriteIndex, no need to copy, all elements
					// are already at the right place
					if (ReadStartIndexForCurrentChunkToCollapse == AsyncState.AsyncCurrentWriteIndex)
					{
						AsyncState.AsyncCurrentWriteIndex += NumberOfElementsWritten;
					}
					else
					{
						// Otherwise collapse
						MoveDataRange(ReadStartIndexForCurrentChunkToCollapse, AsyncState.AsyncCurrentWriteIndex, NumberOfElementsWritten);
						AsyncState.AsyncCurrentWriteIndex += NumberOfElementsWritten;
					}

					++AsyncState.CurrentChunkToCollapse;
				}

				// If we reach that point, it means we finished the collapse or we ran out of time. So indicate to stop.
				SynchroStruct.bQuit = true;
			}
		}

		const bool bIsDone = AsyncState.CurrentChunkToCollapse == ChunksNumber;

		check(bIsDone || bEnableTimeSlicing);

		if (bIsDone)
		{
			TRACE_CPUPROFILER_EVENT_SCOPE(FPCGAsync::Private::AsyncProcessing::Finished);

			Finished(AsyncState.AsyncCurrentWriteIndex);
			AsyncState.Reset();
		}

		return bIsDone;
	}
	}

	/**
	* A Helper for generic parallel loops, with support for timeslicing, specialized to work on ranges. This version only uses indexes allowing more flexible usage
	* to process many arrays in parallel or use it for other batch updating.
	* 
	* Work will be separated in chunks, that will be processed in parallel. Main thread will then collapse incoming data from async tasks.
	* Will use AsyncState.ShouldStop() to stop execution if timeslicing is enabled.
	* Important info: 
	*   - We will finish to process and collapse data for all data already in process, even if we need to stop. To mitigate this, try to use small chunk sizes.
	*   - To avoid infinite loops (when we should stop even before starting working), we will at least process 1 chunk of data per thread.
	*   - To have async tasks, you need to have at least 3 available threads (main thread + 2 futures). Otherwise, we will only process on the main thread, without collapse.
	* 
	* @param AsyncState - The context containing the information about how many tasks we can launch, async read/write index for the current job and a function to know if we need to stop processing.
	* @param NumIterations - The number of calls that will be done to the provided function, also an upper bound on the number of data generated.
	* @param Initialize - Signature: void(). A function that will be called once on the first timeslice, where you can reserve data for processing
	* @param ProcessRange - Signature: int32(int32 StartReadIndex, int32 StartWriteIndex, int32 Count). A function that processes a range of values and returns the number of written values 
	* @param MoveDataRange - Signature: void(int32 ReadIndex, int32 WriteIndex, int32 Count). If the processing filters points, this will be used to move elements in chunk from one range to another 
	* @param Finished - Signature: void(int32 Count). Called once on finished, and tells you the total count of points written.
	* @param bEnableTimeSlicing - If false, we will not stop until all the processing is done.
	* @param ChunkSize - Size of the chunks to cut the input data with
	* @param bAllowChunkSizeOverride - If true, ChunkSize can be overridden by 'pcg.AsyncOverrideChunkSize' CVar
	* @returns true if the processing is done, false otherwise. Use this to know if you need to reschedule the task.
	*/
	template <typename InitializeFunc, typename ProcessRangeFunc, typename MoveDataRangeFunc, typename FinishedFunc>
	bool AsyncProcessingRangeEx(FPCGAsyncState* AsyncState, int32 NumIterations, InitializeFunc&& Initialize, ProcessRangeFunc&& ProcessRange, MoveDataRangeFunc&& MoveDataRange, FinishedFunc&& Finished, const bool bEnableTimeSlicing, const int32 ChunkSize = 64, const bool bAllowChunkSizeOverride = true)
	{
		if (AsyncState && !AsyncState->bIsRunningAsyncCall)
		{
			AsyncState->bIsRunningAsyncCall = true;
			const bool bIsDone = Private::AsyncProcessing(*AsyncState, NumIterations, Initialize, ProcessRange, MoveDataRange, Finished, bEnableTimeSlicing, ChunkSize, bAllowChunkSizeOverride);
			AsyncState->bIsRunningAsyncCall = false;
			return bIsDone;
		}
		else
		{
			// Can't use time slicing without an async state or while running in another async call (it will mess up with async indexes). 
			// We also force using one thread (the current one).
			FPCGAsyncState DummyState;
			DummyState.NumAvailableTasks = 1;
			DummyState.bIsRunningAsyncCall = true;
			return Private::AsyncProcessing(DummyState, NumIterations, Initialize, ProcessRange, MoveDataRange, Finished, /*bEnableTimeSlicing=*/false, ChunkSize, bAllowChunkSizeOverride);
		}
	}

	/**
	* A Helper for generic parallel loops, with support for timeslicing, specialized to work on ranges. This version only uses indexes allowing more flexible usage
	* to process many arrays in parallel or use it for other batch updating.
	* 
	* This version also does not support removing elements and is expects a 1:1 mapping. This just removes some lambdas required to support
	* that use case.
	* 
	* Work will be separated in chunks, that will be processed in parallel. Main thread will then collapse incoming data from async tasks.
	* Will use AsyncState.ShouldStop() to stop execution if timeslicing is enabled.
	* Important info: 
	*   - We will finish to process and collapse data for all data already in process, even if we need to stop. To mitigate this, try to use small chunk sizes.
	*   - To avoid infinite loops (when we should stop even before starting working), we will at least process 1 chunk of data per thread.
	*   - To have async tasks, you need to have at least 3 available threads (main thread + 2 futures). Otherwise, we will only process on the main thread, without collapse.
	* 
	* @param AsyncState - The context containing the information about how many tasks we can launch, async read/write index for the current job and a function to know if we need to stop processing.
	* @param NumIterations - The number of calls that will be done to the provided function, also an upper bound on the number of data generated.
	* @param Initialize - Signature: void(). A function that will be called once on the first timeslice, where you can reserve data for processing
	* @param Finished - Signature: void(int32 Count). Called once on finished, and tells you the total count of points written.
	* @param bEnableTimeSlicing - If false, we will not stop until all the processing is done.
	* @param ChunkSize - Size of the chunks to cut the input data with
	* @param bAllowChunkSizeOverride - If true, ChunkSize can be overridden by 'pcg.AsyncOverrideChunkSize' CVar
	* @returns true if the processing is done, false otherwise. Use this to know if you need to reschedule the task.
	*/
	template <typename InitializeFunc, typename ProcessRangeFunc>
	bool AsyncProcessingOneToOneRangeEx(FPCGAsyncState* AsyncState, int32 NumIterations, InitializeFunc&& Initialize, ProcessRangeFunc&& ProcessRange, const bool bEnableTimeSlicing, const int32 ChunkSize = 64, const bool bAllowChunkSizeOverride = true)
	{
		auto MoveDataRange = [](int32, int32, int32) { ensure(false); };
		auto Finished = [NumIterations](int32 Count) { ensure(NumIterations == Count); };

		if (AsyncState && !AsyncState->bIsRunningAsyncCall)
		{
			AsyncState->bIsRunningAsyncCall = true;
			const bool bIsDone = Private::AsyncProcessing(*AsyncState, NumIterations, Initialize, ProcessRange, MoveDataRange, Finished, bEnableTimeSlicing, ChunkSize, bAllowChunkSizeOverride);
			AsyncState->bIsRunningAsyncCall = false;
			return bIsDone;
		}
		else
		{
			// Can't use time slicing without an async state or while running in another async call (it will mess up with async indexes). 
			// We also force using one thread (the current one).
			FPCGAsyncState DummyState;
			DummyState.NumAvailableTasks = 1;
			DummyState.bIsRunningAsyncCall = true;
			return Private::AsyncProcessing(DummyState, NumIterations, Initialize, ProcessRange, MoveDataRange, Finished, /*bEnableTimeSlicing=*/false, ChunkSize, bAllowChunkSizeOverride);
		}
	}

	/**
	* A Helper for generic parallel loops, with support for timeslicing. This version only uses indexes allowing more flexible usage
	* to process many arrays in parallel or use it for other batch updating.
	* 
	* Work will be separated in chunks, that will be processed in parallel. Main thread will then collapse incoming data from async tasks.
	* Will use AsyncState.ShouldStop() to stop execution if timeslicing is enabled.
	* Important info: 
	*   - We will finish to process and collapse data for all data already in process, even if we need to stop. To mitigate this, try to use small chunk sizes.
	*   - To avoid infinite loops (when we should stop even before starting working), we will at least process 1 chunk of data per thread.
	*   - To have async tasks, you need to have at least 3 available threads (main thread + 2 futures). Otherwise, we will only process on the main thread, without collapse.
	* 
	* @param AsyncState - The context containing the information about how many tasks we can launch, async read/write index for the current job and a function to know if we need to stop processing.
	* @param NumIterations - The number of calls that will be done to the provided function, also an upper bound on the number of data generated.
	* @param Initialize - Signature: void(). A function that will be called once on the first timeslice, where you can reserve data for processing
	* @param ProcessElement - Signature: bool(int32 ReadIndex, int32 WriteIndex). A function that processes  
	* @param MoveData - Signature: void(int32 ReadIndex, int32 WriteIndex). If the processing filters points, this will be used to move elements from one index to another 
	* @param Finished - Signature: void(int32 Count). Called once on finished, and tells you the total count of points written.
	* @param bEnableTimeSlicing - If false, we will not stop until all the processing is done.
	* @param ChunkSize - Size of the chunks to cut the input data with 
	* @param bAllowChunkSizeOverride - If true, ChunkSize can be overridden by 'pcg.AsyncOverrideChunkSize' CVar
	* @returns true if the processing is done, false otherwise. Use this to know if you need to reschedule the task.
	*/
	template <typename InitializeFunc, typename ProcessElementFunc, typename MoveFunc, typename FinishedFunc>
	bool AsyncProcessingEx(FPCGAsyncState* AsyncState, int32 NumIterations, InitializeFunc&& Initialize, ProcessElementFunc&& ProcessElement, MoveFunc&& MoveData, FinishedFunc&& Finished, const bool bEnableTimeSlicing, const int32 ChunkSize = 64, const bool bAllowChunkSizeOverride = true)
	{
		auto IterationInnerLoop = [Func = MoveTemp(ProcessElement)](int32 StartReadIndex, int32 StartWriteIndex, int32 Count) -> int32
		{
			int32 NumPointsWritten = 0;

			for (int32 i = 0; i < Count; ++i)
			{
				if (Func(StartReadIndex + i, StartWriteIndex + NumPointsWritten))
				{
					++NumPointsWritten;
				}
			}

			return NumPointsWritten;
		};

		auto MoveDataRange = [Func = MoveTemp(MoveData)](int32 ReadIndex, int32 WriteIndex, int32 Count)
		{
			for (int Index = 0; Index < Count; ++Index)
			{
				Func(ReadIndex + Index, WriteIndex + Index);
			}
		};

		return AsyncProcessingRangeEx(AsyncState, NumIterations, Initialize, IterationInnerLoop, MoveDataRange, Finished, bEnableTimeSlicing, ChunkSize, bAllowChunkSizeOverride);
	}
 
 	/**
	* A Helper for generic parallel loops, with support for timeslicing. This version only uses indexes allowing more flexible usage
	* to process any data format.
	* 
	* This version also does not support removing elements and is expects a 1:1 mapping. This just removes some lambdas required to support
	* that use case.
	* 
	* Work will be separated in chunks, that will be processed in parallel. Main thread will then collapse incoming data from async tasks.
	* Will use AsyncState.ShouldStop() to stop execution if timeslicing is enabled.
	* Important info: 
	*   - We will finish to process and collapse data for all data already in process, even if we need to stop. To mitigate this, try to use small chunk sizes.
	*   - To avoid infinite loops (when we should stop even before starting working), we will at least process 1 chunk of data per thread.
	*   - To have async tasks, you need to have at least 3 available threads (main thread + 2 futures). Otherwise, we will only process on the main thread, without collapse.
	* 
	* @param AsyncState - The context containing the information about how many tasks we can launch, async read/write index for the current job and a function to know if we need to stop processing.
	* @param NumIterations - The number of calls that will be done to the provided function, also an upper bound on the number of data generated.
	* @param Initialize - Signature: void(). A function that will be called once on the first timeslice, where you can reserve data.
	* @param ProcessElement - Signature: bool(int32 ReadIndex, int32 WriteIndex). A function that processes  
	* @param bEnableTimeSlicing - If false, we will not stop until all the processing is done.
	* @param ChunkSize - Size of the chunks to cut the input data with
	* @param bAllowChunkSizeOverride - If true, ChunkSize can be overridden by 'pcg.AsyncOverrideChunkSize' CVar
	* @returns true if the processing is done, false otherwise. Use this to know if you need to reschedule the task.
	*/
 	template <typename InitializeFunc, typename ProcessElementFunc>
	bool AsyncProcessingOneToOneEx(FPCGAsyncState* AsyncState, int32 NumIterations, InitializeFunc&& Initialize, ProcessElementFunc&& ProcessElement, const bool bEnableTimeSlicing, const int32 ChunkSize = 64, const bool bAllowChunkSizeOverride = true)
	{
		auto IterationInnerLoop = [Func = MoveTemp(ProcessElement)](int32 StartReadIndex, int32 StartWriteIndex, int32 Count) -> int32
		{
			for (int32 i = 0; i < Count; ++i)
			{
				Func(StartReadIndex + i, StartWriteIndex + i);
			}

			return Count;
		};

		auto MoveDataRange = [](int32, int32, int32) { ensure(false); };
		auto Finished = [NumIterations](int32 Count) { ensure(NumIterations == Count); };

		if (AsyncState && !AsyncState->bIsRunningAsyncCall)
		{
			AsyncState->bIsRunningAsyncCall = true;
			const bool bIsDone = Private::AsyncProcessing(*AsyncState, NumIterations, Initialize, IterationInnerLoop, MoveDataRange, Finished, bEnableTimeSlicing, ChunkSize, bAllowChunkSizeOverride);
			AsyncState->bIsRunningAsyncCall = false;
			return bIsDone;
		}
		else
		{
			// Can't use time slicing without an async state or while running in another async call (it will mess up with async indexes). 
			// We also force using one thread (the current one).
			FPCGAsyncState DummyState;
			DummyState.NumAvailableTasks = 1;
			DummyState.bIsRunningAsyncCall = true;
			return Private::AsyncProcessing(DummyState, NumIterations, Initialize, IterationInnerLoop, MoveDataRange, Finished, /*bEnableTimeSlicing=*/false, ChunkSize, bAllowChunkSizeOverride);
		}
	}

	/**
	* Helper for generic parallel loops, with support for timeslicing. This version takes a data type, expecting processing on an
	* array of that type.
	* 
	* Work will be separated in chunks, that will be processed in parallel. Main thread will then collapse incoming data from async tasks.
	* Will use AsyncState.ShouldStop() to stop execution if timeslicing is enabled.
	* Important info: 
	*   - We will finish to process and collapse data for all data already in process, even if we need to stop. To mitigate this, try to use small chunk sizes.
	*   - To avoid infinite loops (when we should stop even before starting working), we will at least process 1 chunk of data per thread.
	*   - To have async tasks, you need to have at least 3 available threads (main thread + 2 futures). Otherwise, we will only process on the main thread, without collapse.
	* 
	* @param AsyncState - The context containing the information about how many tasks we can launch, async read/write index for the current job and a function to know if we need to stop processing.
	* @param NumIterations - The number of calls that will be done to the provided function, also an upper bound on the number of data generated.
	* @param OutData - The array in which the results will be written to. Note that the array will be cleared before execution.
	* @param Func - Signature: bool(int32, OutputType&). A function that has the index [0; NumIterations] and has to write to some data & return false if the result should be discarded. 
	* @param bEnableTimeSlicing - If false, we will not stop until all the processing is done.
	* @param ChunkSize - Size of the chunks to cut the input data with
	* @param bAllowChunkSizeOverride - If true, ChunkSize can be overridden by 'pcg.AsyncOverrideChunkSize' CVar
	* @returns true if the processing is done, false otherwise. Use this to know if you need to reschedule the task.
	*/
	template <typename OutputType, typename Func, typename AllocatorType = FDefaultAllocator>
	bool AsyncProcessing(FPCGAsyncState* AsyncState, int32 NumIterations, TArray<OutputType, AllocatorType>& OutData, Func&& InFunc, const bool bEnableTimeSlicing, const int32 ChunkSize = 64, bool bAllowChunkSizeOverride = true)
	{
		auto Initialize = [&OutData, NumIterations]()
		{
			// Array will be shrunk at the end of the processing.
			OutData.SetNumUninitialized(NumIterations, EAllowShrinking::No);
		};
		
		auto IterationInnerLoop = [Func = MoveTemp(InFunc), &OutData](int32 ReadIndex, int32 WriteIndex) -> int32
		{
			return Func(ReadIndex, OutData[WriteIndex]);
		};

		auto MoveData = [&OutData](int32 ReadIndex, int32 WriteIndex)
		{
			OutData[WriteIndex] = std::move(OutData[ReadIndex]);
		};

		auto Finished = [&OutData](int32 Count)
		{
			// Shrinking can have a big impact on the performance, but without it, we can also hold a big chunk of wasted memory.
			// Might revisit later if the performance impact is too big.
			OutData.SetNum(Count);
		};

		return AsyncProcessingEx(AsyncState, NumIterations, Initialize, IterationInnerLoop, MoveData, Finished, bEnableTimeSlicing, ChunkSize, bAllowChunkSizeOverride);
	}
}
