// Copyright 2023, Kibibyte, All rights reserved

#include "KB_Multi_Thread_E_AsyncNode2.h"

UKB_Multi_Thread_E_AsyncNode2* UKB_Multi_Thread_E_AsyncNode2::BAS_MTE_MultiThreadNode(const FTaskOutput2& DelegateFL)
{
	UKB_Multi_Thread_E_AsyncNode2* LocalUKB_Multi_Thread_E_AsyncNode2 = NewObject<UKB_Multi_Thread_E_AsyncNode2>();
	LocalUKB_Multi_Thread_E_AsyncNode2->LocalDelegateFL = DelegateFL;
	return LocalUKB_Multi_Thread_E_AsyncNode2;
}

void UKB_Multi_Thread_E_AsyncNode2::Activate()
{
	StartTime2 = FDateTime::UtcNow();
	(new FAutoDeleteAsyncTask<BAS_MTE_NonAbandonableTask2>(this))->StartBackgroundTask();
}

//

BAS_MTE_NonAbandonableTask2::BAS_MTE_NonAbandonableTask2(UKB_Multi_Thread_E_AsyncNode2* LocalUBAS_MultiThread_EAsyncNode1)
{
	CallingObject = LocalUBAS_MultiThread_EAsyncNode1;
}

BAS_MTE_NonAbandonableTask2::~BAS_MTE_NonAbandonableTask2()
{
	CallingObject->LocalDelegateFL.ExecuteIfBound(true, (FDateTime::UtcNow() - StartTime2).GetTotalMicroseconds() * pow(10, -6));
	CallingObject->SetReadyToDestroy();
}

void BAS_MTE_NonAbandonableTask2::DoWork()
{
	CallingObject->LocalDelegateFL.ExecuteIfBound(false, 0.0f);
}