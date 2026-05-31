//Easy Multi Save - Copyright (C) 2026 by Michael Hegemann.  

#pragma once

#include "EMSData.h"
#include "EMSActorLoader.h"
#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EMSAsyncLoadGame.generated.h"

class UEMSObject;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAsyncLoadOutputPin);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAsyncLoadFailedPin);

UCLASS()
class EASYMULTISAVE_API UEMSAsyncLoadGame : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

protected:
	UEMSAsyncLoadGame();
	
public:

	/*Executes when at least one load operation(Level or Player) completes.*/
	UPROPERTY(BlueprintAssignable)
	FAsyncLoadOutputPin OnCompleted;

	/*Executes when all load operations have failed.*/
	UPROPERTY(BlueprintAssignable)
	FAsyncLoadFailedPin OnFailed;

	ESaveGameMode Mode;

private:

	TSharedPtr<FEMSLevelLoader> Loader;

	UPROPERTY()
	TObjectPtr<UEMSObject> EMS;

	uint32 Data;

	uint8 bIsActive : 1;
	uint8 bLoadFailed : 1;
	uint8 bFullReload : 1;
	uint8 bAutoLoadLevel : 1;

	FTimerHandle FailedTimerHandle;

public:
	
	/**
	* Main function for Loading the Game. Use the Data checkboxes to define what you want to load.
	*
	* @param Data - Check here what data you want to load.
	* @param bFullReload - If false, load only Actors that have not been loaded. Set to true if you want to reload all saved Actor Data.
	*/
	UFUNCTION(BlueprintCallable, Category = "Easy Multi Save | Actors", meta = (DisplayName = "Load Game Actors", BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject"))
	static UEMSAsyncLoadGame* AsyncLoadActors(UObject* WorldContextObject, UPARAM(meta = (Bitmask, BitmaskEnum = "/Script/EasyMultiSave.ESaveTypeFlags")) int32 Data, bool bFullReload);

	UFUNCTION()
	static void AutoLoadLevelActors(UEMSObject* EMSObject);

	void Activate() override;
	inline bool IsActive() const { return bIsActive && !bLoadFailed; }

	void LoadLevelActors(const FLoaderInitData& LoaderData);

	void FinishLoading();
	void ForceDestroy();

private:

	void PreLoading();
	void StartLoading();

	void PreparePlayer();
	void LoadPlayer();
	void SchedulePrepareLevel();

	void PrepareLevel();
	void LoadGameMode();
	void LoadLevelScripts(); 
	void PrepareLevelActors();
	void StartLoadLevelActors();

	void CompleteLoadingTask();
	void FailLoadingTask();

	void ClearFailTimer();

	inline void SetLoadNotFailed()
	{
		ClearFailTimer();
		bLoadFailed = false;
	}
};
