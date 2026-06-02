// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.

#include "RealtimeMeshNaniteBuilder.h"

#include "ProfilingDebugging/CpuProfilerTrace.h"
#include "RealtimeMeshGeometryEncoding.h"
#include "RealtimeMeshNaniteBitWriter.h"
#include "RealtimeMeshNaniteBuilderCore.h"
#include "RealtimeMeshNaniteCluster.h"
#include "RealtimeMeshNaniteIndexEncoder.h"
#include "RealtimeMeshNaniteMaterialEncoding.h"
#include "RealtimeMeshNanitePageWriter.h"
#include "RealtimeMeshNaniteUtilities.h"
#include "RealtimeMeshNaniteZigZagStream.h"
#include "Algo/ForEach.h"
#include "Async/ParallelFor.h"
#include "Containers/StaticBitArray.h"
#include "Engine/StaticMesh.h"
#include "Math/Bounds.h"
#include "Rendering/NaniteResources.h"

#if RMC_ENGINE_ABOVE_5_7
#include "Nanite/NaniteFixupChunk.h"
#endif

#if INTEL_ISPC
#include "RealtimeMeshNaniteISPC.ispc.generated.h"
#endif

#if INTEL_ISPC && !UE_BUILD_SHIPPING
static bool bNaniteISPCEnabled = false;
static FAutoConsoleVariableRef CVarNaniteISPC(
	TEXT("r.RealtimeMeshNanite.ISPC"),
	bNaniteISPCEnabled,
	TEXT("Enable ISPC optimizations for Nanite cluster building (default: false)"),
	ECVF_Default);
#endif

namespace RealtimeMesh::Nanite
{
	namespace Internal
	{
#if RMC_ENGINE_ABOVE_5_7
		// ============================================================================
		// UE 5.7 Fixup Chunk Builder Helpers
		// NaniteBuilder module is editor-only, so we reimplement the serialization here
		// ============================================================================

		struct FRMCHierarchyNodeRef
		{
			uint32 NodeIndex;
			uint32 ChildIndex;
		};

		struct FRMCPartFixup
		{
			uint32 PageIndex = MAX_uint32;
			uint32 StartClusterIndex = MAX_uint32;
			uint32 LeafCounter = 0;
			TArray<FRMCHierarchyNodeRef> HierarchyLocations;
		};

		struct FRMCParentFixup
		{
			uint32 PageIndex = MAX_uint32;
			uint32 PartFixupPageIndex = MAX_uint32;
			uint32 PartFixupIndex = MAX_uint32;
			TArray<uint8> ClusterIndices;
		};

		struct FRMCGroupFixup
		{
			::Nanite::FPageRangeKey PageDependencyRangeKey;
			uint32 Flags = 0;
			uint32 FirstPartFixup = MAX_uint32;
			uint32 NumPartFixups = 0;
			TArray<FRMCParentFixup> ParentFixups;
		};

		struct FRMCPageFixups
		{
			TArray<FRMCGroupFixup> GroupFixups;
			TArray<FRMCPartFixup> PartFixups;
			TArray<uint16> ReconsiderPages;
		};

		static void BuildFixupChunkData(TArray<uint8>& OutData, const FRMCPageFixups& PageFixups, uint32 NumClusters)
		{
			// Count totals
			const uint32 TotalGroupFixups = PageFixups.GroupFixups.Num();
			const uint32 TotalPartFixups = PageFixups.PartFixups.Num();
			uint32 TotalParentFixups = 0;
			uint32 TotalHierarchyLocations = 0;
			uint32 TotalClusterIndices = 0;

			for (const FRMCGroupFixup& Group : PageFixups.GroupFixups)
			{
				TotalParentFixups += Group.ParentFixups.Num();
				for (const FRMCParentFixup& Parent : Group.ParentFixups)
				{
					TotalClusterIndices += Parent.ClusterIndices.Num();
				}
			}

			for (const FRMCPartFixup& Part : PageFixups.PartFixups)
			{
				TotalHierarchyLocations += Part.HierarchyLocations.Num();
			}

			// Allocate and populate
			const uint32 Size = ::Nanite::FFixupChunk::GetSize(
				TotalGroupFixups, TotalPartFixups, TotalParentFixups,
				TotalHierarchyLocations, PageFixups.ReconsiderPages.Num(), TotalClusterIndices);

			OutData.SetNumZeroed(Size);
			::Nanite::FFixupChunk& Chunk = *reinterpret_cast<::Nanite::FFixupChunk*>(OutData.GetData());

			// Populate header
			Chunk.Header.Magic = NANITE_FIXUP_MAGIC;
			Chunk.Header.NumGroupFixups = static_cast<uint16>(TotalGroupFixups);
			Chunk.Header.NumPartFixups = static_cast<uint16>(TotalPartFixups);
			Chunk.Header.NumClusters = static_cast<uint16>(NumClusters);
			Chunk.Header.NumReconsiderPages = static_cast<uint16>(PageFixups.ReconsiderPages.Num());
			Chunk.Header.NumParentFixups = TotalParentFixups;
			Chunk.Header.NumHierarchyLocations = TotalHierarchyLocations;
			Chunk.Header.NumClusterIndices = TotalClusterIndices;

			// Populate fixup entries
			uint32 NextGroupOffset = 0;
			uint32 NextPartOffset = 0;
			uint32 NextParentOffset = 0;
			uint32 NextHierarchyOffset = 0;
			uint32 NextClusterOffset = 0;

			for (const FRMCGroupFixup& SrcGroupFixup : PageFixups.GroupFixups)
			{
				::Nanite::FFixupChunk::FGroupFixup& GroupFixup = Chunk.GetGroupFixup(NextGroupOffset++);
				GroupFixup.PageDependencies = SrcGroupFixup.PageDependencyRangeKey;
				GroupFixup.Flags = 0;
				GroupFixup.FirstPartFixup = static_cast<uint16>(SrcGroupFixup.FirstPartFixup);
				GroupFixup.NumPartFixups = static_cast<uint16>(SrcGroupFixup.NumPartFixups);
				GroupFixup.FirstParentFixup = static_cast<uint16>(NextParentOffset);
				GroupFixup.NumParentFixups = static_cast<uint16>(SrcGroupFixup.ParentFixups.Num());

				for (const FRMCParentFixup& SrcParentFixup : SrcGroupFixup.ParentFixups)
				{
					::Nanite::FFixupChunk::FParentFixup& ParentFixup = Chunk.GetParentFixup(NextParentOffset++);
					ParentFixup.PageIndex = static_cast<uint16>(SrcParentFixup.PageIndex);
					ParentFixup.PartFixupPageIndex = static_cast<uint16>(SrcParentFixup.PartFixupPageIndex);
					ParentFixup.PartFixupIndex = static_cast<uint16>(SrcParentFixup.PartFixupIndex);
					ParentFixup.NumClusterIndices = static_cast<uint16>(SrcParentFixup.ClusterIndices.Num());
					ParentFixup.FirstClusterIndex = static_cast<uint16>(NextClusterOffset);

					for (uint8 ClusterIndex : SrcParentFixup.ClusterIndices)
					{
						Chunk.GetClusterIndex(NextClusterOffset++) = ClusterIndex;
					}
				}
			}

			for (const FRMCPartFixup& SrcPartFixup : PageFixups.PartFixups)
			{
				::Nanite::FFixupChunk::FPartFixup& PartFixup = Chunk.GetPartFixup(NextPartOffset++);
				PartFixup.PageIndex = static_cast<uint16>(SrcPartFixup.PageIndex);
				PartFixup.StartClusterIndex = static_cast<uint8>(SrcPartFixup.StartClusterIndex);
				PartFixup.LeafCounter = static_cast<uint8>(SrcPartFixup.LeafCounter);
				PartFixup.FirstHierarchyLocation = NextHierarchyOffset;
				PartFixup.NumHierarchyLocations = static_cast<uint32>(SrcPartFixup.HierarchyLocations.Num());

				for (const FRMCHierarchyNodeRef& NodeRef : SrcPartFixup.HierarchyLocations)
				{
					Chunk.GetHierarchyLocation(NextHierarchyOffset++) = ::Nanite::FFixupChunk::FHierarchyLocation(NodeRef.NodeIndex, NodeRef.ChildIndex);
				}
			}

			for (int32 i = 0; i < PageFixups.ReconsiderPages.Num(); i++)
			{
				Chunk.GetReconsiderPageIndex(i) = PageFixups.ReconsiderPages[i];
			}

			check(NextGroupOffset == TotalGroupFixups);
			check(NextPartOffset == TotalPartFixups);
			check(NextParentOffset == TotalParentFixups);
			check(NextHierarchyOffset == TotalHierarchyLocations);
			check(NextClusterOffset == TotalClusterIndices);
		}
#endif // RMC_ENGINE_ABOVE_5_7
		// ============================================================================

		static void PackAllClusterIndices(FRealtimeNaniteMeshBuildContext& BuildContext)
		{
			TRACE_CPUPROFILER_EVENT_SCOPE(RealtimeMeshNanite::PackAllClusterIndices);

			const int32 NumClusters = BuildContext.Mesh.Clusters.Num();

			// Use parallel path if enabled and we have enough clusters
			if (BuildContext.Settings.bEnableParallel && NumClusters >= BuildContext.Settings.MinClustersForParallel)
			{
				ParallelFor(NumClusters, [&BuildContext](int32 ClusterIndex)
				{
					BuildContext.ClusterContexts[ClusterIndex].PackedIndices =
						RealtimeMeshEncodeIndices(BuildContext.Mesh.Clusters[ClusterIndex].GetIndices());
				});
			}
			else
			{
				// Sequential fallback for small cluster counts
				for (auto It = BuildContext.Mesh.Clusters.CreateConstIterator(); It; ++It)
				{
					BuildContext.ClusterContexts[It.GetIndex()].PackedIndices = RealtimeMeshEncodeIndices(It->GetIndices());
				}
			}
		}

		static void BuildVertexReuseClusterSingle(const FRealtimeMeshNaniteCluster& Cluster, FRealtimeMeshClusterBuildContext& ClusterContext)
		{
			ClusterContext.MaterialRangeBatchTriCounts.SetNum(Cluster.GetMaterialRanges().Num());

			for (auto MaterialRangeIt = Cluster.GetMaterialRanges().CreateConstIterator(); MaterialRangeIt; ++MaterialRangeIt)
			{
				auto& BatchTriCounts = ClusterContext.MaterialRangeBatchTriCounts[MaterialRangeIt.GetIndex()];

				TStaticBitArray<NANITE_MAX_CLUSTER_VERTICES> UsedVertMask;
				uint32 NumUniqueVerts = 0;
				uint32 NumTris = 0;
				const uint32 MaxBatchVerts = 32;
				const uint32 MaxBatchTris = 32;
				const uint32 TriIndexEnd = MaterialRangeIt->RangeStart + MaterialRangeIt->RangeLength;

				BatchTriCounts.Reset();

				for (uint32 TriIndex = MaterialRangeIt->RangeStart; TriIndex < TriIndexEnd; ++TriIndex)
				{
					const uint32 VertIndex0 = Cluster.GetIndices()[TriIndex * 3 + 0];
					const uint32 VertIndex1 = Cluster.GetIndices()[TriIndex * 3 + 1];
					const uint32 VertIndex2 = Cluster.GetIndices()[TriIndex * 3 + 2];

					auto Bit0 = UsedVertMask[VertIndex0];
					auto Bit1 = UsedVertMask[VertIndex1];
					auto Bit2 = UsedVertMask[VertIndex2];

					// If adding this tri to the current batch will result in too many unique verts, start a new batch
					const uint32 NumNewUniqueVerts = uint32(!Bit0) + uint32(!Bit1) + uint32(!Bit2);
					if (NumUniqueVerts + NumNewUniqueVerts > MaxBatchVerts)
					{
						checkSlow(NumTris > 0);
						BatchTriCounts.Add(uint8(NumTris));
						NumUniqueVerts = 0;
						NumTris = 0;
						UsedVertMask = TStaticBitArray<NANITE_MAX_CLUSTER_VERTICES>();
						--TriIndex;
						continue;
					}

					Bit0 = true;
					Bit1 = true;
					Bit2 = true;
					NumUniqueVerts += NumNewUniqueVerts;
					++NumTris;

					if (NumTris == MaxBatchTris)
					{
						BatchTriCounts.Add(uint8(NumTris));
						NumUniqueVerts = 0;
						NumTris = 0;
						UsedVertMask = TStaticBitArray<NANITE_MAX_CLUSTER_VERTICES>();
					}
				}

				if (NumTris > 0)
				{
					BatchTriCounts.Add(uint8(NumTris));
				}
			}
		}

