// Copyright Epic Games, Inc. All Rights Reserved.

#include "Helpers/PCGAsync.h"

#include "PCGContext.h"
#include "PCGPoint.h"

#include "Tasks/Task.h"

namespace FPCGAsync
{
	TAutoConsoleVariable<bool> ConsoleVar::CVarDisableAsyncTimeSlicing {
		TEXT("pcg.DisableAsyncTimeSlicing"),
		false,
		TEXT("To help debug, we can disable time slicing for tasks (when executing Element from worker thread)")
	};

	TAutoConsoleVariable<bool> ConsoleVar::CVarDisableAsyncTimeSlicingOnGameThread {
		TEXT("pcg.DisableAsyncTimeSlicingOnGameThread"),
		false,
		TEXT("To help debug, we can disable time slicing for tasks (when executing Element from main thread).")
	};

	TAutoConsoleVariable<float> ConsoleVar::CVarAsyncOutOfTickBudgetInMilliseconds{
		TEXT("pcg.Async.OutOfTickBudgetInMilliseconds"),
		5.0f,
		TEXT("Allocated time in milliseconds per task when running async tasks out of tick (depends on pcg.DisableAsyncTimeSlicing being false)")
	};

	TAutoConsoleVariable<int32> ConsoleVar::CVarAsyncOverrideChunkSize{
		TEXT("pcg.AsyncOverrideChunkSize"),
		-1,
		TEXT("For quick benchmarking, we can override the value of chunk size for async processing. Any negative value is discarded.")
	};

	int32 GetNumTasks(FPCGAsyncState* AsyncState, int32 InDefaultNumTasks)
	{
		// Get number of available threads from the async state
		// Calculate Number of Tasks to spawn, if we have no AsyncState run only 1 task (reentrance)
		int32 NumTasks = AsyncState ? FMath::Max(1, InDefaultNumTasks) : 1;
		// If AsyncState limits the Max Tasks apply here
		if (AsyncState && AsyncState->NumAvailableTasks > 0)
		{
			NumTasks = FMath::Min(AsyncState->NumAvailableTasks, NumTasks);
		}

		return NumTasks;
	}

