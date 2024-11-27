// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "PCGSettings.h"

#include "Elements/Grammar/PCGSubdivisionBase.h"

#include "PCGSubdivideSpline.generated.h"

UCLASS(MinimalAPI, BlueprintType, ClassGroup = (Procedural))
class UPCGSubdivideSplineSettings : public UPCGSubdivisionBaseSettings
{
	GENERATED_BODY()

public:
	//~Begin UPCGSettings interface
#if WITH_EDITOR
	virtual FName GetDefaultNodeName() const override { return FName(TEXT("SubdivideSpline")); }
	virtual FText GetDefaultNodeTitle() const override { return NSLOCTEXT("PCGSubdivideSplineElement", "NodeTitle", "Subdivide Spline"); }
#endif // WITH_EDITOR

protected:
	virtual TArray<FPCGPinProperties> InputPinProperties() const override;
	virtual TArray<FPCGPinProperties> OutputPinProperties() const override;
	virtual FPCGElementPtr CreateElement() const override;
	//~End UPCGSettings interface

public:
	/** If the subdivision with a given grammar doesn't fill the entire spline, setting it to true makes it a valid case. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings)
	bool bAcceptIncompleteSubdivision = false;

	/** Select the module height from an attribute. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings)
	bool bModuleHeightAsAttribute = false;

	/** The height of each placed module. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (EditCondition = "!bModuleHeightAsAttribute", EditConditionHides))
	double ModuleHeight = 100.0;

	/** Selection will be used as the module height for placed modules. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (EditCondition = "bModuleHeightAsAttribute", EditConditionHides))
	FPCGAttributePropertyInputSelector ModuleHeightAttribute;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings|Extra Output Attributes", meta = (PCG_Overridable, InlineEditConditionToggle))
	bool bOutputModuleIndexAttribute = false;

	/** Name of the module index output attribute name. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings|Extra Output Attributes", meta = (PCG_Overridable, EditCondition = "bOutputModuleIndexAttribute"))
	FName ModuleIndexAttributeName = TEXT("ModuleIndex");

	/** Output attributes labeling the first and final points after subdivision. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings|Extra Output Attributes", meta = (PCG_Overridable))
	bool bOutputExtremityAttributes = false;

	/** Name of the attribute labeling the first output point from the first module. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings|Extra Output Attributes", meta = (PCG_Overridable, EditCondition = "bOutputExtremityAttributes", EditConditionHides))
	FName IsFirstAttributeName = TEXT("IsFirst");

	/** Name of the attribute labeling the final output point from the final module. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings|Extra Output Attributes", meta = (PCG_Overridable, EditCondition = "bOutputExtremityAttributes", EditConditionHides))
	FName IsFinalAttributeName = TEXT("IsFinal");
};

class FPCGSubdivideSplineElement : public FPCGSubdivisionBaseElement
{
protected:
	virtual bool ExecuteInternal(FPCGContext* InContext) const override;
};
