// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.

#pragma once

#include "RealtimeMeshNaniteResources.h"
#include "StaticMeshResources.h"
#include "Algo/ForEach.h"
#include "Math/Bounds.h"
#include "Rendering/NaniteResources.h"

namespace RealtimeMesh::Nanite
{

	struct FRealtimeMeshNaniteMaterialRange
	{
		uint32 RangeStart;
		uint32 RangeLength;
		uint32 MaterialIndex;
	};
	
	struct FRealtimeMeshNaniteCluster
	{
	private:
		TArray<FVector3f> Vertices;
		TArray<FColor> Colors;
		TArray<TArray<FVector2f>, TFixedAllocator<NANITE_MAX_UVS>> UVs;
		TArray<FVector3f> Normals;

		TArray<uint8> Indices;

		TArray<FRealtimeMeshNaniteMaterialRange, TInlineAllocator<4>> MaterialRanges;

		FBounds3f Bounds;
		
		/* Are the indices a triangle strip, or a triangle list? */
		//uint32 bAreIndicesStripped : 1 = false;

	public:

		TArray<FVector3f>& EditVertices() { return Vertices; }
		TArray<FColor>& EditColors() { return Colors; }
		TArray<TArray<FVector2f>, TFixedAllocator<NANITE_MAX_UVS>>& EditUVs() { return UVs; }
		TArray<FVector3f>& EditNormals() { return Normals; }
		TArray<uint8>& EditIndices() { return Indices; }
		TArray<FRealtimeMeshNaniteMaterialRange, TInlineAllocator<4>>& EditMaterialRanges() { return MaterialRanges; }


		
		bool HasValidMeshData() const
		{
			if (Vertices.IsEmpty() || Indices.IsEmpty() || Indices.Num() % 3 != 0)
			{
				return false;
			}

			if (Normals.Num() != Vertices.Num())
			{
				return false;
			}

			if (!Colors.IsEmpty() && Colors.Num() != Vertices.Num())
			{
				return false;
			}

			for (const TArray<FVector2f>& UV : UVs)
			{
				if (UV.Num() != Vertices.Num())
				{
					return false;
				}
			}

			return true;
		}

		

		const TArray<uint8>& GetIndices() const
		{
			return Indices;
		}

		const TArray<FVector3f>& GetVertices() const
		{
			return Vertices;
		}

		const TArray<FVector3f>& GetNormals() const { return Normals; }

		const TArray<FColor>& GetColors() const { return Colors; }

		int32 NumUVChannels() const { return UVs.Num(); }
		int32 GetNumTriangles() const { return Indices.Num() / 3; }
		bool HasColors() const { return Colors.Num() == Vertices.Num(); }

		const TArray<FVector2f>& GetUVs(int32 UVChannel) const { return UVs[UVChannel]; }
		const TArray<FRealtimeMeshNaniteMaterialRange, TInlineAllocator<4>>& GetMaterialRanges() const { return MaterialRanges; }

		void UpdateBounds()
		{
			Bounds = FBounds3f();
			Algo::ForEach(Vertices, [&](const FVector3f& Vertex)
			{
				Bounds += Vertex;
			});
		}

		const FBounds3f& GetBounds() const { return Bounds; }