	void PrivateAsyncPointProcessing(FPCGAsyncState* AsyncState, int32 MinIterationsPerTask, int32 NumIterations, TArray<FPCGPoint>& OutPoints, const TFunction<int32(int32, int32)>& IterationInnerLoop)
	{
		TRACE_CPUPROFILER_EVENT_SCOPE(IPCGElement::AsyncPointProcessing);

		check(MinIterationsPerTask > 0 && NumIterations >= 0);
		if (MinIterationsPerTask <= 0 || NumIterations <= 0)
		{
			return;
		}

		const int32 NumTasks = GetNumTasks(AsyncState, NumIterations / MinIterationsPerTask);
		const int32 IterationsPerTask = NumIterations / NumTasks;
		const int32 NumFutures = NumTasks - 1;
		 
		{
			TRACE_CPUPROFILER_EVENT_SCOPE(IPCGElement::AsyncPointProcessing::AllocatingArray);
			// Pre-reserve the out points array
			OutPoints.SetNumUninitialized(NumIterations);
		}

		// Setup [current, last, nb points] data per dispatch
		TArray<UE::Tasks::TTask<int32>> AsyncTasks;
		AsyncTasks.Reserve(NumFutures);
		const bool bInitBPContext = (AsyncState && AsyncState->bIsCallingBlueprint);

		// Launch the async tasks
		for (int32 TaskIndex = 0; TaskIndex < NumFutures; ++TaskIndex)
		{
			const int32 StartIndex = TaskIndex * IterationsPerTask;
			const int32 EndIndex = StartIndex + IterationsPerTask;

			AsyncTasks.Emplace(UE::Tasks::Launch(UE_SOURCE_LOCATION, [&IterationInnerLoop, StartIndex, EndIndex, bInitBPContext]()
			{
				if (bInitBPContext)
				{
					GInitRunaway(); // Reset counter as threads can run multiple workloads and might not be properly reset.
				}

				return IterationInnerLoop(StartIndex, EndIndex);
			}));
		}

		// Execute last batch locally
		int32 NumPointsWrittenOnThisThread = IterationInnerLoop(NumFutures * IterationsPerTask, NumIterations);

		// Wait/Gather results & collapse points
		{
			TRACE_CPUPROFILER_EVENT_SCOPE(IPCGElement::AsyncPointProcessing::WaitAndCollapseArray);

			auto CollapsePoints = [&OutPoints](int32 RangeIndex, int32 StartPointsIndex, int32 NumPointsToCollapse)
			{
				// Move points from [StartsPointIndex, StartsPointIndex + NumberPointsAdded] to [RangeIndex, RangeIndex + NumberPointsAdded]
				if (StartPointsIndex != RangeIndex)
				{
					for (int32 MoveIndex = 0; MoveIndex < NumPointsToCollapse; ++MoveIndex)
					{
						OutPoints[RangeIndex + MoveIndex] = MoveTemp(OutPoints[StartPointsIndex + MoveIndex]);
					}
				}

				return RangeIndex + NumPointsToCollapse;
			};

			int RangeIndex = 0;
			for (int32 AsyncIndex = 0; AsyncIndex < AsyncTasks.Num(); ++AsyncIndex)
			{
				const int32 StartPointsIndex = AsyncIndex * IterationsPerTask;

				UE::Tasks::TTask<int32>& AsyncTask = AsyncTasks[AsyncIndex];
				AsyncTask.Wait();
				const int32 NumberOfPointsAdded = AsyncTask.GetResult();
				RangeIndex = CollapsePoints(RangeIndex, StartPointsIndex, NumberOfPointsAdded);
			}

			// Finally, add current thread points
			RangeIndex = CollapsePoints(RangeIndex, NumFutures * IterationsPerTask, NumPointsWrittenOnThisThread);

			OutPoints.SetNum(RangeIndex);
		}
	}

	void PrivateAsyncPointProcessing(FPCGAsyncState* AsyncState, int32 MinIterationsPerTask, int32 NumIterations, TArray<FPCGPoint>& OutPoints, const TFunction<bool(int32, FPCGPoint&)>& PointFunc)
	{
		auto IterationInnerLoop = [&PointFunc, &OutPoints](int32 StartIndex, int32 EndIndex) -> int32
		{
			TRACE_CPUPROFILER_EVENT_SCOPE(IPCGElement::AsyncPointProcessing::InnerLoop);
			int32 NumPointsWritten = 0;

			for (int32 Index = StartIndex; Index < EndIndex; ++Index)
			{
				if (PointFunc(Index, OutPoints[StartIndex + NumPointsWritten]))
				{
					++NumPointsWritten;
				}
			}

			return NumPointsWritten;
		};

		PrivateAsyncPointProcessing(AsyncState, MinIterationsPerTask, NumIterations, OutPoints, IterationInnerLoop);
	}

