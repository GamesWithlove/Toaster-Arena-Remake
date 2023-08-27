// Copyright Qibo Pang 2022. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "BackgroundBlurWithMaskDefine.generated.h"

/**
 * Enumerates background blur mask texture channel.
 */
UENUM(BlueprintType)
enum EMaskTextureChannel
{
	R UMETA(DisplayName = "R"),

	G UMETA(DisplayName = "G"),

	B UMETA(DisplayName = "B"),

	A UMETA(DisplayName = "A"),
};

/**
 * Enumerates background blur mask material paint method.
 */
UENUM(BlueprintType)
enum EMaskMaterialRedrawMethod
{
	RedrawEveryFrame UMETA(DisplayName = "RedrawEveryFrame"),

	RedrawBlueprint UMETA(DisplayName = "RedrawBlueprint"),
};

/** */
USTRUCT(BlueprintType)
struct FMaskMaterialSetting
{
    GENERATED_BODY()

public:

	/**
	 * Mask material to control blur region.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Appearance)
		UMaterialInterface* MaskMaterial = nullptr;

	/**
	 * Mask material paint to mask texture size.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Appearance)
		FIntPoint ToTextureSize = FIntPoint(128, 128);

	/**
	 * Mask material paint method.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Appearance)
		TEnumAsByte <EMaskMaterialRedrawMethod> RedrawMethod = EMaskMaterialRedrawMethod::RedrawBlueprint;

	bool operator != (const FMaskMaterialSetting& Other) const
	{
		return MaskMaterial != Other.MaskMaterial
			|| ToTextureSize != Other.ToTextureSize
			|| RedrawMethod != Other.RedrawMethod;
	}

};