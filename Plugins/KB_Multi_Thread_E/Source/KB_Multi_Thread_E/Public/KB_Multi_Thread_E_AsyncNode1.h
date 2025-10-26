// Copyright 2023, Kibibyte, All rights reserved

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"

#include "Async/AsyncWork.h"

#include "KB_Multi_Thread_E_AsyncNode1.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTaskOutput, float, TimeItTook);

FDateTime StartTime;

UCLASS()
class KB_MULTI_THREAD_E_API UKB_Multi_Thread_E_AsyncNode1 : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintASsignable)
	FTaskOutput MultiThreadTask;

	UPROPERTY(BlueprintASsignable)
	FTaskOutput OnFinished;

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", DisplayName = "Multi Thread Task", Keywords = "Async Multi Thread", ToolTip = "Allows for multi threading any blueprint code"), Category = "Multi Thread Extension")
	static UKB_Multi_Thread_E_AsyncNode1* BAS_MTE_MultiThreadNode();

	virtual void Activate() override;
};

//

class BAS_MTE_NonAbandonableTask : public FNonAbandonableTask
{
public:
	BAS_MTE_NonAbandonableTask(UKB_Multi_Thread_E_AsyncNode1* LocalUBAS_MultiThread_EAsyncLibrary);

	~BAS_MTE_NonAbandonableTask();

	FORCEINLINE TStatId GetStatId() const
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT(BAS_MTE_NonAbandonableTask, STATGROUP_ThreadPoolAsyncTasks);
	}

	UKB_Multi_Thread_E_AsyncNode1* CallingObject = nullptr;

	void DoWork();
};
