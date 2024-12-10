/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamUtils
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCore/SteamCoreModule.h"
#include "SteamUtilsTypes.h"
#include "SteamUtils.generated.h"

UCLASS()
class STEAMCORE_API UUtils : public USteamCoreSubsystem
{
	GENERATED_BODY()
public:
	UUtils() { SubsystemType = ESteamSubsystem::Utils; }
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

public:
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|Utils|Delegates")
	FOnCheckFileSignature CheckFileSignature;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|Utils|Delegates")
	FOnGamepadTextInputDismissed GamepadTextInputDismissed;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|Utils|Delegates")
	FOnIPCountry IPCountry;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|Utils|Delegates")
	FOnLowBatteryPower LowBatteryPower;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|Utils|Delegates")
	FOnSteamShutdown SteamShutdown;

public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	/**
	* Checks if the Overlay needs a present. Only required if using event driven render updates.
	*
	* Typically this call is unneeded if your game has a constantly running frame loop that calls the D3D Present API, 
	* or OGL SwapBuffers API every frame as is the case in most games. 
	* However, if you have a game that only refreshes the screen on an event driven basis then that can break the overlay, as it uses your 
	* Present/SwapBuffers calls to drive it's internal frame loop and it may also need to Present() to the screen any time a 
	* notification happens or when the overlay is brought up over the game by a user. You can use this API to ask the overlay if it 
	* currently need a present in that case, and then you can check for this periodically (roughly 33hz is desirable) and make 
	* sure you refresh the screen with Present or SwapBuffers to allow the overlay to do it's work.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utils")
	static bool BOverlayNeedsPresent();

	/**
	* Gets the App ID of the current process.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utils")
	static int32 GetAppID();

	/**
	* Gets the App ID of the current process.
	*/
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utils|Pure", meta = (DisplayName = "Get App ID (Pure)"))
	static int32 GetAppID_Pure() { return GetAppID(); }

	/**
	* Gets the universe that the current client is connecting to. (Valve use only.)
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utils")
	static ESteamUniverse GetConnectedUniverse();

	/**
	* Gets the current amount of battery power on the computer.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utils")
	static int32 GetCurrentBatteryPower();

	/**
	* Gets the gamepad text input from the Big Picture overlay.
	*
	* This must be called within the GamepadTextInputDismissed_t callback, and only if GamepadTextInputDismissed_t.m_bSubmitted is true.
	*
	* @param	Text		A preallocated buffer to copy the text input string into.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utils")
	static bool GetEnteredGamepadTextInput(FString& Text);

	/**
	* Gets the length of the gamepad text input from the Big Picture overlay.
	*
	* This must be called within the GamepadTextInputDismissed_t callback, and only if GamepadTextInputDismissed_t.m_bSubmitted is true.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utils")
	static int32 GetEnteredGamepadTextLength();

	/**
	* Gets the image bytes from an image handle.
	* 
	* Prior to calling this you must get the size of the image by calling GetImageSize so that you can create your buffer with an appropriate size. You can then allocate your buffer with the width and height as: width * height * 4. The image is provided in RGBA format. This call can be somewhat expensive as it converts from the compressed type (JPG, PNG, TGA) and provides no internal caching of returned buffer, thus it is highly recommended to only call this once per image handle and cache the result. This function is only used for Steam Avatars and Achievement images and those are not expected to change mid game.
	*
	* @param	iImage		The handle to the image that will be obtained.
	* @param	OutBuffer		The buffer that will be filled.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utils")
	static bool GetImageRGBA(int iImage, TArray<uint8>& OutBuffer);

	/**
	* Gets the size of a Steam image handle.
	*
	* This must be called before calling GetImageRGBA to create an appropriately sized buffer that will be filled with the raw image data.
	*
	* @param	iImage		The image handle to get the size for.
	* @param	Width		Returns the width of the image.
	* @param	Height		Returns the height of the image.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utils")
	static bool GetImageSize(int iImage, int32& Width, int32& Height);
	/**
	* Returns the number of IPC calls made since the last time this function was called.
	*
	* Used for perf debugging so you can determine how many IPC (Inter-Process Communication) calls your game makes per frame
	* Every IPC call is at minimum a thread context switch if not a process one so you want to rate control how often you do them.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utils")
	static int32 GetIPCCallCount();

	/**
	* Returns the 2 digit ISO 3166-1-alpha-2 format country code which client is running in. e.g "US" or "UK".
	*
	* This is looked up via an IP-to-location database.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utils")
	static FString GetIPCountry();

	/**
	* Returns the number of seconds since the application was active.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utils")
	static int32 GetSecondsSinceAppActive();

	/**
	* Returns the number of seconds since the user last moved the mouse.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utils")
	static int32 GetSecondsSinceComputerActive();

	/**
	* Returns the Steam server time in Unix epoch format. (Number of seconds since Jan 1, 1970 UTC)
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utils")
	static int32 GetServerRealTime();

	/**
	* Returns the language the steam client is running in.
	*
	* You probably want ISteamApps::GetCurrentGameLanguage instead, this should only be used in very special cases.
	* For a full list of languages see Supported Languages.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utils")
	static FString GetSteamUILanguage();

	/**
	* Checks if the Steam Overlay is running & the user can access it.
	*
	* The overlay process could take a few seconds to start & hook the game process, so this function will initially return false while the overlay is loading.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utils")
	static bool IsOverlayEnabled();

	/**
	* Returns whether the current launcher is a Steam China launcher. You can cause the client to behave as the Steam China launcher by adding -dev -steamchina to the command line when running Steam.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utils")
	static bool IsSteamChinaLauncher();

	/**
	* Initializes text filtering.
	* 
	* Returns false if filtering is unavailable for the language the user is currently running in.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utils")
	static bool InitFilterText();

	/*
	 * Returns true if currently running on the Steam Deck device
	 * This function is only available in UE 5.1+
	 */ 
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utils")
	virtual bool IsSteamRunningOnSteamDeck();

