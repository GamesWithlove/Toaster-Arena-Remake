/*
* Copyright (c) 2020 - 2022 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
*
* NVIDIA CORPORATION, its affiliates and licensors retain all intellectual
* property and proprietary rights in and to this material, related
* documentation and any modifications thereto. Any use, reproduction,
* disclosure or distribution of this material and related documentation
* without an express license agreement from NVIDIA CORPORATION or
* its affiliates is strictly prohibited.
*/

#include "DLSSUpscalerEditor.h"
#include "DLSSUpscaler.h"

#include "LegacyScreenPercentageDriver.h"

#include "DLSSSettings.h"

#include "Editor.h"
#include "SLevelViewportToolBar.h"
#include "ToolMenus.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Input/SSpinBox.h"
#include "Framework/Commands/Commands.h"

#include "ISettingsModule.h"
#include "ISettingsSection.h"
#include "UObject/Class.h"
#include "UObject/WeakObjectPtr.h"
#include "Widgets/SBoxPanel.h"
#include "Widgets/SNullWidget.h"
#include "Styling/SlateTypes.h"
#include "Widgets/Layout/SBorder.h"
#include "Widgets/Text/STextBlock.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Input/SCheckBox.h"
#include "Widgets/Input/SSlider.h"
#include "Widgets/Layout/SGridPanel.h"

#include "EditorStyleSet.h"
#include "Editor.h"
#include "Settings/EditorSettings.h"
#include "Editor/EditorPerformanceSettings.h"

#define LOCTEXT_NAMESPACE "FDLSSEditorModule"


// We can't quite check whether we have CL 16509387 in UE5-Release-5.0 so we do this in a round about way by branch name
// We also can't do a preprocessor string compare in C++ so we resolve this in DLSSEditor.Build.cs;
#ifndef USE_SLOT_SLOT_ARGUMENTS_API
#define USE_SLOT_SLOT_ARGUMENTS_API 1
#endif

// We can't quite check whether we have CL 16848904 (in UE5-Main) so we do this in a round about way
#ifndef SUPPORTS_POSTPROCESSING_SCREEN_PERCENTAGE
#define SUPPORTS_POSTPROCESSING_SCREEN_PERCENTAGE 1
#endif

// DLSS_TODO move the implementation of this to FDLSSUpscalerEditor?
class DLSSEDITOR_API SDLSSSettings : public SCompoundWidget
{
public:

	SLATE_BEGIN_ARGS(SDLSSSettings)
	{}
	SLATE_ARGUMENT(FDLSSUpscalerEditor*, UpscalerEditor)
	SLATE_ARGUMENT(ICustomEditorStaticScreenPercentage::FViewportMenuEntryArguments,ViewportMenuEntryArguments)

	SLATE_END_ARGS()

	// Widget construction
	 void Construct(const FArguments& InArgs);

	 ~SDLSSSettings();
private:

	// Makes a general quality level header button widget
	TSharedRef<SWidget> MakeHeaderButtonWidget(const FText& InName, EDLSSQualityMode InQualityLevel, const FText& InToolTip);

	// Callback for when a quality level header button is pressed
	FReply OnHeaderClicked(EDLSSQualityMode InQualityLevel);


	// Create a gridslot for the group quality level with all the required formatting
#if USE_SLOT_SLOT_ARGUMENTS_API
	SGridPanel::FSlot::FSlotArguments MakeGridSlot(int32 InCol, int32 InRow, int32 InColSpan = 1, int32 InRowSpan = 1);
#else
	SGridPanel::FSlot& MakeGridSlot(int32 InCol, int32 InRow, int32 InColSpan = 1, int32 InRowSpan = 1);
#endif

private:

	FDLSSUpscalerEditor* UpscalerEditor;
	ICustomEditorStaticScreenPercentage::FViewportMenuEntryArguments ViewportMenuEntryArguments;
};

TSharedRef<SWidget> SDLSSSettings::MakeHeaderButtonWidget(const FText& InName, EDLSSQualityMode InQualityLevel, const FText& InToolTip)
{
	return SNew(SButton)
		.OnClicked(this, &SDLSSSettings::OnHeaderClicked, InQualityLevel)
		.ToolTipText(InToolTip)
		.Content()
		[
			SNew(STextBlock)
			.Text(InName)
		];
}

