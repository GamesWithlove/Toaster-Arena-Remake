// Copyright Epic Games, Inc. All Rights Reserved.

#include "Elements/PCGStaticMeshSpawner.h"

#include "PCGComponent.h"
#include "PCGCustomVersion.h"
#include "PCGManagedResource.h"
#include "Compute/PCGComputeCommon.h"
#include "Compute/PCGDataBinding.h"
#include "Compute/DataInterfaces/PCGInstanceDataInterface.h"
#include "Compute/DataInterfaces/Elements/PCGStaticMeshSpawnerDataInterface.h"
#include "Data/PCGPointData.h"
#include "Data/PCGSpatialData.h"
#include "Elements/PCGStaticMeshSpawnerContext.h"
#include "Graph/PCGGPUGraphCompilationContext.h"
#include "Helpers/PCGActorHelpers.h"
#include "Helpers/PCGHelpers.h"
#include "InstanceDataPackers/PCGInstanceDataPackerBase.h"
#include "MeshSelectors/PCGMeshSelectorBase.h"
#include "MeshSelectors/PCGMeshSelectorByAttribute.h"
#include "MeshSelectors/PCGMeshSelectorWeighted.h"

#include "GrassInstancedStaticMeshComponent.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "Materials/MaterialInterface.h"
#include "UObject/Package.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(PCGStaticMeshSpawner)

#define LOCTEXT_NAMESPACE "PCGStaticMeshSpawnerElement"

static TAutoConsoleVariable<bool> CVarAllowISMReuse(
	TEXT("pcg.ISM.AllowReuse"),
	true,
	TEXT("Controls whether ISMs can be reused and skipped when re-executing"));

UPCGStaticMeshSpawnerSettings::UPCGStaticMeshSpawnerSettings(const FObjectInitializer &ObjectInitializer)
{
	MeshSelectorType = UPCGMeshSelectorWeighted::StaticClass();
	// Implementation note: this should not have been done here (it should have been null), as it causes issues with copy & paste
	// when the thing to paste does not have that class for its instance.
	// However, removing it makes it that any object actually using the instance created by default would be lost.
	if (!this->HasAnyFlags(RF_ClassDefaultObject))
	{
		MeshSelectorParameters = ObjectInitializer.CreateDefaultSubobject<UPCGMeshSelectorWeighted>(this, TEXT("DefaultSelectorInstance"));
	}
}

TCHAR const* UPCGStaticMeshSpawnerSettings::TemplateFilePath = TEXT("/Plugin/PCG/Private/Elements/PCGStaticMeshSpawner.usf");

bool UPCGStaticMeshSpawnerSettings::IsKernelValid(FPCGContext* InContext, bool bQuiet) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(UPCGStaticMeshSpawnerSettings::IsKernelValid);

	if (!Super::IsKernelValid(InContext, bQuiet))
	{
		return false;
	}

	if (UPCGMeshSelectorWeighted* SelectorWeighted = Cast<UPCGMeshSelectorWeighted>(MeshSelectorParameters))
	{
		if (SelectorWeighted->MeshEntries.IsEmpty())
		{
			PCG_KERNEL_VALIDATION_ERR(InContext, this, bQuiet, LOCTEXT("NoMeshEntries", "No meshes specified in selector."));
			return false;
		}

		for (const FPCGMeshSelectorWeightedEntry& Entry : SelectorWeighted->MeshEntries)
		{
			if (Entry.Descriptor.StaticMesh.IsNull())
			{
				PCG_KERNEL_VALIDATION_ERR(InContext, this, bQuiet, LOCTEXT("UnassignedMesh", "Unassigned mesh."));
				return false;
			}
		}
	}
	else if (UPCGMeshSelectorByAttribute* SelectorByAttribute = Cast<UPCGMeshSelectorByAttribute>(MeshSelectorParameters))
	{
		if (SelectorByAttribute->AttributeName == NAME_None)
		{
			PCG_KERNEL_VALIDATION_ERR(InContext, this, bQuiet, LOCTEXT("NoMeshAttribute", "Mesh selector attribute name is 'None'."));
			return false;
		}
	}
	else
	{
		PCG_KERNEL_VALIDATION_ERR(InContext, this, bQuiet, LOCTEXT("InvalidMeshSelector", "Currently GPU Static Mesh Spawner nodes must use PCGMeshSelectorWeighted or UPCGMeshSelectorByAttribute as the mesh selector type."));
		return false;
	}

	// Currently instance packers must be able to specify a full list of attribute names upfront, to build the attribute table at compile time.
	// TODO: We should be able to augment a static attribute table with new attributes at execution time, which will allow other types like regex.
	if (InstanceDataPackerParameters && !InstanceDataPackerParameters->GetAttributeNames(/*OutNames=*/nullptr))
	{
		PCG_KERNEL_VALIDATION_ERR(InContext, this, bQuiet, LOCTEXT("InvalidInstancePacker", "Selected instance packer does not support GPU execution."));
		return false;
	}

	return true;
}