		static void BuildAllVertexReuseClusters(FRealtimeNaniteMeshBuildContext& BuildContext)
		{
			TRACE_CPUPROFILER_EVENT_SCOPE(RealtimeMeshNanite::BuildAllVertexReuseClusters);

			const int32 NumClusters = BuildContext.Mesh.Clusters.Num();

			// Use parallel path if enabled and we have enough clusters
			if (BuildContext.Settings.bEnableParallel && NumClusters >= BuildContext.Settings.MinClustersForParallel)
			{
				ParallelFor(NumClusters, [&BuildContext](int32 ClusterIndex)
				{
					const FRealtimeMeshNaniteCluster& Cluster = BuildContext.Mesh.Clusters[ClusterIndex];
					FRealtimeMeshClusterBuildContext& ClusterContext = BuildContext.ClusterContexts[ClusterIndex];
					BuildVertexReuseClusterSingle(Cluster, ClusterContext);
				});
			}
			else
			{
				// Sequential fallback for small cluster counts
				for (auto ClusterIt = BuildContext.Mesh.Clusters.CreateConstIterator(); ClusterIt; ++ClusterIt)
				{
					const FRealtimeMeshNaniteCluster& Cluster = *ClusterIt;
					FRealtimeMeshClusterBuildContext& ClusterContext = BuildContext.ClusterContexts[ClusterIt.GetIndex()];
					BuildVertexReuseClusterSingle(Cluster, ClusterContext);
				}
			}
		}
		
		static void PackHierarchyNode(::Nanite::FPackedHierarchyNode& OutNode, const FRealtimeMeshNaniteHierarchyNode& InNode)
		{
			for (uint32 i = 0; i < NANITE_MAX_BVH_NODE_FANOUT; i++)
			{
				const auto& InElement = InNode.Children[i];

				OutNode.LODBounds[i] = FVector4f(InElement.LODBounds.Center, InElement.LODBounds.W);

				OutNode.Misc0[i].BoxBoundsCenter = InElement.Bounds.GetCenter();
				OutNode.Misc1[i].BoxBoundsExtent = InElement.Bounds.GetExtent();

				check(InElement.NumChildren <= NANITE_MAX_CLUSTERS_PER_GROUP);
#if RMC_ENGINE_ABOVE_5_7
				// UE 5.7+: Lower 16 bits = MaxParentLODError, Upper 16 bits = MinLODError
				OutNode.Misc0[i].MinLODError_MaxParentLODError = FFloat16(InElement.MaxParentLODError).Encoded | (FFloat16(InElement.MinLODError).Encoded << 16);
#else
				// UE 5.5/5.6: Lower 16 bits = MinLODError, Upper 16 bits = MaxParentLODError
				OutNode.Misc0[i].MinLODError_MaxParentLODError = FFloat16(InElement.MinLODError).Encoded | (FFloat16(InElement.MaxParentLODError).Encoded << 16);
#endif
				OutNode.Misc1[i].ChildStartReference = InElement.ChildStartIndex;

	#if RMC_ENGINE_ABOVE_5_7
				// UE 5.7: Misc2 has two separate fields
				// ResourcePageRangeKey: Page range for streaming
				// GroupPartSize_AssemblyPartIndex: Packed field with:
				//   - Bits 0-15:  AssemblyTransformIndex (0 for non-assembly meshes)
				//   - Bits 16-24: NumChildren (GroupPartSize)
				if (InElement.NumChildren != 0)
				{
					if (InElement.NumChildren > 0)
					{
						// Leaf node - ResourcePageRangeKey is empty (root page only, no streaming)
						// GroupPartSize goes in upper bits, AssemblyTransformIndex = 0 in lower bits
						OutNode.Misc2[i].ResourcePageRangeKey = ::Nanite::FPageRangeKey().Value;
						OutNode.Misc2[i].GroupPartSize_AssemblyPartIndex = static_cast<uint32>(InElement.NumChildren) << 16;
					}
					else
					{
						// Hierarchy node (NumChildren < 0 means internal node pointer). Mark as invalid.
						OutNode.Misc2[i].ResourcePageRangeKey = 0xFFFFFFFFu;
						OutNode.Misc2[i].GroupPartSize_AssemblyPartIndex = 0xFFFFFFFFu;
					}
				}
				else
				{
					// Empty child slot
					OutNode.Misc2[i].ResourcePageRangeKey = 0;
					OutNode.Misc2[i].GroupPartSize_AssemblyPartIndex = 0;
				}
#else
				// UE 5.5/5.6: Single composite field
				uint32 ResourcePageIndex_NumPages_GroupPartSize = 0;
				if (InElement.NumChildren != 0)
				{
					if (InElement.NumChildren > 0)
					{
						// Leaf node
						static constexpr uint32 PageIndexStart = 0;
						static constexpr uint32 PageIndexNum = 0;
						const uint32 GroupPartSize = InElement.NumChildren;

						/*const FClusterGroup& Group = Groups[GroupParts[InNode.ClusterGroupPartIndex[i]].GroupIndex];
						uint32 GroupPartSize = InNode.NumChildren[ i ];

						// If group spans multiple pages, request all of them, except the root pages
						uint32 PageIndexStart = Group.PageIndexStart;
						uint32 PageIndexNum = Group.PageIndexNum;
						RemoveRootPagesFromRange(PageIndexStart, PageIndexNum, NumResourceRootPages);*/

						ResourcePageIndex_NumPages_GroupPartSize =
							(PageIndexStart << (NANITE_MAX_CLUSTERS_PER_GROUP_BITS + NANITE_MAX_GROUP_PARTS_BITS))
							// ReSharper disable once CppEqualOperandsInBinaryExpression
							| (PageIndexNum << NANITE_MAX_CLUSTERS_PER_GROUP_BITS)
							| GroupPartSize;
					}
					else
					{
						// Hierarchy node. No resource page or group size.
						ResourcePageIndex_NumPages_GroupPartSize = 0xFFFFFFFFu;
					}
				}
				OutNode.Misc2[i].ResourcePageIndex_NumPages_GroupPartSize = ResourcePageIndex_NumPages_GroupPartSize;
#endif
			}
		}

		static void PackBVHTree(FRealtimeNaniteMeshBuildContext& BuildContext)
		{
			TRACE_CPUPROFILER_EVENT_SCOPE(RealtimeMeshNanite::PackBVHTree);
			BuildContext.BuiltData.HierarchyNodes.SetNumUninitialized(BuildContext.Mesh.HierarchyNodes.Num());
			for (int32 NodeIndex = 0; NodeIndex < BuildContext.Mesh.HierarchyNodes.Num(); ++NodeIndex)
			{
				const FRealtimeMeshNaniteHierarchyNode& InNode = BuildContext.Mesh.HierarchyNodes[NodeIndex];
				::Nanite::FPackedHierarchyNode& OutNode = BuildContext.BuiltData.HierarchyNodes[NodeIndex];
				PackHierarchyNode(OutNode, InNode);

				// If this node references clusters, store the node/child index for the cluster fixup
				for (int32 ChildIdx = 0; ChildIdx < InNode.Children.Num(); ++ChildIdx)
				{
					const FRealtimeMeshNaniteHierarchyNode::FElement& Child = InNode.Children[ChildIdx];

					if (Child.NumChildren > 0 && Child.ChildStartIndex != 0xFFFFFFFFu)
					{
						for (int32 ClusterIdx = 0; ClusterIdx < Child.NumChildren; ++ClusterIdx)
						{
							BuildContext.ClusterContexts[Child.ChildStartIndex + ClusterIdx].ParentHierarchyNode = NodeIndex;
							BuildContext.ClusterContexts[Child.ChildStartIndex + ClusterIdx].ParentHierarchyChildIndex = ChildIdx;
						}
					}
				}
			}
		}

