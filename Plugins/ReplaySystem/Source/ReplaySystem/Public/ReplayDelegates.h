// Copyright 2020-Present Oyintare Ebelo. All Rights Reserved.   
#pragma once

#include "CoreMinimal.h"
#include "ReplayStructs.h"
#include "ReplayDelegates.generated.h"

class UReplayObject;
class APawn;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRequestEventsComplete,const TArray<FReplayEvent>&, Events);

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRenameReplayComplete, bool, bWasSuccessful);

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGetReplaysComplete,const TArray<UReplayObject *> &, Replays);

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDeleteComplete, bool, bWasSuccessful);

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGotoTimeComplete, const bool ,bWasSuccessful);

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnReplayComplete);
