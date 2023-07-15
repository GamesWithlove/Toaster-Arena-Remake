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

class FDLSSUpscaler;
class FDLSSDenoiser;
class FNGXAutomationViewExtension;
class NGXRHI;


enum class EDLSSSupport : uint8
{
	Supported,
	NotSupported,
	NotSupportedIncompatibleHardware,
	NotSupportedDriverOutOfDate,
	NotSupportedOperatingSystemOutOfDate,
	NotSupportedIncompatibleAPICaptureToolActive,
};


class IDLSSModuleInterface : public IModuleInterface
{
	public:
		virtual EDLSSSupport QueryDLSSSupport() const = 0;
		virtual void GetDLSSMinDriverVersion(int32& MajorVersion, int32& MinorVersion) const = 0;
		virtual float GetResolutionFractionForQuality(int32 Quality) const = 0;
		virtual FDLSSUpscaler* GetDLSSUpscaler() const = 0;
};

class FDLSSModule final: public IDLSSModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule();
	virtual void ShutdownModule();

	// Inherited via IDLSSModuleInterface
	virtual EDLSSSupport QueryDLSSSupport() const;
	virtual void GetDLSSMinDriverVersion(int32& MajorVersion, int32& MinorVersion) const;
	virtual float GetResolutionFractionForQuality(int32 Quality) const;
	virtual FDLSSUpscaler* GetDLSSUpscaler() const ;

private:

	TUniquePtr<FDLSSUpscaler> DLSSUpscaler;
	TUniquePtr<FDLSSDenoiser> DLSSDenoiser;
	TUniquePtr<NGXRHI> NGXRHIExtensions;
	TSharedPtr< FNGXAutomationViewExtension, ESPMode::ThreadSafe> NGXAutomationViewExtension;
	EDLSSSupport DLSSSupport = EDLSSSupport::NotSupported;
	int32 MinDriverVersionMinor;
	int32 MinDriverVersionMajor;
};
