// Copyright 2023, Kibibyte, All rights reserved

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"

#include "Async/AsyncWork.h"

#include "KB_Multi_Thread_E_AsyncNode2.generated.h"

UDELEGATE(BlueprintAuthorityOnly)
DECLARE_DYNAMIC_DELEGATE_TwoParams(FTaskOutput2, bool, OnFinished, float, TimeItTook);

FDateTime StartTime2;

UCLASS()
class KB_MULTI_THREAD_E_API UKB_Multi_Thread_E_AsyncNode2 : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:

	UPROPERTY()
	FTaskOutput2 LocalDelegateFL;

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", DisplayName = "Multi Thread Task by Delegate", Keywords = "Async Multi Thread Delegate", ToolTip = "Allows for multi threading any blueprint code by a delegate", AutoCreateRefTerm = "DelegateFL"), Category = "Multi Thread Extension")
	static UKB_Multi_Thread_E_AsyncNode2* BAS_MTE_MultiThreadNode(const FTaskOutput2& DelegateFL);

	virtual void Activate() override;
};

//

class BAS_MTE_NonAbandonableTask2 : public FNonAbandonableTask
{
public:
	BAS_MTE_NonAbandonableTask2(UKB_Multi_Thread_E_AsyncNode2* LocalUBAS_MultiThread_EAsyncLibrary);

	~BAS_MTE_NonAbandonableTask2();

	FORCEINLINE TStatId GetStatId() const
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT(BAS_MTE_NonAbandonableTask2, STATGROUP_ThreadPoolAsyncTasks);
	}

	UKB_Multi_Thread_E_AsyncNode2* CallingObject = nullptr;

	void DoWork();
};