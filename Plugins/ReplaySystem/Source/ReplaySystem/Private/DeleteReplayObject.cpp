// Copyright 2020-Present Oyintare Ebelo. All Rights Reserved.   


#include "DeleteReplayObject.h"
#include "NetworkReplayStreaming.h"


void UDeleteReplayObject::DeleteReplay(const FString& ReplayName)
{
	EnumerateStreamsPtr = FNetworkReplayStreaming::Get().GetFactory().CreateReplayStreamer();

	OnDeleteFinishedStreamCompleteDel = FDeleteFinishedStreamCallback::CreateUObject(this, &UDeleteReplayObject::OnDeleteFinishedStreamComplete);

	if (EnumerateStreamsPtr.Get())
	{
		EnumerateStreamsPtr.Get()->DeleteFinishedStream(ReplayName, OnDeleteFinishedStreamCompleteDel);
	}
}

void UDeleteReplayObject::OnDeleteFinishedStreamComplete(const FDeleteFinishedStreamResult& Result)
{
	bool WasSuccessful = Result.WasSuccessful();
	OnDeleteComplete.Broadcast(WasSuccessful);
}
