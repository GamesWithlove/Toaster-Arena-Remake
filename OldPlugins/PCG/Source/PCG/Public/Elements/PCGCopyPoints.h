// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "PCGSettings.h"

#include "PCGCopyPoints.generated.h"

namespace PCGCopyPointsConstants
{
	const FName SourcePointsLabel = TEXT("Source");
	const FName TargetPointsLabel = TEXT("Target");
}

UENUM()
enum class EPCGCopyPointsInheritanceMode : uint8
{
	Relative,
	Source,
	Target
};

UENUM()
enum class EPCGCopyPointsTagInheritanceMode : uint8
{
	Both,
	Source,
	Target,
};

UENUM()
enum class EPCGCopyPointsMetadataInheritanceMode : uint8
{
	SourceFirst UMETA(Tooltip = "Points will inherit from source metadata and apply only unique attributes from target."),
	TargetFirst UMETA(Tooltip = "Points will inherit from target metadata and apply only unique attributes from source."),
	SourceOnly  UMETA(Tooltip = "Points will inherit metadata only from the source."),
	TargetOnly  UMETA(Tooltip = "Points will inherit metadata only from the target."),
	None        UMETA(Tooltip = "Points will have no metadata.")
};

UCLASS(MinimalAPI, BlueprintType, ClassGroup = (Procedural))
class UPCGCopyPointsSettings : public UPCGSettings
{
	GENERATED_BODY()

public:
	//~Begin UPCGSettings interface
#if WITH_EDITOR
	virtual FName GetDefaultNodeName() const override { return FName(TEXT("CopyPoints")); }
	virtual FText GetDefaultNodeTitle() const override { return NSLOCTEXT("PCGCopyPointSettings", "NodeTitle", "Copy Points"); }
	virtual FText GetNodeTooltipText() const override;
	virtual EPCGSettingsType GetType() const override { return EPCGSettingsType::Sampler; }
	virtual bool DisplayExecuteOnGPUSetting() const override { return true; }
	virtual void CreateAdditionalInputDataInterfaces(FPCGGPUCompilationContext& InOutContext, UObject* InObjectOuter, TArray<TObjectPtr<UComputeDataInterface>>& OutDataInterfaces) const override;
#endif

	virtual FString GetCookedKernelSource(const TMap<FName, FPCGKernelAttributeIDAndType>& GlobalAttributeLookupTable) const override;
	virtual int ComputeKernelThreadCount(const UPCGDataBinding* Binding) const override;
	virtual bool ComputeOutputPinDataDesc(const UPCGPin* OutputPin, const UPCGDataBinding* Binding, FPCGDataCollectionDesc& OutDesc) const override;

protected:
	virtual TArray<FPCGPinProperties> InputPinProperties() const override;
	virtual TArray<FPCGPinProperties> OutputPinProperties() const override { return Super::DefaultPointOutputPinProperties(); }
	virtual FPCGElementPtr CreateElement() const override;
	//~End UPCGSettings interface

public:
	/** The method used to determine output point rotation */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (PCG_Overridable))
	EPCGCopyPointsInheritanceMode RotationInheritance = EPCGCopyPointsInheritanceMode::Relative;

	/** The method used to determine output point scale */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (PCG_Overridable))
	EPCGCopyPointsInheritanceMode ScaleInheritance = EPCGCopyPointsInheritanceMode::Relative;

	/** The method used to determine output point color */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (PCG_Overridable))
	EPCGCopyPointsInheritanceMode ColorInheritance = EPCGCopyPointsInheritanceMode::Relative;

	/** The method used to determine output seed values. Relative recomputes the seed from the new location. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (PCG_Overridable))
	EPCGCopyPointsInheritanceMode SeedInheritance = EPCGCopyPointsInheritanceMode::Relative;

	/** The method used to determine output data attributes */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (PCG_Overridable))
	EPCGCopyPointsMetadataInheritanceMode AttributeInheritance = EPCGCopyPointsMetadataInheritanceMode::SourceFirst;

	/** The method used to determine the output data tags */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (PCG_Overridable))
	EPCGCopyPointsTagInheritanceMode TagInheritance = EPCGCopyPointsTagInheritanceMode::Both;

	/** If this option is set, each source point data will be copied to every target point data (cartesian product), producing N * M point data. Otherwise, will do a N:N (or N:1 or 1:N) operation, producing N point data. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (PCG_Overridable))
	bool bCopyEachSourceOnEveryTarget = true;
};

class FPCGCopyPointsElement : public IPCGElement
{
protected:
	virtual bool ExecuteInternal(FPCGContext* Context) const override;
};
