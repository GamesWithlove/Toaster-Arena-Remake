// Copyright 2020-Present Oyintare Ebelo. All Rights Reserved.   

#pragma once

#include "CoreMinimal.h"
#include "NetworkReplayStreaming.h"
#include "ReplayDelegates.h"
#include "RequestEventsObject.generated.h"

/**
 *
 */



UCLASS(BlueprintType, Blueprintable)
class REPLAYSYSTEM_API URequestEventsObject : public UObject
{

	GENERATED_BODY()

public:

	UPROPERTY(BlueprintAssignable, Category = "Replay|Events")
		FOnRequestEventsComplete OnRequestEventsComplete;

	void RequestEvents(FString ReplayName,FString Group,int UserIndex);

	FEnumerateEventsCallback EnumerateEventsDel;

	void OnEnumerateEventsComplete(const FEnumerateEventsResult& Results);

};
