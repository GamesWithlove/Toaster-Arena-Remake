// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Data/PCGSurfaceData.h"

#include "PCGTextureData.generated.h"

class UPCGSpatialData;
class UTexture;
class UTexture2D;

UENUM(BlueprintType)
enum class EPCGTextureColorChannel : uint8
{
	Red,
	Green,
	Blue,
	Alpha
};

UENUM(BlueprintType)
enum class UE_DEPRECATED(5.5, "EPCGTextureDensityFunction has been deprecated.") EPCGTextureDensityFunction : uint8
{
	Ignore,
	Multiply
};

/** Method used to determine the value for a sample based on the value of nearby texels. */
UENUM(BlueprintType)
enum class EPCGTextureFilter : uint8
{
	Point UMETA(Tooltip="Takes the value of whatever texel the sample lands in."),
	Bilinear UMETA(Tooltip="Bilinearly interpolates the values of the four nearest texels to the sample location.")
};

UENUM()
enum class EPCGTextureAddressMode : uint8
{
	Clamp UMETA(ToolTip = "Clamps UV to 0-1."),
	Wrap UMETA(ToolTip = "Tiles the texture to fit.")
};

namespace PCGTextureSamplingHelpers
{
	/** Returns true if a texture is CPU-accessible. */
	TOptional<bool> IsTextureCPUAccessible(UTexture2D* Texture);

	/** Returns true if a texture is both GPU-accessible and reachable from CPU memory. */
	TOptional<bool> CanGPUTextureBeCPUAccessed(UTexture2D* Texture);
}

UCLASS(Abstract)
class PCG_API UPCGBaseTextureData : public UPCGSurfaceData
{
	GENERATED_BODY()

public:
	// ~Being UObject interface
	virtual void PostLoad() override;
	// ~End UObject interface

	// ~Begin UPCGData interface
	virtual EPCGDataType GetDataType() const override { return EPCGDataType::BaseTexture; }
	// ~End UPCGData interface

	//~Begin UPCGSpatialData interface
	virtual FBox GetBounds() const override;
	virtual FBox GetStrictBounds() const override;
	virtual bool SamplePoint(const FTransform& Transform, const FBox& Bounds, FPCGPoint& OutPoint, UPCGMetadata* OutMetadata) const override;
	//~End UPCGSpatialData interface

	//~Begin UPCGSpatialDataWithPointCache interface
	virtual const UPCGPointData* CreatePointData(FPCGContext* Context) const override;
	//~End UPCGSpatialDataWithPointCache interface

	/** Sample using a local space 'UV' position. */
	bool SamplePointLocal(const FVector2D& LocalPosition, FVector4& OutColor, float& OutDensity) const;

	virtual bool IsValid() const;

protected:
	PRAGMA_DISABLE_DEPRECATION_WARNINGS
	UFUNCTION(BlueprintGetter, meta = (BlueprintInternalUseOnly = "true"))
	EPCGTextureDensityFunction GetDensityFunctionEquivalent() const;

