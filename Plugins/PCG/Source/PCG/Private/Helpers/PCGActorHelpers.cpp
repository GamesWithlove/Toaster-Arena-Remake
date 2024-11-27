// Copyright Epic Games, Inc. All Rights Reserved.

#include "Helpers/PCGActorHelpers.h"

#include "PCGComponent.h"
#include "PCGManagedResource.h"
#include "PCGModule.h"
#include "Elements/PCGSplineMeshParams.h"
#include "Helpers/PCGHelpers.h"

#include "EngineUtils.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"
#include "Components/SplineMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "Materials/MaterialInterface.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(PCGActorHelpers)

#if WITH_EDITOR
#include "Editor.h"
#include "Engine/Level.h"
#include "Editor/IPCGEditorModule.h"
#include "Modules/ModuleManager.h"
#include "Subsystems/ActorEditorContextSubsystem.h"
#include "WorldPartition/DataLayer/DataLayerInstance.h"
#include "WorldPartition/DataLayer/ExternalDataLayerAsset.h"
#include "WorldPartition/DataLayer/ExternalDataLayerInstance.h"

namespace UE::PCGActorHelpers::Local
{
	static float OutlinerUIRefreshDelay = 1.0f;
	static FAutoConsoleVariableRef CvarOutlinerUIRefreshDelay
	(
		TEXT("PCG.Editor.OutlinerRefreshDelay"),
		OutlinerUIRefreshDelay,
		TEXT("The delay (in seconds) before refreshing the Outliner after executing PCG tasks."),
		ECVF_Default
	);
}

#endif

PRAGMA_DISABLE_DEPRECATION_WARNINGS
UInstancedStaticMeshComponent* UPCGActorHelpers::GetOrCreateISMC(AActor* InTargetActor, UPCGComponent* InSourceComponent, uint64 SettingsUID, const FPCGISMCBuilderParameters& InParams)
{
	return GetOrCreateISMC(InTargetActor, InSourceComponent, SettingsUID, FPCGISMComponentBuilderParams(InParams));
}

UPCGManagedISMComponent* UPCGActorHelpers::GetOrCreateManagedISMC(AActor* InTargetActor, UPCGComponent* InSourceComponent, uint64 SettingsUID, const FPCGISMCBuilderParameters& InParams)
{
	return GetOrCreateManagedISMC(InTargetActor, InSourceComponent, SettingsUID, FPCGISMComponentBuilderParams(InParams));
}
PRAGMA_ENABLE_DEPRECATION_WARNINGS

UInstancedStaticMeshComponent* UPCGActorHelpers::GetOrCreateISMC(AActor* InTargetActor, UPCGComponent* InSourceComponent, uint64 SettingsUID, const FPCGISMComponentBuilderParams& InParams)
{
	UPCGManagedISMComponent* MISMC = GetOrCreateManagedISMC(InTargetActor, InSourceComponent, SettingsUID, InParams);
	if (MISMC)
	{
		return MISMC->GetComponent();
	}
	else
	{
		return nullptr;
	}
}

