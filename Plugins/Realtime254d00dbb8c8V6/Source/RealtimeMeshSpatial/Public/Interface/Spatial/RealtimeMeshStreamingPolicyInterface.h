// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.

#pragma once

#include "Core/RealtimeMeshInterface.h"
#include "RealtimeMeshStreamingPolicyInterface.generated.h"

USTRUCT()
struct FRealtimeMeshFactoryInitializationParamsSpatialGrid3D
{
	GENERATED_BODY()
	
	FInt64Vector CellLocation;
	int32 LOD;
	FVector3f CellSize;
};

USTRUCT()
struct FRealtimeMeshFactoryInitializationParamsSpatialGrid2D
{
	GENERATED_BODY()
	
	FInt64Vector2 CellLocation;
	int32 LOD;
	FVector2f CellSize;
	float CellHeight;
};
