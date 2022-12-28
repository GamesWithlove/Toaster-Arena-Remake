// Copyright Epic Games, Inc. All Rights Reserved.

#include "UGCBlueprintLibrary.h"
#include "UGCBaseGameInstance.h"
#include "UGCRegistry.h"
#include "Kismet/GameplayStatics.h"
#include "SimpleUGC.h"

UUGCRegistry * UUGCBlueprintLibrary::GetUGCRegistry(UObject* WorldContextObject)
{
	UUGCBaseGameInstance* GameInstance = Cast<UUGCBaseGameInstance>(UGameplayStatics::GetGameInstance(WorldContextObject));
	return (GameInstance) ? GameInstance->UGCRegistry : nullptr;
}