UPCGManagedISMComponent* UPCGActorHelpers::GetOrCreateManagedISMC(AActor* InTargetActor, UPCGComponent* InSourceComponent, uint64 SettingsUID, const FPCGISMComponentBuilderParams& InParams)
{
	check(InTargetActor && InSourceComponent);

	TRACE_CPUPROFILER_EVENT_SCOPE(UPCGActorHelpers::GetOrCreateManagedISMC);

	FISMComponentDescriptor Descriptor(InParams.Descriptor);

	const UStaticMesh* StaticMesh = Descriptor.StaticMesh;
	if (!StaticMesh)
	{
		return nullptr;
	}

	auto AddTagsToComponent = [InSourceComponent, &InParams](UInstancedStaticMeshComponent* ISMC)
	{
		ISMC->ComponentTags.AddUnique(PCGHelpers::DefaultPCGTag);
		ISMC->ComponentTags.AddUnique(InSourceComponent->GetFName());
			
		for (FName ComponentTag : InParams.Descriptor.ComponentTags)
		{
			ISMC->ComponentTags.AddUnique(ComponentTag);
		}
	};

	// If the component class is invalid, default to HISM.
	// TODO: should this be part of the descriptor changes?
	if (!Descriptor.ComponentClass)
	{
		Descriptor.ComponentClass = UHierarchicalInstancedStaticMeshComponent::StaticClass();
	}

	if (InParams.bAllowDescriptorChanges)
	{
		// It's potentially less efficient to put Nanite meshes inside of HISMs so decay those to ISM in this case.
		// Note the equality here, not a IsA because we do not want to change derived types either
		if (Descriptor.ComponentClass == UHierarchicalInstancedStaticMeshComponent::StaticClass())
		{
			// Done as in InstancedStaticMesh.cpp
#if WITH_EDITOR
			const bool bMeshHasNaniteData = StaticMesh->IsNaniteEnabled();
#else
			const bool bMeshHasNaniteData = StaticMesh->GetRenderData() && StaticMesh->GetRenderData()->HasValidNaniteData();
#endif

			if (bMeshHasNaniteData)
			{
				Descriptor.ComponentClass = UInstancedStaticMeshComponent::StaticClass();
			}
		}
	}

	{
		TRACE_CPUPROFILER_EVENT_SCOPE(UPCGActorHelpers::GetOrCreateManagedISMC::FindMatchingMISMC);
		UPCGManagedISMComponent* MatchingResource = nullptr;
		InSourceComponent->ForEachManagedResource([&MatchingResource, &InParams, &InTargetActor, &Descriptor, SettingsUID](UPCGManagedResource* InResource)
		{
			// Early out if already found a match
			if (MatchingResource)
			{
				return;
			}

			if (UPCGManagedISMComponent* Resource = Cast<UPCGManagedISMComponent>(InResource))
			{
				if (Resource->GetSettingsUID() != SettingsUID || !Resource->CanBeUsed())
				{
					return;
				}

				if (UInstancedStaticMeshComponent* ISMC = Resource->GetComponent())
				{
					if (IsValid(ISMC) &&
						ISMC->GetOwner() == InTargetActor &&
						ISMC->NumCustomDataFloats == InParams.NumCustomDataFloats &&
						Resource->GetDescriptor() == Descriptor)
					{
						MatchingResource = Resource;
					}
				}
			}
		});

		if (MatchingResource)
		{
			TRACE_CPUPROFILER_EVENT_SCOPE(UPCGActorHelpers::GetOrCreateManagedISMC::MarkAsUsed);
			MatchingResource->MarkAsUsed();

			UInstancedStaticMeshComponent* ISMC = Cast<UInstancedStaticMeshComponent>(MatchingResource->GeneratedComponent.Get());
			if (ensure(ISMC))
			{
				ISMC->Modify(!InSourceComponent->IsInPreviewMode());
				AddTagsToComponent(ISMC);
			}

			return MatchingResource;
		}
	}

	// No matching ISM component found, let's create a new one
	InTargetActor->Modify(!InSourceComponent->IsInPreviewMode());

	FString ComponentName;

	if (Descriptor.ComponentClass == UHierarchicalInstancedStaticMeshComponent::StaticClass())
	{
		ComponentName = TEXT("HISM_");
	}
	else if (Descriptor.ComponentClass == UInstancedStaticMeshComponent::StaticClass())
	{
		ComponentName = TEXT("ISM_");
	}

	ComponentName += StaticMesh->GetName();

	const EObjectFlags ObjectFlags = (InSourceComponent->IsInPreviewMode() ? RF_Transient : RF_NoFlags);
	UInstancedStaticMeshComponent* ISMC = NewObject<UInstancedStaticMeshComponent>(InTargetActor, Descriptor.ComponentClass, MakeUniqueObjectName(InTargetActor, Descriptor.ComponentClass, FName(ComponentName)), ObjectFlags);
	Descriptor.InitComponent(ISMC);
	ISMC->SetNumCustomDataFloats(InParams.NumCustomDataFloats);

	ISMC->RegisterComponent();
	InTargetActor->AddInstanceComponent(ISMC);

	ISMC->AttachToComponent(InTargetActor->GetRootComponent(), FAttachmentTransformRules(EAttachmentRule::KeepRelative, EAttachmentRule::KeepWorld, EAttachmentRule::KeepWorld, false));
	// Implementation note: Because we've used the FISMComponentDescriptor here (Descriptor vs InParams.Descriptor) which takes care of the loading, we still need to apply tags manually.
	AddTagsToComponent(ISMC);

	// Create managed resource on source component
	UPCGManagedISMComponent* Resource = NewObject<UPCGManagedISMComponent>(InSourceComponent);
	Resource->SetComponent(ISMC);
	Resource->SetDescriptor(Descriptor);
	if (InTargetActor->GetRootComponent())
	{
		Resource->SetRootLocation(InTargetActor->GetRootComponent()->GetComponentLocation());
	}
	
	Resource->SetSettingsUID(SettingsUID);
	InSourceComponent->AddToManagedResources(Resource);

	return Resource;
}

