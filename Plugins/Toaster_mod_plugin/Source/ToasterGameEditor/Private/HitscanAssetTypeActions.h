#pragma once

#include "AssetTypeActions_Base.h"
#include "HitscanTracerDefinition.h"
#include "HitscanImpactDefinition.h"

class FHitscanTracerDefinitionTypeActions : public FAssetTypeActions_Base
{
public:
    FHitscanTracerDefinitionTypeActions(EAssetTypeCategories::Type InAssetCategory) : AssetCategory(InAssetCategory) {}

    FText GetName() const override { return NSLOCTEXT("HitscanTracerTypeActions", "Name", "Hitscan Tracer Definition"); }
    FColor GetTypeColor() const override { return FColor::Orange; }
    UClass* GetSupportedClass() const override { return UHitscanTracerDefinition::StaticClass(); }
    uint32 GetCategories() override { return AssetCategory; }

private:
    EAssetTypeCategories::Type AssetCategory;
};

class FHitscanImpactDefinitionTypeActions : public FAssetTypeActions_Base
{
public:
    FHitscanImpactDefinitionTypeActions(EAssetTypeCategories::Type InAssetCategory) : AssetCategory(InAssetCategory) {}

    FText GetName() const override { return NSLOCTEXT("HitscanImpactTypeActions", "Name", "Hitscan Impact Definition"); }
    FColor GetTypeColor() const override { return FColor::Orange; }
    UClass* GetSupportedClass() const override { return UHitscanImpactDefinition::StaticClass(); }
    uint32 GetCategories() override { return AssetCategory; }

private:
    EAssetTypeCategories::Type AssetCategory;
};