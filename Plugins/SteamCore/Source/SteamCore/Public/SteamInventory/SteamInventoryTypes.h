/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamInventory
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCore/Steam.h"
#include "SteamCore/SteamTypes.h"
#include "SteamInventoryTypes.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Enums
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UENUM(BlueprintType, meta = (Bitflags, UseEnumValuesAsMaskValuesInEditor = "true"))
enum ESteamCoreItemFlags
{
	ENoTrade = 0,
	ERemoved = 8,
	EConsumed = 9,
};

ENUM_CLASS_FLAGS(ESteamCoreItemFlags)

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Structs
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

USTRUCT(BlueprintType)
struct FSteamItemInstanceID
{
	GENERATED_BODY()
public:
	FSteamItemInstanceID()
#if ENABLE_STEAMCORE
		: Value(k_SteamItemInstanceIDInvalid)
#else
		: Value(0)
#endif
	{
	}

	FSteamItemInstanceID(uint64 value)
		: Value(value)
	{
	}

public:
	operator uint64() const { return Value; }
private:
	uint64 Value;
};

USTRUCT(BlueprintType)
struct FSteamItemDef
{
	GENERATED_BODY()
public:
	FSteamItemDef()
		: Value(0)
	{
	}

	FSteamItemDef(int32 Data)
		: Value(Data)
	{
	}

public:
	operator int32() const { return Value; }
protected:
	UPROPERTY(BlueprintReadWrite, Category = "Inventory")
	int32 Value;
};

USTRUCT(BlueprintType)
struct FSteamItemDetails
{
	GENERATED_BODY()
public:
	FSteamItemDetails()
		: Quantity(0)
	{
	}

#if ENABLE_STEAMCORE
	FSteamItemDetails(const SteamItemDetails_t& Data)
		: InstanceID(Data.m_itemId)
		  , Definition(Data.m_iDefinition)
		  , Quantity(Data.m_unQuantity)
	{
		for (int32 i = 0; i < 31; i++)
		{
			if (Data.m_unFlags & 1 << i)
			{
				Flags.Add(static_cast<ESteamCoreItemFlags>(i));
			}
		}
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, Category = "Inventory")
	FSteamItemInstanceID InstanceID;
	UPROPERTY(BlueprintReadWrite, Category = "Inventory")
	FSteamItemDef Definition;
	UPROPERTY(BlueprintReadWrite, Category = "Inventory")
	int32 Quantity;
	UPROPERTY(BlueprintReadWrite, Category = "Inventory")
	TArray<TEnumAsByte<ESteamCoreItemFlags>> Flags;
};

USTRUCT(BlueprintType)
struct FSteamInventoryResult
{
	GENERATED_BODY()
public:
	FSteamInventoryResult()
		: Value(0)
	{
	}

#if ENABLE_STEAMCORE
	FSteamInventoryResult(const SteamInventoryResult_t& Data)
		: Value(Data)
	{
	}
#endif

public:
	operator int32() const { return Value; }
	operator int32() { return Value; }

protected:
	UPROPERTY(BlueprintReadWrite, Category = "Inventory")
	int32 Value;
};

USTRUCT(BlueprintType)
struct FSteamInventoryEligiblePromoItemDefIDs
{
	GENERATED_BODY()
public:
	FSteamInventoryEligiblePromoItemDefIDs()
		: Result(ESteamResult::None)
		  , NumEligiblePromoItemDefs(0)
		  , bCachedData(false)
	{
	}

#if ENABLE_STEAMCORE
	FSteamInventoryEligiblePromoItemDefIDs(const SteamInventoryEligiblePromoItemDefIDs_t& Data)
		: Result(_SteamResult(Data.m_result))
		  , SteamID(Data.m_steamID)
		  , NumEligiblePromoItemDefs(Data.m_numEligiblePromoItemDefs)
		  , bCachedData(Data.m_bCachedData)
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, Category = "Inventory")
	ESteamResult Result;
	UPROPERTY(BlueprintReadWrite, Category = "Inventory")
	FSteamID SteamID;
	UPROPERTY(BlueprintReadWrite, Category = "Inventory")
	int NumEligiblePromoItemDefs;
	UPROPERTY(BlueprintReadWrite, Category = "Inventory")
	bool bCachedData;
};