FString UPCGStaticMeshSpawnerSettings::GetCookedKernelSource(const TMap<FName, FPCGKernelAttributeIDAndType>& GlobalAttributeLookupTable) const
{
	FString TemplateFile;
	ensure(LoadShaderSourceFile(TemplateFilePath, EShaderPlatform::SP_PCD3D_SM5, &TemplateFile, nullptr));

	return TemplateFile;
}

bool UPCGStaticMeshSpawnerSettings::ComputeOutputPinDataDesc(const UPCGPin* OutputPin, const UPCGDataBinding* Binding, FPCGDataCollectionDesc& OutDesc) const
{
	check(OutputPin);
	check(Binding);

	// First inspect data coming from CPU. Will return description if this node is a CPU node or in a different compute graph.
	if (Binding->ComputeCPUOutputPinDataDesc(OutputPin, OutDesc))
	{
		return true;
	}

	const FPCGDataCollectionDesc InputPinDesc = PCGDataForGPUHelpers::ComputeInputPinDataDesc(this, PCGPinConstants::DefaultInputLabel, Binding);
	FPCGDataCollectionDesc OutputPinDesc = InputPinDesc;

	if (ensure(OutputPin->Properties.Label == PCGPinConstants::DefaultOutputLabel))
	{
		const TMap<FName, FPCGKernelAttributeIDAndType>& GlobalAttributeLookupTable = Binding->GetAttributeLookupTable();

		if (const FPCGKernelAttributeIDAndType* FoundAttributeIDAndType = GlobalAttributeLookupTable.Find(OutAttributeName))
		{
			// Create attribute description.
			FPCGKernelAttributeDesc AttributeDesc(FoundAttributeIDAndType->Id, FoundAttributeIDAndType->Type, OutAttributeName);

			// Create unique value keys for the output string.
			if (UPCGMeshSelectorWeighted* SelectorWeighted = Cast<UPCGMeshSelectorWeighted>(MeshSelectorParameters))
			{
				// Weighted selection - add explicit strings from settings.
				for (const FPCGMeshSelectorWeightedEntry& Entry : SelectorWeighted->MeshEntries)
				{
					const FString Value = Entry.Descriptor.StaticMesh.ToString();
					const int32 StringIndex = Binding->GetStringTable().IndexOfByKey(Value);
					if (ensureAlways(StringIndex != INDEX_NONE))
					{
						AttributeDesc.UniqueStringKeys.Add(StringIndex);
					}
				}
			}
			else if (UPCGMeshSelectorByAttribute* SelectorByAttribute = Cast<UPCGMeshSelectorByAttribute>(MeshSelectorParameters))
			{
				// By-attribute selection - pass on strings from input attribute.
				if (SelectorByAttribute->AttributeName != NAME_None)
				{
					for (const FPCGDataDesc& InputDataDesc : InputPinDesc.DataDescs)
					{
						for (const FPCGKernelAttributeDesc& InputAttrDesc : InputDataDesc.AttributeDescs)
						{
							if (InputAttrDesc.Name == SelectorByAttribute->AttributeName)
							{
								AttributeDesc.UniqueStringKeys.Append(InputAttrDesc.UniqueStringKeys);
							}
						}
					}
				}
			}
			else if (MeshSelectorParameters)
			{
				UE_LOG(LogPCG, Warning, TEXT("Mesh selector not supported by GPU Static Mesh Spawner: %s"), *MeshSelectorParameters->GetName());
			}

			for (FPCGDataDesc& DataDesc : OutputPinDesc.DataDescs)
			{
				if (const FPCGKernelAttributeIDAndType* IDAndType = GlobalAttributeLookupTable.Find(OutAttributeName))
				{
					DataDesc.AttributeDescs.AddUnique(AttributeDesc);
				}
			}
		}
	}

	OutDesc = OutputPinDesc;
	return true;
}

void UPCGStaticMeshSpawnerSettings::GetKernelAttributeKeys(TArray<FPCGKernelAttributeKey>& OutKeys) const
{
	if (InstanceDataPackerParameters)
	{
		TArray<FName> AttributeNames;
		if (ensure(InstanceDataPackerParameters->GetAttributeNames(&AttributeNames)))
		{
			for (const FName& AttributeName : AttributeNames)
			{
				// We don't know the type statically before execution, leave unset.
				OutKeys.AddUnique(FPCGKernelAttributeKey(AttributeName, EPCGKernelAttributeType::None));
			}
		}
	}

	if (const UPCGMeshSelectorByAttribute* Selector = Cast<UPCGMeshSelectorByAttribute>(MeshSelectorParameters))
	{
		// Add an attribute key for the given attribute so we register it as being read.
		OutKeys.AddUnique(FPCGKernelAttributeKey(Selector->AttributeName, EPCGKernelAttributeType::None));
	}

	// Write out attribute.
	OutKeys.AddUnique(FPCGKernelAttributeKey(OutAttributeName, EPCGKernelAttributeType::StringKey));
}

