//Easy Multi Save - Copyright (C) 2026 by Michael Hegemann.  

#pragma once

#include "EMSObjectBase.h"
#include "EMSObjectAdv.generated.h"

class FBufferArchive;
class FMemoryReader;
class FMemoryWriter;
class UWorld;

UCLASS(BlueprintType, meta = (DisplayName = "Easy Multi Save Adv.", Keywords = "Save, EMS, EasyMultiSave, EasySave"))
class EASYMULTISAVE_API UEMSObjectAdv : public UEMSObjectBase
{
	GENERATED_BODY()

protected:
	UEMSObjectAdv();

	/** 
	Object Collection 
	This is kept seperate from Actor Saving.
	It will also provide the base for future Unreal features like SceneGraph.
	*/

protected:

	void Initialize(FSubsystemCollectionBase& Collection) override;
	void Deinitialize() override;

public:

	static UEMSObjectAdv* Get(const UObject* WorldContextObject);

	/*
	* Save a Collection of UObjects to a single file. 
	* Provides an efficient way to store any UObject directly.Useful for Subsystems, GameInstance etc.
	*/
	UFUNCTION(BlueprintCallable, Category = "Easy Multi Save | Advanced", meta = (AdvancedDisplay = "FileName"))
	bool SaveObjectCollection(const TArray<FRawObjectSaveData>& Objects, bool bUseSlot, FString FileName);

	/*
	* Load a Collection of UObjects. 
	* Provides an efficient way to store any UObject directly. Useful for Subsystems, GameInstance etc.
	*/
	UFUNCTION(BlueprintCallable, Category = "Easy Multi Save | Advanced", meta = (AdvancedDisplay = "FileName"))
	bool LoadObjectCollection(const TArray<FRawObjectSaveData>& Objects, bool bUseSlot, FString FileName);

private:

	virtual bool ProcessObjectCollection(FMemoryReader& FromBinary, const FSaveObjects& Objects) const override;
	FString GetObjectCollectionPath(const bool bUseSlot, const FString& CollectionFileName) const;
};