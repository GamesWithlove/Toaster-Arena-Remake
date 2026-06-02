// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.


#include "RealtimeMeshStaticMeshConverter.h"

#include "MaterialDomain.h"
#include "RealtimeMeshComponentModule.h"
#include "RealtimeMeshSimple.h"
#include "StaticMeshLODResourcesAdapter.h"
#include "UDynamicMesh.h"
#include "DynamicMesh/DynamicMeshAttributeSet.h"
#include "Engine/StaticMesh.h"
#include "Mesh/RealtimeMeshBlueprintMeshBuilder.h"
#include "Core/RealtimeMeshBuilder.h"
#include "RenderProxy/RealtimeMeshNaniteProxyInterface.h"
#include "MeshDescription.h"
#include "StaticMeshAttributes.h"
#include "PhysicsEngine/BodySetup.h"
#include "Core/RealtimeMeshDataTypes.h"

#if WITH_EDITOR
#include "StaticMeshOperations.h"
#include "MeshUtilities.h"
#endif

using namespace UE::Geometry;
using namespace RealtimeMesh;

bool URealtimeMeshStaticMeshConverter::CopyStreamSetToStaticMesh(const FRealtimeMeshStreamSet& InStreamSet, UStaticMesh* OutStaticMesh,
	const FStreamSetStaticMeshConversionOptions& Options)
{
#if !WITH_EDITOR
	UE_LOG(LogRealtimeMesh, Warning, TEXT("CopyStreamSetToStaticMesh: Static mesh building is only available in editor"));
	return false;
#else
	if (!OutStaticMesh)
	{
		UE_LOG(LogRealtimeMesh, Warning, TEXT("CopyStreamSetToStaticMesh: OutStaticMesh is null"));
		return false;
	}

	// Get the position stream for vertex count
	const auto* PositionStream = InStreamSet.Find(FRealtimeMeshStreams::Position);
	if (!PositionStream)
	{
		UE_LOG(LogRealtimeMesh, Warning, TEXT("CopyStreamSetToStaticMesh: No position stream found"));
		return false;
	}

	const int32 NumVertices = PositionStream->Num();
	if (NumVertices == 0)
	{
		UE_LOG(LogRealtimeMesh, Warning, TEXT("CopyStreamSetToStaticMesh: No vertices found"));
		return false;
	}

	// Get triangle stream
	const auto* TriangleStream = InStreamSet.Find(FRealtimeMeshStreams::Triangles);
	if (!TriangleStream)
	{
		UE_LOG(LogRealtimeMesh, Warning, TEXT("CopyStreamSetToStaticMesh: No triangle stream found"));
		return false;
	}

	// Create new mesh description
	FMeshDescription* MeshDescription = OutStaticMesh->CreateMeshDescription(Options.LODIndex);
	FStaticMeshAttributes Attributes(*MeshDescription);
	Attributes.Register();
	
	UE_LOG(LogRealtimeMesh, Log, TEXT("CopyStreamSetToStaticMesh: Starting conversion with %d vertices"), NumVertices);

	// Get attribute accessors
	TVertexAttributesRef<FVector3f> VertexPositions = Attributes.GetVertexPositions();
	TVertexInstanceAttributesRef<FVector3f> VertexInstanceNormals = Attributes.GetVertexInstanceNormals();
	TVertexInstanceAttributesRef<FVector2f> VertexInstanceUVs = Attributes.GetVertexInstanceUVs();
	TVertexInstanceAttributesRef<FVector4f> VertexInstanceColors = Attributes.GetVertexInstanceColors();

	// Calculate triangle count for reservation
	const int32 NumTriangles = TriangleStream->Num();  // Each element is a TIndex3, so this is the triangle count
	
	// Reserve space
	MeshDescription->ReserveNewVertices(NumVertices);
	MeshDescription->ReserveNewVertexInstances(NumVertices);
	MeshDescription->ReserveNewEdges(NumVertices * 2); // Rough estimate
	MeshDescription->ReserveNewPolygons(NumTriangles);

	// Copy positions
	const FVector3f* Positions = PositionStream->GetData<FVector3f>();
	TArray<FVertexID> VertexIDs;
	VertexIDs.Reserve(NumVertices);
	
	for (int32 VertIdx = 0; VertIdx < NumVertices; VertIdx++)
	{
		FVertexID VertexID = MeshDescription->CreateVertex();
		VertexPositions[VertexID] = Positions[VertIdx];
		VertexIDs.Add(VertexID);
	}

	// Create default polygon group
	FPolygonGroupID DefaultPolyGroup = MeshDescription->CreatePolygonGroup();

	// Get optional streams
	const auto* TangentStream = InStreamSet.Find(FRealtimeMeshStreams::Tangents);
	const auto* UVStream = InStreamSet.Find(FRealtimeMeshStreams::TexCoords);
	const auto* ColorStream = InStreamSet.Find(FRealtimeMeshStreams::Color);
	const auto* PolyGroupStream = InStreamSet.Find(FRealtimeMeshStreams::PolyGroups);
	
	// Check the element type of the triangle stream
	const FRealtimeMeshBufferLayout TriangleLayout = TriangleStream->GetLayout();
	UE_LOG(LogRealtimeMesh, Log, TEXT("CopyStreamSetToStaticMesh: Triangle stream layout: %s"), *TriangleLayout.ToString());
	
	// Try to determine if we're using uint16 or uint32 indices
	bool bUsingUInt16 = false;
	if (TriangleLayout.GetElementType().GetDatumType() == RealtimeMesh::ERealtimeMeshDatumType::UInt16)
	{
		bUsingUInt16 = true;
		UE_LOG(LogRealtimeMesh, Log, TEXT("CopyStreamSetToStaticMesh: Using uint16 indices"));
	}
	else
	{
		UE_LOG(LogRealtimeMesh, Log, TEXT("CopyStreamSetToStaticMesh: Using uint32 indices"));
	}
	
	UE_LOG(LogRealtimeMesh, Log, TEXT("CopyStreamSetToStaticMesh: Processing %d triangles"), NumTriangles);
	
	for (int32 TriIdx = 0; TriIdx < NumTriangles; TriIdx++)
	{
		uint32 V0, V1, V2;
		
		if (bUsingUInt16)
		{
			// Get triangle as uint16
			const RealtimeMesh::TIndex3<uint16>* TriangleData16 = TriangleStream->GetData<RealtimeMesh::TIndex3<uint16>>();
			const RealtimeMesh::TIndex3<uint16>& Triangle = TriangleData16[TriIdx];
			V0 = Triangle.V0;
			V1 = Triangle.V1;
			V2 = Triangle.V2;
		}
		else
		{
			// Get triangle as uint32
			const RealtimeMesh::TIndex3<uint32>* TriangleData32 = TriangleStream->GetData<RealtimeMesh::TIndex3<uint32>>();
			const RealtimeMesh::TIndex3<uint32>& Triangle = TriangleData32[TriIdx];
			V0 = Triangle.V0;
			V1 = Triangle.V1;
			V2 = Triangle.V2;
		}
		
		// Validate indices
		if (V0 >= (uint32)NumVertices || V1 >= (uint32)NumVertices || V2 >= (uint32)NumVertices)
		{
			UE_LOG(LogRealtimeMesh, Warning, TEXT("CopyStreamSetToStaticMesh: Invalid triangle indices for triangle %d: [%d, %d, %d] (NumVertices=%d)"), 
				TriIdx, V0, V1, V2, NumVertices);
			continue;
		}
		
		// Create vertex instances for this triangle
		TArray<FVertexInstanceID> TriangleVertexInstances;
		TArray<FVertexID> TriangleVertices = { VertexIDs[V0], VertexIDs[V1], VertexIDs[V2] };
		
		for (int32 CornerIdx = 0; CornerIdx < 3; CornerIdx++)
		{
			uint32 VertIdx = (CornerIdx == 0) ? V0 : (CornerIdx == 1) ? V1 : V2;
			FVertexInstanceID InstanceID = MeshDescription->CreateVertexInstance(TriangleVertices[CornerIdx]);
			
			// Set attributes for this vertex instance
			if (TangentStream && Options.bWantTangents)
			{
				const FRealtimeMeshTangentsHighPrecision* TangentData = TangentStream->GetData<FRealtimeMeshTangentsHighPrecision>();
				const FRealtimeMeshTangentsHighPrecision& Tangent = TangentData[VertIdx];
				VertexInstanceNormals[InstanceID] = Tangent.GetNormal();
			}
			else
			{
				VertexInstanceNormals[InstanceID] = FVector3f::UpVector;
			}

			if (UVStream && Options.bWantUVs)
			{
				const FVector2f* UVData = UVStream->GetData<FVector2f>();
				VertexInstanceUVs[InstanceID] = UVData[VertIdx];
			}
			else
			{
				VertexInstanceUVs[InstanceID] = FVector2f::ZeroVector;
			}

			if (ColorStream && Options.bWantVertexColors)
			{
				const FColor* ColorData = ColorStream->GetData<FColor>();
				VertexInstanceColors[InstanceID] = FVector4f(FLinearColor(ColorData[VertIdx]));
			}
			else
			{
				VertexInstanceColors[InstanceID] = FVector4f::One();
			}
			
			TriangleVertexInstances.Add(InstanceID);
		}
		
		// Determine polygon group
		FPolygonGroupID PolyGroupID = DefaultPolyGroup;
		if (PolyGroupStream && Options.bWantPolyGroups)
		{
			const int32* PolyGroups = PolyGroupStream->GetData<int32>();
			int32 GroupIndex = PolyGroups[TriIdx];
			
			// Create polygon groups as needed
			while (MeshDescription->PolygonGroups().Num() <= GroupIndex)
			{
				MeshDescription->CreatePolygonGroup();
			}
			PolyGroupID = FPolygonGroupID(GroupIndex);
		}
		
		// Create the polygon
		MeshDescription->CreatePolygon(PolyGroupID, TriangleVertexInstances);
	}

	// Log mesh description statistics
	UE_LOG(LogRealtimeMesh, Log, TEXT("CopyStreamSetToStaticMesh: MeshDescription has %d vertices, %d vertex instances, %d polygons"), 
		MeshDescription->Vertices().Num(), 
		MeshDescription->VertexInstances().Num(), 
		MeshDescription->Polygons().Num());
	
	// Commit the mesh description
	OutStaticMesh->CommitMeshDescription(Options.LODIndex);
	
	UE_LOG(LogRealtimeMesh, Log, TEXT("CopyStreamSetToStaticMesh: Successfully converted %d triangles"), NumTriangles);
	
	return true;
#endif // WITH_EDITOR
}