FReply SDLSSSettings::OnHeaderClicked(EDLSSQualityMode InQualityLevel)
{
	UE_LOG(LogDLSSEditor, Log, TEXT("%s InQualityLevel = %d"), ANSI_TO_TCHAR(__FUNCTION__), InQualityLevel);
	if (InQualityLevel != EDLSSQualityMode::NumValues)
	{
		const int32 ScreenPercentage = UpscalerEditor->DLSSUpscaler->GetOptimalResolutionFractionForQuality(InQualityLevel) * 100.0f;
		
		UpscalerEditor->OnQualityModeSelected(InQualityLevel, ViewportMenuEntryArguments);

		UpscalerEditor->OnScreenPercentageValueChanged(ScreenPercentage, ViewportMenuEntryArguments);
		UpscalerEditor->OnSetPreviewCustomTemporalUpscaler(true, ViewportMenuEntryArguments);

		
	}
	else
	{
		UpscalerEditor->OnSetPreviewCustomTemporalUpscaler(false, ViewportMenuEntryArguments);
	}

	return FReply::Handled();
}
#if USE_SLOT_SLOT_ARGUMENTS_API
SGridPanel::FSlot::FSlotArguments SDLSSSettings::MakeGridSlot(int32 InCol, int32 InRow, int32 InColSpan /*= 1*/, int32 InRowSpan /*= 1*/)
{
	float PaddingH = 2.0f;
	float PaddingV = InRow == 0 ? 8.0f : 2.0f;
	return MoveTemp(SGridPanel::Slot(InCol, InRow)
		.Padding(PaddingH, PaddingV)
		.RowSpan(InRowSpan)
		.ColumnSpan(InColSpan));
}
#else
SGridPanel::FSlot& SDLSSSettings::MakeGridSlot(int32 InCol, int32 InRow, int32 InColSpan /*= 1*/, int32 InRowSpan /*= 1*/)
{
	float PaddingH = 2.0f;
	float PaddingV = InRow == 0 ? 8.0f : 2.0f;
	return SGridPanel::Slot(InCol, InRow)
		.Padding(PaddingH, PaddingV)
		.RowSpan(InRowSpan)
		.ColumnSpan(InColSpan);
}
#endif
void SDLSSSettings::Construct(const FArguments& InArgs)
{
	this->UpscalerEditor = InArgs._UpscalerEditor;
	this->ViewportMenuEntryArguments = InArgs._ViewportMenuEntryArguments;

	auto TitleFont = FEditorStyle::GetFontStyle(TEXT("MenuItem.Font"));

	static float QualityColumnCoeff = 1.0f;

	static_assert(int32(EDLSSQualityMode::NumValues) == 6, "dear DLSS plugin NVIDIA developer, please update this code to handle the new enum values");

	auto MakeWidget = [this](EDLSSQualityMode QualityMode, const FText& InName, const FText& InToolTip)
	{
		const bool bSupported = UpscalerEditor->DLSSUpscaler->IsQualityModeSupported(QualityMode);
		if (!bSupported)
		{
			return  SNullWidget::NullWidget;
		}
		else
		{
			return MakeHeaderButtonWidget(InName, QualityMode, InToolTip);
		}
	};

	TSharedRef<SGridPanel> ButtonMatrix =
		SNew(SGridPanel)
		.FillColumn(0, QualityColumnCoeff)
		+ MakeGridSlot(0, 0).VAlign(VAlign_Center)[SNew(STextBlock).Text(LOCTEXT("DLSSModeLabel"     , "DLSS Mode")).Font(TitleFont)]
		+ MakeGridSlot(1, 0)[MakeHeaderButtonWidget(LOCTEXT("DLSSModeOffLabel", "Off"),              EDLSSQualityMode::NumValues, LOCTEXT("DLSSModeOff"        , "Turn DLSS off and use built-in TAA"))]
		+ MakeGridSlot(2, 0)[MakeWidget(EDLSSQualityMode::DLAA,				LOCTEXT("DLSSModeDLAALabel", "DLAA"),							LOCTEXT("DLSSModeDLAAQuality", "Set DLSS mode to DLAA"))]
		+ MakeGridSlot(3, 0)[MakeWidget(EDLSSQualityMode::UltraQuality,		LOCTEXT("DLSSModeUltraQualityLabel", "Ultra Quality"),			LOCTEXT("DLSSModeUltraQuality", "Set DLSS mode to Ultra Quality"))]
		+ MakeGridSlot(4, 0)[MakeWidget(EDLSSQualityMode::Quality,			LOCTEXT("DLSSModeQualityLabel", "Quality"),						LOCTEXT("DLSSModeQuality", "Set DLSS mode to Quality"))]
		+ MakeGridSlot(5, 0)[MakeWidget(EDLSSQualityMode::Balanced,			LOCTEXT("DLSSModeBalancedLabel", "Balanced"),					LOCTEXT("DLSSModeBalanced", "Set DLSS mode to Balanced"))]
		+ MakeGridSlot(6, 0)[MakeWidget(EDLSSQualityMode::Performance,		LOCTEXT("DLSSModePerformanceLabel", "Performance"),				LOCTEXT("DLSSModePerformance", "Set DLSS mode to Performance"))]
		+ MakeGridSlot(7, 0)[MakeWidget(EDLSSQualityMode::UltraPerformance,	LOCTEXT("DLSSModeUltraPerformanceLabel", "Ultra Performance"),	LOCTEXT("DLSSModeUltraPerformance", "Set DLSS mode to Ultra Performance"))];

	this->ChildSlot
		.HAlign(EHorizontalAlignment::HAlign_Fill)
		[
			SNew(SVerticalBox)
			+ SVerticalBox::Slot()
		[
			ButtonMatrix
		]
		];
}

