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

#pragma once

#include "SteamCoreWeb/SteamCoreWebAsync.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebAdjustAgreement
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebAdjustAgreement : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebAdjustAgreement(USteamCoreWebSubsystem* subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, FString AgreementId, int32 AppId, FString NextProcessDate)
		: FOnlineAsyncTaskSteamCoreWeb(subsystem, Callback, SteamCoreWebMicroTxnSandboxMode() ? "ISteamMicroTxnSandbox" : "ISteamMicroTxn", "AdjustAgreement", Key, 1, EVerb::POST)
	{
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("agreementid", AgreementId);
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("nextprocessdate", NextProcessDate);
	}

private:
	FOnlineAsyncTaskSteamCoreWebAdjustAgreement() = delete;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreWebAdjustAgreement")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebCancelAgreement
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebCancelAgreement : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebCancelAgreement(USteamCoreWebSubsystem* subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, FString AgreementId, int32 AppId)
		: FOnlineAsyncTaskSteamCoreWeb(subsystem, Callback, SteamCoreWebMicroTxnSandboxMode() ? "ISteamMicroTxnSandbox" : "ISteamMicroTxn", "CancelAgreement", Key, 1, EVerb::POST)
	{
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("agreementid", AgreementId);
		m_RequestString.Add("appid", AppId);
	}

private:
	FOnlineAsyncTaskSteamCoreWebCancelAgreement() = delete;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreWebCancelAgreement")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebFinalizeTxn
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebFinalizeTxn : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebFinalizeTxn(USteamCoreWebSubsystem* subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, FString OrderId, int32 AppId)
		: FOnlineAsyncTaskSteamCoreWeb(subsystem, Callback, SteamCoreWebMicroTxnSandboxMode() ? "ISteamMicroTxnSandbox" : "ISteamMicroTxn", "FinalizeTxn", Key, 2, EVerb::POST)
	{
		m_RequestString.Add("orderid", OrderId);
		m_RequestString.Add("appid", AppId);
	}

private:
	FOnlineAsyncTaskSteamCoreWebFinalizeTxn() = delete;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreWebFinalizeTxn")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebGetReport
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebGetReport : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebGetReport(USteamCoreWebSubsystem* subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString time, FString type, int32 MaxResults)
		: FOnlineAsyncTaskSteamCoreWeb(subsystem, Callback, SteamCoreWebMicroTxnSandboxMode() ? "ISteamMicroTxnSandbox" : "ISteamMicroTxn", "GetReport", Key, 4, EVerb::GET)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("type", type);
		m_RequestString.Add("time", time);
		m_RequestString.Add("MaxResults", MaxResults);
	}

private:
	FOnlineAsyncTaskSteamCoreWebGetReport() = delete;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreWebGetReport")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebGetUserAgreementInfo
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebGetUserAgreementInfo : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebGetUserAgreementInfo(USteamCoreWebSubsystem* subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId)
		: FOnlineAsyncTaskSteamCoreWeb(subsystem, Callback, SteamCoreWebMicroTxnSandboxMode() ? "ISteamMicroTxnSandbox" : "ISteamMicroTxn", "GetUserAgreementInfo", Key, 1, EVerb::GET)
	{
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("appid", AppId);
	}

private:
	FOnlineAsyncTaskSteamCoreWebGetUserAgreementInfo() = delete;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreWebGetUserAgreementInfo")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebGetUserInfo
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebGetUserInfo : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebGetUserInfo(USteamCoreWebSubsystem* subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, FString Ipaddress)
		: FOnlineAsyncTaskSteamCoreWeb(subsystem, Callback, SteamCoreWebMicroTxnSandboxMode() ? "ISteamMicroTxnSandbox" : "ISteamMicroTxn", "GetUserInfo", Key, 2, EVerb::GET)
	{
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("ipaddress", Ipaddress);
	}

