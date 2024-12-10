/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamScreenshots
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCore/SteamCoreModule.h"
#include "SteamScreenshotsTypes.h"
#include "SteamScreenshots.generated.h"

UCLASS()
class STEAMCORE_API UScreenshots : public USteamCoreSubsystem
{
	GENERATED_BODY()
public:
	UScreenshots() { SubsystemType = ESteamSubsystem::Screenshots; }
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

public:
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|Screenshots|Delegates")
	FOnScreenshotReady ScreenshotReady;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|Screenshots|Delegates")
	FOnScreenshotRequested ScreenshotRequested;

public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	/**
	* Adds a screenshot to the user's Steam screenshot library from disk.
	*
	* @param	FileName				The absolute file path to the JPG, PNG, or TGA screenshot.
	* @param	ThumbnailFilename		The absolute file path to an optional thumbnail image. This must be 200px wide, as described by k_ScreenshotThumbWidth and the same aspect ratio. Pass NULL if there is no thumbnail, one will be created automatically.
	* @param	Width					The width of the screenshot.
	* @param	Height					The height of the screenshot.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Screenshots")
	static FScreenshotHandle AddScreenshotToLibrary(FString FileName, FString ThumbnailFilename, int32 Width, int32 Height);

	/**
	* Adds a VR screenshot to the user's Steam screenshot library from disk in the supported type.
	*
	* @param	EType			The type of VR screenshot that this is.
	* @param	FileName		The absolute file path to a 2D JPG, PNG, or TGA version of the screenshot for the library view.
	* @param	VRFileName		The absolute file path to the VR screenshot, this should be the same type of screenshot specified in eType.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Screenshots")
	static FScreenshotHandle AddVRScreenshotToLibrary(ESteamVRScreenshotType EType, FString FileName, FString VRFileName);

	/**
	* Toggles whether the overlay handles screenshots when the user presses the screenshot hotkey, or if the game handles them.
	*
	* Hooking is disabled by default, and only ever enabled if you do so with this function.
	* If the hooking is enabled, then the ScreenshotRequested_t callback will be sent if the user presses the hotkey or when TriggerScreenshot is called, and then the game is expected to call WriteScreenshot or AddScreenshotToLibrary in response.
	* You can check if hooking is enabled with IsScreenshotsHooked.
	*
	* @param	bHook	Enable (true) or disable (false) hooking?
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Screenshots")
	static void HookScreenshots(bool bHook);

	/** 
	* Checks if the app is hooking screenshots, or if the Steam Overlay is handling them.
	*
	* This can be toggled with HookScreenshots.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Screenshots")
	static bool IsScreenshotsHooked();

	/**
	* Sets optional metadata about a screenshot's location. For example, the name of the map it was taken on.
	*
	* You can get the handle to tag the screenshot once it has been successfully saved from the ScreenshotReady_t callback or via the WriteScreenshot, AddScreenshotToLibrary, AddVRScreenshotToLibrary calls.
	*
	* @param	Handle		The handle to the screenshot to tag.
	* @param	Location	The location in the game where this screenshot was taken. This can not be longer than k_cubUFSTagValueMax.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Screenshots")
	static bool SetLocation(FScreenshotHandle Handle, FString Location);

	/**
	* Tags a published file as being visible in the screenshot.
	*
	* You can tag up to the value declared by k_nScreenshotMaxTaggedPublishedFiles in a single screenshot. Tagging more items than that will just be discarded.
	* This function has a built in delay before saving the tag which allows you to call it repeatedly for each item.
	* You can get the handle to tag the screenshot once it has been successfully saved from the ScreenshotReady_t callback or via the WriteScreenshot, AddScreenshotToLibrary, AddVRScreenshotToLibrary calls.
	*
	* @param	Handle				The handle to the screenshot to tag.
	* @param	PublishedFileID		The workshop item ID that is in the screenshot.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Screenshots")
	static bool TagPublishedFile(FScreenshotHandle Handle, FPublishedFileID PublishedFileID);

	/**
	* Tags a Steam user as being visible in the screenshot.
	*
	* You can tag up to the value declared by k_nScreenshotMaxTaggedUsers in a single screenshot. Tagging more users than that will just be discarded.
	* This function has a built in delay before saving the tag which allows you to call it repeatedly for each item.
	* You can get the handle to tag the screenshot once it has been successfully saved from the ScreenshotReady_t callback or via the WriteScreenshot, AddScreenshotToLibrary, AddVRScreenshotToLibrary calls.
	*
	* @param	Handle		The handle to the screenshot to tag.
	* @param	SteamID		The Steam ID of a user that is in the screenshot.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Screenshots")
	static bool TagUser(FScreenshotHandle Handle, FSteamID SteamID);

	/**
	* Either causes the Steam Overlay to take a screenshot, or tells your screenshot manager that a screenshot needs to be taken. Depending on the value of IsScreenshotsHooked.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Screenshots")
	static void TriggerScreenshot();

	/**
	* Writes a screenshot to the user's Steam screenshot library given the raw image data, which must be in RGB format.
	*
	* @param	PubRGB		The buffer containing the raw RGB data from the screenshot.
	* @param	Width		The width of the screenshot in pixels.
	* @param	Height		The height of the screenshot in pixels.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Screenshots")
	static FScreenshotHandle WriteScreenshot(TArray<uint8> PubRGB, int32 Width, int32 Height);

private:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Callbacks
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

#if ENABLE_STEAMCORE
	STEAM_CALLBACK_MANUAL(UScreenshots, OnScreenshotReady, ScreenshotReady_t, OnScreenshotReadyCallback);
	STEAM_CALLBACK_MANUAL(UScreenshots, OnScreenshotRequested, ScreenshotRequested_t, OnScreenshotRequestedCallback);
#endif
};
