

#pragma once

#include "CoreMinimal.h"
#include "ReplayStructs.h"
#include "ReplayDataObject.generated.h"


/**
 *
 */


UCLASS(BlueprintType, Blueprintable)
class REPLAYSYSTEM_API UReplayDataObject : public UObject
{

	GENERATED_BODY()

public:
	
	FString DataPlaceHolder = "---PlaceHolderValue---";
	
	FString DataArraySeperator = "---DataArray---";

	FString DataValuesSeperator = "---DataValue---";
	
	FString FinalArraySeperator = "---FinalArraySep---";

	FString NewLineReplacer = " ---NewLineRep--- ";

	FString NewLineReplacerR = " ---NEWLINE-R--- ";

	FString boolDataIdentifier = "---BoolI---";

	FString byteDataIdentifier = "---ByteI---";

	FString intDataIdentifier = "---IntI---";

	FString int64DataIdentifier = "---Int64I---";

	FString floatDataIdentifier = "---FloatI---";

	FString nameDataIdentifier = "---NameI---";

	FString stringDataIdentifier = "---StringI---";

	FString textDataIdentifier = "---TextI---";

	FString vectorDataIdentifier = "---VectorI---";

	FString rotatorDataIdentifier = "---RotatorI---";

	FString transformDataIdentifier = "---TransformI---";

	FString DataIdentifierSeperator = "---IdentifierSep---";

	FString transformDataSeperator = "---TransformDataSep---";


	UPROPERTY(BlueprintReadOnly, Category = "DataObject")
		TArray<FReplayBoolData> boolData;

	UPROPERTY(BlueprintReadOnly, Category = "DataObject")
		TArray<FReplayByteData> byteData;

	UPROPERTY(BlueprintReadOnly, Category = "DataObject")
		TArray<FReplayIntData> intData;

	UPROPERTY(BlueprintReadOnly, Category = "DataObject")
		TArray<FReplayInt64Data> int64Data;

	UPROPERTY(BlueprintReadOnly, Category = "DataObject")
		TArray<FReplayFloatData> floatData;

	UPROPERTY(BlueprintReadOnly, Category = "DataObject")
		TArray<FReplayNameData> nameData;

	UPROPERTY(BlueprintReadOnly, Category = "DataObject")
		TArray<FReplayStringData> stringData;

	UPROPERTY(BlueprintReadOnly, Category = "DataObject")
		TArray<FReplayTextData> textData;

	UPROPERTY(BlueprintReadOnly, Category = "DataObject")
		TArray<FReplayVectorData> vectorData;

	UPROPERTY(BlueprintReadOnly, Category = "DataObject")
		TArray<FReplayRotatorData> rotatorData;

	UPROPERTY(BlueprintReadOnly, Category = "DataObject")
		TArray<FReplayTransformData> transformData;


    UFUNCTION(BlueprintCallable,BlueprintPure, Category = "DataObject")
		int DoesBooleanDataExist (FString Name);

	UFUNCTION(BlueprintCallable,BlueprintPure, Category = "DataObject")
		int DoesByteDataExist (FString Name);

	UFUNCTION(BlueprintCallable,BlueprintPure, Category = "DataObject")
		int DoesIntegerDataExist (FString Name);

	UFUNCTION(BlueprintCallable,BlueprintPure, Category = "DataObject")
		int DoesInteger64DataExist (FString Name);

	UFUNCTION(BlueprintCallable,BlueprintPure, Category = "DataObject")
		int DoesFloatDataExist (FString Name);

	UFUNCTION(BlueprintCallable,BlueprintPure, Category = "DataObject")
		int DoesNameDataExist (FString Name);

	UFUNCTION(BlueprintCallable,BlueprintPure, Category = "DataObject")
		int DoesStringDataExist (FString Name);

	UFUNCTION(BlueprintCallable,BlueprintPure, Category = "DataObject")
		int DoesTextDataExist (FString Name);

	UFUNCTION(BlueprintCallable,BlueprintPure, Category = "DataObject")
		int DoesVectorDataExist (FString Name);

	UFUNCTION(BlueprintCallable,BlueprintPure, Category = "DataObject")
		int DoesRotatorDataExist (FString Name);

	UFUNCTION(BlueprintCallable,BlueprintPure, Category = "DataObject")
		int DoesTransformDataExist (FString Name);
		

