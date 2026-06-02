// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Ext/RealtimeMeshProvider.h"
#include "RealtimeMeshProviderPlane.generated.h"


USTRUCT()
struct FRealtimeMeshProviderPlaneParams
{
	GENERATED_BODY()

	static FGuid StaticTypeGuid()
	{		
		static const FGuid TypeGuid(0x2BAF835D, 0xF8AD421D, 0xAA2D734F, 0x878AB690);
		return TypeGuid;
	}
	FGuid GetTypeGuid() const { return StaticTypeGuid(); }
		
	UPROPERTY()
	FInt64Vector2 CellLocation = FInt64Vector2(0, 0);
	UPROPERTY()
	int32 LOD = 0;
	UPROPERTY()
	FVector2f CellSize = FVector2f::Zero();
	UPROPERTY()
	float CellHeight = 0.0f;
};

namespace RealtimeMesh
{
	
	/**
	 * 
	 */
	class REALTIMEMESHEXT_API FRealtimeMeshProviderPlane : public FRealtimeMeshFactoryProvider
	{
		static const FRealtimeMeshSectionGroupKey MainSectionGroup;
		static const FRealtimeMeshSectionKey MainSection;

		struct FState
		{
			FInt64Vector2 CellLocation;
			FVector2f Size;
			int32 LOD;
			float MaxHeight;
		};
		
		TMap<FRealtimeMeshID, FState> MeshStates;
		FCriticalSection Mutex;
		FIntVector2 GridSize;
		FVector2f UVScale;
		bool bWantsSkirt;
	public:
		FRealtimeMeshProviderPlane(const FIntVector2& InGridSize = FIntVector2(128, 128), const FVector2f& InUVScale = FVector2f(1.0f / 1.28f, 1.0f / 1.28f), bool bInWantsSkirt = true);
		virtual ~FRealtimeMeshProviderPlane() override;

		virtual TFuture<FRealtimeMeshInitializationResult> InitializeNewRealtimeMesh(const FRealtimeMeshID& MeshId, const TSharedPtr<FRealtimeMeshFactoryInitializationParams>& InitParams, FRealtimeMeshCancellationToken CancellationToken) override;
		virtual TFuture<FRealtimeMeshStructure> GetRealtimeMeshStructure(const FRealtimeMeshID& MeshId, const TSharedRef<const FRealtimeMeshFactoryPreUpdateResult>& PreUpdateResult, FRealtimeMeshCancellationToken CancellationToken) override;
		virtual TFuture<TSharedRef<FRealtimeMeshSectionGroupData>> GetRealtimeMeshSectionGroup(const FRealtimeMeshID& MeshId, const TSharedRef<const FRealtimeMeshFactoryPreUpdateResult>& PreUpdateResult, const FRealtimeMeshSectionGroupKey& SectionGroupKey, FRealtimeMeshCancellationToken CancellationToken) override;
		virtual TFuture<FBoxSphereBounds3f> CalculateBounds(const FRealtimeMeshID& MeshId, const TSharedRef<const FRealtimeMeshFactoryPreUpdateResult>& PreUpdateResult, FRealtimeMeshCancellationToken CancellationToken) override;
		virtual TFuture<TSharedRef<FRealtimeMeshCollisionInfo>> GetCollisionData(const FRealtimeMeshID& MeshId, const TSharedRef<const FRealtimeMeshFactoryPreUpdateResult>& PreUpdateResult, FRealtimeMeshCancellationToken CancellationToken) override;
		virtual TFuture<bool> DestroyRealtimeMesh(const FRealtimeMeshID& MeshId) override;
		virtual ERealtimeMeshThreadType AllowedThread() const override { return ERealtimeMeshThreadType::AsyncThread; }
	};
	
}
