//Easy Multi Save - Copyright (C) 2024 by Michael Hegemann.  

#pragma once

#include "CoreMinimal.h"
#include "EMSData.h"
#include "UObject/ObjectMacros.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EMSAsyncCheck.generated.h"

class UEMSObject;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCheckCompletedPin);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCheckFailedPin);

UCLASS()
class EASYMULTISAVE_API UEMSAsyncCheck : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintAssignable)
	FCheckCompletedPin OnCompleted;

	UPROPERTY(BlueprintAssignable)
	FCheckFailedPin OnFailed;

private:

	UPROPERTY()
	UEMSObject* EMS = nullptr;

	ESaveFileCheckType Type = ESaveFileCheckType::CheckForGame;
	bool bCheckFailed = false;

public:

	/**
	* Check the integrity of available files for the current Save Slot. See log for further output information.
	* Verifies Player, Level and Slot files. Currently disabled for Custom Save Objects. 
	* 
	* @param CheckType - The type of versioning check to perform.
	*/
	UFUNCTION(BlueprintCallable, Category = "Easy Multi Save | Files", meta = (DisplayName = "Check Save File Version", BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject"))
	static UEMSAsyncCheck* CheckSaveFiles(UObject* WorldContextObject, ESaveFileCheckType CheckType);

	virtual void Activate() override;

private:

	void StartCheck();
	void CheckPlayer();
	void CheckLevel();
	void CompleteCheck();
};
