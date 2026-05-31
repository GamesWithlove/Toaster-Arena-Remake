// Copyright 2024 Dmitry Karpukhin. All Rights Reserved.

#include "BlockoutToolsSettings.h"

UBlockoutToolsSettings::UBlockoutToolsSettings(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)

{ 
	BlockoutMaterialType = BlockoutMaterialType_Grid;
	BlockoutMaterialColor = FLinearColor(1.0, 0.3, 0.05, 1.0);
	bBlockoutMaterialUseGrid = true;
	bBlockoutWorldAligned = false;
	BlockoutMaterialGridSize = 100.0f;
	BlockoutMaterialCheckerLuminance = 0.3f;
	BlockoutMaterialRoughness = 0.3f;
	bBlockoutMaterialUseTopColor = true;
	BlockoutMaterialTopColor = FLinearColor(0.25, 0.25, 0.25, 1.0);
//	BlockoutCustomMaterial = ConstructorStatics.BlockoutCustomMaterial.Get();
}