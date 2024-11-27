// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "PCGSettings.h"
#include "PCGSortAttributes.h"

#include "PCGSortTags.generated.h"

/**
* Sorts a data collection based on a specific tag value. This is a stable sort, but will always put entries (data) that do not have the specified tag at the end.
* Note that tag values are tags of the form ("Tag:Value") and support either strings or numeric values (doubles).
* Tags that do not have a value ("Tag") will behave like boolean tags and will just put the ones that have the specified tag first in the output data collection.
*/
UCLASS(MinimalAPI, BlueprintType, ClassGroup= (Procedural))
class UPCGSortTagsSettings : public UPCGSettings
{
	GENERATED_BODY()

public:
	//~Begin UPCGSettings interface
#if WITH_EDITOR
	virtual FName GetDefaultNodeName() const override;
	virtual FText GetDefaultNodeTitle() const override;
	virtual FText GetNodeTooltipText() const override;
	virtual EPCGSettingsType GetType() const override { return EPCGSettingsType::Generic; }
#endif //WITH_EDITOR

	virtual bool HasDynamicPins() const override { return true; }

protected:
	virtual TArray<FPCGPinProperties> OutputPinProperties() const override;
	virtual FPCGElementPtr CreateElement() const override;
	//~End UPCGSettings interface

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (PCG_Overridable))
	FName Tag;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (PCG_Overridable))
	EPCGSortMethod SortMethod = EPCGSortMethod::Ascending;
};

class FPCGSortTagsElement : public IPCGElement
{
protected:
	virtual bool ExecuteInternal(FPCGContext* Context) const override;
};