	/**
	* Checks if Steam & the Steam Overlay are running in Big Picture mode.
	*
	* Games must be launched through the Steam client to enable the Big Picture overlay.
	* During development, a game can be added as a non-steam game to the developers library to test this feature.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utils")
	static bool IsSteamInBigPictureMode();

	/**
	* Checks if Steam is running in VR mode.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utils")
	static bool IsSteamRunningInVR();

	/**
	* Checks if the HMD view will be streamed via Steam Remote Play.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utils")
	static bool IsVRHeadsetStreamingEnabled();

	/**
	* Sets the inset of the overlay notification from the corner specified by SetOverlayNotificationPosition.
	*
	* A value of (0, 0) resets the position into the corner.
	* This position is per-game and is reset each launch.
	*
	* @param	HorizontalInset		The horizontal (left-right) distance in pixels from the corner.
	* @param	VerticalInset		The vertical (up-down) distance in pixels from the corner.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utils")
	static void SetOverlayNotificationInset(int32 HorizontalInset, int32 VerticalInset);

	/**
	* Sets which corner the Steam overlay notification popup should display itself in.
	*
	* You can also set the distance from the specified corner by using SetOverlayNotificationInset.
	* This position is per-game and is reset each launch.
	*
	* @param	NotificationPosition	position
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utils")
	static void SetOverlayNotificationPosition(ESteamNotificationPosition NotificationPosition);

	/**
	* Set whether the HMD content will be streamed via Steam Remote Play.
	*
	* If this is enabled, then the scene in the HMD headset will be streamed, and remote input will not be allowed. Otherwise if this is disabled, then the application window will be streamed instead, and remote input will be allowed. VR games default to enabled unless "VRHeadsetStreaming" "0" is in the extended appinfo for a game.
	* This is useful for games that have asymmetric multiplayer gameplay.
	*
	* @param	bEnabled	Turns VR HMD Streaming on (true) or off (false).
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utils")
	static void SetVRHeadsetStreamingEnabled(bool bEnabled);

	/**
	* Activates the Big Picture text input dialog which only supports gamepad input.
	*
	* @param	InputMode			Selects the input mode to use, either Normal or Password (hidden text)
	* @param	LineInputMode		Controls whether to use single or multi line input.
	* @param	Description			Sets the description that should inform the user what the input dialog is for.
	* @param	CharMax				The maximum number of characters that the user can input.
	* @param	ExistingText		Sets the preexisting text which the user can edit.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utils")
	static bool ShowGamepadTextInput(ESteamGamepadTextInputMode InputMode, ESteamGamepadTextInputLineMode LineInputMode, FString Description, int32 CharMax, FString ExistingText);

	/**
	* Asks Steam to create and render the OpenVR dashboard.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utils")
	static void StartVRDashboard();

private:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Callbacks
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
#if ENABLE_STEAMCORE
	STEAM_CALLBACK_MANUAL(UUtils, OnCheckFileSignature, CheckFileSignature_t, OnCheckFileSignatureCallback);
	STEAM_CALLBACK_MANUAL(UUtils, OnGamepadTextInputDismissed, GamepadTextInputDismissed_t, OnGamepadTextInputDismissedCallback);
	STEAM_CALLBACK_MANUAL(UUtils, OnLowBatteryPower, LowBatteryPower_t, OnLowBatteryPowerCallback);
	STEAM_CALLBACK_MANUAL(UUtils, OnIPCountry, IPCountry_t, OnIPCountryCallback);
	STEAM_CALLBACK_MANUAL(UUtils, OnSteamShutdown, SteamShutdown_t, OnSteamShutdownCallback);
#endif
};
