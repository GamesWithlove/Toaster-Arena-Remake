// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.

#pragma once

#include "CoreFwd.h"
#include "RealtimeMeshSpatialComponentLocation.generated.h"

USTRUCT()
struct REALTIMEMESHSPATIAL_API FRealtimeMeshSpatialComponentLocation
{
	GENERATED_BODY()

	UPROPERTY()
	FInt64Vector Location;

	UPROPERTY()
	int32 LOD;
public:

	FRealtimeMeshSpatialComponentLocation()
		: Location(0,0,0), LOD(0)
	{
	}

	FRealtimeMeshSpatialComponentLocation(const FInt64Vector& InLocation, int32 InLOD)
		: Location(InLocation), LOD(InLOD) { }

	bool operator==(const FRealtimeMeshSpatialComponentLocation& Other) const
	{
		return Location == Other.Location && LOD == Other.LOD;
	}
	bool operator!=(const FRealtimeMeshSpatialComponentLocation& Other) const
	{
		return Location != Other.Location || LOD != Other.LOD;
	}

	friend uint32 GetTypeHash(const FRealtimeMeshSpatialComponentLocation& Key)
	{
		return ::HashCombine(::GetTypeHashHelper(Key.Location), ::GetTypeHashHelper(Key.LOD));
	}	
};