		static FEncodingInfo CalculateClusterEncodingInfo(const FRealtimeMeshNaniteCluster& Cluster,
			const FRealtimeMeshClusterBuildContext& ClusterContext, const FEncodingSettings& Settings)
		{
			const FBounds3f Bounds = Cluster.GetBounds();

			FEncodingInfo Info;
			Info.Settings = Settings;

			Info.BitsPerIndex = FMath::FloorLog2(ClusterContext.PackedIndices.FinalVertices.Num() - 1) + 1;
			Info.BitsPerAttribute = 2 * Settings.NormalBits;

			{
				const float QuantizationScale = FMath::Exp2(float(Settings.PositionPrecision));

				const FIntVector Min = FNaniteMath::FloorToInt32(Bounds.Min * QuantizationScale);
				const FIntVector Max = FNaniteMath::CeilToInt32(Bounds.Max * QuantizationScale);

				Info.PositionMin = Min;
				Info.PositionBits.X = FMath::CeilLogTwo(Max.X - Min.X + 1);
				Info.PositionBits.Y = FMath::CeilLogTwo(Max.Y - Min.Y + 1);
				Info.PositionBits.Z = FMath::CeilLogTwo(Max.Z - Min.Z + 1);

				if (!ensure(Info.PositionBits.GetMax() <= NANITE_MAX_POSITION_QUANTIZATION_BITS))
				{
					UE_LOG(LogTemp, Error, TEXT("RealtimeNaniteMeshBuilder: PositionBits out of valid Nanite range."));
#if RMC_ENGINE_ABOVE_5_5
					Info.PositionBits = Info.PositionBits.ComponentMin(FIntVector(NANITE_MAX_POSITION_QUANTIZATION_BITS));
#else
					Info.PositionBits.X = FMath::Min(Info.PositionBits.X, NANITE_MAX_POSITION_QUANTIZATION_BITS);
					Info.PositionBits.Y = FMath::Min(Info.PositionBits.Y, NANITE_MAX_POSITION_QUANTIZATION_BITS);
					Info.PositionBits.Z = FMath::Min(Info.PositionBits.Z, NANITE_MAX_POSITION_QUANTIZATION_BITS);
#endif
				}
			}

			{
				Info.ColorMin = FColor(ForceInit);
				Info.ColorMax = FColor(ForceInit);

				if (Cluster.HasColors())
				{
					Info.ColorMin = Info.ColorMax = Cluster.GetColors()[ClusterContext.PackedIndices.FinalVertices[0]];

					for (auto ColorIndex : ClusterContext.PackedIndices.FinalVertices)
					{
						const auto Color = Cluster.GetColors()[ColorIndex];

						Info.ColorMin.R = FMath::Min(Info.ColorMin.R, Color.R);
						Info.ColorMin.G = FMath::Min(Info.ColorMin.G, Color.G);
						Info.ColorMin.B = FMath::Min(Info.ColorMin.B, Color.B);
						Info.ColorMin.A = FMath::Min(Info.ColorMin.A, Color.A);

						Info.ColorMax.R = FMath::Max(Info.ColorMax.R, Color.R);
						Info.ColorMax.G = FMath::Max(Info.ColorMax.G, Color.G);
						Info.ColorMax.B = FMath::Max(Info.ColorMax.B, Color.B);
						Info.ColorMax.A = FMath::Max(Info.ColorMax.A, Color.A);
					}
				}

				if (Info.ColorMin == Info.ColorMax)
				{
					Info.ColorBits = FIntVector4(0);
				}
				else
				{
					Info.ColorBits.X = FMath::CeilLogTwo(int32(Info.ColorMax.R) - int32(Info.ColorMin.R) + 1);
					Info.ColorBits.Y = FMath::CeilLogTwo(int32(Info.ColorMax.G) - int32(Info.ColorMin.G) + 1);
					Info.ColorBits.Z = FMath::CeilLogTwo(int32(Info.ColorMax.B) - int32(Info.ColorMin.B) + 1);
					Info.ColorBits.W = FMath::CeilLogTwo(int32(Info.ColorMax.A) - int32(Info.ColorMin.A) + 1);

					Info.BitsPerAttribute += Info.ColorBits.X;
					Info.BitsPerAttribute += Info.ColorBits.Y;
					Info.BitsPerAttribute += Info.ColorBits.Z;
					Info.BitsPerAttribute += Info.ColorBits.W;
				}
			}

			for (int32 UVIndex = 0; UVIndex < Cluster.NumUVChannels(); UVIndex++)
			{
				FUVRange& UVRange = Info.UVRanges.Emplace_GetRef();
				FUintVector2 UVMin = FUintVector2(0xFFFFFFFFu, 0xFFFFFFFFu);
				FUintVector2 UVMax = FUintVector2(0u, 0u);

				for (const FVector2f& UV : Cluster.GetUVs(UVIndex))
				{
					const uint32 EncodedU = EncodeUVFloat(UV.X, NANITE_UV_FLOAT_NUM_MANTISSA_BITS);
					const uint32 EncodedV = EncodeUVFloat(UV.Y, NANITE_UV_FLOAT_NUM_MANTISSA_BITS);

					UVMin.X = FMath::Min(UVMin.X, EncodedU);
					UVMin.Y = FMath::Min(UVMin.Y, EncodedV);
					UVMax.X = FMath::Max(UVMax.X, EncodedU);
					UVMax.Y = FMath::Max(UVMax.Y, EncodedV);
				}

				const FUintVector2 UVDelta = UVMax - UVMin;

				UVRange.Min = UVMin;
				UVRange.NumBits.X = FMath::CeilLogTwo(UVDelta.X + 1u);
				UVRange.NumBits.Y = FMath::CeilLogTwo(UVDelta.Y + 1u);

				Info.BitsPerAttribute += UVRange.NumBits.X + UVRange.NumBits.Y;
				Info.UVMins.Add(UVRange.Min);
			}

			FPageSections& GpuSizes = Info.GpuSizes;
			GpuSizes.Cluster = sizeof(FPackedCluster);

			GpuSizes.MaterialTable = (Cluster.GetMaterialRanges().Num() > 3 ? Cluster.GetMaterialRanges().Num() : 0) * sizeof(uint32);
			GpuSizes.VertReuseBatchInfo = Cluster.GetMaterialRanges().Num() > 3 ? CalcVertReuseBatchInfoSize(Cluster.GetMaterialRanges(), ClusterContext.MaterialRangeBatchTriCounts) * sizeof(uint32) : 0;
			GpuSizes.DecodeInfo = Cluster.NumUVChannels() * sizeof(FPackedUVRange);

			const int32 BitsPerTriangle = Info.BitsPerIndex + 2 * 5; // Base index + two 5-bit offsets
			GpuSizes.Index = FMath::DivideAndRoundUp(Cluster.GetNumTriangles() * BitsPerTriangle, 32) * sizeof(uint32);

			const int32 PositionBitsPerVertex =
				Info.PositionBits.X +
				Info.PositionBits.Y +
				Info.PositionBits.Z;

			GpuSizes.Position = FMath::DivideAndRoundUp(ClusterContext.PackedIndices.FinalVertices.Num() * PositionBitsPerVertex, 32) * sizeof(uint32);
			GpuSizes.Attribute = FMath::DivideAndRoundUp(ClusterContext.PackedIndices.FinalVertices.Num() * Info.BitsPerAttribute, 32) * sizeof(uint32);

			return Info;
		}

		static void CalculatePageLayout(FRealtimeNaniteMeshBuildContext& BuildContext)
		{
			TRACE_CPUPROFILER_EVENT_SCOPE(RealtimeMeshNanite::CalculatePageLayout);
			FEncodingSettings& EncodingSettings = BuildContext.EncodingSettings;
			EncodingSettings.PositionPrecision = BuildContext.Settings.PositionPrecision;
			EncodingSettings.NormalBits = BuildContext.Settings.NormalBits;

			const int32 NumClusters = BuildContext.Mesh.Clusters.Num();

			// Pass 1: Calculate encoding info for all clusters (can be parallel)
			{
				TRACE_CPUPROFILER_EVENT_SCOPE(RealtimeMeshNanite::CalculatePageLayout_EncodingInfo);

				if (BuildContext.Settings.bEnableParallel && NumClusters >= BuildContext.Settings.MinClustersForParallel)
				{
					ParallelFor(NumClusters, [&BuildContext, &EncodingSettings](int32 ClusterIndex)
					{
						const FRealtimeMeshNaniteCluster& Cluster = BuildContext.Mesh.Clusters[ClusterIndex];
						FRealtimeMeshClusterBuildContext& ClusterContext = BuildContext.ClusterContexts[ClusterIndex];
						ClusterContext.EncodingInfo = CalculateClusterEncodingInfo(Cluster, ClusterContext, EncodingSettings);
					});
				}
				else
				{
					for (int32 ClusterIndex = 0; ClusterIndex < NumClusters; ++ClusterIndex)
					{
						const FRealtimeMeshNaniteCluster& Cluster = BuildContext.Mesh.Clusters[ClusterIndex];
						FRealtimeMeshClusterBuildContext& ClusterContext = BuildContext.ClusterContexts[ClusterIndex];
						ClusterContext.EncodingInfo = CalculateClusterEncodingInfo(Cluster, ClusterContext, EncodingSettings);
					}
				}
			}

			// Pass 2: Assign clusters to pages (must be sequential due to size tracking)
			{
				TRACE_CPUPROFILER_EVENT_SCOPE(RealtimeMeshNanite::CalculatePageLayout_PageAssignment);

				BuildContext.PageContexts.SetNum(1);

				for (int32 ClusterIndex = 0; ClusterIndex < NumClusters; ++ClusterIndex)
				{
					const FRealtimeMeshClusterBuildContext& ClusterContext = BuildContext.ClusterContexts[ClusterIndex];
					const int32 TotalClusterSize = ClusterContext.EncodingInfo.GpuSizes.GetTotal();

					FRealtimeMeshPageBuildContext* LastPage = &BuildContext.PageContexts.Last();
					if ((LastPage->TotalSize + TotalClusterSize) > NANITE_ROOT_PAGE_GPU_SIZE ||
						LastPage->Clusters.Num() >= NANITE_ROOT_PAGE_MAX_CLUSTERS)
					{
						LastPage = &BuildContext.PageContexts.Emplace_GetRef();
					}

					LastPage->Clusters.Add(ClusterIndex);
					LastPage->TotalSize += TotalClusterSize;
				}
			}
		}
		
		static FPackedCluster PackCluster(const FRealtimeMeshNaniteCluster& Cluster, const FRealtimeMeshClusterBuildContext& ClusterContext)
		{
			const FBounds3f Bounds = Cluster.GetBounds();

			const float MaxEdgeLength = [&]()
			{
#if INTEL_ISPC
#if !UE_BUILD_SHIPPING
				if (bNaniteISPCEnabled)
#endif
				{
					// ISPC vectorized path - FVector3f is layout-compatible with float[3]
					const float MaxEdgeLengthSquared = ispc::CalculateMaxEdgeLengthSquaredSingle(
						reinterpret_cast<const float*>(Cluster.GetVertices().GetData()),
						Cluster.GetIndices().GetData(),
						Cluster.GetNumTriangles());
					return FMath::Sqrt(MaxEdgeLengthSquared);
				}
#endif
#if !INTEL_ISPC || !UE_BUILD_SHIPPING
				// Scalar fallback
				float MaxEdgeLengthSquared = 0;
				for (int32 TriangleIndex = 0; TriangleIndex < Cluster.GetNumTriangles(); TriangleIndex++)
				{
					const FVector3f A = Cluster.GetVertices()[Cluster.GetIndices()[3 * TriangleIndex + 0]];
					const FVector3f B = Cluster.GetVertices()[Cluster.GetIndices()[3 * TriangleIndex + 1]];
					const FVector3f C = Cluster.GetVertices()[Cluster.GetIndices()[3 * TriangleIndex + 2]];

					MaxEdgeLengthSquared = FMath::Max(MaxEdgeLengthSquared, FVector3f::DistSquared(A, B));
					MaxEdgeLengthSquared = FMath::Max(MaxEdgeLengthSquared, FVector3f::DistSquared(B, C));
					MaxEdgeLengthSquared = FMath::Max(MaxEdgeLengthSquared, FVector3f::DistSquared(A, C));
				}
				return FMath::Sqrt(MaxEdgeLengthSquared);
#endif
			}();

			FPackedCluster Result;
			FMemory::Memzero(Result);

			Result.SetNumVerts(ClusterContext.PackedIndices.FinalVertices.Num());
			Result.SetNumTris(Cluster.GetNumTriangles());

			if (!Cluster.HasColors())
			{
				Result.SetColorMode(NANITE_VERTEX_COLOR_MODE_CONSTANT);
				Result.ColorMin = FColor::White.ToPackedABGR();
			}
			else if (ClusterContext.EncodingInfo.ColorBits == FIntVector4(0))
			{
				Result.SetColorMode(NANITE_VERTEX_COLOR_MODE_CONSTANT);
				Result.ColorMin = ClusterContext.EncodingInfo.ColorMin.ToPackedABGR();
			}
			else
			{
				Result.SetColorMode(NANITE_VERTEX_COLOR_MODE_VARIABLE);
				Result.SetColorBitsR(ClusterContext.EncodingInfo.ColorBits.X);
				Result.SetColorBitsG(ClusterContext.EncodingInfo.ColorBits.Y);
				Result.SetColorBitsB(ClusterContext.EncodingInfo.ColorBits.Z);
				Result.SetColorBitsA(ClusterContext.EncodingInfo.ColorBits.W);
				Result.ColorMin = ClusterContext.EncodingInfo.ColorMin.ToPackedABGR();
			}

			Result.SetGroupIndex(0);
			Result.SetBitsPerIndex(ClusterContext.EncodingInfo.BitsPerIndex);

			Result.PosStart = ClusterContext.EncodingInfo.PositionMin;
			Result.SetPosPrecision(ClusterContext.EncodingInfo.Settings.PositionPrecision);
			Result.SetPosBitsX(ClusterContext.EncodingInfo.PositionBits.X);
			Result.SetPosBitsY(ClusterContext.EncodingInfo.PositionBits.Y);
			Result.SetPosBitsZ(ClusterContext.EncodingInfo.PositionBits.Z);

#if RMC_ENGINE_ABOVE_5_6
			Result.LODBounds = FSphere3f(Bounds.GetCenter(), Bounds.GetSize().Length());
#else
			Result.LODBounds = FVector4f(
				Bounds.GetCenter().X,
				Bounds.GetCenter().Y,
				Bounds.GetCenter().Z,
				Bounds.GetSize().Length());
#endif

			Result.BoxBoundsCenter = FVector3f(Bounds.GetCenter());

			Result.LODErrorAndEdgeLength =
				(uint32(FFloat16(0.1f /* TODO? InCluster.LODError*/).Encoded) << 0) |
				(uint32(FFloat16(MaxEdgeLength).Encoded) << 16);

			Result.BoxBoundsExtent = FVector3f(Bounds.GetExtent());

#if RMC_ENGINE_ABOVE_5_6
			Result.SetFlags(NANITE_CLUSTER_FLAG_STREAMING_LEAF | NANITE_CLUSTER_FLAG_ROOT_LEAF);
#else
			Result.Flags = NANITE_CLUSTER_FLAG_STREAMING_LEAF | NANITE_CLUSTER_FLAG_ROOT_LEAF;
#endif
			Result.SetBitsPerAttribute(ClusterContext.EncodingInfo.BitsPerAttribute);
			Result.SetNormalPrecision(ClusterContext.EncodingInfo.Settings.NormalBits);
			Result.SetHasTangents(false);
			Result.SetNumUVs(Cluster.NumUVChannels());

			check(Cluster.NumUVChannels() <= NANITE_MAX_UVS);

			uint32 BitOffset = 0;
			for (int32 UVIndex = 0; UVIndex < Cluster.NumUVChannels(); UVIndex++)
			{
				checkSlow(BitOffset < 256);
				Result.UVBitOffsets |= BitOffset << (UVIndex * 8);

				const FUVRange& UVRange = ClusterContext.EncodingInfo.UVRanges[UVIndex];
				BitOffset += UVRange.NumBits.X + UVRange.NumBits.Y;
			}

			return Result;
		}

