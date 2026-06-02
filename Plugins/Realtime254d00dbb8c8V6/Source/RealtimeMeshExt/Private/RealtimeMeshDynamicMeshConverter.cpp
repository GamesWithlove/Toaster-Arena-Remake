// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.


#include "RealtimeMeshDynamicMeshConverter.h"
#include "RealtimeMeshComponentModule.h"
#include "RealtimeMeshSimple.h"
#include "UDynamicMesh.h"
#include "DynamicMesh/DynamicMeshAttributeSet.h"
#include "Engine/StaticMesh.h"
#include "Mesh/RealtimeMeshBlueprintMeshBuilder.h"
#include "Core/RealtimeMeshBuilder.h"

using namespace UE::Geometry;
using namespace RealtimeMesh;

struct FRealtimeMeshDynamicMeshConversionVertex
{
	int32 VertID;
	int32 TangentXID;
	int32 TangentYID;
	int32 TangentZID;
	int32 ColorID;
	TArray<int32, TFixedAllocator<REALTIME_MESH_MAX_TEX_COORDS>> UVIDs;

	FRealtimeMeshDynamicMeshConversionVertex()
		: VertID(IndexConstants::InvalidID)
		, TangentXID(IndexConstants::InvalidID)
		, TangentYID(IndexConstants::InvalidID)
		, TangentZID(IndexConstants::InvalidID)
		, ColorID(IndexConstants::InvalidID)
	{ }

	FRealtimeMeshDynamicMeshConversionVertex(int32 InVertID, int32 InNormID, int32 InTanXId, int32 InTanYID, int32 InColorID,
	                                         const TArray<uint32, TFixedAllocator<REALTIME_MESH_MAX_TEX_COORDS>>& InUVIDs)
		: VertID(InVertID), TangentXID(InTanXId), TangentYID(InTanYID), TangentZID(InNormID), ColorID(InColorID), UVIDs(InUVIDs)
	{
	}

	bool operator==(const FRealtimeMeshDynamicMeshConversionVertex& Other) const
	{
		return VertID == Other.VertID && TangentXID == Other.TangentXID && TangentYID == Other.TangentYID &&
			TangentZID == Other.TangentZID && ColorID == Other.ColorID && UVIDs == Other.UVIDs;
	}

	bool operator!=(const FRealtimeMeshDynamicMeshConversionVertex& Other) const
	{
		return !(*this == Other);
	}

	friend uint32 GetTypeHash(const FRealtimeMeshDynamicMeshConversionVertex& Vertex)
	{
		uint32 Hash = GetTypeHash(Vertex.VertID);
		Hash = HashCombine(Hash, GetTypeHash(Vertex.TangentXID));
		Hash = HashCombine(Hash, GetTypeHash(Vertex.TangentYID));
		Hash = HashCombine(Hash, GetTypeHash(Vertex.TangentZID));
		Hash = HashCombine(Hash, GetTypeHash(Vertex.ColorID));
		for (uint32 UV : Vertex.UVIDs)
		{
			Hash = HashCombine(Hash, GetTypeHash(UV));
		}
		return Hash;
	}
};