bool URealtimeMeshStaticMeshConverter::CopyStreamSetFromStaticMesh(const UStaticMesh* InStaticMesh, FRealtimeMeshStreamSet& OutStreamSet,
	const FStreamSetStaticMeshConversionOptions& Options)
{
	OutStreamSet = FRealtimeMeshStreamSet();
	if (InStaticMesh == nullptr)
	{
		UE_LOG(LogRealtimeMesh, Warning, TEXT("RealtimeMeshWarning: CopyFromStaticMesh failed: InStaticMesh is null"));
		return false;
	}

/*#if WITH_EDITOR
	if (Options.LODType != ERealtimeMeshCopyStaticMeshLODType::RenderData)
	{
		return CopyStreamSetToStaticMesh_SourceData(InStaticMesh, OutStreamSet, Options);
	}
#endif*/

	return CopyStreamSetToStaticMesh_RenderData(InStaticMesh, OutStreamSet, Options);
}


URealtimeMeshStreamSet* URealtimeMeshStaticMeshConverter::CopyStreamSetFromStaticMesh(UStaticMesh* FromStaticMeshAsset, URealtimeMeshStreamSet* ToStreamSet,
	FStreamSetStaticMeshConversionOptions Options, ERealtimeMeshOutcomePins& Outcome)
{
	if (FromStaticMeshAsset == nullptr)
	{
		UE_LOG(LogRealtimeMesh, Warning, TEXT("RealtimeMeshWarning: CopyFromStaticMesh failed: FromStaticMeshAsset is null"));
		Outcome = ERealtimeMeshOutcomePins::Failure;
		return ToStreamSet;
	}

	if (ToStreamSet == nullptr)
	{
		UE_LOG(LogRealtimeMesh, Warning, TEXT("RealtimeMeshWarning: CopyFromStaticMesh failed: ToStreamSet is null"));
		Outcome = ERealtimeMeshOutcomePins::Failure;
		return ToStreamSet;
	}

	const bool bSuccess = CopyStreamSetFromStaticMesh(FromStaticMeshAsset, ToStreamSet->GetStreamSet(), Options);

	Outcome = bSuccess? ERealtimeMeshOutcomePins::Success : ERealtimeMeshOutcomePins::Failure;
	return ToStreamSet;
}

