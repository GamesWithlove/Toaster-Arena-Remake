// Copyright Epic Games, Inc. All Rights Reserved.

#include "PCGElement.h"

#include "PCGComponent.h"
#include "PCGContext.h"
#include "PCGGraph.h"
#include "PCGSubsystem.h"
#include "Data/PCGPointData.h"
#include "Graph/PCGGraphCache.h"

#if WITH_EDITOR
#include "PCGDataVisualization.h"
#endif

#include "HAL/IConsoleManager.h"
#include "Utils/PCGExtraCapture.h"

#define LOCTEXT_NAMESPACE "PCGElement"

static TAutoConsoleVariable<bool> CVarPCGValidatePointMetadata(
	TEXT("pcg.debug.ValidatePointMetadata"),
	true,
	TEXT("Controls whether we validate that the metadata entry keys on the output point data are consistent"));

static TAutoConsoleVariable<bool> CVarPCGAllowPerDataCaching(
	TEXT("pcg.AllowPerDataCaching"),
	false,
	TEXT("Controls whether we test & split down inputs to check caching per input on primary loop nodes."));

#if WITH_EDITOR
#define PCG_ELEMENT_EXECUTION_BREAKPOINT() \
	if (Context && Context->GetInputSettingsInterface() && Context->GetInputSettingsInterface()->bBreakDebugger) \
	{ \
		UE_DEBUG_BREAK(); \
	}
#else
#define PCG_ELEMENT_EXECUTION_BREAKPOINT()
#endif

namespace PCGElementHelpers
{
	bool SplitDataPerPrimaryPin(const UPCGSettings* Settings, const FPCGDataCollection& Collection, EPCGElementExecutionLoopMode Mode, TArray<FPCGDataCollection>& OutPrimaryCollections, FPCGDataCollection& OutCommonCollection)
	{
		check(Settings);
		OutPrimaryCollections.Reset();
		OutCommonCollection.TaggedData.Reset();

		TArray<FPCGPinProperties> RequiredPins = Settings->AllInputPinProperties().FilterByPredicate([](const FPCGPinProperties& Props) { return Props.IsRequiredPin(); });

		// Early out
		if (Mode == EPCGElementExecutionLoopMode::SinglePrimaryPin && RequiredPins.Num() != 1)
		{
			return false;
		}

		TArray<FName> RequiredPinLabels;
		Algo::Transform(RequiredPins, RequiredPinLabels, [](const FPCGPinProperties& Props) { return Props.Label; });

		TArray<FPCGDataCollection> DataPerRequiredPin;
		DataPerRequiredPin.SetNum(RequiredPinLabels.Num());

		for (int32 DataIndex = 0; DataIndex < Collection.TaggedData.Num(); ++DataIndex)
		{
			const FPCGTaggedData& TaggedData = Collection.TaggedData[DataIndex];
			int32 RequiredPinIndex = RequiredPinLabels.IndexOfByKey(TaggedData.Pin);

			if (RequiredPinIndex == INDEX_NONE)
			{
				OutCommonCollection.TaggedData.Add(TaggedData);
			}
			else
			{
				DataPerRequiredPin[RequiredPinIndex].TaggedData.Add(TaggedData);
			}
		}

		if (DataPerRequiredPin.IsEmpty())
		{
			return true;
		}

		// Broadcast to final primary collections
		if (Mode == EPCGElementExecutionLoopMode::SinglePrimaryPin)
		{
			check(DataPerRequiredPin.Num() == 1);
			OutPrimaryCollections.Reserve(DataPerRequiredPin[0].TaggedData.Num());

			for(int32 DataIndex = 0; DataIndex < DataPerRequiredPin[0].TaggedData.Num(); ++DataIndex)
			{
				FPCGDataCollection& OutPrimaryCollection = OutPrimaryCollections.Emplace_GetRef();
				OutPrimaryCollection.TaggedData.Add(DataPerRequiredPin[0].TaggedData[DataIndex]);
			}
		}
		else if (Mode == EPCGElementExecutionLoopMode::MatchingPrimaryPins)
		{
			const int32 NumberOfData = DataPerRequiredPin[0].TaggedData.Num();

			// Validate matching number of entries
			for (int32 RequiredPinIndex = 1; RequiredPinIndex < DataPerRequiredPin.Num(); ++RequiredPinIndex)
			{
				if (DataPerRequiredPin[RequiredPinIndex].TaggedData.Num() != NumberOfData)
				{
					return false;
				}
			}

			OutPrimaryCollections.SetNum(NumberOfData);

			for (int32 DataIndex = 0; DataIndex < NumberOfData; ++DataIndex)
			{
				for (int32 RequiredPinIndex = 0; RequiredPinIndex < DataPerRequiredPin.Num(); ++RequiredPinIndex)
				{
					OutPrimaryCollections[DataIndex].TaggedData.Add(DataPerRequiredPin[RequiredPinIndex].TaggedData[DataIndex]);
				}
			}
		}
		/*else if (Mode == EPCGElementExecutionLoopMode::CartesianPins)
		{
			int32 NumberOfCollections = 1;
			for (int32 RequiredPinIndex = 0; RequiredPinIndex < DataPerRequiredPin.Num(); ++RequiredPinIndex)
			{
				NumberOfCollections *= DataPerRequiredPin[RequiredPinIndex].TaggedData.Num();
			}

			OutPrimaryCollections.SetNum(NumberOfCollections);

			for (int32 RequiredPinIndex = 0; RequiredPinIndex < DataPerRequiredPin.Num(); ++RequiredPinIndex)
			{
				const FPCGDataCollection& PinData = DataPerRequiredPin[RequiredPinIndex];

				for (int32 OutCollectionIndex = 0; OutCollectionIndex < OutPrimaryCollections.Num(); ++OutCollectionIndex)
				{
					OutPrimaryCollections[OutCollectionIndex].TaggedData.Add(PinData.TaggedData[OutCollectionIndex % PinData.TaggedData.Num()]);
				}
			}
		}*/
		else
		{
			// Invalid mode
			return false;
		}

		return true;
	}
}

