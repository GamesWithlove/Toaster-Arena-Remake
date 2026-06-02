// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.


#include "RealtimeMeshSpatialStreamingSubsystem.h"
#include "GameFramework/Character.h"
#include "GameFramework/PlayerController.h"
#include "RealtimeMeshSpatialStreamingSource.h"
#include "RealtimeMeshSpatialStreamingSourceComponent.h"

#if WITH_EDITOR
#include "Editor.h"
#include "Subsystems/UnrealEditorSubsystem.h"
#endif

//DECLARE_CYCLE_STAT(TEXT("RealtimeMeshSpatial - SubsystemTick"), STAT_RealtimeMesh_SpatialSubsystemTick, STATGROUP_RealtimeMesh);

void URealtimeMeshSpatialStreamingSubsystem::RegisterSource(IRealtimeMeshSpatialStreamingSourceProvider* Provider)
{
	StreamingSourceProviders.AddUnique(Provider);
}

void URealtimeMeshSpatialStreamingSubsystem::UnregisterSource(IRealtimeMeshSpatialStreamingSourceProvider* Provider)
{
	StreamingSourceProviders.RemoveSwap(Provider);
}


void URealtimeMeshSpatialStreamingSubsystem::RegisterManager(IRealtimeMeshSpatialStreamingManagerInterface* StreamingManager)
{
	StreamingManagers.AddUnique(StreamingManager);
}

void URealtimeMeshSpatialStreamingSubsystem::UnregisterManager(IRealtimeMeshSpatialStreamingManagerInterface* StreamingManager)
{
	StreamingManagers.Remove(StreamingManager);
}

void URealtimeMeshSpatialStreamingSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void URealtimeMeshSpatialStreamingSubsystem::Deinitialize()
{
	Super::Deinitialize();
}

bool URealtimeMeshSpatialStreamingSubsystem::IsTickable() const
{
       return StreamingManagers.Num() > 0;
}

void URealtimeMeshSpatialStreamingSubsystem::Tick(float DeltaTime)
{
	TRACE_CPUPROFILER_EVENT_SCOPE(URealtimeMeshSpatialStreamingSubsystem::Tick);
	Super::Tick(DeltaTime);

	//SCOPE_CYCLE_COUNTER(STAT_RealtimeMesh_SpatialSubsystemTick);

#if WITH_EDITOR
	bool bShouldIgnoreWhilePIERunning = GEditor->PlayWorld != nullptr && GEditor->PlayWorld != GetWorld();	
#else
	constexpr bool bShouldIgnoreWhilePIERunning = false;
#endif
		
	TArray<FRealtimeMeshSpatialStreamingSource> ActiveSources;
	ActiveSources.Reserve(StreamingSourceProviders.Num() + 1);

	APlayerController* PlayerController = GetWorld()? GetWorld()->GetFirstPlayerController() : nullptr;

	if (!bShouldIgnoreWhilePIERunning)
	{
		// By default we'll always have the source for the player/editor
		if (ACharacter* Player = (PlayerController? PlayerController->GetCharacter() : nullptr))
		{		
			// Auto setup streaming source if there isn't one on the player
			if (!PlayerController->FindComponentByClass<URealtimeMeshSpatialStreamingSourceComponent>() &&
				!Player->FindComponentByClass<URealtimeMeshSpatialStreamingSourceComponent>())
			{
				FRealtimeMeshSpatialStreamingSource Source;
				Source.Name = TEXT("Player");
				Source.Location = Player->GetActorLocation();
				Source.DebugColor = FColor::Green;
				Source.Priority = ERealtimeMeshStreamingSourcePriority::High;
				ActiveSources.Add(Source);
			}
		}
#if WITH_EDITOR
		else if (GetWorld()->IsEditorWorld() && !GetWorld()->IsPlayInEditor() && GEditor)
		{
			if (UUnrealEditorSubsystem* UnrealEditorSubsystem = GEditor->GetEditorSubsystem<UUnrealEditorSubsystem>())
			{
				FVector Location;
				FRotator Rotation;
				if (UnrealEditorSubsystem->GetLevelViewportCameraInfo(Location, Rotation))
				{
					FRealtimeMeshSpatialStreamingSource Source;
					Source.Name = TEXT("EditorViewport");
					Source.Location = Location;
					Source.DebugColor = FColor::Green;
					Source.Priority = ERealtimeMeshStreamingSourcePriority::High;
					ActiveSources.Add(Source);	
				}
			}
		}
#endif
	
		// Grab all our active sources
		for (IRealtimeMeshSpatialStreamingSourceProvider* StreamingSourceProvider : StreamingSourceProviders)
		{
			FRealtimeMeshSpatialStreamingSource Source;
			if (StreamingSourceProvider->GetSpatialStreamingSource(Source))
			{
				ActiveSources.Add(Source);
			}
		}
	}
	else
	{
		check(true);
	}


	for (auto It = StreamingManagers.CreateIterator(); It; ++It)
	{
		IRealtimeMeshSpatialStreamingManagerInterface* SpatialManager = *It;

		// Localize the sources to this actors position/rotation/scale so streaming can be done in local space
		TArray<FRealtimeMeshSpatialStreamingSource> LocalizedSources;
		Algo::Transform(ActiveSources, LocalizedSources, [&](FRealtimeMeshSpatialStreamingSource Source)
		{
			Source.Location = SpatialManager->GetGridTransform().InverseTransformPosition(Source.Location);
			const float Scale = SpatialManager->GetGridTransform().GetMaximumAxisScale();
			//Source.Radius /= Scale;

			return Source;
		});
		
		SpatialManager->UpdateStreaming(LocalizedSources);			
	}
}