bool URealtimeMeshDynamicMeshConverter::CopyStreamSetToDynamicMesh(const FRealtimeMeshStreamSet& InStreamSet, FDynamicMesh3& OutDynamicMesh,
                                                                   FStreamSetDynamicMeshConversionOptions Options, bool bShouldAppendToExisting)
{
	// Do we have the minimum streams required?
	if (!ensure(InStreamSet.Contains(FRealtimeMeshStreams::Position) && InStreamSet.Contains(FRealtimeMeshStreams::Triangles)))
	{
		return false;
	}

	if (!bShouldAppendToExisting)
	{
		OutDynamicMesh = FDynamicMesh3();
	}
	OutDynamicMesh.EnableTriangleGroups();
	if (Options.bWantTangents || Options.bWantUVs || Options.bWantVertexColors || Options.bWantMaterialIDs)
	{
		OutDynamicMesh.EnableAttributes();
	}

	const int32 OutVertexOffset = OutDynamicMesh.VertexCount();
	const int32 OutTriangleOffset = OutDynamicMesh.TriangleCount();

	// Copy vertices. LODMesh is dense so this should be 1-1
	const TRealtimeMeshStreamBuilder<const FVector3f> PositionData(InStreamSet.FindChecked(FRealtimeMeshStreams::Position));
	const int32 VertexCount = PositionData.Num();
	for (int32 VertID = 0; VertID < VertexCount; VertID++)
	{
		const FVector3d Position = FVector3d(PositionData.GetValue(VertID));
		const int32 NewVertID = OutDynamicMesh.AppendVertex(Position);
		if (NewVertID != (VertID + OutVertexOffset))
		{
			OutDynamicMesh.Clear();
			ensure(false);
			return false;
		}
	}

	// Copy triangles. LODMesh is dense so this should be 1-1 unless there is a duplicate tri or non-manifold edge (currently aborting in that case)	
	const TRealtimeMeshStreamBuilder<const TIndex3<int32>, void> TriangleData(InStreamSet.FindChecked(FRealtimeMeshStreams::Triangles));
	const int32 TriangleCount = TriangleData.Num();
	for (int32 TriID = 0; TriID < TriangleCount; TriID++)
	{
		const TIndex3<int32> Tri = TriangleData.GetValue(TriID);
		const int32 NewTriID = OutDynamicMesh.AppendTriangle(Tri.V0 + OutVertexOffset, Tri.V1 + OutVertexOffset, Tri.V2 + OutVertexOffset);
		if (NewTriID != (TriID + OutTriangleOffset))
		{
			OutDynamicMesh.Clear();
			ensure(false);
			return false;
		}
	}

	// Transfer polygroups
	if (const auto* PolyGroupStream = InStreamSet.Find(FRealtimeMeshStreams::PolyGroups))
	{
		const TRealtimeMeshStreamBuilder<const int32, void> PolyGroupData(*PolyGroupStream);
		for (int32 TriID = 0; TriID < TriangleCount; TriID++)
		{
			OutDynamicMesh.SetTriangleGroup(TriID + OutTriangleOffset, PolyGroupData.GetValue(TriID));
		}
	}

	// copy overlay normals
	const auto* TangentsStream = InStreamSet.Find(FRealtimeMeshStreams::Tangents);
	if (TangentsStream && Options.bWantNormals)
	{
		const TRealtimeMeshStreamBuilder<const TRealtimeMeshTangents<FVector4f>, void> TangentsData(*TangentsStream);
		FDynamicMeshNormalOverlay* Normals = OutDynamicMesh.Attributes()->PrimaryNormals();
		if (Normals != nullptr)
		{
			for (int32 VertID = 0; VertID < VertexCount; VertID++)
			{
				const auto Tangents = TangentsData.GetValue(VertID);
				const int32 ElemID = Normals->AppendElement(Tangents.GetNormal());
				check(ElemID == (VertID + OutVertexOffset));
			}

			for (int32 TriID = 0; TriID < TriangleCount; ++TriID)
			{
				const TIndex3<int32> Tri = TriangleData.GetValue(TriID);
				Normals->SetTriangle(TriID + OutTriangleOffset, FIndex3i(Tri.V0, Tri.V1, Tri.V2));
			}
		}
	}

	// copy overlay tangents
	if (TangentsStream && Options.bWantTangents)
	{
		const TRealtimeMeshStreamBuilder<const TRealtimeMeshTangents<FVector4f>, void> TangentsData(*TangentsStream);
		if (FDynamicMeshNormalOverlay* TangentsX = OutDynamicMesh.Attributes()->PrimaryTangents())
		{
			for (int32 VertID = 0; VertID < VertexCount; VertID++)
			{
				const auto Tangents = TangentsData.GetValue(VertID);
				const int32 ElemID = TangentsX->AppendElement(Tangents.GetTangent());
				check(ElemID == (VertID + OutVertexOffset));
			}

			for (int32 TriID = 0; TriID < TriangleCount; ++TriID)
			{
				const TIndex3<int32> Tri = TriangleData.GetValue(TriID);
				TangentsX->SetTriangle(TriID + OutTriangleOffset, FIndex3i(Tri.V0, Tri.V1, Tri.V2));
			}
		}
		if (FDynamicMeshNormalOverlay* TangentsY = OutDynamicMesh.Attributes()->PrimaryBiTangents())
		{
			for (int32 VertID = 0; VertID < VertexCount; VertID++)
			{
				const auto Tangents = TangentsData.GetValue(VertID);
				const int32 ElemID = TangentsY->AppendElement(Tangents.GetBinormal());
				check(ElemID == VertID);
			}

			for (int32 TriID = 0; TriID < TriangleCount; ++TriID)
			{
				const TIndex3<int32> Tri = TriangleData.GetValue(TriID);
				TangentsY->SetTriangle(TriID + OutTriangleOffset, FIndex3i(Tri.V0, Tri.V1, Tri.V2));
			}
		}
	}


	// copy UV layers
	const auto* TexCoordsStream = InStreamSet.Find(FRealtimeMeshStreams::TexCoords);
	if (TexCoordsStream && Options.bWantUVs)
	{
		int32 NumUVLayers = TexCoordsStream->GetNumElements();
		if (NumUVLayers > 0)
		{
			OutDynamicMesh.Attributes()->SetNumUVLayers(NumUVLayers);
			for (int32 UVLayerIndex = 0; UVLayerIndex < NumUVLayers; ++UVLayerIndex)
			{
				const TRealtimeMeshStridedStreamBuilder<const FVector2f, void> TexCoordsData(*TexCoordsStream, UVLayerIndex);
				FDynamicMeshUVOverlay* UVOverlay = OutDynamicMesh.Attributes()->GetUVLayer(UVLayerIndex);

				for (int32 VertID = 0; VertID < VertexCount; VertID++)
				{
					const FVector2f UV = TexCoordsData.GetValue(VertID);
					const int32 ElemID = UVOverlay->AppendElement(UV);
					check(ElemID == (VertID + OutVertexOffset));
				}

				for (int32 TriID = 0; TriID < TriangleCount; ++TriID)
				{
					const TIndex3<int32> Tri = TriangleData.GetValue(TriID);
					UVOverlay->SetTriangle(TriID + OutTriangleOffset, FIndex3i(Tri.V0, Tri.V1, Tri.V2));
				}
			}
		}
	}

	// copy overlay colors
	const auto* ColorStream = InStreamSet.Find(FRealtimeMeshStreams::Color);
	if (ColorStream && Options.bWantVertexColors)
	{
		OutDynamicMesh.Attributes()->EnablePrimaryColors();
		FDynamicMeshColorOverlay* Colors = OutDynamicMesh.Attributes()->PrimaryColors();

		const TRealtimeMeshStreamBuilder<const FColor> ColorData(*ColorStream);

		for (int32 VertID = 0; VertID < VertexCount; VertID++)
		{
			const FColor Color = ColorData.GetValue(VertID);
			const int32 ElemID = Colors->AppendElement(Color.ReinterpretAsLinear());
			check(ElemID == (VertID + OutVertexOffset));
		}

		for (int32 TriID = 0; TriID < TriangleCount; ++TriID)
		{
			const TIndex3<int32> Tri = TriangleData.GetValue(TriID);
			Colors->SetTriangle(TriID + OutTriangleOffset, FIndex3i(Tri.V0, Tri.V1, Tri.V2));
		}
	}

	return true;
}