bool IPCGElement::Execute(FPCGContext* Context) const
{
	check(Context && Context->AsyncState.NumAvailableTasks != 0 && Context->CurrentPhase < EPCGExecutionPhase::Done);
	check(Context->AsyncState.bIsRunningOnMainThread || !CanExecuteOnlyOnMainThread(Context));

	while (Context->CurrentPhase != EPCGExecutionPhase::Done)
	{
		PCGUtils::FScopedCall ScopedCall(*this, Context);
		bool bExecutionPostponed = false;

		switch (Context->CurrentPhase)
		{
			case EPCGExecutionPhase::NotExecuted:
			{
				TRACE_CPUPROFILER_EVENT_SCOPE(EPCGExecutionPhase::NotExecuted);
				PCG_ELEMENT_EXECUTION_BREAKPOINT();

				PreExecute(Context);

				break;
			}

			case EPCGExecutionPhase::PrepareData:
			{
				TRACE_CPUPROFILER_EVENT_SCOPE(EPCGExecutionPhase::PrepareData);
				PCG_ELEMENT_EXECUTION_BREAKPOINT();

				if (PrepareDataInternal(Context))
				{
					Context->CurrentPhase = EPCGExecutionPhase::Execute;
				}
				else
				{
					bExecutionPostponed = true;
				}
				break;
			}

			case EPCGExecutionPhase::Execute:
			{
				TRACE_CPUPROFILER_EVENT_SCOPE(EPCGExecutionPhase::Execute);
				PCG_ELEMENT_EXECUTION_BREAKPOINT();

				if (ExecuteInternal(Context))
				{
					Context->CurrentPhase = EPCGExecutionPhase::PostExecute;
				}
				else
				{
					bExecutionPostponed = true;
				}
				break;
			}

			case EPCGExecutionPhase::PostExecute:
			{
				TRACE_CPUPROFILER_EVENT_SCOPE(EPCGExecutionPhase::PostExecute);
				PCG_ELEMENT_EXECUTION_BREAKPOINT();

				PostExecute(Context);
				break;
			}

			default: // should not happen
			{
				check(0);
				break;
			}
		}

		if (bExecutionPostponed || 
			Context->AsyncState.ShouldStop() ||
			(!Context->AsyncState.bIsRunningOnMainThread && CanExecuteOnlyOnMainThread(Context))) // phase change might require access to main thread
		{
			break;
		}
	}

	return Context->CurrentPhase == EPCGExecutionPhase::Done;
}

void IPCGElement::PreExecute(FPCGContext* Context) const
{
	check(Context);
	// Check for early outs (task cancelled + node disabled)
	// Early out to stop execution
	if (Context->InputData.bCancelExecution || (!Context->SourceComponent.IsExplicitlyNull() && !Context->SourceComponent.IsValid()))
	{
		Context->OutputData.bCancelExecution = true;

		if (IsCancellable())
		{
			// Skip task completely
			Context->CurrentPhase = EPCGExecutionPhase::Done;
			return;
		}
	}

	// Prepare to move to prepare data phase
	Context->CurrentPhase = EPCGExecutionPhase::PrepareData;

	const UPCGSettingsInterface* SettingsInterface = Context->GetInputSettingsInterface();

	if (!SettingsInterface)
	{
		return;
	}

	if (!SettingsInterface->bEnabled)
	{
		//Pass-through - no execution
		DisabledPassThroughData(Context);
		Context->CurrentPhase = EPCGExecutionPhase::PostExecute;
		return;
	}

	// Will override the settings if there is any override.
	Context->OverrideSettings();

	const UPCGSettings* Settings = Context->GetInputSettings<UPCGSettings>();

	// If we were supposed to execute on GPU and end up here, then GPU compilation failed. Run validation in noisy mode
	// to generate runtime errors/graph errors, then pass through.
	if (Settings && Settings->ShouldExecuteOnGPU())
	{
		Settings->IsKernelValid(Context, /*bQuiet=*/false);
		DisabledPassThroughData(Context);
		Context->CurrentPhase = EPCGExecutionPhase::PostExecute;
		return;
	}

	if (CVarPCGAllowPerDataCaching.GetValueOnAnyThread())
	{
		// Default implementation when the entries in a primary loop can be processed independently, e.g. they can appear in the cache separately
		// Implementation note: this supposes that the current node has only ONE required pin, and not multiple.
		// For more complex cases (such as multiple required pins, whether cartesian or matching), the implementation should use common code instead to streamline this process -
		// both when getting the results from the cache but also when writing them
		if (ExecutionLoopMode(Settings) != EPCGElementExecutionLoopMode::NotALoop && IsCacheableInstance(Settings))
		{
			PreExecutePrimaryLoopElement(Context, Settings);
		}
	}
}

