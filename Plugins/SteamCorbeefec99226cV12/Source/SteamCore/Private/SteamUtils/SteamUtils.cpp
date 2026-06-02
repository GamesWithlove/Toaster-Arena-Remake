/**
* Copyright (C) 2017-2025 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamUtils
*/

#include "SteamUtils/SteamUtils.h"
#include "SteamCorePluginPrivatePCH.h"

void UUtils::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

#if WITH_STEAMCORE
	OnCheckFileSignatureCallback.Register(this, &UUtils::OnCheckFileSignature);
	OnGamepadTextInputDismissedCallback.Register(this, &UUtils::OnGamepadTextInputDismissed);
	OnLowBatteryPowerCallback.Register(this, &UUtils::OnLowBatteryPower);
	OnIPCountryCallback.Register(this, &UUtils::OnIPCountry);
	OnSteamShutdownCallback.Register(this, &UUtils::OnSteamShutdown);

	if (IsRunningDedicatedServer())
	{
		OnCheckFileSignatureCallback.SetGameserverFlag();
		OnGamepadTextInputDismissedCallback.SetGameserverFlag();
		OnLowBatteryPowerCallback.SetGameserverFlag();
		OnIPCountryCallback.SetGameserverFlag();
		OnSteamShutdownCallback.SetGameserverFlag();
	}
#endif
}

void UUtils::Deinitialize()
{
#if WITH_STEAMCORE
	OnCheckFileSignatureCallback.Unregister();
	OnGamepadTextInputDismissedCallback.Unregister();
	OnLowBatteryPowerCallback.Unregister();
	OnIPCountryCallback.Unregister();
	OnSteamShutdownCallback.Unregister();
#endif

	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
int32 UUtils::GetSecondsSinceAppActive()
{
	LogSteamCoreVeryVerbose("");

#if WITH_STEAMCORE
	if (GetUtils())
	{
	
		return GetUtils()->GetSecondsSinceAppActive();	
	}
#endif

	return 0;
}

int32 UUtils::GetSecondsSinceComputerActive()
{
	LogSteamCoreVeryVerbose("");

#if WITH_STEAMCORE
	if (GetUtils())
	{
		return GetUtils()->GetSecondsSinceComputerActive();
	}
#endif
	
	return 0;
}

ESteamUniverse UUtils::GetConnectedUniverse()
{
	LogSteamCoreVeryVerbose("");

#if WITH_STEAMCORE
	if (GetUtils())
	{
	
		return static_cast<ESteamUniverse>(GetUtils()->GetConnectedUniverse());
	}
#endif

	return ESteamUniverse::Max;
}

int32 UUtils::GetServerRealTime()
{
	LogSteamCoreVeryVerbose("");

	int32 Result = 0;

#if WITH_STEAMCORE
	if (GetUtils())
	{
		Result = GetUtils()->GetServerRealTime();
	}
#endif

	return Result;
}

FString UUtils::GetIPCountry()
{
	LogSteamCoreVeryVerbose("");

	FString Result;

#if WITH_STEAMCORE
	if (GetUtils())
	{
		Result = UTF8_TO_TCHAR(GetUtils()->GetIPCountry());
	}
#endif

	return Result;
}

int32 UUtils::GetCurrentBatteryPower()
{
	LogSteamCoreVeryVerbose("");

	int32 Result = 0;

#if WITH_STEAMCORE
	if (GetUtils())
	{
		Result = GetUtils()->GetCurrentBatteryPower();
	}
#endif

	return Result;
}

int32 UUtils::GetAppID()
{
	LogSteamCoreVeryVerbose("");

	int32 Result = 0;

#if WITH_STEAMCORE
	if (GetUtils())
	{
		Result = GetUtils()->GetAppID();
	}
#endif

	return Result;
}

void UUtils::SetOverlayNotificationPosition(ESteamNotificationPosition NotificationPosition)
{
	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
	if (GetUtils())
	{
		GetUtils()->SetOverlayNotificationPosition(static_cast<ENotificationPosition>(NotificationPosition));
	}
#endif
}

void UUtils::SetVRHeadsetStreamingEnabled(bool bEnabled)
{
	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
	if (GetUtils())
	{
		GetUtils()->SetVRHeadsetStreamingEnabled(bEnabled);
	}
#endif
}

int32 UUtils::GetIPCCallCount()
{
	LogSteamCoreVeryVerbose("");

	int32 Result = 0;

#if WITH_STEAMCORE
	if (GetUtils())
	{
		Result = GetUtils()->GetIPCCallCount();
	}
#endif

	return Result;
}

bool UUtils::IsOverlayEnabled()
{
	LogSteamCoreVeryVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUtils())
	{
		bResult = GetUtils()->IsOverlayEnabled();
	}
#endif

	return bResult;
}

bool UUtils::IsSteamChinaLauncher()
{
	LogSteamCoreVeryVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
#if STEAM_VERSION > 142
	if (GetUtils())
	{
		bResult = GetUtils()->IsSteamChinaLauncher();
	}
#endif
#endif

	return bResult;
}

bool UUtils::InitFilterText()
{
	LogSteamCoreVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
#if STEAM_VERSION > 146
	if (GetUtils())
	{
		bResult = GetUtils()->InitFilterText();
	}
#endif
#endif

	return bResult;
}

bool UUtils::IsSteamRunningOnSteamDeck()
{
	LogSteamCoreVerbose("");
	
	bool bResult = false;

#if WITH_STEAMCORE
#if STEAM_VERSION > 151
	if (GetUtils())
	{
		bResult = GetUtils()->IsSteamRunningOnSteamDeck();
	}
#endif
#endif

	return bResult;
}

