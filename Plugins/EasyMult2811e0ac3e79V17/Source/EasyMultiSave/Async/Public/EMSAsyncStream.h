//Easy Multi Save - Copyright (C) 2026 by Michael Hegemann.  

#pragma once

#include "EMSData.h"
#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EMSAsyncStream.generated.h"

class UEMSObject;
class FEMSLevelLoader;

UCLASS()
class EASYMULTISAVE_API UEMSAsyncStream : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

protected:
	UEMSAsyncStream();

public:

	UPROPERTY()
	TObjectPtr<const ULevel> StreamingLevel = nullptr;

	ESaveGameMode Mode;

private:

	TSharedPtr<FEMSLevelLoader> Loader;

	UPROPERTY()
	TObjectPtr<UEMSObject> EMS;

	UPROPERTY(Transient)
	TMap<FActorByteKey, TWeakObjectPtr<AActor>> StreamActorsMap;

	UPROPERTY(Transient)
	TArray<FActorSaveData> PrunedActorData;

	uint8 bIsActive : 1;

	int32 TotalActors;

public:

	UFUNCTION()
	static bool InitStreamingLoadTask(UEMSObject* EMSObject, const ULevel* InLevel);

	void Activate() override;
    inline bool IsActive() const { return bIsActive; }

	void ForceDestroy();

private:

	void StartLoad();
	bool SetupLevelActors();

	void FinishLoadingStreamLevel();

	void EndTask(const bool bBroadcastFinish);
	void Deactivate();
};
