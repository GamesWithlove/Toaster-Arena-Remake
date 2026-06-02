// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "RealtimeMeshSpatialComponentLocation.h"
#include "RealtimeMeshSpatialStreamingSource.h"
#include "Core/RealtimeMeshFuture.h"
#include "RealtimeMeshSpatialStreamingState.generated.h"

namespace RealtimeMesh
{
	class IRealtimeMeshSpatialStreamingStructureProvider;
}


struct FRealtimeMeshSpatialStreamingStateInitParams
{	
	TSharedPtr<RealtimeMesh::IRealtimeMeshSpatialStreamingStructureProvider> ChunkProvider;
	
	TDelegate<void(const FRealtimeMeshSpatialComponentLocation&)> OnActivateCell;
	TDelegate<void(const FRealtimeMeshSpatialComponentLocation&)> OnDeactivateCell;
	TDelegate<TFuture<bool>(const FRealtimeMeshSpatialComponentLocation&, RealtimeMesh::FRealtimeMeshCancellationToken)> OnLoadCell;
	//TDelegate<TFuture<bool>(const FRealtimeMeshSpatialComponentLocation&, RealtimeMesh::FRealtimeMeshCancellationToken)> OnUpdateCell;
	TDelegate<void(const FRealtimeMeshSpatialComponentLocation&)> OnUnloadCell;
};

USTRUCT()
struct REALTIMEMESHSPATIAL_API FRealtimeMeshSpatialCellState
{
	GENERATED_BODY()

private:
	RealtimeMesh::FRealtimeMeshCancellationToken PendingCancelToken;
	//TFuture<void> PendingFuture;
public:
	void CancelPending() { PendingCancelToken.Cancel(); }
	//void SetFuture(TFuture<void>&& InFuture) { PendingFuture = MoveTemp(InFuture); }
	RealtimeMesh::FRealtimeMeshCancellationToken& GetCancelToken() { return PendingCancelToken; }
	//TFuture<void>& GetFuture() { return PendingFuture; }
private:
	
	uint32 bLoadRequested : 1;
	uint32 bIsLoaded : 1;
	uint32 bIsActive : 1;

	uint32 ChildStreamingStates : 8;
	uint32 bHasAllChildrenLoaded : 1;

	uint32 bStreamingValidThisFrame : 1;
	uint32 bVisibilityValidThisFrame : 1;
	
public:
	FRealtimeMeshSpatialCellState()
		: bLoadRequested(false)
		, bIsLoaded(false)
		, bIsActive(false)
		, ChildStreamingStates(0x0)
		, bHasAllChildrenLoaded(false)
		, bStreamingValidThisFrame(false)
		, bVisibilityValidThisFrame(false)
	{
	}

	//bool IsValid() const { return bIsValid; }
	bool HasLoadBeenRequested() const { return bLoadRequested; }
	bool IsLoaded() const { return bLoadRequested && bIsLoaded; }
	bool IsActive() const { return bLoadRequested && bIsLoaded && bIsActive; }

	void MarkLoading()
	{
		check(!bLoadRequested && !bIsLoaded && !bIsActive);
		bLoadRequested = true;
	}
	
	void MarkLoaded()
	{
		check(bLoadRequested && !bIsLoaded && !bIsActive);
		bIsLoaded = true;
	}
	void MarkActive()
	{
		check(bLoadRequested && bIsLoaded && !bIsActive);
		bIsActive = true;
	}
	void MarkInactive()
	{
		check(bLoadRequested && bIsLoaded && bIsActive);
		bIsActive = false;
	}

	void MarkInvalid()
	{
		
	}


	void MarkChildrenAsLoaded()
	{
		bHasAllChildrenLoaded = true;
	}
	bool HasAllChildrenLoaded() const { return bHasAllChildrenLoaded; }

	void SetChildStreamingStates(uint8 NewChildStreamingStates) { ChildStreamingStates = NewChildStreamingStates; }
	uint8 GetChildStreamingStates() const { return ChildStreamingStates; }


	void MarkStreamingValidThisFrame() { bStreamingValidThisFrame = true; }
	bool IsStreamingValidThisFrame() const { return bStreamingValidThisFrame; }
	void MarkVisibilityValidThisFrame() { bVisibilityValidThisFrame = true; }
	bool IsVisibilityValidThisFrame() const { return bVisibilityValidThisFrame; }

	void ClearFrameStates() { bStreamingValidThisFrame = false; bVisibilityValidThisFrame = false; }
};

