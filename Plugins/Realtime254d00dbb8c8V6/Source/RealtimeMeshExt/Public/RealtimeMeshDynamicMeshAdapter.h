// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.

#pragma once
#include "Spatial/MeshAABBTree3.h"
#include "Core/RealtimeMeshBuilder.h"


namespace RealtimeMesh
{
	struct FRealtimeMeshStreamSet;

	struct FRealtimeMeshDynamicMeshAdapter
	{
	private:
		const FRealtimeMeshStreamSet& StreamSet;
		const TRealtimeMeshStreamBuilder<const FVector3f> PositionData;
		const TRealtimeMeshStreamBuilder<const TIndex3<uint32>, void> TriangleData;
		
	public:
		FRealtimeMeshDynamicMeshAdapter(const FRealtimeMeshStreamSet& InStreamSet)
			: StreamSet(InStreamSet)
			, PositionData(StreamSet.FindChecked(FRealtimeMeshStreams::Position))
			, TriangleData(StreamSet.FindChecked(FRealtimeMeshStreams::Triangles))
		{
		}

		FORCEINLINE_DEBUGGABLE uint64 GetChangeStamp() const
		{
			// TODO: Do we want to support a change stamp? 
			return 0;
		}
		
		FORCEINLINE_DEBUGGABLE int32 VertexCount() const
		{
			return PositionData.Num();
		}
		
		FORCEINLINE_DEBUGGABLE int32 TriangleCount() const
		{
			return TriangleData.Num();
		}
		
		FORCEINLINE_DEBUGGABLE int32 MaxTriangleID() const
		{
                       // TODO: Isn't this supposed to be TriangleCount() - 1?
                       // That crashes in BuildTopDown function MeshAABBTree3, but it
                       // appears this and TriangleCount are used interchangeably while the names are confusing.
                       return TriangleCount() /*- 1*/;
               }
		
		FORCEINLINE_DEBUGGABLE UE::Geometry::FIndex3i GetTriangle(int32 TriangleID) const
		{
			check(TriangleID >= 0 && TriangleID < TriangleCount());
			const TIndex3<uint32> TriIndices = TriangleData.GetValue(TriangleID);
			return UE::Geometry::FIndex3i(TriIndices.V0, TriIndices.V1, TriIndices.V2);
		}
		
		FORCEINLINE_DEBUGGABLE FVector3d GetVertex(int32 VertexID) const
		{
			return FVector3d(PositionData.GetValue(VertexID));
		}
		
		template<typename VecType>
		FORCEINLINE_DEBUGGABLE void GetTriVertices(int32 TriangleID, VecType& v0, VecType& v1, VecType& v2) const
		{
			check(TriangleID >= 0 && TriangleID < TriangleCount());
			const TIndex3<uint32> TriIndices = TriangleData.GetValue(TriangleID);
			v0 = (VecType)PositionData[TriIndices.V0].Get();
			v1 = (VecType)PositionData[TriIndices.V1].Get();
			v2 = (VecType)PositionData[TriIndices.V2].Get();
		}

		FORCEINLINE_DEBUGGABLE bool IsTriangle(int32 TriangleID) const
		{
			return TriangleData.IsValidIndex(TriangleID);
		}
		
		FORCEINLINE_DEBUGGABLE FVector3d GetTriNormal(int32 TriangleID) const
		{		
			FVector3d v0, v1, v2;
			GetTriVertices(TriangleID, v0, v1, v2);
			return UE::Geometry::VectorUtil::Normal(v0, v1, v2);
		}
		
	};

	using FRealtimeMeshAABBTree3 = UE::Geometry::TMeshAABBTree3<FRealtimeMeshDynamicMeshAdapter>;
}