struct FRealtimeMeshDynamicMeshConversionHelper
{
private:
	const FDynamicMesh3& Mesh;
	const FDynamicMeshNormalOverlay* Normals;
	const FDynamicMeshNormalOverlay* TangentsX;
	const FDynamicMeshNormalOverlay* TangentsY;
	const FDynamicMeshColorOverlay* Colors;
	TArray<const FDynamicMeshUVOverlay*> UVOverlays;

	uint32 bHasNormals : 1;
	uint32 bHasOverlayNormals : 1;
	uint32 bHasVertexNormals : 1;
	uint32 bHasOverlayTangents : 1;
	uint32 bHasOverlayBinormals : 1;

	uint32 bHasColors : 1;
	uint32 bHasOverlayColors : 1;
	uint32 bHasVertexColors : 1;

	uint32 bHasUVs : 1;
	uint32 bHasOverlayUVs : 1;
	uint32 bHasVertexUVs : 1;

	uint32 bCopyMaterialIndices : 1;
	

	TArray<FRealtimeMeshDynamicMeshConversionVertex> VertexList;
	TMap<FRealtimeMeshDynamicMeshConversionVertex, int32> VertexMap;


	FRealtimeMeshStreamSet& StreamSet;
	
	TOptional<TRealtimeMeshStreamBuilder<TIndex3<uint32>>> TriangleData;
	TOptional<TRealtimeMeshStreamBuilder<uint16>> PolyGroupData;
	
	TOptional<TRealtimeMeshStreamBuilder<FVector3f>> PositionData;
	TOptional<TRealtimeMeshStreamBuilder<TRealtimeMeshTangents<FVector4f>, TRealtimeMeshTangents<FPackedNormal>>> TangentData;
	TOptional<TRealtimeMeshStreamBuilder<FColor>> ColorData;
	TArray<TRealtimeMeshStridedStreamBuilder<FVector2f, FVector2DHalf>> TexCoordData;


