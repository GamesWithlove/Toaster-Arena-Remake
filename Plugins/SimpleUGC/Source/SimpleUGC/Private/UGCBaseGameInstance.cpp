// Copyright Epic Games, Inc. All Rights Reserved.

#include "UGCBaseGameInstance.h"

void UUGCBaseGameInstance::Init()
{
	// Instnatiate the registry and find mod packages
	UGCRegistry = NewObject<UUGCRegistry>(this);
	UGCRegistry->FindUGCPackages();
	Super::Init();
}