SDLSSSettings::~SDLSSSettings()
{

}
static void MakeDLSSQualitySettingsMenu(UToolMenu* InMenu, FDLSSUpscalerEditor* DLSSUpscalerEditor,  const ICustomEditorStaticScreenPercentage::FViewportMenuEntryArguments Arguments)
{
	{
		FToolMenuSection& Section = InMenu->AddSection("Section");
		Section.AddEntry(FToolMenuEntry::InitWidget("DLSSQualitySettings", SNew(SDLSSSettings).UpscalerEditor(DLSSUpscalerEditor).ViewportMenuEntryArguments(Arguments), FText(), true));
	}
}

class DLSSEDITOR_API FFDLSSEditorViewportClientData final : public FEditorViewportClient::ICustomTemporalUpscalerData
{
public:

	bool bIsDLSSEnabled;
	float ResolutionFraction;

	EDLSSQualityMode DLSSQualityMode = EDLSSQualityMode::NumValues;
	float MinResolutionFraction = 0.0f;
	float MaxResolutionFraction = 1.0f;
	bool bIsFixedResolutionFraction = false;
};

TSharedPtr<FFDLSSEditorViewportClientData> FDLSSUpscalerEditor::GetOrCreateDLSSViewportData(FEditorViewportClient* ViewportClient)
{
	check(ViewportClient);
	TSharedPtr<FEditorViewportClient::ICustomTemporalUpscalerData> CustomData = ViewportClient->GetCustomTemporalUpscalerData();
	TSharedPtr<FFDLSSEditorViewportClientData> DLSSViewportData;

	if (CustomData)
	{
		DLSSViewportData = StaticCastSharedPtr<FFDLSSEditorViewportClientData>(CustomData);
		check(DLSSViewportData);
	}
	else
	{
		DLSSViewportData = MakeShared< FFDLSSEditorViewportClientData>();
		ViewportClient->SetCustomTemporalUpscalerData(DLSSViewportData);
	}
	return DLSSViewportData;
}

FDLSSUpscalerEditor::FDLSSUpscalerEditor(FDLSSUpscaler* InDLSSUpscaler)
	: DLSSUpscaler(InDLSSUpscaler)
{

}

FDLSSUpscalerEditor::~FDLSSUpscalerEditor()
{
	UE_LOG(LogDLSSEditor, Log, TEXT("%s Enter"), ANSI_TO_TCHAR(__FUNCTION__));
	UE_LOG(LogDLSSEditor, Log, TEXT("%s Leave"), ANSI_TO_TCHAR(__FUNCTION__));
}


