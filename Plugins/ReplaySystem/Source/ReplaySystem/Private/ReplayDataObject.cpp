// Copyright 2020-Present Oyintare Ebelo. All Rights Reserved.   



#include "ReplayDataObject.h"
#include "Kismet/KismetStringLibrary.h"
#include "HAL/FileManagerGeneric.h"
#include "ReplayStructs.h"
#include "Kismet/KismetTextLibrary.h"


void UReplayDataObject::AddBooleanData(FString Name,bool Data)
{
	FReplayBoolData StructVar;
	StructVar.Name = Name;
	StructVar.Value = Data;
	
	if(const int Index = DoesBooleanDataExist(Name) != -1)
	{
		boolData[Index] = StructVar;
	}
	else
	{
		boolData.Add(StructVar);
	}
	
}


void UReplayDataObject::AddByteData(FString Name,TArray<uint8> Data)
{
	FReplayByteData StructVar;
	StructVar.Name = Name;
	StructVar.Value = Data;
	
	if(const int Index = DoesByteDataExist(Name) != -1)
	{
		byteData[Index] = StructVar;
	}
	else
	{
		byteData.Add(StructVar);
	}
}


void UReplayDataObject::AddIntegerData(FString Name,int Data)
{
	FReplayIntData StructVar;
	StructVar.Name = Name;
	StructVar.Value = Data;
	

	if(const int Index = DoesIntegerDataExist(Name) != -1)
	{
		intData[Index] = StructVar;
	}
	else
	{
		intData.Add(StructVar);
	}
}


void UReplayDataObject::AddInteger64Data(FString Name,int64 Data)
{
	FReplayInt64Data StructVar;
	StructVar.Name = Name;
	StructVar.Value = Data;

	if(const int Index = DoesInteger64DataExist(Name) != -1)
	{
		int64Data[Index] = StructVar;
	}
	else
	{
		int64Data.Add(StructVar);
	}
}


void UReplayDataObject::AddFloatData(FString Name,float Data)
{
	FReplayFloatData StructVar;
	StructVar.Name = Name;
	StructVar.Value = Data;

	if(const int Index = DoesFloatDataExist(Name) != -1)
	{
		floatData[Index] = StructVar;
	}
	else
	{
		floatData.Add(StructVar);
	}
}


void UReplayDataObject::AddNameData(FString Name,FName Data)
{
	FReplayNameData StructVar;
	StructVar.Name = Name;
	StructVar.Value = Data;

	if(const int Index = DoesNameDataExist(Name) != -1)
	{
		nameData[Index] = StructVar;
	}
	else
	{
		nameData.Add(StructVar);
	}
}


void UReplayDataObject::AddStringData(FString Name,FString Data)
{
	FReplayStringData StructVar;
	StructVar.Name = Name;
	StructVar.Value = Data;

	if(const int Index = DoesStringDataExist(Name) != -1)
	{
		stringData[Index] = StructVar;
	}
	else
	{
		stringData.Add(StructVar);
	}
}


void UReplayDataObject::AddTextData(FString Name,FText Data)
{
	FReplayTextData StructVar;
	StructVar.Name = Name;
	StructVar.Value = Data;

	if(const int Index = DoesTextDataExist(Name) != -1)
	{
		textData[Index] = StructVar;
	}
	else
	{
		textData.Add(StructVar);
	}
}


void UReplayDataObject::AddVectorData(FString Name,FVector Data)
{
	FReplayVectorData StructVar;
	StructVar.Name = Name;
	StructVar.Value = Data;

	if(const int Index = DoesVectorDataExist(Name) != -1)
	{
		vectorData[Index] = StructVar;
	}
	else
	{
		vectorData.Add(StructVar);
	}
}


void UReplayDataObject::AddRotatorData(FString Name,FRotator Data)
{
	FReplayRotatorData StructVar;
	StructVar.Name = Name;
	StructVar.Value = Data;

	if(const int Index = DoesRotatorDataExist(Name) != -1)
	{
		rotatorData[Index] = StructVar;
	}
	else
	{
		rotatorData.Add(StructVar);
	}
}


void UReplayDataObject::AddTransformData(FString Name,FTransform Data)
{
	FReplayTransformData StructVar;
	StructVar.Name = Name;
	StructVar.Value = Data;

	if(const int Index = DoesTransformDataExist(Name) != -1)
	{
		transformData[Index] = StructVar;
	}
	else
	{
		transformData.Add(StructVar);
	}
}



