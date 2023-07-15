/*
* Copyright (c) 2020 - 2021 NVIDIA CORPORATION.  All rights reserved.
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

#include "NGXVulkanRHIPreInit.h"

#include "VulkanRHIPrivate.h"
#include "VulkanRHIBridge.h"

#include "DynamicRHI.h"

#include "nvsdk_ngx_vk.h"

DEFINE_LOG_CATEGORY_STATIC(LogDLSSNGXVulkanRHIPreInit, Log, All);

#define LOCTEXT_NAMESPACE "FNGXVulkanRHIPreInitModule"


void FNGXVulkanRHIPreInitModule::StartupModule()
{
	UE_LOG(LogDLSSNGXVulkanRHIPreInit, Log, TEXT("%s Enter"), ANSI_TO_TCHAR(__FUNCTION__));
	if(FApp::CanEverRender())
	{
		const TCHAR* VulkanRHIModuleName = TEXT("VulkanRHI");

		// don't cleanup since the same module gets loaded shortly thereafter anyways
		const TCHAR* DynamicRHIModuleName = GetSelectedDynamicRHIModuleName(false);
		UE_LOG(LogDLSSNGXVulkanRHIPreInit, Log, TEXT("GetSelectedDynamicRHIModuleName = %s"), DynamicRHIModuleName);

		if(FString(VulkanRHIModuleName) == FString(DynamicRHIModuleName))
		{
			IDynamicRHIModule* VulkanRHIModule = FModuleManager::GetModulePtr<IDynamicRHIModule>(VulkanRHIModuleName);

			if(VulkanRHIModule && VulkanRHIModule->IsSupported())
			{
				unsigned int NumInstanceExtensions = 0 ;
				const char** InstanceExtensions = nullptr;
				unsigned int NumDeviceExtensions = 0;
				const char** DeviceExtensions = nullptr;

				// TODO: NVSDK_NGX_VULKAN_RequiredExtensions deprecated, change to use NVSDK_NGX_VULKAN_GetFeatureInstanceExtensionRequirements instead
				// We'll need information that's currently stored in UDLSSSettings from the DLSS module which isn't loaded yet
				const NVSDK_NGX_Result ResultRequiredExtensions = NVSDK_NGX_VULKAN_RequiredExtensions(&NumInstanceExtensions, &InstanceExtensions, &NumDeviceExtensions, &DeviceExtensions);
				UE_LOG(LogDLSSNGXVulkanRHIPreInit, Log, TEXT("NVSDK_NGX_VULKAN_RequiredExtensions -> (%u %s)"), ResultRequiredExtensions, GetNGXResultAsString(ResultRequiredExtensions));

				const TArray<const ANSICHAR*> RHIBridgeInstanceExtensions(InstanceExtensions, NumInstanceExtensions);
				VulkanRHIBridge::AddEnabledInstanceExtensionsAndLayers(RHIBridgeInstanceExtensions, TArray<const ANSICHAR*>());

				const TArray<const ANSICHAR*> RHIBridgeDeviceExtensions(DeviceExtensions, NumDeviceExtensions);
				VulkanRHIBridge::AddEnabledDeviceExtensionsAndLayers(RHIBridgeDeviceExtensions, TArray<const ANSICHAR*>());

				UE_LOG(LogDLSSNGXVulkanRHIPreInit, Log, TEXT("Preregistered the required NGX DLSS Vulkan device extensions (%u) and instance extensions (%u) via the VulkanRHIBridge"), NumDeviceExtensions, NumInstanceExtensions);
			}
			else
			{
				UE_LOG(LogDLSSNGXVulkanRHIPreInit, Log, TEXT("Failed to load the VulkanRHI module and/or Vulkan is not supported; skipping of pregistering the required NGX DLSS Vulkan device and instance extensions via the VulkanRHIBridge"));
			}
		}
		else
		{
			UE_LOG(LogDLSSNGXVulkanRHIPreInit, Log, TEXT("VulkanRHI is not the active DynamicRHI; skipping of pregistering the required NGX DLSS Vulkan device and instance extensions via the VulkanRHIBridge"));
		}
	}
	else
	{
		UE_LOG(LogDLSSNGXVulkanRHIPreInit, Log, TEXT("This UE instance does not render; skipping of pregistering the required NGX DLSS Vulkan device and instance extensions via the VulkanRHIBridge"));
	}
	UE_LOG(LogDLSSNGXVulkanRHIPreInit, Log, TEXT("%s Leave"), ANSI_TO_TCHAR(__FUNCTION__));

}

void FNGXVulkanRHIPreInitModule::ShutdownModule()
{
	UE_LOG(LogDLSSNGXVulkanRHIPreInit, Log, TEXT("%s Enter"), ANSI_TO_TCHAR(__FUNCTION__));
	UE_LOG(LogDLSSNGXVulkanRHIPreInit, Log, TEXT("%s Leave"), ANSI_TO_TCHAR(__FUNCTION__));
}

IMPLEMENT_MODULE(FNGXVulkanRHIPreInitModule, NGXVulkanRHIPreInit)

#undef LOCTEXT_NAMESPACE


