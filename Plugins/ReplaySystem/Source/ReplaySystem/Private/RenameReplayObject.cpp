// Copyright 2020-Present Oyintare Ebelo. All Rights Reserved.   


#include "RenameReplayObject.h"
#include "NetworkReplayStreaming.h"


void URenameReplayObject::RenameReplay(const FString& ReplayName, const FString& NewName, const int32 UserIndex,bool bIsNormalName)
{
	EnumerateStreamsPtr = FNetworkReplayStreaming::Get().GetFactory().CreateReplayStreamer();

	OnRenameReplayCompleteDel = FRenameReplayCallback::CreateUObject(this, &URenameReplayObject::OnRenameReplayComplete);

	if (EnumerateStreamsPtr.Get())
	{
		if (bIsNormalName)
		{
			EnumerateStreamsPtr.Get()->RenameReplay(ReplayName,NewName,UserIndex, OnRenameReplayCompleteDel);

		}
		else
		{
			EnumerateStreamsPtr.Get()->RenameReplayFriendlyName(ReplayName, NewName,UserIndex, OnRenameReplayCompleteDel);
		}
	}
}

void URenameReplayObject::OnRenameReplayComplete(const FRenameReplayResult& Result)
{
	bool WasSuccessful = Result.WasSuccessful();
	OnRenameComplete.Broadcast(WasSuccessful);
}
