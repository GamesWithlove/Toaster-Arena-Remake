// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Math/RandomStream.h"

/**
 * Streaming Source Priority
 */
UENUM(BlueprintType)
enum class ERealtimeMeshStreamingSourcePriority : uint8
{
	Highest = 0,
	High = 64,
	Normal = 128,
	Low = 192,
	Lowest = 255,
	Default = Normal
};

/**
 * Structure containing all properties required to stream from a source
 */
struct REALTIMEMESHSPATIAL_API FRealtimeMeshSpatialStreamingSource
{
	FRealtimeMeshSpatialStreamingSource()
		: Location(FInt64Vector3::ZeroValue)
		, ExtraLOD0Distance(32)
		, LODFalloff(1.0)
		, LODVisibilityThreshold(1.0)
		, MaxVisibilityDistance(100000.0)
		, Priority(ERealtimeMeshStreamingSourcePriority::Default)
		, DebugColor(ForceInit)
	{
	}

	FRealtimeMeshSpatialStreamingSource(FName InName, const FVector& InLocation, ERealtimeMeshStreamingSourcePriority InPriority)
		: Name(InName)
		, Location(InLocation)
		, ExtraLOD0Distance(32)
		, LODFalloff(1.0)
		, LODVisibilityThreshold(1.0)
		, MaxVisibilityDistance(100000.0)
		, Priority(InPriority)
		, DebugColor(ForceInit)
	{}

	FColor GetDebugColor() const
	{
		if (!DebugColor.ToPackedBGRA())
		{
			return FColor::MakeRedToGreenColorFromScalar(FRandomStream(Name).GetFraction());
		}

		return FColor(DebugColor.R, DebugColor.G, DebugColor.B, 255);
	}

	/** Source unique name. */
	FName Name;

	/** Source location. */
	FVector Location;

	// Offset to start of LOD, keeps more distance at lod 0
	float ExtraLOD0Distance;

	// Falloff rate of LOD, 1 is linear, 
	float LODFalloff;

	// Visibility threshold for lOD
	float LODVisibilityThreshold;

	// Max cap on view distance
	float MaxVisibilityDistance;

	float VisibleOffset = 32.0f;
	float StreamingOffset = 128.0f;

	double StreamingDistanceMultiplier = 3.0f;

	/** Streaming source priority. */
	ERealtimeMeshStreamingSourcePriority Priority;

	/** Color used for debugging. */
	FColor DebugColor;


	FString ToString() const
	{
		return FString::Printf(
			TEXT("Priority: %d | Pos: X=%f,Y=%f,Z=%f"), 
			Priority, 
			Location.X, Location.Y, Location.Z
		);
	}
};

/**
 * Interface for world partition streaming sources
 */
class REALTIMEMESHSPATIAL_API IRealtimeMeshSpatialStreamingSourceProvider
{
public:
	virtual ~IRealtimeMeshSpatialStreamingSourceProvider() = default;
	virtual bool GetSpatialStreamingSource(FRealtimeMeshSpatialStreamingSource& StreamingSource) = 0;
};