void UPCGStaticMeshSpawnerSettings::AddStaticCreatedStrings(TArray<FString>& InOutStringTable) const
{
	if (UPCGMeshSelectorWeighted* SelectorWeighted = Cast<UPCGMeshSelectorWeighted>(MeshSelectorParameters))
	{
		for (const FPCGMeshSelectorWeightedEntry& Entry : SelectorWeighted->MeshEntries)
		{
			InOutStringTable.AddUnique(Entry.Descriptor.StaticMesh.ToString());
		}
	}
}

int UPCGStaticMeshSpawnerSettings::ComputeKernelThreadCount(const UPCGDataBinding* Binding) const
{
	const UPCGNode* Node = CastChecked<UPCGNode>(GetOuter());
	const UPCGPin* Pin = Node->GetInputPin(PCGPinConstants::DefaultInputLabel);

	return PCGDataForGPUHelpers::ComputeInputPinDataDesc(Pin, Binding).ComputeDataElementCount(EPCGDataType::Point);
}

#if WITH_EDITOR
void UPCGStaticMeshSpawnerSettings::CreateAdditionalInputDataInterfaces(FPCGGPUCompilationContext& InOutContext, UObject* InObjectOuter, TArray<TObjectPtr<UComputeDataInterface>>& OutDataInterfaces) const
{
	Super::CreateAdditionalInputDataInterfaces(InOutContext, InObjectOuter, OutDataInterfaces);

	TObjectPtr<UPCGStaticMeshSpawnerDataInterface> NodeDI = InOutContext.NewObject_AnyThread<UPCGStaticMeshSpawnerDataInterface>(InObjectOuter);
	NodeDI->Settings = this;
	OutDataInterfaces.Add(NodeDI);
}

void UPCGStaticMeshSpawnerSettings::CreateAdditionalOutputDataInterfaces(FPCGGPUCompilationContext& InOutContext, UObject* InObjectOuter, TArray<TObjectPtr<UComputeDataInterface>>& OutDataInterfaces) const
{
	Super::CreateAdditionalOutputDataInterfaces(InOutContext, InObjectOuter, OutDataInterfaces);

	UPCGInstanceDataInterface* InstanceDI = InOutContext.NewObject_AnyThread<UPCGInstanceDataInterface>(InObjectOuter);
	InstanceDI->SetProducerSettings(this);
	InstanceDI->InputPinProvidingData = PCGPinConstants::DefaultInputLabel;
	OutDataInterfaces.Add(InstanceDI);
}

FText UPCGStaticMeshSpawnerSettings::GetDefaultNodeTitle() const
{
	return LOCTEXT("NodeTitle", "Static Mesh Spawner");
}

void UPCGStaticMeshSpawnerSettings::ApplyDeprecation(UPCGNode* InOutNode)
{
	check(InOutNode);

	if (DataVersion < FPCGCustomVersion::StaticMeshSpawnerApplyMeshBoundsToPointsByDefault)
	{
		UE_LOG(LogPCG, Log, TEXT("Static Mesh Spawner node migrated from an older version. Disabling 'ApplyMeshBoundsToPoints' by default to match previous behavior."));
		bApplyMeshBoundsToPoints = false;
	}

	Super::ApplyDeprecation(InOutNode);
}
#endif

TArray<FPCGPinProperties> UPCGStaticMeshSpawnerSettings::InputPinProperties() const
{
	// Note: If executing on the GPU, we need to prevent multiple connections on inputs, since it is not supported at this time.
	// Also note: Since the ShouldExecuteOnGPU() is already tied to structural changes, we don't need to implement any logic for this in GetChangeTypeForProperty()
	const bool bAllowMultipleConnections = !ShouldExecuteOnGPU();

	TArray<FPCGPinProperties> Properties;
	FPCGPinProperties& InputPinProperty = Properties.Emplace_GetRef(PCGPinConstants::DefaultInputLabel, EPCGDataType::Point, bAllowMultipleConnections);
	InputPinProperty.SetRequiredPin();

	return Properties;
}

FPCGElementPtr UPCGStaticMeshSpawnerSettings::CreateElement() const
{
	return MakeShared<FPCGStaticMeshSpawnerElement>();
}

FPCGContext* FPCGStaticMeshSpawnerElement::CreateContext()
{
	return new FPCGStaticMeshSpawnerContext();
}

