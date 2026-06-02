// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.

#include "RealtimeMeshSpatialStreamingSourceComponent.h"
#include "RealtimeMeshSpatialStreamingSubsystem.h"
#include "Engine/World.h"

URealtimeMeshSpatialStreamingSourceComponent::URealtimeMeshSpatialStreamingSourceComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, DebugColor(ForceInit)
	, Radius(1000)
	, Priority(ERealtimeMeshStreamingSourcePriority::Low) 
	, bStreamingSourceEnabled(true)
{
	PrimaryComponentTick.bCanEverTick = false;
}

void URealtimeMeshSpatialStreamingSourceComponent::OnRegister()
{
	Super::OnRegister();

	if (const UWorld* World = GetWorld())
	{
		if (auto* RealtimeMeshSpatialStreamingSubsystem = World->GetSubsystem<URealtimeMeshSpatialStreamingSubsystem>())
		{
			RealtimeMeshSpatialStreamingSubsystem->RegisterSource(this);
		}
	}
}

void URealtimeMeshSpatialStreamingSourceComponent::OnUnregister()
{
	Super::OnUnregister();

	if (const UWorld* World = GetWorld())
	{
		if (auto* RealtimeMeshSpatialStreamingSubsystem = World->GetSubsystem<URealtimeMeshSpatialStreamingSubsystem>())
		{
			RealtimeMeshSpatialStreamingSubsystem->UnregisterSource(this);
		}
	}
}

bool URealtimeMeshSpatialStreamingSourceComponent::GetSpatialStreamingSource(FRealtimeMeshSpatialStreamingSource& OutStreamingSource)
{
	if (bStreamingSourceEnabled)
	{
		if (const AActor* Actor = GetOwner())
		{			
			OutStreamingSource.Name = *Actor->GetActorNameOrLabel();
			OutStreamingSource.Location = Actor->GetActorLocation();
			OutStreamingSource.DebugColor = DebugColor;
			OutStreamingSource.Priority = Priority;
			return true;
		}
	}
	return false;
}

bool URealtimeMeshSpatialStreamingSourceComponent::IsStreamingCompleted() const
{
	check(false);
	return false;
}

void URealtimeMeshSpatialStreamingSourceComponent::DrawVisualization(const FSceneView* View, FPrimitiveDrawInterface* PDI) const
{
/*#if WITH_EDITOR
	AActor* Actor = GetOwner();
	FStreamingSourceShapeHelper::ForEachShape(DefaultVisualizerLoadingRange, DefaultVisualizerLoadingRange, bInProjectIn2D false, Actor->GetActorLocation(), Actor->GetActorRotation(), Shapes, [&PDI](const FSphericalSector& Shape)
	{
		if (Shape.IsSphere())
		{
			DrawWireSphere(PDI, Shape.GetCenter(), FColor::White, Shape.GetRadius(), 32, SDPG_World, 1.0, 0, true);
		}
		else
		{
			TArray<TPair<FVector, FVector>> Lines = Shape.BuildDebugMesh();
			for (const auto& Line : Lines)
			{
				PDI->DrawLine(Line.Key, Line.Value, FColor::White, SDPG_World, 1.0, 0, true);
			};
		}
	});
#endif*/
}


