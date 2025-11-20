//Easy Multi Save - Copyright (C) 2024 by Michael Hegemann.  

#pragma once

#include "CoreMinimal.h"
#include "EMSData.h"
#include "UObject/ObjectMacros.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EMSAsyncStream.generated.h"

class UEMSObject;

UCLASS()
class EASYMULTISAVE_API UEMSAsyncStream : public UBlueprintAsyncActionBase
{
	GENERATED_UCLASS_BODY()

public:

	UPROPERTY()
	const ULevel* StreamingLevel = nullptr;

	ESaveGameMode Mode;

private:

	UPROPERTY()
	UEMSObject* EMS = nullptr;

	UPROPERTY()
	TArray<AActor*> StreamActors;

	UPROPERTY(Transient)
	TMap<FName, const TWeakObjectPtr<AActor>> StreamActorsMap;

	UPROPERTY(Transient)
	FMultiLevelStreamingData PrunedData;

	uint8 bIsActive : 1;

	int32 TotalActors;
	int32 LoadedActorNum;
	int32 LoadedTotalNum;

public:

	UFUNCTION()
	static bool InitStreamingLoadTask(UEMSObject* EMSObject, const ULevel* InLevel);

	virtual void Activate() override;
    FORCEINLINE bool IsActive() const { return bIsActive; }

private:

	void StartLoad();
	bool SetupLevelActors();

	void LoadStreamingActor(AActor* Actor);

	void FinishLoadingStreamLevel(const bool bSuccess);
	void ScheduleStreamingLoad();
	void DeferredLoadStreamActors();
};