bool FPCGStaticMeshSpawnerElement::PrepareDataInternal(FPCGContext* InContext) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGStaticMeshSpawnerElement::PrepareDataInternal);
	// TODO : time-sliced implementation
	FPCGStaticMeshSpawnerContext* Context = static_cast<FPCGStaticMeshSpawnerContext*>(InContext);
	const UPCGStaticMeshSpawnerSettings* Settings = Context->GetInputSettings<UPCGStaticMeshSpawnerSettings>();
	check(Settings);

	if (!Settings->MeshSelectorParameters)
	{
		PCGE_LOG(Error, GraphAndLog, LOCTEXT("InvalidMeshSelectorInstance", "Invalid MeshSelector instance, try reselecting the MeshSelector type"));
		return true;
	}

	if (!Context->SourceComponent.Get())
	{
		return true;
	}

#if WITH_EDITOR
	// In editor, we always want to generate this data for inspection & to prevent caching issues
	const bool bGenerateOutput = true;
#else
	const bool bGenerateOutput = Context->Node && Context->Node->IsOutputPinConnected(PCGPinConstants::DefaultOutputLabel);
#endif

	// Check if we can reuse existing resources
	bool& bSkippedDueToReuse = Context->bSkippedDueToReuse;

	if (!Context->bReuseCheckDone && CVarAllowISMReuse.GetValueOnAnyThread())
	{
		// Compute CRC if it has not been computed (it likely isn't, but this is to futureproof this)
		if (!Context->DependenciesCrc.IsValid())
		{
			GetDependenciesCrc(Context->InputData, Settings, Context->SourceComponent.Get(), Context->DependenciesCrc);
		}
		
		if (Context->DependenciesCrc.IsValid())
		{
			TArray<UPCGManagedISMComponent*> MISMCs;
			Context->SourceComponent->ForEachManagedResource([&MISMCs, &Context, Settings](UPCGManagedResource* InResource)
			{
				if (UPCGManagedISMComponent* Resource = Cast<UPCGManagedISMComponent>(InResource))
				{
					if (Resource->GetSettingsUID() == Settings->GetStableUID() && Resource->GetCrc().IsValid() && Resource->GetCrc() == Context->DependenciesCrc)
					{
						MISMCs.Add(Resource);
					}
				}
			});

			for (UPCGManagedISMComponent* MISMC : MISMCs)
			{
				if (!MISMC->IsMarkedUnused() && Settings->bWarnOnIdenticalSpawn)
				{
					// TODO: Revisit if the stack is added to the managed components at creation
					PCGLog::LogWarningOnGraph(LOCTEXT("IdenticalISMCSpawn", "Identical ISM Component spawn occurred. It may be beneficial to re-check graph logic for identical spawn conditions (same mesh descriptor at same location, etc) or repeated nodes."), Context);
				}

				MISMC->MarkAsReused();
			}

			if (!MISMCs.IsEmpty())
			{
				bSkippedDueToReuse = true;
			}
		}

		Context->bReuseCheckDone = true;
	}

	// Early out - if we've established we could reuse resources and there is no need to generate an output, quit now
	if (!bGenerateOutput && bSkippedDueToReuse)
	{
		return true;
	}

	// perform mesh selection
	TArray<FPCGTaggedData> Inputs = Context->InputData.GetInputs();
	TArray<FPCGTaggedData>& Outputs = Context->OutputData.TaggedData;

	while(Context->CurrentInputIndex < Inputs.Num())
	{
		if (!Context->bCurrentInputSetup)
		{
			const FPCGTaggedData& Input = Inputs[Context->CurrentInputIndex];
			const UPCGSpatialData* SpatialData = Cast<UPCGSpatialData>(Input.Data);

			if (!SpatialData)
			{
				PCGE_LOG(Error, GraphAndLog, LOCTEXT("InvalidInputData", "Invalid input data"));
				++Context->CurrentInputIndex;
				continue;
			}

			const UPCGPointData* PointData = SpatialData->ToPointData(Context);
			if (!PointData)
			{
				PCGE_LOG(Error, GraphAndLog, LOCTEXT("NoPointDataInInput", "Unable to get point data from input"));
				++Context->CurrentInputIndex;
				continue;
			}

			AActor* TargetActor = Settings->TargetActor.Get() ? Settings->TargetActor.Get() : Context->GetTargetActor(nullptr);
			if (!TargetActor)
			{
				PCGE_LOG(Error, GraphAndLog, LOCTEXT("InvalidTargetActor", "Invalid target actor. Ensure TargetActor member is initialized when creating SpatialData."));
				++Context->CurrentInputIndex;
				continue;
			}

			if (bGenerateOutput)
			{
				FPCGTaggedData& Output = Outputs.Add_GetRef(Input);

				UPCGPointData* OutputPointData = FPCGContext::NewObject_AnyThread<UPCGPointData>(Context);
				OutputPointData->InitializeFromData(PointData);

				if (OutputPointData->Metadata->HasAttribute(Settings->OutAttributeName))
				{
					OutputPointData->Metadata->DeleteAttribute(Settings->OutAttributeName);
					PCGE_LOG(Verbose, LogOnly, FText::Format(LOCTEXT("AttributeOverwritten", "Metadata attribute '{0}' is being overwritten in the output data"), FText::FromName(Settings->OutAttributeName)));
				}

				OutputPointData->Metadata->CreateStringAttribute(Settings->OutAttributeName, FName(NAME_None).ToString(), /*bAllowsInterpolation=*/false);

				Output.Data = OutputPointData;
				check(!Context->CurrentOutputPointData);
				Context->CurrentOutputPointData = OutputPointData;
			}

			FPCGStaticMeshSpawnerContext::FPackedInstanceListData& InstanceListData = Context->MeshInstancesData.Emplace_GetRef();
			InstanceListData.TargetActor = TargetActor;
			InstanceListData.SpatialData = PointData;

			Context->CurrentPointData = PointData;
			Context->bCurrentInputSetup = true;
		}

		// TODO: If we know we re-use the ISMCs, we should not run the Selection, as it can be pretty costly.
		// At the moment, the selection is filling the output point data, so it is necessary to run it. But we should just hit the cache in that case.
		if (!Context->bSelectionDone)
		{
			check(Context->CurrentPointData);
			Context->bSelectionDone = Settings->MeshSelectorParameters->SelectInstances(*Context, Settings, Context->CurrentPointData, Context->MeshInstancesData.Last().MeshInstances, Context->CurrentOutputPointData);
		}

		if (!Context->bSelectionDone)
		{
			return false;
		}

		// If we need the output but would otherwise skip the resource creation, we don't need to run the instance packing part of the processing
		if (!bSkippedDueToReuse)
		{
			TArray<FPCGPackedCustomData>& PackedCustomData = Context->MeshInstancesData.Last().PackedCustomData;
			const TArray<FPCGMeshInstanceList>& MeshInstances = Context->MeshInstancesData.Last().MeshInstances;

			if (PackedCustomData.Num() != MeshInstances.Num())
			{
				PackedCustomData.SetNum(MeshInstances.Num());
			}

			if (Settings->InstanceDataPackerParameters)
			{
				for (int32 InstanceListIndex = 0; InstanceListIndex < MeshInstances.Num(); ++InstanceListIndex)
				{
					Settings->InstanceDataPackerParameters->PackInstances(*Context, Context->CurrentPointData, MeshInstances[InstanceListIndex], PackedCustomData[InstanceListIndex]);
				}
			}
		}

		// We're done - cleanup for next iteration if we still have time
		++Context->CurrentInputIndex;
		Context->ResetInputIterationData();

		// Continue on to next iteration if there is time left, otherwise, exit here
		if (Context->AsyncState.ShouldStop() && Context->CurrentInputIndex < Inputs.Num())
		{
			return false;
		}
	}

	IPCGAsyncLoadingContext* AsyncLoadingContext = static_cast<IPCGAsyncLoadingContext*>(Context);

	if (Context->CurrentInputIndex == Inputs.Num() && !AsyncLoadingContext->WasLoadRequested() && !Context->MeshInstancesData.IsEmpty() && !Settings->bSynchronousLoad)
	{
		TArray<FSoftObjectPath> ObjectsToLoad;
		for (const FPCGStaticMeshSpawnerContext::FPackedInstanceListData& InstanceData : Context->MeshInstancesData)
		{
			for (const FPCGMeshInstanceList& MeshInstanceList : InstanceData.MeshInstances)
			{
				if (!MeshInstanceList.Descriptor.StaticMesh.IsNull())
				{
					ObjectsToLoad.AddUnique(MeshInstanceList.Descriptor.StaticMesh.ToSoftObjectPath());
				}

				for (const TSoftObjectPtr<UMaterialInterface>& OverrideMaterial : MeshInstanceList.Descriptor.OverrideMaterials)
				{
					if (!OverrideMaterial.IsNull())
					{
						ObjectsToLoad.AddUnique(OverrideMaterial.ToSoftObjectPath());
					}
				}
			}
		}

		return AsyncLoadingContext->RequestResourceLoad(Context, std::move(ObjectsToLoad), /*bAsynchronous=*/true);
	}

	return true;
}

