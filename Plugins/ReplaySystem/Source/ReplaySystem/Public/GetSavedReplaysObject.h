// Copyright 2020-Present Oyintare Ebelo. All Rights Reserved.   

#pragma once

#include "CoreMinimal.h"
#include "ReplayObject.h"
#include "NetworkReplayStreaming.h"
#include "GetSavedReplaysObject.generated.h"



/**
 *
 */



UCLASS(BlueprintType, Blueprintable)
class REPLAYSYSTEM_API UGetSavedReplaysObject : public UObject
{

	GENERATED_BODY()

public:

	UPROPERTY(BlueprintAssignable, Category = "Replay")
		FOnGetReplaysComplete OnGetReplaysComplete;

	void GetSavedReplays();

	TSharedPtr<INetworkReplayStreamer> EnumerateStreamsPtr;

	FEnumerateStreamsCallback EnumerateStreamsCallbackDel;

	/** Called when we get results from the replay streaming interface */
	void OnEnumerateStreamsComplete(const FEnumerateStreamsResult& Result);
};
