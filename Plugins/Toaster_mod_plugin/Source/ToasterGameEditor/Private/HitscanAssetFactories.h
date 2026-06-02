#pragma once

#include "Factories/Factory.h"
#include "HitscanAssetFactories.generated.h"

UCLASS()
class UHitscanTracerDefinitionFactory : public UFactory
{
    GENERATED_BODY()

public:
    UHitscanTracerDefinitionFactory(const FObjectInitializer& ObjectInitializer);

    UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
};

UCLASS()
class UHitscanImpactDefinitionFactory : public UFactory
{
    GENERATED_BODY()

public:
    UHitscanImpactDefinitionFactory(const FObjectInitializer& ObjectInitializer);

    UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
};