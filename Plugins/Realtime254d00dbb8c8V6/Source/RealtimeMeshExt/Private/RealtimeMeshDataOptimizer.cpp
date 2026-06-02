// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.


#include "RealtimeMeshDataOptimizer.h"

#include "RealtimeMeshComponentModule.h"
#include "Mesh/RealtimeMeshBlueprintMeshBuilder.h"
#include "Core/RealtimeMeshBuilder.h"
#include "MeshOptimizer/meshoptimizer.h"

using namespace RealtimeMesh;

static void RemapVertexStream(FRealtimeMeshStreamSet& Streams, const FRealtimeMeshStreamKey& StreamKey, const TArray<uint32>& RemapTable, int32 NewVertexCount)
{
	if (auto* Stream = Streams.Find(StreamKey))
	{
		if (Stream->Num() > 1) // Ignore single element streams as it applies equally to all vertices
		{
			FRealtimeMeshStream NewStream(StreamKey, Stream->GetLayout());
			NewStream.SetNumUninitialized(NewVertexCount);

				
			meshopt_remapVertexBuffer(
				NewStream.GetData(),
				Stream->GetData(),
				RemapTable.Num(),
				Stream->GetStride(),
				RemapTable.GetData());

			// Replace the vertex stream
			Streams.Remove(StreamKey);
			Streams.AddStream(MoveTemp(NewStream));
		}
	}
}

static void RemapAllVertexStreams(FRealtimeMeshStreamSet& Streams, const TArray<uint32>& RemapTable, int32 NewVertexCount)
{
	for (int32 Index = 0; Index < RemapTable.Num(); Index++)
	{
		check(RemapTable[Index] < (uint32)NewVertexCount);
	}

	
	RemapVertexStream(Streams, FRealtimeMeshStreams::Position, RemapTable, NewVertexCount);
	RemapVertexStream(Streams, FRealtimeMeshStreams::Tangents, RemapTable, NewVertexCount);
	RemapVertexStream(Streams, FRealtimeMeshStreams::TexCoords, RemapTable, NewVertexCount);
	RemapVertexStream(Streams, FRealtimeMeshStreams::Color, RemapTable, NewVertexCount);
}

static void RemapTriangleStream(FRealtimeMeshStreamSet& Streams, const TArray<uint32>& RemapTable, const void* ExistingTriangleStreamData, int32 IndexCount, bool bUse32BitIndices)
{
	// Now sort the triangles
	FRealtimeMeshStream NewTriangleStream(FRealtimeMeshStreams::Triangles, bUse32BitIndices? GetRealtimeMeshBufferLayout<TIndex3<uint32>>() : GetRealtimeMeshBufferLayout<TIndex3<uint16>>());
	NewTriangleStream.SetNumUninitialized(IndexCount / 3);
	
	if (bUse32BitIndices)
	{
		meshopt_remapIndexBuffer<uint32>(
			reinterpret_cast<uint32*>(NewTriangleStream.GetData()),
			static_cast<const uint32*>(ExistingTriangleStreamData),
			IndexCount,
			RemapTable.GetData());
	}
	else
	{
		meshopt_remapIndexBuffer<uint16>(
			reinterpret_cast<uint16*>(NewTriangleStream.GetData()),
			static_cast<const uint16*>(ExistingTriangleStreamData),
			IndexCount,
			RemapTable.GetData());
	}
	
	// Replace any existing triangle stream with the new one
	Streams.Remove(FRealtimeMeshStreams::Triangles);
	Streams.AddStream(MoveTemp(NewTriangleStream));
}

