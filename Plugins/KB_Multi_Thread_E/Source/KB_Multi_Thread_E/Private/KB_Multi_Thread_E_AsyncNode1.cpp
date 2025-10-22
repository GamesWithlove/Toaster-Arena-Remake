// Copyright 2023, Kibibyte, All rights reserved

#include "KB_Multi_Thread_E_AsyncNode1.h"

UKB_Multi_Thread_E_AsyncNode1* UKB_Multi_Thread_E_AsyncNode1::BAS_MTE_MultiThreadNode()
{
	UKB_Multi_Thread_E_AsyncNode1* LocalKB_Multi_Thread_E_AsyncNode1 = NewObject<UKB_Multi_Thread_E_AsyncNode1>();
	return LocalKB_Multi_Thread_E_AsyncNode1;
}

void UKB_Multi_Thread_E_AsyncNode1::Activate()
{
	StartTime = FDateTime::UtcNow();
	(new FAutoDeleteAsyncTask<BAS_MTE_NonAbandonableTask>(this))->StartBackgroundTask();
}

//

BAS_MTE_NonAbandonableTask::BAS_MTE_NonAbandonableTask(UKB_Multi_Thread_E_AsyncNode1* LocalUBAS_MultiThread_EAsyncNode1)
{
	CallingObject = LocalUBAS_MultiThread_EAsyncNode1;
}

BAS_MTE_NonAbandonableTask::~BAS_MTE_NonAbandonableTask()
{
	CallingObject->OnFinished.Broadcast((FDateTime::UtcNow() - StartTime).GetTotalMicroseconds() * pow(10, -6));
	CallingObject->SetReadyToDestroy();
}

void BAS_MTE_NonAbandonableTask::DoWork()
{
	CallingObject->MultiThreadTask.Broadcast(-1.0f);
}