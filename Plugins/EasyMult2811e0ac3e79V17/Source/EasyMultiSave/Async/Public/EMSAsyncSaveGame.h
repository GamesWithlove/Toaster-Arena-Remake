//Easy Multi Save - Copyright (C) 2026 by Michael Hegemann.  

#pragma once

#include "EMSTypes.h"
#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "Async/TaskGraphInterfaces.h"
#include "HAL/ThreadSafeBool.h"
#include "EMSAsyncSaveGame.generated.h"

class UEMSObject;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAsyncSaveOutputPin);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAsyncSaveFailedPin);

UCLASS()
class EASYMULTISAVE_API UEMSAsyncSaveGame : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

protected:
	UEMSAsyncSaveGame();

public:

	/*Executes when at least one save operation(Level or Player) completes.*/
	UPROPERTY(BlueprintAssignable)
	FAsyncSaveOutputPin OnCompleted;

	/*Executes when all save operations have failed.*/
	UPROPERTY(BlueprintAssignable)
	FAsyncSaveFailedPin OnFailed;

	ESaveGameMode Mode;

private:

	UPROPERTY()
	TObjectPtr<UEMSObject> EMS;

	FGraphEventRef CurrentSaveTask;

	uint32 Data;

	uint8 bIsActive : 1;
	uint8 bFinishedStep : 1;
	uint8 bHasFailed : 1;
	uint8 bAutoSaveLevel : 1;
	uint8 bMemoryOnly : 1;

	FThreadSafeBool bWasPaused = false;

public:

	/**
	* Main function for Saving the Game. Use the Data checkboxes to define what you want to save. 
	*
	* @param Data - Check here what data you want to save. 
	*/
	UFUNCTION(BlueprintCallable, Category = "Easy Multi Save | Actors", meta = (DisplayName = "Save Game Actors", BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject"))
	static UEMSAsyncSaveGame* AsyncSaveActors(UObject* WorldContextObject, UPARAM(meta = (Bitmask, BitmaskEnum = "/Script/EasyMultiSave.ESaveTypeFlags")) int32 Data);

	UFUNCTION()
	static void AutoSaveLevelActors(UEMSObject* EMSObject);

	void Activate() override;
	void SetReadyToDestroy() override;
	UWorld* GetWorld() const override;

	inline bool IsActive() const { return bIsActive; }

	void ForceDestroy();

private:

	void StartSaving();

	void SavePlayer();
	void InternalSavePlayer();

	void SaveLevel();
	void InternalSaveLevel();

	void FinishSaving();
	void CompleteSavingTask();

	void TryMoveToNextStep(ENextStepType Step);

	bool CheckLevelStreaming();

	void ResetPauseOnGameThread(const TWeakObjectPtr<UEMSObject> InWeakEMS);
};


