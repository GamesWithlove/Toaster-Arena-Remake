// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Misc/ConfigCacheIni.h" 
#include "Kismet/BlueprintFunctionLibrary.h"
#include "VersionGrabber_TA.generated.h"

/**
 * 
 */
UCLASS()
class SHADOWSCODEPLUGIN_API UVersionGrabber_TA : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
		UFUNCTION(Blueprintpure, meta = (DisplayName = "Game Version", CompactnodeTittle = "GameVersion"), Category = "System Information")
		static FString GetProjectVersion();
	
};
