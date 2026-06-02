// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "RealtimeMeshNaniteBuilder.h"
#include "Math/Bounds.h"
#include "RealtimeMeshNaniteCluster.h"
#include "RealtimeMeshNaniteIndexEncoder.h"
#include "RealtimeMeshNaniteResources.h"

namespace RealtimeMesh::Nanite
{
	struct FRealtimeMeshNaniteBuildSettings;
	struct FRealtimeMeshNaniteMesh;
}

namespace RealtimeMesh::Nanite::Internal
{
	using FMaterialRangeBatchTriCounts = TArray<TArray<uint8, TInlineAllocator<12>>, TInlineAllocator<4>>;
	
	struct FRealtimeMeshClusterBuildContext
	{
		FEncodingInfo EncodingInfo;
		int32 ParentHierarchyNode = 0;
		int32 ParentHierarchyChildIndex = 0;

		FRealtimeMeshNaniteEncodedIndices PackedIndices;

		FMaterialRangeBatchTriCounts MaterialRangeBatchTriCounts;
	};

	struct FRealtimeMeshPageBuildContext
	{
		TArray<int32> Clusters;
		int32 TotalSize = 0;
	};

	struct FRealtimeMeshHierarchyBuildContext
	{
		TArray<int32, TFixedAllocator<NANITE_MAX_BVH_NODE_FANOUT>> Children;
		FBounds3f Bounds;
	};
	
	struct FRealtimeNaniteMeshBuildContext
	{
		const FRealtimeMeshNaniteMesh& Mesh;
		const FRealtimeMeshNaniteBuildSettings& Settings;
		::Nanite::FResources BuiltData;
		FBoxSphereBounds3f Bounds;

		TArray<FRealtimeMeshClusterBuildContext> ClusterContexts;
		TArray<FRealtimeMeshPageBuildContext> PageContexts;
		FEncodingSettings EncodingSettings;
		int32 NumUVs = 0;

		FRealtimeNaniteMeshBuildContext(const FRealtimeMeshNaniteMesh& InMesh, const FRealtimeMeshNaniteBuildSettings& InSettings)
			: Mesh(InMesh)
			  , Settings(InSettings)
			  , BuiltData()
		{
			ClusterContexts.SetNum(InMesh.Clusters.Num());
		}
	};
}