USplineMeshComponent* UPCGActorHelpers::GetOrCreateSplineMeshComponent(AActor* InTargetActor, UPCGComponent* InSourceComponent, uint64 SettingsUID, const FPCGSplineMeshComponentBuilderParameters& InParams)
{
	UPCGManagedSplineMeshComponent* ManagedComponent = GetOrCreateManagedSplineMeshComponent(InTargetActor, InSourceComponent, SettingsUID, InParams);
	if (ManagedComponent)
	{
		return ManagedComponent->GetComponent();
	}
	else
	{
		return nullptr;
	}
}

UPCGManagedSplineMeshComponent* UPCGActorHelpers::GetOrCreateManagedSplineMeshComponent(AActor* InTargetActor, UPCGComponent* InSourceComponent, uint64 SettingsUID, const FPCGSplineMeshComponentBuilderParameters& InParams)
{
	check(InTargetActor && InSourceComponent);

	const UStaticMesh* StaticMesh = InParams.Descriptor.StaticMesh;

	if (!StaticMesh)
	{
		return nullptr;
	}

	TRACE_CPUPROFILER_EVENT_SCOPE(UPCGActorHelpers::GetOrCreateManagedSplineMeshComponent);

	{
		TRACE_CPUPROFILER_EVENT_SCOPE(UPCGActorHelpers::GetOrCreateManagedSplineMeshComponent::FindMatchingManagedSplineMeshComponent);

		UPCGManagedSplineMeshComponent* MatchingResource = nullptr;
		InSourceComponent->ForEachManagedResource([&MatchingResource, &InParams, &InTargetActor, SettingsUID](UPCGManagedResource* InResource)
		{
			// Early out if already found a match
			if (MatchingResource)
			{
				return;
			}

			if (UPCGManagedSplineMeshComponent* Resource = Cast<UPCGManagedSplineMeshComponent>(InResource))
			{
				if (Resource->GetSettingsUID() != SettingsUID || !Resource->CanBeUsed())
				{
					return;
				}

				if (USplineMeshComponent* SplineMeshComponent = Resource->GetComponent())
				{
					if (IsValid(SplineMeshComponent)
						&& SplineMeshComponent->GetOwner() == InTargetActor
						&& Resource->GetDescriptor() == InParams.Descriptor
						&& Resource->GetSplineMeshParams() == InParams.SplineMeshParams)
					{
						MatchingResource = Resource;
					}
				}
			}
		});

		if (MatchingResource)
		{
			TRACE_CPUPROFILER_EVENT_SCOPE(UPCGActorHelpers::GetOrCreateManagedSplineMeshComponent::MarkAsUsed);
			MatchingResource->MarkAsUsed();

			USplineMeshComponent* SplineMeshComponent = MatchingResource->GetComponent();
			if (ensure(SplineMeshComponent))
			{
				SplineMeshComponent->Modify(!InSourceComponent->IsInPreviewMode());
			}

			return MatchingResource;
		}
	}

	// No matching component found, let's create a new one.
	InTargetActor->Modify(!InSourceComponent->IsInPreviewMode());

	FString ComponentName = TEXT("PCGSplineMeshComponent_") + StaticMesh->GetName();
	const EObjectFlags ObjectFlags = (InSourceComponent->IsInPreviewMode() ? RF_Transient : RF_NoFlags);
	USplineMeshComponent* SplineMeshComponent = NewObject<USplineMeshComponent>(InTargetActor, MakeUniqueObjectName(InTargetActor, USplineMeshComponent::StaticClass(), FName(ComponentName)), ObjectFlags);

	// Init Component
	{
		InParams.Descriptor.InitComponent(SplineMeshComponent);

		const FPCGSplineMeshParams& SplineMeshParams = InParams.SplineMeshParams;
		SplineMeshComponent->SetStartAndEnd(SplineMeshParams.StartPosition, SplineMeshParams.StartTangent, SplineMeshParams.EndPosition, SplineMeshParams.EndTangent);
		SplineMeshComponent->SetStartRollDegrees(SplineMeshParams.StartRollDegrees);
		SplineMeshComponent->SetEndRollDegrees(SplineMeshParams.EndRollDegrees);
		SplineMeshComponent->SetStartScale(SplineMeshParams.StartScale);
		SplineMeshComponent->SetEndScale(SplineMeshParams.EndScale);
		SplineMeshComponent->SetForwardAxis((ESplineMeshAxis::Type)SplineMeshParams.ForwardAxis);
		SplineMeshComponent->SetSplineUpDir(SplineMeshParams.SplineUpDir);
		SplineMeshComponent->SplineParams.NaniteClusterBoundsScale = SplineMeshParams.NaniteClusterBoundsScale;
		SplineMeshComponent->SplineBoundaryMin = SplineMeshParams.SplineBoundaryMin;
		SplineMeshComponent->SplineBoundaryMax = SplineMeshParams.SplineBoundaryMax;
		SplineMeshComponent->bSmoothInterpRollScale = SplineMeshParams.bSmoothInterpRollScale;
	}

	SplineMeshComponent->RegisterComponent();
	InTargetActor->AddInstanceComponent(SplineMeshComponent);

	// Implementation note: since the data passed to the params here is in world space,
	// We need the transform on the spline mesh component to be the identity - in world space, because unlike the ISMs
	// where we can set the instances and specify the data is in world space, we can't do that here.
	SplineMeshComponent->AttachToComponent(InTargetActor->GetRootComponent(), FAttachmentTransformRules(EAttachmentRule::KeepWorld, EAttachmentRule::KeepWorld, EAttachmentRule::KeepWorld, false));
	SplineMeshComponent->ComponentTags.Add(InSourceComponent->GetFName());
	SplineMeshComponent->ComponentTags.Add(PCGHelpers::DefaultPCGTag);

	// Create managed resource on source component
	UPCGManagedSplineMeshComponent* Resource = NewObject<UPCGManagedSplineMeshComponent>(InSourceComponent);
	Resource->SetComponent(SplineMeshComponent);
	Resource->SetDescriptor(InParams.Descriptor);
	Resource->SetSplineMeshParams(InParams.SplineMeshParams);
	Resource->SetSettingsUID(SettingsUID);
	InSourceComponent->AddToManagedResources(Resource);

	return Resource;
}

