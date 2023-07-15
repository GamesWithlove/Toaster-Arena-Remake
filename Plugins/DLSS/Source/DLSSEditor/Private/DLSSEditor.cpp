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

#include "DLSSEditor.h"

#include "DLSSUpscaler.h"
#include "DLSSUpscalerEditor.h"
#include "DLSS.h"
#include "DLSSSettings.h"
#include "NGXRHI.h"

#include "CoreMinimal.h"
#include "ISettingsModule.h"
#include "ISettingsSection.h"
#include "UObject/Class.h"
#include "UObject/WeakObjectPtr.h"



#define LOCTEXT_NAMESPACE "FDLSSEditorModule"

DEFINE_LOG_CATEGORY(LogDLSSEditor);

void FDLSSEditorModule::StartupModule()
{
	UE_LOG(LogDLSSEditor, Log, TEXT("%s Enter"), ANSI_TO_TCHAR(__FUNCTION__));
	
	check(GIsEditor);
	
	// verify that the other DLSS modules are correctly hooked up
	{
		IDLSSModuleInterface* DLSSModule = &FModuleManager::LoadModuleChecked<IDLSSModuleInterface>(TEXT("DLSS"));
		UE_LOG(LogDLSSEditor, Log, TEXT("DLSS module %p, QueryDLSSSupport = %u DLSSUpscaler = %p"), DLSSModule, DLSSModule->QueryDLSSSupport(), DLSSModule->GetDLSSUpscaler());
		
		bIsDLSSAvailable = DLSSModule->QueryDLSSSupport() == EDLSSSupport::Supported;
		if (bIsDLSSAvailable)
		{
			checkf(GCustomStaticScreenPercentage == DLSSModule->GetDLSSUpscaler(),TEXT("GCustomStaticScreenPercentage is not set to the DLSS upscaler. Please check that only one upscaling plugin is active."));

			DLSSUpscalerEditor = MakeShared<FDLSSUpscalerEditor>(DLSSModule->GetDLSSUpscaler());
			checkf(GCustomEditorStaticScreenPercentage == nullptr, TEXT("GCustomEditorStaticScreenPercentage is already in use. Please check that only one upscaling active is active."));
			GCustomEditorStaticScreenPercentage = DLSSUpscalerEditor.Get();
		}
	}

	// register settings
	{
		ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings");
		if (SettingsModule != nullptr)
		{
			{
				auto Settings = GetMutableDefault<UDLSSSettings>();
				if(bIsDLSSAvailable)
				{
					IDLSSModuleInterface* DLSSModule = &FModuleManager::LoadModuleChecked<IDLSSModuleInterface>(TEXT("DLSS"));
					const NGXRHI* NGXRHIExtensions = DLSSModule->GetDLSSUpscaler()->GetNGXRHI();
					Settings->GenericDLSSBinaryPath = NGXRHIExtensions->GetDLSSGenericBinaryInfo().Get<0>();
					Settings->bGenericDLSSBinaryExists = NGXRHIExtensions->GetDLSSGenericBinaryInfo().Get<1>();

					Settings->CustomDLSSBinaryPath = NGXRHIExtensions->GetDLSSCustomBinaryInfo().Get<0>();
					Settings->bCustomDLSSBinaryExists = NGXRHIExtensions->GetDLSSCustomBinaryInfo().Get<1>();
				}

				ISettingsSectionPtr SettingsSection = SettingsModule->RegisterSettings("Project", "Plugins", "DLSS",
					LOCTEXT("DLSSSettingsName", "NVIDIA DLSS"),
					LOCTEXT("DLSSSettingsDescription", "Configure the NVIDIA DLSS plug-in."),
					Settings
				);
			}

			{
				auto Settings = GetMutableDefault<UDLSSOverrideSettings>();

				ISettingsSectionPtr SettingsSection = SettingsModule->RegisterSettings("Project", "Plugins", "DLSSOverride",
					LOCTEXT("DLSSOverrideSettingsName", "NVIDIA DLSS Overrides (Local)"),
					LOCTEXT("DLSSOverrideSettingsDescription", "Configure the local settings for the NVIDIA DLSS plug-in."),
					Settings
				);
			}
		}
	}

	UE_LOG(LogDLSSEditor, Log, TEXT("%s Leave"), ANSI_TO_TCHAR(__FUNCTION__));
}

void FDLSSEditorModule::ShutdownModule()
{
	UE_LOG(LogDLSSEditor, Log, TEXT("%s Enter"), ANSI_TO_TCHAR(__FUNCTION__));
	
	if (bIsDLSSAvailable)
	{
		GCustomEditorStaticScreenPercentage = nullptr;
		DLSSUpscalerEditor = nullptr;
	}

	UE_LOG(LogDLSSEditor, Log, TEXT("%s Leave"), ANSI_TO_TCHAR(__FUNCTION__));
}

FDLSSUpscalerEditor* FDLSSEditorModule::GetDLSSUpscalerEditor() const
{
	return DLSSUpscalerEditor.Get();
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FDLSSEditorModule, DLSSEditor)

