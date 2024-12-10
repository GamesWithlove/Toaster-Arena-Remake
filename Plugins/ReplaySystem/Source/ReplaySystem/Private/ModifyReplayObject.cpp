// Copyright 2020-Present Oyintare Ebelo. All Rights Reserved.   


#include "ModifyReplayObject.h"
#include "NetworkReplayStreaming.h"


void UModifyReplayObject::RenameReplay(const FString& ReplayName, const FString& NewName, const int32 UserIndex,bool bIsNormalName)
{
	EnumerateStreamsPtr = FNetworkReplayStreaming::Get().GetFactory().CreateReplayStreamer();

	OnRenameReplayCompleteDel = FRenameReplayCallback::CreateUObject(this, &UModifyReplayObject::OnRenameReplayComplete);

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

void UModifyReplayObject::OnRenameReplayComplete(const FRenameReplayResult& Result)
{
	bool WasSuccessful = Result.WasSuccessful();
	//OnRenameComplete.Broadcast(WasSuccessful);
}
