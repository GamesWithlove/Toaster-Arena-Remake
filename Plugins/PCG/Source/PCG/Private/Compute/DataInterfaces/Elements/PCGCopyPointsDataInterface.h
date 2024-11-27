// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Compute/DataInterfaces/PCGComputeDataInterface.h"
#include "ComputeFramework/ComputeDataProvider.h"

#include "PCGCopyPointsDataInterface.generated.h"

class FPCGCopyPointsDataInterfaceParameters;
class UPCGCopyPointsSettings;
class UPCGSettings;

/** Data Interface to marshal Copy Points settings to the GPU. */
UCLASS(ClassGroup = (Procedural))
class UPCGCopyPointsDataInterface : public UPCGComputeDataInterface
{
	GENERATED_BODY()

public:
	//~ Begin UComputeDataInterface Interface
	TCHAR const* GetClassName() const override { return TEXT("PCGCopyPoints"); }
	void GetSupportedInputs(TArray<FShaderFunctionDefinition>& OutFunctions) const override;
	void GetShaderParameters(TCHAR const* UID, FShaderParametersMetadataBuilder& InOutBuilder, FShaderParametersMetadataAllocations& InOutAllocations) const override;
	void GetHLSL(FString& OutHLSL, FString const& InDataInterfaceName) const override;
	UComputeDataProvider* CreateDataProvider(TObjectPtr<UObject> InBinding, uint64 InInputMask, uint64 InOutputMask) const override;
	//~ End UComputeDataInterface Interface

	UPROPERTY()
	TObjectPtr<const UPCGSettings> Settings = nullptr;
};

UCLASS()
class UPCGCopyPointsDataProvider : public UComputeDataProvider
{
	GENERATED_BODY()

public:
	//~ Begin UComputeDataProvider Interface
	FComputeDataProviderRenderProxy* GetRenderProxy() override;
	//~ End UComputeDataProvider Interface

	UPROPERTY()
	TObjectPtr<const UPCGCopyPointsSettings> Settings;
};

class FPCGCopyPointsDataProviderProxy : public FComputeDataProviderRenderProxy
{
public:
	FPCGCopyPointsDataProviderProxy(uint32 InRotationInheritance, uint32 InScaleInheritance, uint32 InColorInheritance, uint32 InSeedInheritance, uint32 InAttributeInheritance, uint32 bInCopyEachSourceOnEveryTarget)
		: RotationInheritance(InRotationInheritance)
		, ScaleInheritance(InScaleInheritance)
		, ColorInheritance(InColorInheritance)
		, SeedInheritance(InSeedInheritance)
		, AttributeInheritance(InAttributeInheritance)
		, bCopyEachSourceOnEveryTarget(bInCopyEachSourceOnEveryTarget)
	{}

	//~ Begin FComputeDataProviderRenderProxy Interface
	bool IsValid(FValidationData const& InValidationData) const override;
	void GatherDispatchData(FDispatchData const& InDispatchData) override;
	//~ End FComputeDataProviderRenderProxy Interface

protected:
	using FParameters = FPCGCopyPointsDataInterfaceParameters;

	uint32 RotationInheritance = 0;
	uint32 ScaleInheritance = 0;
	uint32 ColorInheritance = 0;
	uint32 SeedInheritance = 0;
	uint32 AttributeInheritance = 0;
	uint32 bCopyEachSourceOnEveryTarget = 0;
};