		/**
		 * Sorts material ranges by length descending (longest first) and reorders
		 * indices to match. This is required by Nanite's material encoding which
		 * expects ranges to be contiguous and sorted by length.
		 */
		void SortMaterialRangesByLength()
		{
			if (MaterialRanges.Num() <= 1)
			{
				return;
			}

			// Build sort order based on range length (descending)
			TArray<int32> SortOrder;
			SortOrder.SetNumUninitialized(MaterialRanges.Num());
			for (int32 i = 0; i < MaterialRanges.Num(); i++)
			{
				SortOrder[i] = i;
			}
			SortOrder.Sort([this](int32 A, int32 B)
			{
				return MaterialRanges[A].RangeLength > MaterialRanges[B].RangeLength;
			});

			// Reorder indices according to sorted material ranges
			TArray<uint8> SortedIndices;
			SortedIndices.Reserve(Indices.Num());

			TArray<FRealtimeMeshNaniteMaterialRange, TInlineAllocator<4>> SortedRanges;
			SortedRanges.Reserve(MaterialRanges.Num());

			uint32 CurrentTriStart = 0;
			for (int32 NewIdx = 0; NewIdx < SortOrder.Num(); NewIdx++)
			{
				const int32 OldIdx = SortOrder[NewIdx];
				const FRealtimeMeshNaniteMaterialRange& OldRange = MaterialRanges[OldIdx];

				// Copy indices for this range
				const int32 SrcIndexStart = OldRange.RangeStart * 3;
				const int32 NumIndices = OldRange.RangeLength * 3;
				for (int32 i = 0; i < NumIndices; i++)
				{
					SortedIndices.Add(Indices[SrcIndexStart + i]);
				}

				// Create new range with updated start position
				FRealtimeMeshNaniteMaterialRange& NewRange = SortedRanges.Emplace_GetRef();
				NewRange.RangeStart = CurrentTriStart;
				NewRange.RangeLength = OldRange.RangeLength;
				NewRange.MaterialIndex = OldRange.MaterialIndex;
				CurrentTriStart += OldRange.RangeLength;
			}

			Indices = MoveTemp(SortedIndices);
			MaterialRanges = MoveTemp(SortedRanges);
		}
	};

	struct FRealtimeMeshNaniteHierarchyNode
	{
		struct FElement
		{
			FSphere3f LODBounds = FSphere3f(ForceInit);
			FBounds3f Bounds;
			float MinLODError = -1.0f;
			float MaxParentLODError = 1e10f;
			uint32 ChildStartIndex = 0xFFFFFFFFu;

			// 0 = No children
			// INDEX_NONE = 1 internal node child
			// > 0 leaf node cluster count
			int32 NumChildren = 0;
		};

		TStaticArray<FElement, NANITE_MAX_BVH_NODE_FANOUT> Children;

		FRealtimeMeshNaniteHierarchyNode()
			: Children(InPlace) { }
	};





	struct FRealtimeMeshNaniteMesh
	{
		// The leaf cluster geometry
		TArray<FRealtimeMeshNaniteCluster> Clusters;

		// Defines the hierarchy of clusters
		TArray<FRealtimeMeshNaniteHierarchyNode> HierarchyNodes;

		// The combined bounds for the entire mesh
		FBounds3f Bounds;
		
		bool HasValidMeshData() const
		{
			if (Clusters.Num() == 0)
			{
				UE_LOG(LogRealtimeMesh, Warning, TEXT("HasValidMeshData: No clusters in Nanite mesh"));
				return false;
			}

			for (const FRealtimeMeshNaniteCluster& Cluster : Clusters)
			{
				if (!ensure(Cluster.HasValidMeshData()))
				{
					UE_LOG(LogRealtimeMesh, Warning, TEXT("HasValidMeshData: Invalid cluster data found"));
					return false;
				}
			}

			return true;
		}

		REALTIMEMESHNANITE_API static FRealtimeMeshNaniteMesh CreateFromRawMesh(TConstArrayView<FVector3f> Vertices, TConstArrayView<FVector3f> Normals,
			TConstArrayView<TConstArrayView<FVector2f>> UVs, TConstArrayView<FColor> Colors, TConstArrayView<int32> Triangles);

		REALTIMEMESHNANITE_API static bool BuildMinimalHierarchy(FRealtimeMeshNaniteMesh& Mesh, bool bShouldUpdateClusterBounds = true);
		
		REALTIMEMESHNANITE_API static void CalculateAllClusterBounds(FRealtimeMeshNaniteMesh& Mesh)
		{
			Algo::ForEach(Mesh.Clusters, [](FRealtimeMeshNaniteCluster& Cluster)
			{
				Cluster.UpdateBounds();
			});
		}
	};

	struct FRealtimeMeshNaniteBuildSettings
	{
		int32 PositionPrecision = 4;
		int32 NormalBits = 8;

		// Enable parallel processing in cluster encoding (Phase 2 optimization)
		bool bEnableParallel = true;

		// Minimum cluster count before parallel processing is used
		int32 MinClustersForParallel = 4;
	};



	REALTIMEMESHNANITE_API FRealtimeMeshNaniteResourcesPtr BuildRealtimeNaniteMesh(const FRealtimeMeshNaniteMesh& Mesh, const FRealtimeMeshNaniteBuildSettings& Settings);


}
