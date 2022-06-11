/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamInventory
*/

#include "SteamInventory/SteamInventory.h"
#include "SteamInventory/SteamInventoryAsyncTasks.h"
#include "SteamCorePluginPrivatePCH.h"

void UInventory::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	OnSteamInventoryResultReadyCallback.Register(this, &UInventory::OnSteamInventoryResultReady);
	OnSteamInventoryFullUpdateCallback.Register(this, &UInventory::OnSteamInventoryFullUpdate);
	OnSteamInventoryDefinitionUpdateCallback.Register(this, &UInventory::OnSteamInventoryDefinitionUpdate);
	OnSteamInventoryStartPurchaseResultCallback.Register(this, &UInventory::OnSteamInventoryStartPurchaseResult);
	OnSteamInventoryRequestPricesResultCallback.Register(this, &UInventory::OnSteamInventoryRequestPricesResult);
	OnSteamInventoryEligiblePromoItemDefIDsCallback.Register(this, &UInventory::OnSteamInventoryEligiblePromoItemDefIDs);

	if (IsRunningDedicatedServer())
	{
		OnSteamInventoryResultReadyCallback.SetGameserverFlag();
		OnSteamInventoryFullUpdateCallback.SetGameserverFlag();
		OnSteamInventoryDefinitionUpdateCallback.SetGameserverFlag();
		OnSteamInventoryStartPurchaseResultCallback.SetGameserverFlag();
		OnSteamInventoryRequestPricesResultCallback.SetGameserverFlag();
		OnSteamInventoryEligiblePromoItemDefIDsCallback.SetGameserverFlag();
	}
}

