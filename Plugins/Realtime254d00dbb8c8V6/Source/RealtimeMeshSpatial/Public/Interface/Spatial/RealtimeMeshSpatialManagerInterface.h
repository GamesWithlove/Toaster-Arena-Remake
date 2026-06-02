// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.

#pragma once

#include "Core/RealtimeMeshFuture.h"
#include "Core/RealtimeMeshInterface.h"
#include "Ext/RealtimeMeshFactoryCommon.h"


struct FRealtimeMeshSpatialComponentLocation;

namespace RealtimeMesh
{
	class IRealtimeMeshSpatialStreamingStructureProvider;

	struct FRealtimeMeshSpatialManagerParams
	{	
		TSharedPtr<IRealtimeMeshSpatialStreamingStructureProvider> ChunkProvider;
	
		TDelegate<void(const FRealtimeMeshSpatialComponentLocation&)> OnActivateCell;
		TDelegate<void(const FRealtimeMeshSpatialComponentLocation&)> OnDeactivateCell;
		TDelegate<TFuture<bool>(const FRealtimeMeshSpatialComponentLocation&, FRealtimeMeshCancellationToken)> OnLoadCell;
		TDelegate<TFuture<bool>(const FRealtimeMeshSpatialComponentLocation&, FRealtimeMeshCancellationToken)> OnUpdateCell;
		TDelegate<void(const FRealtimeMeshSpatialComponentLocation&)> OnUnloadCell;
	};

	class IRealtimeMeshSpatialManagerInterface_v0 : public IModularFeature
	{
	public:
		virtual ~IRealtimeMeshSpatialManagerInterface_v0() = default;

		static FName GetModularFeatureName()
		{
			static FName FeatureName = TEXT("IRealtimeMeshSpatialManagerInterface_v0");
			return FeatureName;
		}

	
		virtual UObject* CreateComponent(AActor* Owner, const FRealtimeMeshSpatialManagerParams& InitParams, bool bAutoStart = true) const = 0;

		virtual void Start(UObject* Manager) = 0;
		virtual void Stop(UObject* Manager) = 0;
		virtual bool IsStreamingStable(UObject* Manager) = 0;
		virtual void Reset(const TObjectPtr<UObject>& Object) = 0;
	};

}