int UReplayDataObject::DoesBooleanDataExist (FString Name)
{
	for (int i = 0; i < boolData.Num(); ++i)
	{
		if (boolData[i].Name == Name)
		{
			return i;
		}
	}
	return -1;
}


int UReplayDataObject::DoesByteDataExist (FString Name)
{
	for (int i = 0; i < byteData.Num(); ++i)
	{
		if (byteData[i].Name == Name)
		{
			return i;
		}
	}
	return -1;
}


int UReplayDataObject::DoesIntegerDataExist (FString Name)
{
	for (int i = 0; i < intData.Num(); ++i)
	{
		if (intData[i].Name == Name)
		{
			return i;
		}
	}
	return -1;
}


int UReplayDataObject::DoesInteger64DataExist (FString Name)
{
	for (int i = 0; i < int64Data.Num(); ++i)
	{
		if (int64Data[i].Name == Name)
		{
			return i;
		}
	}
	return -1;
}


int UReplayDataObject::DoesFloatDataExist (FString Name)
{
	for (int i = 0; i < floatData.Num(); ++i)
	{
		if (floatData[i].Name == Name)
		{
			return i;
		}
	}
	return -1;
}


int UReplayDataObject::DoesNameDataExist (FString Name)
{
	for (int i = 0; i < nameData.Num(); ++i)
	{
		if (nameData[i].Name == Name)
		{
			return i;
		}
	}
	return -1;
}


int UReplayDataObject::DoesStringDataExist (FString Name)
{
	for (int i = 0; i < stringData.Num(); ++i)
	{
		if (stringData[i].Name == Name)
		{
			return i;
		}
	}
	return -1;
}


int UReplayDataObject::DoesTextDataExist (FString Name)
{
	for (int i = 0; i < textData.Num(); ++i)
	{
		if (textData[i].Name == Name)
		{
			return i;
		}
	}
	return -1;
}


int UReplayDataObject::DoesVectorDataExist (FString Name)
{
	for (int i = 0; i < vectorData.Num(); ++i)
	{
		if (vectorData[i].Name == Name)
		{
			return i;
		}
	}
	return -1;
}


int UReplayDataObject::DoesRotatorDataExist (FString Name)
{
	for (int i = 0; i < stringData.Num(); ++i)
	{
		if (stringData[i].Name == Name)
		{
			return i;
		}
	}
	return -1;
}


int UReplayDataObject::DoesTransformDataExist (FString Name)
{
	for (int i = 0; i < transformData.Num(); ++i)
	{
		if (transformData[i].Name == Name)
		{
			return i;
		}
	}
	return -1;
}


void UReplayDataObject::RemoveBooleanData(FString Name)
{
	if (const int Index = DoesBooleanDataExist(Name) != -1)
	{
		boolData.RemoveAt(Index);
	}
}


void UReplayDataObject::RemoveByteData(FString Name)
{
	if (const int Index = DoesByteDataExist(Name) != -1)
	{
		byteData.RemoveAt(Index);
	}
}


void UReplayDataObject::RemoveIntegerData(FString Name)
{
	if (const int Index = DoesIntegerDataExist(Name) != -1)
	{
		intData.RemoveAt(Index);
	}
}


void UReplayDataObject::RemoveInteger64Data(FString Name)
{
	if (const int Index = DoesInteger64DataExist(Name) != -1)
	{
		int64Data.RemoveAt(Index);
	}
}


void UReplayDataObject::RemoveFloatData(FString Name)
{
	if (const int Index = DoesFloatDataExist(Name) != -1)
	{
		floatData.RemoveAt(Index);
	}
}


void UReplayDataObject::RemoveNameData(FString Name)
{
	if (const int Index = DoesNameDataExist(Name) != -1)
	{
		nameData.RemoveAt(Index);
	}
}


void UReplayDataObject::RemoveStringData(FString Name)
{
	if (const int Index = DoesStringDataExist(Name) != -1)
	{
		stringData.RemoveAt(Index);
	}
}


void UReplayDataObject::RemoveTextData(FString Name)
{
	if (const int Index = DoesTextDataExist(Name) != -1)
	{
		textData.RemoveAt(Index);
	}
}


void UReplayDataObject::RemoveVectorData(FString Name)
{
	if (const int Index = DoesVectorDataExist(Name) != -1)
	{
		vectorData.RemoveAt(Index);
	}
}


