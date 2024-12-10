// Copyright 2020-Present Oyintare Ebelo. All Rights Reserved.   

#pragma once

#include "CoreMinimal.h"
#include "NetworkReplayStreaming.h"
#include "ReplayDelegates.h"
#include "DeleteReplayObject.generated.h"



/**
 * 
 */

UCLASS(BlueprintType, Blueprintable)
class REPLAYSYSTEM_API UDeleteReplayObject : public UObject
{

	GENERATED_BODY()

public:

	UPROPERTY(BlueprintAssignable, Category = "Replay")
		FOnDeleteComplete OnDeleteComplete;

	void DeleteReplay(const FString& ReplayName);


	TSharedPtr<INetworkReplayStreamer> EnumerateStreamsPtr;

	FDeleteFinishedStreamCallback OnDeleteFinishedStreamCompleteDel;

	void OnDeleteFinishedStreamComplete(const FDeleteFinishedStreamResult& Result);
};