bool FPCGStaticMeshSpawnerElement::ExecuteInternal(FPCGContext* InContext) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGStaticMeshSpawnerElement::Execute);
	FPCGStaticMeshSpawnerContext* Context = static_cast<FPCGStaticMeshSpawnerContext*>(InContext);
	const UPCGStaticMeshSpawnerSettings* Settings = Context->GetInputSettings<UPCGStaticMeshSpawnerSettings>();
	check(Settings && !Settings->ShouldExecuteOnGPU());

	while(!Context->MeshInstancesData.IsEmpty())
	{
		const FPCGStaticMeshSpawnerContext::FPackedInstanceListData& InstanceList = Context->MeshInstancesData.Last();
		check(Context->bSkippedDueToReuse || InstanceList.MeshInstances.Num() == InstanceList.PackedCustomData.Num());

		const bool bTargetActorValid = (InstanceList.TargetActor && IsValid(InstanceList.TargetActor));

		if (bTargetActorValid)
		{
			while (Context->CurrentDataIndex < InstanceList.MeshInstances.Num())
			{
				const FPCGMeshInstanceList& MeshInstance = InstanceList.MeshInstances[Context->CurrentDataIndex];
				// We always have mesh instances, but if we are in re-use, we don't compute the packed custom data.
				const FPCGPackedCustomData* PackedCustomData = InstanceList.PackedCustomData.IsValidIndex(Context->CurrentDataIndex) ? &InstanceList.PackedCustomData[Context->CurrentDataIndex] : nullptr;
				SpawnStaticMeshInstances(Context, MeshInstance, InstanceList.TargetActor, PackedCustomData);

				// Now that the mesh is loaded/spawned, set the bounds to out points if requested.
				if (MeshInstance.Descriptor.StaticMesh && Settings->bApplyMeshBoundsToPoints)
				{
					if (TMap<UPCGPointData*, TArray<int32>>* OutPointDataToPointIndex = Context->MeshToOutPoints.Find(MeshInstance.Descriptor.StaticMesh))
					{
						const FBox Bounds = MeshInstance.Descriptor.StaticMesh->GetBoundingBox();
						for (TPair<UPCGPointData*, TArray<int32>>& It : *OutPointDataToPointIndex)
						{
							check(It.Key);
							TArray<FPCGPoint>& OutPoints = It.Key->GetMutablePoints();
							for (int32 Index : It.Value)
							{
								FPCGPoint& Point = OutPoints[Index];
								Point.BoundsMin = Bounds.Min;
								Point.BoundsMax = Bounds.Max;
							}
						}
					}
				}

				++Context->CurrentDataIndex;

				if (Context->AsyncState.ShouldStop())
				{
					break;
				}
			}
		}

		if (!bTargetActorValid || Context->CurrentDataIndex == InstanceList.MeshInstances.Num())
		{
			Context->MeshInstancesData.RemoveAtSwap(Context->MeshInstancesData.Num() - 1);
			Context->CurrentDataIndex = 0;
		}

		if (Context->AsyncState.ShouldStop())
		{
			break;
		}
	}

	const bool bFinishedExecution = Context->MeshInstancesData.IsEmpty();
	if (bFinishedExecution)
	{
		if (AActor* TargetActor = Settings->TargetActor.Get() ? Settings->TargetActor.Get() : Context->GetTargetActor(nullptr))
		{
			for (UFunction* Function : PCGHelpers::FindUserFunctions(TargetActor->GetClass(), Settings->PostProcessFunctionNames, { UPCGFunctionPrototypes::GetPrototypeWithNoParams() }, Context))
			{
				TargetActor->ProcessEvent(Function, nullptr);
			}
		}
	}

	return bFinishedExecution;
}

