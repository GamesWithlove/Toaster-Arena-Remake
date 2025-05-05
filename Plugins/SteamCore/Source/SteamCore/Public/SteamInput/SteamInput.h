/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamInput
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCore/SteamCoreModule.h"
#include "SteamInputTypes.h"
#include "SteamInput.generated.h"

UCLASS()
class STEAMCORE_API UInput : public USteamCoreSubsystem
{
	GENERATED_BODY()
public:
	UInput() { SubsystemType = ESteamSubsystem::Input; }
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	// Init and Shutdown must be called when starting/ending use of this interface
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
	bool Init();
	// Init and Shutdown must be called when starting/ending use of this interface
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
	bool Shutdown();
	
	/**
	* Enumerates currently connected controllers by filling OutHandles with controller handles.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
	int32 GetConnectedControllers(TArray<FInputHandle>& OutHandles);
	
	/**
	* Lookup the Handle for an Action Set. Best to do this once on startup, and store the Handles for all future API calls.
	*
	* @param	ActionSetName	The string identifier of an action set defined in the game's VDF file.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
	FInputActionSetHandle GetActionSetHandle(FString ActionSetName);

	/**
	* Reconfigure the controller to use the specified action set (ie "Menu", "Walk", or "Drive").
	*
	* This is cheap, and can be safely called repeatedly. It's often easier to repeatedly call it in your state loops, instead of trying to place it in all of your state transitions.
	*
	* @param	Handle				The Handle of the controller you want to activate an action set for.
	* @param	ActionSetHandle		The Handle of the action set you want to activate.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
	void ActivateActionSet(FInputHandle Handle, FInputActionSetHandle ActionSetHandle);

	/**
	* Get the currently active action set for the specified controller.
	*
	* @param	Handle	The Handle of the controller you want to query.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
	FInputActionSetHandle GetCurrentActionSet(FInputHandle Handle);

	/**
	* Reconfigure the controller to use the specified action set layer.
	*
	* @param	Handle					The Handle of the controller you want to activate an action set layer for.
	* @param	ActionSetLayerHandle	The Handle of the action set layer you want to activate.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
	void ActivateActionSetLayer(FInputHandle Handle, FInputActionSetHandle ActionSetLayerHandle);

	/**
	* Reconfigure the controller to stop using the specified action set layer.
	*
	* @param	Handle					The Handle of the controller you want to deactivate an action set layer for.
	* @param	ActionSetLayerHandle	The Handle of the action set layer you want to deactivate.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
	void DeactivateActionSetLayer(FInputHandle Handle, FInputActionSetHandle ActionSetLayerHandle);

	/**
	* Reconfigure the controller to stop using all action set layers.
	*
	* @param	Handle	The Handle of the controller you want to deactivate all action set layers for.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
	void DeactivateAllActionSetLayers(FInputHandle Handle);

	/**
	* Fill an array with all of the currently active action set layers for a specified controller Handle.
	*
	* @param	Handle		The Handle of the controller you want to deactivate all action set layers for.
	* @param	Data		This must point to a STEAM_INPUT_MAX_COUNT sized array of InputHandle_t.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
	int32 GetActiveActionSetLayers(FInputHandle Handle, TArray<FInputActionSetHandle>& Data);

	/**
	* Get the Handle of the specified digital action.
	*
	* @param	PszActionName	The string identifier of the digital action defined in the game's VDF file.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
	FInputDigitalActionHandle GetDigitalActionHandle(FString PszActionName);

	/**
	* Returns the current state of the supplied digital game action.
	*
	* @param	Handle					The Handle of the controller you want to query.
	* @param	DigitalActionHandle		The Handle of the digital action you want to query.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
	FInputDigitalActionData GetDigitalActionData(FInputHandle Handle, FInputDigitalActionHandle DigitalActionHandle);

	/**
	* Get the Origin(s) for a digital action within an action set by filling OriginsOut with EInputActionOrigin Handles. Use this to display the appropriate on-screen prompt for the action.
	*
	* @param	Handle					The Handle of the controller you want to query.
	* @param	ActionSetHandle			The Handle of the action set you want to query.
	* @param	DigitalActionHandle		The Handle of the digital aciton you want to query.
	* @param	OriginsOut				A STEAM_INPUT_MAX_ORIGINS sized array of EInputActionOrigin Handles.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
	int32 GetDigitalActionOrigins(FInputHandle Handle, FInputActionSetHandle ActionSetHandle, FInputDigitalActionHandle DigitalActionHandle, TArray<TEnumAsByte<ESteamCoreInputActionOrigin>>& OriginsOut);

	/**
	* Get the Handle of the specified Analog action.
	*
	* @param	PszActionName		The string identifier of the analog action defined in the game's VDF file.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
	FInputAnalogActionHandle GetAnalogActionHandle(FString PszActionName);

	/**
	* Returns the current state of the supplied analog game action.
	*
	* @param	Handle					The Handle of the controller you want to query.
	* @param	AnalogActionHandle		The Handle of the analog action you want to query.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
	FInputAnalogActionData GetAnalogActionData(FInputHandle Handle, FInputAnalogActionHandle AnalogActionHandle);

	/**
	* Get the Origin(s) for an analog action within an action set by filling OriginsOut with EInputActionOrigin Handles. Use this to display the appropriate on-screen prompt for the action.
	*
	* @param	Handle					The Handle of the controller you want to query.
	* @param	ActionSetHandle			The Handle of the action set you want to query.
	* @param	AnalogActionHandle		The Handle of the analog action you want to query.
	* @param	OriginsOut				A STEAM_INPUT_MAX_ORIGINS sized array of EInputActionOrigin Handles.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
	int32 GetAnalogActionOrigins(FInputHandle Handle, FInputActionSetHandle ActionSetHandle, FInputAnalogActionHandle AnalogActionHandle, TArray<TEnumAsByte<ESteamCoreInputActionOrigin>>& OriginsOut);

	/**
	* Get a local path to art for on-screen glyph for a particular Origin.
	*
	* @param	Origin
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
	FString GetGlyphForActionOrigin(ESteamCoreInputActionOrigin Origin);

	/**
	* Returns a localized string (from Steam's language setting) for the specified Origin.
	*
	* @param	Origin
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
	FString GetStringForActionOrigin(ESteamCoreInputActionOrigin Origin);

	/**
	* Stops the momentum of an analog action (where applicable, ie a touchpad w/ virtual trackball settings).
	*
	* @param	Handle		The Handle of the controller to affect.
	* @param	EAction		The analog action to stop momentum for.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
	void StopAnalogActionMomentum(FInputHandle Handle, FInputAnalogActionHandle EAction);

	/**
	* Returns raw motion data for the specified controller.
	*
	* @param	Handle	The Handle of the controller you want to get motion data for.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
	FInputMotionData GetMotionData(FInputHandle Handle);

	/**
	* Trigger a vibration event on supported controllers.
	*
	* @param	Handle			The Handle of the controller to affect.
	* @param	LeftSpeed		The intensity value for the left rumble motor.
	* @param	RightSpeed		The intensity value of the right rumble motor.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
	void TriggerVibration(FInputHandle Handle, uint8 LeftSpeed, uint8 RightSpeed);

	/**
	* Set the controller LED color on supported controllers.
	*
	* @param	Handle		The Handle of the controller to affect.
	* @param	ColorR		The red component of the color to set (0-255).
	* @param	ColorG		The green component of the color to set (0-255).
	* @param	ColorB		The blue component of the color to set (0-255).
	* @param	Flags
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
	void SetLEDColor(FInputHandle Handle, uint8 ColorR, uint8 ColorG, uint8 ColorB, ESteamCoreInputLEDFlag Flags);

	/**
	* Triggers a (low-level) haptic pulse on supported controllers.
	*
	* @param	Handle				The Handle of the controller to affect.
	* @param	TargetPad			Which haptic touch pad to affect.
	* @param	DurationMicroSec	Duration of the pulse, in microseconds (1/1,000,000th of a second)
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
	void TriggerHapticPulse(FInputHandle Handle, ESteamCoreControllerPad TargetPad, uint8 DurationMicroSec);

	/**
	* Triggers a repeated haptic pulse on supported controllers.
	*
	* @param	Handle				The Handle of the controller to affect.
	* @param	TargetPad			Which haptic touch pad to affect.
	* @param	DurationMicroSec	Duration of the pulse, in microseconds (1/1,000,000th of a second).
	* @param	OffMicroSec			Duration of the pause between pulses, in microseconds.
	* @param	Repeat				Number of times to repeat the usDurationMicroSec / usOffMicroSec duty cycle.
	* @param	Flags				Currently unused and reserved for future use.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
	void TriggerRepeatedHapticPulse(FInputHandle Handle, ESteamCoreControllerPad TargetPad, uint8 DurationMicroSec, uint8 OffMicroSec, uint8 Repeat, uint8 Flags);

	/**
	* Invokes the Steam overlay and brings up the binding screen.
	*
	* @param	Handle	The Handle of the controller you want to bring up the binding screen for.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
	bool ShowBindingPanel(FInputHandle Handle);

	/**
	* Returns the input type (device model) for the specified controller. This tells you if a given controller is a Steam controller, XBox 360 controller, PS4 controller, etc. For more details, see Steam's Supported Controller Database.
	*
	* @param	Handle	The Handle of the controller whose input type (device model) you want to query
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
	ESteamCoreInputType GetInputTypeForHandle(FInputHandle Handle);

	/**
	* Returns the associated controller Handle for the specified emulated gamepad. Can be used with GetInputTypeForHandle to determine the controller type of a controller using Steam Input Gamepad Emulation.
	*
	* @param	Index	The index of the emulated gamepad you want to get a controller Handle for.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
	FInputHandle GetControllerForGamepadIndex(int32 Index);

	/**
	* Returns the associated gamepad index for the specified controller, if emulating a gamepad.
	*
	* @param	Handle		The Handle of the controller you want to get a gamepad index for.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
	int32 GetGamepadIndexForController(FInputHandle Handle);

	/**
	* Returns the associated gamepad index for the specified controller, if emulating a gamepad or -1 if not associated with an Xinput index
	*
	* @param	Origin
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
	FString GetStringForXboxOrigin(ESteamCoreXboxOrigin Origin);

	/**
	* Returns the associated gamepad index for the specified controller, if emulating a gamepad or -1 if not associated with an Xinput index
	*
	* @param	Origin
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
	FString GetGlyphForXboxOrigin(ESteamCoreXboxOrigin Origin);

	/**
	* Get an action Origin that you can use in your glyph look up table or passed into GetGlyphForActionOrigin or GetStringForActionOrigin
	*
	* @param	Handle		The Handle of the controller to affect. You can use GetControllerForGamepadIndex to get this Handle
	* @param	Origin		This is the button you want to get the image for ex: k_EXboxOrigin_A
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
	ESteamCoreInputActionOrigin GetActionOriginFromXboxOrigin(FInputHandle Handle, ESteamCoreXboxOrigin Origin);

	/**
	* Convert an Origin to another controller type - for inputs not present on the other controller type this will return k_EInputActionOrigin_None
	*
	* When a new input type is added you will be able to pass in k_ESteamInputType_Unknown and the closest Origin that your version of the SDK recognized will be returned
	* ex: if a Playstation 5 controller was released this function would return Playstation 4 Origins.
	*
	* @param	DestinationInputType
	* @param	SourceOrigin
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
	ESteamCoreInputActionOrigin TranslateActionOrigin(ESteamCoreInputType DestinationInputType, ESteamCoreInputActionOrigin SourceOrigin);

	/**
	* Get's the major and minor device binding revisions for Steam Input API configurations. Minor revisions are for small changes such as adding a new option action or updating localization in the configuration. When updating a Minor revision only one new configuration needs to be update with the "Use Action Block" flag set. Major revisions are to be used when changing the number of action sets or otherwise reworking configurations to the degree that older configurations are no longer usable. When a user's binding disagree's with the major revision of the current official configuration Steam will forcibly update the user to the new configuration. New configurations will need to be made for every controller when updating the Major revision.
	*
	* @param	Handle		The Handle of the controller to query.
	* @param	Major		Pointer to int that Major binding revision will be populated into
	* @param	Minor		Pointer to int that Minor binding revision will be populated into
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
	bool GetDeviceBindingRevision(FInputHandle Handle, int32& Major, int32& Minor);

	/**
	* Get the Steam Remote Play session ID associated with a device, or 0 if there is no session associated with it. See isteamremoteplay.h for more information on Steam Remote Play sessions
	*
	* @param	Handle The Handle of the controller to query.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
	int32 GetRemotePlaySessionID(FInputHandle Handle);
};