void URealtimeMeshDataOptimizer::OptimizeMeshIndexing(RealtimeMesh::FRealtimeMeshStreamSet& Streams)
{
	// Check that we have vertex data to index
	if (!ensure(Streams.Contains(FRealtimeMeshStreams::Position) && Streams.Contains(FRealtimeMeshStreams::Triangles)))
	{
		return;
	}	
	
	TArray<meshopt_Stream> OptStreams;
	int32 VertexCount = INDEX_NONE;

	auto AddStream = [&](const FRealtimeMeshStreamKey& StreamKey)
	{	
		if (auto* NewStream = Streams.Find(StreamKey))
		{
			if (NewStream->Num() > 1) // Ignore single element streams as it applies equally to all vertices
			{
				check(VertexCount == INDEX_NONE || VertexCount == NewStream->Num());
				VertexCount = NewStream->Num();
			
				meshopt_Stream& StreamEntry = OptStreams.Emplace_GetRef();
				StreamEntry.data = NewStream->GetData();
				StreamEntry.stride = NewStream->GetStride();
				StreamEntry.size = StreamEntry.stride;
			}
		}
	};

	AddStream(FRealtimeMeshStreams::Position);
	AddStream(FRealtimeMeshStreams::Tangents);
	AddStream(FRealtimeMeshStreams::TexCoords);
	AddStream(FRealtimeMeshStreams::Color);

	if (OptStreams.Num() == 0)
	{
		// No vertex data to index
		return;
	}

	// Grab existing triangles as starting point if available
	FRealtimeMeshStream* ExistingTrianglesStream = Streams.Find(FRealtimeMeshStreams::Triangles);
	const void* ExistingTriangleStreamData = ExistingTrianglesStream? ExistingTrianglesStream->GetData() : nullptr;
	const bool bUse32BitIndices = ExistingTrianglesStream? (ExistingTrianglesStream->GetElementStride() != sizeof(uint16)) : VertexCount > TNumericLimits<uint16>::Max();
	const int32 IndexCount = ExistingTrianglesStream? ExistingTrianglesStream->Num() * ExistingTrianglesStream->GetNumElements() : VertexCount;



	
	// setup new triangle stream
	TArray<uint32> RemapTable;
	RemapTable.SetNumUninitialized(VertexCount);

	int32 NewVertexCount = 0;

	if (bUse32BitIndices)
	{	
		NewVertexCount = meshopt_generateVertexRemapMulti<uint32>(
			RemapTable.GetData(),
			static_cast<const uint32*>(ExistingTriangleStreamData),
			IndexCount,
			VertexCount,
			OptStreams.GetData(),
			OptStreams.Num());
	}
	else
	{
		
		NewVertexCount = meshopt_generateVertexRemapMulti<uint16>(
			RemapTable.GetData(),
			static_cast<const uint16*>(ExistingTriangleStreamData),
			IndexCount,
			VertexCount,
			OptStreams.GetData(),
			OptStreams.Num());	
	}

	for (int32 Index = 0; Index < RemapTable.Num(); Index++)
	{
		check(RemapTable[Index] < (uint32)NewVertexCount);
	}

	// Sort the index stream
	RemapTriangleStream(Streams, RemapTable, ExistingTriangleStreamData, IndexCount, bUse32BitIndices);
	
	// Now sort all the vertex streams
	RemapAllVertexStreams(Streams, RemapTable, NewVertexCount);

	{
		TRealtimeMeshStreamBuilder<TIndex3<uint32>, void> TestTriangles(Streams.FindChecked(FRealtimeMeshStreams::Triangles));

		for (int32 Index = 0; Index < TestTriangles.Num(); Index++)
		{
			check(TestTriangles[Index].GetElement(0) < (uint32)NewVertexCount);
			check(TestTriangles[Index].GetElement(1) < (uint32)NewVertexCount);
			check(TestTriangles[Index].GetElement(2) < (uint32)NewVertexCount);
		}
		
	}
}

void URealtimeMeshDataOptimizer::OptimizeVertexCache(RealtimeMesh::FRealtimeMeshStreamSet& Streams, ERealtimeMeshOptimizationQuality Quality)
{
	// Check that we have vertex data to index
	if (!ensure(Streams.Contains(FRealtimeMeshStreams::Position) && Streams.Contains(FRealtimeMeshStreams::Triangles)))
	{
		return;
	}	

	const FRealtimeMeshStream& Positions = Streams.FindChecked(FRealtimeMeshStreams::Position);
	FRealtimeMeshStream& Triangles = Streams.FindChecked(FRealtimeMeshStreams::Triangles);

	const int32 IndexCount = Triangles.Num() * Triangles.GetNumElements();

	if (Triangles.GetElementStride() == sizeof(uint16))
	{
		if (Quality == ERealtimeMeshOptimizationQuality::RenderingEfficiency)
		{
			meshopt_optimizeVertexCache<uint16>(reinterpret_cast<uint16*>(Triangles.GetData()), reinterpret_cast<uint16*>(Triangles.GetData()), IndexCount, Positions.Num());
		}
		else
		{
			meshopt_optimizeVertexCacheFifo<uint16>(reinterpret_cast<uint16*>(Triangles.GetData()), reinterpret_cast<uint16*>(Triangles.GetData()), IndexCount, Positions.Num(), /* Cache Size */ 16);
		}
	}
	else
	{
		if (Quality == ERealtimeMeshOptimizationQuality::RenderingEfficiency)
		{
			meshopt_optimizeVertexCache<uint32>(reinterpret_cast<uint32*>(Triangles.GetData()), reinterpret_cast<uint32*>(Triangles.GetData()), IndexCount, Positions.Num());
		}
		else
		{
			meshopt_optimizeVertexCacheFifo<uint32>(reinterpret_cast<uint32*>(Triangles.GetData()), reinterpret_cast<uint32*>(Triangles.GetData()), IndexCount, Positions.Num(), /* Cache Size */ 16);			
		}
	}
}