bool FPCGStaticMeshSpawnerElement::CanExecuteOnlyOnMainThread(FPCGContext* Context) const
{
	// PrepareData can call UPCGManagedComponent::MarkAsReused which registers the ISMC, which can go into Chaos code that asserts if not on main thread.
	// TODO: We can likely re-enable multi-threading for PrepareData if we move the call to MarkAsReused to Execute. There should hopefully not be
	// wider contention on resources resources are not shared across nodes and are also per-component.
	return !Context || Context->CurrentPhase == EPCGExecutionPhase::Execute || Context->CurrentPhase == EPCGExecutionPhase::PrepareData;
}

void FPCGStaticMeshSpawnerElement::SpawnStaticMeshInstances(FPCGStaticMeshSpawnerContext* Context, const FPCGMeshInstanceList& InstanceList, AActor* TargetActor, const FPCGPackedCustomData* InPackedCustomData) const
{
	// Populate the (H)ISM from the previously prepared entries
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGStaticMeshSpawnerElement::Execute::PopulateISMs);

	if (InstanceList.Instances.Num() == 0)
	{
		return;
	}
	
	if (InstanceList.Descriptor.ComponentClass && InstanceList.Descriptor.ComponentClass->IsChildOf<UGrassInstancedStaticMeshComponent>())
	{
		PCGLog::LogErrorOnGraph(LOCTEXT("NoSupportForGrassComponent", "Grass Instanced Static Mesh Component are not meant to be used outside of the landscape grass system, and are not supported by PCG."), Context);
		return;
	}

	// Will be synchronously loaded if not loaded. But by default it should already have been loaded asynchronously in PrepareData, so this is free.
	UStaticMesh* LoadedMesh = InstanceList.Descriptor.StaticMesh.LoadSynchronous();

	if (!LoadedMesh)
	{
		// Either we have no mesh (so nothing to do) or the mesh couldn't be loaded
		if (InstanceList.Descriptor.StaticMesh.IsValid())
		{
			PCGE_LOG(Error, GraphAndLog, FText::Format(LOCTEXT("MeshLoadFailed", "Unable to load mesh '{0}'"), FText::FromString(InstanceList.Descriptor.StaticMesh.ToString())));
		}

		return;
	}

	// Don't spawn meshes if we reuse the ISMCs, but we still want to be sure that the mesh is loaded at least (for operations downstream).
	if (Context->bSkippedDueToReuse)
	{
		return;
	}

	for (TSoftObjectPtr<UMaterialInterface> OverrideMaterial : InstanceList.Descriptor.OverrideMaterials)
	{
		// Will be synchronously loaded if not loaded. But by default it should already have been loaded asynchronously in PrepareData, so this is free.
		if (OverrideMaterial.IsValid() && !OverrideMaterial.LoadSynchronous())
		{
			PCGE_LOG(Error, GraphAndLog, FText::Format(LOCTEXT("OverrideMaterialLoadFailed", "Unable to load override material '{0}'"), FText::FromString(OverrideMaterial.ToString())));
			return;
		}
	}

	// If we spawn the meshes, we should have computed a packed custom data.
	if (!ensure(InPackedCustomData))
	{
		return;
	}

	const FPCGPackedCustomData& PackedCustomData = *InPackedCustomData;

	FPCGISMComponentBuilderParams Params;
	Params.Descriptor = InstanceList.Descriptor;
	Params.NumCustomDataFloats = PackedCustomData.NumCustomDataFloats;

	// If the root actor we're binding to is movable, then the ISMC should be movable by default
	if (USceneComponent* SceneComponent = TargetActor->GetRootComponent())
	{
		Params.Descriptor.Mobility = SceneComponent->Mobility;
	}

	const UPCGStaticMeshSpawnerSettings* Settings = Context->GetInputSettings<UPCGStaticMeshSpawnerSettings>();
	check(Settings);

	Params.bAllowDescriptorChanges = Settings->bAllowDescriptorChanges;

	UPCGManagedISMComponent* MISMC = UPCGActorHelpers::GetOrCreateManagedISMC(TargetActor, Context->SourceComponent.Get(), Settings->GetStableUID(), Params);

	check(MISMC);
	MISMC->SetCrc(Context->DependenciesCrc);

	// Keep track of all touched resources in the context, because if the execution is cancelled during the SMS execution
	// we cannot easily guarantee that the state (esp. vs CRCs) is going to be entirely valid
	Context->TouchedResources.Emplace(MISMC);

	UInstancedStaticMeshComponent* ISMC = MISMC->GetComponent();
	check(ISMC);

	const int32 PreExistingInstanceCount = ISMC->GetInstanceCount();
	const int32 NewInstanceCount = InstanceList.Instances.Num();
	const int32 NumCustomDataFloats = PackedCustomData.NumCustomDataFloats;

	check((ISMC->NumCustomDataFloats == 0 && PreExistingInstanceCount == 0) || ISMC->NumCustomDataFloats == NumCustomDataFloats);
	ISMC->SetNumCustomDataFloats(NumCustomDataFloats);

	// The index in ISMC PerInstanceSMCustomData where we should pick up to begin inserting new floats
	const int32 PreviousCustomDataOffset = PreExistingInstanceCount * NumCustomDataFloats;

	// Populate the ISM instances
	ISMC->AddInstances(InstanceList.Instances, /*bShouldReturnIndices=*/false, /*bWorldSpace=*/true);

	// Copy new CustomData into the ISMC PerInstanceSMCustomData
	if (NumCustomDataFloats > 0)
	{
		check(PreviousCustomDataOffset + PackedCustomData.CustomData.Num() == ISMC->PerInstanceSMCustomData.Num());
		for (int32 NewIndex = 0; NewIndex < NewInstanceCount; ++NewIndex)
		{
			ISMC->SetCustomData(PreExistingInstanceCount + NewIndex, MakeArrayView(&PackedCustomData.CustomData[NewIndex * NumCustomDataFloats], NumCustomDataFloats));
		}
	}

	ISMC->UpdateBounds();

	{
		PCGE_LOG(Verbose, LogOnly, FText::Format(LOCTEXT("GenerationInfo", "Added {0} instances of '{1}' on actor '{2}'"),
			InstanceList.Instances.Num(), FText::FromString(InstanceList.Descriptor.StaticMesh->GetFName().ToString()), FText::FromString(TargetActor->GetFName().ToString())));
	}
}