UStaticMesh* URealtimeMeshStaticMeshConverter::CopyStreamSetToStaticMesh(URealtimeMeshStreamSet* FromStreamSet, UStaticMesh* ToStaticMeshAsset,
	FStreamSetStaticMeshConversionOptions Options, ERealtimeMeshOutcomePins& Outcome)
{
	if (FromStreamSet == nullptr)
	{
		UE_LOG(LogRealtimeMesh, Warning, TEXT("RealtimeMeshWarning: CopyToStaticMesh failed: FromStreamSet is null"));
		Outcome = ERealtimeMeshOutcomePins::Failure;
		return ToStaticMeshAsset;
	}

	if (ToStaticMeshAsset == nullptr)
	{
		UE_LOG(LogRealtimeMesh, Warning, TEXT("RealtimeMeshWarning: CopyToStaticMesh failed: ToStaticMeshAsset is null"));
		Outcome = ERealtimeMeshOutcomePins::Failure;
		return ToStaticMeshAsset;
	}
	
	const bool bSuccess = CopyStreamSetToStaticMesh(FromStreamSet->GetStreamSet(), ToStaticMeshAsset, Options);

	Outcome = bSuccess? ERealtimeMeshOutcomePins::Success : ERealtimeMeshOutcomePins::Failure;
	return ToStaticMeshAsset;
}

