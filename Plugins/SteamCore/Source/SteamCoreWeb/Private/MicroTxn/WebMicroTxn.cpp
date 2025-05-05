/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* This is the interface used to support Microtransactions (In-Game Purchases).
* https://partner.steamgames.com/doc/webapi/ISteamMicroTxn
*
* See also: https://partner.steamgames.com/doc/features/microtransactions
*           https://partner.steamgames.com/doc/features/microtransactions/implementation
*
* For more info on how to use the Steamworks Web API please see the Web API Overview.
* https://partner.steamgames.com/doc/webapi_overview
*/

#include "MicroTxn/WebMicroTxn.h"
#include "MicroTxn/WebMicroTxnAsyncTasks.h"
#include "SteamCoreWeb/SteamCoreWebPluginPrivatePCH.h"

void UWebMicroTxn::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UWebMicroTxn::Deinitialize()
{
	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UWebMicroTxn::AdjustAgreement(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, FString AgreementId, int32 AppId, FString nextProcessDate)
{
	FOnlineAsyncTaskSteamCoreWebAdjustAgreement* Task = new FOnlineAsyncTaskSteamCoreWebAdjustAgreement(this, Callback, Key, SteamId, AgreementId, AppId, nextProcessDate);
	QueueAsyncTask(Task);
}

void UWebMicroTxn::CancelAgreement(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, FString AgreementId, int32 AppId)
{
	FOnlineAsyncTaskSteamCoreWebCancelAgreement* Task = new FOnlineAsyncTaskSteamCoreWebCancelAgreement(this, Callback, Key, SteamId, AgreementId, AppId);
	QueueAsyncTask(Task);
}

void UWebMicroTxn::FinalizeTxn(const FOnSteamCoreWebCallback& Callback, FString Key, FString orderID, int32 AppId)
{
	FOnlineAsyncTaskSteamCoreWebFinalizeTxn* Task = new FOnlineAsyncTaskSteamCoreWebFinalizeTxn(this, Callback, Key, orderID, AppId);
	QueueAsyncTask(Task);
}

void UWebMicroTxn::GetReport(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString Time, FString Type, int32 MaxResults)
{
	FOnlineAsyncTaskSteamCoreWebGetReport* Task = new FOnlineAsyncTaskSteamCoreWebGetReport(this, Callback, Key, AppId, Time, Type, MaxResults);
	QueueAsyncTask(Task);
}

void UWebMicroTxn::GetUserAgreementInfo(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId)
{
	FOnlineAsyncTaskSteamCoreWebGetUserAgreementInfo* Task = new FOnlineAsyncTaskSteamCoreWebGetUserAgreementInfo(this, Callback, Key, SteamId, AppId);
	QueueAsyncTask(Task);
}

void UWebMicroTxn::GetUserInfo(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, FString Ipaddress)
{
	FOnlineAsyncTaskSteamCoreWebGetUserInfo* Task = new FOnlineAsyncTaskSteamCoreWebGetUserInfo(this, Callback, Key, SteamId, Ipaddress);
	QueueAsyncTask(Task);
}

void UWebMicroTxn::InitTxn(const FOnSteamCoreWebCallback& Callback, FString Key, FString orderID, FString SteamId, int32 AppId, FString Language, FString Currency, FString UserSession, FString Ipaddress, TArray<int32> ItemID, TArray<int32> Quantity, TArray<FString> Amount, TArray<FString> Description, TArray<FString> Category, TArray<int32> AssociatedBundle, TArray<FString> BillingType, TArray<FString> StartDate, TArray<FString> EndDate, TArray<FString> Period, TArray<int32> Frequency, TArray<FString> RecurringAmt, TArray<int32> BundleCount, TArray<int32> BundleId, TArray<int32> BundleQty, TArray<FString> BundleDesc, TArray<FString> BundleCategory)
{
	FOnlineAsyncTaskSteamCoreWebInitTxn* Task = new FOnlineAsyncTaskSteamCoreWebInitTxn(this, Callback, Key, orderID, SteamId, AppId, Language, Currency, UserSession, Ipaddress, ItemID, Quantity, Amount, Description, Category, AssociatedBundle, BillingType, StartDate, EndDate, Period, Frequency, RecurringAmt, BundleCount, BundleId, BundleQty, BundleDesc, BundleCategory);
	QueueAsyncTask(Task);
}

void UWebMicroTxn::ProcessAgreement(const FOnSteamCoreWebCallback& Callback, FString Key, FString orderID, FString SteamId, FString AgreementId, int32 AppId, int32 Amount, FString Currency)
{
	FOnlineAsyncTaskSteamCoreWebProcessAgreement* Task = new FOnlineAsyncTaskSteamCoreWebProcessAgreement(this, Callback, Key, orderID, SteamId, AgreementId, AppId, Amount, Currency);
	QueueAsyncTask(Task);
}

void UWebMicroTxn::QueryTxn(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString orderID, FString TransId)
{
	FOnlineAsyncTaskSteamCoreWebQueryTxn* Task = new FOnlineAsyncTaskSteamCoreWebQueryTxn(this, Callback, Key, AppId, orderID, TransId);
	QueueAsyncTask(Task);
}

void UWebMicroTxn::RefundTxn(const FOnSteamCoreWebCallback& Callback, FString Key, FString orderID, int32 AppId)
{
	FOnlineAsyncTaskSteamCoreWebRefundTxn* Task = new FOnlineAsyncTaskSteamCoreWebRefundTxn(this, Callback, Key, orderID, AppId);
	QueueAsyncTask(Task);
}

FString UWebMicroTxn::MakeTransactionID()
{
	return FString::Printf(TEXT("%llu"), static_cast<uint64>(FMath::FRand() * static_cast<float>(9223372036854775807)));
}