void URealtimeMeshDataOptimizer::OptimizeOverdraw(RealtimeMesh::FRealtimeMeshStreamSet& Streams, float Threshold)
{
	// Check that we have vertex data to index
	if (!ensure(Streams.Contains(FRealtimeMeshStreams::Position) && Streams.Contains(FRealtimeMeshStreams::Triangles)))
	{
		return;
	}	

	const FRealtimeMeshStream& Positions = Streams.FindChecked(FRealtimeMeshStreams::Position);
	FRealtimeMeshStream& Triangles = Streams.FindChecked(FRealtimeMeshStreams::Triangles);

	const auto OptimizeSection = [&](int32 TriangleOffset, int32 TriangleCount)
	{		
		const int32 TriangleOffsetMultiplier = Triangles.GetNumElements() == 3? 1 : 3;
		
		if (Triangles.GetElementStride() == sizeof(uint16))
		{
			uint16* TrianglesPtr = reinterpret_cast<uint16*>(Triangles.GetDataRawAtVertex(TriangleOffset * TriangleOffsetMultiplier));
		
			meshopt_optimizeOverdraw<uint16>(TrianglesPtr, TrianglesPtr, TriangleCount * 3, reinterpret_cast<const float*>(Positions.GetData<FVector3f>()), Positions.Num(), Positions.GetStride(), Threshold);
		}
		else
		{
			uint32* TrianglesPtr = reinterpret_cast<uint32*>(Triangles.GetDataRawAtVertex(TriangleOffset * TriangleOffsetMultiplier));
		
			meshopt_optimizeOverdraw<uint32>(TrianglesPtr, TrianglesPtr, TriangleCount * 3, reinterpret_cast<const float*>(Positions.GetData<FVector3f>()), Positions.Num(), Positions.GetStride(), Threshold);
		}
	};

	if (Streams.Contains(FRealtimeMeshStreams::PolyGroups))
	{
		TRealtimeMeshStreamBuilder<uint32, void> PolyGroups(Streams.FindChecked(FRealtimeMeshStreams::PolyGroups));
		
		int32 TriangleOffset = 0;
		int32 TriangleCount = 0;

		const int32 MaxNumTriangles = FMath::Min((Triangles.Num() * Triangles.GetNumElements()) / 3, PolyGroups.Num());

		uint32 CurrentPolyGroup = 0;
		for (int32 Index = 0; Index < MaxNumTriangles; Index++)
		{
			const uint32 TriangleGroup = PolyGroups[Index];
			const bool bChangingPolyGroup = TriangleGroup != CurrentPolyGroup;

			if (!bChangingPolyGroup)
			{
				TriangleCount++;
				continue;
			}

			if (TriangleCount > 0)
			{
				OptimizeSection(TriangleOffset, TriangleCount);
			}

			// Reset trackers for the next group
			CurrentPolyGroup = TriangleGroup;
			TriangleOffset = Index;
			TriangleCount = 1;	
		}		
	}
	else
	{
		const int32 TriangleOffset = 0;
		const int32 TriangleCount = (Triangles.Num() * Triangles.GetNumElements()) / 3;

		OptimizeSection(TriangleOffset, TriangleCount);
	}	
}