void IPCGElement::PreExecutePrimaryLoopElement(FPCGContext* Context, const UPCGSettings* Settings) const
{
	check(Context);

	UPCGSubsystem* Subsystem = Context->SourceComponent.Get() ? Context->SourceComponent->GetSubsystem() : nullptr;
	if (!Subsystem || !Settings)
	{
		return;
	}

	// Mark inputs in the order they're presented so we can appropriately find the relation from output to input after the execution
	// TODO: this is not sufficient to do a proper mapping from output to input when we have a cartesian loop
	for (int32 DataIndex = 0; DataIndex < Context->InputData.TaggedData.Num(); ++DataIndex)
	{
		Context->InputData.TaggedData[DataIndex].OriginalIndex = DataIndex;
	}

	TArray<FPCGDataCollection> PrimaryDataCollections;
	FPCGDataCollection OtherData;
	if (!PCGElementHelpers::SplitDataPerPrimaryPin(Settings, Context->InputData, ExecutionLoopMode(Settings), PrimaryDataCollections, OtherData))
	{
		return;
	}

	// Implementation note: if there is a single primary data collection, then there's no point checking in the cache again, since that has already been done.
	if (PrimaryDataCollections.Num() <= 1)
	{
		return;
	}

	const bool bShouldComputeFullOutputDataCrc = ShouldComputeFullOutputDataCrc(Context);

	// Check against the cache if subcollections of one data from the primary data collection + the other data is found already in the cache.
	// If so, we can remove the matching input data - note that this is somewhat trivial in the single pin & matching pin cases, but in general is not going to work for cartesian cases.
	for (int32 PrimaryDataIndex = PrimaryDataCollections.Num() - 1; PrimaryDataIndex >= 0; --PrimaryDataIndex)
	{
		const FPCGDataCollection& PrimaryDataCollection = PrimaryDataCollections[PrimaryDataIndex];
		FPCGDataCollection SubCollection = PrimaryDataCollection;
		SubCollection.TaggedData.Append(OtherData.TaggedData);

		SubCollection.ComputeCrcs(bShouldComputeFullOutputDataCrc);

		FPCGGetFromCacheParams CacheParams = { .Node = Context->Node, .Element = this, .Component = Context->SourceComponent.Get() };
		GetDependenciesCrc(SubCollection, Settings, Context->SourceComponent.Get(), CacheParams.Crc);

		FPCGDataCollection SubCollectionOutput;
		if(Subsystem->GetCache()->GetFromCache(CacheParams, SubCollectionOutput))
		{
			// Found a match in the cache, add it to the output, and remove the matching inputs.
			// Note that in the input part we'll take only the data present in the PrimaryDataCollection here, as we will reintroduce only those then.
			// IMPLEMENTATION NOTE: the order is important here; if we can't guarantee the hint index, then we should just do a remove!
			TPair<FPCGDataCollection, FPCGDataCollection>& InputToOutputResults = Context->CachedInputToOutputInternalResults.Emplace_GetRef();
			InputToOutputResults.Key = PrimaryDataCollection;
			InputToOutputResults.Value = SubCollectionOutput;

			for (int32 SubDataIndex = PrimaryDataCollection.TaggedData.Num() - 1; SubDataIndex >= 0; --SubDataIndex)
			{
				Context->InputData.TaggedData.RemoveAt(PrimaryDataCollection.TaggedData[SubDataIndex].OriginalIndex);
			}
		}
	}

	//
	// TODO : if there are no inputs left, then we could skip the execute phase
	// 
}

bool IPCGElement::PrepareDataInternal(FPCGContext* Context) const
{
	return true;
}

