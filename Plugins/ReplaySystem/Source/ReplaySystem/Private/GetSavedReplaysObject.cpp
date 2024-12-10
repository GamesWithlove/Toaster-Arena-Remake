// Copyright 2020-Present Oyintare Ebelo. All Rights Reserved.   


#include "GetSavedReplaysObject.h"
#include "ReplayStructs.h"
#include "ReplayObject.h"
#include "NetworkReplayStreaming.h"


void UGetSavedReplaysObject::GetSavedReplays()
{
	EnumerateStreamsPtr = FNetworkReplayStreaming::Get().GetFactory().CreateReplayStreamer();

	EnumerateStreamsCallbackDel = FEnumerateStreamsCallback::CreateUObject(this, &UGetSavedReplaysObject::OnEnumerateStreamsComplete);

	if (EnumerateStreamsPtr.Get())
	{
		EnumerateStreamsPtr.Get()->EnumerateStreams(FNetworkReplayVersion(), INDEX_NONE, FString(), TArray<FString>(), EnumerateStreamsCallbackDel);
	}
}

void UGetSavedReplaysObject::OnEnumerateStreamsComplete(const FEnumerateStreamsResult& Result)
{

	TArray<UReplayObject* > Replays;

	TArray<FNetworkReplayStreamInfo> StreamInfos = Result.FoundStreams;

	for (FNetworkReplayStreamInfo StreamInfo : StreamInfos)
	{
		FReplayInfo ReplayInfoTemp;
		ReplayInfoTemp.FriendlyName = StreamInfo.FriendlyName;
		ReplayInfoTemp.ActualName = StreamInfo.Name;
		ReplayInfoTemp.RecordDate = StreamInfo.Timestamp;
		ReplayInfoTemp.LengthInMS = StreamInfo.LengthInMS;
		float SizeInKb = StreamInfo.SizeInBytes / 1024.0f;
		ReplayInfoTemp.SizeInMb = SizeInKb / 1024.0f;

		UReplayObject* ReplayObj = NewObject<UReplayObject>();
		ReplayObj->ReplayInfo = ReplayInfoTemp;
		Replays.Add(ReplayObj);
	}

	OnGetReplaysComplete.Broadcast(Replays);
}