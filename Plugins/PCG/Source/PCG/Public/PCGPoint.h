// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once


#include "Math/Box.h"
#include "PCGPoint.generated.h"

class IPCGAttributeAccessor;

UENUM()
enum class EPCGPointProperties : uint8
{
	Density UMETA(Tooltip = "When points are sampled, this density value represents the highest value of the density function within that point's volume. It is also used as a weighted value, for example, when testing points against a threshold in filtering operations."),
	BoundsMin UMETA(Tooltip = "Minimum corner of the point's bounds in local space."),
	BoundsMax UMETA(Tooltip = "Maximum corner of the point's bounds in local space."),
	Extents UMETA(Tooltip = "Half the local space difference between the maximum and minimum bounds of the point's volume. Can be used with the point's position to represent the volume."),
	Color UMETA(Tooltip = "An RGBA (four channel) color value."),
	Position UMETA(Tooltip = "Location component of the point's transform."),
	Rotation UMETA(Tooltip = "Rotation component of the point's transform."),
	Scale UMETA(Tooltip = "Scale component of the point's transform."),
	Transform UMETA(Tooltip = "The point's transform."),
	Steepness UMETA(Tooltip = "A normalized value that establishes how 'hard' or 'soft' that volume will be represented. From 0, it will ramp up linearly increasing its influence over the density from the point's center to up to two times the bounds. At 1, it will represent a binary box function with the size of the point's bounds."),
	LocalCenter UMETA(Tooltip = "The local center location of the point's volume, halfway between the minimum and maximum bounds."),
	Seed UMETA(Tooltip = "Used to seed random processes during various operations."),
	LocalSize UMETA(Tooltip = "The difference between the maximum and minimum bounds of the point."),
	ScaledLocalSize UMETA(Tooltip = "The difference between the maximum and minimum bounds of the point, after only the scale has been applied.")
};

USTRUCT(BlueprintType)
struct PCG_API FPCGPoint
{
	GENERATED_BODY()
public:
	FPCGPoint() = default;
	FPCGPoint(const FTransform& InTransform, float InDensity, int32 InSeed);

	FBox GetLocalBounds() const;
	FBox GetLocalDensityBounds() const;
	void SetLocalBounds(const FBox& InBounds);
	FBoxSphereBounds GetDensityBounds() const;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Properties)
	FTransform Transform;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Properties)
	float Density = 1.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Properties)
	FVector BoundsMin = -FVector::One();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Properties)
	FVector BoundsMax = FVector::One();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Properties)
	FVector4 Color = FVector4::One();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Properties, meta = (ClampMin = "0", ClampMax = "1"))
	float Steepness = 0.5f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Properties)
	int32 Seed = 0;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Properties|Metadata")
	int64 MetadataEntry = -1;

	FVector GetExtents() const { return (BoundsMax - BoundsMin) / 2.0; }
	void SetExtents(const FVector& InExtents)
	{
		const FVector Center = GetLocalCenter();
		BoundsMin = Center - InExtents;
		BoundsMax = Center + InExtents;
	}

	FVector GetScaledExtents() const { return GetExtents() * Transform.GetScale3D(); }

	FVector GetLocalCenter() const { return (BoundsMax + BoundsMin) / 2.0; }
	void SetLocalCenter(const FVector& InCenter)
	{
		const FVector Delta = InCenter - GetLocalCenter();
		BoundsMin += Delta;
		BoundsMax += Delta;
	}

	FVector GetLocalSize() const { return BoundsMax - BoundsMin; }
	FVector GetScaledLocalSize() const { return GetLocalSize() * Transform.GetScale3D(); }

	void ApplyScaleToBounds();

	void ResetPointCenter(const FVector& BoundsRatio);

	using PointCustomPropertyGetter = TFunction<bool(const FPCGPoint&, void*)>;
	using PointCustomPropertySetter = TFunction<bool(FPCGPoint&, const void*)>;

	static bool HasCustomPropertyGetterSetter(FName Name);
	static TUniquePtr<IPCGAttributeAccessor> CreateCustomPropertyAccessor(FName Name);

	bool Serialize(FStructuredArchive::FSlot Slot);
};

template<>
struct TStructOpsTypeTraits<FPCGPoint> : public TStructOpsTypeTraitsBase2<FPCGPoint>
{
	enum
	{
		WithStructuredSerializer = true,
	};
};