bool UPCGActorHelpers::DeleteActors(UWorld* World, const TArray<TSoftObjectPtr<AActor>>& ActorsToDelete)
{
	if (!World || ActorsToDelete.Num() == 0)
	{
		return true;
	}

#if WITH_EDITOR
	// Remove potential references to to-be deleted objects from the global selection sets.
	/*if (GIsEditor)
	{
		GEditor->ResetAllSelectionSets();
	}*/

	/** Note: the following code block is commented out because this is currently getting hit when partition actors & partitioned components are unloaded.
	* Destroying the actors is fine, but trying to delete them from SCC is a major issue and it can hang UE.
	* There are multiple code paths calling this method that would need to be revisited if we want to control this a bit better
	* or we can centralize these kind of requirements in the subsystem - this could then be taken care of in a single place, knowing the actual setting.
	*/
	//UWorldPartition* WorldPartition = World->GetWorldPartition();
	//if (!PCGHelpers::IsRuntimeOrPIE() && WorldPartition)
	//{
	//	TArray<FString> PackagesToDeleteFromSCC;
	//	TSet<UPackage*> PackagesToCleanup;

	//	for (const TSoftObjectPtr<AActor>& ManagedActor : ActorsToDelete)
	//	{
	//		// If actor is loaded, just remove from world and keep track of package to cleanup
	//		if (AActor* Actor = ManagedActor.Get())
	//		{
	//			if (UPackage* ActorPackage = Actor->GetExternalPackage())
	//			{
	//				PackagesToCleanup.Emplace(ActorPackage);
	//			}
	//			
	//			if (Actor->GetWorld() == World)
	//			{
	//				World->DestroyActor(Actor);
	//			}
	//			else
	//			{
	//				// If we're here and the world is null, then the actor has either been destroyed already or it will be picked up by GC by design.
	//				// Otherwise, we have bigger issues, something is very wrong.
	//				check(Actor->GetWorld() == nullptr);
	//			}
	//		}
	//		// Otherwise, get from World Partition.
	//		// Note that it is possible that some actors don't exist anymore, so a null here is not a critical condition
	//		else if (const FWorldPartitionActorDesc* ActorDesc = WorldPartition->GetActorDesc(ManagedActor.ToSoftObjectPath()))
	//		{
	//			PackagesToDeleteFromSCC.Emplace(ActorDesc->GetActorPackage().ToString());
	//			WorldPartition->RemoveActor(ActorDesc->GetGuid());
	//		}
	//	}

	//	// Save currently loaded packages so they get deleted
	//	if (PackagesToCleanup.Num() > 0)
	//	{
	//		ObjectTools::CleanupAfterSuccessfulDelete(PackagesToCleanup.Array(), /*bPerformReferenceCheck=*/true);
	//	}

	//	// Delete outstanding unloaded packages
	//	if (PackagesToDeleteFromSCC.Num() > 0)
	//	{
	//		FPackageSourceControlHelper PackageHelper;
	//		if (!PackageHelper.Delete(PackagesToDeleteFromSCC))
	//		{
	//			return false;
	//		}
	//	}
	//}
	//else
#endif
	{
#if WITH_EDITOR

		if (IPCGEditorModule* EditorModule = FModuleManager::GetModulePtr<IPCGEditorModule>("PCGEditor"))
		{
			EditorModule->SetOutlinerUIRefreshDelay(UE::PCGActorHelpers::Local::OutlinerUIRefreshDelay);
		}

#endif

		// Not in editor, really unlikely to happen but might be slow
		for (const TSoftObjectPtr<AActor>& ManagedActor : ActorsToDelete)
		{
			// @todo_pcg: Revisit this GetWorld() check when fixing UE-215065
			if (AActor* Actor = ManagedActor.Get(); Actor && Actor->GetWorld())
			{
				if (!ensure(World->DestroyActor(Actor)))
				{
					UE_LOG(LogPCG, Warning, TEXT("Actor %s failed to be destroyed."), *Actor->GetPathName());
				}
			}
		}
	}

	return true;
}

