// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.

#pragma once

#include "CoreFwd.h"
#include "Core/RealtimeMeshFuture.h"
#include "RealtimeMeshComponent.h"
#include "RealtimeMeshSpatialStreamingCellState.generated.h"


USTRUCT()
struct REALTIMEMESHSPATIAL_API FRealtimeMeshSpatialStreamingCellState
{
	GENERATED_BODY()

	UPROPERTY()
	TObjectPtr<URealtimeMeshComponent> MeshComponent;

	TFuture<void> PendingFuture;
	RealtimeMesh::FRealtimeMeshCancellationToken PendingCancelToken;
	
	int32 SerialKey;
	int32 ChangeVersion;
	int32 CompletedChangeVersion;
	uint32 bIsLoading : 1;
	uint32 bIsInitialized : 1;
	uint32 bShouldBeVisible : 1;
	uint32 bWantsUpdate2 : 1;

	FRealtimeMeshSpatialStreamingCellState()
		: SerialKey(0)
		, ChangeVersion(INDEX_NONE)
		, CompletedChangeVersion(INDEX_NONE)
		, bIsLoading(false)
		, bIsInitialized(false)
		, bShouldBeVisible(false)
		, bWantsUpdate2(false)
	{
		static FThreadSafeCounter SerialKeyCounter;
		SerialKey = SerialKeyCounter.Increment();		
	}

	bool IsInitialized() const { CheckState(); return bIsInitialized; }
	bool IsVisible() const { CheckState(); return bIsInitialized && !bIsLoading && bShouldBeVisible; }
	bool IsLoading() const { CheckState(); return bIsLoading; }


private:
	void CheckState() const
	{
		check(bIsInitialized || !bShouldBeVisible);
		
	}
};

template<>
struct TStructOpsTypeTraits<FRealtimeMeshSpatialStreamingCellState> : public TStructOpsTypeTraitsBase2<FRealtimeMeshSpatialStreamingCellState>
{
	enum
	{
		WithCopy = false,
	};
};