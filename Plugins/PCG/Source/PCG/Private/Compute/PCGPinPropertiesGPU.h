// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "PCGPin.h"
#include "Compute/PCGDataForGPU.h"

#include "PCGPinPropertiesGPU.generated.h"

/** Method for initializing an output pin. */
UENUM()
enum class EPCGPinInitMode : uint8
{
	FromInputPins UMETA(Tooltip = "Initialize from one or more input pins."),
	Custom UMETA(Tooltip = "Initialize from fixed values."),
};

/** Method for computing data count. */
UENUM()
enum class EPCGDataCountMode : uint8
{
	FromInputData,
	Fixed,
};

/** Method for computing element count. */
UENUM()
enum class EPCGElementCountMode : uint8
{
	FromInputData,
	Fixed,
};

/** Method for combining two or more data counts. */
UENUM()
enum class EPCGDataMultiplicity : uint8
{
	Pairwise UMETA(Tooltip = "A data item will be produced for each pair/tuple/etc of input data items across the input pins. Requires all pins to have the same number of data."),
	CartesianProduct UMETA(Tooltip = "If there are two input pins with N and M data items respectively, the output will have NxM data items."),
};

/** Method for combining two or more element counts. */
UENUM()
enum class EPCGElementMultiplicity : uint8
{
	Product UMETA(Tooltip = "Element count will be the product of the elements in each pair/tuple/etc of input data."),
	Sum UMETA(Tooltip = "Element count will be the sum of the elements in each pair/tuple/etc of input data."),
};

/** Method for inheriting attribute data from input pins. */
UENUM()
enum class EPCGAttributeInheritanceMode : uint8
{
	None UMETA(Tooltip = "No attributes inherited from initialization pins."),
	CopyAttributeSetup UMETA(Tooltip = "Take attribute names and types from initialization pins. Pins declared first will take priority during conflicts. Does not copy values."),
	// TODO: Mode to automatically copy values. Requires code-gen to loop on batches of elements for pins based on the total number of elements and total number of threads.
	//CopyAttributeSetupAndValues UMETA(Tooltip = "Take attribute names, types, and initial values from initialization pins. Pins declared first will take priority during conflicts."),
};

/** Helper struct to nest GPU pin properties inside a UI category. */
USTRUCT(BlueprintType)
struct FPCGPinPropertiesGPUStruct
{
	GENERATED_BODY()

	/** How the output data for this pin will be initialized. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (EditCondition = "bAllowEditInitMode", EditConditionHides, HideEditConditionToggle))
	EPCGPinInitMode InitializationMode = EPCGPinInitMode::FromInputPins;

	/** Input pins to initialize this pin's data from. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (GetOptions = "GetInputPinNames", EditCondition = "bAllowEditInitMode && InitializationMode == EPCGPinInitMode::FromInputPins", EditConditionHides))
	TArray<FName> PinsToInititalizeFrom;

	/** How the number of data is determined. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (EditCondition = "bAllowEditInitMode && bAllowEditDataCount && InitializationMode == EPCGPinInitMode::FromInputPins", EditConditionHides))
	EPCGDataCountMode DataCountMode = EPCGDataCountMode::FromInputData;

	/** How to combine data counts. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (EditCondition = "bAllowEditInitMode && bAllowEditDataCount && InitializationMode == EPCGPinInitMode::FromInputPins && DataCountMode == EPCGDataCountMode::FromInputData && bMultipleInitPins", EditConditionHides))
	EPCGDataMultiplicity DataMultiplicity = EPCGDataMultiplicity::Pairwise;

	/** Number of data to create. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (EditCondition = "bAllowEditInitMode && (InitializationMode == EPCGPinInitMode::Custom || DataCountMode == EPCGDataCountMode::Fixed)", EditConditionHides, ClampMin = 1))
	int DataCount = 1;

	/** How the number of elements is determined. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (EditCondition = "bAllowEditInitMode && InitializationMode == EPCGPinInitMode::FromInputPins", EditConditionHides))
	EPCGElementCountMode ElementCountMode = EPCGElementCountMode::FromInputData;

	/** How to combine element counts. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (EditCondition = "bAllowEditInitMode && InitializationMode == EPCGPinInitMode::FromInputPins && ElementCountMode == EPCGElementCountMode::FromInputData && bMultipleInitPins", EditConditionHides))
	EPCGElementMultiplicity ElementMultiplicity = EPCGElementMultiplicity::Product;

	/** Fixed number of elements to create in each output data. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (EditCondition = "bAllowEditInitMode && (InitializationMode == EPCGPinInitMode::Custom || ElementCountMode == EPCGElementCountMode::Fixed)", EditConditionHides, ClampMin = 1))
	int ElementCount = 1;

	/** How to inherit attribute names, types, and values. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (EditCondition = "bAllowEditInitMode && InitializationMode == EPCGPinInitMode::FromInputPins", EditConditionHides))
	EPCGAttributeInheritanceMode AttributeInheritanceMode = EPCGAttributeInheritanceMode::CopyAttributeSetup;

	/** Add entries to create new attributes on data emitted by this pin. */
	UPROPERTY(EditAnywhere, DisplayName = "Attributes to Create", Category = Settings)
	TArray<FPCGKernelAttributeKey> CreatedKernelAttributeKeys;

#if WITH_EDITORONLY_DATA
	UPROPERTY(Transient)
	bool bAllowEditInitMode = false;

	/** Some types force single data, such as Attribute Sets. We should not allow data count to be edited for such types. */
	UPROPERTY(Transient)
	bool bAllowEditDataCount = false;

	UPROPERTY(Transient)
	bool bMultipleInitPins = false;
#endif // WITH_EDITORONLY_DATA
};

/** An extension of the pin properties that adds hints for GPU specific properties, such as buffer size and data layout. */
USTRUCT(BlueprintType)
struct PCG_API FPCGPinPropertiesGPU : public FPCGPinProperties
{
	GENERATED_BODY()

public:
	FPCGPinPropertiesGPU() = default;

	explicit FPCGPinPropertiesGPU(const FName& InLabel, EPCGDataType InAllowedTypes)
		: FPCGPinProperties(InLabel, InAllowedTypes)
	{}

	explicit FPCGPinPropertiesGPU(const FPCGPinProperties& InPinProps)
		: FPCGPinProperties(InPinProps.Label, InPinProps.AllowedTypes)
	{}

#if WITH_EDITOR
	bool CanEditChange(const FEditPropertyChain& PropertyChain) const;
#endif

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (DisplayName = "GPU Properties", DisplayAfter = "Tooltip"))
	FPCGPinPropertiesGPUStruct PropertiesGPU;
};

template<>
struct TStructOpsTypeTraits<FPCGPinPropertiesGPU> : public TStructOpsTypeTraitsBase2<FPCGPinPropertiesGPU>
{
	enum
	{
		WithCanEditChange = true,
	};
};