	int32 VertexStartOffset;
	int32 TriangleStartOffset;
	
public:
	FRealtimeMeshDynamicMeshConversionHelper(FRealtimeMeshStreamSet& InStreamSet, const FDynamicMesh3& InMesh, FStreamSetDynamicMeshConversionOptions Options)
		: Mesh(InMesh)
		, Normals(nullptr)
		, TangentsX(nullptr)
		, TangentsY(nullptr)
		, Colors(nullptr)
		, StreamSet(InStreamSet)
	{
		if (Mesh.HasAttributes())
		{
			Normals = Mesh.Attributes()->PrimaryNormals();
			TangentsX = Mesh.Attributes()->PrimaryTangents();
			TangentsY = Mesh.Attributes()->PrimaryBiTangents();
			Colors = Mesh.Attributes()->PrimaryColors();

			UVOverlays.SetNum(Mesh.Attributes()->NumUVLayers());
			for (int32 UVLayerIndex = 0; UVLayerIndex < UVOverlays.Num(); UVLayerIndex++)
			{
				UVOverlays[UVLayerIndex] = Mesh.Attributes()->GetUVLayer(UVLayerIndex);
			}

			// Strip trailing invalid channels
			const int32 LastValidChannel = UVOverlays.FindLastByPredicate([](const FDynamicMeshUVOverlay* Overlay) { return Overlay != nullptr; });
			UVOverlays.SetNum(LastValidChannel + 1);
		}

		bHasOverlayNormals = Options.bWantNormals && Normals != nullptr;
		bHasVertexNormals = Options.bWantNormals && Mesh.HasVertexNormals();
		bHasNormals = bHasOverlayNormals || bHasVertexNormals;
		bHasOverlayTangents = bHasNormals && Options.bWantTangents && TangentsX != nullptr;		
		bHasOverlayBinormals = bHasNormals && bHasOverlayTangents && Options.bWantTangents && TangentsY != nullptr;
		
		bHasOverlayColors = Options.bWantVertexColors && Colors != nullptr;
		bHasVertexColors = Options.bWantVertexColors && Mesh.HasVertexColors();
		bHasColors = bHasOverlayColors || bHasVertexColors;
		
		bHasOverlayUVs = Options.bWantUVs && UVOverlays.Num() > 0;
		bHasVertexUVs = Options.bWantUVs && Mesh.HasVertexUVs();
		bHasUVs = bHasOverlayUVs || bHasVertexUVs;

		bCopyMaterialIndices = Options.bWantMaterialIDs && Mesh.HasTriangleGroups();

		TriangleData = TRealtimeMeshStreamBuilder<TIndex3<uint32>>(StreamSet.FindOrAdd(FRealtimeMeshStreams::Triangles, GetRealtimeMeshBufferLayout<TIndex3<uint32>>()));

		if (bCopyMaterialIndices)
		{
			PolyGroupData = TRealtimeMeshStreamBuilder<uint16>(StreamSet.FindOrAdd(FRealtimeMeshStreams::PolyGroups, GetRealtimeMeshBufferLayout<uint16>()));
			PolyGroupData->SetNumZeroed(TriangleData->Num());
		}		

		
		PositionData = TRealtimeMeshStreamBuilder<FVector3f>(StreamSet.FindOrAdd(FRealtimeMeshStreams::Position, GetRealtimeMeshBufferLayout<FVector3f>()));
		
		if (bHasOverlayNormals || bHasVertexNormals)
		{
			TangentData = TRealtimeMeshStreamBuilder<TRealtimeMeshTangents<FVector4f>, TRealtimeMeshTangents<FPackedNormal>>(
				StreamSet.FindOrAdd(FRealtimeMeshStreams::Tangents, GetRealtimeMeshBufferLayout<TRealtimeMeshTangents<FPackedNormal>>()));
			TangentData->SetNumZeroed(PositionData->Num());
		}

		if (bHasOverlayColors || bHasVertexColors)
		{
			ColorData = TRealtimeMeshStreamBuilder<FColor>(StreamSet.FindOrAdd(FRealtimeMeshStreams::Color, GetRealtimeMeshBufferLayout<FColor>()));
			ColorData->SetNumZeroed(PositionData->Num());
		}

		if (bHasOverlayUVs || bHasVertexUVs)
		{
			FRealtimeMeshStream& TexCoordStream = StreamSet.FindOrAdd(FRealtimeMeshStreams::TexCoords, GetRealtimeMeshBufferLayout<FVector2DHalf>(UVOverlays.Num()));

			if (TexCoordStream.GetNumElements() < UVOverlays.Num())
			{
				UVOverlays.SetNum(TexCoordStream.GetNumElements());				
				const int32 LastValidChannel = UVOverlays.FindLastByPredicate([](const FDynamicMeshUVOverlay* Overlay) { return Overlay != nullptr; });
				UVOverlays.SetNum(LastValidChannel + 1);

				bHasOverlayUVs = UVOverlays.Num() > 0;
				bHasUVs = bHasOverlayUVs || bHasVertexUVs;
			}
			
			TexCoordStream.SetNumZeroed(PositionData->Num());

			for (int32 Index = 0; Index < TexCoordStream.GetNumElements(); Index++)
			{
				TexCoordData.Add(TRealtimeMeshStridedStreamBuilder<FVector2f, FVector2DHalf>(TexCoordStream, Index));
			}
		}
		

		VertexStartOffset = PositionData->Num();
		TriangleStartOffset = TriangleData->Num();
	}


	bool GetIndicesForTriangle(FRealtimeMeshDynamicMeshConversionVertex* VertexTriplet, int32 TriID)
	{
		if (!Mesh.IsTriangle(TriID))
		{
			return false;
		}
		FRealtimeMeshDynamicMeshConversionVertex* NewVerts = VertexTriplet;
		
		const FIndex3i Triangle = Mesh.GetTriangle(TriID);
		NewVerts[0].VertID = Triangle.A;
		NewVerts[1].VertID = Triangle.B;
		NewVerts[2].VertID = Triangle.C;

		// Grab Normals
		if (bHasOverlayNormals && Normals->IsSetTriangle(TriID))
		{				
			const FIndex3i NormalTriangle = Normals->GetTriangle(TriID);
			NewVerts[0].TangentZID = NormalTriangle.A;
			NewVerts[1].TangentZID = NormalTriangle.B;
			NewVerts[2].TangentZID = NormalTriangle.C;
		}

		// Grab Tangents
		if (bHasOverlayTangents && TangentsX->IsSetTriangle(TriID))
		{
			const FIndex3i TangentXTriangle = TangentsX->GetTriangle(TriID);
			NewVerts[0].TangentXID = TangentXTriangle.A;
			NewVerts[1].TangentXID = TangentXTriangle.B;
			NewVerts[2].TangentXID = TangentXTriangle.C;
		}

		// Grab Binormals
		if (bHasOverlayBinormals && TangentsY->IsSetTriangle(TriID))
		{
			const FIndex3i TangentYTriangle = TangentsY->GetTriangle(TriID);
			NewVerts[0].TangentYID = TangentYTriangle.A;
			NewVerts[1].TangentYID = TangentYTriangle.B;
			NewVerts[2].TangentYID = TangentYTriangle.C;
		}

		// Grab Colors
		if (bHasOverlayColors && Colors->IsSetTriangle(TriID))
		{
			const FIndex3i ColorTriangle = Colors->GetTriangle(TriID);
			NewVerts[0].ColorID = ColorTriangle.A;
			NewVerts[1].ColorID = ColorTriangle.B;
			NewVerts[2].ColorID = ColorTriangle.C;
		}

		if (bHasOverlayUVs)
		{
			NewVerts[0].UVIDs.SetNum(UVOverlays.Num());
			NewVerts[1].UVIDs.SetNum(UVOverlays.Num());
			NewVerts[2].UVIDs.SetNum(UVOverlays.Num());		

			for (int32 UVLayerIndex = 0; UVLayerIndex < UVOverlays.Num(); UVLayerIndex++)
			{
				const FIndex3i UVTriangle = UVOverlays[UVLayerIndex]->IsSetTriangle(TriID) ? UVOverlays[UVLayerIndex]->GetTriangle(TriID) : FIndex3i::Invalid();
				NewVerts[0].UVIDs[UVLayerIndex] = UVTriangle.A;
				NewVerts[1].UVIDs[UVLayerIndex] = UVTriangle.B;
				NewVerts[2].UVIDs[UVLayerIndex] = UVTriangle.C;
			}
		}

		return true;		
	}

