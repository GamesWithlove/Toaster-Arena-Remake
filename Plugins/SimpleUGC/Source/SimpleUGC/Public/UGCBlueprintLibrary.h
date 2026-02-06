// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "UGCRegistry.h"
#include "UGCBlueprintLibrary.generated.h"


UCLASS() 
class SIMPLEUGC_API UUGCBlueprintLibrary : public UBlueprintFunctionLibrary
{

	GENERATED_BODY()
public:

	// Gets the UGC Registry found in the GameInstance
	UFUNCTION(BlueprintPure, Category = "SimpleUGC", meta = (WorldContext = "WorldContextObject"))
	static UUGCRegistry * GetUGCRegistry(UObject* WorldContextObject);
};