void FDLSSUpscalerEditor::SetupEditorViewFamily(FSceneViewFamily& ViewFamily, FEditorViewportClient* ViewportClient)
{
	
	// this purpusefully does not check "r.TemporalAA.Upscaler", which is used at runtime since the enable/disable comes from DLSSViewportData->bIsDLSSEnabled
	// however make sure that the upscaler is "ours"
	static const auto CVarDLSSEnable = IConsoleManager::Get().FindConsoleVariable(TEXT("r.NGX.DLSS.Enable"));
	const bool bDLSSActive = CVarDLSSEnable && (CVarDLSSEnable->GetInt() != 0);

	static const auto CVarDLSSAutomationTesting = IConsoleManager::Get().FindConsoleVariable(TEXT("r.NGX.DLSS.AutomationTesting"));
	const bool bDLSSActiveWithAutomation = !GIsAutomationTesting || (GIsAutomationTesting && CVarDLSSAutomationTesting && (CVarDLSSAutomationTesting->GetInt() != 0));

#if DLSS_ENGINE_HAS_GTEMPORALUPSCALER
	if ((GTemporalUpscaler == DLSSUpscaler) && bDLSSActive && bDLSSActiveWithAutomation)
#else
	if (bDLSSActive && bDLSSActiveWithAutomation)
#endif
	{
		check(GIsEditor);
		checkf(GCustomStaticScreenPercentage == DLSSUpscaler, TEXT("GCustomStaticScreenPercentage is not set to the DLSS upscaler. Please check that only one upscaling plugin is active."));
		checkf(GCustomEditorStaticScreenPercentage == this, TEXT("GCustomEditorStaticScreenPercentage is not set to the DLSS upscaler. Please check that only one upscaling plugin is active."));
		check(ViewportClient);

		TSharedPtr<FFDLSSEditorViewportClientData> DLSSViewportData = GetOrCreateDLSSViewportData(ViewportClient);

		if(DLSSViewportData->bIsDLSSEnabled && EnableDLSSInEditorViewports())
		{
			ViewFamily.SetTemporalUpscalerInterface(DLSSUpscaler->GetUpscalerInstanceForViewFamily(DLSSUpscaler, DLSSViewportData->DLSSQualityMode));
			// DLSS_TODO figure out what to do, should this ever be the case
			checkf(ViewFamily.GetScreenPercentageInterface() == nullptr, TEXT("ViewFamily.GetScreenPercentageInterface() is already in use. Please check that only one upscaling plugin active is active."));

			ViewFamily.EngineShowFlags.ScreenPercentage = true;
			
			const float ResolutionFraction = DLSSViewportData->ResolutionFraction;
			ViewFamily.SetScreenPercentageInterface(new FLegacyScreenPercentageDriver(
				ViewFamily, ResolutionFraction
#if SUPPORTS_POSTPROCESSING_SCREEN_PERCENTAGE					
				/* AllowPostProcessSettingsScreenPercentage = */, false
#endif
			));
		}
	}
}