void URealtimeMeshDataOptimizer::OptimizeVertexFetch(RealtimeMesh::FRealtimeMeshStreamSet& Streams)
{
	// Check that we have vertex data to index
	if (!ensure(Streams.Contains(FRealtimeMeshStreams::Position) && Streams.Contains(FRealtimeMeshStreams::Triangles)))
	{
		return;
	}	

	const FRealtimeMeshStream& Positions = Streams.FindChecked(FRealtimeMeshStreams::Position);
	const FRealtimeMeshStream& Triangles = Streams.FindChecked(FRealtimeMeshStreams::Triangles);

	// setup new triangle stream
	TArray<uint32> RemapTable;
	RemapTable.SetNumUninitialized(Positions.Num());

	const bool bUse32BitIndices = Triangles.GetElementStride() != sizeof(uint16);
	const int32 IndexCount = Triangles.Num() * Triangles.GetNumElements();
	
	int32 NewVertexCount = 0;

	if (bUse32BitIndices)
	{
		NewVertexCount = meshopt_optimizeVertexFetchRemap<uint32>(
			RemapTable.GetData(),
			reinterpret_cast<const uint32*>(Triangles.GetData()),
			IndexCount,
			Positions.Num());
	}
	else
	{
		NewVertexCount = meshopt_optimizeVertexFetchRemap<uint16>(
			RemapTable.GetData(),
			reinterpret_cast<const uint16*>(Triangles.GetData()),
			IndexCount,
			Positions.Num());	
	}

	// Sort the index stream
	RemapTriangleStream(Streams, RemapTable, Triangles.GetData(), IndexCount, bUse32BitIndices);
	
	RemapAllVertexStreams(Streams, RemapTable, NewVertexCount);
}

void URealtimeMeshDataOptimizer::OptimizeMeshIndexing(URealtimeMeshStreamSet* Streams)
{
	if (!Streams)
	{
		UE_LOG(LogRealtimeMesh, Warning, TEXT("OptimizeMeshIndexing: Invalid Stream Set"));
		return;
	}
	OptimizeMeshIndexing(Streams->GetStreamSet());
}

void URealtimeMeshDataOptimizer::OptimizeVertexCache(URealtimeMeshStreamSet* Streams, ERealtimeMeshOptimizationQuality Quality)
{
	if (!Streams)
	{
		UE_LOG(LogRealtimeMesh, Warning, TEXT("OptimizeVertexCache: Invalid Stream Set"));
		return;
	}
	OptimizeVertexCache(Streams->GetStreamSet(), Quality);
}

void URealtimeMeshDataOptimizer::OptimizeOverdraw(URealtimeMeshStreamSet* Streams, float Threshold)
{
	if (!Streams)
	{
		UE_LOG(LogRealtimeMesh, Warning, TEXT("OptimizeOverdraw: Invalid Stream Set"));
		return;
	}
	OptimizeOverdraw(Streams->GetStreamSet(), Threshold);
}

void URealtimeMeshDataOptimizer::OptimizeVertexFetch(URealtimeMeshStreamSet* Streams)
{
	if (!Streams)
	{
		UE_LOG(LogRealtimeMesh, Warning, TEXT("OptimizeVertexFetch: Invalid Stream Set"));
		return;
	}
	OptimizeVertexFetch(Streams->GetStreamSet());
}






struct FRealtimeMeshletGenerationConfig
{
	int32 MaxVertices = 64;
	int32 MaxTriangles = 128;
	float ConeWeight = 0.0f;
};

void GenerateMeshlets(RealtimeMesh::FRealtimeMeshStreamSet& Streams, FRealtimeMeshletGenerationConfig Config)
{
	// Check that we have vertex data to index
	if (!ensure(Streams.Contains(FRealtimeMeshStreams::Position) && Streams.Contains(FRealtimeMeshStreams::Triangles)))
	{
		return;
	}	

	const FRealtimeMeshStream& Positions = Streams.FindChecked(FRealtimeMeshStreams::Position);
	const FRealtimeMeshStream& Triangles = Streams.FindChecked(FRealtimeMeshStreams::Triangles);

	const int32 IndexCount = Triangles.Num() * Triangles.GetNumElements();
	
	int32 MaxMeshlets = meshopt_buildMeshletsBound(IndexCount, Config.MaxVertices, Config.MaxTriangles);

	TArray<meshopt_Meshlet> Meshlets;
	TArray<uint32> MeshletVertices;
	TArray<uint8> MeshletTriangles;

	Meshlets.SetNumUninitialized(MaxMeshlets);
	MeshletVertices.SetNumUninitialized(MaxMeshlets * Config.MaxVertices);
	MeshletTriangles.SetNumUninitialized(MaxMeshlets * Config.MaxTriangles * 3);
	

	int32 MeshletCount = meshopt_buildMeshlets(Meshlets.GetData(), MeshletVertices.GetData(), MeshletTriangles.GetData(), reinterpret_cast<const uint32*>(Triangles.GetData()),
		IndexCount, reinterpret_cast<const float*>(Positions.GetData()), Positions.Num(), sizeof(FVector3f), Config.MaxVertices, Config.MaxTriangles, Config.ConeWeight);

	
}

