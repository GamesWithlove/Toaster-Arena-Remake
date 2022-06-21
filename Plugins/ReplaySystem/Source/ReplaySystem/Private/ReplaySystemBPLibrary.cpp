// Copyright Epic Games, Inc. All Rights Reserved.

#include "ReplaySystemBPLibrary.h"
#include "ReplaySystem.h"
#include "Engine/World.h"
#include "GameFramework/WorldSettings.h"
#include "Engine/DemoNetDriver.h"
#include "NetworkReplayStreaming.h"
#include "Engine/GameInstance.h"
#include "Engine/Engine.h"
#include "DeleteReplayObject.h"
#include "GetSavedReplaysObject.h"
#include "GoToTimeObject.h"
#include "RenameReplayObject.h"
#include "ReplayDataObject.h"
#include "ReplayPlayerController.h"
#include "Containers/UnrealString.h"
#include "RequestEventsObject.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetStringLibrary.h"
#include "HAL/IConsoleManager.h"


UReplaySystemBPLibrary::UReplaySystemBPLibrary(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UReplaySystemBPLibrary::SetReplaySavePath(UObject* WorldContextObject, const FString& Path)
{
	if (UWorld* World = GEngine->GetWorldFromContextObjectChecked(WorldContextObject))
	{
		TSharedPtr<INetworkReplayStreamer> EnumerateStreamsPtr = FNetworkReplayStreaming::Get().GetFactory().
			CreateReplayStreamer();
		if (EnumerateStreamsPtr)
		{
			EnumerateStreamsPtr->SetDemoPath(Path);
		}
	}
}

FString UReplaySystemBPLibrary::GetReplaySavePath(UObject* WorldContextObject)
{
	FString Path = "PathNotFound";
	if (UWorld* World = GEngine->GetWorldFromContextObjectChecked(WorldContextObject))
	{
		TSharedPtr<INetworkReplayStreamer> EnumerateStreamsPtr = FNetworkReplayStreaming::Get().GetFactory().
			CreateReplayStreamer();
		if (EnumerateStreamsPtr)
		{
			EnumerateStreamsPtr->GetDemoPath(Path);
		}
	}
	return Path;
}

void UReplaySystemBPLibrary::RecordReplay(UObject* WorldContextObject, const FString& ReplayName,
                                          const FString& ReplayFriendlyName)
{
	if (UWorld* World = GEngine->GetWorldFromContextObjectChecked(WorldContextObject))
	{
		if (UGameInstance* GI = Cast<UGameInstance>(World->GetGameInstance()))
		{
			TArray<FString> Options;

			GI->StartRecordingReplay(ReplayName, ReplayFriendlyName, Options);
		}
	}
}

void UReplaySystemBPLibrary::StopRecordingReplay(UObject* WorldContextObject)
{
	if (UWorld* World = GEngine->GetWorldFromContextObjectChecked(WorldContextObject))
	{
		if (IsRecordingReplay(WorldContextObject))
		{
			if (UGameInstance* GI = Cast<UGameInstance>(World->GetGameInstance()))
			{
				GI->StopRecordingReplay();
			}
		}
	}
}

bool UReplaySystemBPLibrary::IsRecordingReplay(UObject* WorldContextObject)
{
	if (UWorld* World = GEngine->GetWorldFromContextObjectChecked(WorldContextObject))
	{
		if (World != nullptr && GetDemoDriver(World) != nullptr)
		{
			return GetDemoDriver(World)->IsRecording();
		}
	}
	return false;
}

UDeleteReplayObject* UReplaySystemBPLibrary::DeleteReplay(UObject* WorldContextObject, const FString& ReplayName)
{
	if (UWorld* World = GEngine->GetWorldFromContextObjectChecked(WorldContextObject))
	{
		UDeleteReplayObject* ReplayDeleteObj = NewObject<UDeleteReplayObject>();
		if (ReplayDeleteObj)
		{
			ReplayDeleteObj->DeleteReplay(ReplayName);
			return ReplayDeleteObj;
		}
	}
	return nullptr;
}

URenameReplayObject* UReplaySystemBPLibrary::RenameReplay(UObject* WorldContextObject, const FString& ReplayName,
                                                          const FString& NewReplayName, const int32 UserIndex)
{
	if (UWorld* World = GEngine->GetWorldFromContextObjectChecked(WorldContextObject))
	{
		URenameReplayObject* ReplayRenameObj = NewObject<URenameReplayObject>();
		if (ReplayRenameObj)
		{
			ReplayRenameObj->RenameReplay(ReplayName, NewReplayName, UserIndex, true);
			return ReplayRenameObj;
		}
	}
	return nullptr;
}

URenameReplayObject* UReplaySystemBPLibrary::RenameReplayFriendly(UObject* WorldContextObject,
                                                                  const FString& ReplayName,
                                                                  const FString& NewFriendlyReplayName,
                                                                  const int32 UserIndex)
{
	if (UWorld* World = GEngine->GetWorldFromContextObjectChecked(WorldContextObject))
	{
		URenameReplayObject* ReplayRenameObj = NewObject<URenameReplayObject>();
		if (ReplayRenameObj)
		{
			ReplayRenameObj->RenameReplay(ReplayName, NewFriendlyReplayName, UserIndex, false);
			return ReplayRenameObj;
		}
	}
	return nullptr;
}

UGetSavedReplaysObject* UReplaySystemBPLibrary::GetSavedReplays(UObject* WorldContextObject)
{
	if (UWorld* World = GEngine->GetWorldFromContextObjectChecked(WorldContextObject))
	{
		UGetSavedReplaysObject* SavedReplaysObj = NewObject<UGetSavedReplaysObject>();
		if (SavedReplaysObj)
		{
			SavedReplaysObj->GetSavedReplays();
			return SavedReplaysObj;
		}
	}
	return nullptr;
}

bool UReplaySystemBPLibrary::PlayRecordedReplay(UObject* WorldContextObject, const FString& ReplayName)
{
	if (UWorld* World = GEngine->GetWorldFromContextObjectChecked(WorldContextObject))
	{
		if (UGameInstance* GI = Cast<UGameInstance>(World->GetGameInstance()))
		{
			TArray<FString> Options;

			return GI->PlayReplay(ReplayName, nullptr, Options);
		}
	}

	return false;
}

UGoToTimeObject* UReplaySystemBPLibrary::RestartReplayPlayback(UObject* WorldContextObject)
{
	UGoToTimeObject* GoToTimeObject = NewObject<UGoToTimeObject>();
	if (!GoToTimeObject)
	{
		return nullptr;
	}

	GoToTimeObject->GoToTime(WorldContextObject, 0.0f, false);

	return GoToTimeObject;
}

UGoToTimeObject* UReplaySystemBPLibrary::GoToSpecificTime(UObject* WorldContextObject, float TimeToGoTo,
                                                          bool bRetainCurrentPauseState)
{
	UGoToTimeObject* GoToTimeObject = NewObject<UGoToTimeObject>();
	if (!GoToTimeObject)
	{
		return nullptr;
	}

	GoToTimeObject->GoToTime(WorldContextObject, TimeToGoTo, bRetainCurrentPauseState);

	return GoToTimeObject;
}

void UReplaySystemBPLibrary::PausePlayback(UObject* WorldContextObject)
{
	if (UWorld* World = GEngine->GetWorldFromContextObjectChecked(WorldContextObject))
	{
		if (AWorldSettings* WorldSettings = World->GetWorldSettings())
		{
			if (UDemoNetDriver* DemoDriver = GetDemoDriver(World))
			{
				if (DemoDriver->ServerConnection->PlayerController->PlayerState)
				{
					World->bIsCameraMoveableWhenPaused = true;
					WorldSettings->SetPauserPlayerState(DemoDriver->ServerConnection->PlayerController->PlayerState);
					if (AReplayPlayerController* ReplayPC = Cast<AReplayPlayerController>(
						UGameplayStatics::GetPlayerController(World, 0)))
					{
						ReplayPC->OnTogglePause(true);
					}
				}
			}
		}
	}
}

void UReplaySystemBPLibrary::ResumePlayback(UObject* WorldContextObject)
{
	if (UWorld* World = GEngine->GetWorldFromContextObjectChecked(WorldContextObject))
	{
		if (AWorldSettings* WorldSettings = World->GetWorldSettings())
		{
			WorldSettings->SetPauserPlayerState(nullptr);
			if (AReplayPlayerController* ReplayPC = Cast<AReplayPlayerController>(
				UGameplayStatics::GetPlayerController(World, 0)))
			{
				ReplayPC->OnTogglePause(false);
			}
		}
	}
}

void UReplaySystemBPLibrary::SetPlaybackSpeed(UObject* WorldContextObject, float Speed)
{
	if (UWorld* World = GEngine->GetWorldFromContextObjectChecked(WorldContextObject))
	{
		if (AWorldSettings* WorldSettings = World->GetWorldSettings())
		{
			WorldSettings->DemoPlayTimeDilation = Speed;
		}
	}
}

float UReplaySystemBPLibrary::GetPlaybackSpeed(UObject* WorldContextObject)
{
	if (UWorld* World = GEngine->GetWorldFromContextObjectChecked(WorldContextObject))
	{
		if (AWorldSettings* WorldSettings = World->GetWorldSettings())
		{
			return WorldSettings->DemoPlayTimeDilation;
		}
	}
	return 1.0f;
}

float UReplaySystemBPLibrary::GetCurrentReplayTime(UObject* WorldContextObject)
{
	if (UWorld* World = GEngine->GetWorldFromContextObjectChecked(WorldContextObject))
	{
		if (UDemoNetDriver* DemoDriver = GetDemoDriver(World))
		{
			return DemoDriver->GetDemoCurrentTime();
		}
		else
		{
			return 0.0f;
		}
	}
	return 0.0f;
}

float UReplaySystemBPLibrary::GetReplayLength(UObject* WorldContextObject)
{
	if (UWorld* World = GEngine->GetWorldFromContextObjectChecked(WorldContextObject))
	{
		if (UDemoNetDriver* DemoDriver = GetDemoDriver(World))
		{
			if (IsRecordingReplay(WorldContextObject))
			{
				return DemoDriver->AccumulatedRecordTime;
			}

			if (IsPlayingReplay(WorldContextObject))
			{
				return DemoDriver->GetDemoTotalTime();
			}
		}
	}
	return 0.0f;
}

bool UReplaySystemBPLibrary::IsPlayingReplay(UObject* WorldContextObject)
{
	if (UWorld* World = GEngine->GetWorldFromContextObjectChecked(WorldContextObject))
	{
		if (UDemoNetDriver* DemoDriver = GetDemoDriver(World))
		{
			return DemoDriver->IsPlaying();
		}
	}
	return false;
}

bool UReplaySystemBPLibrary::IsReplayPlaybackPaused(UObject* WorldContextObject)
{
	if (UWorld* World = GEngine->GetWorldFromContextObjectChecked(WorldContextObject))
	{
		if (IsPlayingReplay(WorldContextObject))
		{
			if (AWorldSettings* WorldSettings = World->GetWorldSettings())
			{
				return WorldSettings->GetPauserPlayerState() != nullptr;
			}
		}
	}
	return false;
}

FString UReplaySystemBPLibrary::GetActiveReplayName(UObject* WorldContextObject)
{
	if (UWorld* World = GEngine->GetWorldFromContextObjectChecked(WorldContextObject))
	{
		if (World != nullptr && GetDemoDriver(World) != nullptr)
		{
			return GetDemoDriver(World)->GetActiveReplayName();
		}
	}
	return "None";
}

bool UReplaySystemBPLibrary::AddEventToActiveReplay(UObject* WorldContextObject, const FString& EventName,
                                                    const FString& Group, UReplayDataObject* DataObject)
{
	if (UWorld* World = GEngine->GetWorldFromContextObjectChecked(WorldContextObject))
	{
		if (IsRecordingReplay(WorldContextObject))
		{
			if (World != nullptr && GetDemoDriver(World) != nullptr)
			{
				FString EmptyString = "";
				TArray<uint8> Data;
				if (DataObject)
				{
					FString ReplayDataString = DataObject->SaveReplayMetaDataToString();
					EmptyString = ReplayDataString;
				}

				GetDemoDriver(World)->AddOrUpdateEvent(EventName, Group, EmptyString, Data);

				return true;
			}
		}
	}
	return false;
}

URequestEventsObject* UReplaySystemBPLibrary::RequestActiveReplayEvents(UObject* WorldContextObject, FString Group,
                                                                        int UserIndex)
{
	if (UWorld* World = GEngine->GetWorldFromContextObjectChecked(WorldContextObject))
	{
		if (!IsRecordingReplay(WorldContextObject) && IsPlayingReplay(WorldContextObject))
		{
			URequestEventsObject* RequestEventsObject = NewObject<URequestEventsObject>();
			if (RequestEventsObject)
			{
				RequestEventsObject->RequestEvents(GetActiveReplayName(WorldContextObject), Group, UserIndex);
				return RequestEventsObject;
			}
		}
	}
	return nullptr;
}

UReplayDataObject* UReplaySystemBPLibrary::CreateReplayDataObject()
{
	UReplayDataObject* DataObject = NewObject<UReplayDataObject>();
	return DataObject;
}

float UReplaySystemBPLibrary::MsToSeconds(const int32 MS)
{
	const float MsAsFloat = UKismetMathLibrary::Conv_IntToFloat(MS);
	const float MsAsSeconds = MsAsFloat / 1000;
	return MsAsSeconds;
}

void UReplaySystemBPLibrary::SpectateActor(UObject* WorldContextObject, AActor* Actor, FBlendSettings BlendSettings)
{
	if (UWorld* World = GEngine->GetWorldFromContextObjectChecked(WorldContextObject))
	{
		if (!Actor)
		{
			return;
		}

		if (UGameplayStatics::GetPlayerController(World, 0))
		{
			if (APlayerController* PC = UGameplayStatics::GetPlayerController(World, 0))
			{
				if (!PC->IsLocalController())
				{
					return;
				}

				//Everything from here is happening only locally/on the client
				PC->SetViewTargetWithBlend(Actor, BlendSettings.BlendTime, BlendSettings.BlendFunction,
				                           BlendSettings.BlendExponent, BlendSettings.bLockOutgoing);
				if (AReplayPlayerController* ReplayPC = Cast<AReplayPlayerController>(
					UGameplayStatics::GetPlayerController(World, 0)))
				{
					ReplayPC->OnSpectateActor(Actor);
					ReplayPC->bIsSpectating = true;
				}
			}
		}
	}
}

void UReplaySystemBPLibrary::StopSpectating(UObject* WorldContextObject, FBlendSettings BlendSettings)
{
	if (UWorld* World = GEngine->GetWorldFromContextObjectChecked(WorldContextObject))
	{
		if (UGameplayStatics::GetPlayerController(World, 0))
		{
			if (APlayerController* PC = UGameplayStatics::GetPlayerController(World, 0))
			{
				if (!PC->IsLocalController())
				{
					return;
				}

				//Everything from here is happening only locally/on the client

				PC->SetViewTargetWithBlend(PC->GetPawn(), BlendSettings.BlendTime, BlendSettings.BlendFunction,
				                           BlendSettings.BlendExponent, BlendSettings.bLockOutgoing);

				if (AReplayPlayerController* ReplayPC = Cast<AReplayPlayerController>(
					UGameplayStatics::GetPlayerController(World, 0)))
				{
					ReplayPC->OnStopSpectateActor();
					ReplayPC->bIsSpectating = false;
				}
			}
		}
	}
}

UDemoNetDriver* UReplaySystemBPLibrary::GetDemoDriver(UObject* WorldContextObject)
{
	if (UWorld* World = GEngine->GetWorldFromContextObjectChecked(WorldContextObject))
	{
#if ENGINE_MINOR_VERSION >= 26
		return World->GetDemoNetDriver();
#elif ENGINE_MINOR_VERSION < 26
		return World->DemoNetDriver;
#endif
	}

	return nullptr;
}

void UReplaySystemBPLibrary::SetMaxRecordHz(UObject* WorldContextObject, float Hz)
{
	if (UWorld* World = GEngine->GetWorldFromContextObjectChecked(WorldContextObject))
	{
		if (UGameplayStatics::GetPlayerController(World, 0))
		{
			FString Command = "demo.recordhz " + UKismetStringLibrary::Conv_FloatToString(Hz);

			UGameplayStatics::GetPlayerController(World, 0)->ConsoleCommand(Command);
		}
	}
}


float UReplaySystemBPLibrary::GetMaxRecordHz()
{
	static const auto CVar = IConsoleManager::Get().FindConsoleVariable(TEXT("demo.recordhz"));
	float value = CVar->GetFloat();
	return value;
}