	void PrivateAsyncMultiPointProcessing(FPCGAsyncState* AsyncState, int32 MinIterationsPerTask, int32 NumIterations, TArray<FPCGPoint>& OutPoints, const TFunction<TArray<FPCGPoint>(int32)>& PointFunc)
	{
		TRACE_CPUPROFILER_EVENT_SCOPE(IPCGElement::AsyncMultiPointProcessing);
		check(MinIterationsPerTask > 0 && NumIterations >= 0);
		if (MinIterationsPerTask <= 0 || NumIterations <= 0)
		{
			return;
		}

		const int32 NumTasks = GetNumTasks(AsyncState, NumIterations / MinIterationsPerTask);
		const int32 IterationsPerTask = NumIterations / NumTasks;
		const int32 NumFutures = NumTasks - 1;

		auto IterationInnerLoop = [&PointFunc](int32 StartIndex, int32 EndIndex) -> TArray<FPCGPoint>
		{
			TRACE_CPUPROFILER_EVENT_SCOPE(IPCGElement::AsyncMultiPointProcessing::InnerLoop);
			TArray<FPCGPoint> OutPoints;

			for (int32 Index = StartIndex; Index < EndIndex; ++Index)
			{
				OutPoints.Append(PointFunc(Index));
			}

			return OutPoints;
		};

		TArray<UE::Tasks::TTask<TArray<FPCGPoint>>> AsyncTasks;
		AsyncTasks.Reserve(NumFutures);
		const bool bInitBPContext = (AsyncState && AsyncState->bIsCallingBlueprint);

		// Launch the async tasks
		for (int32 TaskIndex = 0; TaskIndex < NumFutures; ++TaskIndex)
		{
			const int32 StartIndex = TaskIndex * IterationsPerTask;
			const int32 EndIndex = StartIndex + IterationsPerTask;

			AsyncTasks.Emplace(UE::Tasks::Launch(UE_SOURCE_LOCATION, [&IterationInnerLoop, StartIndex, EndIndex, bInitBPContext]() -> TArray<FPCGPoint>
			{
				if (bInitBPContext)
				{
					GInitRunaway(); // Reset counter as threads can run multiple workloads and might not be properly reset.
				}

				return IterationInnerLoop(StartIndex, EndIndex);
			}));
		}

		TArray<FPCGPoint> PointsFromThisThread = IterationInnerLoop(NumFutures * IterationsPerTask, NumIterations);

		// Wait/Gather results & collapse points
		{
			TRACE_CPUPROFILER_EVENT_SCOPE(IPCGElement::AsyncMultiPointProcessing::WaitAndCollapseArray);
			for (UE::Tasks::TTask<TArray<FPCGPoint>>& AsyncTask : AsyncTasks)
			{
				AsyncTask.Wait();
				OutPoints.Append(MoveTemp(AsyncTask.GetResult()));
			}

			OutPoints.Append(MoveTemp(PointsFromThisThread));
		}
	}