void UPCGActorHelpers::ForEachActorInLevel(ULevel* Level, TSubclassOf<AActor> ActorClass, TFunctionRef<bool(AActor*)> Callback)
{
	if (!Level)
	{
		return;
	}

	for (AActor* Actor : Level->Actors)
	{
		if (Actor && Actor->IsA(ActorClass))
		{
			if (!Callback(Actor))
			{
				break;
			}
		}
	}
}

void UPCGActorHelpers::ForEachActorInWorld(UWorld* World, TSubclassOf<AActor> ActorClass, TFunctionRef<bool(AActor*)> Callback)
{
	if (!World)
	{
		return;
	}

	for (TActorIterator<AActor> It(World, ActorClass); It; ++It)
	{
		if (AActor* Actor = *It)
		{
			if (!Callback(Actor))
			{
				break;
			}
		}
	}
}

AActor* UPCGActorHelpers::SpawnDefaultActor(UWorld* World, ULevel* Level, TSubclassOf<AActor> ActorClass, FName BaseName, const FTransform& Transform, AActor* Parent)
{
	if (!World || !ActorClass)
	{
		return nullptr;
	}

	FActorSpawnParameters SpawnParams;
	SpawnParams.Name = MakeUniqueObjectName(Level ? Level : World->GetCurrentLevel(), ActorClass, BaseName);

	return SpawnDefaultActor(World, Level, ActorClass, Transform, SpawnParams, Parent);
}

AActor* UPCGActorHelpers::SpawnDefaultActor(UWorld* World, ULevel* Level, TSubclassOf<AActor> ActorClass, const FTransform& Transform, const FActorSpawnParameters& InSpawnParams, AActor* Parent)
{
	FActorSpawnParameters ActorSpawnParams(InSpawnParams);
	if (Level)
	{
		ActorSpawnParams.OverrideLevel = Level;
	}

	FSpawnDefaultActorParams SpawnDefaultActorParams(World, ActorClass, Transform, ActorSpawnParams);
	
	SpawnDefaultActorParams.Parent = Parent;
	
	return SpawnDefaultActor(SpawnDefaultActorParams);
}

