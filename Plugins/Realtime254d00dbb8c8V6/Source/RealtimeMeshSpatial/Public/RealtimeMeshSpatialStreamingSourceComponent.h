// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "RealtimeMeshSpatialStreamingSource.h"
#include "Components/ActorComponent.h"
#include "RealtimeMeshSpatialStreamingSourceComponent.generated.h"


UCLASS(Meta = (BlueprintSpawnableComponent), HideCategories = (Tags, Sockets, ComponentTick, ComponentReplication, Activation, Cooking, Events, AssetUserData, Collision))
class REALTIMEMESHSPATIAL_API URealtimeMeshSpatialStreamingSourceComponent : public UActorComponent, public IRealtimeMeshSpatialStreamingSourceProvider
{
	GENERATED_UCLASS_BODY()

public:
	virtual void OnRegister() override;
	virtual void OnUnregister() override;

	/** Enable the component */
	UFUNCTION(BlueprintCallable, Category = "Streaming")
	void EnableStreamingSource() { bStreamingSourceEnabled = true; }

	/** Disable the component */
	UFUNCTION(BlueprintCallable, Category = "Streaming")
	void DisableStreamingSource() { bStreamingSourceEnabled = false; }

	/** Returns true if the component is active. */
	UFUNCTION(BlueprintPure, Category = "Streaming")
	bool IsStreamingSourceEnabled() const { return bStreamingSourceEnabled; }

	// IWorldPartitionStreamingSourceProvider interface
	virtual bool GetSpatialStreamingSource(FRealtimeMeshSpatialStreamingSource& OutStreamingSource) override;

	/** Returns true if streaming is completed for this streaming source component. */
	UFUNCTION(BlueprintCallable, Category = "Streaming")
	bool IsStreamingCompleted() const;

	/** Displays a debug visualizer of the streaming source. Useful when using Shapes. */
	void DrawVisualization(const FSceneView* View, FPrimitiveDrawInterface* PDI) const;
	
	/** Color used for debugging. */
	UPROPERTY(EditAnywhere, Category = "Streaming")
	FColor DebugColor;

	/* Radius for the streaming source */
	UPROPERTY(EditAnywhere, Category = "Streaming")
	float Radius;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Streaming")
	ERealtimeMeshStreamingSourcePriority Priority;

private:
	/** Whether this component is enabled or not */
	UPROPERTY(EditAnywhere, Category = "Streaming")
	bool bStreamingSourceEnabled;

};