void IPCGElement::PostExecute(FPCGContext* Context) const
{
	// Allow sub class to do some processing here
	PostExecuteInternal(Context);

	// Cleanup and validate output
	CleanupAndValidateOutput(Context);
	
	const UPCGSettings* Settings = Context->GetInputSettings<UPCGSettings>();

	if (CVarPCGAllowPerDataCaching.GetValueOnAnyThread())
	{
		if (!Context->OutputData.bCancelExecution && ExecutionLoopMode(Settings) != EPCGElementExecutionLoopMode::NotALoop && IsCacheableInstance(Settings))
		{
			PostExecutePrimaryLoopElement(Context, Settings);
		}
	}

	// Output data Crc
	{
		TRACE_CPUPROFILER_EVENT_SCOPE(IPCGElement::PostExecute::CRC);

		// Some nodes benefit from computing an actual CRC from the data. This can halt the propagation of change/executions through the graph. For
		// data like landscapes we will never have a full accurate data crc for it so we'll tend to assume changed which triggers downstream
		// execution. Performing a detailed CRC of output data can detect real change in the data and halt the cascade of execution.
		const bool bShouldComputeFullOutputDataCrc = ShouldComputeFullOutputDataCrc(Context);

		// Compute Crc from output data which will include output pin labels.
		Context->OutputData.ComputeCrcs(bShouldComputeFullOutputDataCrc);
	}

#if WITH_EDITOR
	const bool bHasErrorsOrWarnings = Context->Node && Context->HasVisualLogs();
#else
	const bool bHasErrorsOrWarnings = false;
#endif

	// Store result in cache
	// TODO - There is a potential mismatch here between using the Settings (incl. overrides) and the input settings interface (pre-overrides), as done in the graph executor.
	// TODO - The dependencies CRC here should always be valid except in the indirection case, which we should normalize to allow caching (tested here, otherwise it can ensure in the graph cache)
	if (!Context->OutputData.bCancelExecution && !bHasErrorsOrWarnings && Context->DependenciesCrc.IsValid() && IsCacheableInstance(Settings))
	{
		UPCGSubsystem* Subsystem = Context->SourceComponent.Get() ? Context->SourceComponent->GetSubsystem() : nullptr;
		if (Subsystem)
		{
			FPCGStoreInCacheParams Params = { .Element = this, .Crc = Context->DependenciesCrc };
			Subsystem->GetCache()->StoreInCache(Params, Context->OutputData);
		}
	}

	// Analyze if the output data is used multiple times, if the element requires it.
	if (ShouldVerifyIfOutputsAreUsedMultipleTimes(Settings))
	{
		for (FPCGTaggedData& OutputData : Context->OutputData.TaggedData)
		{
			// Enforce that pinless data is always used multiple times, or if the debug mode is enabled.
			if (OutputData.bPinlessData || (Settings && Settings->CanBeDebugged() && Settings->bDebug))
			{
				OutputData.bIsUsedMultipleTimes = true;
				continue;
			}
			
			// For data that are marked to be used multiple times, they are potentially not used multiple times if they are not passthrough
			// (hence if they are not in the input). So set them back to false in that case. It will be set to true again by the executor
			// if it is actually used in multiple places.
			auto PassthroughPredicate = [&OutputData](const FPCGTaggedData& InputData) { return InputData.Data == OutputData.Data; };
			if (OutputData.bIsUsedMultipleTimes && !Context->InputData.TaggedData.ContainsByPredicate(PassthroughPredicate))
			{
#if !UE_BUILD_SHIPPING
				OutputData.OriginatingNode = Context->Node;
#endif //!UE_BUILD_SHIPPING
				OutputData.bIsUsedMultipleTimes = false;
			}
			
			// We also need to verify that the data is not used in other outputs.
			auto SameDataDifferentTaggedData = [&OutputData](const FPCGTaggedData& OtherOutputData)
			{
				return (&OtherOutputData != &OutputData) && (OtherOutputData.Data == OutputData.Data);
			};
			
			if (!OutputData.bIsUsedMultipleTimes && Context->OutputData.TaggedData.ContainsByPredicate(SameDataDifferentTaggedData))
			{
				OutputData.bIsUsedMultipleTimes = true;
			}
		}
	}
	
#if WITH_EDITOR
	// Register the element to the component indicating the element has run and can have dynamic tracked keys.
	if (Settings && Settings->CanDynamicallyTrackKeys() && Context->SourceComponent.IsValid())
	{
		Context->SourceComponent->RegisterDynamicTracking(Settings, {});
	}
#endif // WITH_EDITOR

	Context->CurrentPhase = EPCGExecutionPhase::Done;
}

