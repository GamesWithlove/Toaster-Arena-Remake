// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.

#pragma once

#include "Core/RealtimeMeshInterface.h"

namespace RealtimeMesh
{
	class IRealtimeMeshSpatialStreamingFactoryStructureProvider;
	class IRealtimeMeshStreamingPolicy_v0;
	class IRealtimeMeshFactory_v0;

	class IRealtimeMeshSpatialComponentInterface_v0 : public IModularFeature
	{
	public:
		virtual ~IRealtimeMeshSpatialComponentInterface_v0() = default;

		static FName GetModularFeatureName()
		{
			static FName FeatureName = TEXT("IRealtimeMeshSpatialComponentInterface_v0");
			return FeatureName;
		}

	
		virtual USceneComponent* CreateComponent(UObject* Owner, const TSharedRef<IRealtimeMeshSpatialStreamingFactoryStructureProvider>& InChunkProvider, const TSharedPtr<IRealtimeMeshFactory_v0>& InFactory) const = 0;

		virtual bool IsStreamingStable(const TObjectPtr<USceneComponent>& Object) = 0;
	};

}
