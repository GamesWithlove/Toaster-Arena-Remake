// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ReplacementActorComponent.generated.h"

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class SIMPLEUGC_API UReplacementActorComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UReplacementActorComponent();
	// Add Classes you want to override here. Note: Classes added to this list MUST have a UMakeReplaceableActorComponent and This class's type be included in the component's ValidOverrideTypes
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "SimpleUGC | Actor Replacement")
	TArray<TSubclassOf<AActor>> ActorClassesToReplace;
};