		static void WritePage(FRealtimeNaniteMeshBuildContext& BuildContext, FRealtimeMeshNanitePageWriter& PageWriter, int32 PageIndex)
		{
			check(PageWriter.Num() % sizeof(uint32) == 0);

			const int32 PageStartIndex = PageWriter.Num();
			const auto GetCurrentPageOffset = [&]()
			{
				return PageWriter.Num() - PageStartIndex;
			};

			TArray<int32>& PageClusters = BuildContext.PageContexts[PageIndex].Clusters;

			TArray<uint32> MaterialRangeData;
			TArray<uint32> VertReuseBatchInfo;

			FPageSections PageGpuSizes;
			for (int32 ClusterIndex : PageClusters)
			{
				const FRealtimeMeshNaniteCluster& Cluster = BuildContext.Mesh.Clusters[ClusterIndex];
				FRealtimeMeshClusterBuildContext& ClusterContext = BuildContext.ClusterContexts[ClusterIndex];
				PageGpuSizes += ClusterContext.EncodingInfo.GpuSizes;
				
				checkSlow(Cluster.GetNumTriangles() <= NANITE_MAX_CLUSTER_TRIANGLES);
				checkSlow(Cluster.NumUVChannels() == BuildContext.NumUVs);
			}
			
			FPageSections GpuSectionOffsets = PageGpuSizes.GetOffsets();

			const uint32 NumPackedClusterDwords = PageClusters.Num() * sizeof(FPackedCluster) / sizeof(uint32);
			const uint32 MaterialTableStartOffsetInDwords = (NANITE_GPU_PAGE_HEADER_SIZE / 4) + NumPackedClusterDwords;

			TArray<FPackedCluster> PackedClusters;
			PackedClusters.Reserve(PageClusters.Num());
			for (auto It = PageClusters.CreateConstIterator(); It; ++It)
			{
				const int32 ClusterPageIndex = It.GetIndex();
				const int32 ClusterIndex = *It;

				const auto& Cluster = BuildContext.Mesh.Clusters[ClusterIndex];
				const auto& ClusterContext = BuildContext.ClusterContexts[ClusterIndex];
				const FEncodingInfo& Info = ClusterContext.EncodingInfo;

				FPackedCluster& PackedCluster = PackedClusters.Emplace_GetRef();
				PackedCluster = PackCluster(Cluster, ClusterContext);
				
				PackedCluster.PackedMaterialInfo = PackMaterialInfo(Cluster, MaterialRangeData, MaterialTableStartOffsetInDwords); // uint32(Cluster.GetNumTriangles() - 1) << 18;

				checkSlow(GpuSectionOffsets.Index % 4 == 0);
				checkSlow(GpuSectionOffsets.Position % 4 == 0);
				checkSlow(GpuSectionOffsets.Attribute % 4 == 0);
				PackedCluster.SetIndexOffset(GpuSectionOffsets.Index);
				PackedCluster.SetPositionOffset(GpuSectionOffsets.Position);
				PackedCluster.SetAttributeOffset(GpuSectionOffsets.Attribute);
				PackedCluster.SetDecodeInfoOffset(GpuSectionOffsets.DecodeInfo);

				{
					TArray<uint32> LocalVertReuseBatchInfo;
					PackVertReuseBatchInfo(MakeArrayView(Cluster.GetMaterialRanges()), LocalVertReuseBatchInfo, ClusterContext.MaterialRangeBatchTriCounts);

					PackedCluster.SetVertResourceBatchInfo(LocalVertReuseBatchInfo, GpuSectionOffsets.VertReuseBatchInfo, Cluster.GetMaterialRanges().Num());
					if (Cluster.GetMaterialRanges().Num() > 3)
					{
						VertReuseBatchInfo.Append(MoveTemp(LocalVertReuseBatchInfo));
					}
				}

				GpuSectionOffsets += Info.GpuSizes;
			}
			checkSlow(GpuSectionOffsets.Cluster == PageGpuSizes.GetMaterialTableOffset());
			checkSlow(Align(GpuSectionOffsets.MaterialTable, 16) == PageGpuSizes.GetVertReuseBatchInfoOffset());
			checkSlow(Align(GpuSectionOffsets.VertReuseBatchInfo, 16) == PageGpuSizes.GetDecodeInfoOffset());
			checkSlow(GpuSectionOffsets.DecodeInfo == PageGpuSizes.GetIndexOffset());
			checkSlow(GpuSectionOffsets.Index == PageGpuSizes.GetPositionOffset());
			checkSlow(GpuSectionOffsets.Position == PageGpuSizes.GetAttributeOffset());
			checkSlow(GpuSectionOffsets.Attribute == PageGpuSizes.GetTotal());

			ensure(PageGpuSizes.GetTotal() <= NANITE_ROOT_PAGE_GPU_SIZE);

			// 16-byte align material range data to make it easy to copy during GPU transcoding
			MaterialRangeData.SetNum(Align(MaterialRangeData.Num(), 4));
			VertReuseBatchInfo.SetNum(Align(VertReuseBatchInfo.Num(), 4));

			auto PageDiskHeader = PageWriter.AppendLatentEntry<FPageDiskHeader>();
			PageDiskHeader->NumClusters = PageClusters.Num();

			auto ClusterDiskHeaders = PageWriter.AppendLatentEntryArray<FClusterDiskHeader>(PageClusters.Num());
			const int32 RawFloat4StartOffset = GetCurrentPageOffset();

			{
				TRACE_CPUPROFILER_EVENT_SCOPE(RealtimeMeshNanite::WritePage_GPUHeader);
				auto GPUPageHeader = PageWriter.AppendLatentEntry<FPageGPUHeader>();
				GPUPageHeader->NumClusters = PageClusters.Num();

				static_assert(sizeof(FPackedCluster) % 16 == 0);
				constexpr int32 VectorPerCluster = sizeof(FPackedCluster) / 16;

				const TConstArrayView<FVector4f> VectorArray = MakeConstArrayView<FVector4f>(reinterpret_cast<const FVector4f*>(PackedClusters.GetData()), PackedClusters.Num() * VectorPerCluster);
				for (int32 VectorIndex = 0; VectorIndex < VectorPerCluster; VectorIndex++)
				{
					for (int32 ClusterIndex = 0; ClusterIndex < PackedClusters.Num(); ClusterIndex++)
					{
						PageWriter.Add(VectorArray[ClusterIndex * VectorPerCluster + VectorIndex]);
					}
				}
			}

			{
				TRACE_CPUPROFILER_EVENT_SCOPE(RealtimeMeshNanite::WritePage_MaterialTable);
				// Material table
				uint32 MaterialTableSize = MaterialRangeData.Num() * MaterialRangeData.GetTypeSize();
				PageWriter.Append(MakeConstArrayView(MaterialRangeData));
				checkSlow(MaterialTableSize == PageGpuSizes.GetMaterialTableSize());
			}

			{
				TRACE_CPUPROFILER_EVENT_SCOPE(RealtimeMeshNanite::WritePage_VertReuseBatch);
				// Vert reuse batch info
				const uint32 VertReuseBatchInfoSize = VertReuseBatchInfo.Num() * VertReuseBatchInfo.GetTypeSize();
				PageWriter.Append(MakeConstArrayView(VertReuseBatchInfo));
				checkSlow(VertReuseBatchInfoSize == PageGpuSizes.GetVertReuseBatchInfoSize());
			}

			{
#if RMC_ENGINE_ABOVE_5_7
				// UE 5.7: DecodeInfoOffset is per-cluster in FClusterDiskHeader
				const int32 DecodeInfoSectionStartOffset = GetCurrentPageOffset();

				for (int32 ClusterIndex = 0; ClusterIndex < PageClusters.Num(); ClusterIndex++)
				{
					// Store this cluster's decode info offset
					ClusterDiskHeaders[ClusterIndex].DecodeInfoOffset = GetCurrentPageOffset();

					const auto& ClusterContext = BuildContext.ClusterContexts[PageClusters[ClusterIndex]];
					const FEncodingInfo& Info = ClusterContext.EncodingInfo;

					for (int32 UVIndex = 0; UVIndex < BuildContext.NumUVs; UVIndex++)
					{
						const FUVRange UVRange = Info.UVRanges[UVIndex];

						checkSlow(UVRange.NumBits.X <= NANITE_UV_FLOAT_MAX_BITS && UVRange.NumBits.Y <= NANITE_UV_FLOAT_MAX_BITS);
						checkSlow(UVRange.Min.X < (1u << NANITE_UV_FLOAT_MAX_BITS) && UVRange.Min.Y < (1u << NANITE_UV_FLOAT_MAX_BITS));

						FPackedUVRange PackedUVRange;
						PackedUVRange.Data.X = (UVRange.Min.X << 5) | UVRange.NumBits.X;
						PackedUVRange.Data.Y = (UVRange.Min.Y << 5) | UVRange.NumBits.Y;
						PageWriter.Add(PackedUVRange);
					}
				}

				PageWriter.AlignRelativeToOffset(DecodeInfoSectionStartOffset, 16u);
#else
				// UE 5.5/5.6: DecodeInfoOffset is stored once in FPageDiskHeader
				PageDiskHeader->DecodeInfoOffset = GetCurrentPageOffset();

				for (int32 ClusterIndex = 0; ClusterIndex < PageClusters.Num(); ClusterIndex++)
				{
					const auto& ClusterContext = BuildContext.ClusterContexts[PageClusters[ClusterIndex]];
					const FEncodingInfo& Info = ClusterContext.EncodingInfo;

					for (int32 UVIndex = 0; UVIndex < BuildContext.NumUVs; UVIndex++)
					{
						const FUVRange UVRange = Info.UVRanges[UVIndex];

						checkSlow(UVRange.NumBits.X <= NANITE_UV_FLOAT_MAX_BITS && UVRange.NumBits.Y <= NANITE_UV_FLOAT_MAX_BITS);
						checkSlow(UVRange.Min.X < (1u << NANITE_UV_FLOAT_MAX_BITS) && UVRange.Min.Y < (1u << NANITE_UV_FLOAT_MAX_BITS));

						FPackedUVRange PackedUVRange;
						PackedUVRange.Data.X = (UVRange.Min.X << 5) | UVRange.NumBits.X;
						PackedUVRange.Data.Y = (UVRange.Min.Y << 5) | UVRange.NumBits.Y;
						PageWriter.Add(PackedUVRange);
					}
				}

				PageWriter.AlignRelativeToOffset(PageDiskHeader->DecodeInfoOffset, 16u);
#endif
			}

			const int32 RawFloat4EndOffset = GetCurrentPageOffset();

			checkSlow((RawFloat4EndOffset - RawFloat4StartOffset) % sizeof(FVector4f) == 0);
			PageDiskHeader->NumRawFloat4s = (RawFloat4EndOffset - RawFloat4StartOffset) / sizeof(FVector4f);

			// Index data
			{
				TRACE_CPUPROFILER_EVENT_SCOPE(RealtimeMeshNanite::WritePage_IndexEncoding);
				static_assert(NANITE_USE_STRIP_INDICES);

				for (auto It = PageClusters.CreateConstIterator(); It; ++It)
				{
					const auto& Cluster = BuildContext.Mesh.Clusters[*It];
					const auto& ClusterContext = BuildContext.ClusterContexts[*It];
					FClusterDiskHeader& ClusterDiskHeader = ClusterDiskHeaders[It.GetIndex()];

					ClusterDiskHeader.NumPrevNewVerticesBeforeDwords = ClusterContext.PackedIndices.NumPrevNewVerticesBeforeDwords;
					ClusterDiskHeader.NumPrevRefVerticesBeforeDwords = ClusterContext.PackedIndices.NumPrevRefVerticesBeforeDwords;

					ClusterDiskHeader.IndexDataOffset = GetCurrentPageOffset();
					PageWriter.Append(ClusterContext.PackedIndices.PackedIndexData);
				}

				PageWriter.Align(sizeof(uint32));

				PageDiskHeader->StripBitmaskOffset = GetCurrentPageOffset();

				for (auto It = PageClusters.CreateConstIterator(); It; ++It)
				{
					const auto& Cluster = BuildContext.Mesh.Clusters[*It];
					const auto& ClusterContext = BuildContext.ClusterContexts[*It];
					static_assert(NANITE_USE_STRIP_INDICES);
					static_assert(!NANITE_USE_UNCOMPRESSED_VERTEX_DATA);

					constexpr int32 NumDwords = NANITE_MAX_CLUSTER_TRIANGLES / 32;

					auto Bitmasks = PageWriter.AppendLatentEntryArray<uint32>(3 * NumDwords);

					for (int32 Idx = 0; Idx < NumDwords; Idx++)
					{
						Bitmasks[3 * Idx + 0] = ClusterContext.PackedIndices.Bitmasks[Idx][0];
						Bitmasks[3 * Idx + 1] = ClusterContext.PackedIndices.Bitmasks[Idx][1];
						Bitmasks[3 * Idx + 2] = ClusterContext.PackedIndices.Bitmasks[Idx][2];
					}
				}
			}

			// Write PageCluster Map
			for (auto It = ClusterDiskHeaders.CreateIterator(); It; ++It)
			{
				It->PageClusterMapOffset = GetCurrentPageOffset();
			}

			{
				PageDiskHeader->VertexRefBitmaskOffset = GetCurrentPageOffset();

				for (int32 ClusterIndex = 0; ClusterIndex < PageClusters.Num(); ClusterIndex++)
				{
					constexpr int32 NumToAdd = (NANITE_MAX_CLUSTER_VERTICES / 32) * sizeof(uint32);
					PageWriter.AddZeroed(NumToAdd);
				}
			}

			// Write Vertex References (no vertex ref)
			{
				PageDiskHeader->NumVertexRefs = 0;

				for (auto It = ClusterDiskHeaders.CreateIterator(); It; ++It)
				{
					It->VertexRefDataOffset = GetCurrentPageOffset();
					It->NumVertexRefs = 0;
				}
				PageWriter.Align(sizeof(uint32));
			}

			{
				TRACE_CPUPROFILER_EVENT_SCOPE(RealtimeMeshNanite::WritePage_AttributeEncoding);

				const int32 NumPageClusters = PageClusters.Num();
				TArray<FRealtimeMeshNaniteZigZagCheckpoint> ZigZagCheckpoints;
				ZigZagCheckpoints.SetNum(NumPageClusters);

				// Step 1: Parallel encode each cluster to its own stream
				TArray<FRealtimeMeshNaniteZigZagStream> PerClusterStreams;
				PerClusterStreams.SetNum(NumPageClusters);

				{
					TRACE_CPUPROFILER_EVENT_SCOPE(RealtimeMeshNanite::WritePage_ParallelEncode);

					if (BuildContext.Settings.bEnableParallel && NumPageClusters >= BuildContext.Settings.MinClustersForParallel)
					{
						ParallelFor(NumPageClusters, [&](int32 LocalIndex)
						{
							const int32 ClusterIndex = PageClusters[LocalIndex];
							FRealtimeMeshNaniteZigZagStream& LocalStream = PerClusterStreams[LocalIndex];

							EncodeNanitePositions(LocalStream, BuildContext, ClusterIndex);
							EncodeNaniteNormals(LocalStream, BuildContext, ClusterIndex);
							EncodeNaniteColors(LocalStream, BuildContext, ClusterIndex);
							EncodeNaniteUVs(LocalStream, BuildContext, ClusterIndex);
						});
					}
					else
					{
						for (int32 LocalIndex = 0; LocalIndex < NumPageClusters; ++LocalIndex)
						{
							const int32 ClusterIndex = PageClusters[LocalIndex];
							FRealtimeMeshNaniteZigZagStream& LocalStream = PerClusterStreams[LocalIndex];

							EncodeNanitePositions(LocalStream, BuildContext, ClusterIndex);
							EncodeNaniteNormals(LocalStream, BuildContext, ClusterIndex);
							EncodeNaniteColors(LocalStream, BuildContext, ClusterIndex);
							EncodeNaniteUVs(LocalStream, BuildContext, ClusterIndex);
						}
					}
				}

				// Step 2: Sequential merge with checkpoint tracking
				FRealtimeMeshNaniteZigZagStream ZigZagStream;
				{
					TRACE_CPUPROFILER_EVENT_SCOPE(RealtimeMeshNanite::WritePage_MergeStreams);
					for (int32 LocalIndex = 0; LocalIndex < NumPageClusters; ++LocalIndex)
					{
						const FRealtimeMeshNaniteZigZagCheckpoint PrevCheckpoint = ZigZagStream.GetCheckpoint();
						ZigZagStream.AppendFrom(PerClusterStreams[LocalIndex]);
						ZigZagCheckpoints[LocalIndex] = ZigZagStream.GetCheckpoint() - PrevCheckpoint;
					}
				}

				// Write low/mid/high byte streams
				{
					TRACE_CPUPROFILER_EVENT_SCOPE(RealtimeMeshNanite::WritePage_Serialization);
					{
						FClusterDiskHeader& Header = ClusterDiskHeaders[0];

						Header.LowBytesOffset = GetCurrentPageOffset();
						PageWriter.Append(ZigZagStream.GetLowByteStream());

						Header.MidBytesOffset = GetCurrentPageOffset();
						PageWriter.Append(ZigZagStream.GetMidByteStream());

						Header.HighBytesOffset = GetCurrentPageOffset();
						PageWriter.Append(ZigZagStream.GetHighByteStream());
					}

					for (int32 ClusterIndex = 1; ClusterIndex < PageClusters.Num(); ClusterIndex++)
					{
						const FClusterDiskHeader& PrevHeader = ClusterDiskHeaders[ClusterIndex - 1];
						const FRealtimeMeshNaniteZigZagCheckpoint& PrevCounters = ZigZagCheckpoints[ClusterIndex - 1];

						FClusterDiskHeader& Header = ClusterDiskHeaders[ClusterIndex];
						Header.LowBytesOffset = PrevHeader.LowBytesOffset + PrevCounters.GetLowNum();
						Header.MidBytesOffset = PrevHeader.MidBytesOffset + PrevCounters.GetMidNum();
						Header.HighBytesOffset = PrevHeader.HighBytesOffset + PrevCounters.GetHighNum();
					}

					ensure(ClusterDiskHeaders[PageClusters.Num() - 1].LowBytesOffset + ZigZagCheckpoints[PageClusters.Num() - 1].GetLowNum() == ClusterDiskHeaders[0].MidBytesOffset);
					ensure(ClusterDiskHeaders[PageClusters.Num() - 1].MidBytesOffset + ZigZagCheckpoints[PageClusters.Num() - 1].GetMidNum() == ClusterDiskHeaders[0].HighBytesOffset);
					ensure(ClusterDiskHeaders[PageClusters.Num() - 1].HighBytesOffset + ZigZagCheckpoints[PageClusters.Num() - 1].GetHighNum() == GetCurrentPageOffset());

					PageWriter.Align(sizeof(uint32));
				}
			}
		}

	}