void UReplayDataObject::RemoveRotatorData(FString Name)
{
	if (const int Index = DoesRotatorDataExist(Name) != -1)
	{
		rotatorData.RemoveAt(Index);
	}
}


void UReplayDataObject::RemoveTransformData(FString Name)
{
	if (const int Index = DoesTransformDataExist(Name) != -1)
	{
		transformData.RemoveAt(Index);
	}
}

bool UReplayDataObject::GetBooleanData(FString Name)
{
	bool bReturnValue = false;

	for (FReplayBoolData Data : boolData)
	{
		if (Data.Name == Name)
		{
			return Data.Value;
		}
	}

	return bReturnValue;
}


TArray<uint8> UReplayDataObject::GetByteData(FString Name)
{
	TArray<uint8> ReturnValue;

	for (FReplayByteData Data : byteData)
	{
		if (Data.Name == Name)
		{
			return Data.Value;
		}
	}

	return ReturnValue;
}


int UReplayDataObject::GetIntegerData(FString Name)
{
	int ReturnValue = 0;

	for (FReplayIntData Data : intData)
	{
		if (Data.Name == Name)
		{
			return Data.Value;
		}
	}

	return ReturnValue;
}


int64 UReplayDataObject::GetInteger64Data(FString Name)
{
	int64 ReturnValue = 0;
	
	for (FReplayInt64Data Data : int64Data)
	{
		if (Data.Name == Name)
		{
			return Data.Value;
		}
	}

	return ReturnValue;
}


float UReplayDataObject::GetFloatData(FString Name)
{
	float ReturnValue = 0.0;

	for (FReplayFloatData Data : floatData)
	{
		if (Data.Name == Name)
		{
			return Data.Value;
		}
	}

	return ReturnValue;
}


FName UReplayDataObject::GetNameData(FString Name)
{
	FName ReturnValue = "";

	for (FReplayNameData Data : nameData)
	{
		if (Data.Name == Name)
		{
			return Data.Value;
		}
	}

	return ReturnValue;
}


FString UReplayDataObject::GetStringData(FString Name)
{
	FString ReturnValue = "";

	for (FReplayStringData Data : stringData)
	{
		if (Data.Name == Name)
		{
			return Data.Value;
		}
	}

	return ReturnValue;
}


FText UReplayDataObject::GetTextData(FString Name)
{
	FText ReturnValue;

	for (FReplayTextData Data : textData)
	{
		if (Data.Name == Name)
		{
			return Data.Value;
		}
	}

	return ReturnValue;
}


FVector UReplayDataObject::GetVectorData(FString Name)
{
	FVector ReturnValue = FVector();

	for (FReplayVectorData Data : vectorData)
	{
		if (Data.Name == Name)
		{
			return Data.Value;
		}
	}

	return ReturnValue;
}


FRotator UReplayDataObject::GetRotatorData(FString Name)
{
	FRotator ReturnValue = FRotator();

	for (FReplayRotatorData Data : rotatorData)
	{
		if (Data.Name == Name)
		{
			return Data.Value;
		}
	}

	return ReturnValue;
}


FTransform UReplayDataObject::GetTransformData(FString Name)
{
	FTransform ReturnValue = FTransform();

	for (FReplayTransformData Data : transformData)
	{
		if (Data.Name == Name)
		{
			return Data.Value;
		}
	}

	return ReturnValue;
}