bool UUtils::BOverlayNeedsPresent()
{
	LogSteamCoreVeryVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUtils())
	{
		bResult = GetUtils()->BOverlayNeedsPresent();
	}
#endif

	return bResult;
}

bool UUtils::ShowGamepadTextInput(ESteamGamepadTextInputMode InputMode, ESteamGamepadTextInputLineMode LineInputMode, FString Description, int32 CharMax, FString ExistingText)
{
	LogSteamCoreVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUtils())
	{
		bResult = GetUtils()->ShowGamepadTextInput(static_cast<EGamepadTextInputMode>(InputMode), static_cast<EGamepadTextInputLineMode>(LineInputMode), TCHAR_TO_UTF8(*Description), CharMax, TCHAR_TO_UTF8(*ExistingText));
	}
#endif

	return bResult;
}

int32 UUtils::GetEnteredGamepadTextLength()
{
	LogSteamCoreVeryVerbose("");

	int32 Result = 0;

#if WITH_STEAMCORE
	if (GetUtils())
	{
		Result = GetUtils()->GetEnteredGamepadTextLength();
	}
#endif

	return Result;
}

bool UUtils::GetImageRGBA(int iImage, TArray<uint8>& OutBuffer)
{
	LogSteamCoreVeryVerbose("");

	bool bResult = false;
	OutBuffer.Empty();

#if WITH_STEAMCORE
	if (GetUtils())
	{
		uint32 AvatarWidth = 0;
		uint32 AvatarHeight = 0;

		if (GetUtils()->GetImageSize(iImage, &AvatarWidth, &AvatarHeight))
		{
			const int ImageSizeInBytes = AvatarWidth * AvatarHeight * 4;
			OutBuffer.SetNum(ImageSizeInBytes);

			bResult = GetUtils()->GetImageRGBA(iImage, OutBuffer.GetData(), ImageSizeInBytes);
		}
	}
#endif

	return bResult;
}

bool UUtils::GetImageSize(int iImage, int32& OutWidth, int32& OutHeight)
{
	LogSteamCoreVeryVerbose("");

	bool bResult = false;
	uint32 Width = 0;
	uint32 Height = 0;

#if WITH_STEAMCORE
	if (GetUtils())
	{
		bResult = GetUtils()->GetImageSize(iImage, &Width, &Height);
	}

	OutWidth = Width;
	OutHeight = Height;
#endif

	return bResult;
}

bool UUtils::GetEnteredGamepadTextInput(FString& OutText)
{
	LogSteamCoreVeryVerbose("");

	bool bResult = false;
	OutText.Empty();

#if WITH_STEAMCORE
	if (GetUtils())
	{
		TArray<char> DataArray;
		uint32 Length = GetUtils()->GetEnteredGamepadTextLength();
		LogSteamCoreVerbose("GetEnteredGamepadTextLength (%i)", Length);
		
		DataArray.SetNum(Length);
		bResult = GetUtils()->GetEnteredGamepadTextInput(DataArray.GetData(), Length);
		LogSteamCoreVerbose("GetEnteredGamepadTextInput result: (%d), DataArray length: (%i)", bResult, DataArray.Num());

		if (bResult)
		{
			OutText = UTF8_TO_TCHAR(DataArray.GetData());
		}
	}
#endif

	return bResult;
}

FString UUtils::GetSteamUILanguage()
{
	LogSteamCoreVeryVerbose("");

	FString Result;

#if WITH_STEAMCORE
	if (GetUtils())
	{
		Result = UTF8_TO_TCHAR(GetUtils()->GetSteamUILanguage());
	}
#endif

	return Result;
}

bool UUtils::IsSteamRunningInVR()
{
	LogSteamCoreVeryVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUtils())
	{
		bResult = GetUtils()->IsSteamRunningInVR();
	}
#endif

	return bResult;
}

bool UUtils::IsVRHeadsetStreamingEnabled()
{
	LogSteamCoreVeryVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUtils())
	{
		bResult = GetUtils()->IsVRHeadsetStreamingEnabled();
	}
#endif

	return bResult;
}

void UUtils::SetOverlayNotificationInset(int32 HorizontalInset, int32 VerticalInset)
{
	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
	if (GetUtils())
	{
		GetUtils()->SetOverlayNotificationInset(HorizontalInset, VerticalInset);
	}
#endif
}

bool UUtils::IsSteamInBigPictureMode()
{
	LogSteamCoreVeryVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUtils())
	{
		bResult = GetUtils()->IsSteamInBigPictureMode();
	}
#endif

	return bResult;
}

void UUtils::StartVRDashboard()
{
	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
	if (GetUtils())
	{
		GetUtils()->StartVRDashboard();
	}
#endif
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

#if WITH_STEAMCORE
void UUtils::OnCheckFileSignature(CheckFileSignature_t* pParam)
{
	LogSteamCoreVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		CheckFileSignature.Broadcast(Data);
	});
}

void UUtils::OnGamepadTextInputDismissed(GamepadTextInputDismissed_t* pParam)
{
	LogSteamCoreVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		GamepadTextInputDismissed.Broadcast(Data);
	});
}

void UUtils::OnLowBatteryPower(LowBatteryPower_t* pParam)
{
	LogSteamCoreVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		LowBatteryPower.Broadcast(Data);
	});
}

void UUtils::OnIPCountry(IPCountry_t* pParam)
{
	LogSteamCoreVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		IPCountry.Broadcast(Data);
	});
}

void UUtils::OnSteamShutdown(SteamShutdown_t* pParam)
{
	LogSteamCoreVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		SteamShutdown.Broadcast(Data);
	});
}
#endif