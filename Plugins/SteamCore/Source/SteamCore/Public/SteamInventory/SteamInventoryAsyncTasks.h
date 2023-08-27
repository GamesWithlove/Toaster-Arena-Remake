/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamInventory
*/

#pragma once

#include "SteamCore/SteamCoreAsync.h"
#include "SteamInventoryTypes.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreInventoryRequestEligiblePromoItemDefinitionsIDs
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

#if ENABLE_STEAMCORE
class STEAMCORE_API FOnlineAsyncTaskSteamCoreInventoryRequestEligiblePromoItemDefinitionsIDs : public FOnlineAsyncTaskSteamCore
{
public:
	FOnRequestEligiblePromoItemDefinitionsIDs m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreInventoryRequestEligiblePromoItemDefinitionsIDs(class USteamCoreSubsystem* Subsystem, const FOnRequestEligiblePromoItemDefinitionsIDs Callback, const FSteamID SteamId, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, Timeout)
		  , m_OnSteamCallback(Callback)
		  , m_CallbackResults()
		  , m_SteamID(SteamId)
	{
	}

	FOnlineAsyncTaskSteamCoreInventoryRequestEligiblePromoItemDefinitionsIDs(USteamCoreSubsystem* Subsystem, USteamCoreAsyncAction* AsyncObject, const FSteamID SteamId, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, AsyncObject, Timeout)
		  , m_CallbackResults()
		  , m_SteamID(SteamId)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskSteamCoreInventoryRequestEligiblePromoItemDefinitionsIDs() = delete;
protected:
	SteamInventoryEligiblePromoItemDefIDs_t m_CallbackResults;
	FSteamID m_SteamID;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreInventoryRequestEligiblePromoItemDefinitionsIDs")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreInventoryRequestPricesResult
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreInventoryRequestPricesResult : public FOnlineAsyncTaskSteamCore
{
public:
	FOnSteamInventoryRequestPricesResult m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreInventoryRequestPricesResult(class USteamCoreSubsystem* Subsystem, const FOnSteamInventoryRequestPricesResult Callback, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, Timeout)
		  , m_OnSteamCallback(Callback)
		  , m_CallbackResults()
	{
	}

	FOnlineAsyncTaskSteamCoreInventoryRequestPricesResult(USteamCoreSubsystem* Subsystem, USteamCoreAsyncAction* AsyncObject, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, AsyncObject, Timeout)
		  , m_CallbackResults()
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskSteamCoreInventoryRequestPricesResult() = delete;
protected:
	SteamInventoryRequestPricesResult_t m_CallbackResults;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreInventoryRequestPricesResult")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreInventoryStartPurchaseResult
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreInventoryStartPurchaseResult : public FOnlineAsyncTaskSteamCore
{
public:
	FOnSteamInventoryStartPurchaseResult m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreInventoryStartPurchaseResult(class USteamCoreSubsystem* Subsystem, const FOnSteamInventoryStartPurchaseResult Callback, const TArray<FSteamItemDef> ItemDefs, const TArray<int32> Quantity, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, Timeout)
		  , m_OnSteamCallback(Callback)
		  , m_CallbackResults()
		  , m_ItemDefs(ItemDefs)
		  , m_Quantity(Quantity)
	{
	}

	FOnlineAsyncTaskSteamCoreInventoryStartPurchaseResult(USteamCoreSubsystem* Subsystem, USteamCoreAsyncAction* AsyncObject, const TArray<FSteamItemDef> ItemDefs, const TArray<int32> Quantity, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, AsyncObject, Timeout)
		  , m_CallbackResults()
		  , m_ItemDefs(ItemDefs)
		  , m_Quantity(Quantity)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskSteamCoreInventoryStartPurchaseResult() = delete;
protected:
	SteamInventoryStartPurchaseResult_t m_CallbackResults;
	TArray<FSteamItemDef> m_ItemDefs;
	TArray<int32> m_Quantity;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreInventoryStartPurchaseResult")); }
};
#endif