	void PrivateAsyncPointFilterProcessing(FPCGAsyncState* AsyncState, int32 MinIterationsPerTask, int32 NumIterations, TArray<FPCGPoint>& InFilterPoints, TArray<FPCGPoint>& OutFilterPoints, const TFunction<bool(int32, FPCGPoint&, FPCGPoint&)>& PointFunc)
	{
		TRACE_CPUPROFILER_EVENT_SCOPE(IPCGElement::AsyncPointFilterProcessing);
		check(MinIterationsPerTask > 0 && NumIterations >= 0);
		if (MinIterationsPerTask <= 0 || NumIterations <= 0)
		{
			return;
		}

		const int32 NumTasks = GetNumTasks(AsyncState, NumIterations / MinIterationsPerTask);
		const int32 IterationsPerTask = NumIterations / NumTasks;
		const int32 NumFutures = NumTasks - 1;

		{
			TRACE_CPUPROFILER_EVENT_SCOPE(IPCGElement::AsyncPointProcessing::AllocatingArray);
			// Pre-reserve the out points array
			InFilterPoints.SetNumUninitialized(NumIterations);
			OutFilterPoints.SetNumUninitialized(NumIterations);
		}

		auto IterationInnerLoop = [&PointFunc, &InFilterPoints, &OutFilterPoints](int32 StartIndex, int32 EndIndex) -> TPair<int32, int32>
		{
			TRACE_CPUPROFILER_EVENT_SCOPE(IPCGElement::AsyncPointProcessing::InnerLoop);
			int32 NumPointsInWritten = 0;
			int32 NumPointsOutWritten = 0;

			for (int32 Index = StartIndex; Index < EndIndex; ++Index)
			{
				if (PointFunc(Index, InFilterPoints[StartIndex + NumPointsInWritten], OutFilterPoints[StartIndex + NumPointsOutWritten]))
				{
					++NumPointsInWritten;
				}
				else
				{
					++NumPointsOutWritten;
				}
			}

			return TPair<int32, int32>(NumPointsInWritten, NumPointsOutWritten);
		};

		// Setup [current, last, nb points] data per dispatch
		TArray<UE::Tasks::TTask<TPair<int32, int32>>> AsyncTasks;
		AsyncTasks.Reserve(NumFutures);
		const bool bInitBPContext = (AsyncState && AsyncState->bIsCallingBlueprint);

		// Launch the async tasks
		for (int32 TaskIndex = 0; TaskIndex < NumFutures; ++TaskIndex)
		{
			const int32 StartIndex = TaskIndex * IterationsPerTask;
			const int32 EndIndex = StartIndex + IterationsPerTask;

			AsyncTasks.Emplace(UE::Tasks::Launch(UE_SOURCE_LOCATION, [&IterationInnerLoop, StartIndex, EndIndex, bInitBPContext]() -> TPair<int32, int32>
			{
				if (bInitBPContext)
				{
					GInitRunaway(); // Reset counter as threads can run multiple workloads and might not be properly reset.
				}

				return IterationInnerLoop(StartIndex, EndIndex);
			}));
		}

		// Launch remainder on current thread
		TPair<int32, int32> NumPointsWrittenOnThisThread = IterationInnerLoop(NumFutures * IterationsPerTask, NumIterations);

		// Wait/Gather results & collapse points
		{
			TRACE_CPUPROFILER_EVENT_SCOPE(IPCGElement::AsyncPointFilterProcessing::WaitAndCollapseArray);

			auto CollapsePoints = [&InFilterPoints, &OutFilterPoints](const TPair<int32, int32>& RangeIndices, int32 StartPointsIndex, const TPair<int32, int32>& NumberOfPointsAdded) -> TPair<int32, int32>
			{
				int32 InFilterRangeIndex = RangeIndices.Key;
				int32 OutFilterRangeIndex = RangeIndices.Value;

				// Move in-filter points
				{
					int NumInFilterPoints = NumberOfPointsAdded.Key;

					if (StartPointsIndex != InFilterRangeIndex)
					{
						for (int32 MoveIndex = 0; MoveIndex < NumInFilterPoints; ++MoveIndex)
						{
							InFilterPoints[InFilterRangeIndex + MoveIndex] = MoveTemp(InFilterPoints[StartPointsIndex + MoveIndex]);
						}
					}

					InFilterRangeIndex += NumInFilterPoints;
				}

				// Move out-filter points
				{
					int NumOutFilterPoints = NumberOfPointsAdded.Value;

					if (StartPointsIndex != OutFilterRangeIndex)
					{
						for (int32 MoveIndex = 0; MoveIndex < NumOutFilterPoints; ++MoveIndex)
						{
							OutFilterPoints[OutFilterRangeIndex + MoveIndex] = MoveTemp(OutFilterPoints[StartPointsIndex + MoveIndex]);
						}
					}

					OutFilterRangeIndex += NumOutFilterPoints;
				}

				return TPair<int32, int32>(InFilterRangeIndex, OutFilterRangeIndex);
			};

			TPair<int32, int32> RangeIndices = TPair<int32, int32>(0, 0);
			for (int32 AsyncIndex = 0; AsyncIndex < AsyncTasks.Num(); ++AsyncIndex)
			{
				const int32 StartPointsIndex = AsyncIndex * IterationsPerTask;

				UE::Tasks::TTask<TPair<int32, int32>>& AsyncTask = AsyncTasks[AsyncIndex];
				AsyncTask.Wait();
				TPair<int32, int32> NumberOfPointsAdded = AsyncTask.GetResult();

				RangeIndices = CollapsePoints(RangeIndices, StartPointsIndex, NumberOfPointsAdded);
			}

			// Finally, add this thread results
			RangeIndices = CollapsePoints(RangeIndices, NumFutures * IterationsPerTask, NumPointsWrittenOnThisThread);

			InFilterPoints.SetNum(RangeIndices.Key);
			OutFilterPoints.SetNum(RangeIndices.Value);
		}
	}

