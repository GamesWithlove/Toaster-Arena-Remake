// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.

#include "RealtimeMeshNaniteResources.h"

#include "RealtimeMesh.h"
#include "Rendering/NaniteResources.h"

namespace RealtimeMesh
{
	/*FRealtimeMeshNaniteResourcesImplementation::FRealtimeMeshNaniteResourcesImplementation(FRealtimeMeshNaniteBuiltData&& InBuiltData)
		: bIsInitialized(false)
	{
		Bounds = InBuiltData.Bounds;
		Resources.RootData = MoveTemp(InBuiltData.RootData);
		Resources.StreamablePages = MoveTemp(InBuiltData.StreamablePages);
		Resources.ImposterAtlas = MoveTemp(InBuiltData.ImposterAtlas);
		Resources.HierarchyNodes = MoveTemp(InBuiltData.HierarchyNodes);
		Resources.HierarchyRootOffsets = MoveTemp(InBuiltData.HierarchyRootOffsets);
		Resources.PageStreamingStates = MoveTemp(InBuiltData.PageStreamingStates);
		Resources.PageDependencies = MoveTemp(InBuiltData.PageDependencies);
		Resources.NumRootPages = InBuiltData.NumRootPages;
		Resources.PositionPrecision = InBuiltData.PositionPrecision;
		Resources.NormalPrecision = InBuiltData.NormalPrecision;
		Resources.TangentPrecision = InBuiltData.TangentPrecision;
		Resources.NumInputTriangles = InBuiltData.NumInputTriangles;
		Resources.NumInputVertices = InBuiltData.NumInputVertices;
		Resources.NumInputMeshes = InBuiltData.NumInputMeshes;
		Resources.NumInputTexCoords = InBuiltData.NumInputTexCoords;
		Resources.NumClusters = InBuiltData.NumClusters;
		Resources.ResourceFlags = InBuiltData.ResourceFlags;
	}

	FRealtimeMeshNaniteResourcesImplementation::FRealtimeMeshNaniteResourcesImplementation(const ::Nanite::FResources& InResources)
		: Resources(InResources)
		, bIsInitialized(false)
	{
		static const ::Nanite::FResources DefaultResources;
		
		check(Resources.RuntimeResourceID == DefaultResources.RuntimeResourceID);
		ClearTransientData();
	}

	FRealtimeMeshNaniteResourcesImplementation::FRealtimeMeshNaniteResourcesImplementation(::Nanite::FResources&& InResources)
		: Resources(MoveTemp(InResources))
		, bIsInitialized(false)
	{
		static const ::Nanite::FResources DefaultResources;
		
		check(Resources.RuntimeResourceID == DefaultResources.RuntimeResourceID);
		ClearTransientData();
	}

	FRealtimeMeshNaniteResourcesImplementation::~FRealtimeMeshNaniteResourcesImplementation()
	{
		check(true);
	}

	void FRealtimeMeshNaniteResourcesImplementation::ClearTransientData()
	{
		static const ::Nanite::FResources DefaultResources;

		if (ensure(!bIsInitialized))
		{
			// Reset the runtime state of any copied resource
			Resources.RuntimeResourceID = DefaultResources.RuntimeResourceID;
			Resources.HierarchyOffset = DefaultResources.HierarchyOffset;
			Resources.RootPageIndex = DefaultResources.RootPageIndex;
			Resources.ImposterIndex = DefaultResources.ImposterIndex;
			Resources.NumHierarchyNodes = DefaultResources.NumHierarchyNodes;
			Resources.NumResidentClusters = DefaultResources.NumResidentClusters;
			Resources.PersistentHash = DefaultResources.PersistentHash;
		
			Resources.ResourceName = DefaultResources.ResourceName;
			Resources.DDCKeyHash = DefaultResources.DDCKeyHash;
			Resources.DDCRawHash = DefaultResources.DDCRawHash;
		}
	}

	bool FRealtimeMeshNaniteResourcesImplementation::HasValidData() const
	{
		return Resources.RootData.Num() > 0 && Resources.HierarchyNodes.Num() > 0;
	}

	const ::Nanite::FResources* FRealtimeMeshNaniteResourcesImplementation::GetRawResources() const
	{
		check(bIsInitialized);
		return &Resources;
	}

	void FRealtimeMeshNaniteResourcesImplementation::InitResources(URealtimeMesh* Owner)
	{
		if (ensure(!bIsInitialized))
		{
			Resources.InitResources(Owner);
			bIsInitialized = true;
		}
	}

	void FRealtimeMeshNaniteResourcesImplementation::ReleaseResources()
	{
		if (ensure(bIsInitialized))
		{
			Resources.ReleaseResources();
			bIsInitialized = false;
		}
	}*/
}
