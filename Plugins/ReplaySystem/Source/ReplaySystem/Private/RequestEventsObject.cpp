// Copyright 2020-Present Oyintare Ebelo. All Rights Reserved.   


#include "RequestEventsObject.h"
#include "ReplayStructs.h"
#include "ReplayObject.h"
#include "NetworkReplayStreaming.h"
#include "ReplayDataObject.h"


void URequestEventsObject::RequestEvents(FString ReplayName,FString Group, int UserIndex)
{
	TSharedPtr<INetworkReplayStreamer> EnumerateStreamsPtr = FNetworkReplayStreaming::Get().GetFactory().CreateReplayStreamer();

	EnumerateEventsDel = FEnumerateEventsCallback::CreateUObject(this, &URequestEventsObject::OnEnumerateEventsComplete);

	if (EnumerateStreamsPtr.Get())
	{
		EnumerateStreamsPtr.Get()->EnumerateEvents(ReplayName,Group,UserIndex, EnumerateEventsDel);
	}
}

void URequestEventsObject::OnEnumerateEventsComplete(const FEnumerateEventsResult& Results)
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
