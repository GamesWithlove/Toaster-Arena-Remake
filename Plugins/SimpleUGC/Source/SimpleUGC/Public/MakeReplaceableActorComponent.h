// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MakeReplaceableActorComponent.generated.h"

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class SIMPLEUGC_API UMakeReplaceableActorComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UMakeReplaceableActorComponent();

	// Only Classes of these Types can override this Actor. This is typically the type of actor you've places this component on or a safe superclass shared with an Override class.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "SimpleUGC | Actor Replacement")
	TSubclassOf<AActor> CompatibleReplacement;
};
