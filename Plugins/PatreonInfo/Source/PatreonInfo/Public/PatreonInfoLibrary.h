// Copyright Green Forest Games. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "PatreonInfoData.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PatreonInfoLibrary.generated.h"

/**
 * 
 */
UCLASS()
class PATREONINFO_API UPatreonInfoLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	/**
	 * Opens the system's default browser for prompting the user to authorize your application to talk with the Patreon API.
	 * If login succeeds, the user is presented a 'Patreon Key' that should be entered in your application for API communication.
	 */
	UFUNCTION(BlueprintCallable, Category="Patreon Info")
	static void OpenBrowserForPatreonKey();

	/**
	 * Returns the contents of the system's clipboard.
	 * This is a general purpose implementation for blueprints because Unreal has not implemented this themselves yet (as of 4.26).
	 *
	 * @return Content of clipboard.
	 */
	UFUNCTION(BlueprintPure, Category="Patreon Info")
	static FString GetClipboardContents();

	/**
	 * Creates a PatreonInfoHandler instance. Used for communicating with the API.
	 *
	 * @return The newly created PatreonInfoHandler instance.
	 */
	UFUNCTION(BlueprintCallable, Category="Patreon Info")
	static class UPatreonInfoHandler* CreatePatreonInfoHandler();

	/**
	 * Forces a save on the PatreonInfo save data.
	 * Some Android devices don't grant permission to write to storage at first startup.
	 * Call this function after obtaining permission to write to storage again.
	 */
	UFUNCTION(BlueprintCallable, Category="Patreon Info")
	static void SavePatreonInfo();
	
	static EPatronStatus ParsePatronStatus(const FString& InputString);
	static EPaymentStatus ParsePaymentStatus(const FString& InputString);
	static EPledgeEventType ParsePledgeEventType(const FString& InputString);
};