URealtimeMeshSimple* URealtimeMeshStaticMeshConverter::CopyRealtimeMeshFromStaticMesh(UStaticMesh* FromStaticMeshAsset, URealtimeMeshSimple* ToRealtimeMesh,
	FRealtimeMeshStaticMeshConversionOptions Options, ERealtimeMeshOutcomePins& Outcome)
{
	if (FromStaticMeshAsset == nullptr)
	{
		UE_LOG(LogRealtimeMesh, Warning, TEXT("RealtimeMeshWarning: CopyFromStaticMesh failed: FromStaticMeshAsset is null"));
		Outcome = ERealtimeMeshOutcomePins::Failure;
		return ToRealtimeMesh;
	}

	if (ToRealtimeMesh == nullptr)
	{
		UE_LOG(LogRealtimeMesh, Warning, TEXT("RealtimeMeshWarning: CopyFromStaticMesh failed: ToRealtimeMesh is null"));
		Outcome = ERealtimeMeshOutcomePins::Failure;
		return ToRealtimeMesh;
	}

	// Grab the materials
	if (Options.bWantsMaterials)
	{
		const auto& Materials = FromStaticMeshAsset->GetStaticMaterials();
		for (int32 MatID = 0; MatID < Materials.Num(); MatID++)
		{
			ToRealtimeMesh->SetupMaterialSlot(MatID, Materials[MatID].MaterialSlotName, Materials[MatID].MaterialInterface);
		}		
	}

	// Grab all the LODs
	const int32 MinLOD = FMath::Clamp(Options.MinLODIndex, 0, FromStaticMeshAsset->GetNumLODs() - 1);
	const int32 MaxLOD = FMath::Clamp(Options.MaxLODIndex, 0, FromStaticMeshAsset->GetNumLODs() - 1);
	
	for (int32 LODIndex = MinLOD; LODIndex <= MaxLOD; LODIndex++)
	{
		FStreamSetStaticMeshConversionOptions SectionOptions;
		//SectionOptions.LODType = Options.LODType;
		SectionOptions.LODIndex = LODIndex;
		SectionOptions.bWantTangents = Options.bWantTangents;
		SectionOptions.bWantUVs = Options.bWantUVs;
		SectionOptions.bWantVertexColors = Options.bWantVertexColors;
		SectionOptions.bWantPolyGroups = Options.bWantPolyGroups;
		
		FRealtimeMeshStreamSet Streams;

		if (!CopyStreamSetFromStaticMesh(FromStaticMeshAsset, Streams, SectionOptions))
		{
			UE_LOG(LogRealtimeMesh, Warning, TEXT("RealtimeMeshWarning: CopyFromStaticMesh failed: Failed to copy LOD %d"), LODIndex);
			ToRealtimeMesh->Reset();
			return nullptr;
		}

		const FRealtimeMeshLODKey LODKey = LODIndex > MinLOD? ToRealtimeMesh->AddLOD(FRealtimeMeshLODConfig()) : FRealtimeMeshLODKey(0);
		const FRealtimeMeshSectionGroupKey SectionGroupKey = FRealtimeMeshSectionGroupKey::Create(LODKey, "Default");

		if (FromStaticMeshAsset->GetRenderData())
		{
			ToRealtimeMesh->UpdateLODConfig(LODKey, FRealtimeMeshLODConfig(FromStaticMeshAsset->GetRenderData()->ScreenSize[LODIndex].GetValue()));
		}
		ToRealtimeMesh->CreateSectionGroup(SectionGroupKey, MoveTemp(Streams));
	}

	// Copy distance field if requested
	if (Options.bWantsDistanceField && FromStaticMeshAsset->GetRenderData() && FromStaticMeshAsset->GetRenderData()->LODResources.IsValidIndex(0))
	{
		// Grab a copy of the data
		FRealtimeMeshDistanceField DistancField(*FromStaticMeshAsset->GetRenderData()->LODResources[0].DistanceFieldData);
		ToRealtimeMesh->SetDistanceField(MoveTemp(DistancField));
	}

	// Copy card representation if requested
	if (Options.bWantsLumenCards && FromStaticMeshAsset->GetRenderData() && FromStaticMeshAsset->GetRenderData()->LODResources.IsValidIndex(0))
	{
		// Grab a copy of the data
		if (FromStaticMeshAsset->GetRenderData()->LODResources[0].CardRepresentationData)
		{
			FRealtimeMeshCardRepresentation CardRepresentation(*FromStaticMeshAsset->GetRenderData()->LODResources[0].CardRepresentationData);
			ToRealtimeMesh->SetCardRepresentation(MoveTemp(CardRepresentation));			
		}
	}

	// Copies the nanite resources. This relies on functionality only available in RMC-Pro
	/*if (IRealtimeMeshNaniteSceneProxyManager::IsNaniteSupportAvailable())
	{
		if (FromStaticMeshAsset->HasValidNaniteData())
		{
			auto NewResources= IRealtimeMeshNaniteSceneProxyManager::GetNaniteModule().CreateNewResources(*FromStaticMeshAsset->GetRenderData()->NaniteResourcesPtr);
			ToRealtimeMesh->GetMesh()->SetNaniteResources(NewResources);			
		}		
	}*/
	
	Outcome = ERealtimeMeshOutcomePins::Success;
	return ToRealtimeMesh;
}

