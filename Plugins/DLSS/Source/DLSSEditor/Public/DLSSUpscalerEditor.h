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


#include "CustomEditorStaticScreenPercentage.h"

DECLARE_LOG_CATEGORY_EXTERN(LogDLSSEditor, Log, All);

class FDLSSUpscaler;
enum class EDLSSQualityMode;
class SWidget;
class SLevelViewportToolBar;
class SDLSSSettings;
class FFDLSSEditorViewportClientData;
class FEditorViewportClient;

class DLSSEDITOR_API FDLSSUpscalerEditor : public TSharedFromThis<FDLSSUpscalerEditor>, public ICustomEditorStaticScreenPercentage
{
	friend class SDLSSSettings;
public:
	FDLSSUpscalerEditor(FDLSSUpscaler* InDLSSUpscaler);
	virtual ~FDLSSUpscalerEditor();

	// Inherited via ICustomEditorStaticScreenPercentage
	virtual bool GenerateEditorViewportOptionsMenuEntry(const ICustomEditorStaticScreenPercentage::FViewportMenuEntryArguments& Arguments) final;
	virtual void SetupEditorViewFamily(FSceneViewFamily& ViewFamily, FEditorViewportClient* ViewportClient) final;


private:

	bool OnScreenPercentageIsEnabled(const ICustomEditorStaticScreenPercentage::FViewportMenuEntryArguments Arguments) const;
	int32 OnGetScreenPercentageValue(const ICustomEditorStaticScreenPercentage::FViewportMenuEntryArguments Arguments) const;
	void OnScreenPercentageValueChanged(int32 NewValue, const ICustomEditorStaticScreenPercentage::FViewportMenuEntryArguments Arguments) const;


	bool OnGetPreviewCustomTemporalUpscaler(const ICustomEditorStaticScreenPercentage::FViewportMenuEntryArguments Arguments) const;
	void OnSetPreviewCustomTemporalUpscaler(bool NewValue, const ICustomEditorStaticScreenPercentage::FViewportMenuEntryArguments Arguments) const;
	void OnPreviewCustomTemporalUpscalerChanged(bool NewValue, const ICustomEditorStaticScreenPercentage::FViewportMenuEntryArguments Arguments) const;


	bool EnableScreenpercentageInEditorViewports() const;
	bool EnableDLSSInEditorViewports() const;
	TSharedRef<SWidget> GenerateScreenPercentageMenu(const ICustomEditorStaticScreenPercentage::FViewportMenuEntryArguments& Arguments) const;

	FDLSSUpscaler* DLSSUpscaler;

	void OnQualityModeSelected(EDLSSQualityMode InQualityLevel, const ICustomEditorStaticScreenPercentage::FViewportMenuEntryArguments Arguments);

	static TSharedPtr<FFDLSSEditorViewportClientData> GetOrCreateDLSSViewportData(FEditorViewportClient* ViewportClient);
};

