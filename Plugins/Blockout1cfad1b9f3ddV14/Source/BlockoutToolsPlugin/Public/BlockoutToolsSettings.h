// Copyright 2024 Dmitry Karpukhin. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BlockoutToolsParent.h"
#include "BlockoutToolsSettings.generated.h"

/**
 * 
 */
UCLASS(config = BlockoutTools, defaultconfig)
class BLOCKOUTTOOLSPLUGIN_API UBlockoutToolsSettings : public UObject
{
	GENERATED_BODY()
	
public:

	UBlockoutToolsSettings(const class FObjectInitializer& ObjectInitializer);

	UPROPERTY(Config, EditAnywhere, Category = "Blockout Material", DisplayName = "Material Type", meta = (ConfigRestartRequired = true))
	TEnumAsByte<EBlockoutMaterialType> BlockoutMaterialType;

	UPROPERTY(Config, EditAnywhere, Category = "Blockout Material", DisplayName = "Color", meta = (ConfigRestartRequired = true))
	FLinearColor BlockoutMaterialColor;

	UPROPERTY(Config, EditAnywhere, Category = "Blockout Material", DisplayName = "Use Grid", meta = (ConfigRestartRequired = true))
	bool bBlockoutMaterialUseGrid;

	// Sets if triplanar material is local-aligned or world-aligned
	UPROPERTY(Config, EditAnywhere, Category = "Blockout Material", DisplayName = "World Aligned", meta = (ConfigRestartRequired = true))
	bool bBlockoutWorldAligned;

	UPROPERTY(Config, EditAnywhere, Category = "Blockout Material", DisplayName = "Grid Size", meta = (ConfigRestartRequired = true))
	float BlockoutMaterialGridSize;

	UPROPERTY(Config, EditAnywhere, Category = "Blockout Material", DisplayName = "Checker Luminance", meta = (ClampMin = "0.0", ClampMax = "1.0", ConfigRestartRequired = true))
	float BlockoutMaterialCheckerLuminance;

	UPROPERTY(Config, EditAnywhere, Category = "Blockout Material", DisplayName = "Roughness", meta = (ClampMin = "0.0", ClampMax = "1.0", ConfigRestartRequired = true))
	float BlockoutMaterialRoughness = 0.3f;

	UPROPERTY(Config, EditAnywhere, Category = "Blockout Material", DisplayName = "Use Top Color", meta = (ConfigRestartRequired = true))
	bool bBlockoutMaterialUseTopColor;

	UPROPERTY(Config, EditAnywhere, Category = "Blockout Material", DisplayName = "Top Color", meta = (ConfigRestartRequired = true))
	FLinearColor BlockoutMaterialTopColor;

//	UPROPERTY(Config, EditAnywhere, Category = "Blockout Material", DisplayName = "Custom Material")
//	UMaterialInterface* BlockoutCustomMaterial;

};