	int32 GetNewIndexForVertex(const FRealtimeMeshDynamicMeshConversionVertex& Vertex)
	{
		if (const int32* Found = VertexMap.Find(Vertex))
		{
			return *Found;
		}

		const int32 NewIndex = VertexList.Add(Vertex);
		VertexMap.Add(Vertex, NewIndex);
		return NewIndex + VertexStartOffset;		
	}

	int32 AddTriangle(const TIndex3<uint32>& NewTri, int32 PolyGroupId)
	{
		const int32 NewTriIndex = TriangleData->Add(NewTri);

		if (bCopyMaterialIndices)
		{
			const int32 PolyGroupIndex = PolyGroupData->Add(PolyGroupId);
			check(NewTriIndex == PolyGroupIndex);
		}
		
		return NewTriIndex;
	}

	void AddNumTris(int32 NumTris)
	{
		TriangleData->SetNumUninitialized(TriangleStartOffset + NumTris);
		if (bCopyMaterialIndices)
		{
			PolyGroupData->SetNumUninitialized(TriangleStartOffset + NumTris);
		}
	}

	void SetTriangle(int32 NewTriIndex, const TIndex3<uint32>& NewTri, int32 PolyGroupIndex)
	{
		TriangleData->Set(TriangleStartOffset + NewTriIndex, NewTri);

		if (bCopyMaterialIndices)
		{
			PolyGroupData->Set(TriangleStartOffset + NewTriIndex, PolyGroupIndex);
		}
	}