bool FDLSSUpscalerEditor::GenerateEditorViewportOptionsMenuEntry(const ICustomEditorStaticScreenPercentage::FViewportMenuEntryArguments& Arguments)
{
	// this purpusefully does not check "r.TemporalAA.Upscaler", which is used at runtime since the enable/disable comes from DLSSViewportData->bIsDLSSEnabled
	// however make sure that the upscaler is "ours"

	static const auto CVarDLSSEnable = IConsoleManager::Get().FindConsoleVariable(TEXT("r.NGX.DLSS.Enable"));

#if DLSS_ENGINE_HAS_GTEMPORALUPSCALER
	if ((GTemporalUpscaler == DLSSUpscaler) && CVarDLSSEnable && (CVarDLSSEnable->GetInt() != 0))
#else
	if (CVarDLSSEnable && (CVarDLSSEnable->GetInt() != 0))
#endif
	{
		check(GIsEditor);
		checkf(GCustomStaticScreenPercentage == DLSSUpscaler, TEXT("GCustomStaticScreenPercentage is not set to the DLSS upscaler. Please check that only one upscaling plugin is active."));
		checkf(GCustomEditorStaticScreenPercentage == this, TEXT("GCustomEditorStaticScreenPercentage is not set to the DLSS upscaler. Please check that only one upscaling plugin is active."));

		FLevelEditorViewportClient& Levelviewport = Arguments.Viewport->GetLevelViewportClient();

		FEngineShowFlags ShowFlags = Levelviewport.EngineShowFlags;

		// DLSS_TODO is there a better way to detect whether TAA (and thus DLSS) is turned off?
		// maybe pass this in as a flag or have the callsite do this
		// FEditorViewportClient::Draw calls EngineShowFlagOrthographicOverride(IsPerspective(), ViewFamily.EngineShowFlags); which turns TAA off. And DLSS is a TAA flavor
		// EngineShowFlags.TemporalAA = 0;
		// EngineShowFlags.MotionBlur = 0;
		// but that well only be called later so emulate this here.

		if (!ShowFlags.Lighting)
		{
			return false;
		}

		if (!Levelviewport.IsPerspective())
		{
			return false;
		}

		if (!EnableDLSSInEditorViewports())
		{
			return false;
		}

		const bool bUseSubmenuForDLSSSettings = true;

		if(bUseSubmenuForDLSSSettings)
		{
			Arguments.Section->AddSubMenu(
			"DLSSSettings",
			LOCTEXT("DLSSSettingsSubMenu", "DLSS Settings"),
			LOCTEXT("DLSSSettingsSubMenu_ToolTip", "Open the DLSS settings"),
			FNewToolMenuDelegate::CreateStatic(&MakeDLSSQualitySettingsMenu, this, Arguments));
		}
		else
		{
			Arguments.Section->AddEntry(FToolMenuEntry::InitWidget("DLSSSettings", SNew(SDLSSSettings).UpscalerEditor(this).ViewportMenuEntryArguments(Arguments), FText(), true));
		}

		TSharedPtr<FFDLSSEditorViewportClientData> DLSSViewportData = GetOrCreateDLSSViewportData(&Arguments.Viewport->GetLevelViewportClient());

		if (DLSSViewportData->bIsDLSSEnabled)
		{
			Arguments.Section->AddEntry(FToolMenuEntry::InitWidget("DLSSScreenPercentage", GenerateScreenPercentageMenu(Arguments), LOCTEXT("DLSSScreenPercentage", "Screen Percentage (DLSS)")));

			const int32 PreviewScreenPercentageMin = DLSSViewportData->MinResolutionFraction * 100.0f;
			const int32 PreviewScreenPercentageMax = DLSSViewportData->MaxResolutionFraction * 100.0f;

			// clamp the current preview screen percentage (which might be 100%) to the supported DLSS range
			this->OnScreenPercentageValueChanged(FMath::Clamp(this->OnGetScreenPercentageValue(Arguments), PreviewScreenPercentageMin, PreviewScreenPercentageMax), Arguments);
			return true;
		}
		else
		{
			return false;
		}
		

	}
	else
	{
		return false;
	}

}

