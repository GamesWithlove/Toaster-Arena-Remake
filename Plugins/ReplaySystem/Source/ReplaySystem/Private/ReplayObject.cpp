// Copyright 2020-Present Oyintare Ebelo. All Rights Reserved.   


#include "ReplayObject.h"
#include "ReplayDataObject.h"
#include "NetworkReplayStreaming.h"
#include "HAL/FileManagerGeneric.h"
#include "Engine/DemoNetDriver.h"

void UReplayObject::RequestEvents(FString Group,int UserIndex)
{
	TSharedPtr<INetworkReplayStreamer> EnumerateStreamsPtr = FNetworkReplayStreaming::Get().GetFactory().CreateReplayStreamer();

	EnumerateEventsDel = FEnumerateEventsCallback::CreateUObject(this, &UReplayObject::OnEnumerateEventsComplete);

	if (EnumerateStreamsPtr.Get())
	{
		EnumerateStreamsPtr.Get()->EnumerateEvents(ReplayInfo.ActualName,Group,UserIndex, EnumerateEventsDel);
	}
}

void UReplayObject::OnEnumerateEventsComplete(const FEnumerateEventsResult& Results)
{
	TArray<FReplayEvent> ReplayEvents;
	if(Results.WasSuccessful())
	{
		for(FReplayEventListItem EventItem : Results.ReplayEventList.ReplayEvents)
		{
			FReplayEvent ReplayEventTemp;
			ReplayEventTemp.EventID = EventItem.ID;
			
			ReplayEventTemp.Group = EventItem.Group;
			ReplayEventTemp.TimeInMs = (int32)EventItem.Time1;
			
			UReplayDataObject* DataObject = NewObject<UReplayDataObject>();
			DataObject->LoadReplayMetaDataFromString(EventItem.Metadata);
			ReplayEventTemp.Data = DataObject;
			
			ReplayEvents.Add(ReplayEventTemp);

			
			
		}
	}

	OnRequestEventsComplete.Broadcast(ReplayEvents);
}