UStaticMesh* URealtimeMeshStaticMeshConverter::CopyRealtimeMeshToStaticMesh(URealtimeMeshSimple* FromRealtimeMesh, UStaticMesh* ToStaticMeshAsset,
	FRealtimeMeshStaticMeshConversionOptions Options, ERealtimeMeshOutcomePins& Outcome)
{
#if !WITH_EDITOR
	UE_LOG(LogRealtimeMesh, Warning, TEXT("CopyRealtimeMeshToStaticMesh: Static mesh building is only available in editor"));
	Outcome = ERealtimeMeshOutcomePins::Failure;
	return ToStaticMeshAsset;
#else
	if (FromRealtimeMesh == nullptr)
	{
		UE_LOG(LogRealtimeMesh, Warning, TEXT("CopyRealtimeMeshToStaticMesh: FromRealtimeMesh is null"));
		Outcome = ERealtimeMeshOutcomePins::Failure;
		return ToStaticMeshAsset;
	}

	if (ToStaticMeshAsset == nullptr)
	{
		UE_LOG(LogRealtimeMesh, Warning, TEXT("CopyRealtimeMeshToStaticMesh: ToStaticMeshAsset is null"));
		Outcome = ERealtimeMeshOutcomePins::Failure;
		return ToStaticMeshAsset;
	}

	// Clear existing static mesh data
	ToStaticMeshAsset->GetStaticMaterials().Empty();
	
	// Setup materials
	if (Options.bWantsMaterials)
	{
		const int32 NumMaterials = FromRealtimeMesh->GetNumMaterials();
		for (int32 MatIdx = 0; MatIdx < NumMaterials; MatIdx++)
		{
			FStaticMaterial& StaticMaterial = ToStaticMeshAsset->GetStaticMaterials().AddDefaulted_GetRef();
			StaticMaterial.MaterialInterface = FromRealtimeMesh->GetMaterial(MatIdx);
			StaticMaterial.MaterialSlotName = FromRealtimeMesh->GetMaterialSlotName(MatIdx);
			StaticMaterial.UVChannelData = FMeshUVChannelInfo(1.0f);
		}
	}

	// Extract mesh data from RealtimeMeshSimple and convert to StaticMesh
	ToStaticMeshAsset->SetNumSourceModels(1);
	
	// Initialize the source model with default settings
	FStaticMeshSourceModel& SourceModel = ToStaticMeshAsset->GetSourceModel(0);
	SourceModel.BuildSettings.bRecomputeNormals = false;
	SourceModel.BuildSettings.bRecomputeTangents = false;
	SourceModel.BuildSettings.bRemoveDegenerates = false;
	SourceModel.BuildSettings.bUseHighPrecisionTangentBasis = false;
	SourceModel.BuildSettings.bUseFullPrecisionUVs = false;
	
	bool bSuccess = false;
	
	// Get all LODs from the RealtimeMesh
	TArray<FRealtimeMeshLODKey> LODs = FromRealtimeMesh->GetLODs();
	if (LODs.Num() == 0)
	{
		UE_LOG(LogRealtimeMesh, Warning, TEXT("CopyRealtimeMeshToStaticMesh: No LODs found in RealtimeMeshSimple"));
		Outcome = ERealtimeMeshOutcomePins::Failure;
		return ToStaticMeshAsset;
	}
	
	// Process the first LOD (LOD 0)
	const FRealtimeMeshLODKey& FirstLOD = LODs[0];
	TArray<FRealtimeMeshSectionGroupKey> SectionGroups = FromRealtimeMesh->GetSectionGroups(FirstLOD);
	
	if (SectionGroups.Num() == 0)
	{
		UE_LOG(LogRealtimeMesh, Warning, TEXT("CopyRealtimeMeshToStaticMesh: No section groups found in LOD 0"));
		Outcome = ERealtimeMeshOutcomePins::Failure;
		return ToStaticMeshAsset;
	}
	
	// For now, use the first section group
	const FRealtimeMeshSectionGroupKey& SectionGroupKey = SectionGroups[0];
	
	// Extract mesh data using ProcessMesh
	UE_LOG(LogRealtimeMesh, Log, TEXT("CopyRealtimeMeshToStaticMesh: Processing section group"));
	
	// Check if the section group has data
	int32 NumVerticesInGroup = 0;
	int32 NumTrianglesInGroup = 0;
	
	FromRealtimeMesh->ProcessMesh(SectionGroupKey, [&](const FRealtimeMeshStreamSet& StreamSet)
	{
		UE_LOG(LogRealtimeMesh, Log, TEXT("CopyRealtimeMeshToStaticMesh: ProcessMesh callback executing"));
		
		// Log what streams are available
		if (const auto* PosStream = StreamSet.Find(FRealtimeMeshStreams::Position))
		{
			NumVerticesInGroup = PosStream->Num();
			UE_LOG(LogRealtimeMesh, Log, TEXT("  - Position stream: %d vertices"), NumVerticesInGroup);
		}
		if (const auto* TriStream = StreamSet.Find(FRealtimeMeshStreams::Triangles))
		{
			NumTrianglesInGroup = TriStream->Num();
			UE_LOG(LogRealtimeMesh, Log, TEXT("  - Triangle stream: %d triangles"), NumTrianglesInGroup);
		}
		if (StreamSet.Find(FRealtimeMeshStreams::Tangents))
		{
			UE_LOG(LogRealtimeMesh, Log, TEXT("  - Tangents stream: present"));
		}
		if (StreamSet.Find(FRealtimeMeshStreams::TexCoords))
		{
			UE_LOG(LogRealtimeMesh, Log, TEXT("  - TexCoords stream: present"));
		}
		
		// Convert the stream set to static mesh using our existing function
		FStreamSetStaticMeshConversionOptions StreamOptions;
		StreamOptions.LODIndex = 0;
		StreamOptions.bWantTangents = Options.bWantTangents;
		StreamOptions.bWantUVs = Options.bWantUVs;
		StreamOptions.bWantVertexColors = Options.bWantVertexColors;
		StreamOptions.bWantPolyGroups = Options.bWantPolyGroups;
		
		bSuccess = CopyStreamSetToStaticMesh(StreamSet, ToStaticMeshAsset, StreamOptions);
	});
	
	if (!bSuccess)
	{
		UE_LOG(LogRealtimeMesh, Warning, TEXT("CopyRealtimeMeshToStaticMesh: Failed to convert mesh streams to static mesh"));
	}

	// Copy collision if available
	if (UBodySetup* BodySetup = FromRealtimeMesh->GetBodySetup())
	{
		if (!ToStaticMeshAsset->GetBodySetup())
		{
			ToStaticMeshAsset->CreateBodySetup();
		}
		
		if (UBodySetup* StaticMeshBodySetup = ToStaticMeshAsset->GetBodySetup())
		{
			// Copy collision properties
			StaticMeshBodySetup->CopyBodyPropertiesFrom(BodySetup);
			StaticMeshBodySetup->AggGeom = BodySetup->AggGeom;
		}
	}

	if (bSuccess)
	{
		// Build render data
		ToStaticMeshAsset->Build();
		
		// Post edit change to ensure all editor systems are notified
		ToStaticMeshAsset->PostEditChange();
		
		// Mark package dirty to ensure it can be saved
		ToStaticMeshAsset->MarkPackageDirty();
	}
	
	Outcome = bSuccess ? ERealtimeMeshOutcomePins::Success : ERealtimeMeshOutcomePins::Failure;
	return ToStaticMeshAsset;
#endif // WITH_EDITOR
}




