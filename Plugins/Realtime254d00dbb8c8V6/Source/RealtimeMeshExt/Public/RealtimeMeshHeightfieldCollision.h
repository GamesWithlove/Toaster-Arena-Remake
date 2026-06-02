// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "Chaos/ImplicitFwd.h"
#include "Chaos/HeightField.h"
#include "PrimitiveSceneProxy.h"
#include "RealtimeMeshHeightfieldCollision.generated.h"


USTRUCT(BlueprintType)
struct FRealtimeMeshHeightFieldCollisionData
{
	GENERATED_BODY()

public:
	FRealtimeMeshHeightFieldCollisionData()
		: Dimensions(0, 0)
		, GridSpacing(100.0f)
		, DefaultMaterialIndex(0)
		, HeightRange(-10000.0f, 10000.0f)
	{
	}
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Collision")
	TArray<float> HeightData;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Collision")
	TArray<uint8> MaterialIndices;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Collision")
	TArray<TObjectPtr<UPhysicalMaterial>> PhysicalMaterials;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Collision")
	FIntPoint Dimensions;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Collision")
	float GridSpacing = 100.0f;

	// Default material index for invalid indices
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Collision|Advanced")
	uint8 DefaultMaterialIndex = 0;

	// Height data bounds for validation
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Collision|Advanced")
	FVector2f HeightRange = FVector2f(-10000.0f, 10000.0f);

	// Validation functions
	bool IsValid() const;
	bool ValidateDimensions() const;
	bool ValidateHeightData() const;
	bool ValidateMaterialIndices() const;
	void SanitizeData();
	FString GetValidationErrorString() const;
};



UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class REALTIMEMESHEXT_API URealtimeMeshHeightfieldCollision : public UPrimitiveComponent
{
	GENERATED_BODY()
private:
	TArray<Chaos::FMaterialHandle> UsedChaosMaterials;
	Chaos::FHeightFieldPtr HeightfieldGeometry;
	
	FRealtimeMeshHeightFieldCollisionData CollisionData;

	// Batch update state
	bool bInBatchUpdate = false;
	bool bPendingPhysicsRecreation = false;
	
	// Helper functions
	void UpdateChaosMaterials();
	FBox CalculateBounds() const;
	void UpdateComponentBounds();
public:
	// Sets default values for this component's properties
	URealtimeMeshHeightfieldCollision();

	void SetCollisionData(FRealtimeMeshHeightFieldCollisionData&& CollisionData);

	// Height data operations
	UFUNCTION(BlueprintCallable, Category = "Collision|Height Data")
	bool SetHeightFieldData(const FRealtimeMeshHeightFieldCollisionData& NewData, bool bValidateData = true);
	
	UFUNCTION(BlueprintCallable, Category = "Collision|Height Data")
	void SetHeight(int32 X, int32 Y, float Height);
	
	UFUNCTION(BlueprintCallable, Category = "Collision|Height Data")
	float GetHeight(int32 X, int32 Y) const;
	
	UFUNCTION(BlueprintCallable, Category = "Collision|Height Data")
	void SetHeightRegion(int32 StartX, int32 StartY, int32 SizeX, int32 SizeY, const TArray<float>& Heights);
	
	UFUNCTION(BlueprintCallable, Category = "Collision|Height Data")
	TArray<float> GetHeightRegion(int32 StartX, int32 StartY, int32 SizeX, int32 SizeY) const;
	
	UFUNCTION(BlueprintCallable, Category = "Collision|Height Data")
	void ModifyHeightRegion(int32 StartX, int32 StartY, int32 SizeX, int32 SizeY, float HeightDelta);

	// Material operations
	UFUNCTION(BlueprintCallable, Category = "Collision|Materials")
	bool SetHeightfieldPhysicalMaterial(int32 MaterialIndex, UPhysicalMaterial* Material);
	
	UFUNCTION(BlueprintCallable, Category = "Collision|Materials")
	UPhysicalMaterial* GetHeightfieldPhysicalMaterial(int32 MaterialIndex) const;
	
	UFUNCTION(BlueprintCallable, Category = "Collision|Materials")
	int32 AddHeightfieldPhysicalMaterial(UPhysicalMaterial* Material);
	
	UFUNCTION(BlueprintCallable, Category = "Collision|Materials")
	void SetCellMaterialIndex(int32 CellX, int32 CellY, uint8 MaterialIndex);
	
	UFUNCTION(BlueprintCallable, Category = "Collision|Materials")
	uint8 GetCellMaterialIndex(int32 CellX, int32 CellY) const;
	
	UFUNCTION(BlueprintCallable, Category = "Collision|Materials")
	void SetCellMaterialIndicesRegion(int32 StartX, int32 StartY, int32 SizeX, int32 SizeY, uint8 MaterialIndex);

	// Batch operations for performance
	UFUNCTION(BlueprintCallable, Category = "Collision|Batch Operations")
	void BeginBatchUpdate();
	
	UFUNCTION(BlueprintCallable, Category = "Collision|Batch Operations")
	void EndBatchUpdate(bool bForceRecreatePhysics = false);
	
	// Utility functions
	UFUNCTION(BlueprintCallable, Category = "Collision|Utilities")
	FVector2D GetWorldSizeFromGridSize() const;
	
	UFUNCTION(BlueprintCallable, Category = "Collision|Utilities")
	FIntPoint GetGridCoordinatesFromWorldPosition(const FVector& WorldPosition) const;
	
	UFUNCTION(BlueprintCallable, Category = "Collision|Utilities")
	FVector GetWorldPositionFromGridCoordinates(int32 X, int32 Y) const;
	
	UFUNCTION(BlueprintCallable, Category = "Collision|Utilities")
	float GetInterpolatedHeight(const FVector& WorldPosition) const;

	// Access to collision data for debug rendering
	const FRealtimeMeshHeightFieldCollisionData& GetCollisionData() const { return CollisionData; }

protected:
	UPROPERTY()
	UBodySetup* BodySetup;

	virtual void OnRegister() override;

	virtual void OnCreatePhysicsState() override;
	virtual void OnDestroyPhysicsState() override;

#if !(UE_BUILD_SHIPPING || UE_BUILD_TEST)
	// Debug rendering integration
	virtual FPrimitiveSceneProxy* CreateSceneProxy() override;
#endif

	virtual FBoxSphereBounds CalcBounds(const FTransform& LocalToWorld) const override;
};