	void AsyncPointProcessing(FPCGContext* Context, int32 NumIterations, TArray<FPCGPoint>& OutPoints, const TFunction<bool(int32, FPCGPoint&)>& PointFunc)
	{
		const int32 MinIterationsPerTask = 256;

		if (Context && !Context->AsyncState.bIsRunningAsyncCall)
		{
			Context->AsyncState.bIsRunningAsyncCall = true;
			PrivateAsyncPointProcessing(&Context->AsyncState, MinIterationsPerTask, NumIterations, OutPoints, PointFunc);
			Context->AsyncState.bIsRunningAsyncCall = false;
		}
		else
		{
			// Reentrant case (no async support)
			PrivateAsyncPointProcessing(nullptr, MinIterationsPerTask, NumIterations, OutPoints, PointFunc);
		}
	}

	void AsyncPointProcessing(FPCGContext* Context, const TArray<FPCGPoint>& InPoints, TArray<FPCGPoint>& OutPoints, const TFunction<bool(const FPCGPoint&, FPCGPoint&)>& PointFunc)
	{
		const int32 MinIterationsPerTask = 256;

		auto IterationInnerLoop = [&PointFunc, &InPoints, &OutPoints](int32 StartIndex, int32 EndIndex) -> int32
		{
			TRACE_CPUPROFILER_EVENT_SCOPE(IPCGElement::AsyncPointProcessing::InnerLoop);
			int32 NumPointsWritten = 0;

			for (int32 Index = StartIndex; Index < EndIndex; ++Index)
			{
				if (PointFunc(InPoints[Index], OutPoints[StartIndex + NumPointsWritten]))
				{
					++NumPointsWritten;
				}
			}

			return NumPointsWritten;
		};
				
		if (Context && !Context->AsyncState.bIsRunningAsyncCall)
		{
			Context->AsyncState.bIsRunningAsyncCall = true;
			PrivateAsyncPointProcessing(&Context->AsyncState, MinIterationsPerTask, InPoints.Num(), OutPoints, IterationInnerLoop);
			Context->AsyncState.bIsRunningAsyncCall = false;
		}
		else
		{
			// Reentrant case (no async support)
			PrivateAsyncPointProcessing(nullptr, MinIterationsPerTask, InPoints.Num(), OutPoints, IterationInnerLoop);
		}
	}
		
	void AsyncPointFilterProcessing(FPCGContext* Context, int32 NumIterations, TArray<FPCGPoint>& InFilterPoints, TArray<FPCGPoint>& OutFilterPoints, const TFunction<bool(int32, FPCGPoint&, FPCGPoint&)>& PointFunc)
	{
		const int32 MinIterationsPerTask = 256;
		if (Context && !Context->AsyncState.bIsRunningAsyncCall)
		{
			Context->AsyncState.bIsRunningAsyncCall = true;
			PrivateAsyncPointFilterProcessing(&Context->AsyncState, MinIterationsPerTask, NumIterations, InFilterPoints, OutFilterPoints, PointFunc);
			Context->AsyncState.bIsRunningAsyncCall = false;
		}
		else
		{
			// Reentrant case (no async support)
			PrivateAsyncPointFilterProcessing(nullptr, MinIterationsPerTask, NumIterations, InFilterPoints, OutFilterPoints, PointFunc);
		}
	}
		
	void AsyncMultiPointProcessing(FPCGContext* Context, int32 NumIterations, TArray<FPCGPoint>& OutPoints, const TFunction<TArray<FPCGPoint>(int32)>& PointFunc)
	{
		const int32 MinIterationsPerTask = 256;
		if (Context && !Context->AsyncState.bIsRunningAsyncCall)
		{
			Context->AsyncState.bIsRunningAsyncCall = true;
			PrivateAsyncMultiPointProcessing(&Context->AsyncState, MinIterationsPerTask, NumIterations, OutPoints, PointFunc);
			Context->AsyncState.bIsRunningAsyncCall = false;
		}
		else
		{
			// Reentrant case (no async support)
			PrivateAsyncMultiPointProcessing(nullptr, MinIterationsPerTask, NumIterations, OutPoints, PointFunc);
		}
	}
}