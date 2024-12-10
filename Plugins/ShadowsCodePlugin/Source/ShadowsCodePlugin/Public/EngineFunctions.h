// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EngineFunctions.generated.h"

/**
 * 
 */
UCLASS()
class SHADOWSCODEPLUGIN_API UEngineFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	 UFUNCTION(BluePrintCallable, BlueprintPure, Category = "WorldState", meta = (DisplayName = "IsTearingDown", DefaultToSelf = caller, HidePin = caller))
		static void K2_IsTearingDown(UObject * caller, bool& isTearingDown)
	{
		isTearingDown = caller->GetWorld()->bIsTearingDown;
	}
	
};