void FPCGStaticMeshSpawnerElement::AbortInternal(FPCGContext* InContext) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGStaticMeshSpawnerElement::AbortInternal);
	// It is possible to Abort a ready task with no context yet
	if (!InContext)
	{
		return;
	}

	FPCGStaticMeshSpawnerContext* Context = static_cast<FPCGStaticMeshSpawnerContext*>(InContext);

	// Any resources we've touched during the execution of this node can potentially be in a "not-quite complete state" especially if we have multiple sources of data writing to the same ISMC.
	// In this case, we're aiming to mark the resources as "Unused" so they are picked up to be removed during the component's OnProcessGraphAborted, which is why we call Release here.
	for (TWeakObjectPtr<UPCGManagedISMComponent> ManagedResource : Context->TouchedResources)
	{
		if(ManagedResource.IsValid())
		{
			TSet<TSoftObjectPtr<AActor>> Dummy;
			ManagedResource->Release(/*bHardRelease=*/false, Dummy);
		}
	}
}

void UPCGStaticMeshSpawnerSettings::PostLoad()
{
	Super::PostLoad();

	const EObjectFlags Flags = GetMaskedFlags(RF_PropagateToSubObjects) | RF_Transactional;
	
	if (!MeshSelectorParameters)
	{
		RefreshMeshSelector();
	}
	else
	{
		MeshSelectorParameters->SetFlags(Flags);
	}

	if (!InstanceDataPackerParameters)
	{
		RefreshInstancePacker();
	}
	else
	{
		InstanceDataPackerParameters->SetFlags(Flags);
	}
}

