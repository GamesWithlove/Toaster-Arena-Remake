// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.


#include "RealtimeMeshSpatialStreamingState.h"
#include "Core/RealtimeMeshModularFeatures.h"
#include "Spatial/RealtimeMeshSpatialManagerInterface.h"

namespace RealtimeMesh
{
	class FRealtimeMeshStreamingPolicyImpl_v0;
	
	struct FRealtimeMeshSpatialManager_v0 : public IRealtimeMeshSpatialManagerInterface_v0
	{
	public:	
		virtual UObject* CreateComponent(AActor* Owner, const FRealtimeMeshSpatialManagerParams& InitParams, bool bAutoStart) const override
		{
			URealtimeMeshSpatialStreamingManager* SpatialComp = NewObject<URealtimeMeshSpatialStreamingManager>(Owner);
			if (SpatialComp)
			{
				FRealtimeMeshSpatialStreamingStateInitParams FinalInitParams;
				FinalInitParams.ChunkProvider = InitParams.ChunkProvider;
				FinalInitParams.OnLoadCell = InitParams.OnLoadCell;
				FinalInitParams.OnUnloadCell = InitParams.OnUnloadCell;
				FinalInitParams.OnActivateCell = InitParams.OnActivateCell;
				FinalInitParams.OnDeactivateCell = InitParams.OnDeactivateCell;
				
				SpatialComp->Initialize(FinalInitParams, bAutoStart);
			}
			return SpatialComp;
		};

		virtual void Start(UObject* Manager) override
		{
			if (URealtimeMeshSpatialStreamingManager* StreamingManager = Cast<URealtimeMeshSpatialStreamingManager>(Manager))
			{
				StreamingManager->Start();
			}
		}
		
		virtual void Stop(UObject* Manager) override
		{
			if (URealtimeMeshSpatialStreamingManager* StreamingManager = Cast<URealtimeMeshSpatialStreamingManager>(Manager))
			{
				StreamingManager->Stop();
			}
		}
		
		virtual bool IsStreamingStable(UObject* Manager) override
		{
			if (URealtimeMeshSpatialStreamingManager* StreamingManager = Cast<URealtimeMeshSpatialStreamingManager>(Manager))
			{
				return StreamingManager->IsStreamingStable();
			}
			return false;
		}

		virtual void Reset(const TObjectPtr<UObject>& Object) override;
	};

	void FRealtimeMeshSpatialManager_v0::Reset(const TObjectPtr<UObject>& Manager)
	{		
		if (URealtimeMeshSpatialStreamingManager* StreamingManager = Cast<URealtimeMeshSpatialStreamingManager>(Manager))
		{
			StreamingManager->Reset();
		}
	}


	// Register the interface
	TRealtimeMeshModularFeatureRegistration<FRealtimeMeshSpatialManager_v0> GRealtimeMeshSpatialManagerInterfaceImpl_v0;
}