void IPCGElement::PostExecutePrimaryLoopElement(FPCGContext* Context, const UPCGSettings* Settings) const
{
	check(Context);

	// In the case of primary pin-loops, write back individual results to the cache, and reinsert the cached results in the output as needed.
	UPCGSubsystem* Subsystem = Context->SourceComponent.Get() ? Context->SourceComponent->GetSubsystem() : nullptr;

	if (!Subsystem || !Settings)
	{
		return;
	}

#if WITH_EDITOR
	const bool bHasErrorsOrWarnings = Context->Node && Context->HasVisualLogs();
#else
	const bool bHasErrorsOrWarnings = false;
#endif

	// Store individual results in the cache; here we will try to match the remaining hint indices from the input data with the ones given at the output.
	TArray<FPCGDataCollection> PrimaryDataCollections;
	FPCGDataCollection OtherData;
	if (!Context->OutputData.bCancelExecution && !bHasErrorsOrWarnings && PCGElementHelpers::SplitDataPerPrimaryPin(Settings, Context->InputData, ExecutionLoopMode(Settings), PrimaryDataCollections, OtherData))
	{
		const bool bShouldComputeFullOutputDataCrc = ShouldComputeFullOutputDataCrc(Context);

		for (const FPCGDataCollection& PrimaryDataCollection : PrimaryDataCollections)
		{
			if (PrimaryDataCollection.TaggedData.IsEmpty() || PrimaryDataCollection.TaggedData[0].OriginalIndex == INDEX_NONE)
			{
				continue;
			}

			FPCGDataCollection SubCollectionOutput;
			for (int32 DataIndex = 0; DataIndex < Context->OutputData.TaggedData.Num(); ++DataIndex)
			{
				const FPCGTaggedData& TaggedData = Context->OutputData.TaggedData[DataIndex];
				if (TaggedData.OriginalIndex == PrimaryDataCollection.TaggedData[0].OriginalIndex)
				{
					SubCollectionOutput.TaggedData.Add(Context->OutputData.TaggedData[DataIndex]);
				}
			}

			FPCGDataCollection SubCollection = PrimaryDataCollection;
			SubCollection.ComputeCrcs(bShouldComputeFullOutputDataCrc);

			FPCGCrc DependenciesCrc;
			GetDependenciesCrc(SubCollection, Settings, Context->SourceComponent.Get(), DependenciesCrc);

			SubCollectionOutput.ComputeCrcs(bShouldComputeFullOutputDataCrc);

			FPCGStoreInCacheParams Params = { .Element = this, .Crc = DependenciesCrc };
			Subsystem->GetCache()->StoreInCache(Params, SubCollectionOutput);
		}
	}

	// Put back cached results and set aside input (needed for inspection) if any
	if (!Context->CachedInputToOutputInternalResults.IsEmpty())
	{
		// Push cached results back to the final output data, from the last to the first, at the right place.
		for (int CachedCollectionIndex = Context->CachedInputToOutputInternalResults.Num() - 1; CachedCollectionIndex >= 0; --CachedCollectionIndex)
		{
			const FPCGDataCollection& CachedInputData = Context->CachedInputToOutputInternalResults[CachedCollectionIndex].Key;
			int32 CacheInputOriginalIndex = (CachedInputData.TaggedData.IsEmpty() ? INDEX_NONE : CachedInputData.TaggedData[0].OriginalIndex);
			int32 InsertInputIndex = CacheInputOriginalIndex != INDEX_NONE ? Context->InputData.TaggedData.IndexOfByPredicate([CacheInputOriginalIndex](const FPCGTaggedData& TaggedData) { return TaggedData.OriginalIndex > CacheInputOriginalIndex; }) : INDEX_NONE;

			if (InsertInputIndex != INDEX_NONE)
			{
				Context->InputData.TaggedData.Insert(CachedInputData.TaggedData, InsertInputIndex);
			}
			else
			{
				Context->InputData.TaggedData.Append(CachedInputData.TaggedData);
			}

			const FPCGDataCollection& CachedOutputData = Context->CachedInputToOutputInternalResults[CachedCollectionIndex].Value;

			// This assumes we have hinted properly on the output data; we'll look at the hinted value on the first data THEN insert before the next hint value
			int32 CacheOutputOriginalIndex = (CachedOutputData.TaggedData.IsEmpty() ? INDEX_NONE : CachedOutputData.TaggedData[0].OriginalIndex);
			int32 InsertOutputIndex = CacheOutputOriginalIndex != INDEX_NONE ? Context->OutputData.TaggedData.IndexOfByPredicate([CacheOutputOriginalIndex](const FPCGTaggedData& TaggedData) { return TaggedData.OriginalIndex > CacheOutputOriginalIndex; }) : INDEX_NONE;

			if (InsertOutputIndex != INDEX_NONE)
			{
				Context->OutputData.TaggedData.Insert(CachedOutputData.TaggedData, InsertOutputIndex);
			}
			else
			{
				Context->OutputData.TaggedData.Append(CachedOutputData.TaggedData);
			}
		}
	}
}

void IPCGElement::Abort(FPCGContext* Context) const
{
	AbortInternal(Context);
}