#if WITH_EDITOR
void UPCGStaticMeshSpawnerSettings::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) 
{
	if (PropertyChangedEvent.Property)
	{
		const FName& PropertyName = PropertyChangedEvent.Property->GetFName();

		if (PropertyName == GET_MEMBER_NAME_CHECKED(UPCGStaticMeshSpawnerSettings, MeshSelectorType))
		{
			RefreshMeshSelector();
		} 
		else if (PropertyName == GET_MEMBER_NAME_CHECKED(UPCGStaticMeshSpawnerSettings, InstanceDataPackerType))
		{
			RefreshInstancePacker();
		}
	}

	Super::PostEditChangeProperty(PropertyChangedEvent);
}

bool UPCGStaticMeshSpawnerSettings::CanEditChange(const FProperty* InProperty) const
{
	// TODO: In place temporarily, until the other two modes are supported
	if (InProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UPCGStaticMeshSpawnerSettings, StaticMeshComponentPropertyOverrides))
	{
		if (!MeshSelectorType->IsChildOf(UPCGMeshSelectorByAttribute::StaticClass()))
		{
			return false;
		}
	}

	return Super::CanEditChange(InProperty);
}
#endif

void UPCGStaticMeshSpawnerSettings::SetMeshSelectorType(TSubclassOf<UPCGMeshSelectorBase> InMeshSelectorType) 
{
	if (!MeshSelectorParameters || InMeshSelectorType != MeshSelectorType)
	{
		if (InMeshSelectorType != MeshSelectorType)
		{
			MeshSelectorType = InMeshSelectorType;
		}
		
		RefreshMeshSelector();
	}
}

void UPCGStaticMeshSpawnerSettings::SetInstancePackerType(TSubclassOf<UPCGInstanceDataPackerBase> InInstancePackerType) 
{
	if (!InstanceDataPackerParameters || InInstancePackerType != InstanceDataPackerType)
	{
		if (InInstancePackerType != InstanceDataPackerType)
		{
			InstanceDataPackerType = InInstancePackerType;
		}
		
		RefreshInstancePacker();
	}
}

void UPCGStaticMeshSpawnerSettings::RefreshMeshSelector()
{
	if (MeshSelectorType)
	{
		ensure(IsInGameThread());

		if (MeshSelectorParameters)
		{
#if WITH_EDITOR
			MeshSelectorParameters->Rename(nullptr, GetTransientPackage(), REN_DontCreateRedirectors);
#endif
			MeshSelectorParameters->MarkAsGarbage();
			MeshSelectorParameters = nullptr;
		}

		const EObjectFlags Flags = GetMaskedFlags(RF_PropagateToSubObjects);
		MeshSelectorParameters = NewObject<UPCGMeshSelectorBase>(this, MeshSelectorType, NAME_None, Flags);
	}
	else
	{
		MeshSelectorParameters = nullptr;
	}
}

void UPCGStaticMeshSpawnerSettings::RefreshInstancePacker()
{
	if (InstanceDataPackerType)
	{
		ensure(IsInGameThread());

		if (InstanceDataPackerParameters)
		{
#if WITH_EDITOR
			InstanceDataPackerParameters->Rename(nullptr, GetTransientPackage(), REN_DontCreateRedirectors);
#endif
			InstanceDataPackerParameters->MarkAsGarbage();
			InstanceDataPackerParameters = nullptr;
		}

		const EObjectFlags Flags = GetMaskedFlags(RF_PropagateToSubObjects);
		InstanceDataPackerParameters = NewObject<UPCGInstanceDataPackerBase>(this, InstanceDataPackerType, NAME_None, Flags);
	}
	else
	{
		InstanceDataPackerParameters = nullptr;
	}
}

FPCGStaticMeshSpawnerContext::FPackedInstanceListData::FPackedInstanceListData() = default;
FPCGStaticMeshSpawnerContext::FPackedInstanceListData::~FPackedInstanceListData() = default;

#undef LOCTEXT_NAMESPACE
