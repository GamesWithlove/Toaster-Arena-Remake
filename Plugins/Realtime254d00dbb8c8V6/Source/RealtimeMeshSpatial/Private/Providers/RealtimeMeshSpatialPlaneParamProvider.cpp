// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.


#include "Providers/RealtimeMeshSpatialPlaneParamProvider.h"
#include "Spatial/RealtimeMeshStreamingPolicyInterface.h"
#include "Factory/RealtimeMeshProviderPlane.h"

namespace RealtimeMesh
{
	FRealtimeMeshSpatialPlaneParamProvider::FRealtimeMeshSpatialPlaneParamProvider(const TSharedRef<FRealtimeMeshFactoryProvider>& InChildProvider)
		: FRealtimeMeshFactoryProvider({ InChildProvider })
	{
	}

	TFuture<FRealtimeMeshInitializationResult> FRealtimeMeshSpatialPlaneParamProvider::InitializeNewRealtimeMesh(const FRealtimeMeshID& MeshId,
	                                                                                                             const TSharedPtr<FRealtimeMeshFactoryInitializationParams>& InitParams, FRealtimeMeshCancellationToken CancellationToken)
	{
		const auto& InputParams = InitParams->Get<FRealtimeMeshFactoryInitializationParamsSpatialGrid2D>();
		
		FRealtimeMeshProviderPlaneParams NewParams;
		NewParams.CellLocation = InputParams.CellLocation;
		NewParams.LOD = InputParams.LOD;
		NewParams.CellSize = InputParams.CellSize;
		NewParams.CellHeight = InputParams.CellHeight;
		
		return InitializeNewRealtimeMeshForChild(0, MeshId, FRealtimeMeshFactoryInitializationParams::Make(InitParams->GetBaseName(), NewParams), CancellationToken);
	}

	TFuture<FRealtimeMeshStructure> FRealtimeMeshSpatialPlaneParamProvider::GetRealtimeMeshStructure(const FRealtimeMeshID& MeshId, const TSharedRef<const FRealtimeMeshFactoryPreUpdateResult>& PreUpdateResult,
		FRealtimeMeshCancellationToken CancellationToken)
	{
		return GetRealtimeMeshStructureForChild(0, MeshId, PreUpdateResult, CancellationToken);
	}

	TFuture<TSharedRef<FRealtimeMeshSectionGroupData>> FRealtimeMeshSpatialPlaneParamProvider::GetRealtimeMeshSectionGroup(const FRealtimeMeshID& MeshId, const TSharedRef<const FRealtimeMeshFactoryPreUpdateResult>& PreUpdateResult,
		const FRealtimeMeshSectionGroupKey& SectionGroupKey, FRealtimeMeshCancellationToken CancellationToken)
	{
		return GetRealtimeMeshSectionGroupForChild(0, MeshId, PreUpdateResult, SectionGroupKey, CancellationToken);
	}

	TFuture<FBoxSphereBounds3f> FRealtimeMeshSpatialPlaneParamProvider::CalculateBounds(const FRealtimeMeshID& MeshId, const TSharedRef<const FRealtimeMeshFactoryPreUpdateResult>& PreUpdateResult, FRealtimeMeshCancellationToken CancellationToken)
	{
		return CalculateBoundsForChild(0, MeshId, PreUpdateResult, CancellationToken);
	}

	TFuture<TSharedRef<FRealtimeMeshCollisionInfo>> FRealtimeMeshSpatialPlaneParamProvider::GetCollisionData(const FRealtimeMeshID& MeshId,
		const TSharedRef<const FRealtimeMeshFactoryPreUpdateResult>& PreUpdateResult, FRealtimeMeshCancellationToken CancellationToken)
	{
		return FRealtimeMeshFactoryProvider::GetCollisionData(MeshId, PreUpdateResult, CancellationToken);
	}

	TFuture<bool> FRealtimeMeshSpatialPlaneParamProvider::DestroyRealtimeMesh(const FRealtimeMeshID& MeshId)
	{
		return DestroyRealtimeMeshForChild(0, MeshId);
	}
}
