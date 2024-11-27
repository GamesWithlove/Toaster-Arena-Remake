// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Math/Box.h"

#include "PCGBlueprintHelpers.generated.h"

class UPCGComponent;
struct FPCGContext;
struct FPCGLandscapeLayerWeight;
struct FPCGPoint;

class UPCGSettings;
class UPCGData;

UCLASS()
class PCG_API UPCGBlueprintHelpers : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	static void ThrowBlueprintException(const FText& ErrorMessage);

	UFUNCTION(BlueprintCallable, Category = "PCG|Helpers")
	static int ComputeSeedFromPosition(const FVector& InPosition);

	UFUNCTION(BlueprintCallable, Category = "PCG|Helpers")
	static void SetSeedFromPosition(UPARAM(ref) FPCGPoint& InPoint);

	/** Creates a random stream from a point's seed and settings/component's seed (optional) */
	UFUNCTION(BlueprintCallable, Category = "PCG|Helpers", meta = (ScriptMethod))
	static FRandomStream GetRandomStreamFromPoint(const FPCGPoint& InPoint, const UPCGSettings* OptionalSettings = nullptr, const UPCGComponent* OptionalComponent = nullptr);

	/** Creates a random stream from using the random seeds from two points, as well as settings/component's seed (optional) */
	UFUNCTION(BlueprintCallable, Category = "PCG|Helpers", meta = (ScriptMethod))
	static FRandomStream GetRandomStreamFromTwoPoints(const FPCGPoint& InPointA, const FPCGPoint& InPointB, const UPCGSettings* OptionalSettings = nullptr, const UPCGComponent* OptionalComponent = nullptr);

	UFUNCTION(BlueprintCallable, Category = "PCG|Helpers", meta = (ScriptMethod))
	static const UPCGSettings* GetSettings(UPARAM(ref) FPCGContext& Context);

	UFUNCTION(BlueprintCallable, Category = "PCG|Temporary", meta = (ScriptMethod))
	static UPCGData* GetActorData(UPARAM(ref) FPCGContext& Context);

	UFUNCTION(BlueprintCallable, Category = "PCG|Temporary", meta = (ScriptMethod))
	static UPCGData* GetInputData(UPARAM(ref) FPCGContext& Context);

	UFUNCTION(BlueprintCallable, Category = "PCG|Temporary", meta = (ScriptMethod))
	static UPCGComponent* GetComponent(UPARAM(ref) FPCGContext& Context);

	UFUNCTION(BlueprintCallable, Category = "PCG|Temporary", meta = (ScriptMethod))
	static UPCGComponent* GetOriginalComponent(UPARAM(ref) FPCGContext& Context);

	UFUNCTION(BlueprintCallable, Category = "PCG", meta = (ScriptMethod))
	static AActor* GetTargetActor(UPARAM(ref) FPCGContext& Context, UPCGSpatialData* SpatialData);

	UFUNCTION(BlueprintCallable, Category = "PCG|Points", meta = (ScriptMethod))
	static void SetExtents(UPARAM(ref) FPCGPoint& InPoint, const FVector& InExtents);

	UFUNCTION(BlueprintCallable, Category = "PCG|Points", meta = (ScriptMethod))
	static FVector GetExtents(const FPCGPoint& InPoint);

	UFUNCTION(BlueprintCallable, Category = "PCG|Points", meta = (ScriptMethod))
	static void SetLocalCenter(UPARAM(ref) FPCGPoint& InPoint, const FVector& InLocalCenter);

	UFUNCTION(BlueprintCallable, Category = "PCG|Points", meta = (ScriptMethod))
	static FVector GetLocalCenter(const FPCGPoint& InPoint);

	UFUNCTION(BlueprintCallable, Category = "PCG|Points", meta = (ScriptMethod))
	static FBox GetTransformedBounds(const FPCGPoint& InPoint);

	UFUNCTION(BlueprintCallable, Category = "PCG|Helpers", meta = (ScriptMethod))
	static FBox GetActorBoundsPCG(AActor* InActor, bool bIgnorePCGCreatedComponents = true);

	UFUNCTION(BlueprintCallable, Category = "PCG|Helpers", meta = (ScriptMethod))
	static FBox GetActorLocalBoundsPCG(AActor* InActor, bool bIgnorePCGCreatedComponents = true);

	UFUNCTION(BlueprintCallable, Category = "PCG|Helpers", meta = (ScriptMethod))
	static UPCGData* CreatePCGDataFromActor(AActor* InActor, bool bParseActor = true);

	UFUNCTION(BlueprintCallable, Category = "PCG|Helpers", meta = (ScriptMethod))
	static TArray<FPCGLandscapeLayerWeight> GetInterpolatedPCGLandscapeLayerWeights(UObject* WorldContextObject, const FVector& Location);

	UFUNCTION(BLueprintCallable, Category = "PCG|Helpers", meta = (ScriptMethod))
	static int64 GetTaskId(UPARAM(ref) FPCGContext& Context);

	/** Flush the cache, to be used if you have changed something PCG depends on at runtime. Same as `pcg.FlushCache` command. Returns true if it succeeded. */
	UFUNCTION(BlueprintCallable, Category = "PCG", meta=(DisplayName = "Flush PCG Cache"))
	static bool FlushPCGCache();

	/** Refresh a component set to Generate At Runtime, if some parameters changed. Can also flush the cache. */
	UFUNCTION(BlueprintCallable, Category = "PCG|Runtime", meta = (ScriptMethod, DisplayName = "Refresh PCG Runtime Component"))
	static void RefreshPCGRuntimeComponent(UPCGComponent* InComponent, const bool bFlushCache = false);

	// Implementation note: Needs to be done outside of UPCGData because of circular dependency between PCGContext.h and PCGData.h
	/** Return a copy of the data, with Metadata inheritance for spatial data. */
	UFUNCTION(BlueprintCallable, Category="PCG|Data", meta = (ScriptMethod))
	static UPCGData* DuplicateData(const UPCGData* InData, UPARAM(ref) FPCGContext& Context, bool bInitializeMetadata = true);
};