FString UReplayDataObject::SaveReplayMetaDataToString()
{
	//First Write all structs into strings

	TArray<FString> BoolArray;

	for (FReplayBoolData Data : boolData)
	{
		FString DataName = Data.Name;
		FString DataValue = UKismetStringLibrary::Conv_BoolToString(Data.Value);
		
		BoolArray.Add(DataName + DataValuesSeperator + DataValue);
	}


	TArray<FString> ByteArray;

	for (FReplayByteData Data : byteData)
	{
		FString DataName = Data.Name;
		FString DataValue;

		FUTF8ToTCHAR Src = FUTF8ToTCHAR((const ANSICHAR*) (Data.Value.GetData() + 0), Data.Value.Num());
		DataValue.AppendChars(Src.Get(), Src.Length());
		
		ByteArray.Add(DataName + DataValuesSeperator + DataValue);
	}


	TArray<FString> IntArray;

	for (FReplayIntData Data : intData)
	{
		FString DataName = Data.Name;
		FString DataValue = UKismetStringLibrary::Conv_IntToString(Data.Value);
		
		IntArray.Add(DataName + DataValuesSeperator + DataValue);
	}

	TArray<FString> Int64Array;

	for (FReplayInt64Data Data : int64Data)
	{
		FString DataName = Data.Name;
		FString DataValue = UKismetStringLibrary::Conv_IntToString(Data.Value);
		
		Int64Array.Add(DataName + DataValuesSeperator + DataValue);
	}

	TArray<FString> FloatArray;

	for (FReplayFloatData Data : floatData)
	{
		FString DataName = Data.Name;

#if  ENGINE_MAJOR_VERSION <= 4
		FString DataValue = UKismetStringLibrary::Conv_FloatToString(Data.Value);
#else
		FString DataValue = FString::SanitizeFloat(Data.Value);
#endif
		
		
		FloatArray.Add(DataName + DataValuesSeperator + DataValue);
	}

	TArray<FString> NameArray;

	for (FReplayNameData Data : nameData)
	{
		FString DataName = Data.Name;
		FString DataValue = UKismetStringLibrary::Conv_NameToString(Data.Value);
		
		NameArray.Add(DataName + DataValuesSeperator + DataValue);
	}

	TArray<FString> StringArray;

	for (FReplayStringData Data : stringData)
	{
		FString DataName = Data.Name;
		FString DataValue = Data.Value;
		
		StringArray.Add(DataName + DataValuesSeperator + DataValue);
	}

	TArray<FString> TextArray;

	for (FReplayTextData Data : textData)
	{
		FString DataName = Data.Name;
		FString DataValue = UKismetTextLibrary::Conv_TextToString(Data.Value);
		
		TextArray.Add(DataName + DataValuesSeperator + DataValue);
	}

	TArray<FString> VectorArray;

	for (FReplayVectorData Data : vectorData)
	{
		FString DataName = Data.Name;
		FString DataValue = UKismetStringLibrary::Conv_VectorToString(Data.Value);
		
		VectorArray.Add(DataName + DataValuesSeperator + DataValue);
	}

	TArray<FString> RotatorArray;

	for (FReplayRotatorData Data : rotatorData)
	{
		FString DataName = Data.Name;
		FString DataValue = UKismetStringLibrary::Conv_RotatorToString(Data.Value);
		
		RotatorArray.Add(DataName + DataValuesSeperator + DataValue);
	}

	TArray<FString> TransformArray;

	for (FReplayTransformData Data : transformData)
	{
		FString DataName = Data.Name;
		FString DataVectorPart = UKismetStringLibrary::Conv_VectorToString(Data.Value.GetLocation());
		FString DataRotatorPart = UKismetStringLibrary::Conv_RotatorToString(Data.Value.GetRotation().Rotator());
		FString DataScalePart = UKismetStringLibrary::Conv_VectorToString(Data.Value.GetScale3D());

		TArray<FString> DataValues;
		DataValues.Add(DataVectorPart);
		DataValues.Add(DataRotatorPart);
		DataValues.Add(DataScalePart);
		
		FString DataValue = UKismetStringLibrary::JoinStringArray(DataValues,transformDataSeperator);
		
		TransformArray.Add(DataName + DataValuesSeperator + DataValue);
	}




	FString BoolArrayAsSingleString = UKismetStringLibrary::JoinStringArray(BoolArray, DataArraySeperator);
	FString ByteArrayAsSingleString = UKismetStringLibrary::JoinStringArray(ByteArray, DataArraySeperator);
	FString IntArrayAsSingleString = UKismetStringLibrary::JoinStringArray(IntArray, DataArraySeperator);
	FString Int64ArrayAsSingleString = UKismetStringLibrary::JoinStringArray(Int64Array, DataArraySeperator);
	FString FloatArrayAsSingleString = UKismetStringLibrary::JoinStringArray(FloatArray, DataArraySeperator);
	FString NameArrayAsSingleString = UKismetStringLibrary::JoinStringArray(NameArray, DataArraySeperator);
	FString StringArrayAsSingleString = UKismetStringLibrary::JoinStringArray(StringArray, DataArraySeperator);
	FString TextArrayAsSingleString = UKismetStringLibrary::JoinStringArray(TextArray, DataArraySeperator);
	FString VectorArrayAsSingleString = UKismetStringLibrary::JoinStringArray(VectorArray, DataArraySeperator);
	FString RotatorArrayAsSingleString = UKismetStringLibrary::JoinStringArray(RotatorArray, DataArraySeperator);
	FString TransformArrayAsSingleString = UKismetStringLibrary::JoinStringArray(TransformArray, DataArraySeperator);
	
	TArray<FString> FinalStringArray;
	FinalStringArray.Add(boolDataIdentifier + DataIdentifierSeperator + BoolArrayAsSingleString);
	FinalStringArray.Add(byteDataIdentifier + DataIdentifierSeperator + ByteArrayAsSingleString);
	FinalStringArray.Add(intDataIdentifier + DataIdentifierSeperator  + IntArrayAsSingleString);
	FinalStringArray.Add(int64DataIdentifier + DataIdentifierSeperator  + Int64ArrayAsSingleString);
	FinalStringArray.Add(floatDataIdentifier + DataIdentifierSeperator  + FloatArrayAsSingleString);
	FinalStringArray.Add(nameDataIdentifier + DataIdentifierSeperator  + NameArrayAsSingleString);
	FinalStringArray.Add(stringDataIdentifier + DataIdentifierSeperator + StringArrayAsSingleString);
	FinalStringArray.Add(textDataIdentifier + DataIdentifierSeperator  + TextArrayAsSingleString);
	FinalStringArray.Add(vectorDataIdentifier + DataIdentifierSeperator  + VectorArrayAsSingleString);
	FinalStringArray.Add(rotatorDataIdentifier + DataIdentifierSeperator  + RotatorArrayAsSingleString);
	FinalStringArray.Add(transformDataIdentifier + DataIdentifierSeperator  + TransformArrayAsSingleString);

	FString FinalString = UKismetStringLibrary::JoinStringArray(FinalStringArray, FinalArraySeperator);

	return FinalString;
}

