// Copyright 2020-Present Oyintare Ebelo. All Rights Reserved.   

#pragma once

#include "CoreMinimal.h"
#include "ReplayDelegates.h"
#include "Engine.h"
#include "Engine/DemoNetDriver.h"
#include "GoToTimeObject.generated.h"

UCLASS()
class REPLAYSYSTEM_API UGoToTimeObject : public UObject
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	UGoToTimeObject();

protected:
	

public:	

	UPROPERTY(BlueprintAssignable)
	FOnGotoTimeComplete OnGotoTimeComplete;

	void GoToTime(UObject* WorldContextObject,float TimeToGoTo,bool bRetainPauseState);

	UPROPERTY()
	UObject* WCO;

	bool bPauseStateBeforeMove = false;

	bool bRetainPauseStateBeforeMove = false;

	

	FOnGotoTimeDelegate OnGoToTimeDelegate;

	void OnGoToTimeProcessed(bool bWasSuccessful);

};