TSharedRef<SWidget> FDLSSUpscalerEditor::GenerateScreenPercentageMenu(const ICustomEditorStaticScreenPercentage::FViewportMenuEntryArguments& Arguments) const
{
	TSharedPtr<FFDLSSEditorViewportClientData> DLSSViewportData = GetOrCreateDLSSViewportData(&Arguments.Viewport->GetLevelViewportClient());

	const int32 PreviewScreenPercentageMin = DLSSViewportData->MinResolutionFraction * 100.0f;
	const int32 PreviewScreenPercentageMax = DLSSViewportData->MaxResolutionFraction * 100.0f;
#if ENGINE_MAJOR_VERSION==4
	return
		SNew(SBox)
		.HAlign(HAlign_Right)
		.IsEnabled(this, &FDLSSUpscalerEditor::OnScreenPercentageIsEnabled, Arguments)
			[
				SNew(SBox)
				.Padding(FMargin(4.0f, 0.0f, 0.0f, 0.0f))
				.WidthOverride(100.0f)
				[
					SNew(SSpinBox<int32>)
					.Font(FEditorStyle::GetFontStyle(TEXT("MenuItem.Font")))
					.MinValue(PreviewScreenPercentageMin)
					.MaxValue(PreviewScreenPercentageMax)
					.Value(this, &FDLSSUpscalerEditor::OnGetScreenPercentageValue, Arguments)
					.OnValueChanged(this, &FDLSSUpscalerEditor::OnScreenPercentageValueChanged, Arguments)
					.ToolTipText(
						DLSSViewportData->bIsFixedResolutionFraction ?
						FText(LOCTEXT("DLSSScreenPercentageTooltipFixedResolution", "This DLSS quality mode has a fixed screen percentage and cannot be adjusted at runtime.")) :
						FText(	LOCTEXT("DLSSScreenPercentageTooltip", 
							"At runtime, the screen percentage is controlled by the r.NGX.DLSS.Quality cvar. To enable adjusting the screenpercentage directly in the editor, set the \"Enable Screenpercentage Manipulation In DLSS Editor Viewports\" setting under Editor Preferences -> Plugins -> NVIDIA DLSS"))
					)
				]
		];
#elif ENGINE_MAJOR_VERSION==5
	return
		SNew(SBox)
			.HAlign(HAlign_Right)
			.IsEnabled(this, &FDLSSUpscalerEditor::OnScreenPercentageIsEnabled, Arguments)
			[
				SNew(SBox)
				.Padding(FMargin(4.0f, 0.0f, 0.0f, 0.0f))
				.WidthOverride(100.0f)
				[
					SNew(SBorder)
					.BorderImage(FAppStyle::Get().GetBrush("Menu.WidgetBorder"))
					.Padding(FMargin(1.0f))
					[
						SNew(SSpinBox<int32>)
						.Style(&FAppStyle::Get(), "Menu.SpinBox")
						.Font(FEditorStyle::GetFontStyle(TEXT("MenuItem.Font")))
						.MinValue(PreviewScreenPercentageMin)
						.MaxValue(PreviewScreenPercentageMax)
						.Value(this, &FDLSSUpscalerEditor::OnGetScreenPercentageValue, Arguments)
						.OnValueChanged(this, &FDLSSUpscalerEditor::OnScreenPercentageValueChanged, Arguments)
						.ToolTipText(
							DLSSViewportData->bIsFixedResolutionFraction ?
							FText(LOCTEXT("DLSSScreenPercentageTooltipFixedResolution", "This DLSS quality mode has a fixed screen percentage and cannot be adjusted at runtime.")) :
							FText(LOCTEXT("DLSSScreenPercentageTooltip",
								"At runtime, the screen percentage is controlled by the r.NGX.DLSS.Quality cvar. To enable adjusting the screenpercentage directly in the editor, set the \"Enable Screenpercentage Manipulation In DLSS Editor Viewports\" setting under Editor Preferences -> Plugins -> NVIDIA DLSS"))
						)
					]
				]
			];
#else
#error "ENGINE_MAJOR_VERSION must be either 4 or 5"
#endif
}

bool  FDLSSUpscalerEditor::EnableScreenpercentageInEditorViewports() const
{
	if (GetDefault<UDLSSOverrideSettings>()->EnableScreenpercentageManipulationInDLSSEditorViewportsOverride == EDLSSSettingOverride::UseProjectSettings)
	{
		return GetDefault<UDLSSSettings>()->bEnableScreenpercentageManipulationInDLSSEditorViewports;
	}
	else
	{
		return GetDefault<UDLSSOverrideSettings>()->EnableScreenpercentageManipulationInDLSSEditorViewportsOverride == EDLSSSettingOverride::Enabled;
	}
}

bool  FDLSSUpscalerEditor::EnableDLSSInEditorViewports() const
{
	if (GetDefault<UDLSSOverrideSettings>()->EnableDLSSInEditorViewportsOverride == EDLSSSettingOverride::UseProjectSettings)
	{
		return GetDefault<UDLSSSettings>()->bEnableDLSSInEditorViewports;
	}
	else
	{
		return GetDefault<UDLSSOverrideSettings>()->EnableDLSSInEditorViewportsOverride == EDLSSSettingOverride::Enabled;
	}
}


bool FDLSSUpscalerEditor::OnScreenPercentageIsEnabled(const ICustomEditorStaticScreenPercentage::FViewportMenuEntryArguments Arguments) const
{
	check(DLSSUpscaler);
	TSharedPtr<FFDLSSEditorViewportClientData> DLSSViewportData = GetOrCreateDLSSViewportData(&Arguments.Viewport->GetLevelViewportClient());
	// adapted from SLevelViewportToolBar::OnScreenPercentageIsEnabled()

	return EnableScreenpercentageInEditorViewports() && !DLSSViewportData->bIsFixedResolutionFraction && Arguments.Viewport->GetLevelViewportClient().SupportsPreviewResolutionFraction();
}