void IPCGElement::DisabledPassThroughData(FPCGContext* Context) const
{
	check(Context);

	const UPCGSettings* Settings = Context->GetInputSettings<UPCGSettings>();
	check(Settings);

	if (!Context->Node)
	{
		// Full pass-through if we don't have a node
		Context->OutputData = Context->InputData;
		return;
	}

	if (Context->Node->GetInputPins().Num() == 0 || Context->Node->GetOutputPins().Num() == 0)
	{
		// No input pins or not output pins, return nothing
		return;
	}

	const UPCGPin* PassThroughInputPin = Context->Node->GetPassThroughInputPin();
	const UPCGPin* PassThroughOutputPin = Context->Node->GetPassThroughOutputPin();
	if (!PassThroughInputPin || !PassThroughOutputPin)
	{
		// No pin to grab pass through data from or to pass data to.
		return;
	}

	const EPCGDataType OutputType = PassThroughOutputPin->GetCurrentTypes();

	// Grab data from pass-through pin, push it all to output pin
	Context->OutputData.TaggedData = Context->InputData.GetInputsByPin(PassThroughInputPin->Properties.Label);
	for (FPCGTaggedData& Data : Context->OutputData.TaggedData)
	{
		Data.Pin = PassThroughOutputPin->Properties.Label;
	}

	// Pass through input data if both it and the output are params, or if the output type supports it (e.g. if we have a incoming
	// surface connected to an input pin of type Any, do not pass the surface through to an output pin of type Point).
	auto InputDataShouldPassThrough = [OutputType](const FPCGTaggedData& InData)
	{
		EPCGDataType InputType = InData.Data ? InData.Data->GetDataType() : EPCGDataType::None;
		const bool bInputTypeNotWiderThanOutputType = !(InputType & ~OutputType);

		// Right now we allow edges from Spatial to Concrete. This can happen for example if a point processing node
		// is receiving a Spatial data, and the node is disabled, it will want to pass the Spatial data through. In the
		// future we will force collapses/conversions. For now, allow an incoming Spatial to pass out through a Concrete.
		// TODO remove!
		const bool bAllowSpatialToConcrete = !!(InputType & EPCGDataType::Spatial) && !!(OutputType & EPCGDataType::Concrete);

		return (InputType != EPCGDataType::Param || OutputType == EPCGDataType::Param) && (bInputTypeNotWiderThanOutputType || bAllowSpatialToConcrete);
	};

	// Now remove any non-params edges, and if only one edge should come through, remove the others
	if (Settings->OnlyPassThroughOneEdgeWhenDisabled())
	{
		// Find first incoming non-params data that is coming through the pass through pin
		TArray<FPCGTaggedData> InputsOnFirstPin = Context->InputData.GetInputsByPin(PassThroughInputPin->Properties.Label);
		const int FirstNonParamsDataIndex = InputsOnFirstPin.IndexOfByPredicate(InputDataShouldPassThrough);

		if (FirstNonParamsDataIndex != INDEX_NONE)
		{
			// Remove everything except the data we found above
			for (int Index = Context->OutputData.TaggedData.Num() - 1; Index >= 0; --Index)
			{
				if (Index != FirstNonParamsDataIndex)
				{
					Context->OutputData.TaggedData.RemoveAt(Index);
				}
			}
		}
		else
		{
			// No data found to return
			Context->OutputData.TaggedData.Empty();
		}
	}
	else
	{
		// Remove any incoming non-params data that is coming through the pass through pin
		TArray<FPCGTaggedData> InputsOnFirstPin = Context->InputData.GetInputsByPin(PassThroughInputPin->Properties.Label);
		for (int Index = InputsOnFirstPin.Num() - 1; Index >= 0; --Index)
		{
			const FPCGTaggedData& Data = InputsOnFirstPin[Index];

			if (!InputDataShouldPassThrough(Data))
			{
				Context->OutputData.TaggedData.RemoveAt(Index);
			}
		}
	}
}

FPCGContext* IPCGElement::CreateContext()
{
	return new FPCGContext();
}