template<>
struct TStructOpsTypeTraits<FRealtimeMeshSpatialCellState> : public TStructOpsTypeTraitsBase2<FRealtimeMeshSpatialCellState>
{
	enum
	{
		WithCopy = false,
	};
};

/**
 * Interface for world partition streaming sources
 */
class REALTIMEMESHSPATIAL_API IRealtimeMeshSpatialStreamingManagerInterface
{
public:
	virtual ~IRealtimeMeshSpatialStreamingManagerInterface() = default;
	virtual void UpdateStreaming(const TArray<FRealtimeMeshSpatialStreamingSource>& Sources) = 0;
	virtual FTransform GetGridTransform() const = 0;
};



/**
 * 
 */
UCLASS()
class REALTIMEMESHSPATIAL_API URealtimeMeshSpatialStreamingManager : public UObject, public IRealtimeMeshSpatialStreamingManagerInterface
{
	GENERATED_BODY()
private:

	UPROPERTY(Transient)
	TMap<FRealtimeMeshSpatialComponentLocation, FRealtimeMeshSpatialCellState> State;
	
	
	//UPROPERTY(Transient)
	//TMap<FRealtimeMeshSpatialComponentLocation, FRealtimeMeshSpatialStreamingCell> ActiveCells;

	UPROPERTY(Transient)
	bool bHadStreamingChangesLastFrame = false;

	UPROPERTY(Transient)
	int32 NumLoadingCells = 0;

	UPROPERTY(Transient)
	bool bInitialized = false;

	UPROPERTY(Transient)
	bool bIsRunning = false;

	/*UPROPERTY()
	float LoadingDistanceMultiplier = 1.25f;*/

	UPROPERTY()
	uint32 BaseChunkSize = 64;
	
	
	TWeakPtr<RealtimeMesh::IRealtimeMeshSpatialStreamingStructureProvider> ChunkProviderWeak;
	TDelegate<void(const FRealtimeMeshSpatialComponentLocation&)> OnActivateCell;
	TDelegate<void(const FRealtimeMeshSpatialComponentLocation&)> OnDeactivateCell;
	TDelegate<TFuture<bool>(const FRealtimeMeshSpatialComponentLocation&, RealtimeMesh::FRealtimeMeshCancellationToken)> OnLoadCell;
	TDelegate<TFuture<bool>(const FRealtimeMeshSpatialComponentLocation&, RealtimeMesh::FRealtimeMeshCancellationToken)> OnUpdateCell;
	TDelegate<void(const FRealtimeMeshSpatialComponentLocation&)> OnUnloadCell;
public:
	void Initialize(const FRealtimeMeshSpatialStreamingStateInitParams& InitParams, bool bAutoStart = true);
	void Start();
	void Stop();
	void Reset();

	bool IsStreamingStable() const { return !bHadStreamingChangesLastFrame && NumLoadingCells == 0; }

	virtual void BeginDestroy() override;

private:
	virtual void UpdateStreaming(const TArray<FRealtimeMeshSpatialStreamingSource>& Sources) override;
	virtual FTransform GetGridTransform() const override;
	
	/*void GetWantedStreamingState(const TArrayView<const FRealtimeMeshSpatialStreamingSource> StreamingSources, const TMap<FRealtimeMeshSpatialComponentLocation, FRealtimeMeshSpatialStreamingCell>& ExistingCells,
		TSet<FRealtimeMeshSpatialComponentLocation>& CellsToDeActivate, TSet<FRealtimeMeshSpatialComponentLocation>& CellsToUnload, TSet<FRealtimeMeshSpatialComponentLocation>& CellsToActivate, TSet<FRealtimeMeshSpatialComponentLocation>& CellsToLoad);*/

	/*TSet<FRealtimeMeshSpatialComponentLocation> CalculatedDesiredTree(const TArrayView<const FRealtimeMeshSpatialStreamingSource> StreamingSources,
        float ScaleFactor, const TFunctionRef<bool(const FRealtimeMeshSpatialComponentLocation&)>& IsReadyFunc);
	
	
	FSphere3d GetStreamingSphereForSourceAndLOD(const FRealtimeMeshSpatialStreamingSource& StreamingSource, int32 LOD);

	TArray<TArray<FSphere3d>> GetStreamingSpheres(const TArrayView<const FRealtimeMeshSpatialStreamingSource> StreamingSources, float ScaleFactor);*/


	struct FStreamingSourcesState
	{
		TArray<double, TInlineAllocator<16>> MaxStreamingDistances;
		TArray<double, TInlineAllocator<16>> MaxRenderingDistances;
		FVector Location;
	};
};