	void CopyFinalVertexData()
	{
		// Copy positions
		PositionData->SetNumUninitialized(VertexStartOffset + VertexList.Num());
		for (int32 VertID = 0; VertID < VertexList.Num(); VertID++)
		{
			const FRealtimeMeshDynamicMeshConversionVertex& Vertex = VertexList[VertID];
			PositionData->Set(VertexStartOffset + VertID, FVector3f(Mesh.GetVertex(Vertex.VertID)));
		}

		// Copy tangents
		if (bHasOverlayNormals || bHasVertexNormals)
		{
			TangentData->SetNumUninitialized(VertexStartOffset + VertexList.Num());
			
			for (int32 VertID = 0; VertID < VertexList.Num(); VertID++)
			{
				const FRealtimeMeshDynamicMeshConversionVertex& Vertex = VertexList[VertID];
				
				const FVector3f TanZ = Vertex.TangentZID != FDynamicMesh3::InvalidID
					? Normals->GetElement(Vertex.TangentZID)
					: bHasVertexNormals
						? Mesh.GetVertexNormal(Vertex.VertID)
						: FVector3f::UnitZ();
				
				TRealtimeMeshTangents<FVector4f> NewTangents;
				if (bHasOverlayBinormals)
				{
					const FVector3f TanX = Vertex.TangentXID != FDynamicMesh3::InvalidID ? TangentsX->GetElement(Vertex.TangentXID) : FVector3f::UnitX();
					const FVector3f TanY = Vertex.TangentYID != FDynamicMesh3::InvalidID ? TangentsY->GetElement(Vertex.TangentYID) : FVector3f::UnitY();
					NewTangents.SetTangents(TanX, TanY, TanZ);
				}
				else if (bHasOverlayTangents)
				{
					const FVector3f TanX = Vertex.TangentXID != FDynamicMesh3::InvalidID ? TangentsX->GetElement(Vertex.TangentXID) : FVector3f::UnitX();
					NewTangents.SetNormalAndTangent(TanZ, TanX);
				}
				else
				{
					NewTangents.SetNormal(TanZ);
				}

				TangentData->Set(VertexStartOffset + VertID, NewTangents);
			}
		}

		// Copy colors
		if (bHasOverlayColors || bHasVertexColors)
		{
			ColorData->SetNumUninitialized(VertexStartOffset + VertexList.Num());

			for (int32 VertID = 0; VertID < VertexList.Num(); VertID++)
			{
				const FRealtimeMeshDynamicMeshConversionVertex& Vertex = VertexList[VertID];
				const FLinearColor Color = Vertex.ColorID != FDynamicMesh3::InvalidID
					? FLinearColor(Colors->GetElement(Vertex.ColorID))
					: bHasVertexColors
						? FLinearColor(Mesh.GetVertexColor(Vertex.VertID))
						: FLinearColor::White;
				ColorData->Set(VertexStartOffset = VertID, Color.QuantizeRound());
			}			
		}

		// Copy texcoords
		if (bHasOverlayUVs || bHasVertexUVs)
		{
			TexCoordData[0].SetNumUninitialized(VertexStartOffset + VertexList.Num());

			const int32 UVsToCopy = FMath::Min(UVOverlays.Num(), TexCoordData.Num());

			// Special case for channel 0 as we can pull from vertex uvs if we have them if the overlay doesn't have data
			auto* CurrentTexCoordData = &TexCoordData[0];
			for (int32 VertID = 0; VertID < VertexList.Num(); VertID++)
			{
				const FRealtimeMeshDynamicMeshConversionVertex& Vertex = VertexList[VertID];
				const FVector2f UV = Vertex.UVIDs[0] != FDynamicMesh3::InvalidID
					? UVOverlays[0]->GetElement(Vertex.UVIDs[0])
					: bHasVertexUVs
						? Mesh.GetVertexUV(Vertex.VertID)
						: FVector2f::Zero();
				CurrentTexCoordData->Set(VertexStartOffset + VertID, UV);
			}

			// Handle the rest of the channels
			for (int32 UVLayerIndex = 1; UVLayerIndex < UVsToCopy; UVLayerIndex++)
			{
				CurrentTexCoordData = &TexCoordData[UVLayerIndex];
				const FDynamicMeshUVOverlay* UVOverlay = UVOverlays[UVLayerIndex];

				if (UVOverlay != nullptr)
				{
					for (int32 VertID = 0; VertID < VertexList.Num(); VertID++)
					{
						const FRealtimeMeshDynamicMeshConversionVertex& Vertex = VertexList[VertID];
						const FVector2f UV = Vertex.UVIDs[UVLayerIndex] != FDynamicMesh3::InvalidID ? UVOverlay->GetElement(Vertex.UVIDs[UVLayerIndex]) : FVector2f::Zero();
						CurrentTexCoordData->Set(VertexStartOffset + VertID, UV);
					}
				}
				else
				{
					for (int32 VertID = 0; VertID < VertexList.Num(); VertID++)
					{
						CurrentTexCoordData->Set(VertexStartOffset + VertID, FVector2f::Zero());
					}
				}
			}
		}
	}
};




