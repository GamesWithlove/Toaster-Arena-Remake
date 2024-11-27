// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Compute/DataInterfaces/PCGComputeDataInterface.h"
#include "ComputeFramework/ComputeDataProvider.h"

#include "PCGStaticMeshSpawnerDataInterface.generated.h"

class FPCGStaticMeshSpawnerDataInterfaceParameters;
class UPCGStaticMeshSpawnerSettings;
class UPCGSettings;

/** Data Interface to marshal Static Mesh Spawner settings to the GPU. */
UCLASS(ClassGroup = (Procedural))
class UPCGStaticMeshSpawnerDataInterface : public UPCGComputeDataInterface
{
	GENERATED_BODY()

public:
	//~ Begin UComputeDataInterface Interface
	TCHAR const* GetClassName() const override { return TEXT("PCGStaticMeshSpawner"); }
	void GetSupportedInputs(TArray<FShaderFunctionDefinition>& OutFunctions) const override;
	void GetShaderParameters(TCHAR const* UID, FShaderParametersMetadataBuilder& InOutBuilder, FShaderParametersMetadataAllocations& InOutAllocations) const override;
	void GetHLSL(FString& OutHLSL, FString const& InDataInterfaceName) const override;
	UComputeDataProvider* CreateDataProvider(TObjectPtr<UObject> InBinding, uint64 InInputMask, uint64 InOutputMask) const override;
	//~ End UComputeDataInterface Interface

	UPROPERTY()
	TObjectPtr<const UPCGSettings> Settings = nullptr;

	static constexpr uint32 MAX_ATTRIBUTES = 64;
};

UCLASS()
class UPCGStaticMeshSpawnerDataProvider : public UComputeDataProvider
{
	GENERATED_BODY()

public:
	//~ Begin UComputeDataProvider Interface
	FComputeDataProviderRenderProxy* GetRenderProxy() override;
	//~ End UComputeDataProvider Interface

	UPROPERTY()
	TObjectPtr<const UPCGStaticMeshSpawnerSettings> Settings = nullptr;

	UPROPERTY()
	TArray<FUintVector4> AttributeIdOffsetStrides;

	UPROPERTY()
	TArray<int32> PrimitiveStringKeys;

	UPROPERTY()
	TArray<FBox> PrimitiveMeshBounds;

	UPROPERTY()
	TArray<float> SelectionCDF;

	UPROPERTY()
	int32 SelectorAttributeId = -1;

	UPROPERTY()
	int32 NumInputPoints = 0;

	UPROPERTY()
	int32 SelectedMeshAttributeId = -1;
};

class FPCGStaticMeshSpawnerDataProviderProxy : public FComputeDataProviderRenderProxy
{
public:
	FPCGStaticMeshSpawnerDataProviderProxy(
		const TArray<FUintVector4>& InAttributeIdOffsetStrides,
		int32 InSelectorAttributeId,
		const TArray<int32>& InPrimitiveStringKeys,
		TArray<float> InSelectionCDF,
		int32 InSelectedMeshAttributeId,
		const TArray<FBox>& InPrimitiveMeshBounds)
		: AttributeIdOffsetStrides(InAttributeIdOffsetStrides)
		, SelectionCDF(InSelectionCDF)
		, SelectorAttributeId(InSelectorAttributeId)
		, PrimitiveStringKeys(InPrimitiveStringKeys)
		, PrimitiveMeshBounds(InPrimitiveMeshBounds)
		, SelectedMeshAttributeId(InSelectedMeshAttributeId)
	{}

	//~ Begin FComputeDataProviderRenderProxy Interface
	bool IsValid(FValidationData const& InValidationData) const override;
	void GatherDispatchData(FDispatchData const& InDispatchData) override;
	//~ End FComputeDataProviderRenderProxy Interface

protected:
	using FParameters = FPCGStaticMeshSpawnerDataInterfaceParameters;

	TArray<FUintVector4> AttributeIdOffsetStrides;
	TArray<float> SelectionCDF;

	int32 SelectorAttributeId = INDEX_NONE;
	TArray<int32> PrimitiveStringKeys;

	TArray<FBox> PrimitiveMeshBounds;

	int32 SelectedMeshAttributeId = INDEX_NONE;
};