	UFUNCTION(BlueprintSetter, meta = (BlueprintInternalUseOnly = "true"))
	void SetDensityFunctionEquivalent(EPCGTextureDensityFunction DensityFunction);
	PRAGMA_ENABLE_DEPRECATION_WARNINGS

public:
#if WITH_EDITORONLY_DATA
	UE_DEPRECATED(5.5, "DensityFunction has been deprecated in favor of bUseDensitySourceChannel.")
	PRAGMA_DISABLE_DEPRECATION_WARNINGS
	UPROPERTY(BlueprintGetter = GetDensityFunctionEquivalent, BlueprintSetter = SetDensityFunctionEquivalent, Category = SpatialData, meta = (DeprecatedProperty, DeprecatedMessage = "Density function on GetTextureData is deprecated in favor of bUseDensitySourceChannel."))
	EPCGTextureDensityFunction DensityFunction = EPCGTextureDensityFunction::Multiply; 
	PRAGMA_ENABLE_DEPRECATION_WARNINGS
#endif

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (InlineEditConditionToggle))
	bool bUseDensitySourceChannel = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (DisplayName = "Density Source Channel", EditCondition = "bUseDensitySourceChannel"))
	EPCGTextureColorChannel ColorChannel = EPCGTextureColorChannel::Alpha;

	/** Method used to determine the value for a sample based on the value of nearby texels. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (PCG_Overridable))
	EPCGTextureFilter Filter = EPCGTextureFilter::Bilinear;

	/** The size of one texel in cm, used when calling ToPointData. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (UIMin = "1.0", ClampMin = "1.0"))
	float TexelSize = 50.0f;

	/** Whether to tile the source or to stretch it to fit target area. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings)
	bool bUseAdvancedTiling = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings|Tiling", meta = (EditCondition = "bUseAdvancedTiling"))
	FVector2D Tiling = FVector2D(1.0, 1.0);

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings|Tiling", meta = (EditCondition = "bUseAdvancedTiling"))
	FVector2D CenterOffset = FVector2D::ZeroVector;

	/** Rotation to apply when sampling texture. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (UIMin = -360, ClampMin = -360, UIMax = 360, ClampMax = 360, Units = deg, EditCondition = "bUseAdvancedTiling"))
	float Rotation = 0;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings|Tiling", meta = (EditionCondition = "bUseAdvancedTiling"))
	bool bUseTileBounds = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings|Tiling", meta = (EditCondition = "bUseAdvancedTiling && bUseTileBounds"))
	FBox2D TileBounds = FBox2D(FVector2D(-0.5, -0.5), FVector2D(0.5, 0.5));

protected:
	UPROPERTY()
	TArray<FLinearColor> ColorData;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = SpatialData)
	FBox Bounds = FBox(EForceInit::ForceInit);

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = SpatialData)
	int32 Height = 0;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = SpatialData)
	int32 Width = 0;

	void CopyBaseTextureData(UPCGBaseTextureData* NewTextureData) const;
};

UCLASS(MinimalAPI, BlueprintType, ClassGroup=(Procedural))
class UPCGTextureData : public UPCGBaseTextureData
{
	GENERATED_BODY()

public:
	/**
	 * Initialize this data. Can depend on async texture operations / async GPU readbacks. Should be polled until it returns true signaling completion,
	 * and then IsInitialized() is used to verify the initialization was successful and data is ready to use.
	 */
	PCG_API bool Initialize(UTexture* InTexture, uint32 InTextureIndex, const FTransform& InTransform, bool bCreateCPUDuplicateEditorOnly = false);

	UE_DEPRECATED(5.5, "Will be removed. Poll the alternate Initialize API until it returns true instead of passing in a callback.")
	PCG_API void Initialize(UTexture* InTexture, uint32 InTextureIndex, const FTransform& InTransform, const TFunction<void()>& InPostInitializeCallback, bool bCreateCPUDuplicateEditorOnly = false);

	/** Data is successfully initialized and is ready to use. */
	PCG_API bool IsSuccessfullyInitialized() const { return bSuccessfullyInitialized; }

	// ~Begin UPCGData interface
	virtual EPCGDataType GetDataType() const override { return EPCGDataType::Texture; }
	virtual void AddToCrc(FArchiveCrc32& Ar, bool bFullDataCrc) const override;
	// ~End UPCGData interface

	//~Begin UPCGSpatialData interface
protected:
	virtual UPCGSpatialData* CopyInternal(FPCGContext* Context) const override;
	//~End UPCGSpatialData interface

	void InitializeInternal(UTexture* InTexture, uint32 InTextureIndex, const FTransform& InTransform, bool* bOutInitializeDone, bool bCreateCPUDuplicateEditorOnly = false);

private:
	/** Attempts to initialize the UPCGTextureData from a CPU-accessible texture. Returns true if CPU initialization succeeds. */
	TOptional<bool> InitializeFromCPUTexture();

	/** 
	* Attempts to initialize the UPCGTextureData from a GPU-accessible texture. Returns true if GPU texture readback can be dispatched. 
	* The PostInitializeCallback is only executed if this function succeeds.
	*/
	bool InitializeFromGPUTexture();

#if WITH_EDITOR
	/** Attempts to initialize the UPCGTextureData from a GPU-accessible texture, but with CPU-accessible memory. Returns true if initialization succeeds. */
	TOptional<bool> InitializeGPUTextureFromCPU();
#endif

public:
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = Properties)
	TWeakObjectPtr<UTexture> Texture = nullptr;

#if WITH_EDITORONLY_DATA
	/** Transient CPU visible duplicate of Texture created and used only when initialized with bCreateCPUDuplicateEditorOnly. */
	UPROPERTY(Transient)
	TObjectPtr<UTexture2D> DuplicateTexture = nullptr;
#endif

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = Properties)
	int TextureIndex = 0;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = Properties)
	bool bSuccessfullyInitialized = false;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = Properties)
	bool bReadbackFromGPUInitiated = false;

	// Added to help deprecation in 5.5. To be removed when the deprecated Initialized function is removed.
	TFunction<void()> PostInitializeCallback;
};