bool URealtimeMeshStaticMeshConverter::CopyStreamSetToStaticMesh_RenderData(const UStaticMesh* InStaticMesh, FRealtimeMeshStreamSet& OutStreamSet,
                                                                            const FStreamSetStaticMeshConversionOptions& Options)
{
	OutStreamSet = FRealtimeMeshStreamSet();
	/*if (Options.LODType != ERealtimeMeshCopyStaticMeshLODType::MaxAvailable && Options.LODType != ERealtimeMeshCopyStaticMeshLODType::RenderData)
	{
		UE_LOG(LogRealtimeMesh, Warning, TEXT("RealtimeMeshWarning: CopyStreamSetToStaticMesh failed: Requested LOD Type is not available"));
		return false;
	}*/

	// TODO: I've heard this is also unusable in a dedicated server, so need to look into that and make sure we handle that failure correctly
#if !WITH_EDITOR
	if (InStaticMesh->bAllowCPUAccess == false)
	{
		UE_LOG(LogRealtimeMesh, Warning, TEXT("RealtimeMeshWarning: CopyFromStaticMesh failed: StaticMesh bAllowCPUAccess must be set to true to read mesh data at Runtime"));
		return false;
	}
#endif

	const int32 UseLODIndex = FMath::Clamp(Options.LODIndex, 0, InStaticMesh->GetNumLODs() - 1);

	const FStaticMeshLODResources* LODResources = nullptr;
	if (const FStaticMeshRenderData* RenderData = InStaticMesh->GetRenderData())
	{
		LODResources = &RenderData->LODResources[UseLODIndex];
	}
	if (LODResources == nullptr)
	{
		UE_LOG(LogRealtimeMesh, Warning, TEXT("RealtimeMeshWarning: CopyFromStaticMesh failed: Request LOD is not available"));
		return false;
	}
	
#if WITH_EDITOR
	// respect BuildScale build setting
	const FMeshBuildSettings& LODBuildSettings = InStaticMesh->GetSourceModel(UseLODIndex).BuildSettings;
	const FVector3d BuildScale = LODBuildSettings.BuildScale3D;
#else
	const FVector3d BuildScale = FVector3d::One();	
#endif

	TRealtimeMeshStreamBuilder<FVector3f> PositionData(OutStreamSet.AddStream(FRealtimeMeshStreams::Position, GetRealtimeMeshBufferLayout<FVector3f>()));
	TRealtimeMeshStreamBuilder<TIndex3<uint32>> TriangleData(OutStreamSet.AddStream(FRealtimeMeshStreams::Triangles,
		GetRealtimeMeshBufferLayout<TIndex3<uint32>>()));

	FStaticMeshLODResourcesMeshAdapter Adapter(LODResources);
	Adapter.SetBuildScale(BuildScale, false);

	// Copy vertices. LODMesh is dense so this should be 1-1
	const int32 VertexCount = Adapter.VertexCount();
	PositionData.SetNumUninitialized(VertexCount);
	for (int32 VertID = 0; VertID < VertexCount; VertID++)
	{
		const FVector3f Position = static_cast<FVector3f>(Adapter.GetVertex(VertID));
		PositionData.Set(VertID, Position);
	}

	// Copy triangles. LODMesh is dense so this should be 1-1 unless there is a duplicate tri or non-manifold edge (currently aborting in that case)
	const int32 TriangleCount = Adapter.TriangleCount();
	TriangleData.SetNumUninitialized(TriangleCount);
	for (int32 TriID = 0; TriID < TriangleCount; TriID++)
	{
		const FIndex3i Tri = Adapter.GetTriangle(TriID);
		TriangleData.Set(TriID, TIndex3<uint32>(Tri.A, Tri.B, Tri.C));
	}
	
	// transfer sections to PolyGroups
	if (Options.bWantPolyGroups)
	{
		TRealtimeMeshStreamBuilder<uint16> PolyGroupData(OutStreamSet.AddStream(FRealtimeMeshStreams::PolyGroups,
		GetRealtimeMeshBufferLayout<uint16>()));
		PolyGroupData.SetNumUninitialized(TriangleCount);

		for (int32 SectionIdx = 0; SectionIdx < LODResources->Sections.Num(); SectionIdx++)
		{
			const FStaticMeshSection& Section = LODResources->Sections[SectionIdx];
			for (uint32 TriIdx = 0; TriIdx < Section.NumTriangles; TriIdx++)
			{
				const uint32 TriangleID = Section.FirstIndex / 3 + TriIdx;
				PolyGroupData.Set(TriangleID, SectionIdx);
			}
		}
	}

	// copy tangents
	if (Adapter.HasNormals() && Options.bWantTangents)
	{
		TRealtimeMeshStreamBuilder<TRealtimeMeshTangents<FVector4f>, TRealtimeMeshTangents<FPackedNormal>> TangentData(OutStreamSet.AddStream(FRealtimeMeshStreams::Tangents,
		GetRealtimeMeshBufferLayout<TRealtimeMeshTangents<FPackedNormal>>()));
		TangentData.SetNumUninitialized(Adapter.VertexCount());
		
		for (int32 VertID = 0; VertID < VertexCount; VertID++)
		{
			const FVector3f N = Adapter.GetNormal(VertID);
			const FVector3f T = Adapter.GetTangentX(VertID);
			const FVector3f B = Adapter.GetTangentY(VertID);			
			TangentData.Set(VertID, TRealtimeMeshTangents<FVector4f>(N, B, T));
		}
	}

	// copy UV layers
	if (Adapter.HasUVs() && Options.bWantUVs && Adapter.NumUVLayers() > 0)
	{
		const int32 NumUVLayers = Adapter.NumUVLayers();

		FRealtimeMeshStream& TexCoordStream = OutStreamSet.AddStream(FRealtimeMeshStreams::TexCoords, GetRealtimeMeshBufferLayout<FVector2f>(NumUVLayers));
		TexCoordStream.SetNumUninitialized(Adapter.VertexCount());
		
		for (int32 UVLayerIndex = 0; UVLayerIndex < NumUVLayers; UVLayerIndex++)
		{
			TRealtimeMeshStridedStreamBuilder<FVector2f> TexCoordData(TexCoordStream, UVLayerIndex);
			for (int32 VertID = 0; VertID < VertexCount; VertID++)
			{
				const FVector2f UV = Adapter.GetUV(VertID, UVLayerIndex);
				TexCoordData.Set(VertID, UV);
			}
		}
	}

	// copy colors
	if ( Adapter.HasColors() && Options.bWantVertexColors )
	{
		TRealtimeMeshStreamBuilder<FColor> ColorData(OutStreamSet.AddStream(FRealtimeMeshStreams::Color,
		GetRealtimeMeshBufferLayout<FColor>()));
		ColorData.SetNumUninitialized(Adapter.VertexCount());
		for (int32 VertID = 0; VertID < VertexCount; VertID++)
		{
			const FColor Color = Adapter.GetColor(VertID);
			ColorData.Set(VertID, Color);
		}
	}

	return true;
}

