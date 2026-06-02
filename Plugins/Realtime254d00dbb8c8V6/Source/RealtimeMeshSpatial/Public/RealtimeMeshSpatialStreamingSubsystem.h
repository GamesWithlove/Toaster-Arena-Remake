// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RealtimeMeshSpatialStreamingSource.h"
#include "RealtimeMeshSpatialStreamingState.h"
#include "Subsystems/WorldSubsystem.h"
#include "RealtimeMeshSpatialStreamingSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class REALTIMEMESHSPATIAL_API URealtimeMeshSpatialStreamingSubsystem : public UTickableWorldSubsystem
{
	GENERATED_BODY()
private:
	// All the streaming sources that are currently registered for this world.
	// It is up to the individual providers to register/unregister themselves
	TArray<IRealtimeMeshSpatialStreamingSourceProvider*> StreamingSourceProviders;

       // All the active spatial systems that are currently registered for this world.
       TArray<IRealtimeMeshSpatialStreamingManagerInterface*> StreamingManagers;

public:

	void RegisterSource(IRealtimeMeshSpatialStreamingSourceProvider* Provider);
	void UnregisterSource(IRealtimeMeshSpatialStreamingSourceProvider* Provider);

	
	void RegisterManager(IRealtimeMeshSpatialStreamingManagerInterface* StreamingManager);
	void UnregisterManager(IRealtimeMeshSpatialStreamingManagerInterface* StreamingManager);
	
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	
	virtual bool IsTickableWhenPaused() const override { return true; }
	virtual bool IsTickableInEditor() const override { return true; }
	virtual bool IsTickable() const override;
	virtual void Tick(float DeltaTime) override;

	virtual TStatId GetStatId() const override { RETURN_QUICK_DECLARE_CYCLE_STAT(URealtimeMeshSpatialStreamingSubsystem, STATGROUP_Tickables); }
};
