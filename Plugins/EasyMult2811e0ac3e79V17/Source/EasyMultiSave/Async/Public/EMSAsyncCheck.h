//Easy Multi Save - Copyright (C) 2026 by Michael Hegemann.  

#pragma once

#include "EMSTypes.h"
#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EMSAsyncCheck.generated.h"

class UEMSObject;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCheckCompletedPin);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCheckFailedPin);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCheckVersionMismatchPin);

UCLASS()
class EASYMULTISAVE_API UEMSAsyncCheck : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

protected:
	UEMSAsyncCheck();

public:

	/* All checked save files are present, loadable and match the required game version. */
	UPROPERTY(BlueprintAssignable, meta = (DisplayName = "Success"))
	FCheckCompletedPin OnCompleted;

	/* One or more files are corrupted or failed to deserialize. */
	UPROPERTY(BlueprintAssignable, meta = (DisplayName = "Invalid Files"))
	FCheckFailedPin OnFailed;

	/** Files exist and are loadable, but the saved version does NOT match the configured game version (requires 'Check Version' to be true). */
	UPROPERTY(BlueprintAssignable, meta = (DisplayName = "Version Mismatch"))
	FCheckVersionMismatchPin OnVersionMismatch;

private:

	UPROPERTY()
	TObjectPtr<UEMSObject> EMS;

	ESaveFileCheckType Type;
	FString SaveFileName;

	uint8 bCheckGameVersion : 1;

	EIntegrityCheckResult CheckResult;

public:

	/**
	* Check the integrity of available files for the current Save Slot. See log for further output information.
	* 
	* @param CheckType - The type of integrity check to perform.
	* @param CustomSaveName - Only relevant when checking for a Custom Save Game.
	* @param bComplexCheck - Compares save files against 'Save Game Version' from the plugin settings.  
	*/
	UFUNCTION(BlueprintCallable, Category = "Easy Multi Save | Files", meta = (DisplayName = "Check Save File Integrity", BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", AdvancedDisplay = "CustomSaveName, bComplexCheck"))
	static UEMSAsyncCheck* CheckSaveFiles(UObject* WorldContextObject, ESaveFileCheckType CheckType, FString CustomSaveName, UPARAM(DisplayName = "Check Version") bool bComplexCheck);

	void Activate() override;

private:

	void StartCheck();
	void CheckPlayer();
	void CheckLevel();
	void CheckCustom();
	void CheckCustomSlot();
	void CompleteCheck();
};
