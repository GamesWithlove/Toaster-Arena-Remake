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
UFUNCTION(BlueprintPure)
float GetServerWorldTimeDelta() const;

UFUNCTION(BlueprintPure)
float GetServerWorldTime() const;

void PostNetInit() override;

UPROPERTY(EditAnywhere, BlueprintReadWrite, config, Category = "Controller expanded")
bool DestroyActorThenUnpossess;

protected:

/** Frequency that the client requests to adjust it's local clock. Set to zero to disable periodic updates. */
UPROPERTY(EditDefaultsOnly, Category = GameState)
float NetworkClockUpdateFrequency = 5.f;

private:
float ServerWorldTimeDelta = 0.f;
float ShortestRoundTripTime = BIG_NUMBER;

void RequestWorldTime_Internal();

UFUNCTION(Server, Unreliable)
void ServerRequestWorldTime(float ClientTimestamp);

UFUNCTION(Client, Unreliable)
void ClientUpdateWorldTime(float ClientTimestamp, float ServerTimestamp);
};



