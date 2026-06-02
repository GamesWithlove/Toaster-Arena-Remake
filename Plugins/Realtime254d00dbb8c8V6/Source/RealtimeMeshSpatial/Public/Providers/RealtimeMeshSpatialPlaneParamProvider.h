// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.

#pragma once

#include "Ext/RealtimeMeshProvider.h"
#include "Core/RealtimeMeshFuture.h"


namespace RealtimeMesh
{	
	class REALTIMEMESHSPATIAL_API FRealtimeMeshSpatialPlaneParamProvider : public FRealtimeMeshFactoryProvider
	{
	public:
		FRealtimeMeshSpatialPlaneParamProvider(const TSharedRef<FRealtimeMeshFactoryProvider>& InChildProvider);
		
		virtual TFuture<FRealtimeMeshInitializationResult> InitializeNewRealtimeMesh(const FRealtimeMeshID& MeshId, const TSharedPtr<FRealtimeMeshFactoryInitializationParams>& InitParams, FRealtimeMeshCancellationToken CancellationToken) override;
		virtual TFuture<FRealtimeMeshStructure> GetRealtimeMeshStructure(const FRealtimeMeshID& MeshId, const TSharedRef<const FRealtimeMeshFactoryPreUpdateResult>& PreUpdateResult, FRealtimeMeshCancellationToken CancellationToken) override;
		virtual TFuture<TSharedRef<FRealtimeMeshSectionGroupData>> GetRealtimeMeshSectionGroup(const FRealtimeMeshID& MeshId, const TSharedRef<const FRealtimeMeshFactoryPreUpdateResult>& PreUpdateResult, const FRealtimeMeshSectionGroupKey& SectionGroupKey, FRealtimeMeshCancellationToken CancellationToken) override;
		virtual TFuture<FBoxSphereBounds3f> CalculateBounds(const FRealtimeMeshID& MeshId, const TSharedRef<const FRealtimeMeshFactoryPreUpdateResult>& PreUpdateResult, FRealtimeMeshCancellationToken CancellationToken) override;
		virtual TFuture<TSharedRef<FRealtimeMeshCollisionInfo>> GetCollisionData(const FRealtimeMeshID& MeshId, const TSharedRef<const FRealtimeMeshFactoryPreUpdateResult>& PreUpdateResult, FRealtimeMeshCancellationToken CancellationToken) override;
		virtual TFuture<bool> DestroyRealtimeMesh(const FRealtimeMeshID& MeshId) override;
		virtual ERealtimeMeshThreadType AllowedThread() const override { return ERealtimeMeshThreadType::Any; }
	};
}


