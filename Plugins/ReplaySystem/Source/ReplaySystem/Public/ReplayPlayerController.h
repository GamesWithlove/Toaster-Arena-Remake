// Copyright 2020-Present Oyintare Ebelo. All Rights Reserved.   

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ReplayPlayerController.generated.h"


/**
 * 
 */
UCLASS()
class REPLAYSYSTEM_API AReplayPlayerController : public APlayerController
{
	GENERATED_BODY()
	AReplayPlayerController();

public:
	UFUNCTION(BlueprintImplementableEvent,Category="Replay")
	void OnGoToTime(float currentTime);

	/**
	 *  true means paused
	 * @param PauseState 
	 */
	UFUNCTION(BlueprintImplementableEvent,Category="Replay")
    void OnTogglePause(bool PauseState);
	
	UFUNCTION(BlueprintImplementableEvent,Category="Replay")
    void OnSpectateActor(AActor* Actor);
	
	UFUNCTION(BlueprintImplementableEvent,Category="Replay")
    void OnStopSpectateActor();

	

	bool bIsSpectating = false;
};
