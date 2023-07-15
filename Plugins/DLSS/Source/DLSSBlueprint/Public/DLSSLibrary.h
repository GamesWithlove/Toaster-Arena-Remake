/*
* Copyright (c) 2020 NVIDIA CORPORATION.  All rights reserved.
*
* NVIDIA Corporation and its licensors retain all intellectual property and proprietary
* rights in and to this software, related documentation and any modifications thereto.
* Any use, reproduction, disclosure or distribution of this software and related
* documentation without an express license agreement from NVIDIA Corporation is strictly
* prohibited.
*
* TO THE MAXIMUM EXTENT PERMITTED BY APPLICABLE LAW, THIS SOFTWARE IS PROVIDED *AS IS*
* AND NVIDIA AND ITS SUPPLIERS DISCLAIM ALL WARRANTIES, EITHER EXPRESS OR IMPLIED,
* INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
* PARTICULAR PURPOSE.  IN NO EVENT SHALL NVIDIA OR ITS SUPPLIERS BE LIABLE FOR ANY
* SPECIAL, INCIDENTAL, INDIRECT, OR CONSEQUENTIAL DAMAGES WHATSOEVER (INCLUDING, WITHOUT
* LIMITATION, DAMAGES FOR LOSS OF BUSINESS PROFITS, BUSINESS INTERRUPTION, LOSS OF
* BUSINESS INFORMATION, OR ANY OTHER PECUNIARY LOSS) ARISING OUT OF THE USE OF OR
* INABILITY TO USE THIS SOFTWARE, EVEN IF NVIDIA HAS BEEN ADVISED OF THE POSSIBILITY OF
* SUCH DAMAGES.
*/
#pragma once

#include "Modules/ModuleManager.h"

#include "UObject/ObjectMacros.h"
#include "UObject/Object.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Misc/CoreDelegates.h"

#include "DLSSLibrary.generated.h"

class FDLSSUpscaler;
class FDelegateHandle;

#ifndef WITH_DLSS
#define WITH_DLSS 0
#endif

UENUM(BlueprintType)
enum class UDLSSSupport : uint8
{
	Supported UMETA(DisplayName = "Supported"),

	NotSupported UMETA(DisplayName = "Not Supported"),
	NotSupportedIncompatibleHardware UMETA(DisplayName = "Incompatible Hardware", ToolTip = "DLSS requires an NVIDIA RTX GPU"),
	NotSupportedDriverOutOfDate UMETA(DisplayName = "Driver Out of Date", ToolTip = "The driver is outdated. Also see GetDLSSMinimumDriverVersion"),
	NotSupportedOperatingSystemOutOfDate UMETA(DisplayName = "Operating System Out of Date", ToolTip = "DLSS requires at least Windows 10 Fall 2017 Creators Update 64-bit, (v1709, build 16299)"),
	NotSupportedByPlatformAtBuildTime UMETA(DisplayName = "Platform Not Supported At Build Time", ToolTip = "This platform doesn't not support DLSS at build time. Currently DLSS is only supported on Windows 64"),
	NotSupportedIncompatibleAPICaptureToolActive UMETA(DisplayName = "Incompatible API Capture Tool Active", ToolTip = "DLSS is not compatible with an active API capture tool such as RenderDoc.")
};


UENUM(BlueprintType)
enum class UDLSSMode : uint8
{
	Off              UMETA(DisplayName = "Off"),
	Auto             UMETA(DisplayName = "Auto"),
	DLAA             UMETA(DisplayName = "DLAA"),
	UltraQuality     UMETA(DisplayName = "Ultra Quality"),
	Quality          UMETA(DisplayName = "Quality"),
	Balanced         UMETA(DisplayName = "Balanced"),
	Performance      UMETA(DisplayName = "Performance"),
	UltraPerformance UMETA(DisplayName = "Ultra Performance")
};

UCLASS(MinimalAPI)
class  UDLSSLibrary : public UBlueprintFunctionLibrary
{
	friend class FDLSSBlueprintModule;
	GENERATED_BODY()
public:

	/** Checks whether DLSS/DLAA is supported by the current GPU. Further details can be retrieved via QueryDLSSSupport*/
	UFUNCTION(BlueprintPure, Category = "DLSS", meta = (DisplayName = "Is NVIDIA DLSS Supported"))
	static DLSSBLUEPRINT_API bool IsDLSSSupported();

	/** Checks whether DLSS/DLAA is supported by the current GPU	*/
	UFUNCTION(BlueprintPure, Category = "DLSS", meta = (DisplayName = "Query NVIDIA DLSS Support"))
	static DLSSBLUEPRINT_API UDLSSSupport QueryDLSSSupport();

	/** If QueryDLSSSupport returns "NotSupportedDriverOutOfDate", then MinDriverVersionMajor and MinDriverVersionMinor contains the required driver version.*/
	UFUNCTION(BlueprintPure, Category = "DLSS", meta = (DisplayName = "Get DLSS Minimum DriverVersion"))
	static DLSSBLUEPRINT_API void GetDLSSMinimumDriverVersion(int32& MinDriverVersionMajor, int32& MinDriverVersionMinor);