bool URealtimeMeshDynamicMeshConverter::CopyStreamSetFromDynamicMesh(const FDynamicMesh3& InDynamicMesh, FRealtimeMeshStreamSet& OutStreamSet,
	FStreamSetDynamicMeshConversionOptions Options, bool bShouldAppendToExisting, TMap<int32, FRealtimeMeshStreamRange>* OutGroupRanges)
{
	if (!bShouldAppendToExisting)
	{
		OutStreamSet = FRealtimeMeshStreamSet();
	}

	FRealtimeMeshDynamicMeshConversionHelper Converter(OutStreamSet, InDynamicMesh, Options);

	struct FPolyGroupEntry
	{
		int32 TriangleCount;
		int32 MinVertex;
		int32 MaxVertex;

		FPolyGroupEntry()
			: TriangleCount(0)
			, MinVertex(TNumericLimits<int32>::Max())
			, MaxVertex(0)
		{
		}
	};

	if (Options.bAutoSortPolyGroupsIfNecessary && InDynamicMesh.HasTriangleGroups())
	{
		TMap<int32, FPolyGroupEntry> PolyGroupCounts;
		int32 TotalCount = 0;
		for (int32 TriID = 0; TriID <= InDynamicMesh.MaxTriangleID(); TriID++)
		{
			if (InDynamicMesh.IsTriangle(TriID) && (!Options.TriangleFilterFunction || Options.TriangleFilterFunction(InDynamicMesh, TriID)))
			{
				TotalCount+= 1;
				const int32 PolyGroupID = Options.PolyGroupRemapFunction? Options.PolyGroupRemapFunction(InDynamicMesh, InDynamicMesh.GetTriangleGroup(TriID)) : InDynamicMesh.GetTriangleGroup(TriID);
				auto& Entry = PolyGroupCounts.FindOrAdd(PolyGroupID);
				Entry.TriangleCount += 1;

				const FIndex3i Tri = InDynamicMesh.GetTriangle(TriID);
				Entry.MinVertex = FMath::Min(Entry.MinVertex, FMath::Min3(Tri.A, Tri.B, Tri.C));
				Entry.MaxVertex = FMath::Max(Entry.MinVertex, FMath::Max3(Tri.A, Tri.B, Tri.C));
			}
		}
		
		if (OutGroupRanges)
		{
			OutGroupRanges->Empty();
		}
		
		// Now we convert the counts to an offset from start
		int32 CurrentOffset = 0;
		for (auto& Pair : PolyGroupCounts)
		{
			const auto& Entry = Pair.Value;
	
			if (OutGroupRanges)
			{
				OutGroupRanges->Add(Pair.Key, FRealtimeMeshStreamRange(Entry.MinVertex, Entry.MaxVertex + 1, CurrentOffset * 3, (CurrentOffset + Entry.TriangleCount) * 3));
			}
			
			const int32 Count = Entry.TriangleCount;
			Pair.Value.TriangleCount = CurrentOffset;
			CurrentOffset += Count;
		}

		Converter.AddNumTris(CurrentOffset);
		
		// Convert and map triangles
		FRealtimeMeshDynamicMeshConversionVertex VertexTriplet[3];	
		for (int32 TriID = 0; TriID <= InDynamicMesh.MaxTriangleID(); TriID++)
		{
			if (InDynamicMesh.IsTriangle(TriID) && (!Options.TriangleFilterFunction || Options.TriangleFilterFunction(InDynamicMesh, TriID)))
			{
				if (Converter.GetIndicesForTriangle(VertexTriplet, TriID))
				{
					TIndex3<uint32> NewTriangle;
					NewTriangle.V0 = Converter.GetNewIndexForVertex(VertexTriplet[0]);
					NewTriangle.V1 = Converter.GetNewIndexForVertex(VertexTriplet[1]);
					NewTriangle.V2 = Converter.GetNewIndexForVertex(VertexTriplet[2]);

					const int32 PolyGroupID = Options.PolyGroupRemapFunction? Options.PolyGroupRemapFunction(InDynamicMesh, InDynamicMesh.GetTriangleGroup(TriID)) : InDynamicMesh.GetTriangleGroup(TriID);
					
					const int32 Index = PolyGroupCounts[PolyGroupID].TriangleCount++;
					Converter.SetTriangle(Index, NewTriangle, PolyGroupID);			
				}
			}
		}
	}
	else
	{
		// Convert and map triangles
		FRealtimeMeshDynamicMeshConversionVertex VertexTriplet[3];	
		for (int32 TriID = 0; TriID <= InDynamicMesh.MaxTriangleID(); TriID++)
		{
			if (InDynamicMesh.IsTriangle(TriID) && (!Options.TriangleFilterFunction || Options.TriangleFilterFunction(InDynamicMesh, TriID)))
			{
				if (Converter.GetIndicesForTriangle(VertexTriplet, TriID))
				{
					TIndex3<uint32> NewTriangle;
					NewTriangle.V0 = Converter.GetNewIndexForVertex(VertexTriplet[0]);
					NewTriangle.V1 = Converter.GetNewIndexForVertex(VertexTriplet[1]);
					NewTriangle.V2 = Converter.GetNewIndexForVertex(VertexTriplet[2]);

					if (Options.bWantMaterialIDs)
					{
						const int32 PolyGroupID = Options.PolyGroupRemapFunction
							? Options.PolyGroupRemapFunction(InDynamicMesh, InDynamicMesh.GetTriangleGroup(TriID))
							: InDynamicMesh.GetTriangleGroup(TriID);
						Converter.AddTriangle(NewTriangle, PolyGroupID);
					}
					else
					{
						Converter.AddTriangle(NewTriangle, 0);						
					}
				}
			}
		}

		if (OutGroupRanges)
		{
			OutGroupRanges->Empty();
		}
	}

	Converter.CopyFinalVertexData();
	

	return true;
}


URealtimeMeshStreamSet* URealtimeMeshDynamicMeshConverter::CopyStreamSetFromDynamicMesh(UDynamicMesh* FromDynamicMesh, URealtimeMeshStreamSet* ToStreamSet,
                                                                                        FStreamSetDynamicMeshConversionOptions Options, ERealtimeMeshOutcomePins& Outcome)
{
	if (FromDynamicMesh == nullptr)
	{
		UE_LOG(LogRealtimeMesh, Warning, TEXT("RealtimeMeshWarning: CopyFromDynamicMesh failed: FromDynamicMesh is null"));
		Outcome = ERealtimeMeshOutcomePins::Failure;
		return ToStreamSet;
	}

	if (ToStreamSet == nullptr)
	{
		UE_LOG(LogRealtimeMesh, Warning, TEXT("RealtimeMeshWarning: CopyFromDynamicMesh failed: ToStreamSet is null"));
		Outcome = ERealtimeMeshOutcomePins::Failure;
		return ToStreamSet;
	}

	bool bSuccess = false;
	FromDynamicMesh->ProcessMesh([&](const FDynamicMesh3& Mesh)
	{
		bSuccess = CopyStreamSetFromDynamicMesh(Mesh, ToStreamSet->GetStreamSet(), Options);
	});

	Outcome = bSuccess ? ERealtimeMeshOutcomePins::Success : ERealtimeMeshOutcomePins::Failure;
	return ToStreamSet;
}

