// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "PCGSettings.h"
#include "Compute/PCGPinPropertiesGPU.h"

#include "Compute/IPCGNodeSourceTextProvider.h"

#include "PCGCustomHLSL.generated.h"

class UPCGPin;

/** Type of kernel allows us to make decisions about execution automatically, streamlining authoring. */
UENUM()
enum class EPCGKernelType : uint8
{
	PointProcessor UMETA(Tooltip = "Kernel executes on each point in first input pin."),
	PointGenerator UMETA(Tooltip = "Kernel executes for fixed number of points, configurable on node."),
	Custom UMETA(Tooltip = "Execution thread counts and output buffer sizes configurable on node. All data read/write indices must be manually bounds checked."),
};

/** Total number of threads that will be dispatched for this kernel. */
UENUM()
enum class EPCGDispatchThreadCount : uint8
{
	FromFirstOutputPin UMETA(Tooltip = "One thread per pin data element."),
	Fixed UMETA(DisplayName = "Fixed Thread Count"),
	FromProductOfInputPins UMETA(Tooltip = "Dispatches a thread per element in the product of one or more pins. So if there are 4 data elements in pin A and 6 data elements in pin B, 24 threads will be dispatched."),
};

/** Produces a HLSL compute shader which will be executed on the GPU. */
UCLASS(MinimalAPI, BlueprintType, ClassGroup = (Procedural))
class UPCGCustomHLSLSettings
	: public UPCGSettings
	, public IPCGNodeSourceTextProvider
{
	GENERATED_BODY()

public:
	UPCGCustomHLSLSettings();

	//~Begin UObject interface
	virtual void PostLoad() override;
	virtual void PostInitProperties() override;
	//~End UObject interface

	//~Begin UPCGSettings interface
	virtual TArray<FPCGPinProperties> InputPinProperties() const override { return InputPins; }
	virtual TArray<FPCGPinProperties> OutputPinProperties() const override;
	virtual bool HasOverridableParams() const override { return false; }
	virtual bool IsInputPinRequiredByExecution(const UPCGPin* InPin) const override { return true; }
	virtual bool UseSeed() const override { return true; }
#if WITH_EDITOR
	virtual FName GetDefaultNodeName() const override { return FName(TEXT("CustomHLSL")); }
	virtual FText GetDefaultNodeTitle() const override { return NSLOCTEXT("PCGCustomHLSLElement", "NodeTitle", "Custom HLSL"); }
	virtual FText GetNodeTooltipText() const override { return NSLOCTEXT("PCGCustomHLSLElement", "NodeTooltip", "[EXPERIMENTAL] Produces a HLSL compute shader which will be executed on the GPU."); }
	virtual EPCGSettingsType GetType() const override { return EPCGSettingsType::GPU; }

	virtual TArray<FPCGPreConfiguredSettingsInfo> GetPreconfiguredInfo() const override;
	virtual bool OnlyExposePreconfiguredSettings() const override { return true; }
#endif

	virtual FString GetAdditionalTitleInformation() const override;
	virtual void ApplyPreconfiguredSettings(const FPCGPreConfiguredSettingsInfo& PreconfigureInfo) override;

	virtual bool IsKernelValid(FPCGContext* InContext = nullptr, bool bQuiet = true) const override;
	virtual FString GetCookedKernelSource(const TMap<FName, FPCGKernelAttributeIDAndType>& GlobalAttributeLookupTable) const override;
	virtual void GetKernelAttributeKeys(TArray<FPCGKernelAttributeKey>& OutKeys) const override { OutKeys.Append(KernelAttributeKeys); }
	virtual int ComputeKernelThreadCount(const UPCGDataBinding* Binding) const override;
	virtual bool ComputeOutputPinDataDesc(const UPCGPin* OutputPin, const UPCGDataBinding* Binding, FPCGDataCollectionDesc& OutDesc) const override;

protected:
#if WITH_EDITOR
	virtual void PreEditChange(FProperty* PropertyAboutToChange) override;
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
	virtual EPCGChangeType GetChangeTypeForProperty(const FName& InPropertyName) const override;
#endif
	virtual FPCGElementPtr CreateElement() const override;
	//~End UPCGSettings interface

public:
#if WITH_EDITOR
	//~Begin IPCGNodeSourceTextProvider interface
	FString GetShaderText() const override;
	FString GetDeclarationsText() const override;
	FString GetShaderFunctionsText() const override;
	void SetShaderFunctionsText(const FString& NewFunctionsText) override;
	void SetShaderText(const FString& NewText) override;
	bool IsShaderTextReadOnly() const override;
	//~End IPCGNodeSourceTextProvider interface
#endif

	/** Get user multiplier value applied to the dispatch thread count. */
	uint32 GetThreadCountMultiplier() const { return IsThreadCountMultiplierInUse() ? static_cast<uint32>(ThreadCountMultiplier) : 1u; }

protected:
	/** Gets the GPU pin properties for the output pin with the given label. */
	const FPCGPinPropertiesGPU* GetOutputPinPropertiesGPU(const FName& InPinLabel) const;

	/** Enforce required pin settings and set display toggles to drive UI. */
	void UpdatePinSettings();

	/** Update the kernel keys read/written/created by this node. */
	void UpdateAttributeKeys();

#if WITH_EDITOR
	void UpdateDeclarations();
	void UpdateInputDeclarations();
	void UpdateOutputDeclarations();
	void UpdateHelperDeclarations();

	/** List of all non-advanced input pin names. */
	UFUNCTION()
	TArray<FName> GetInputPinNames() const;

	/** List of all non-advanced input pin names, prepended with 'Name_NONE'. */
	UFUNCTION()
	TArray<FName> GetInputPinNamesAndNone() const;
#endif

	const UPCGPin* GetInputPin(FName Label) const;
	const UPCGPin* GetOutputPin(FName Label) const;
	const UPCGPin* GetFirstInputPin() const;
	const UPCGPin* GetPointProcessingInputPin() const;
	const UPCGPin* GetFirstOutputPin() const;
	const UPCGPin* GetFirstPointOutputPin() const;
	int GetProcessingElemCountForInputPin(const UPCGPin* InputPin, const UPCGDataBinding* Binding) const;
	bool AreKernelAttributesValid(FPCGContext* InContext, FText* OutErrorText) const;
	bool AreAllOutputPinsWritten(FText* OutErrorText) const;

	/** Will the ThreadCountMultiplier value be applied when calculating the dispatch thread count. */
	bool IsThreadCountMultiplierInUse() const { return KernelType == EPCGKernelType::Custom && DispatchThreadCount != EPCGDispatchThreadCount::Fixed; }

	/** Generate any functions that require code-gen for the shader source. */
	virtual bool GetGeneratedFunctions(FString* OutFunctions, FText* OutErrorText = nullptr) const;

protected:
	UPROPERTY(EditAnywhere, Category = "Settings")
	EPCGKernelType KernelType = EPCGKernelType::PointProcessor;

	UPROPERTY(EditAnywhere, DisplayName = "Number of Points", Category = "Settings", meta = (EditCondition = "KernelType == EPCGKernelType::PointGenerator", EditConditionHides))
	int PointCount = 256;

	UPROPERTY(EditAnywhere, Category = "Settings|Thread Count", meta = (EditCondition = "KernelType == EPCGKernelType::Custom", EditConditionHides))
	EPCGDispatchThreadCount DispatchThreadCount = EPCGDispatchThreadCount::FromFirstOutputPin;

	UPROPERTY(EditAnywhere, Category = "Settings|Thread Count", meta = (EditCondition = "KernelType == EPCGKernelType::Custom && DispatchThreadCount != EPCGDispatchThreadCount::Fixed", EditConditionHides))
	int ThreadCountMultiplier = 1;

	UPROPERTY(EditAnywhere, Category = "Settings|Thread Count", meta = (EditCondition = "KernelType == EPCGKernelType::Custom && DispatchThreadCount == EPCGDispatchThreadCount::Fixed", EditConditionHides))
	int FixedThreadCount = 1;

	UPROPERTY(EditAnywhere, DisplayName = "Input Pins", Category = "Settings|Thread Count", meta = (EditCondition = "KernelType == EPCGKernelType::Custom && DispatchThreadCount == EPCGDispatchThreadCount::FromProductOfInputPins", EditConditionHides, GetOptions = "GetInputPinNames"))
	TArray<FName> ThreadCountInputPinLabels;

public:
	UPROPERTY(EditAnywhere, Category = "Settings")
	TArray<FPCGPinProperties> InputPins = Super::DefaultPointInputPinProperties();

	UPROPERTY(EditAnywhere, Category = "Settings")
	TArray<FPCGPinPropertiesGPU> OutputPins = { FPCGPinPropertiesGPU(PCGPinConstants::DefaultOutputLabel, EPCGDataType::Point) };

#if WITH_EDITOR
	/** Holds input pin labels from PreEditChange, used in PostEditPropertyChange to update any references in output pin setup. */
	TArray<FName> InputPinLabelsPreEditChange;
#endif

protected:
	/** Mute uninitialized data warnings. */
	UPROPERTY(EditAnywhere, Category = "Settings")
	bool bMuteUnwrittenPinDataErrors = false;

	/** Optional functions that can be called from the source. Intended to be edited using the Node Source Editor window. */
	UPROPERTY(EditAnywhere, Category = "Settings", AdvancedDisplay, meta = (MultiLine = true))
	FString ShaderFunctions = "/** CUSTOM SHADER FUNCTIONS **/\n";

	/** Shader code that forms the body of the kernel. Intended to be edited using the Node Source Editor window. */
	UPROPERTY(EditAnywhere, Category = "Settings", AdvancedDisplay, meta = (MultiLine = true))
	FString ShaderSource;

	/** Inputs data accessors that can be used from the shader code. Intended to be viewed using the Node Source Editor window. */
	UPROPERTY(Transient, VisibleAnywhere, Category = "Settings", AdvancedDisplay, meta = (MultiLine = true))
	FString InputDeclarations;

	/** Output data accessors that can be used from the shader code. Intended to be viewed using the Node Source Editor window. */
	UPROPERTY(Transient, VisibleAnywhere, Category = "Settings", AdvancedDisplay, meta = (MultiLine = true))
	FString OutputDeclarations;

	/** Helper data and functions that can be used from the shader code. Intended to be viewed using the Node Source Editor window. */
	UPROPERTY(Transient, VisibleAnywhere, Category = "Settings", AdvancedDisplay, meta = (MultiLine = true))
	FString HelperDeclarations;

	/** Attributes statically detected as being read, written, or created by this node. */
	TArray<FPCGKernelAttributeKey> KernelAttributeKeys;

	/** Maps pins to their attribute keys and whether or not they were created on the GPU. */
	TMap<FName, TArray<TTuple<FPCGKernelAttributeKey, bool /*bCreatedOnGPU*/>>> PinToAttributeKeys;
};

class FPCGCustomHLSLElement : public IPCGElement
{
protected:
	// This will only be called if the custom HLSL node is not set up correctly (valid nodes are replaced with a compute graph element).
	virtual bool ExecuteInternal(FPCGContext* Context) const override;
};