	FRealtimeMeshNaniteResourcesPtr BuildRealtimeNaniteMesh(const FRealtimeMeshNaniteMesh& Mesh, const FRealtimeMeshNaniteBuildSettings& Settings)
	{
		TRACE_CPUPROFILER_EVENT_SCOPE(RealtimeMeshNanite::BuildRealtimeNaniteMesh);
		using namespace RealtimeMesh::Nanite::Internal;

		if (!ensure(Mesh.HasValidMeshData()))
		{
			UE_LOG(LogRealtimeMesh, Warning, TEXT("BuildRealtimeNaniteMesh: Invalid mesh data - returning empty resources"));
			return {};
		}

		FRealtimeNaniteMeshBuildContext BuildContext(Mesh, Settings);

		BuildContext.Bounds = FBoxSphereBounds3f(FBox3f(Mesh.Bounds.Min, Mesh.Bounds.Max));
		BuildContext.BuiltData.NumInputTriangles = 0;
		BuildContext.BuiltData.NumInputVertices = 0;
		BuildContext.BuiltData.PositionPrecision = -1;
		BuildContext.BuiltData.NormalPrecision = -1;
#if RMC_ENGINE_BELOW_5_6
		BuildContext.BuiltData.NumInputMeshes = 1;
		BuildContext.BuiltData.NumInputTexCoords = 0;
#endif
		
		BuildContext.BuiltData.NumClusters = BuildContext.Mesh.Clusters.Num();

		Algo::ForEach(Mesh.Clusters, [&BuildContext](const FRealtimeMeshNaniteCluster& Cluster)
		{
			BuildContext.BuiltData.NumInputVertices += Cluster.GetVertices().Num();
			BuildContext.BuiltData.NumInputTriangles += Cluster.GetNumTriangles();
			BuildContext.NumUVs = FMath::Max(BuildContext.NumUVs, Cluster.NumUVChannels());
		});

#if RMC_ENGINE_BELOW_5_6
		BuildContext.BuiltData.NumInputTexCoords = BuildContext.NumUVs;
#endif
		
		PackAllClusterIndices(BuildContext);
		BuildAllVertexReuseClusters(BuildContext);
		PackBVHTree(BuildContext);
		CalculatePageLayout(BuildContext);

		// Final validation before creating streaming data
		if (BuildContext.PageContexts.Num() == 0)
		{
			UE_LOG(LogRealtimeMesh, Warning, TEXT("No page contexts available - returning empty Nanite resources"));
			return {};
		}

		FRealtimeMeshNanitePageWriter PageWriter;

		TRACE_CPUPROFILER_EVENT_SCOPE(RealtimeMeshNanite::WritePages);
		for (int32 PageIndex = 0; PageIndex < BuildContext.PageContexts.Num(); PageIndex++)
		{
			FRealtimeMeshPageBuildContext& Page = BuildContext.PageContexts[PageIndex];
			TArray<int32>& Clusters = Page.Clusters;

			// Validate cluster data before creating fixup chunk
			if (Clusters.Num() == 0)
			{
				UE_LOG(LogRealtimeMesh, Warning, TEXT("Nanite page %d has no clusters - skipping to prevent corrupt fixup chunk"), PageIndex);
				continue;
			}

			::Nanite::FPageStreamingState PageStreamingState{};
			PageStreamingState.BulkOffset = PageWriter.Num();

			UE_LOG(LogRealtimeMesh, VeryVerbose, TEXT("Creating Nanite fixup chunk for page %d: %d clusters"), 
				PageIndex, Clusters.Num());

#if RMC_ENGINE_ABOVE_5_7
			// UE 5.7: Completely redesigned FFixupChunk structure
			// Build fixup data using our helper to serialize into the new format
			FRMCPageFixups PageFixupsData;

			// Create one group fixup for all clusters in this page (simplified non-streaming approach)
			FRMCGroupFixup& GroupFixup = PageFixupsData.GroupFixups.AddDefaulted_GetRef();
			GroupFixup.PageDependencyRangeKey = ::Nanite::FPageRangeKey(); // Empty for root-only
			GroupFixup.Flags = 0;
			GroupFixup.FirstPartFixup = 0;
			GroupFixup.NumPartFixups = Clusters.Num();

			// Create part fixups for each cluster
			for (int32 Index = 0; Index < Clusters.Num(); Index++)
			{
				checkSlow(BuildContext.ClusterContexts.IsValidIndex(Clusters[Index]));
				const auto& ClusterContext = BuildContext.ClusterContexts[Clusters[Index]];

				FRMCPartFixup& PartFixup = PageFixupsData.PartFixups.AddDefaulted_GetRef();
				PartFixup.PageIndex = PageIndex;
				PartFixup.StartClusterIndex = Index;
				PartFixup.LeafCounter = 0; // No parent parts in simplified approach
				PartFixup.HierarchyLocations.Add(FRMCHierarchyNodeRef{
					static_cast<uint32>(ClusterContext.ParentHierarchyNode),
					static_cast<uint32>(ClusterContext.ParentHierarchyChildIndex)
				});
			}

			// Build the serialized fixup chunk data
			TArray<uint8> FixupChunkData;
			BuildFixupChunkData(FixupChunkData, PageFixupsData, Clusters.Num());

			// Validate the built chunk
			const ::Nanite::FFixupChunk& FixupChunk = *reinterpret_cast<const ::Nanite::FFixupChunk*>(FixupChunkData.GetData());
			const bool bFixupValid = FixupChunk.Header.NumClusters > 0 &&
			                         FixupChunk.Header.NumGroupFixups > 0 &&
			                         FixupChunk.Header.Magic == NANITE_FIXUP_MAGIC;

			if (!bFixupValid)
			{
				UE_LOG(LogRealtimeMesh, Error,
					TEXT("Encountered a corrupt fixup chunk (5.7). Magic: %4X NumClusters: %d, NumGroupFixups: %d, NumPartFixups: %d. This should never happen."),
					FixupChunk.Header.Magic,
					FixupChunk.Header.NumClusters,
					FixupChunk.Header.NumGroupFixups,
					FixupChunk.Header.NumPartFixups
				);
			}

			PageWriter.Append(MakeConstArrayView(FixupChunkData));

#elif RMC_ENGINE_BELOW_5_6
			// UE 5.5: Direct FFixupChunk construction
			::Nanite::FFixupChunk FixupChunk;
			FixupChunk.Header.Magic = NANITE_FIXUP_MAGIC;
			FixupChunk.Header.NumClusters = Clusters.Num();
			FixupChunk.Header.NumHierachyFixups = Clusters.Num(); // Note: typo in 5.5 API
			FixupChunk.Header.NumClusterFixups = Clusters.Num();

			for (int32 Index = 0; Index < Clusters.Num(); Index++)
			{
				checkSlow(BuildContext.ClusterContexts.IsValidIndex(Clusters[Index]));
				const auto& ClusterContext = BuildContext.ClusterContexts[Clusters[Index]];

				FixupChunk.GetHierarchyFixup(Index) = ::Nanite::FHierarchyFixup(PageIndex, ClusterContext.ParentHierarchyNode,
				                ClusterContext.ParentHierarchyChildIndex, Index, 0, 0);

				FixupChunk.GetClusterFixup(Index) = ::Nanite::FClusterFixup(PageIndex, Index, 0, 0);
			}

			const bool bFixupValid = FixupChunk.Header.NumClusters > 0 &&
			                         FixupChunk.Header.NumHierachyFixups > 0 &&
			                         FixupChunk.Header.Magic == NANITE_FIXUP_MAGIC;

			if (!bFixupValid)
			{
				UE_LOG(LogRealtimeMesh, Error,
					TEXT("Encountered a corrupt fixup chunk. Magic: %4X NumClusters: %d, NumClusterFixups: %d, NumHierarchyFixups: %d. This should never happen."),
					FixupChunk.Header.Magic,
					FixupChunk.Header.NumClusters,
					FixupChunk.Header.NumClusterFixups,
					FixupChunk.Header.NumHierachyFixups
				);
			}

			PageWriter.Append(MakeConstArrayView(reinterpret_cast<const uint8*>(&FixupChunk), FixupChunk.GetSize()));

#else
			// UE 5.6: FFixupChunkBuffer approach
			::Nanite::FFixupChunkBuffer FixupChunkBuffer;
			::Nanite::FFixupChunk& FixupChunk = FixupChunkBuffer.Add_GetRef(
				Clusters.Num(),
				Clusters.Num(),
				Clusters.Num());

			for (int32 Index = 0; Index < Clusters.Num(); Index++)
			{
				checkSlow(BuildContext.ClusterContexts.IsValidIndex(Clusters[Index]));
				const auto& ClusterContext = BuildContext.ClusterContexts[Clusters[Index]];

				FixupChunk.GetHierarchyFixup(Index) = ::Nanite::FHierarchyFixup(PageIndex, ClusterContext.ParentHierarchyNode,
				                ClusterContext.ParentHierarchyChildIndex, Index, 0, 0);

				FixupChunk.GetClusterFixup(Index) = ::Nanite::FClusterFixup(PageIndex, Index, 0, 0);
			}

			const bool bFixupValid = FixupChunk.Header.NumClusters > 0 &&
			                         FixupChunk.Header.NumHierarchyFixups > 0 &&
			                         FixupChunk.Header.Magic == NANITE_FIXUP_MAGIC;

			if (!bFixupValid)
			{
				UE_LOG(LogRealtimeMesh, Error,
					TEXT("Encountered a corrupt fixup chunk. Magic: %4X NumClusters: %d, NumClusterFixups: %d, NumHierarchyFixups: %d. This should never happen."),
					FixupChunk.Header.Magic,
					FixupChunk.Header.NumClusters,
					FixupChunk.Header.NumClusterFixups,
					FixupChunk.Header.NumHierarchyFixups
				);
			}

			PageWriter.Append(MakeConstArrayView(reinterpret_cast<const uint8*>(&FixupChunk), FixupChunk.GetSize()));
#endif
			const int32 PageStartIndex = PageWriter.Num();

			{
				TRACE_CPUPROFILER_EVENT_SCOPE(RealtimeMeshNanite::WritePage);
				WritePage(BuildContext, PageWriter, PageIndex);
			}

			PageStreamingState.BulkSize = PageWriter.Num() - PageStreamingState.BulkOffset;
			PageStreamingState.PageSize = PageWriter.Num() - PageStartIndex;
			PageStreamingState.MaxHierarchyDepth = NANITE_MAX_CLUSTER_HIERARCHY_DEPTH;
			BuildContext.BuiltData.PageStreamingStates.Add(PageStreamingState);
		}

		check(BuildContext.BuiltData.RootData.Num() == 0);
		PageWriter.CopyToLinearArray(BuildContext.BuiltData.RootData);

		BuildContext.BuiltData.HierarchyRootOffsets.Add(0);
		BuildContext.BuiltData.NumRootPages = BuildContext.PageContexts.Num();

#if RMC_ENGINE_ABOVE_5_6
		// Initialize fields added in UE 5.6+
		BuildContext.BuiltData.MeshBounds = FBoxSphereBounds3f(BuildContext.Bounds);
		BuildContext.BuiltData.NumHierarchyDwords = BuildContext.BuiltData.HierarchyNodes.Num() *
			(sizeof(::Nanite::FPackedHierarchyNode) / sizeof(uint32));
#endif

		{
			TRACE_CPUPROFILER_EVENT_SCOPE(RealtimeMeshNanite::PageValidation);
			for (uint32 LocalPageIndex = 0; LocalPageIndex < BuildContext.BuiltData.NumRootPages; LocalPageIndex++)
			{
				const ::Nanite::FPageStreamingState& PageStreamingState = BuildContext.BuiltData.PageStreamingStates[LocalPageIndex];

				const uint8* Ptr = BuildContext.BuiltData.RootData.GetData() + PageStreamingState.BulkOffset;
				const ::Nanite::FFixupChunk& FixupChunk = *reinterpret_cast<const ::Nanite::FFixupChunk*>(Ptr);

#if RMC_ENGINE_ABOVE_5_7
				// UE 5.7: Different header structure
				const bool bValid = FixupChunk.Header.NumClusters > 0 &&
				                    FixupChunk.Header.NumGroupFixups > 0 &&
				                    FixupChunk.Header.Magic == NANITE_FIXUP_MAGIC;
				if (!bValid)
				{
					UE_LOG(LogRealtimeMesh, Error,
						TEXT("Validation: Corrupt fixup chunk (5.7). Magic: %4X NumClusters: %d, NumGroupFixups: %d, NumPartFixups: %d. This should never happen."),
						FixupChunk.Header.Magic,
						FixupChunk.Header.NumClusters,
						FixupChunk.Header.NumGroupFixups,
						FixupChunk.Header.NumPartFixups
					);
				}
#elif RMC_ENGINE_ABOVE_5_6
				// UE 5.6
				const bool bValid = FixupChunk.Header.NumClusters > 0 &&
				                    FixupChunk.Header.NumHierarchyFixups > 0 &&
				                    FixupChunk.Header.Magic == NANITE_FIXUP_MAGIC;
				if (!bValid)
				{
					UE_LOG(LogRealtimeMesh, Error,
						TEXT("Validation: Corrupt fixup chunk. Magic: %4X NumClusters: %d, NumClusterFixups: %d, NumHierarchyFixups: %d. This should never happen."),
						FixupChunk.Header.Magic,
						FixupChunk.Header.NumClusters,
						FixupChunk.Header.NumClusterFixups,
						FixupChunk.Header.NumHierarchyFixups
					);
				}
#else
				// UE 5.5
				const bool bValid = FixupChunk.Header.NumClusters > 0 &&
				                    FixupChunk.Header.NumHierachyFixups > 0 &&
				                    FixupChunk.Header.Magic == NANITE_FIXUP_MAGIC;
				if (!bValid)
				{
					UE_LOG(LogRealtimeMesh, Error,
						TEXT("Validation: Corrupt fixup chunk. Magic: %4X NumClusters: %d, NumClusterFixups: %d, NumHierarchyFixups: %d. This should never happen."),
						FixupChunk.Header.Magic,
						FixupChunk.Header.NumClusters,
						FixupChunk.Header.NumClusterFixups,
						FixupChunk.Header.NumHierachyFixups
					);
				}
#endif
			}
		}







		

		return FRealtimeMeshNaniteResources::Create(MoveTemp(BuildContext.BuiltData), BuildContext.Bounds);
	}