UDynamicMesh* URealtimeMeshDynamicMeshConverter::CopyStreamSetToDynamicMesh(URealtimeMeshStreamSet* FromStreamSet, UDynamicMesh* ToDynamicMesh,
                                                                            FStreamSetDynamicMeshConversionOptions Options, ERealtimeMeshOutcomePins& Outcome)
{
	if (FromStreamSet == nullptr)
	{
		UE_LOG(LogRealtimeMesh, Warning, TEXT("RealtimeMeshWarning: CopyToDynamicMesh failed: FromStreamSet is null"));
		Outcome = ERealtimeMeshOutcomePins::Failure;
		return ToDynamicMesh;
	}

	if (ToDynamicMesh == nullptr)
	{
		UE_LOG(LogRealtimeMesh, Warning, TEXT("RealtimeMeshWarning: CopyToDynamicMesh failed: ToDynamicMesh is null"));
		Outcome = ERealtimeMeshOutcomePins::Failure;
		return ToDynamicMesh;
	}

	bool bSuccess = false;
	ToDynamicMesh->EditMesh([&](FDynamicMesh3& Mesh)
	{
		bSuccess = CopyStreamSetToDynamicMesh(FromStreamSet->GetStreamSet(), Mesh, Options);
	});

	Outcome = bSuccess ? ERealtimeMeshOutcomePins::Success : ERealtimeMeshOutcomePins::Failure;
	return ToDynamicMesh;
}

URealtimeMeshSimple* URealtimeMeshDynamicMeshConverter::CopyRealtimeMeshFromDynamicMesh(UDynamicMesh* FromDynamicMesh, URealtimeMeshSimple* ToRealtimeMesh,
                                                                                        FRealtimeMeshDynamicMeshConversionOptions Options, ERealtimeMeshOutcomePins& Outcome)
{
	if (FromDynamicMesh == nullptr)
	{
		UE_LOG(LogRealtimeMesh, Warning, TEXT("RealtimeMeshWarning: CopyFromDynamicMesh failed: FromDynamicMesh is null"));
		Outcome = ERealtimeMeshOutcomePins::Failure;
		return ToRealtimeMesh;
	}

	if (ToRealtimeMesh == nullptr)
	{
		UE_LOG(LogRealtimeMesh, Warning, TEXT("RealtimeMeshWarning: CopyFromDynamicMesh failed: ToRealtimeMesh is null"));
		Outcome = ERealtimeMeshOutcomePins::Failure;
		return ToRealtimeMesh;
	}

	FStreamSetDynamicMeshConversionOptions SectionOptions;
	//SectionOptions.LODType = Options.LODType;
	SectionOptions.bWantTangents = Options.bWantTangents;
	SectionOptions.bWantUVs = Options.bWantUVs;
	SectionOptions.bWantVertexColors = Options.bWantVertexColors;
	SectionOptions.bWantMaterialIDs = Options.bWantPolyGroups;
	
	FRealtimeMeshStreamSet Streams;

	if (!CopyStreamSetFromDynamicMesh(FromDynamicMesh->GetMeshRef(), Streams, SectionOptions))
	{
		UE_LOG(LogRealtimeMesh, Warning, TEXT("RealtimeMeshWarning: CopyFromDynamicMesh failed: Failed to copy mesh data"));
		ToRealtimeMesh->Reset();
		return nullptr;
	}

	const FRealtimeMeshSectionGroupKey SectionGroupKey = FRealtimeMeshSectionGroupKey::Create(0, "Default");
	ToRealtimeMesh->CreateSectionGroup(SectionGroupKey, MoveTemp(Streams));

	
	Outcome = ERealtimeMeshOutcomePins::Success;
	return ToRealtimeMesh;
}

UDynamicMesh* URealtimeMeshDynamicMeshConverter::CopyRealtimeMeshToDynamicMesh(URealtimeMeshSimple* FromRealtimeMesh, UDynamicMesh* ToDynamicMesh,
                                                                               FRealtimeMeshDynamicMeshConversionOptions Options, ERealtimeMeshOutcomePins& Outcome)
{
	if (FromRealtimeMesh == nullptr)
	{
		UE_LOG(LogRealtimeMesh, Warning, TEXT("RealtimeMeshWarning: CopyToDynamicMesh failed: FromRealtimeMesh is null"));
		Outcome = ERealtimeMeshOutcomePins::Failure;
		return ToDynamicMesh;
	}

	if (ToDynamicMesh == nullptr)
	{
		UE_LOG(LogRealtimeMesh, Warning, TEXT("RealtimeMeshWarning: CopyToDynamicMesh failed: ToDynamicMesh is null"));
		Outcome = ERealtimeMeshOutcomePins::Failure;
		return ToDynamicMesh;
	}

	bool bSuccess = false;
	FromRealtimeMesh->ProcessMesh(Options.SectionGroup, [&](const FRealtimeMeshStreamSet& StreamSet)
	{
		ToDynamicMesh->EditMesh([&](FDynamicMesh3& OutMesh)
		{
			FStreamSetDynamicMeshConversionOptions ConversionOptions;
			ConversionOptions.bWantNormals = Options.bWantNormals;
			ConversionOptions.bWantTangents = Options.bWantTangents;
			ConversionOptions.bWantUVs = Options.bWantUVs;
			ConversionOptions.bWantVertexColors = Options.bWantVertexColors;
			ConversionOptions.bWantMaterialIDs = Options.bWantPolyGroups;

			bSuccess = CopyStreamSetToDynamicMesh(StreamSet, OutMesh, ConversionOptions);
		});
	});

	Outcome = ERealtimeMeshOutcomePins::Success;
	return ToDynamicMesh;
}
