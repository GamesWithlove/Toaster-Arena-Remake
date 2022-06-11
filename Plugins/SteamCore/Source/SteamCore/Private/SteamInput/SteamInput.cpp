/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamInput
*/

#include "SteamInput/SteamInput.h"
#include "SteamCorePluginPrivatePCH.h"

void UInput::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UInput::Deinitialize()
{
	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
bool UInput::Init()
{
	LogVerbose("");

	if (SteamInput())
	{
		return SteamInput()->Init();
	}
	
	return false;
}

bool UInput::Shutdown()
{
	LogVerbose("");
	
	if (SteamInput())
	{
		return SteamInput()->Shutdown();
	}

	return false;
}

int32 UInput::GetConnectedControllers(TArray<FInputHandle>& OutHandles)
{
	LogVeryVerbose("");

	OutHandles.Empty();
	int32 Result = 0;

	if (SteamInput())
	{
		TArray<InputHandle_t> Handles;
		Handles.SetNum(STEAM_INPUT_MAX_COUNT);
		
		Result = SteamInput()->GetConnectedControllers(Handles.GetData());

		if (Result > 0)
		{
			for (const auto& Element : Handles)
			{
				OutHandles.Add(Element);
			}
		}
	}

	return Result;
}

FInputActionSetHandle UInput::GetActionSetHandle(FString ActionSetName)
{
	LogVeryVerbose("");

	FInputActionSetHandle Handle;

	if (SteamInput())
	{
		Handle = SteamInput()->GetActionSetHandle(TCHAR_TO_UTF8(*ActionSetName));
	}

	return Handle;
}

void UInput::ActivateActionSet(FInputHandle Handle, FInputActionSetHandle ActionSetHandle)
{
	LogVerbose("");

	if (SteamInput())
	{
		SteamInput()->ActivateActionSet(Handle, ActionSetHandle);
	}
}

FInputActionSetHandle UInput::GetCurrentActionSet(FInputHandle Handle)
{
	LogVeryVerbose("");

	FInputActionSetHandle FHandle;

	if (SteamInput())
	{
		FHandle = SteamInput()->GetCurrentActionSet(Handle);
	}

	return FHandle;
}

void UInput::ActivateActionSetLayer(FInputHandle Handle, FInputActionSetHandle ActionSetLayerHandle)
{
	LogVerbose("");

	if (SteamInput())
	{
		SteamInput()->ActivateActionSetLayer(Handle, ActionSetLayerHandle);
	}
}

void UInput::DeactivateActionSetLayer(FInputHandle Handle, FInputActionSetHandle ActionSetLayerHandle)
{
	LogVerbose("");

	if (SteamInput())
	{
		SteamInput()->DeactivateActionSetLayer(Handle, ActionSetLayerHandle);
	}
}

void UInput::DeactivateAllActionSetLayers(FInputHandle Handle)
{
	LogVerbose("");

	if (SteamInput())
	{
		SteamInput()->DeactivateAllActionSetLayers(Handle);
	}
}

int32 UInput::GetActiveActionSetLayers(FInputHandle Handle, TArray<FInputActionSetHandle>& OutData)
{
	LogVeryVerbose("");

	int32 Result = 0;
	OutData.Empty();

	if (SteamInput())
	{
		TArray<InputActionSetHandle_t> DataArray;
		DataArray.SetNum(STEAM_INPUT_MAX_ACTIVE_LAYERS);

		Result = SteamInput()->GetActiveActionSetLayers(Handle, DataArray.GetData());

		for (int32 i = 0; i < DataArray.Num(); i++)
		{
			OutData.Add(DataArray[i]);
		}
	}

	return Result;
}

FInputDigitalActionHandle UInput::GetDigitalActionHandle(FString PszActionName)
{
	LogVeryVerbose("");

	FInputDigitalActionHandle Handle;

	if (SteamInput())
	{
		Handle = SteamInput()->GetDigitalActionHandle(TCHAR_TO_UTF8(*PszActionName));
	}

	return Handle;
}

FInputDigitalActionData UInput::GetDigitalActionData(FInputHandle Handle, FInputDigitalActionHandle DigitalActionHandle)
{
	LogVeryVerbose("");

	FInputDigitalActionData FHandle = {};

	if (SteamInput())
	{
		FHandle = SteamInput()->GetDigitalActionData(Handle, DigitalActionHandle);
	}

	return FHandle;
}

int32 UInput::GetDigitalActionOrigins(FInputHandle Handle, FInputActionSetHandle ActionSetHandle, FInputDigitalActionHandle DigitalActionHandle, TArray<ESteamCoreInputActionOrigin>& OutOrigins)
{
	LogVeryVerbose("");

	int32 Result = 0;
	OutOrigins.Empty();

	if (SteamInput())
	{
		TArray<EInputActionOrigin> DataArray;
		DataArray.SetNum(STEAM_INPUT_MAX_ORIGINS);

		Result = SteamInput()->GetDigitalActionOrigins(Handle, ActionSetHandle, DigitalActionHandle, DataArray.GetData());

		for (int32 i = 0; i < DataArray.Num(); i++)
		{
			OutOrigins.Add(static_cast<ESteamCoreInputActionOrigin>(DataArray[i]));
		}
	}

	return Result;
}

FInputAnalogActionHandle UInput::GetAnalogActionHandle(FString PszActionName)
{
	LogVeryVerbose("");

	FInputAnalogActionHandle Handle;

	if (SteamInput())
	{
		Handle = SteamInput()->GetAnalogActionHandle(TCHAR_TO_UTF8(*PszActionName));
	}

	return Handle;
}

FInputAnalogActionData UInput::GetAnalogActionData(FInputHandle Handle, FInputAnalogActionHandle AnalogActionHandle)
{
	LogVeryVerbose("");

	FInputAnalogActionData FHandle = {};

	if (SteamInput())
	{
		FHandle = SteamInput()->GetAnalogActionData(Handle, AnalogActionHandle);
	}
	return FHandle;
}

int32 UInput::GetAnalogActionOrigins(FInputHandle Handle, FInputActionSetHandle ActionSetHandle, FInputAnalogActionHandle AnalogActionHandle, TArray<ESteamCoreInputActionOrigin>& OutOrigins)
{
	LogVeryVerbose("");

	int32 Result = 0;
	OutOrigins.Empty();

	if (SteamInput())
	{
		TArray<EInputActionOrigin> DataArray;
		DataArray.SetNum(STEAM_INPUT_MAX_ORIGINS);

		Result = SteamInput()->GetAnalogActionOrigins(Handle, ActionSetHandle, AnalogActionHandle, DataArray.GetData());

		for (int32 i = 0; i < STEAM_INPUT_MAX_ORIGINS; i++)
		{
			OutOrigins.Add(static_cast<ESteamCoreInputActionOrigin>(DataArray[i]));
		}
	}
	return Result;
}

FString UInput::GetGlyphForActionOrigin(ESteamCoreInputActionOrigin Origin)
{
	LogVeryVerbose("");

	FString Result;

	if (SteamInput())
	{
		Result = TCHAR_TO_UTF8(SteamInput()->GetGlyphForActionOrigin(static_cast<EInputActionOrigin>(Origin)));
	}

	return Result;
}

FString UInput::GetStringForActionOrigin(ESteamCoreInputActionOrigin Origin)
{
	LogVeryVerbose("");

	return SteamInput() ? TCHAR_TO_UTF8(SteamInput()->GetStringForActionOrigin(static_cast<EInputActionOrigin>(Origin))) : "";
	return "";
}

void UInput::StopAnalogActionMomentum(FInputHandle Handle, FInputAnalogActionHandle EAction)
{
	LogVeryVerbose("");

	if (SteamInput())
	{
		SteamInput()->StopAnalogActionMomentum(Handle, EAction);
	}
}

FInputMotionData UInput::GetMotionData(FInputHandle Handle)
{
	LogVeryVerbose("");

	FInputMotionData FHandle = {};

	if (SteamInput())
	{
		FHandle = SteamInput()->GetMotionData(Handle);
	}

	return FHandle;
}

void UInput::TriggerVibration(FInputHandle Handle, uint8 LeftSpeed, uint8 RightSpeed)
{
	LogVerbose("");

	if (SteamInput())
	{
		SteamInput()->TriggerVibration(Handle, LeftSpeed, RightSpeed);
	}
}

void UInput::SetLEDColor(FInputHandle Handle, uint8 ColorR, uint8 ColorG, uint8 ColorB, ESteamCoreInputLEDFlag Flags)
{
	LogVerbose("");

	if (SteamInput())
	{
		SteamInput()->SetLEDColor(Handle, ColorR, ColorG, ColorB, static_cast<int32>(Flags));
	}
}

void UInput::TriggerHapticPulse(FInputHandle Handle, ESteamCoreControllerPad TargetPad, uint8 DurationMicroSec)
{
	LogVerbose("");

	if (SteamInput())
	{
		SteamInput()->TriggerHapticPulse(Handle, static_cast<ESteamControllerPad>(TargetPad), DurationMicroSec);
	}
}

void UInput::TriggerRepeatedHapticPulse(FInputHandle Handle, ESteamCoreControllerPad TargetPad, uint8 DurationMicroSec, uint8 OffMicroSec, uint8 Repeat, uint8 Flags)
{
	LogVerbose("");

	if (SteamInput())
	{
		SteamInput()->TriggerRepeatedHapticPulse(Handle, static_cast<ESteamControllerPad>(TargetPad), DurationMicroSec, OffMicroSec, Repeat, Flags);
	}
}

bool UInput::ShowBindingPanel(FInputHandle Handle)
{
	LogVerbose("");

	bool bResult = false;

	if (SteamInput())
	{
		bResult = SteamInput()->ShowBindingPanel(Handle);
	}

	return bResult;
}

ESteamCoreInputType UInput::GetInputTypeForHandle(FInputHandle Handle)
{
	LogVeryVerbose("");

	ESteamCoreInputType Result = ESteamCoreInputType::Unknown;
	if (SteamInput())
	{
		Result = static_cast<ESteamCoreInputType>(SteamInput()->GetInputTypeForHandle(Handle));
	}
	return Result;
}

FInputHandle UInput::GetControllerForGamepadIndex(int32 Index)
{
	LogVeryVerbose("");

	FInputHandle Handle;
	if (SteamInput())
	{
		Handle = SteamInput()->GetControllerForGamepadIndex(Index);
	}
	return Handle;
}

int32 UInput::GetGamepadIndexForController(FInputHandle Handle)
{
	LogVeryVerbose("");

	int32 Result = 0;

	if (SteamInput())
	{
		Result = SteamInput()->GetGamepadIndexForController(Handle);
	}

	return Result;
}

FString UInput::GetStringForXboxOrigin(ESteamCoreXboxOrigin Origin)
{
	LogVeryVerbose("");

	return SteamInput() ? TCHAR_TO_UTF8(SteamInput()->GetStringForXboxOrigin(static_cast<EXboxOrigin>(Origin))) : "";
}

FString UInput::GetGlyphForXboxOrigin(ESteamCoreXboxOrigin Origin)
{
	LogVeryVerbose("");

	FString Result;

	if (SteamInput())
	{
		Result = TCHAR_TO_UTF8(SteamInput()->GetGlyphForXboxOrigin(static_cast<EXboxOrigin>(Origin)));
	}

	return Result;
}

ESteamCoreInputActionOrigin UInput::GetActionOriginFromXboxOrigin(FInputHandle Handle, ESteamCoreXboxOrigin Origin)
{
	LogVeryVerbose("");

	ESteamCoreInputActionOrigin Result = ESteamCoreInputActionOrigin::None;
	if (SteamInput())
	{
		Result = static_cast<ESteamCoreInputActionOrigin>(SteamInput()->GetActionOriginFromXboxOrigin(Handle, static_cast<EXboxOrigin>(Origin)));
	}
	return Result;
}

ESteamCoreInputActionOrigin UInput::TranslateActionOrigin(ESteamCoreInputType DestinationInputType, ESteamCoreInputActionOrigin SourceOrigin)
{
	LogVerbose("");

	ESteamCoreInputActionOrigin Result = ESteamCoreInputActionOrigin::None;
	if (SteamInput())
	{
		Result = static_cast<ESteamCoreInputActionOrigin>(SteamInput()->TranslateActionOrigin(static_cast<ESteamInputType>(DestinationInputType), static_cast<EInputActionOrigin>(SourceOrigin)));
	}
	return Result;
}

bool UInput::GetDeviceBindingRevision(FInputHandle Handle, int32& OutMajor, int32& OutMinor)
{
	LogVeryVerbose("");

	bool bResult = false;
	OutMajor = 0;
	OutMinor = 0;

	if (SteamInput())
	{
		bResult = SteamInput()->GetDeviceBindingRevision(Handle, &OutMajor, &OutMinor);
	}

	return bResult;
}

int32 UInput::GetRemotePlaySessionID(FInputHandle Handle)
{
	LogVeryVerbose("");

	int32 Result = 0;

	if (SteamInput())
	{
		Result = SteamInput()->GetRemotePlaySessionID(Handle);
	}

	return Result;
}
