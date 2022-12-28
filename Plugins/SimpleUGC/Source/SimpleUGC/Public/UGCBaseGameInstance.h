// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "UGCRegistry.h"
#include "UGCBaseGameInstance.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class SIMPLEUGC_API UUGCBaseGameInstance : public UGameInstance
{
	GENERATED_BODY()

	public:
		virtual void Init() override;

		// The Registry that holds information about UGC and assigned class overrides
		UPROPERTY(BlueprintReadOnly, Category = "SimpleUGC")
		UUGCRegistry* UGCRegistry;
	
};