	FRealtimeMeshNaniteMesh FRealtimeMeshNaniteMesh::CreateFromRawMesh(TConstArrayView<FVector3f> Vertices, TConstArrayView<FVector3f> Normals,
		TConstArrayView<TConstArrayView<FVector2f>> UVs, TConstArrayView<FColor> Colors, TConstArrayView<int32> Triangles)
	{
		// Validate input data to prevent creating empty Nanite meshes
		if (Vertices.Num() == 0 || Triangles.Num() == 0)
		{
			UE_LOG(LogRealtimeMesh, Warning, TEXT("CreateFromRawMesh: Empty geometry provided - vertices:%d triangles:%d"), 
				Vertices.Num(), Triangles.Num());
			return FRealtimeMeshNaniteMesh(); // Return empty mesh
		}

		if (Triangles.Num() < 12) // At least 4 triangles (12 indices)
		{
			UE_LOG(LogRealtimeMesh, Warning, TEXT("CreateFromRawMesh: Insufficient triangles (%d indices) for Nanite clustering"), 
				Triangles.Num());
			return FRealtimeMeshNaniteMesh(); // Return empty mesh
		}

		UE_LOG(LogRealtimeMesh, Verbose, TEXT("CreateFromRawMesh: Creating Nanite mesh with %d vertices, %d triangles"),
			Vertices.Num(), Triangles.Num() / 3);

		FRealtimeMeshNaniteMesh Mesh;

		// Pre-allocate clusters based on expected count to reduce allocations
		const int32 NumTriangles = Triangles.Num() / 3;
		const int32 EstimatedClusterCount = FMath::Max(1, FMath::DivideAndRoundUp(NumTriangles, static_cast<int32>(NANITE_MAX_CLUSTER_TRIANGLES)));
		Mesh.Clusters.Reserve(EstimatedClusterCount);

		TMap<int32, int32> OldToNewVerticess;
		OldToNewVerticess.Reserve(NANITE_MAX_CLUSTER_VERTICES);

		const auto GetOrAddVertex = [&](int32 Index)
		{
			if (OldToNewVerticess.Contains(Index))
			{
				return OldToNewVerticess[Index];
			}

			auto& Cluster = Mesh.Clusters.Last();
			int32 NewIndex = Cluster.EditVertices().Add(Vertices[Index]);
			OldToNewVerticess.Add(Index, NewIndex);
			Cluster.EditNormals().Add(Normals[Index]);
			if (Colors.Num() > 0)
			{
				Cluster.EditColors().Add(Colors[Index]);
			}
			for (int32 UVIndex = 0; UVIndex < Cluster.EditUVs().Num(); UVIndex++)
			{
				Cluster.EditUVs()[UVIndex].Add(UVs[UVIndex][Index]);
			}

			return NewIndex;
		};

		for (int32 TriIdx = 0; TriIdx < Triangles.Num() / 3; TriIdx++)
		{
			if (Mesh.Clusters.Num() == 0 ||
				Mesh.Clusters.Last().GetNumTriangles() == NANITE_MAX_CLUSTER_TRIANGLES ||
				Mesh.Clusters.Last().GetVertices().Num() + 3 > NANITE_MAX_CLUSTER_VERTICES)
			{
				auto& Cluster = Mesh.Clusters.Emplace_GetRef();

				// Pre-allocate cluster arrays to reduce allocations during mesh building
				Cluster.EditVertices().Reserve(NANITE_MAX_CLUSTER_VERTICES);
				Cluster.EditNormals().Reserve(NANITE_MAX_CLUSTER_VERTICES);
				Cluster.EditIndices().Reserve(NANITE_MAX_CLUSTER_TRIANGLES * 3);
				if (Colors.Num() > 0)
				{
					Cluster.EditColors().Reserve(NANITE_MAX_CLUSTER_VERTICES);
				}

				Cluster.EditUVs().SetNum(UVs.Num());
				for (TArray<FVector2f>& TextureCoordinate : Cluster.EditUVs())
				{
					TextureCoordinate.Reserve(NANITE_MAX_CLUSTER_VERTICES);
				}
				OldToNewVerticess.Empty();
			}

			auto& Cluster = Mesh.Clusters.Last();

			const int32 IndexA = Triangles[3 * TriIdx + 0];
			const int32 IndexB = Triangles[3 * TriIdx + 1];
			const int32 IndexC = Triangles[3 * TriIdx + 2];

			const int32 NewIndexA = GetOrAddVertex(IndexA);
			const int32 NewIndexB = GetOrAddVertex(IndexB);
			const int32 NewIndexC = GetOrAddVertex(IndexC);

			checkSlow(NewIndexA < Cluster.GetVertices().Num());
			checkSlow(NewIndexB < Cluster.GetVertices().Num());
			checkSlow(NewIndexC < Cluster.GetVertices().Num());

			Cluster.EditIndices().Add(NewIndexA);
			Cluster.EditIndices().Add(NewIndexB);
			Cluster.EditIndices().Add(NewIndexC);

			const int32 ClusterTriIndex = Cluster.GetNumTriangles() - 1;
			if (ClusterTriIndex < 32)
			{
				Cluster.EditMaterialRanges().SetNum(1);
				Cluster.EditMaterialRanges()[0].RangeStart = 0;
				Cluster.EditMaterialRanges()[0].RangeLength = ClusterTriIndex + 1;
				Cluster.EditMaterialRanges()[0].MaterialIndex = 0;
			}
			else if (ClusterTriIndex < 64)
			{
				Cluster.EditMaterialRanges().SetNum(2);
				Cluster.EditMaterialRanges()[1].RangeStart = 32;
				Cluster.EditMaterialRanges()[1].RangeLength = ClusterTriIndex - 31;
				Cluster.EditMaterialRanges()[1].MaterialIndex = 1;
			}
			else if (ClusterTriIndex < 96)
			{
				Cluster.EditMaterialRanges().SetNum(3);
				Cluster.EditMaterialRanges()[2].RangeStart = 64;
				Cluster.EditMaterialRanges()[2].RangeLength = ClusterTriIndex - 63;
				Cluster.EditMaterialRanges()[2].MaterialIndex = 2;
			}
			else
			{
				Cluster.EditMaterialRanges().SetNum(4);
				Cluster.EditMaterialRanges()[3].RangeStart = 96;
				Cluster.EditMaterialRanges()[3].RangeLength = ClusterTriIndex - 95;
				Cluster.EditMaterialRanges()[3].MaterialIndex = 3;
			}
		}

		return Mesh;
	}