/*bool URealtimeMeshConversion::CopyStreamSetToStaticMesh_SourceData(const UStaticMesh* InStaticMesh, RealtimeMesh::FRealtimeMeshStreamSet& OutStreamSet,
	const FStreamSetStaticMeshConversionOptions& Options)
{
	OutStreamSet = FRealtimeMeshStreamSet();
	if (Options.LODType != ERealtimeMeshCopyStaticMeshLODType::MaxAvailable && Options.LODType != ERealtimeMeshCopyStaticMeshLODType::SourceModel)
	{
		UE_LOG(LogRealtimeMesh, Warning, TEXT("RealtimeMeshWarning: CopyStreamSetToStaticMesh failed: Requested LOD Type is not available"));
		return false;
	}
	
	const int32 UseLODIndex = FMath::Clamp(Options.LODIndex, 0, InStaticMesh->GetNumSourceModels() - 1);

	const FMeshDescription* SourceMesh = InStaticMesh->GetMeshDescription(UseLODIndex);
	if (SourceMesh == nullptr)
	{
		UE_LOG(LogRealtimeMesh, Warning, TEXT("RealtimeMeshWarning: CopyStreamSetToStaticMesh failed: Request LOD is not available"));
		return false;
	}
	
	const FStaticMeshSourceModel& SourceModel = InStaticMesh->GetSourceModel(UseLODIndex);
	const FMeshBuildSettings& BuildSettings = SourceModel.BuildSettings;

	const bool bHasDirtyBuildSettings = BuildSettings.bRecomputeNormals
		|| (BuildSettings.bRecomputeTangents && Options.bWantTangents);

	FMeshDescription LocalSourceMeshCopy;
	if (Options.bApplyBuildSettings && bHasDirtyBuildSettings )
	{
		LocalSourceMeshCopy = *SourceMesh;

		FStaticMeshAttributes Attributes(LocalSourceMeshCopy);
		if (!Attributes.GetTriangleNormals().IsValid() || !Attributes.GetTriangleTangents().IsValid())
		{
			// If these attributes don't exist, create them and compute their values for each triangle
			FStaticMeshOperations::ComputeTriangleTangentsAndNormals(LocalSourceMeshCopy);
		}

		EComputeNTBsFlags ComputeNTBsOptions = EComputeNTBsFlags::BlendOverlappingNormals;
		ComputeNTBsOptions |= BuildSettings.bRecomputeNormals ? EComputeNTBsFlags::Normals : EComputeNTBsFlags::None;
		if (Options.bWantTangents)
		{
			ComputeNTBsOptions |= BuildSettings.bRecomputeTangents ? EComputeNTBsFlags::Tangents : EComputeNTBsFlags::None;
			ComputeNTBsOptions |= BuildSettings.bUseMikkTSpace ? EComputeNTBsFlags::UseMikkTSpace : EComputeNTBsFlags::None;
		}
		ComputeNTBsOptions |= BuildSettings.bComputeWeightedNormals ? EComputeNTBsFlags::WeightedNTBs : EComputeNTBsFlags::None;
		if (Options.bIgnoreRemoveDegenerates == false)
		{
			ComputeNTBsOptions |= BuildSettings.bRemoveDegenerates ? EComputeNTBsFlags::IgnoreDegenerateTriangles : EComputeNTBsFlags::None;
		}

		FStaticMeshOperations::ComputeTangentsAndNormals(LocalSourceMeshCopy, ComputeNTBsOptions);

		SourceMesh = &LocalSourceMeshCopy;
	}





	
	check(false); // not implemented yet
	
	return false;
}*/
