// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.

#include "RealtimeMeshProTest_NanitePrebuiltData.h"
#include "RealtimeMeshSimple.h"
#include "Mesh/RealtimeMeshNaniteResourcesInterface.h"
#include "Engine/StaticMesh.h"
#include "StaticMeshResources.h"

using namespace RealtimeMesh;

ARealtimeMeshProTest_NanitePrebuiltData::ARealtimeMeshProTest_NanitePrebuiltData()
{
	PrimaryActorTick.bCanEverTick = false;
}

void ARealtimeMeshProTest_NanitePrebuiltData::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
	CopyNaniteFromStaticMesh();
}

void ARealtimeMeshProTest_NanitePrebuiltData::CopyNaniteFromStaticMesh()
{
	// Validate source mesh
	if (!SourceStaticMesh)
	{
		if (bEnableVerboseLogging)
		{
			UE_LOG(LogRealtimeMesh, Warning, TEXT("NanitePrebuiltData: No source StaticMesh assigned"));
		}
		return;
	}

	// Check for valid Nanite data
	if (!SourceStaticMesh->HasValidNaniteData())
	{
		UE_LOG(LogRealtimeMesh, Warning, TEXT("NanitePrebuiltData: StaticMesh '%s' does not have valid Nanite data. Enable 'Nanite Support' in mesh settings."),
			*SourceStaticMesh->GetName());
		return;
	}

	// Get render data
	const FStaticMeshRenderData* RenderData = SourceStaticMesh->GetRenderData();
	if (!RenderData || !RenderData->NaniteResourcesPtr)
	{
		UE_LOG(LogRealtimeMesh, Warning, TEXT("NanitePrebuiltData: StaticMesh '%s' has no render data or Nanite resources"),
			*SourceStaticMesh->GetName());
		return;
	}

	// Access the source Nanite resources
	const ::Nanite::FResources& SourceNaniteResources = *RenderData->NaniteResourcesPtr;

	if (bEnableVerboseLogging)
	{
		UE_LOG(LogRealtimeMesh, Log, TEXT("NanitePrebuiltData: Copying Nanite data from '%s'"), *SourceStaticMesh->GetName());
		UE_LOG(LogRealtimeMesh, Log, TEXT("  - NumClusters: %d"), SourceNaniteResources.NumClusters);
		UE_LOG(LogRealtimeMesh, Log, TEXT("  - NumRootPages: %d"), SourceNaniteResources.NumRootPages);
		UE_LOG(LogRealtimeMesh, Log, TEXT("  - NumHierarchyNodes: %d"), SourceNaniteResources.HierarchyNodes.Num());
		UE_LOG(LogRealtimeMesh, Log, TEXT("  - RootData size: %d bytes"), SourceNaniteResources.RootData.Num());
	}

	// Get bounds from the static mesh
	const FBoxSphereBounds3f Bounds = FBoxSphereBounds3f(RenderData->Bounds);

	// Create a copy of the Nanite resources
	FRealtimeMeshNaniteResourcesPtr NaniteResources = FRealtimeMeshNaniteResources::CreateFromCopy(SourceNaniteResources, Bounds);

	if (!NaniteResources.IsValid() || !NaniteResources->HasValidData())
	{
		UE_LOG(LogRealtimeMesh, Warning, TEXT("NanitePrebuiltData: Failed to create Nanite resources copy"));
		return;
	}

	// Initialize the RealtimeMesh
	URealtimeMeshSimple* RealtimeMesh = GetRealtimeMeshComponent()->InitializeRealtimeMesh<URealtimeMeshSimple>();

	// Copy materials from the source StaticMesh
	const TArray<FStaticMaterial>& StaticMaterials = SourceStaticMesh->GetStaticMaterials();
	for (int32 i = 0; i < StaticMaterials.Num(); i++)
	{
		RealtimeMesh->SetupMaterialSlot(i, StaticMaterials[i].MaterialSlotName, SourceStaticMesh->GetMaterial(i));
	}

	if (bEnableVerboseLogging)
	{
		UE_LOG(LogRealtimeMesh, Log, TEXT("  - Copied %d material slots"), StaticMaterials.Num());
	}

	// Apply the Nanite resources to the RealtimeMesh
	{
		FRealtimeMeshUpdateContext UpdateContext(RealtimeMesh->GetMesh()->GetSharedResources());
		RealtimeMesh->GetMesh()->SetNaniteResources(UpdateContext, MoveTemp(NaniteResources));
	}

	if (bEnableVerboseLogging)
	{
		UE_LOG(LogRealtimeMesh, Log, TEXT("NanitePrebuiltData: Successfully applied prebuilt Nanite resources from '%s'"), *SourceStaticMesh->GetName());
	}
}