#if WITH_EDITOR
void IPCGElement::DebugDisplay(FPCGContext* Context) const
{
	// Check Debug flag.
	const UPCGSettingsInterface* SettingsInterface = Context->GetInputSettingsInterface();
	if (!SettingsInterface || !SettingsInterface->bDebug)
	{
		return;
	}

	// If graph is being inspected, only display Debug if the component is being inspected, or in the HiGen case also display if
	// this component is a parent of an inspected component (because this data is available to child components).

	// If the graph is not being inspected, or the current component is being inspected, then we know we should display
	// debug, if not then we do further checks.
	UPCGGraph* Graph = Context->SourceComponent.Get() ? Context->SourceComponent->GetGraph() : nullptr;
	if (Graph && Graph->IsInspecting() && !Context->SourceComponent->IsInspecting() && Graph->DebugFlagAppliesToIndividualComponents())
	{
		// If we're no doing HiGen, or if the current component is not a local component (and therefore will not have children),
		// then do not display debug.
		if (!Graph->IsHierarchicalGenerationEnabled())
		{
			return;
		}

		// If a child of this component is being inspected (a local component on smaller grid and overlapping) then we still show debug,
		// because this data is available to that child for use.
		if (UPCGSubsystem* Subsystem = UPCGSubsystem::GetInstance(Context->SourceComponent->GetWorld()))
		{
			const uint32 ThisGenerationGridSize = Context->SourceComponent->GetGenerationGridSize();

			bool bFoundInspectedChildComponent = false;
			Subsystem->ForAllOverlappingComponentsInHierarchy(Context->SourceComponent.Get(), [ThisGenerationGridSize, &bFoundInspectedChildComponent](UPCGComponent* InLocalComponent)
			{
				if (InLocalComponent->GetGenerationGridSize() < ThisGenerationGridSize && InLocalComponent->IsInspecting())
				{
					bFoundInspectedChildComponent = true;
				}
			});

			// If no inspected child component then don't display debug.
			if (!bFoundInspectedChildComponent)
			{
				return;
			}
		}
	}

	FPCGDataCollection ElementInputs = Context->InputData;
	FPCGDataCollection ElementOutputs = Context->OutputData;

	Context->InputData = ElementOutputs;
	Context->OutputData = FPCGDataCollection();

	// In the case of a node with multiple output pins, we will select only the inputs from the first non-empty pin.
	const UPCGPin* FirstOutPin = Context->Node ? Context->Node->GetFirstConnectedOutputPin() : nullptr;

	const FPCGDataVisualizationRegistry& DataVisRegistry = FPCGModule::GetConstPCGDataVisualizationRegistry();
	TArray<FPCGTaggedData> Inputs = Context->InputData.GetInputs();

	for (const FPCGTaggedData& Input : Inputs)
	{
		// Skip output if we're filtering on the first pin or the the data is null.
		if (!Input.Data || (FirstOutPin && FirstOutPin->Properties.Label != Input.Pin))
		{
			continue;
		}

		if (const IPCGDataVisualization* DataVis = DataVisRegistry.GetDataVisualization(Input.Data->GetClass()))
		{
			DataVis->ExecuteDebugDisplay(Context, SettingsInterface, Input.Data, Context->GetTargetActor(nullptr));
		}
	}

	Context->InputData = ElementInputs;
	Context->OutputData = ElementOutputs;
}
#endif // WITH_EDITOR

void IPCGElement::CleanupAndValidateOutput(FPCGContext* Context) const
{
	check(Context);
	const UPCGSettingsInterface* SettingsInterface = Context->GetInputSettingsInterface();
	const UPCGSettings* Settings = SettingsInterface ? SettingsInterface->GetSettings() : nullptr;

	// Implementation note - disabled passthrough nodes can happen only in subgraphs/ spawn actor nodes
	// which will behave properly when disabled. 
	if (Settings && !IsPassthrough(Settings))
	{
		// Cleanup any residual labels if the node isn't supposed to produce them
		// TODO: this is a bit of a crutch, could be refactored out if we review the way we push tagged data
		TArray<FPCGPinProperties> OutputPinProperties = Settings->AllOutputPinProperties();
		if(OutputPinProperties.Num() == 1)
		{
			for (FPCGTaggedData& TaggedData : Context->OutputData.TaggedData)
			{
				if (!TaggedData.bPinlessData)
				{
					TaggedData.Pin = OutputPinProperties[0].Label;
				}				
			}
		}

		// Validate all out data for errors in labels
#if WITH_EDITOR
		if (SettingsInterface->bEnabled)
		{
			// remove null outputs
			Context->OutputData.TaggedData.RemoveAll([this, Context](const FPCGTaggedData& TaggedData){

				if (TaggedData.Data == nullptr)
				{
					PCGE_LOG(Error, GraphAndLog, FText::Format(LOCTEXT("NullPinOutputData", "Invalid output(s) generated for pin '{0}'"), FText::FromName(TaggedData.Pin)));
					return true;
				}

				return false;
			});


			for (FPCGTaggedData& TaggedData : Context->OutputData.TaggedData)
			{
				const int32 MatchIndex = OutputPinProperties.IndexOfByPredicate([&TaggedData](const FPCGPinProperties& InProp) { return TaggedData.Pin == InProp.Label; });
				if (MatchIndex == INDEX_NONE)
				{
					// Only display an error if we expected this data to have a pin.
					if (!TaggedData.bPinlessData)
					{
						PCGE_LOG(Error, GraphAndLog, FText::Format(LOCTEXT("OutputCannotBeRouted", "Output data generated for non-existent output pin '{0}'"), FText::FromName(TaggedData.Pin)));
					}
				}
				else if (ensure(TaggedData.Data))
				{
					// Try to get dynamic current pin types, otherwise settle for static types
					const UPCGPin* OutputPin = Context->Node ? Context->Node->GetOutputPin(OutputPinProperties[MatchIndex].Label) : nullptr;
					const EPCGDataType PinTypes = OutputPin ? OutputPin->GetCurrentTypes() : OutputPinProperties[MatchIndex].AllowedTypes;

					const bool bTypesOverlap = !!(PinTypes & TaggedData.Data->GetDataType());
					const bool bTypeIsSubset = !(~PinTypes & TaggedData.Data->GetDataType());
					// TODO: Temporary fix for Settings directly from InputData (ie. from elements with code and not PCG nodes)
					if ((!bTypesOverlap || !bTypeIsSubset) && TaggedData.Data->GetDataType() != EPCGDataType::Settings)
					{
						PCGE_LOG(Warning, GraphAndLog, FText::Format(LOCTEXT("OutputIncompatibleType", "Output data generated for pin '{0}' does not have a compatible type: '{1}'. Consider using more specific/narrower input pin types, or more general/wider output pin types."), FText::FromName(TaggedData.Pin), FText::FromString(UEnum::GetValueAsString(TaggedData.Data->GetDataType()))));
					}
				}

				if (CVarPCGValidatePointMetadata.GetValueOnAnyThread())
				{
					if (const UPCGPointData* PointData = Cast<UPCGPointData>(TaggedData.Data))
					{
						const TArray<FPCGPoint>& NewPoints = PointData->GetPoints();
						const int32 MaxMetadataEntry = PointData->Metadata ? PointData->Metadata->GetItemCountForChild() : 0;

						bool bHasError = false;

						for(int32 PointIndex = 0; PointIndex < NewPoints.Num() && !bHasError; ++PointIndex)
						{
							bHasError |= (NewPoints[PointIndex].MetadataEntry >= MaxMetadataEntry);
						}

						if (bHasError)
						{
							PCGE_LOG(Warning, GraphAndLog, FText::Format(LOCTEXT("OutputMissingPointMetadata", "Output generated for pin '{0}' does not have valid point metadata"), FText::FromName(TaggedData.Pin)));
						}
					}
				}
			}
		}
#endif
	}
}