AActor* UPCGActorHelpers::SpawnDefaultActor(const FSpawnDefaultActorParams& Params)
{
	if (!Params.World || !Params.ActorClass)
	{
		return nullptr;
	}

	FActorSpawnParameters SpawnParams = Params.SpawnParams;
	if (!SpawnParams.OverrideLevel)
	{
		SpawnParams.OverrideLevel = Params.World->PersistentLevel;
	}

	if (PCGHelpers::IsRuntimeOrPIE())
	{
		SpawnParams.ObjectFlags |= RF_Transient;
	}

#if WITH_EDITOR
	// Find External Data Layer if it exists so we can create scope that will allow actor to be properly created
	const UExternalDataLayerInstance* ExternalDataLayerInstance = nullptr;
	for (const UDataLayerInstance* DataLayerInstance : Params.DataLayerInstances)
	{
		if (const UExternalDataLayerInstance* Found = Cast<UExternalDataLayerInstance>(DataLayerInstance))
		{
			ExternalDataLayerInstance = Found;
			break;
		}
	}

	// Avoid relying on the Editor Context at all
	UActorEditorContextSubsystem::Get()->PushContext();
	ON_SCOPE_EXIT{ UActorEditorContextSubsystem::Get()->PopContext(); };

	// Specify EDL we want to use if any for spawning this actor
	FScopedOverrideSpawningLevelMountPointObject EDLScope(ExternalDataLayerInstance ? ExternalDataLayerInstance->GetExternalDataLayerAsset() : nullptr);

	if (IPCGEditorModule* EditorModule = FModuleManager::GetModulePtr<IPCGEditorModule>("PCGEditor"))
	{
		EditorModule->SetOutlinerUIRefreshDelay(UE::PCGActorHelpers::Local::OutlinerUIRefreshDelay);
	}
#endif

	AActor* NewActor = Params.World->SpawnActor(*Params.ActorClass, &Params.Transform, SpawnParams);
	
	if (!NewActor)
	{
		return nullptr;
	}

	// HACK: until UE-62747 is fixed, we have to force set the scale after spawning the actor
	NewActor->SetActorRelativeScale3D(Params.Transform.GetScale3D());

#if WITH_EDITOR
	// Add remaining DataLayers (except External which was done on spawn)
	for (const UDataLayerInstance* DataLayerInstance : Params.DataLayerInstances)
	{
		if (DataLayerInstance != ExternalDataLayerInstance)
		{
			DataLayerInstance->AddActor(NewActor);
		}
	}
	
	if (SpawnParams.Name != NAME_None)
	{
		NewActor->SetActorLabel(SpawnParams.Name.ToString());
	}
#endif // WITH_EDITOR

	USceneComponent* RootComponent = NewActor->GetRootComponent();
	if (!RootComponent)
	{
		RootComponent = NewObject<USceneComponent>(NewActor, USceneComponent::GetDefaultSceneRootVariableName(), RF_Transactional);
		RootComponent->SetWorldTransform(Params.Transform);

		NewActor->SetRootComponent(RootComponent);
		NewActor->AddInstanceComponent(RootComponent);

		RootComponent->RegisterComponent();
	}

	if (Params.bForceStaticMobility)
	{
		RootComponent->Mobility = EComponentMobility::Static;
	}

#if WITH_EDITOR
	RootComponent->bVisualizeComponent = true;
#endif // WITH_EDITOR

	if (Params.Parent)
	{
		NewActor->AttachToActor(Params.Parent, FAttachmentTransformRules::KeepWorldTransform);
	}

	return NewActor;
}

FIntVector UPCGActorHelpers::GetCellCoord(FVector InPosition, int InGridSize, bool bUse2DGrid)
{
	check(InGridSize > 0);

	FVector Temp = InPosition / InGridSize;

	// In case of 2D grid, Z coordinate is always 0
	return FIntVector(
		FMath::FloorToInt(Temp.X),
		FMath::FloorToInt(Temp.Y),
		bUse2DGrid ? 0 : FMath::FloorToInt(Temp.Z)
	);
}
