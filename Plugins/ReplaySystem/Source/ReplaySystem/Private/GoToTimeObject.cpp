// Copyright 2020-Present Oyintare Ebelo. All Rights Reserved.   


#include "GoToTimeObject.h"
#include "Engine.h"
#include "ReplayPlayerController.h"
#include "ReplaySystemBPLibrary.h"
#include "Engine/DemoNetDriver.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
UGoToTimeObject::UGoToTimeObject()
{
 	

}

void UGoToTimeObject::GoToTime(UObject* WorldContextObject, float TimeToGoTo,bool bRetainPauseState)
{
	if (UWorld* World = GEngine->GetWorldFromContextObjectChecked(WorldContextObject))
	{
		if (AWorldSettings* WorldSettings = World->GetWorldSettings())
		{
			// clamp time just in case
			const float ClampedTime = UKismetMathLibrary::FClamp(TimeToGoTo,0.0f,UReplaySystemBPLibrary::GetReplayLength(WorldContextObject));
			
			if (UDemoNetDriver* DemoDriver = UReplaySystemBPLibrary::GetDemoDriver(World))
			{
				if (DemoDriver->ServerConnection->PlayerController->PlayerState)
				{

					AReplayPlayerController * ReplayPC = Cast<AReplayPlayerController>(DemoDriver->ServerConnection->PlayerController);
					if(ReplayPC)
					{
						if(ReplayPC->bIsSpectating)
						{
							AActor* ActorBeingSpectated = Cast<AActor>(ReplayPC->GetViewTarget());
							if(ActorBeingSpectated)
							{
								const FNetworkGUID ActorBeingSpectatedGUID = DemoDriver->GetGUIDForActor(ActorBeingSpectated);
								DemoDriver->AddNonQueuedGUIDForScrubbing(ActorBeingSpectatedGUID);
								
							}							
						}

						AActor* ActorPossessed = Cast<AActor>(ReplayPC->GetPawn());
						if(ActorPossessed)
						{
							const FNetworkGUID SpectatorPawnGUID = DemoDriver->GetGUIDForActor(ActorPossessed);
							DemoDriver->AddNonQueuedGUIDForScrubbing(SpectatorPawnGUID);
						}
					}
					else
					{
						APlayerController * PC = Cast<APlayerController>(DemoDriver->ServerConnection->PlayerController);

						if(PC)
						{
							AActor* ActorPossessed = Cast<AActor>(PC->GetPawn());
							if(ActorPossessed)
							{
								const FNetworkGUID SpectatorPawnGUID = DemoDriver->GetGUIDForActor(ActorPossessed);
								DemoDriver->AddNonQueuedGUIDForScrubbing(SpectatorPawnGUID);
							}
						}
					}

					for ( FActorIterator It( World->GetWorld()); It; ++It )
					{
						if ( It->bAlwaysRelevant )
						{
							const FNetworkGUID ActorGUID = DemoDriver->GetGUIDForActor(*It);
							DemoDriver->AddNonQueuedGUIDForScrubbing(ActorGUID);
						}
					}
					
					bRetainPauseStateBeforeMove  = bRetainPauseState;
					WCO = WorldContextObject;
					
					if(WorldSettings->GetPauserPlayerState())
					{
						bPauseStateBeforeMove = true;
					}
					
					OnGoToTimeDelegate = FOnGotoTimeDelegate::CreateUObject(this,&UGoToTimeObject::OnGoToTimeProcessed);
					
					DemoDriver->GotoTimeInSeconds(ClampedTime,OnGoToTimeDelegate);
    					
				}
			}
		}
	}
}

void UGoToTimeObject::OnGoToTimeProcessed(bool bWasSuccessful)
{
	
	UObject* WorldContext = WCO;
	if (UWorld* World = GEngine->GetWorldFromContextObjectChecked(WorldContext))
	{
		if (AWorldSettings* WorldSettings = World->GetWorldSettings())
		{
			if (UDemoNetDriver* DemoDriver = UReplaySystemBPLibrary::GetDemoDriver(World))
			{
				if(OnGotoTimeComplete.IsBound())
				{
					OnGotoTimeComplete.Broadcast(bWasSuccessful);
				}
				
				if(bRetainPauseStateBeforeMove && !bPauseStateBeforeMove == false)
				{
					UReplaySystemBPLibrary::PausePlayback(WCO);
				}

				if( AReplayPlayerController* ReplayPC = Cast<AReplayPlayerController>(UGameplayStatics::GetPlayerController(World,0)))
				{
					ReplayPC->OnGoToTime(UReplaySystemBPLibrary::GetCurrentReplayTime(WCO));
					ReplayPC->OnStopSpectateActor();
				}
			}
		}
	}
}