	bool FRealtimeMeshNaniteMesh::BuildMinimalHierarchy(FRealtimeMeshNaniteMesh& Mesh, bool bShouldUpdateClusterBounds)
	{
		if (bShouldUpdateClusterBounds)
		{
			CalculateAllClusterBounds(Mesh);
		}
		
		// Calculate tree depth, ensuring at least 1 level if we have clusters
		// This prevents edge case where single cluster (log4(1)=0) would skip hierarchy building
		const int32 TreeDepth = Mesh.Clusters.Num() > 0
			? FMath::Max(1, FMath::CeilToInt(FMath::LogX(static_cast<float>(NANITE_MAX_BVH_NODE_FANOUT), Mesh.Clusters.Num())))
			: 0;
		check(TreeDepth <= NANITE_MAX_CLUSTER_HIERARCHY_DEPTH);

		// Calculate the layer offsets and total BVH size
		TArray<int32> TreeLayerOffsets;
		TreeLayerOffsets.Reserve(TreeDepth);
		int32 TotalNodes = 0;

		for (int32 Level = 0; Level <= TreeDepth; ++Level)
		{
			TreeLayerOffsets.Add(TotalNodes);
			TotalNodes += FMath::Pow<float>(NANITE_MAX_BVH_NODE_FANOUT, Level);
		}

		Mesh.HierarchyNodes.SetNum(TotalNodes);

		const int32 LastTreeLayer = TreeDepth - 1;
		int32 CurrentClusterLinkageIndex = 0;

		// Build the internal nodes
		for (int32 Level = 0; Level < TreeDepth; ++Level)
		{
			check(Level == LastTreeLayer || CurrentClusterLinkageIndex == 0);

			int32 NumNodesAtThisLevel = TreeLayerOffsets[Level + 1] - TreeLayerOffsets[Level];
			for (int32 LevelNodeIndex = 0; LevelNodeIndex < NumNodesAtThisLevel; ++LevelNodeIndex)
			{
				const int32 NodeIndex = TreeLayerOffsets[Level] + LevelNodeIndex;
				const int32 ChildBaseIndex = TreeLayerOffsets[Level + 1] + LevelNodeIndex * NANITE_MAX_BVH_NODE_FANOUT;

				auto& Node = Mesh.HierarchyNodes[NodeIndex];

				for (int32 ChildIndexOffset = 0; ChildIndexOffset < NANITE_MAX_BVH_NODE_FANOUT; ChildIndexOffset++)
				{
					auto& Child = Node.Children[ChildIndexOffset];

					if (Level == LastTreeLayer)
					{
						// Leaf cluster linkage
						if (Mesh.Clusters.IsValidIndex(CurrentClusterLinkageIndex))
						{
							Child.ChildStartIndex = CurrentClusterLinkageIndex++;
							Child.NumChildren = 1;
							Child.LODBounds = FSphere3f(ForceInit);
							Child.Bounds = FBounds3f();
						}
					}
					else
					{
						// Internal node
						Child.ChildStartIndex = ChildBaseIndex + ChildIndexOffset;
						Child.NumChildren = INDEX_NONE;
						Child.LODBounds = FSphere3f(ForceInit);
						Child.Bounds = FBounds3f();
					}
				}
			}
		}

		// Then if we have a hierarchy... Propagate/combine the bounds up the hierarchy
		if (Mesh.HierarchyNodes.Num() > 0)
		{
			const TFunction<FBounds3f(int32)> TraverseNodeForBounds = [&](int32 Index) -> FBounds3f
			{
				auto& Node = Mesh.HierarchyNodes[Index];
					
				FBounds3f LocalBounds = FBounds3f();
				for (int32 ChildIdx = 0; ChildIdx < NANITE_MAX_BVH_NODE_FANOUT; ChildIdx++)
				{
					auto& Child = Node.Children[ChildIdx];
						
					if (Child.NumChildren > 0)
					{
						check(Mesh.Clusters.IsValidIndex(Child.ChildStartIndex) &&
							Mesh.Clusters.IsValidIndex(Child.ChildStartIndex + Child.NumChildren - 1));

						Child.Bounds = FBounds3f();
						// This is pointing at clusters, so sum up all the clusters
						for (int32 ClusterIdx = 0; ClusterIdx < Child.NumChildren; ClusterIdx++)
						{
							Child.Bounds += Mesh.Clusters[Child.ChildStartIndex + ClusterIdx].GetBounds();
						}
					}
					else if (Child.NumChildren == INDEX_NONE)
					{
						check(Child.ChildStartIndex != 0xFFFFFFFFu);
						Child.Bounds = TraverseNodeForBounds(Child.ChildStartIndex);
					}

					// Update lod bounds to match.
					// TODO: When we go to support lod this will need to change I'm sure.
					Child.LODBounds = FSphere3f(Child.Bounds.GetCenter(), Child.Bounds.GetExtent().Length());

					// Add to combined Bounds					
					LocalBounds += Child.Bounds;
				}
				return LocalBounds;
			};

			Mesh.Bounds = TraverseNodeForBounds(0);
		}

		return Mesh.HierarchyNodes.Num() > 0;
	}

}





