// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "Engine/Texture2D.h"
#include "ToasterMissionDataV2.generated.h"

USTRUCT(BlueprintType)
struct TOASTER_REBOOT_API FToasterMissionDataV2 : public FTableRowBase
{
public:
	GENERATED_USTRUCT_BODY()
    
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mission Data")
	TSoftObjectPtr<UTexture2D> MissionThumbnail;
    
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mission Data")
	FText MissionName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mission Data")
	FText MissionDescription;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mission Data")
	FText MissionAuthor;
    
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mission Data")
	FName MapName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mission Data")
	bool IsActive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mission Data")
	bool IsCustomMap;
	
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mission Data")
	//TMap<FString, int32> MapSaveData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mission Data")
	float ThumbnailIntensity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mission Data")
	float ThumbnailDensity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mission Data")
	float ThumbnailRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mission Data")
	FVector ThumbnailCenterPoint;
	
	FToasterMissionDataV2();
	~FToasterMissionDataV2();
};