	// Adds or updates data of the specified type (Case Sensitive)
	UFUNCTION(BlueprintCallable, Category = "DataObject")
		void AddBooleanData(FString Name,bool Data);
	// Adds or updates data of the specified type (Case Sensitive)
	UFUNCTION(BlueprintCallable, Category = "DataObject")
		void AddByteData(FString Name,TArray<uint8> Data);
	// Adds or updates data of the specified type (Case Sensitive)
	UFUNCTION(BlueprintCallable, Category = "DataObject")
		void AddIntegerData(FString Name,int Data);
	// Adds or updates data of the specified type (Case Sensitive)
	UFUNCTION(BlueprintCallable, Category = "DataObject")
		void AddInteger64Data(FString Name,int64 Data);
	// Adds or updates data of the specified type (Case Sensitive)
	UFUNCTION(BlueprintCallable, Category = "DataObject")
		void AddFloatData(FString Name,float Data);
	// Adds or updates data of the specified type (Case Sensitive)
	UFUNCTION(BlueprintCallable, Category = "DataObject")
		void AddNameData(FString Name,FName Data);
	// Adds or updates data of the specified type (Case Sensitive)
	UFUNCTION(BlueprintCallable, Category = "DataObject")
		void AddStringData(FString Name,FString Data);
	// Adds or updates data of the specified type (Case Sensitive)
	UFUNCTION(BlueprintCallable, Category = "DataObject")
		void AddTextData(FString Name,FText Data);
	// Adds or updates data of the specified type (Case Sensitive)
	UFUNCTION(BlueprintCallable, Category = "DataObject")
		void AddVectorData(FString Name,FVector Data);
	// Adds or updates data of the specified type (Case Sensitive)
	UFUNCTION(BlueprintCallable, Category = "DataObject")
		void AddRotatorData(FString Name,FRotator Data);
	// Adds or updates data of the specified type (Case Sensitive)
	UFUNCTION(BlueprintCallable, Category = "DataObject")
		void AddTransformData(FString Name,FTransform Data);
	
	// Removes data of the specified type (Case Sensitive)		
	UFUNCTION(BlueprintCallable, Category = "DataObject")
		void RemoveBooleanData(FString Name);
	// Removes data of the specified type (Case Sensitive)		
	UFUNCTION(BlueprintCallable, Category = "DataObject")
		void RemoveByteData(FString Name);
	// Removes data of the specified type (Case Sensitive)		
	UFUNCTION(BlueprintCallable, Category = "DataObject")
		void RemoveIntegerData(FString Name);
	// Removes data of the specified type (Case Sensitive)		
	UFUNCTION(BlueprintCallable, Category = "DataObject")
		void RemoveInteger64Data(FString Name);
	// Removes data of the specified type (Case Sensitive)		
	UFUNCTION(BlueprintCallable, Category = "DataObject")
		void RemoveFloatData(FString Name);
	// Removes data of the specified type (Case Sensitive)		
	UFUNCTION(BlueprintCallable, Category = "DataObject")
		void RemoveNameData(FString Name);
	// Removes data of the specified type (Case Sensitive)		
	UFUNCTION(BlueprintCallable, Category = "DataObject")
		void RemoveStringData(FString Name);
	// Removes data of the specified type (Case Sensitive)		
	UFUNCTION(BlueprintCallable, Category = "DataObject")
		void RemoveTextData(FString Name);
	// Removes data of the specified type (Case Sensitive)		
	UFUNCTION(BlueprintCallable, Category = "DataObject")
		void RemoveVectorData(FString Name);
	// Removes data of the specified type (Case Sensitive)		
	UFUNCTION(BlueprintCallable, Category = "DataObject")
		void RemoveRotatorData(FString Name);
	// Removes data of the specified type (Case Sensitive)		
	UFUNCTION(BlueprintCallable, Category = "DataObject")
		void RemoveTransformData(FString Name);

	// Returns the stored value if it exists (Case Sensitive)		
	UFUNCTION(BlueprintCallable, Category = "DataObject")
		bool GetBooleanData(FString Name);
	// Returns the stored value if it exists (Case Sensitive)
	UFUNCTION(BlueprintCallable, Category = "DataObject")
		TArray<uint8> GetByteData(FString Name);
	// Returns the stored value if it exists (Case Sensitive)
	UFUNCTION(BlueprintCallable, Category = "DataObject")
		int GetIntegerData(FString Name);
	// Returns the stored value if it exists (Case Sensitive)
	UFUNCTION(BlueprintCallable, Category = "DataObject")
		int64 GetInteger64Data(FString Name);
	// Returns the stored value if it exists (Case Sensitive)
	UFUNCTION(BlueprintCallable, Category = "DataObject")
		float GetFloatData(FString Name);
	// Returns the stored value if it exists (Case Sensitive)
	UFUNCTION(BlueprintCallable, Category = "DataObject")
		FName GetNameData(FString Name);
	// Returns the stored value if it exists (Case Sensitive)
	UFUNCTION(BlueprintCallable, Category = "DataObject")
		FString GetStringData(FString Name);
	// Returns the stored value if it exists (Case Sensitive)
	UFUNCTION(BlueprintCallable, Category = "DataObject")
		FText GetTextData(FString Name);
	// Returns the stored value if it exists (Case Sensitive)
	UFUNCTION(BlueprintCallable, Category = "DataObject")
		FVector GetVectorData(FString Name);
	// Returns the stored value if it exists (Case Sensitive)
	UFUNCTION(BlueprintCallable, Category = "DataObject")
		FRotator GetRotatorData(FString Name);
	// Returns the stored value if it exists (Case Sensitive)
	UFUNCTION(BlueprintCallable, Category = "DataObject")
		FTransform GetTransformData(FString Name);

	/*Used Internaly to Create/Save meta data for a replay*/
	UFUNCTION(Category = "DataObject")
		FString SaveReplayMetaDataToString();

	/*Used Internaly to Load a meta data for a replay*/
	UFUNCTION(Category = "DataObject")
		bool LoadReplayMetaDataFromString(FString StringDataToParse);



};