void UInventory::Deinitialize()
{
	OnSteamInventoryResultReadyCallback.Unregister();
	OnSteamInventoryFullUpdateCallback.Unregister();
	OnSteamInventoryDefinitionUpdateCallback.Unregister();
	OnSteamInventoryStartPurchaseResultCallback.Unregister();
	OnSteamInventoryRequestPricesResultCallback.Unregister();
	OnSteamInventoryEligiblePromoItemDefIDsCallback.Unregister();

	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

ESteamResult UInventory::GetResultStatus(FSteamInventoryResult Handle)
{
	LogVeryVerbose("");

	ESteamResult Result = ESteamResult::AccessDenied;

	if (GetInventory())
	{
		Result = _SteamResult(GetInventory()->GetResultStatus(Handle));
	}

	return Result;
}

bool UInventory::GetResultItems(FSteamInventoryResult Handle, TArray<FSteamItemDetails>& OutItems)
{
	LogVeryVerbose("");

	bool bResult = false;
	OutItems.Empty();

	if (GetInventory())
	{
		uint32 ArraySize = 0;

		if (GetInventory()->GetResultItems(Handle, nullptr, &ArraySize))
		{
			TArray<SteamItemDetails_t> DataArray;
			DataArray.SetNum(ArraySize);

			bResult = GetInventory()->GetResultItems(Handle, DataArray.GetData(), &ArraySize);

			for (int32 i = 0; i < DataArray.Num(); i++)
			{
				OutItems.Add(DataArray[i]);
			}
		}
	}

	return bResult;
}

int32 UInventory::GetResultTimestamp(FSteamInventoryResult Handle)
{
	LogVeryVerbose("");

	int32 Result = 0;

	if (GetInventory())
	{
		Result = GetInventory()->GetResultTimestamp(Handle);
	}

	return Result;
}

bool UInventory::CheckResultSteamID(FSteamInventoryResult Handle, FSteamID SteamIDExpected)
{
	LogVerbose("");

	bool bResult = false;

	if (GetInventory())
	{
		bResult = GetInventory()->CheckResultSteamID(Handle, SteamIDExpected);
	}

	return bResult;
}

void UInventory::DestroyResult(FSteamInventoryResult Handle)
{
	LogVerbose("");

	if (GetInventory())
	{
		GetInventory()->DestroyResult(Handle);
	}
}

bool UInventory::GetAllItems(FSteamInventoryResult& Handle)
{
	LogVerbose("");

	bool bResult = false;

	if (GetInventory())
	{
		SteamInventoryResult_t Result;

		bResult = GetInventory()->GetAllItems(&Result);
		Handle = Result;
	}

	return bResult;
}

bool UInventory::GetItemsByID(FSteamInventoryResult& OutInventoryResult, TArray<FSteamItemInstanceID> InstanceIDs)
{
	LogVerbose("");

	bool bResult = false;
	OutInventoryResult = FSteamInventoryResult();

	if (GetInventory())
	{
		if (GetInventory())
		{
			TArray<SteamItemInstanceID_t> DataArray;
			DataArray.SetNum(InstanceIDs.Num());
			SteamInventoryResult_t InventoryResult;

			for (int32 i = 0; i < InstanceIDs.Num(); i++)
			{
				DataArray[i] = InstanceIDs[i];
			}

			bResult = GetInventory()->GetItemsByID(&InventoryResult, DataArray.GetData(), DataArray.Num());
			OutInventoryResult = InventoryResult;
		}
	}

	return bResult;
}

bool UInventory::GetItemPrice(FSteamItemDef ItemDef, int32& OutPrice, int32& OutBasePrice)
{
	LogVerbose("");

	bool bResult = false;
	uint64 Price = 0;
	uint64 BasePrice = 0;

	if (GetInventory())
	{
		bResult = GetInventory()->GetItemPrice(ItemDef, &Price, &BasePrice);
	}

	OutPrice = Price;
	OutBasePrice = BasePrice;

	return bResult;
}

bool UInventory::GetItemsWithPrices(TArray<FSteamItemDef>& OutItemDefs, TArray<int32>& OutPrices, TArray<int32>& OutBasePrices)
{
	LogVerbose("");

	bool bResult = false;
	OutItemDefs.Empty();
	OutPrices.Empty();
	OutBasePrices.Empty();

	if (GetInventory())
	{
		if (GetInventory())
		{
			int32 ArraySize = GetInventory()->GetNumItemsWithPrices();

			TArray<SteamItemDef_t> SteamItemDefs;
			TArray<uint64> ItemPrices;
			TArray<uint64> BasePrices;
			SteamItemDefs.SetNum(ArraySize);
			ItemPrices.SetNum(ArraySize);
			BasePrices.SetNum(ArraySize);

			bResult = GetInventory()->GetItemsWithPrices(SteamItemDefs.GetData(), ItemPrices.GetData(), BasePrices.GetData(), ArraySize);

			if (bResult)
			{
				for (int32 i = 0; i < ArraySize; i++)
				{
					OutItemDefs.Add(SteamItemDefs[i]);
					OutPrices.Add(ItemPrices[i]);
					OutBasePrices.Add(BasePrices[i]);
				}
			}
		}
	}

	return bResult;
}

int32 UInventory::GetNumItemsWithPrices()
{
	LogVerbose("");

	int32 Result = 0;

	if (GetInventory())
	{
		Result = GetInventory()->GetNumItemsWithPrices();
	}

	return Result;
}

bool UInventory::GetResultItemProperty(FSteamInventoryResult Handle, int32 ItemIndex, FString PropertyName, FString& OutValue)
{
	LogVerbose("");

	bool bResult = false;
	OutValue.Empty();

	if (GetInventory())
	{
		const FTCHARToUTF8 ConvertedPropertyName(*PropertyName);

		uint32 DataSize = 0;

		GetInventory()->GetResultItemProperty(Handle, ItemIndex, ConvertedPropertyName.Get(), nullptr, &DataSize);

		TArray<char> DataArray;
		DataArray.SetNum(DataSize);

		bResult = GetInventory()->GetResultItemProperty(Handle, ItemIndex, ConvertedPropertyName.Get(), DataArray.GetData(), &DataSize);

		if (bResult)
		{
			OutValue = UTF8_TO_TCHAR(DataArray.GetData());
		}
	}

	return bResult;
}

bool UInventory::SerializeResult(FSteamInventoryResult Handle, TArray<uint8>& OutBuffer)
{
	LogVerbose("");

	bool bResult = false;
	OutBuffer.Empty();

	if (GetInventory())
	{
		uint32 DataSize = 0;

		// get the size of the array
		if (GetInventory()->SerializeResult(Handle, nullptr, &DataSize))
		{
			OutBuffer.SetNum(DataSize);
			bResult = GetInventory()->SerializeResult(Handle, OutBuffer.GetData(), &DataSize);
		}
	}

	return bResult;
}

void UInventory::StartPurchase(const FOnSteamInventoryStartPurchaseResult& Callback, const TArray<FSteamItemDef> ItemDefs, const TArray<int32> Quantity)
{
	LogVerbose("");

	if (GetInventory())
	{
		FOnlineAsyncTaskSteamCoreInventoryStartPurchaseResult* Task = new FOnlineAsyncTaskSteamCoreInventoryStartPurchaseResult(this, Callback, ItemDefs, Quantity);
		QueueAsyncTask(Task);
	}
}

bool UInventory::DeserializeResult(FSteamInventoryResult& OutResult, TArray<uint8> Buffer, bool bReservedMustBeFalse)
{
	LogVerbose("");

	bool bResult = false;
	OutResult = FSteamInventoryResult();

	if (GetInventory())
	{
		SteamInventoryResult_t SteamInventoryResult;

		bResult = GetInventory()->DeserializeResult(&SteamInventoryResult, Buffer.GetData(), Buffer.Num(), bReservedMustBeFalse);

		if (bResult)
		{
			OutResult = SteamInventoryResult;
		}
	}

	return bResult;
}

bool UInventory::GenerateItems(FSteamInventoryResult& OutResult, TArray<FSteamItemDef> ItemDefs, TArray<int32> Quantities)
{
	LogVerbose("");

	bool bResult = false;
	OutResult = FSteamInventoryResult();

	if (GetInventory())
	{
		SteamInventoryResult_t SteamInventoryResult;

		TArray<SteamItemDef_t> SteamItemDefs;
		TArray<uint32> ItemQuantities;

		SteamItemDefs.SetNum(ItemDefs.Num());
		ItemQuantities.SetNum(Quantities.Num());

		for (int32 i = 0; i < ItemDefs.Num(); i++)
		{
			SteamItemDefs[i] = ItemDefs[i];
			ItemQuantities[i] = Quantities[i];
		}

		bResult = GetInventory()->GenerateItems(&SteamInventoryResult, SteamItemDefs.GetData(), ItemQuantities.GetData(), SteamItemDefs.Num());

		if (bResult)
		{
			OutResult = SteamInventoryResult;
		}
	}

	return bResult;
}

bool UInventory::GrantPromoItems(FSteamInventoryResult& OutResult)
{
	LogVerbose("");

	bool bResult = false;
	OutResult = FSteamInventoryResult();

	if (GetInventory())
	{
		SteamInventoryResult_t SteamInventoryResult;

		bResult = GetInventory()->GrantPromoItems(&SteamInventoryResult);

		if (bResult)
		{
			OutResult = SteamInventoryResult;
		}
	}

	return bResult;
}

bool UInventory::AddPromoItem(FSteamInventoryResult& OutResult, FSteamItemDef ItemDefinition)
{
	LogVerbose("");

	bool bResult = false;
	OutResult = FSteamInventoryResult();

	if (GetInventory())
	{
		SteamInventoryResult_t SteamInventoryResult;

		bResult = GetInventory()->AddPromoItem(&SteamInventoryResult, ItemDefinition);

		if (bResult)
		{
			OutResult = SteamInventoryResult;
		}
	}

	return bResult;
}

bool UInventory::AddPromoItems(FSteamInventoryResult& OutResult, TArray<FSteamItemDef> ItemDefs)
{
	LogVerbose("");

	bool bResult = false;
	OutResult = FSteamInventoryResult();

	if (GetInventory())
	{
		SteamInventoryResult_t SteamInventoryResult;

		TArray<SteamItemDef_t> SteamItemDefs;
		for (int32 i = 0; i < ItemDefs.Num(); i++)
		{
			SteamItemDefs.Add(ItemDefs[i]);
		}

		bResult = GetInventory()->AddPromoItems(&SteamInventoryResult, SteamItemDefs.GetData(), SteamItemDefs.Num());

		if (bResult)
		{
			OutResult = SteamInventoryResult;
		}

		return bResult;
	}

	return bResult;
}

bool UInventory::ConsumeItem(FSteamInventoryResult& OutResult, FSteamItemInstanceID ItemToConsume, int32 Quantity)
{
	LogVerbose("");

	bool bResult = false;
	OutResult = FSteamInventoryResult();

	if (GetInventory())
	{
		SteamInventoryResult_t SteamInventoryResult;

		bResult = GetInventory()->ConsumeItem(&SteamInventoryResult, ItemToConsume, Quantity);

		OutResult = SteamInventoryResult;
	}

	return bResult;
}

bool UInventory::ExchangeItems(FSteamInventoryResult& outResult, TArray<FSteamItemDef> ArrayGenerate, TArray<int32> ArrayGenerateQuantity, TArray<FSteamItemInstanceID> ArrayDestroy, TArray<int32> ArrayDestroyQuantity)
{
	LogVerbose("");

	bool bResult = false;
	outResult = FSteamInventoryResult();

	if (GetInventory())
	{
		TArray<SteamItemDef_t> SteamItemDefsGenerate;
		TArray<uint32> SteamGenerateQuantity;
		SteamItemDefsGenerate.SetNum(ArrayGenerate.Num());
		SteamGenerateQuantity.SetNum(ArrayGenerateQuantity.Num());

		TArray<SteamItemInstanceID_t> SteamItemInstanceIdsDestroy;
		TArray<uint32> SteamDestroyQuantity;
		SteamItemInstanceIdsDestroy.SetNum(ArrayDestroy.Num());
		SteamDestroyQuantity.SetNum(ArrayDestroyQuantity.Num());

		for (int32 i = 0; i < SteamItemDefsGenerate.Num(); i++)
		{
			SteamItemDefsGenerate[i] = ArrayGenerate[i];
			SteamGenerateQuantity[i] = ArrayGenerateQuantity[i];
		}

		for (int32 i = 0; i < ArrayDestroy.Num(); i++)
		{
			SteamItemInstanceIdsDestroy[i] = ArrayDestroy[i];
			SteamDestroyQuantity[i] = ArrayDestroyQuantity[i];
		}

		SteamInventoryResult_t SteamInventoryResult;

		bResult = GetInventory()->ExchangeItems(&SteamInventoryResult, SteamItemDefsGenerate.GetData(), SteamGenerateQuantity.GetData(), SteamGenerateQuantity.Num(), SteamItemInstanceIdsDestroy.GetData(), SteamDestroyQuantity.GetData(), SteamItemInstanceIdsDestroy.Num());

		if (bResult)
		{
			outResult = SteamInventoryResult;
		}
	}

	return bResult;
}

bool UInventory::TransferItemQuantity(FSteamInventoryResult& OutResult, FSteamItemInstanceID ItemIDSource, int32 Quantity, FSteamItemInstanceID ItemIDDest)
{
	LogVerbose("");

	bool bResult = false;

	SteamInventoryResult_t SteamInventoryResult;

	if (GetInventory())
	{
		bResult = GetInventory()->TransferItemQuantity(&SteamInventoryResult, ItemIDSource, Quantity, ItemIDDest);

		if (bResult)
		{
			OutResult = SteamInventoryResult;
		}
	}

	return bResult;
}

bool UInventory::TriggerItemDrop(FSteamInventoryResult& OutResult, FSteamItemDef ListDefinition)
{
	LogVerbose("");

	bool bResult = false;
	OutResult = FSteamInventoryResult();

	SteamInventoryResult_t SteamInventoryResult;

	if (GetInventory())
	{
		bResult = GetInventory()->TriggerItemDrop(&SteamInventoryResult, ListDefinition);

		if (bResult)
		{
			OutResult = SteamInventoryResult;
		}
	}

	return bResult;
}

FSteamInventoryUpdateHandle UInventory::StartUpdateProperties()
{
	LogVerbose("");

	FSteamInventoryUpdateHandle Handle;

	if (GetInventory())
	{
		Handle = GetInventory()->StartUpdateProperties();
	}

	return Handle;
}

bool UInventory::SubmitUpdateProperties(FSteamInventoryUpdateHandle Result, FSteamInventoryResult& ResultHandle)
{
	LogVerbose("");

	bool bResult = false;
	ResultHandle = FSteamInventoryResult();

	if (GetInventory())
	{
		SteamInventoryResult_t SteamInventoryResult;

		bResult = GetInventory()->SubmitUpdateProperties(Result, &SteamInventoryResult);

		if (bResult)
		{
			ResultHandle = SteamInventoryResult;
		}
	}

	return bResult;
}

bool UInventory::RemoveProperty(FSteamInventoryUpdateHandle Result, FSteamItemInstanceID ItemID, FString PropertyName)
{
	LogVerbose("");

	bool bResult = false;

	if (GetInventory())
	{
		bResult = GetInventory()->RemoveProperty(Result, ItemID, TCHAR_TO_UTF8(*PropertyName));
	}

	return bResult;
}

bool UInventory::SetPropertyString(FSteamInventoryUpdateHandle Result, FSteamItemInstanceID ItemID, FString PropertyName, FString Value)
{
	LogVerbose("");

	bool bResult = false;

	if (GetInventory())
	{
		const FTCHARToUTF8 ConvertedPropertyName(*PropertyName);
		const FTCHARToUTF8 ConvertedValue(*Value);

		bResult = GetInventory()->SetProperty(Result, ItemID, ConvertedPropertyName.Get(), ConvertedValue.Get());
	}

	return bResult;
}

bool UInventory::SetPropertyBool(FSteamInventoryUpdateHandle Result, FSteamItemInstanceID ItemID, FString PropertyName, bool bValue)
{
	LogVerbose("");

	bool bResult = false;

	if (GetInventory())
	{
		bResult = GetInventory()->SetProperty(Result, ItemID, TCHAR_TO_UTF8(*PropertyName), bValue);
	}

	return bResult;
}

bool UInventory::SetPropertyInt(FSteamInventoryUpdateHandle Result, FSteamItemInstanceID ItemID, FString PropertyName, int32 Value)
{
	LogVerbose("");

	bool bResult = false;

	if (GetInventory())
	{
		bResult = GetInventory()->SetProperty(Result, ItemID, TCHAR_TO_UTF8(*PropertyName), static_cast<int64>(Value));
	}

	return bResult;
}

bool UInventory::SetPropertyFloat(FSteamInventoryUpdateHandle Result, FSteamItemInstanceID ItemID, FString PropertyName, float Value)
{
	LogVerbose("");

	bool bResult = false;

	if (GetInventory())
	{
		bResult = GetInventory()->SetProperty(Result, ItemID, TCHAR_TO_UTF8(*PropertyName), Value);
	}

	return bResult;
}

bool UInventory::LoadItemDefinitions()
{
	LogVerbose("");

	bool bResult = false;

	if (GetInventory())
	{
		bResult = GetInventory()->LoadItemDefinitions();
	}

	return bResult;
}

bool UInventory::GetItemDefinitionIDs(TArray<FSteamItemDef>& OutItemDefs)
{
	LogVeryVerbose("");

	bool bResult = false;
	OutItemDefs.Empty();

	if (GetInventory())
	{
		uint32 DataSize = 0;

		// get the size of the array
		if (GetInventory()->GetItemDefinitionIDs(nullptr, &DataSize))
		{
			TArray<SteamItemDef_t> DataArray;
			DataArray.SetNum(DataSize);

			bResult = GetInventory()->GetItemDefinitionIDs(DataArray.GetData(), &DataSize);

			for (int32 i = 0; i < DataArray.Num(); i++)
			{
				OutItemDefs.Add(DataArray[i]);
			}
		}
	}

	return bResult;
}

bool UInventory::GetItemDefinitionProperty(FSteamItemDef ItemDef, FString PropertyName, FString& OutValue)
{
	LogVeryVerbose("");

	bool bResult = false;
	OutValue.Empty();

	if (GetInventory())
	{
		const FTCHARToUTF8 ConvertedPropertyName(*PropertyName);

		uint32 DataSize = 0;

		// get the size of the array
		if (GetInventory()->GetItemDefinitionProperty(ItemDef, ConvertedPropertyName.Get(), nullptr, &DataSize))
		{
			TArray<char> DataArray;
			DataArray.SetNum(DataSize);

			bResult = GetInventory()->GetItemDefinitionProperty(ItemDef, ConvertedPropertyName.Get(), DataArray.GetData(), &DataSize);

			if (bResult)
			{
				OutValue = FString(UTF8_TO_TCHAR(DataArray.GetData()));
			}
		}
	}

	return bResult;
}

bool UInventory::GetEligiblePromoItemDefinitionIDs(FSteamID SteamID, TArray<FSteamItemDef>& OutItemDefs)
{
	LogVeryVerbose("");

	bool bResult = false;
	OutItemDefs.Empty();

	if (GetInventory())
	{
		uint32 DataSize = 0;

		// get the size of the array
		if (GetInventory()->GetEligiblePromoItemDefinitionIDs(SteamID, nullptr, &DataSize))
		{
			TArray<SteamItemDef_t> DataArray;
			DataArray.SetNum(DataSize);

			bResult = GetInventory()->GetEligiblePromoItemDefinitionIDs(SteamID, DataArray.GetData(), &DataSize);

			for (int32 i = 0; i < DataArray.Num(); i++)
			{
				OutItemDefs.Add(DataArray[i]);
			}
		}
	}

	return bResult;
}

void UInventory::RequestEligiblePromoItemDefinitionsIDs(const FOnRequestEligiblePromoItemDefinitionsIDs& Callback, FSteamID SteamID)
{
	LogVerbose("");

	if (GetInventory())
	{
		FOnlineAsyncTaskSteamCoreInventoryRequestEligiblePromoItemDefinitionsIDs* Task = new FOnlineAsyncTaskSteamCoreInventoryRequestEligiblePromoItemDefinitionsIDs(this, Callback, SteamID);
		QueueAsyncTask(Task);
	}
}

void UInventory::RequestPrices(const FOnSteamInventoryRequestPricesResult& Callback)
{
	LogVerbose("");

	if (GetInventory())
	{
		FOnlineAsyncTaskSteamCoreInventoryRequestPricesResult* Task = new FOnlineAsyncTaskSteamCoreInventoryRequestPricesResult(this, Callback);
		QueueAsyncTask(Task);
	}
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UInventory::OnSteamInventoryResultReady(SteamInventoryResultReady_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		SteamInventoryResultReady.Broadcast(Data);
	});
}

void UInventory::OnSteamInventoryFullUpdate(SteamInventoryFullUpdate_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		SteamInventoryFullUpdate.Broadcast(Data);
	});
}

void UInventory::OnSteamInventoryDefinitionUpdate(SteamInventoryDefinitionUpdate_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		SteamInventoryDefinitionUpdate.Broadcast();
	});
}

void UInventory::OnSteamInventoryStartPurchaseResult(SteamInventoryStartPurchaseResult_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		SteamInventoryStartPurchaseResult.Broadcast(Data);
	});
}

void UInventory::OnSteamInventoryRequestPricesResult(SteamInventoryRequestPricesResult_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		SteamInventoryRequestPricesResultDelegate.Broadcast(Data);
	});
}

void UInventory::OnSteamInventoryEligiblePromoItemDefIDs(SteamInventoryEligiblePromoItemDefIDs_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		SteamInventoryEligiblePromoItemDefIDs.Broadcast(Data);
	});
}
