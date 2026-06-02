// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.


#include "RealtimeMeshSpatialFactoryComponent.h"
#include "Factory/RealtimeMeshFactory.h"
#include "Factory/RealtimeMeshConstructed.h"
#include "Spatial/RealtimeMeshSpatialValidChunkProvider.h"
#include "Spatial/RealtimeMeshStreamingPolicyInterface.h"

/*
URealtimeMeshSpatialFactoryComponent::URealtimeMeshSpatialFactoryComponent()
{
}

URealtimeMeshSpatialFactoryComponent::~URealtimeMeshSpatialFactoryComponent()
{
}

void URealtimeMeshSpatialFactoryComponent::Initialize(const TSharedRef<RealtimeMesh::IRealtimeMeshSpatialStreamingFactoryStructureProvider>& InChunkProvider,
	const TSharedRef<RealtimeMesh::FRealtimeMeshFactory>& InFactory)
{
	FRealtimeMeshSpatialStreamingStateInitParams InitParams;
	InitParams.ChunkProvider = InChunkProvider;
	InitParams.OnLoadCell.BindUObject(this, &URealtimeMeshSpatialFactoryComponent::LoadCell);
	InitParams.OnActivateCell.BindUObject(this, &URealtimeMeshSpatialFactoryComponent::OnActivateCell);
	
	Super::Initialize(InChunkProvider);
	Factory = InFactory;
}


TFuture<URealtimeMesh*> URealtimeMeshSpatialFactoryComponent::LoadCell(const FRealtimeMeshSpatialComponentLocation& Cell, RealtimeMesh::FRealtimeMeshCancellationToken CancellationToken)
{
	auto ChunkProvider = StaticCastSharedPtr<RealtimeMesh::IRealtimeMeshSpatialStreamingFactoryStructureProvider>(GetChunkProvider());
	check(ChunkProvider);
	
	if (Factory.IsValid())
	{
		auto InitParams = ChunkProvider->GetCellInitParams(Cell);

		return Factory->InitializeNewRealtimeMesh(InitParams, CancellationToken)
			.Then([](TFuture<URealtimeMeshConstructed*>&& Future)
			{
				return static_cast<URealtimeMesh*>(Future.Get());
			});
	}
	
	return Super::LoadCell(Cell, CancellationToken);
}

TFuture<bool> URealtimeMeshSpatialFactoryComponent::UpdateCell(const FRealtimeMeshSpatialComponentLocation& Cell, URealtimeMesh* Mesh, RealtimeMesh::FRealtimeMeshCancellationToken CancellationToken)
{
	URealtimeMeshConstructed* ConstructedMesh = CastChecked<URealtimeMeshConstructed>(Mesh);

	// TODO: Come up with a better way to handle flags so we can support partial updates.
	return ConstructedMesh->MarkDirty(RealtimeMesh::FRealtimeMeshDirtyFlags::AllDirty(), CancellationToken);
}

void URealtimeMeshSpatialFactoryComponent::UnloadCell(const FRealtimeMeshSpatialComponentLocation& Cell, URealtimeMesh* Mesh)
{
	Mesh->Reset();
	
	Super::UnloadCell(Cell, Mesh);
}
*/