USTRUCT(BlueprintType)
struct FSteamInventoryResultReady
{
	GENERATED_BODY()
public:
	FSteamInventoryResultReady()
		: Result(ESteamResult::None)
	{
	}

#if ENABLE_STEAMCORE
	FSteamInventoryResultReady(const SteamInventoryResultReady_t& Data)
		: Handle(Data.m_handle)
		  , Result(_SteamResult(Data.m_result))
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, Category = "Inventory")
	FSteamInventoryResult Handle;
	UPROPERTY(BlueprintReadWrite, Category = "Inventory")
	ESteamResult Result;
};

USTRUCT(BlueprintType)
struct FSteamInventoryFullUpdate
{
	GENERATED_BODY()
public:
	FSteamInventoryFullUpdate() = default;

#if ENABLE_STEAMCORE
	FSteamInventoryFullUpdate(const SteamInventoryFullUpdate_t& Data)
		: Handle(Data.m_handle)
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, Category = "Inventory")
	FSteamInventoryResult Handle;
};

USTRUCT(BlueprintType)
struct FSteamInventoryRequestPricesResult
{
	GENERATED_BODY()
public:
	FSteamInventoryRequestPricesResult()
		: Result(ESteamResult::None)
	{
	}

#if ENABLE_STEAMCORE
	FSteamInventoryRequestPricesResult(const SteamInventoryRequestPricesResult_t& Data)
		: Result(_SteamResult(Data.m_result))
		  , Currency((strlen(Data.m_rgchCurrency) > 0) ? Data.m_rgchCurrency : "")
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, Category = "Inventory")
	ESteamResult Result;
	UPROPERTY(BlueprintReadWrite, Category = "Inventory")
	FString Currency;
};

USTRUCT(BlueprintType)
struct FSteamInventoryStartPurchaseResult
{
	GENERATED_BODY()
public:
	FSteamInventoryStartPurchaseResult()
		: Result(ESteamResult::None)
	{
	}

#if ENABLE_STEAMCORE
	FSteamInventoryStartPurchaseResult(const SteamInventoryStartPurchaseResult_t& Data)
		: Result(_SteamResult(Data.m_result))
		  , OrderId(LexToString(Data.m_ulOrderID))
		  , TransactionId(LexToString(Data.m_ulTransID))
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, Category = "Inventory")
	ESteamResult Result;
	UPROPERTY(BlueprintReadWrite, Category = "Inventory")
	FString OrderId;
	UPROPERTY(BlueprintReadWrite, Category = "Inventory")
	FString TransactionId;
};


// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Delegate declarations
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSteamInventoryResultReady, const FSteamInventoryResultReady&, Data);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSteamInventoryFullUpdate, const FSteamInventoryFullUpdate&, Data);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSteamInventoryStartPurchaseResultDelegate, const FSteamInventoryStartPurchaseResult&, Data);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSteamInventoryRequestPricesResultDelegate, const FSteamInventoryRequestPricesResult&, Data);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSteamInventoryEligiblePromoItemDefIDs, const FSteamInventoryEligiblePromoItemDefIDs&, Data);

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSteamInventoryDefinitionUpdate);

DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnRequestEligiblePromoItemDefinitionsIDs, const FSteamInventoryEligiblePromoItemDefIDs&, Data, bool, bWasSuccessful);

DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnSteamInventoryRequestPricesResult, const FSteamInventoryRequestPricesResult&, Data, bool, bWasSuccessful);

DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnSteamInventoryStartPurchaseResult, const FSteamInventoryStartPurchaseResult&, Data, bool, bWasSuccessful);
