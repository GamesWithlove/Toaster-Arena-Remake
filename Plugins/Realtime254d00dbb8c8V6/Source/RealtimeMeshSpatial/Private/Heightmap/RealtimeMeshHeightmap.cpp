// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.


#include "Heightmap/RealtimeMeshHeightmap.h"

#include "Factory/RealtimeMeshFactory.h"
#include "Factory/RealtimeMeshProviderPlane.h"
#include "Providers/RealtimeMeshSpatialPlaneParamProvider.h"


/*
void URealtimeMeshHeightmapComponent::OnRegister()
{	
	Super::OnRegister();
	
	auto NewPolicy = MakeShared<RealtimeMesh::FRealtimeMeshSpatialGrid2DStreamingPolicy>(FVector2f(CellSize), 256.0f, 5);
		
	auto PlaneProvider = MakeShared<RealtimeMesh::FRealtimeMeshProviderPlane>();
	auto SpatialProvider = MakeShared<RealtimeMesh::FRealtimeMeshSpatialPlaneParamProvider>(PlaneProvider);
	auto NewFactory = MakeShared<RealtimeMesh::FRealtimeMeshFactory>(SpatialProvider);

	SetFactory(NewFactory);
	SetStreamingPolicy(NewPolicy);
	
}

// Sets default values
URealtimeMeshHeightmapComponent::URealtimeMeshHeightmapComponent()
	: CellSize(64.0f)
{
}

IRealtimeMeshSpatialStreamingPolicy* URealtimeMeshHeightmapComponent::GetStreamingPolicy() const
{
	if (!StreamingPolicy)
	{
		const_cast<URealtimeMeshHeightmapComponent&>(*this).StreamingPolicy = MakeShared<FRealtimeMeshSpatialGrid2DStreamingPolicy>(FVector2f(CellSize), 256.0f, 4);
		
		auto PlaneProvider = MakeShared<RealtimeMesh::FRealtimeMeshProviderPlane>();
		auto SpatialProvider = MakeShared<RealtimeMesh::FRealtimeMeshSpatialPlaneParamProvider>(PlaneProvider);
		const_cast<URealtimeMeshHeightmapComponent&>(*this).Factory = MakeShared<RealtimeMesh::FRealtimeMeshFactory>(SpatialProvider);

		const_cast<URealtimeMeshHeightmapComponent&>(*this).SetFactory(Factory);
		const_cast<URealtimeMeshHeightmapComponent&>(*this).SetStreamingPolicy(StreamingPolicy);
	}
	
	return StreamingPolicy.Get();
}
*/
