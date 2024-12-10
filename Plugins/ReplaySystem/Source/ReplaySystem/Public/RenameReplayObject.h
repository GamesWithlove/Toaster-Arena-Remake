// Copyright 2020-Present Oyintare Ebelo. All Rights Reserved.   

#pragma once

#include "CoreMinimal.h"
#include "NetworkReplayStreaming.h"
#include "ReplayDelegates.h"
#include "RenameReplayObject.generated.h"



/**
 * 
 */

UCLASS(BlueprintType, Blueprintable)
class REPLAYSYSTEM_API URenameReplayObject : public UObject
{

	GENERATED_BODY()

public:

	UPROPERTY(BlueprintAssignable, Category = "Replay")
	FOnRenameReplayComplete OnRenameComplete;

	void RenameReplay(const FString& ReplayName, const FString& NewName, const int32 UserIndex, bool bIsNormalName);


	TSharedPtr<INetworkReplayStreamer> EnumerateStreamsPtr;

	FRenameReplayCallback OnRenameReplayCompleteDel;

	void OnRenameReplayComplete(const FRenameReplayResult& Result);
};
