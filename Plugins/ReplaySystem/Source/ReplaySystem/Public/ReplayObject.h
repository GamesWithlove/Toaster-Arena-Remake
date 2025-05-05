// Copyright 2020-Present Oyintare Ebelo. All Rights Reserved.   

#pragma once

#include "CoreMinimal.h"
#include "NetworkReplayStreaming.h"
#include "ReplayDelegates.h"
#include "ReplayStructs.h"
#include "ReplayObject.generated.h"

/**
 *
 */



class UReplayDataObject;

UCLASS(BlueprintType, Blueprintable)
class REPLAYSYSTEM_API UReplayObject : public UObject
{

	GENERATED_BODY()

public:

	UPROPERTY()
	UWorld* World = nullptr;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = Replay)
		FReplayInfo ReplayInfo;
	

	// called once the events have been gotten
	UPROPERTY(BlueprintAssignable, Category = "Replay|Events")
	FOnRequestEventsComplete OnRequestEventsComplete;


	/**
	 *  Gets the events of a loaded replay
	 * @param Group 
	 * @param UserIndex 
	 */
	UFUNCTION(BlueprintCallable, Category = "Replay")
	void RequestEvents(FString Group,int UserIndex);

	FEnumerateEventsCallback EnumerateEventsDel;
	
	void OnEnumerateEventsComplete(const FEnumerateEventsResult& Results);

};