/*TUniquePtr<FStaticMeshRenderData> CreateStaticMeshRenderResources(const FRealtimeMeshNaniteBuiltData& BuiltMesh)
{
	::Nanite::FResources Resources;
	Resources.RootData = BuiltMesh.RootData;
	Resources.StreamablePages = BuiltMesh.StreamablePages;
	Resources.ImposterAtlas = BuiltMesh.ImposterAtlas;
	Resources.HierarchyNodes = BuiltMesh.HierarchyNodes;
	Resources.HierarchyRootOffsets = BuiltMesh.HierarchyRootOffsets;
	Resources.PageStreamingStates = BuiltMesh.PageStreamingStates;
	Resources.PageDependencies = BuiltMesh.PageDependencies;
	Resources.NumRootPages = BuiltMesh.NumRootPages;
	Resources.PositionPrecision = BuiltMesh.PositionPrecision;
	Resources.NormalPrecision = BuiltMesh.NormalPrecision;
	Resources.TangentPrecision = BuiltMesh.TangentPrecision;
	Resources.NumInputTriangles = BuiltMesh.NumInputTriangles;
	Resources.NumInputVertices = BuiltMesh.NumInputVertices;
	Resources.NumInputMeshes = BuiltMesh.NumInputMeshes;
	Resources.NumInputTexCoords = BuiltMesh.NumInputTexCoords;
	Resources.NumClusters = BuiltMesh.NumClusters;
	Resources.ResourceFlags = BuiltMesh.ResourceFlags;


	TUniquePtr<FStaticMeshRenderData> RenderData = MakeUnique<FStaticMeshRenderData>();
	RenderData->Bounds = BuiltMesh.Bounds;
	RenderData->NumInlinedLODs = 1;
	RenderData->NaniteResourcesPtr = MakePimpl<::Nanite::FResources>(MoveTemp(Resources));

	FStaticMeshLODResources* LODResource = new FStaticMeshLODResources();
	LODResource->bBuffersInlined = true;
	LODResource->Sections.Emplace();

	// Ensure UStaticMesh::HasValidRenderData returns true
	LODResource->VertexBuffers.StaticMeshVertexBuffer.Init(1, 1);
	LODResource->VertexBuffers.PositionVertexBuffer.Init(1);
	LODResource->VertexBuffers.ColorVertexBuffer.Init(1);

	RenderData->LODResources.Add(LODResource);

	RenderData->LODVertexFactories.Emplace_GetRef(GMaxRHIFeatureLevel);

	return RenderData;
}*/


/*UStaticMesh* CreateStaticMeshFromNaniteBuiltMesh(const FRealtimeMeshNaniteBuiltData& BuiltMesh)
{
	UStaticMesh* StaticMesh = NewObject<UStaticMesh>();
	StaticMesh->ReleaseResources();

	StaticMesh->SetStaticMaterials({FStaticMaterial()});
	StaticMesh->SetRenderData(CreateStaticMeshRenderResources(BuiltMesh));
	StaticMesh->CalculateExtendedBounds();
#if WITH_EDITOR
	StaticMesh->NaniteSettings.bEnabled = true;
#endif

	// Not supported, among other issues FSceneProxy::FSceneProxy crashes because GetNumVertices is always 0
	StaticMesh->bSupportRayTracing = false;

	StaticMesh->InitResources();
	return StaticMesh;
}*/



		/*static void CalculateAllMeshBounds(FRealtimeNaniteMeshBuildContext& BuildContext)
		{
			// First build all the individual cluster bounds.
			// Also total up the vertex/triangle counts, and the max num uv channels.
			BuildContext.NumVertices = 0;
			BuildContext.NumTriangles = 0;
			BuildContext.NumTexCoords = 0;

			FBounds3f ClusterTotalBounds = FBounds3f();
			for (auto It = BuildContext.Mesh.Clusters.CreateConstIterator(); It; ++It)
			{
				const FRealtimeMeshNaniteCluster& Cluster = *It;
				FRealtimeMeshClusterBuildContext& ClusterContext = BuildContext.ClusterContexts[It.GetIndex()];
				ClusterContext.Bounds = FBounds3f();
				Algo::ForEach(Cluster.GetVertices(), [&ClusterContext](const FVector3f& Vertex)
				{
					ClusterContext.Bounds += Vertex;
				});
				ClusterTotalBounds += ClusterContext.Bounds;

				BuildContext.NumVertices += ClusterContext.PackedIndices.FinalVertices.Num();
				BuildContext.NumTriangles += Cluster.GetNumTriangles();
				BuildContext.NumTexCoords = FMath::Max(BuildContext.NumTexCoords, Cluster.NumUVChannels());
			}

			// Then if we have a hierarchy... Propagate/combine the bounds up the hierarchy
			if (BuildContext.Mesh.HierarchyNodes.Num() > 0)
			{
				const TFunction<FBounds3f(int32)> TraverseNodeForBounds = [&](int32 Index) -> FBounds3f
				{
					const auto& Node = BuildContext.Mesh.HierarchyNodes[Index];
					
					FBounds3f Bounds = FBounds3f();
					for (int32 ChildIdx = 0; ChildIdx < NANITE_MAX_BVH_NODE_FANOUT; ChildIdx++)
					{
						const auto& Child = Node.Children[ChildIdx];
						
						if (Child.NumChildren > 0)
						{
							check(BuildContext.ClusterContexts.IsValidIndex(Child.ChildStartIndex) &&
								BuildContext.ClusterContexts.IsValidIndex(Child.ChildStartIndex + Child.NumChildren));
							
							// This is pointing at clusters, so sum up all the clusters
							for (int32 ClusterIdx = 0; ClusterIdx < Child.NumChildren; ClusterIdx++)
							{
								Bounds += BuildContext.ClusterContexts[Child.ChildStartIndex + ClusterIdx].Bounds;
							}
						}
						else if (Child.NumChildren == INDEX_NONE)
						{
							check(Child.ChildStartIndex != 0xFFFFFFFFu);
							Bounds += TraverseNodeForBounds(Child.ChildStartIndex);
						}
					}
					return Bounds;
				};

				BuildContext.Bounds = TraverseNodeForBounds(0);
			}
			else
			{
				BuildContext.Bounds = ClusterTotalBounds;
			}

			check(true);
		}*/



/*static void GenerateBVHTree(FRealtimeNaniteMeshBuildContext& BuildContext)
		{
			const int32 TreeDepth = FMath::CeilToInt(FMath::LogX(static_cast<float>(NANITE_MAX_BVH_NODE_FANOUT), BuildContext.Mesh.Clusters.Num()));
			check(TreeDepth <= NANITE_MAX_CLUSTER_HIERARCHY_DEPTH);

			const auto CreateEmptyNode = [&]
			{
				::Nanite::FPackedHierarchyNode HierarchyNode;
				FMemory::Memzero(&HierarchyNode, sizeof(::Nanite::FPackedHierarchyNode));

				for (int32 Index = 0; Index < 4; Index++)
				{
					HierarchyNode.LODBounds[Index] = FVector4f(
						BuildContext.Bounds.GetCenter().X,
						BuildContext.Bounds.GetCenter().Y,
						BuildContext.Bounds.GetCenter().Z,
						BuildContext.Bounds.GetSize().Length());

	#if RMC_ENGINE_ABOVE_5_7
					// UE 5.7+: Lower 16 bits = MaxParentLODError, Upper 16 bits = MinLODError
					HierarchyNode.Misc0[Index].MinLODError_MaxParentLODError = FFloat16(1e10f).Encoded | (FFloat16(-1).Encoded << 16);
#else
					// UE 5.5/5.6: Lower 16 bits = MinLODError, Upper 16 bits = MaxParentLODError
					HierarchyNode.Misc0[Index].MinLODError_MaxParentLODError = FFloat16(-1).Encoded | (FFloat16(1e10f).Encoded << 16);
#endif
					HierarchyNode.Misc0[Index].BoxBoundsCenter = FVector3f(BuildContext.Bounds.GetCenter());
					HierarchyNode.Misc1[Index].BoxBoundsExtent = FVector3f(BuildContext.Bounds.GetExtent());
				}

				return HierarchyNode;
			};


			// Calculate the layer offsets and total BVH size
			TArray<int32> TreeLayerOffsets;
			TreeLayerOffsets.Reserve(TreeDepth);
			int32 TotalNodes = 0;

			for (int32 Level = 0; Level <= TreeDepth; ++Level)
			{
				TreeLayerOffsets.Add(TotalNodes);
				TotalNodes += FMath::Pow<float>(NANITE_MAX_BVH_NODE_FANOUT, Level);
			}

			auto& BVH = BuildContext.BuiltData.HierarchyNodes;
			BVH.SetNumUninitialized(TotalNodes);

			// Build the internal nodes
			for (int32 Level = 0; Level < TreeDepth; ++Level)
			{
				int32 NumNodesAtThisLevel = TreeLayerOffsets[Level + 1] - TreeLayerOffsets[Level];
				for (int32 LevelNodeIndex = 0; LevelNodeIndex < NumNodesAtThisLevel; ++LevelNodeIndex)
				{
					const int32 NodeIndex = TreeLayerOffsets[Level] + LevelNodeIndex;
					const int32 ChildBaseIndex = TreeLayerOffsets[Level + 1] + LevelNodeIndex * NANITE_MAX_BVH_NODE_FANOUT;
					BVH[NodeIndex] = CreateEmptyNode();

					for (int32 ChildIndexOffset = 0; ChildIndexOffset < NANITE_MAX_BVH_NODE_FANOUT; ChildIndexOffset++)
					{
						BVH[NodeIndex].Misc1[ChildIndexOffset].ChildStartReference = ChildBaseIndex + ChildIndexOffset;
						BVH[NodeIndex].Misc2[ChildIndexOffset].ResourcePageIndex_NumPages_GroupPartSize = 0xFFFFFFFF;
					}
				}
			}

			// Build the leaf nodes
			int32 LeafStart = TreeLayerOffsets[TreeDepth];
			for (int32 NodeIndex = LeafStart; NodeIndex < TotalNodes; ++NodeIndex)
			{
				for (int32 ChildIndexOffset = 0; ChildIndexOffset < NANITE_MAX_BVH_NODE_FANOUT; ChildIndexOffset++)
				{
					BVH[NodeIndex].Misc1[ChildIndexOffset].ChildStartReference = 0xFFFFFFFF;
					BVH[NodeIndex].Misc2[ChildIndexOffset].ResourcePageIndex_NumPages_GroupPartSize = 0;
				}

				// Bind the valid clusters
				const int32 ClusterIndex = NodeIndex - LeafStart;
				if (BuildContext.Mesh.Clusters.IsValidIndex(ClusterIndex))
				{
					BVH[NodeIndex].Misc1[0].ChildStartReference = TotalNodes + ClusterIndex;
					BVH[NodeIndex].Misc2[0].ResourcePageIndex_NumPages_GroupPartSize = 0xFFFFFFFF;
				}
			}
		}*/