FPCGContext* IPCGElement::Initialize(const FPCGDataCollection& InputData, TWeakObjectPtr<UPCGComponent> SourceComponent, const UPCGNode* Node)
{
	FPCGContext* Context = CreateContext();
	Context->InputData = InputData;
	Context->SourceComponent = SourceComponent;
	Context->Node = Node;

	return Context;
}

bool IPCGElement::IsCacheableInstance(const UPCGSettingsInterface* InSettingsInterface) const
{
	if (InSettingsInterface)
	{
		if (!InSettingsInterface->bEnabled)
		{
			return false;
		}
		else
		{
			return IsCacheable(InSettingsInterface->GetSettings());
		}
	}
	else
	{
		return false;
	}
}

void IPCGElement::GetDependenciesCrc(const FPCGDataCollection& InInput, const UPCGSettings* InSettings, UPCGComponent* InComponent, FPCGCrc& OutCrc) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE_TEXT(*FString::Printf(TEXT("IPCGElement::GetDependenciesCrc (%s)"), InSettings ? *InSettings->GetFName().ToString() : TEXT("")));

	// Start from a random prime.
	FPCGCrc Crc(1000003);

	// The cached data CRCs are computed in FPCGGraphExecutor::BuildTaskInput and incorporate data CRC, tags, output pin label and input pin label.
	for (const FPCGCrc& DataCrc : InInput.DataCrcs)
	{
		Crc.Combine(DataCrc);
	}

	if (InSettings)
	{
		const FPCGCrc& SettingsCrc = InSettings->GetCachedCrc();
		if (ensure(SettingsCrc.IsValid()))
		{
			Crc.Combine(SettingsCrc);
		}
	}

	if (InComponent)
	{
		Crc.Combine(InComponent->Seed);
	}

	OutCrc = Crc;
}

EPCGCachingStatus IPCGElement::RetrieveResultsFromCache(IPCGGraphCache* Cache, const UPCGNode* Node, const FPCGDataCollection& Input, UPCGComponent* Component, FPCGDataCollection& Output, FPCGCrc* OutCrc) const
{
	if (!Cache)
	{
		return EPCGCachingStatus::NotInCache;
	}

	const UPCGSettingsInterface* SettingsInterface = Input.GetSettingsInterface(Node ? Node->GetSettingsInterface() : nullptr);
	const UPCGSettings* Settings = SettingsInterface ? SettingsInterface->GetSettings() : nullptr;
	const bool bCacheable = IsCacheableInstance(SettingsInterface);

	FPCGGetFromCacheParams Params = { .Node = Node, .Element = this, .Component = Component };

	if (Settings && bCacheable)
	{
		GetDependenciesCrc(Input, Settings, Component, Params.Crc);

		if (OutCrc)
		{
			*OutCrc = Params.Crc;
		}
	}

	if(Params.Crc.IsValid() && Cache->GetFromCache(Params, Output))
	{
		return EPCGCachingStatus::Cached;
	}
	else
	{
		return EPCGCachingStatus::NotInCache;
	}
}

#undef LOCTEXT_NAMESPACE
