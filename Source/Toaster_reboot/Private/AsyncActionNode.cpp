// Fill out your copyright notice in the Description page of Project Settings.


#include "AsyncActionNode.h"


UAsyncActionNode* UAsyncActionNode::MultiThreadedNode()
{
	UAsyncActionNode* Node = NewObject<UAsyncActionNode>();
	return Node;
}

void UAsyncActionNode::Activate()
{
	(new FAutoDeleteAsyncTask<BP_NonAbandonableTask>(this))->StartBackgroundTask();
}

//====================================================================================
//Constructor
BP_NonAbandonableTask::BP_NonAbandonableTask(UAsyncActionNode* BP_TaskInstance)
{
	CallingObject = BP_TaskInstance;
}
//Destructor
BP_NonAbandonableTask::~BP_NonAbandonableTask()
{
	//CallBacktoGameThread();
	CallingObject->FinishedWorkThreaded.Broadcast();
	CallingObject->SetReadyToDestroy();
}

void BP_NonAbandonableTask::DoWork()
{
	CallingObject->MultiThreadedWork.Broadcast();
}

/*void BP_NonAbandonableTask::CallBacktoGameThread()
{
	AsyncTask(ENamedThreads::GameThread,[this]()

		{

			CallingObject->WaitUntilFinished.Broadcast();

		}

	);


}
*/