bool UReplayDataObject::LoadReplayMetaDataFromString(FString StringDataToParse)
{
	boolData.Empty();
	byteData.Empty();
	intData.Empty();
	int64Data.Empty();
	floatData.Empty();
	nameData.Empty();
	stringData.Empty();
	textData.Empty();
	vectorData.Empty();
	rotatorData.Empty();
	transformData.Empty();



	TArray<FString> LoadedStringArray = UKismetStringLibrary::ParseIntoArray(StringDataToParse, FinalArraySeperator);

	for (FString Field : LoadedStringArray)
	{

		
		FString DataIdentifier;
		FString DataPart;

		UKismetStringLibrary::Split(Field,DataIdentifierSeperator,DataIdentifier,DataPart);

		TArray<FString> DataArray = UKismetStringLibrary::ParseIntoArray(DataPart,DataArraySeperator);

		for (FString DataItem : DataArray)
		{
			if (DataIdentifier == boolDataIdentifier)
			{
				FReplayBoolData LoadedData;
				FString Name;
				FString Value;
				UKismetStringLibrary::Split(DataItem,DataValuesSeperator,Name, Value);
				LoadedData.Name = Name;
				if(Value == "true")
				{
					LoadedData.Value = true;
				}
				AddBooleanData(LoadedData.Name,LoadedData.Value);
			}

			if (DataIdentifier == byteDataIdentifier)
			{
				FReplayByteData LoadedData;
				FString Name;
				FString Value;
				UKismetStringLibrary::Split(DataItem,DataValuesSeperator,Name, Value);
				LoadedData.Name = Name;
				TArray<uint8> ByteArray;
				
				if(!(Value.Len() <= 0))
				{
					FTCHARToUTF8 Src = FTCHARToUTF8(Value.GetCharArray().GetData());
					ByteArray.Append((uint8*) Src.Get(), Src.Length());
				}

				LoadedData.Value = ByteArray;
				AddByteData(LoadedData.Name,LoadedData.Value);
			}

			if (DataIdentifier == intDataIdentifier)
			{
				FReplayIntData LoadedData;
				FString Name;
				FString Value;
				UKismetStringLibrary::Split(DataItem,DataValuesSeperator,Name, Value);
				LoadedData.Name = Name;
				LoadedData.Value = UKismetStringLibrary::Conv_StringToInt(Value);
				
				AddIntegerData(LoadedData.Name,LoadedData.Value);
			}

			if (DataIdentifier == int64DataIdentifier)
			{
				FReplayInt64Data LoadedData;
				FString Name;
				FString Value;
				UKismetStringLibrary::Split(DataItem,DataValuesSeperator,Name, Value);
				LoadedData.Name = Name;
				LoadedData.Value = UKismetStringLibrary::Conv_StringToInt(Value);
				
				AddInteger64Data(LoadedData.Name,LoadedData.Value);
			}

			if (DataIdentifier == floatDataIdentifier)
			{
				FReplayFloatData LoadedData;
				FString Name;
				FString Value;
				UKismetStringLibrary::Split(DataItem,DataValuesSeperator,Name, Value);
				LoadedData.Name = Name;

#if  ENGINE_MAJOR_VERSION <= 4
				LoadedData.Value = UKismetStringLibrary::Conv_StringToFloat(Value);
#else
				LexFromString(LoadedData.Value,*Value);
#endif
				
				
				AddFloatData(LoadedData.Name,LoadedData.Value);
			}

			if (DataIdentifier == nameDataIdentifier)
			{
				FReplayNameData LoadedData;
				FString Name;
				FString Value;
				UKismetStringLibrary::Split(DataItem,DataValuesSeperator,Name, Value);
				LoadedData.Name = Name;
				LoadedData.Value = UKismetStringLibrary::Conv_StringToName(Value);
				
				AddNameData(LoadedData.Name,LoadedData.Value);
			}

			if (DataIdentifier == stringDataIdentifier)
			{
				FReplayStringData LoadedData;
				FString Name;
				FString Value;
				UKismetStringLibrary::Split(DataItem,DataValuesSeperator,Name, Value);
				LoadedData.Name = Name;
				LoadedData.Value = Value;
				
				AddStringData(LoadedData.Name,LoadedData.Value);
			}

			if (DataIdentifier == textDataIdentifier)
			{
				FReplayTextData LoadedData;
				FString Name;
				FString Value;
				UKismetStringLibrary::Split(DataItem,DataValuesSeperator,Name, Value);
				LoadedData.Name = Name;
				LoadedData.Value = UKismetTextLibrary::Conv_StringToText(Value);
				
				AddTextData(LoadedData.Name,LoadedData.Value);
			}

			if (DataIdentifier == vectorDataIdentifier)
			{
				FReplayVectorData LoadedData;
				FString Name;
				FString Value;
				UKismetStringLibrary::Split(DataItem,DataValuesSeperator,Name, Value);
				LoadedData.Name = Name;
				FVector ConvertedValue;
				bool bWasSuccessful;
				UKismetStringLibrary::Conv_StringToVector(Value,ConvertedValue,bWasSuccessful);
				LoadedData.Value  = ConvertedValue; 
				
				AddVectorData(LoadedData.Name,LoadedData.Value);
			}

			if (DataIdentifier == rotatorDataIdentifier)
			{
				FReplayRotatorData LoadedData;
				FString Name;
				FString Value;
				UKismetStringLibrary::Split(DataItem,DataValuesSeperator,Name, Value);
				LoadedData.Name = Name;
				FRotator ConvertedValue;
				bool bWasSuccessful;
				UKismetStringLibrary::Conv_StringToRotator(Value,ConvertedValue,bWasSuccessful);
				LoadedData.Value  = ConvertedValue; 
				
				AddRotatorData(LoadedData.Name,LoadedData.Value);
			}

			if (DataIdentifier == transformDataIdentifier)
			{
				FReplayTransformData LoadedData;
				FString Name;
				FString Value;
				UKismetStringLibrary::Split(DataItem,DataValuesSeperator,Name, Value);
				LoadedData.Name = Name;

				TArray<FString> DataComponents = UKismetStringLibrary::ParseIntoArray(Value,transformDataSeperator);
				
				FVector ConvertedVectorValue;
				bool bWasSuccessful;
				UKismetStringLibrary::Conv_StringToVector(DataComponents[0],ConvertedVectorValue,bWasSuccessful);

				FRotator ConvertedRotatorValue;
				UKismetStringLibrary::Conv_StringToRotator(DataComponents[1],ConvertedRotatorValue,bWasSuccessful);

				FVector ConvertedScaleValue;
				UKismetStringLibrary::Conv_StringToVector(DataComponents[2],ConvertedScaleValue,bWasSuccessful);
				LoadedData.Value  = FTransform(ConvertedRotatorValue,ConvertedVectorValue,ConvertedScaleValue); 
				
				AddTransformData(LoadedData.Name,LoadedData.Value);
			}
		}
	}
	return true;
}