private:
	FOnlineAsyncTaskSteamCoreWebGetUserInfo() = delete;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreWebGetUserInfo")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebInitTxn
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebInitTxn : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebInitTxn(USteamCoreWebSubsystem* subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, FString OrderId, FString SteamId, int32 AppId, FString Language, FString Currency, FString UserSession, FString Ipaddress, TArray<int32> ItemID, TArray<int32> Quantity, TArray<FString> Amount, TArray<FString> description, TArray<FString> Category, TArray<int32> AssociatedBundle, TArray<FString> BillingType, TArray<FString> StartDate, TArray<FString> EndDate, TArray<FString> Period, TArray<int32> Frequency, TArray<FString> RecurringAmt, TArray<int32> BundleCount, TArray<int32> BundleId, TArray<int32> BundleQty, TArray<FString> BundleDesc, TArray<FString> BundleCategory)
		: FOnlineAsyncTaskSteamCoreWeb(subsystem, Callback, SteamCoreWebMicroTxnSandboxMode() ? "ISteamMicroTxnSandbox" : "ISteamMicroTxn", "InitTxn", Key, 3, EVerb::POST)
	{
		m_RequestString.Add("orderid", OrderId);
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("itemcount", ItemID.Num());
		m_RequestString.Add("language", Language);
		m_RequestString.Add("currency", Currency);
		m_RequestString.Add("usersession", UserSession);
		m_RequestString.Add("ipaddress", Ipaddress);
		m_RequestString.Add("itemid", ItemID);
		m_RequestString.Add("qty", Quantity);
		m_RequestString.Add("amount", Amount);
		m_RequestString.Add("description", description);
		m_RequestString.Add("category", Category);
		m_RequestString.Add("associated_bundle", AssociatedBundle);
		m_RequestString.Add("billingtype", BillingType);
		m_RequestString.Add("startdate", StartDate);
		m_RequestString.Add("enddate", EndDate);
		m_RequestString.Add("period", Period);
		m_RequestString.Add("frequency", Frequency);
		m_RequestString.Add("recurringamt", RecurringAmt);
		m_RequestString.Add("bundlecount", BundleCount);
		m_RequestString.Add("bundleid", BundleId);
		m_RequestString.Add("bundle_qty", BundleQty);
		m_RequestString.Add("bundle_desc", BundleDesc);
		m_RequestString.Add("bundle_category", BundleCategory);
	}

private:
	FOnlineAsyncTaskSteamCoreWebInitTxn() = delete;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreWebInitTxn")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebProcessAgreement
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebProcessAgreement : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebProcessAgreement(USteamCoreWebSubsystem* subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, FString OrderId, FString SteamId, FString AgreementId, int32 AppId, int32 Amount, FString Currency)
		: FOnlineAsyncTaskSteamCoreWeb(subsystem, Callback, SteamCoreWebMicroTxnSandboxMode() ? "ISteamMicroTxnSandbox" : "ISteamMicroTxn", "ProcessAgreement", Key, 1, EVerb::POST)
	{
		m_RequestString.Add("orderid", OrderId);
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("agreementid", AgreementId);
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("amount", Amount);
		m_RequestString.Add("currency", Currency);
	}

private:
	FOnlineAsyncTaskSteamCoreWebProcessAgreement() = delete;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreWebProcessAgreement")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebQueryTxn
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebQueryTxn : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebQueryTxn(USteamCoreWebSubsystem* subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString OrderId, FString TransId)
		: FOnlineAsyncTaskSteamCoreWeb(subsystem, Callback, SteamCoreWebMicroTxnSandboxMode() ? "ISteamMicroTxnSandbox" : "ISteamMicroTxn", "QueryTxn", Key, 2, EVerb::GET)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("orderid", OrderId);
		m_RequestString.Add("transid", TransId);
	}

private:
	FOnlineAsyncTaskSteamCoreWebQueryTxn() = delete;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreWebQueryTxn")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebRefundTxn
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebRefundTxn : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebRefundTxn(USteamCoreWebSubsystem* subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, FString OrderId, int32 AppId)
		: FOnlineAsyncTaskSteamCoreWeb(subsystem, Callback, SteamCoreWebMicroTxnSandboxMode() ? "ISteamMicroTxnSandbox" : "ISteamMicroTxn", "RefundTxn", Key, 2, EVerb::POST)
	{
		m_RequestString.Add("orderid", OrderId);
		m_RequestString.Add("appid", AppId);
	}

private:
	FOnlineAsyncTaskSteamCoreWebRefundTxn() = delete;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreWebRefundTxn")); }
};
