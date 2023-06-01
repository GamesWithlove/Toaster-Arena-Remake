// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Expandedpc.generated.h"

/**
 * 
 */
UCLASS()
class CONPLUGIN_API AExpandedpc : public APlayerController
{
	GENERATED_BODY()
public:
UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Controller expanded")
void PawnLeavingGame();

UPROPERTY(EditAnywhere, BlueprintReadWrite, config, Category = "Controller expanded")
bool DestroyActorThenUnpossess;
	
};