	/** Enable/disable DLAA. Note that while DLAA is enabled, DLSS will be automatically disabled */
	UFUNCTION(BlueprintCallable, Category = "DLSS", meta = (DisplayName = "Enable DLAA"))
	static DLSSBLUEPRINT_API void EnableDLAA(bool bEnabled);

	/** Checks whether DLAA is enabled */
	UFUNCTION(BlueprintPure, Category = "DLSS", meta = (DisplayName = "Is DLAA Enabled"))
	static DLSSBLUEPRINT_API bool IsDLAAEnabled();

	/** Checks whether a DLSS mode is supported */
	UFUNCTION(BlueprintPure, Category = "DLSS", meta = (DisplayName = "Is DLSS Mode Supported"))
	static DLSSBLUEPRINT_API bool IsDLSSModeSupported(UDLSSMode DLSSMode);

	/** Retrieves all supported DLSS modes. Can be used to populate UI */
	UFUNCTION(BlueprintPure, Category = "DLSS", meta = (DisplayName = "Get Supported DLSS Modes"))
	static DLSSBLUEPRINT_API TArray<UDLSSMode> GetSupportedDLSSModes();

	/** Provides additional details (such as screen percentage ranges) about a DLSS mode. Screen Resolution is required for Auto mode */
	UFUNCTION(BlueprintPure, Category = "DLSS", meta = (DisplayName = "Get DLSS Mode Information"))
	static DLSSBLUEPRINT_API void GetDLSSModeInformation(UDLSSMode DLSSMode, FVector2D ScreenResolution, bool& bIsSupported, float& OptimalScreenPercentage, bool& bIsFixedScreenPercentage, float& MinScreenPercentage, float& MaxScreenPercentage, float& OptimalSharpness);

	/** The global screen percentage range that DLSS supports. Excludes DLSS modes with fixed screen percentage. Also see GetDLSSModeInformation*/
	UFUNCTION(BlueprintPure, Category = "DLSS", meta = (DisplayName = "Get DLSS Screenpercentage Range"))
	static DLSSBLUEPRINT_API void GetDLSSScreenPercentageRange(float& MinScreenPercentage, float& MaxScreenPercentage);

	/** Sets the console variables to enable/disable DLSS (r.NGX.DLSS.Enable, r.NGX.DLSS.Quality)*/
	UFUNCTION(BlueprintCallable, Category = "DLSS", meta = (DisplayName = "Set DLSS Mode"))
	static DLSSBLUEPRINT_API void SetDLSSMode(UDLSSMode DLSSMode);

	/* Reads the console variables to infer the current DLSS mode (r.NGX.DLSS.Enable, r.NGX.DLSS.Quality, r.TemporalAA.Upscaler)*/
	UFUNCTION(BlueprintPure, Category = "DLSS", meta = (DisplayName = "Get DLSS Mode"))
	static DLSSBLUEPRINT_API UDLSSMode GetDLSSMode();

	/* Sets the console variables to enable additional DLSS sharpening. Set to 0 to disable (r.NGX.DLSS.Sharpness) */
	UFUNCTION(BlueprintCallable, Category = "DLSS", meta = (DisplayName = "Set DLSS Sharpness"))
	static DLSSBLUEPRINT_API void SetDLSSSharpness(float Sharpness);
	
	/*Reads the console variables to infer the current DLSS sharpness (r.NGX.DLSS.Sharpness) */
	UFUNCTION(BlueprintPure, Category = "DLSS", meta = (DisplayName = "Get DLSS Sharpness"))
	static DLSSBLUEPRINT_API float GetDLSSSharpness();

	/* Find a reasonable default DLSS mode based on current hardware */
	UFUNCTION(BlueprintPure, Category = "DLSS", meta = (DisplayName = "Get Default DLSS Mode"))
	static DLSSBLUEPRINT_API UDLSSMode GetDefaultDLSSMode();

	/* Allows conversion from BlueprintType enums. */
	static DLSSBLUEPRINT_API int32 ToDLSSQualityCVarValue(UDLSSMode InDLSSQualityMode);

private:
	static UDLSSSupport DLSSSupport;

#if WITH_DLSS
	static int32 MinDLSSDriverVersionMinor;
	static int32 MinDLSSDriverVersionMajor;
	static FDLSSUpscaler* DLSSUpscaler;
	static bool bDLSSLibraryInitialized;

	static bool TryInitDLSSLibrary();

#if !UE_BUILD_SHIPPING
	struct FDLSSErrorState
	{
		bool bIsDLSSModeUnsupported = false;
		UDLSSMode InvalidDLSSMode = UDLSSMode::Off;
	};

	static FDLSSErrorState DLSSErrorState;

	static void GetDLSSOnScreenMessages(TMultiMap<FCoreDelegates::EOnScreenMessageSeverity, FText>& OutMessages);
	static FDelegateHandle DLSSOnScreenMessagesDelegateHandle;
#endif

#endif
};

class FDLSSBlueprintModule final : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

private:
};