int32 FDLSSUpscalerEditor::OnGetScreenPercentageValue(const ICustomEditorStaticScreenPercentage::FViewportMenuEntryArguments Arguments) const
{
	// adapted from SLevelViewportToolBar::OnGetScreenPercentageValue(), using DLSSViewportData->ResolutionFraction
	
	// We expose the resolution fraction derived from DPI, to not lie to the artist when screen percentage = 100%.

	TSharedPtr<FFDLSSEditorViewportClientData> DLSSViewportData = GetOrCreateDLSSViewportData(&Arguments.Viewport->GetLevelViewportClient());

	return FMath::RoundToInt(FMath::Clamp(
		DLSSViewportData->ResolutionFraction,
		DLSSViewportData->MinResolutionFraction,
		DLSSViewportData->MaxResolutionFraction) * 100.0f);
}	

void FDLSSUpscalerEditor::OnScreenPercentageValueChanged(int32 NewValue, const ICustomEditorStaticScreenPercentage::FViewportMenuEntryArguments Arguments) const
{
	// adapted from SLevelViewportToolBar::OnScreenPercentageValueChanged() and SetPreviewScreenPercentage()
	FLevelEditorViewportClient& ViewportClient = Arguments.Viewport->GetLevelViewportClient();

	TSharedPtr<FFDLSSEditorViewportClientData> DLSSViewportData = GetOrCreateDLSSViewportData(&ViewportClient);
	DLSSViewportData->ResolutionFraction = (NewValue / 100.0f);
	
	ViewportClient.Invalidate();
}

bool FDLSSUpscalerEditor::OnGetPreviewCustomTemporalUpscaler(const ICustomEditorStaticScreenPercentage::FViewportMenuEntryArguments Arguments) const
{
	return GetOrCreateDLSSViewportData(&Arguments.Viewport->GetLevelViewportClient())->bIsDLSSEnabled;
}

void FDLSSUpscalerEditor::OnSetPreviewCustomTemporalUpscaler(bool NewValue, const ICustomEditorStaticScreenPercentage::FViewportMenuEntryArguments Arguments) const
{
	FLevelEditorViewportClient& ViewportClient = Arguments.Viewport->GetLevelViewportClient();
	TSharedPtr<FFDLSSEditorViewportClientData> DLSSViewportData = GetOrCreateDLSSViewportData(&ViewportClient);
	DLSSViewportData->bIsDLSSEnabled = NewValue;
	ViewportClient.Invalidate();
}

void FDLSSUpscalerEditor::OnPreviewCustomTemporalUpscalerChanged(bool NewValue, const ICustomEditorStaticScreenPercentage::FViewportMenuEntryArguments Arguments) const
{
	FLevelEditorViewportClient& ViewportClient = Arguments.Viewport->GetLevelViewportClient();
	TSharedPtr<FFDLSSEditorViewportClientData> DLSSViewportData = GetOrCreateDLSSViewportData(&ViewportClient);
	DLSSViewportData->bIsDLSSEnabled = NewValue;
	ViewportClient.Invalidate();
}

void FDLSSUpscalerEditor::OnQualityModeSelected(EDLSSQualityMode InQualityLevel, const ICustomEditorStaticScreenPercentage::FViewportMenuEntryArguments Arguments)
{
	TSharedPtr<FFDLSSEditorViewportClientData> DLSSViewportData = GetOrCreateDLSSViewportData(&Arguments.Viewport->GetLevelViewportClient());

	DLSSViewportData->bIsFixedResolutionFraction = DLSSUpscaler->IsFixedResolutionFraction(InQualityLevel);
	DLSSViewportData->DLSSQualityMode = InQualityLevel;

	if (DLSSViewportData->bIsFixedResolutionFraction)
	{
		DLSSViewportData->MinResolutionFraction = DLSSUpscaler->GetOptimalResolutionFractionForQuality(InQualityLevel);
		DLSSViewportData->MaxResolutionFraction = DLSSUpscaler->GetOptimalResolutionFractionForQuality(InQualityLevel);
	}
	else
	{
		DLSSViewportData->MinResolutionFraction = DLSSUpscaler->GetMinUpsampleResolutionFraction();
		DLSSViewportData->MaxResolutionFraction = DLSSUpscaler->GetMaxUpsampleResolutionFraction();
	}
}

#undef LOCTEXT_NAMESPACE



