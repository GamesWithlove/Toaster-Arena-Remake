/**
* Copyright (C) 2017-2025 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamScreenshots
*/

#include "SteamScreenshots/SteamScreenshots.h"
#include "SteamCorePluginPrivatePCH.h"

void UScreenshots::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

#if WITH_STEAMCORE
	OnScreenshotReadyCallback.Register(this, &UScreenshots::OnScreenshotReady);
	OnScreenshotRequestedCallback.Register(this, &UScreenshots::OnScreenshotRequested);

	if (IsRunningDedicatedServer())
	{
		OnScreenshotReadyCallback.SetGameserverFlag();
		OnScreenshotRequestedCallback.SetGameserverFlag();
	}
#endif
}

void UScreenshots::Deinitialize()
{
#if WITH_STEAMCORE
	OnScreenshotReadyCallback.Unregister();
	OnScreenshotRequestedCallback.Unregister();
#endif
	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

FScreenshotHandle UScreenshots::AddScreenshotToLibrary(FString FileName, FString ThumbnailFilename, int32 Width, int32 Height)
{
	LogSteamCoreVerbose("");

	FScreenshotHandle Handle;

#if WITH_STEAMCORE
	if (SteamScreenshots())
	{
		const FTCHARToUTF8 ConvertedFileName(*FileName);
		const FTCHARToUTF8 ConvertedThumbnailFileName(*ThumbnailFilename);
		
		Handle = SteamScreenshots()->AddScreenshotToLibrary(ConvertedFileName.Get(), ConvertedThumbnailFileName.Get(), Width, Height);
	}
#endif

	return Handle;
}

FScreenshotHandle UScreenshots::AddVRScreenshotToLibrary(ESteamVRScreenshotType EType, FString FileName, FString VRFileName)
{
	LogSteamCoreVerbose("");

	FScreenshotHandle Handle;

#if WITH_STEAMCORE
	if (SteamScreenshots())
	{
		const FTCHARToUTF8 FileNameAnsi(*FileName);
		const FTCHARToUTF8 VrFileNameAnsi(*VRFileName);

		Handle = SteamScreenshots()->AddVRScreenshotToLibrary(static_cast<EVRScreenshotType>(EType), FileNameAnsi.Get(), VrFileNameAnsi.Get());
	}
#endif

	return Handle;
}

void UScreenshots::HookScreenshots(bool bHook)
{
	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
	if (SteamScreenshots())
	{
		SteamScreenshots()->HookScreenshots(bHook);
	}
#endif
}

bool UScreenshots::IsScreenshotsHooked()
{
	LogSteamCoreVeryVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (SteamScreenshots())
	{
		bResult = SteamScreenshots()->IsScreenshotsHooked();
	}
#endif

	return bResult;
}

bool UScreenshots::SetLocation(FScreenshotHandle Handle, FString Location)
{
	LogSteamCoreVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (SteamScreenshots())
	{
		bResult = SteamScreenshots()->SetLocation(Handle, TCHAR_TO_UTF8(*Location));
	}
#endif

	return bResult;
}

bool UScreenshots::TagPublishedFile(FScreenshotHandle Handle, FPublishedFileID PublishedFileID)
{
	LogSteamCoreVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (SteamScreenshots())
	{
		bResult = SteamScreenshots()->TagPublishedFile(Handle, PublishedFileID);
	}
#endif

	return bResult;
}

bool UScreenshots::TagUser(FScreenshotHandle Handle, FSteamID SteamID)
{
	LogSteamCoreVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (SteamScreenshots())
	{
		bResult = SteamScreenshots()->TagUser(Handle, SteamID);
	}
#endif

	return bResult;
}

void UScreenshots::TriggerScreenshot()
{
	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
	if (SteamScreenshots())
	{
		SteamScreenshots()->TriggerScreenshot();
	}
#endif
}

FScreenshotHandle UScreenshots::WriteScreenshot(TArray<uint8> PubRGB, int32 Width, int32 Height)
{
	LogSteamCoreVerbose("");

	FScreenshotHandle Handle;

#if WITH_STEAMCORE
	if (SteamScreenshots())
	{
		Handle = SteamScreenshots()->WriteScreenshot(PubRGB.GetData(), PubRGB.Num(), Width, Height);
	}
#endif

	return Handle;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

#if WITH_STEAMCORE
void UScreenshots::OnScreenshotReady(ScreenshotReady_t* pParam)
{
	LogSteamCoreVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		ScreenshotReady.Broadcast(Data);
	});
}

void UScreenshots::OnScreenshotRequested(ScreenshotRequested_t* pParam)
{
	LogSteamCoreVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		ScreenshotRequested.Broadcast(Data);
	});
}
#endif