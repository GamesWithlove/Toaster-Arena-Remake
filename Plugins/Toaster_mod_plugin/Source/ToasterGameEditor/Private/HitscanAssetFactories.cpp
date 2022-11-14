#include "HitscanAssetFactories.h"
#include "HitscanTracerDefinition.h"
#include "HitscanImpactDefinition.h"

// Hitscan Tracer
UHitscanTracerDefinitionFactory::UHitscanTracerDefinitionFactory(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
    bCreateNew = true;
    bEditAfterNew = true;
    SupportedClass = UHitscanTracerDefinition::StaticClass();
}

UObject* UHitscanTracerDefinitionFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
    UHitscanTracerDefinition* Definition = NewObject<UHitscanTracerDefinition>(InParent, InClass, InName, Flags | RF_Transactional);
    return Definition;
}

// Hitscan Impact
UHitscanImpactDefinitionFactory::UHitscanImpactDefinitionFactory(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
    bCreateNew = true;
    bEditAfterNew = true;
    SupportedClass = UHitscanImpactDefinition::StaticClass();
}

UObject* UHitscanImpactDefinitionFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
    UHitscanImpactDefinition* Definition = NewObject<UHitscanImpactDefinition>(InParent, InClass, InName, Flags | RF_Transactional);
    return Definition;
}
