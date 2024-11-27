// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "PCGContext.h"
#include "PCGDataAsset.h"
#include "PCGSettings.h"
#include "Elements/PCGLoadObjectsContext.h"

struct FAssetData;

#include "PCGLoadAssetElement.generated.h"

/** Loader/Executor of PCG data assets */
UCLASS(BlueprintType, ClassGroup = (Procedural))
class PCG_API UPCGLoadDataAssetSettings : public UPCGSettings
{
	GENERATED_BODY()

public:
	UPCGLoadDataAssetSettings();

	//~UObject interface implementation
#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif
	//~End UObject interface implementation

	//~UPCGSettings interface implementation
#if WITH_EDITOR
	virtual FName GetDefaultNodeName() const override { return FName(TEXT("PCGLoadDataAsset")); }
	virtual FText GetDefaultNodeTitle() const override { return NSLOCTEXT("PCGLoadDataAssetSettings", "NodeTitle", "Load PCG Data Asset"); }
	virtual FText GetNodeTooltipText() const override { return AssetDescription; }
	virtual FLinearColor GetNodeTitleColor() const override { return AssetColor; }
	virtual EPCGSettingsType GetType() const override { return EPCGSettingsType::InputOutput; }
	virtual void GetStaticTrackedKeys(FPCGSelectionKeyToSettingsMap& OutKeysToSettings, TArray<TObjectPtr<const UPCGGraph>>& OutVisitedGraphs) const override;
	virtual bool CanDynamicallyTrackKeys() const override { return true; }
#endif // WITH_EDITOR

	virtual bool HasDynamicPins() const override { return true; }
	virtual bool HasFlippedTitleLines() const override { return true; }
	virtual FString GetAdditionalTitleInformation() const override;
	virtual EPCGDataType GetCurrentPinTypes(const UPCGPin* InPin) const;

protected:
	virtual FPCGElementPtr CreateElement() const override;
#if WITH_EDITOR
	virtual EPCGChangeType GetChangeTypeForProperty(const FName& InPropertyName) const override;
#endif
	// TODO tracking if data is stored in external asset

	virtual TArray<FPCGPinProperties> InputPinProperties() const override;
	virtual TArray<FPCGPinProperties> OutputPinProperties() const override { return Pins; }
	// ~End UPCGSettings interface

public:
	virtual void SetFromAsset(const FAssetData& InAsset);
	virtual void UpdateFromData();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Data, meta = (PCG_Overridable))
	TSoftObjectPtr<UPCGDataAsset> Asset;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Data|Asset Info", meta = (NoResetToDefault))
	TArray<FPCGPinProperties> Pins;

	// Cached from the data when loaded
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Data|Asset Info")
	FString AssetName;

#if WITH_EDITORONLY_DATA
	// Cached from the data when loaded
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Data|Asset Info")
	FText AssetDescription = FText::GetEmpty();

	// Cached from the data when loaded
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Data|Asset Info")
	FLinearColor AssetColor = FLinearColor::White;
#endif // WITH_EDITORONLY_DATA

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings)
	bool bLoadFromInput = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (EditCondition = "bLoadFromInput", EditConditionHides, PCG_DiscardPropertySelection))
	FPCGAttributePropertyInputSelector AssetReferenceSelector;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (EditCondition = "bLoadFromInput", EditConditionHides))
	FName InputIndexTag = NAME_None;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (EditCondition = "bLoadFromInput", EditConditionHides))
	FName DataIndexTag = NAME_None;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (Tooltip="Warns if asset is null or couldn't be loaded"))
	bool bWarnIfNoAsset = true;

	/** Controls whether the data output from the loaded asset will be passed to the default pin with tags or on the proper pins. */
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Settings", meta = (NoResetToDefault))
	bool bTagOutputsBasedOnOutputPins = true;

	/** By default, data table loading is asynchronous, can force it synchronous if needed. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings|Debug")
	bool bSynchronousLoad = false;
};

struct FPCGLoadDataAssetContext : public FPCGLoadObjectsFromPathContext {};

class PCG_API FPCGLoadDataAssetElement : public IPCGElementWithCustomContext<FPCGLoadDataAssetContext>
{
public:
	// Loading needs to be done on the main thread and accessing objects outside of PCG might not be thread safe, so taking the safe approach
	virtual bool CanExecuteOnlyOnMainThread(FPCGContext* Context) const override { return true; }

protected:
	virtual bool PrepareDataInternal(FPCGContext* Context) const override;
	virtual bool ExecuteInternal(FPCGContext* Context) const override;
};
