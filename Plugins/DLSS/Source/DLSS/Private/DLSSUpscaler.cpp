/*
* Copyright (c) 2020 - 2023 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
*
* NVIDIA CORPORATION, its affiliates and licensors retain all intellectual
* property and proprietary rights in and to this material, related
* documentation and any modifications thereto. Any use, reproduction,
* disclosure or distribution of this material and related documentation
* without an express license agreement from NVIDIA CORPORATION or
* its affiliates is strictly prohibited.
*/

#include "DLSSUpscaler.h"


#include "DLSSUpscalerPrivate.h"
#include "DLSSUpscalerHistory.h"
#include "DLSSSettings.h"

#include "VelocityCombinePass.h"

#include "PostProcess/SceneRenderTargets.h"
#include "PostProcess/PostProcessing.h"
#include "SceneTextureParameters.h"
#include "ScreenPass.h"

#include "RayTracing/RaytracingOptions.h"

#include "LegacyScreenPercentageDriver.h"


#define LOCTEXT_NAMESPACE "FDLSSModule"

#ifndef SUPPORTS_POSTPROCESSING_SCREEN_PERCENTAGE
#define SUPPORTS_POSTPROCESSING_SCREEN_PERCENTAGE 1
#endif

static TAutoConsoleVariable<int32> CVarNGXDLSSEnable(
	TEXT("r.NGX.DLSS.Enable"), 1,
	TEXT("Enable/Disable DLSS entirely."),
	ECVF_RenderThreadSafe);

static TAutoConsoleVariable<bool> CVarNGXDLAAEnable(
	TEXT("r.NGX.DLAA.Enable"), false,
	TEXT("Enable/Disable DLAA"),
	ECVF_RenderThreadSafe);

static TAutoConsoleVariable<int32> CVarNGXDLSSAutomationTesting(
	TEXT("r.NGX.DLSS.AutomationTesting"), 0,
	TEXT("Whether the NGX library should be loaded when GIsAutomationTesting is true.(default is false)\n")
	TEXT("Must be set to true before startup. This can be enabled for cases where running automation testing with DLSS desired"),
	ECVF_ReadOnly);

// corresponds to EDLSSPreset
static TAutoConsoleVariable<int32> CVarNGXDLSSPresetSetting(
	TEXT("r.NGX.DLSS.Preset"),
	0,
	TEXT("DLSS/DLAA preset setting. Allows selecting a different DL model than the default\n")
	TEXT("  0: Use default preset or ini value\n")
	TEXT("  1: Force preset A\n")
	TEXT("  2: Force preset B\n")
	TEXT("  3: Force preset C\n")
	TEXT("  4: Force preset D\n")
	TEXT("  5: Force preset E\n")
	TEXT("  6: Force preset F\n")
	TEXT("  7: Force preset G"),
	ECVF_RenderThreadSafe);

static TAutoConsoleVariable<int32> CVarNGXDLSSPerfQualitySetting(
	TEXT("r.NGX.DLSS.Quality"),
	-1,
	TEXT("DLSS Performance/Quality setting. Not all modes might be supported at runtime, in this case Balanced mode is used as a fallback\n")
	TEXT(" -2: Ultra Performance\n")
	TEXT(" -1: Performance (default)\n")
	TEXT("  0: Balanced\n")
	TEXT("  1: Quality\n")
	TEXT("  2: Ultra Quality\n"),
	ECVF_RenderThreadSafe);

static TAutoConsoleVariable<bool> CVarNGXDLSSAutoQualitySetting(
	TEXT("r.NGX.DLSS.Quality.Auto"), 0,
	TEXT("Enable/Disable DLSS automatically selecting the DLSS quality mode based on the render resolution"),
	ECVF_RenderThreadSafe);

static TAutoConsoleVariable<float> CVarNGXDLSSSharpness(
	TEXT("r.NGX.DLSS.Sharpness"),
	0.0f,
	TEXT("-1.0 to 1.0: Softening/sharpening to apply to the DLSS pass. Negative values soften the image, positive values sharpen. (default: 0.0f)"),
	ECVF_RenderThreadSafe);

static TAutoConsoleVariable<int32> CVarNGXDLSSDilateMotionVectors(
	TEXT("r.NGX.DLSS.DilateMotionVectors"),
	1,
	TEXT(" 0: pass low resolution motion vectors into DLSS\n")
	TEXT(" 1: pass dilated high resolution motion vectors into DLSS. This can help with improving image quality of thin details. (default)"),
	ECVF_RenderThreadSafe);

static TAutoConsoleVariable<int32> CVarNGXDLSSAutoExposure(
	TEXT("r.NGX.DLSS.AutoExposure"), 1,
	TEXT("0: Use the engine-computed exposure value for input images to DLSS - in some cases this may reduce artifacts\n")
	TEXT("1: Enable DLSS internal auto-exposure instead of the application provided one (default)\n"),
	ECVF_RenderThreadSafe);

static TAutoConsoleVariable<int32> CVarNGXDLSSReleaseMemoryOnDelete(
	TEXT("r.NGX.DLSS.ReleaseMemoryOnDelete"), 
	1,
	TEXT("Enabling/disable releasing DLSS related memory on the NGX side when DLSS features get released.(default=1)"),
	ECVF_RenderThreadSafe);


static TAutoConsoleVariable<int32> CVarNGXDLSSFeatureCreationNode(
	TEXT("r.NGX.DLSS.FeatureCreationNode"), -1,
	TEXT("Determines which GPU the DLSS feature is getting created on\n")
	TEXT("-1: Create on the GPU the command list is getting executed on (default)\n")
	TEXT(" 0: Create on GPU node 0 \n")
	TEXT(" 1: Create on GPU node 1 \n"),
	ECVF_RenderThreadSafe);


static TAutoConsoleVariable<int32> CVarNGXDLSSFeatureVisibilityMask(
	TEXT("r.NGX.DLSS.FeatureVisibilityMask"), -1,
	TEXT("Determines which GPU the DLSS feature is visible to\n")
	TEXT("-1: Visible to the GPU the command list is getting executed on (default)\n")
	TEXT(" 1: visible to GPU node 0 \n")
	TEXT(" 2:  visible to GPU node 1 \n")
	TEXT(" 3:  visible to GPU node 0 and GPU node 1\n"),
	ECVF_RenderThreadSafe);

DECLARE_GPU_STAT(DLSS)

BEGIN_SHADER_PARAMETER_STRUCT(FDLSSShaderParameters, )

// Input images
SHADER_PARAMETER_RDG_TEXTURE(Texture2D, SceneColorInput)
SHADER_PARAMETER_RDG_TEXTURE(Texture2D, SceneDepthInput)
SHADER_PARAMETER_RDG_TEXTURE(Texture2D, EyeAdaptation)
SHADER_PARAMETER_RDG_TEXTURE(Texture2D, SceneVelocityInput)


// Output images
RDG_TEXTURE_ACCESS(SceneColorOutput, ERHIAccess::UAVCompute)

END_SHADER_PARAMETER_STRUCT()


FIntPoint FDLSSPassParameters::GetOutputExtent() const
{
	check(Validate());
	check(SceneColorInput);

	FIntPoint InputExtent = SceneColorInput->Desc.Extent;

	FIntPoint QuantizedPrimaryUpscaleViewSize;
	QuantizeSceneBufferSize(OutputViewRect.Size(), QuantizedPrimaryUpscaleViewSize);

	return FIntPoint(
		FMath::Max(InputExtent.X, QuantizedPrimaryUpscaleViewSize.X),
		FMath::Max(InputExtent.Y, QuantizedPrimaryUpscaleViewSize.Y));
}

bool FDLSSPassParameters::Validate() const
{
	checkf(OutputViewRect.Min == FIntPoint::ZeroValue,TEXT("The DLSS OutputViewRect %dx%d must be non-zero"), OutputViewRect.Min.X, OutputViewRect.Min.Y);
	return true;
}

const TCHAR* FDLSSUpscaler::GetDebugName() const
{
	return TEXT("FDLSSUpscaler");
}

static EDLSSPreset GetDLSSPresetFromCVarValue(int32 InCVarValue)
{
	if (InCVarValue >= 0 && InCVarValue <= static_cast<int32>(EDLSSPreset::F))
	{
		return static_cast<EDLSSPreset>(InCVarValue);
	}
	UE_LOG(LogDLSS, Warning, TEXT("Invalid r.NGX.DLSS.DLSSPreset value %d"), InCVarValue);
	return EDLSSPreset::Default;
}

static NVSDK_NGX_DLSS_Hint_Render_Preset ToNGXDLSSPreset(EDLSSPreset DLSSPreset)
{
	switch (DLSSPreset)
	{
		default:
			checkf(false, TEXT("ToNGXDLSSPreset should not be called with an out of range EDLSSPreset from the higher level code"));
		case EDLSSPreset::Default:
			return NVSDK_NGX_DLSS_Hint_Render_Preset_Default;

		case EDLSSPreset::A:
			return NVSDK_NGX_DLSS_Hint_Render_Preset_A;

		case EDLSSPreset::B:
			return NVSDK_NGX_DLSS_Hint_Render_Preset_B;

		case EDLSSPreset::C:
			return NVSDK_NGX_DLSS_Hint_Render_Preset_C;

		case EDLSSPreset::D:
			return NVSDK_NGX_DLSS_Hint_Render_Preset_D;

		case EDLSSPreset::E:
			return NVSDK_NGX_DLSS_Hint_Render_Preset_E;

		case EDLSSPreset::F:
			return NVSDK_NGX_DLSS_Hint_Render_Preset_F;
		
		case EDLSSPreset::G:
			return NVSDK_NGX_DLSS_Hint_Render_Preset_G;
	}
}

static NVSDK_NGX_DLSS_Hint_Render_Preset GetNGXDLSSPresetFromQualityMode(EDLSSQualityMode QualityMode)
{

	EDLSSPreset DLSSPreset = EDLSSPreset::Default;
	switch (QualityMode)
	{
		case EDLSSQualityMode::UltraPerformance:
			DLSSPreset = GetDefault<UDLSSSettings>()->DLSSUltraPerformancePreset;
			break;

		case EDLSSQualityMode::Performance:
			DLSSPreset = GetDefault<UDLSSSettings>()->DLSSPerformancePreset;
			break;

		case EDLSSQualityMode::Balanced:
			DLSSPreset = GetDefault<UDLSSSettings>()->DLSSBalancedPreset;
			break;

		case EDLSSQualityMode::Quality:
			DLSSPreset = GetDefault<UDLSSSettings>()->DLSSQualityPreset;
			break;

		case EDLSSQualityMode::UltraQuality:
			DLSSPreset = GetDefault<UDLSSSettings>()->DLSSUltraQualityPreset;
			break;

		case EDLSSQualityMode::DLAA:
			DLSSPreset = GetDefault<UDLSSSettings>()->DLAAPreset;
			break;

		default:
			checkf(false, TEXT("GetNGXDLSSPresetFromQualityMode called with an out of range EDLSSQualityMode"));
			break;
	}
	int32 DLSSPresetCVarVal = CVarNGXDLSSPresetSetting.GetValueOnAnyThread();
	if (DLSSPresetCVarVal != 0)
	{
		DLSSPreset = GetDLSSPresetFromCVarValue(DLSSPresetCVarVal);
	}
	return ToNGXDLSSPreset(DLSSPreset);
}

static NVSDK_NGX_PerfQuality_Value ToNGXQuality(EDLSSQualityMode Quality)
{
	static_assert(int32(EDLSSQualityMode::NumValues) == 6, "dear DLSS plugin NVIDIA developer, please update this code to handle the new EDLSSQualityMode enum values");
	switch (Quality)
	{
		case EDLSSQualityMode::UltraPerformance:
			return NVSDK_NGX_PerfQuality_Value_UltraPerformance;

		default:
			checkf(false, TEXT("ToNGXQuality should not be called with an out of range EDLSSQualityMode from the higher level code"));
		case EDLSSQualityMode::Performance:
			return NVSDK_NGX_PerfQuality_Value_MaxPerf;

		case EDLSSQualityMode::Balanced:
			return NVSDK_NGX_PerfQuality_Value_Balanced;

		case EDLSSQualityMode::Quality:
			return NVSDK_NGX_PerfQuality_Value_MaxQuality;
		
		case EDLSSQualityMode::UltraQuality:
			return NVSDK_NGX_PerfQuality_Value_UltraQuality;

		case EDLSSQualityMode::DLAA:
			return NVSDK_NGX_PerfQuality_Value_DLAA;

	}
}

NGXRHI* FDLSSUpscaler::NGXRHIExtensions;
TStaticArray <TSharedPtr<FDLSSUpscaler>, uint32(EDLSSQualityMode::NumValues)> FDLSSUpscaler::DLSSUpscalerInstancesPerViewFamily;
float FDLSSUpscaler::MinResolutionFraction = TNumericLimits <float>::Max();
float FDLSSUpscaler::MaxResolutionFraction = TNumericLimits <float>::Min();


uint32 FDLSSUpscaler::NumRuntimeQualityModes = 0;
TArray<FDLSSOptimalSettings> FDLSSUpscaler::ResolutionSettings;


FDLSSUpscaler* FDLSSUpscaler::GetUpscalerInstanceForViewFamily(const FDLSSUpscaler* InUpscaler, EDLSSQualityMode InQualityMode)
{
	uint32 ArrayIndex = (int32)ToNGXQuality(InQualityMode);
	if (!DLSSUpscalerInstancesPerViewFamily[ArrayIndex])
	{
		DLSSUpscalerInstancesPerViewFamily[ArrayIndex] = MakeShared<FDLSSUpscaler>(InUpscaler, InQualityMode);

	}
	return DLSSUpscalerInstancesPerViewFamily[ArrayIndex].Get();
}

bool FDLSSUpscaler::IsValidUpscalerInstance(const ITemporalUpscaler* InUpscaler)
{
	// DLSSUpscalerInstancesPerViewFamily gets lazily initialized, but we don't want to accidentally treat nullptr as a valid
	// upscaler instance, when we want to check (e.g. in the denoiser) whether DLSS is actually active for the viewfamily
	if (InUpscaler == nullptr)
	{
		return false;
	}

	for (auto UpscalerInstance : DLSSUpscalerInstancesPerViewFamily)
	{
		if (UpscalerInstance.Get() == InUpscaler)
		{
			return true;
		}
	}
	return false;
}

bool FDLSSUpscaler::IsAutoQualityMode()
{
	return CVarNGXDLSSAutoQualitySetting.GetValueOnAnyThread();
}

bool FDLSSUpscaler::IsDLAAMode()
{
	return CVarNGXDLAAEnable.GetValueOnAnyThread();
}

void FDLSSUpscaler::SetAutoQualityMode(bool bAutoQualityMode)
{
	check(IsInGameThread());
	CVarNGXDLSSAutoQualitySetting->Set(bAutoQualityMode, ECVF_SetByCommandline);
}

// make copy & assign quality mode
FDLSSUpscaler::FDLSSUpscaler(const FDLSSUpscaler* InUpscaler, EDLSSQualityMode InQualityMode)
	: FDLSSUpscaler(*InUpscaler)
{
	DLSSQualityMode = InQualityMode;
	check(NGXRHIExtensions);
}


FDLSSUpscaler::FDLSSUpscaler(NGXRHI* InNGXRHIExtensions)
	
{
	UE_LOG(LogDLSS, Log, TEXT("%s Enter"), ANSI_TO_TCHAR(__FUNCTION__));
	
	
	checkf(!NGXRHIExtensions, TEXT("static member NGXRHIExtensions should only be assigned once by this ctor when called during module startup") );
	NGXRHIExtensions = InNGXRHIExtensions;

	ResolutionSettings.Init(FDLSSOptimalSettings(), int32(EDLSSQualityMode::NumValues));

	static_assert(int32(EDLSSQualityMode::NumValues) == 6, "dear DLSS plugin NVIDIA developer, please update this code to handle the new EDLSSQualityMode enum values");
	for (auto QualityMode : { EDLSSQualityMode::UltraPerformance,  EDLSSQualityMode::Performance , EDLSSQualityMode::Balanced, EDLSSQualityMode::Quality, EDLSSQualityMode::UltraQuality,  EDLSSQualityMode::DLAA})
	{
		check(ToNGXQuality(QualityMode) < ResolutionSettings.Num());
		check(ToNGXQuality(QualityMode) >= 0);

		FDLSSOptimalSettings OptimalSettings = NGXRHIExtensions->GetDLSSOptimalSettings(ToNGXQuality(QualityMode));
		
		ResolutionSettings[ToNGXQuality(QualityMode)] = OptimalSettings;

		// we only consider non-fixed resolutions for the overall min / max resolution fraction
		if (OptimalSettings.bIsSupported && !OptimalSettings.IsFixedResolution())
		{
			// We use OptimalSettings.OptimalResolutionFraction to avoid getting to "floating point close" to OptimalSettings.{MinMax}ResolutionFraction) 
			MinResolutionFraction = FMath::Min(MinResolutionFraction, OptimalSettings.OptimalResolutionFraction);
			MaxResolutionFraction = FMath::Max(MaxResolutionFraction, OptimalSettings.OptimalResolutionFraction);
		}
		if (OptimalSettings.bIsSupported)
		{
			++NumRuntimeQualityModes;
		}

		UE_LOG(LogDLSS, Log, TEXT("QualityMode %d: bSupported = %u, ResolutionFraction = %.4f. MinResolutionFraction=%.4f,  MaxResolutionFraction %.4f"),
			QualityMode, OptimalSettings.bIsSupported, OptimalSettings.OptimalResolutionFraction, OptimalSettings.MinResolutionFraction, OptimalSettings.MaxResolutionFraction);
	}

	// the DLSS module will report DLSS as not supported if there are no supported quality modes at runtime
	UE_LOG(LogDLSS, Log, TEXT("NumRuntimeQualityModes=%u, MinResolutionFraction=%.4f,  MaxResolutionFraction=%.4f"), NumRuntimeQualityModes, MinResolutionFraction, MaxResolutionFraction);

	// Higher levels of the code (e.g. UI) should check whether each mode is actually supported
	// But for now verify early that the DLSS 2.0 modes are supported. Those checks could be removed in the future
	check(IsQualityModeSupported(EDLSSQualityMode::Performance));
	check(IsQualityModeSupported(EDLSSQualityMode::Balanced));
	check(IsQualityModeSupported(EDLSSQualityMode::Quality));


	UE_LOG(LogDLSS, Log, TEXT("%s Leave"), ANSI_TO_TCHAR(__FUNCTION__));
}

FDLSSUpscaler::~FDLSSUpscaler()
{
	UE_LOG(LogDLSS, Log, TEXT("%s Enter"), ANSI_TO_TCHAR(__FUNCTION__));

	UE_LOG(LogDLSS, Log, TEXT("%s Leave"), ANSI_TO_TCHAR(__FUNCTION__));
}

// this gets explicitly called during module shutdown
void FDLSSUpscaler::ReleaseStaticResources()
{
	UE_LOG(LogDLSS, Log, TEXT("%s Enter"), ANSI_TO_TCHAR(__FUNCTION__));
	ResolutionSettings.Empty();
	for (auto& UpscalerInstance : DLSSUpscalerInstancesPerViewFamily)
	{
		UpscalerInstance.Reset();
	}
	
	UE_LOG(LogDLSS, Log, TEXT("%s Leave"), ANSI_TO_TCHAR(__FUNCTION__));
}

#if DLSS_ENGINE_ADDPASSES_RETURN_THROUGH_PARAMS
void FDLSSUpscaler::AddPasses(
#else
ITemporalUpscaler::FOutputs FDLSSUpscaler::AddPasses(
#endif
	FRDGBuilder& GraphBuilder,
	const FViewInfo& View,
	const FPassInputs& PassInputs
#if DLSS_ENGINE_ADDPASSES_RETURN_THROUGH_PARAMS
	, FRDGTextureRef* OutSceneColorTexture
	, FIntRect* OutSceneColorViewRect
	, FRDGTextureRef* OutSceneColorHalfResTexture
	, FIntRect* OutSceneColorHalfResViewRect
#endif
) const
{
#if ENGINE_MAJOR_VERSION < 5
	// For TAAU, this can happen with screen percentages larger than 100%, so not something that DLSS viewports are setup with
	checkf(!PassInputs.bAllowDownsampleSceneColor,TEXT("The DLSS plugin does not support downsampling the scenecolor. Please set r.TemporalAA.AllowDownsampling=0"));
#endif
	checkf(View.PrimaryScreenPercentageMethod == EPrimaryScreenPercentageMethod::TemporalUpscale, TEXT("DLSS requires TemporalUpscale. If you hit this assert, please set r.TemporalAA.Upscale=1"));


	

	const FTemporalAAHistory& InputHistory = View.PrevViewInfo.TemporalAAHistory;
	const TRefCountPtr<ICustomTemporalAAHistory> InputCustomHistory = View.PrevViewInfo.CustomTemporalAAHistory;

	FTemporalAAHistory* OutputHistory = View.ViewState ? &(View.ViewState->PrevFrameViewInfo.TemporalAAHistory) : nullptr;
	TRefCountPtr < ICustomTemporalAAHistory >* OutputCustomHistory = View.ViewState ? &(View.ViewState->PrevFrameViewInfo.CustomTemporalAAHistory) : nullptr;

	
	FDLSSPassParameters DLSSParameters(View);
	const FIntRect SecondaryViewRect = DLSSParameters.OutputViewRect;
#if !DLSS_ENGINE_ADDPASSES_RETURN_THROUGH_PARAMS
	ITemporalUpscaler::FOutputs Outputs;
#endif
	{
		RDG_GPU_STAT_SCOPE(GraphBuilder, DLSS);
		RDG_EVENT_SCOPE(GraphBuilder, "DLSS");

		const bool bDilateMotionVectors = CVarNGXDLSSDilateMotionVectors.GetValueOnRenderThread() != 0;

		FRDGTextureRef CombinedVelocityTexture = AddVelocityCombinePass(GraphBuilder, View, PassInputs.SceneDepthTexture, PassInputs.SceneVelocityTexture, bDilateMotionVectors);

		DLSSParameters.SceneColorInput = PassInputs.SceneColorTexture;
		DLSSParameters.SceneVelocityInput = CombinedVelocityTexture;
		DLSSParameters.SceneDepthInput = PassInputs.SceneDepthTexture;
		DLSSParameters.bHighResolutionMotionVectors = bDilateMotionVectors;
		const FDLSSOutputs DLSSOutputs = AddDLSSPass(
			GraphBuilder,
			View,
			DLSSParameters,
			InputHistory,
			OutputHistory,
			InputCustomHistory,
			OutputCustomHistory
		);

#if DLSS_ENGINE_ADDPASSES_RETURN_THROUGH_PARAMS
		FRDGTextureRef SceneColorTexture = DLSSOutputs.SceneColor;

		*OutSceneColorTexture = SceneColorTexture;
		*OutSceneColorViewRect = SecondaryViewRect;

		*OutSceneColorHalfResTexture = nullptr;
		*OutSceneColorHalfResViewRect = FIntRect(FIntPoint::ZeroValue, FIntPoint::ZeroValue);
#else
		Outputs.FullRes.Texture = DLSSOutputs.SceneColor;
		Outputs.FullRes.ViewRect = SecondaryViewRect;
#endif
	}
#if !DLSS_ENGINE_ADDPASSES_RETURN_THROUGH_PARAMS
	return Outputs;
#endif
}

FDLSSOutputs FDLSSUpscaler::AddDLSSPass(
	FRDGBuilder& GraphBuilder,
	const FViewInfo& View,
	const FDLSSPassParameters& Inputs,
	const FTemporalAAHistory& InputHistory,
	FTemporalAAHistory* OutputHistory,
	const TRefCountPtr<ICustomTemporalAAHistory> InputCustomHistoryInterface,
	TRefCountPtr<ICustomTemporalAAHistory>* OutputCustomHistoryInterface
) const
{
	check(IsValidUpscalerInstance(this));
	check(IsDLSSActive());
	const FDLSSUpscalerHistory* InputCustomHistory = static_cast<const FDLSSUpscalerHistory*>(InputCustomHistoryInterface.GetReference());

	const bool bCameraCut = !InputHistory.IsValid() || View.bCameraCut || !OutputHistory;
	const FIntPoint OutputExtent = Inputs.GetOutputExtent();

	const FIntRect SrcRect = Inputs.InputViewRect;
	const FIntRect DestRect = Inputs.OutputViewRect;

	const float ScaleX = float(SrcRect.Width()) / float(DestRect.Width());
	const float ScaleY = float(SrcRect.Height()) / float(DestRect.Height());

	// FDLSSUpscaler::SetupMainGameViewFamily or FDLSSUpscalerEditor::SetupEditorViewFamily 
	// set DLSSQualityMode by setting an FDLSSUpscaler on the ViewFamily (from the pool in DLSSUpscalerInstancesPerViewFamily)
	
	checkf(DLSSQualityMode != EDLSSQualityMode::NumValues, TEXT("Invalid Quality mode, not initialized"));
	checkf(IsQualityModeSupported(DLSSQualityMode), TEXT("%u is not a valid Quality mode"), DLSSQualityMode);

	// This assert can accidentally hit with small viewrect dimensions (e.g. when resizing an editor view) due to floating point rounding & quantization issues
	// e.g. with 33% screen percentage at 1000 DestRect dimension we get 333/1000 = 0.33 but at 10 DestRect dimension we get 3/10 0.3, thus the assert hits
	
	checkf(DestRect.Width()  < 100 || GetMinResolutionFractionForQuality(DLSSQualityMode) - 0.01f <= ScaleX && ScaleX <= GetMaxResolutionFractionForQuality(DLSSQualityMode) + 0.01f, TEXT("The current resolution fraction %f is out of the supported DLSS range [%f ... %f] for quality mode %d."), ScaleX, GetMinResolutionFractionForQuality(DLSSQualityMode), GetMaxResolutionFractionForQuality(DLSSQualityMode), DLSSQualityMode);
	checkf(DestRect.Height() < 100 || GetMinResolutionFractionForQuality(DLSSQualityMode) - 0.01f <= ScaleY && ScaleY <= GetMaxResolutionFractionForQuality(DLSSQualityMode) + 0.01f, TEXT("The current resolution fraction %f is out of the supported DLSS range [%f ... %f] for quality mode %d."), ScaleY, GetMinResolutionFractionForQuality(DLSSQualityMode), GetMaxResolutionFractionForQuality(DLSSQualityMode), DLSSQualityMode);

	const TCHAR* PassName = TEXT("MainUpsampling");

	// Create outputs
	FDLSSOutputs Outputs;
	{
		FRDGTextureDesc SceneColorDesc = FRDGTextureDesc::Create2D(
			OutputExtent,
			PF_FloatRGBA,
			FClearValueBinding::Black,
			TexCreate_ShaderResource | TexCreate_UAV);

		const TCHAR* OutputName = TEXT("DLSSOutputSceneColor");

		Outputs.SceneColor = GraphBuilder.CreateTexture(
			SceneColorDesc,
			OutputName);
	}

	FDLSSStateRef DLSSState = (InputCustomHistory && InputCustomHistory->DLSSState) ? InputCustomHistory->DLSSState : MakeShared<FDLSSState, ESPMode::ThreadSafe>();
	{
		FDLSSShaderParameters* PassParameters = GraphBuilder.AllocParameters<FDLSSShaderParameters>();

		// Set up common shader parameters
		const FIntPoint InputExtent = Inputs.SceneColorInput->Desc.Extent;
		const FIntRect InputViewRect = Inputs.InputViewRect;
		const FIntRect OutputViewRect = Inputs.OutputViewRect;

		// Input buffer shader parameters
		{
			PassParameters->SceneColorInput = Inputs.SceneColorInput;
			PassParameters->SceneDepthInput = Inputs.SceneDepthInput;
			PassParameters->SceneVelocityInput = Inputs.SceneVelocityInput;
			PassParameters->EyeAdaptation = GetEyeAdaptationTexture(GraphBuilder, View);
		}

		// Outputs 
		{
			PassParameters->SceneColorOutput = Outputs.SceneColor;
		}

		const FVector2D JitterOffset = View.TemporalJitterPixels;
#if ENGINE_MAJOR_VERSION < 5
		const float DeltaWorldTime = View.Family->DeltaWorldTime;
#else
		const float DeltaWorldTime = View.Family->Time.GetDeltaWorldTimeSeconds();
#endif

		const float PreExposure = View.PreExposure;
		const bool bUseAutoExposure = CVarNGXDLSSAutoExposure.GetValueOnRenderThread() != 0;

		const bool bReleaseMemoryOnDelete = CVarNGXDLSSReleaseMemoryOnDelete.GetValueOnRenderThread() != 0;

		const float Sharpness = FMath::Clamp(CVarNGXDLSSSharpness.GetValueOnRenderThread(), -1.0f, 1.0f);
		NGXRHI* LocalNGXRHIExtensions = this->NGXRHIExtensions;
		const int32 NGXDLSSPreset = GetNGXDLSSPresetFromQualityMode(DLSSQualityMode);
		const int32 NGXPerfQuality = ToNGXQuality(DLSSQualityMode);
		GraphBuilder.AddPass(
			RDG_EVENT_NAME("DLSS %s%s %dx%d -> %dx%d",
				PassName,
				Sharpness != 0.0f ? TEXT(" Sharpen") : TEXT(""),
				SrcRect.Width(), SrcRect.Height(),
				DestRect.Width(), DestRect.Height()),
			PassParameters,
			ERDGPassFlags::Compute | ERDGPassFlags::Raster | ERDGPassFlags::SkipRenderPass,
			[LocalNGXRHIExtensions, PassParameters, Inputs, bCameraCut, JitterOffset, DeltaWorldTime, PreExposure, Sharpness, NGXDLSSPreset, NGXPerfQuality, DLSSState, bUseAutoExposure, bReleaseMemoryOnDelete](FRHICommandListImmediate& RHICmdList)
		{
			FRHIDLSSArguments DLSSArguments;
			FMemory::Memzero(&DLSSArguments, sizeof(DLSSArguments));

			// input parameters
			DLSSArguments.SrcRect = Inputs.InputViewRect;
			DLSSArguments.DestRect = Inputs.OutputViewRect;

			DLSSArguments.Sharpness = Sharpness;
			DLSSArguments.bReset = bCameraCut;


#if ENGINE_MAJOR_VERSION < 5
			DLSSArguments.JitterOffset = JitterOffset;
			DLSSArguments.MotionVectorScale = FVector2D(1.0f, 1.0f);
#else
			DLSSArguments.JitterOffset = FVector2f(JitterOffset);	// LWC_TODO: Precision loss
			DLSSArguments.MotionVectorScale = FVector2f::UnitVector;

#endif ENGINE_MAJOR_VERSION

			DLSSArguments.bHighResolutionMotionVectors = Inputs.bHighResolutionMotionVectors;
			DLSSArguments.DeltaTime = DeltaWorldTime;
			DLSSArguments.bReleaseMemoryOnDelete = bReleaseMemoryOnDelete;

			DLSSArguments.DLSSPreset = NGXDLSSPreset;
			DLSSArguments.PerfQuality = NGXPerfQuality;

			check(PassParameters->SceneColorInput);
			PassParameters->SceneColorInput->MarkResourceAsUsed();
			DLSSArguments.InputColor = PassParameters->SceneColorInput->GetRHI();
					

			check(PassParameters->SceneVelocityInput);
			PassParameters->SceneVelocityInput->MarkResourceAsUsed();
			DLSSArguments.InputMotionVectors = PassParameters->SceneVelocityInput->GetRHI();

			check(PassParameters->SceneDepthInput);
			PassParameters->SceneDepthInput->MarkResourceAsUsed();
			DLSSArguments.InputDepth = PassParameters->SceneDepthInput->GetRHI();

			check(PassParameters->EyeAdaptation);
			PassParameters->EyeAdaptation->MarkResourceAsUsed();
			DLSSArguments.InputExposure = PassParameters->EyeAdaptation->GetRHI();
			DLSSArguments.PreExposure = PreExposure;
			DLSSArguments.bUseAutoExposure = bUseAutoExposure;
			
			// output images
			check(PassParameters->SceneColorOutput);
			PassParameters->SceneColorOutput->MarkResourceAsUsed();
			DLSSArguments.OutputColor = PassParameters->SceneColorOutput->GetRHI();

			RHICmdList.TransitionResource(ERHIAccess::UAVMask, DLSSArguments.OutputColor);
			RHICmdList.EnqueueLambda(
				[LocalNGXRHIExtensions, DLSSArguments, DLSSState](FRHICommandListImmediate& Cmd) mutable
			{
				const uint32 FeatureCreationNode = CVarNGXDLSSFeatureCreationNode.GetValueOnRenderThread();
				const uint32 FeatureVisibilityMask = CVarNGXDLSSFeatureVisibilityMask.GetValueOnRenderThread();

				DLSSArguments.GPUNode = FeatureCreationNode == -1 ? Cmd.GetGPUMask().ToIndex() : FMath::Clamp(FeatureCreationNode, 0u, GNumExplicitGPUsForRendering - 1);
				DLSSArguments.GPUVisibility = FeatureVisibilityMask == -1 ? Cmd.GetGPUMask().GetNative() : (Cmd.GetGPUMask().All().GetNative() & FeatureVisibilityMask) ;

				LocalNGXRHIExtensions->ExecuteDLSS(Cmd, DLSSArguments, DLSSState);
			});
		});
	}

	if (!View.bStatePrevViewInfoIsReadOnly && OutputHistory)
	{
		OutputHistory->SafeRelease();

		GraphBuilder.QueueTextureExtraction(Outputs.SceneColor, &OutputHistory->RT[0]);

		OutputHistory->ViewportRect = DestRect;
		OutputHistory->ReferenceBufferSize = OutputExtent;
	}


	if (!View.bStatePrevViewInfoIsReadOnly && OutputCustomHistoryInterface)
	{
		if (!OutputCustomHistoryInterface->GetReference())
		{
			(*OutputCustomHistoryInterface) = new FDLSSUpscalerHistory(DLSSState);
		}
	}
	return Outputs;
}

void FDLSSUpscaler::Tick(FRHICommandListImmediate& RHICmdList)
{
	check(NGXRHIExtensions);
	check(IsInRenderingThread());
	// Pass it over to the RHI thread which handles the lifetime of the NGX DLSS resources
	RHICmdList.EnqueueLambda(
		[this](FRHICommandListImmediate& Cmd)
	{
		NGXRHIExtensions->TickPoolElements();
	});
}

bool FDLSSUpscaler::IsQualityModeSupported(EDLSSQualityMode InQualityMode) const
{
	return ResolutionSettings[ToNGXQuality(InQualityMode)].bIsSupported;
}

bool FDLSSUpscaler::IsDLSSActive() const
{
	static const auto CVarTemporalAAUpscaler = IConsoleManager::Get().FindConsoleVariable(TEXT("r.TemporalAA.Upscaler"));
	const bool bDLSSActive =
#if DLSS_ENGINE_HAS_GTEMPORALUPSCALER
		((GTemporalUpscaler == this) || IsValidUpscalerInstance(this)) &&
#else
		((GCustomStaticScreenPercentage == this) || IsValidUpscalerInstance(this)) &&
#endif
		CVarTemporalAAUpscaler && (CVarTemporalAAUpscaler->GetInt() != 0) &&
		((CVarNGXDLSSEnable.GetValueOnAnyThread() != 0) || CVarNGXDLAAEnable.GetValueOnAnyThread());
	return bDLSSActive;
}


void FDLSSUpscaler::SetupMainGameViewFamily(FSceneViewFamily& ViewFamily)
{
	const bool bDLSSActiveWithAutomation = !GIsAutomationTesting || (GIsAutomationTesting && (CVarNGXDLSSAutomationTesting.GetValueOnAnyThread() != 0));
	
	if (IsDLSSActive() && bDLSSActiveWithAutomation)
	{
#if DLSS_ENGINE_HAS_GTEMPORALUPSCALER
		checkf(GTemporalUpscaler == this, TEXT("GTemporalUpscaler is not set to a DLSS upscaler . Please check that only one upscaling plugin is active."));
#endif
		checkf(GCustomStaticScreenPercentage == this, TEXT("GCustomStaticScreenPercentage is not set to a DLSS upscaler. Please check that only one upscaling plugin is active."));

		if (!GIsEditor || (GIsEditor && GIsPlayInEditorWorld && EnableDLSSInPlayInEditorViewports()))
		{
			bool bIsDLAAMode = IsDLAAMode();
			EDLSSQualityMode DLSSQuality;
			if (bIsDLAAMode)
			{
				DLSSQuality = EDLSSQualityMode::Quality;
			}
			else if (IsAutoQualityMode())
			{
				TOptional<EDLSSQualityMode> MaybeDLSSQuality = GetAutoQualityModeFromViewFamily(ViewFamily);
				if (!MaybeDLSSQuality.IsSet())
				{
					return;
				}
				else
				{
					DLSSQuality = MaybeDLSSQuality.GetValue();
				}
			}
			else
			{
				DLSSQuality = GetSupportedQualityModeFromCVarValue(CVarNGXDLSSPerfQualitySetting.GetValueOnGameThread());
			}

			ViewFamily.SetTemporalUpscalerInterface(GetUpscalerInstanceForViewFamily(this, DLSSQuality));

			if (ViewFamily.EngineShowFlags.ScreenPercentage && !ViewFamily.GetScreenPercentageInterface())
			{
				// DLSS uses recommended resolution fraction, DLAA forces a 1.0 scale
				float ResolutionFraction = 1.0f;
				if (!bIsDLAAMode)
				{
					ResolutionFraction = GetOptimalResolutionFractionForQuality(DLSSQuality);
				}
				ViewFamily.SetScreenPercentageInterface(new FLegacyScreenPercentageDriver(
					ViewFamily, ResolutionFraction
#if SUPPORTS_POSTPROCESSING_SCREEN_PERCENTAGE					
					/* AllowPostProcessSettingsScreenPercentage = */ , false
#endif
				
				));
			}
		}
	}
}

#if DLSS_ENGINE_SUPPORTS_CSSPD
void FDLSSUpscaler::SetupViewFamily(FSceneViewFamily& ViewFamily, TSharedPtr<ICustomStaticScreenPercentageData> InScreenPercentageDataInterface)
{
	check(InScreenPercentageDataInterface.IsValid());
	TSharedPtr<FDLSSViewportQualitySetting> ScreenPercentageData = StaticCastSharedPtr<FDLSSViewportQualitySetting>(InScreenPercentageDataInterface);
	
	EDLSSQualityMode Quality = static_cast<EDLSSQualityMode>(ScreenPercentageData->QualitySetting);
	const bool bIsDLAAMode = ScreenPercentageData->bDLAAEnabled;
	if (bIsDLAAMode)
	{
		Quality = EDLSSQualityMode::Quality;
	}
	if (!IsQualityModeSupported(Quality))
	{
		UE_LOG(LogDLSS, Warning, TEXT("DLSS Quality mode is not supported %d"), Quality);
		return;
	}
	const bool bDLSSActiveWithAutomation = !GIsAutomationTesting || (GIsAutomationTesting && (CVarNGXDLSSAutomationTesting.GetValueOnAnyThread() != 0));
	if (IsDLSSActive() && bDLSSActiveWithAutomation)
	{
#if DLSS_ENGINE_HAS_GTEMPORALUPSCALER
		checkf(GTemporalUpscaler == this, TEXT("GTemporalUpscaler is not set to a DLSS upscaler . Please check that only one upscaling plugin is active."));
#endif
		checkf(GCustomStaticScreenPercentage == this, TEXT("GCustomStaticScreenPercentage is not set to a DLSS upscaler. Please check that only one upscaling plugin is active."));

		ViewFamily.SetTemporalUpscalerInterface(GetUpscalerInstanceForViewFamily(this, Quality));

		if (ViewFamily.EngineShowFlags.ScreenPercentage && !ViewFamily.GetScreenPercentageInterface())
		{
			const float ResolutionFraction = bIsDLAAMode ? 1.0f : GetOptimalResolutionFractionForQuality(Quality);
			ViewFamily.SetScreenPercentageInterface(new FLegacyScreenPercentageDriver(
				ViewFamily, ResolutionFraction
				#if SUPPORTS_POSTPROCESSING_SCREEN_PERCENTAGE					
					/* AllowPostProcessSettingsScreenPercentage = */ , false
				#endif
				));
		}
	}
}
#endif

TOptional<EDLSSQualityMode> FDLSSUpscaler::GetAutoQualityModeFromViewFamily(const FSceneViewFamily& ViewFamily) const
{
	if (ensure(ViewFamily.RenderTarget != nullptr))
	{
		FIntPoint ViewSize = ViewFamily.RenderTarget->GetSizeXY();
		int32 Pixels = ViewSize.X * ViewSize.Y;
		return GetAutoQualityModeFromPixels(Pixels);
	}

	return TOptional<EDLSSQualityMode> {};
}

TOptional<EDLSSQualityMode> FDLSSUpscaler::GetAutoQualityModeFromPixels(int PixelCount) const
{
	if (PixelCount >= 8'300'000 && IsQualityModeSupported(EDLSSQualityMode::UltraPerformance))
	{
		return EDLSSQualityMode::UltraPerformance;
	}
	else if (PixelCount >= 3'690'000 && IsQualityModeSupported(EDLSSQualityMode::Performance))
	{
		return EDLSSQualityMode::Performance;
	}
	else if (PixelCount >= 2'030'000 && IsQualityModeSupported(EDLSSQualityMode::Quality))
	{
		return EDLSSQualityMode::Quality;
	}

	return TOptional<EDLSSQualityMode> {};
}


bool  FDLSSUpscaler::EnableDLSSInPlayInEditorViewports() const
{
	if (GetDefault<UDLSSOverrideSettings>()->EnableDLSSInPlayInEditorViewportsOverride == EDLSSSettingOverride::UseProjectSettings)
	{
		return GetDefault<UDLSSSettings>()->bEnableDLSSInPlayInEditorViewports;
	}
	else
	{
		return GetDefault<UDLSSOverrideSettings>()->EnableDLSSInPlayInEditorViewportsOverride == EDLSSSettingOverride::Enabled;
	}
}

float FDLSSUpscaler::GetMinUpsampleResolutionFraction() const
{
	return MinResolutionFraction;
}

float FDLSSUpscaler::GetMaxUpsampleResolutionFraction() const
{
	return MaxResolutionFraction;
}

float FDLSSUpscaler::GetOptimalResolutionFractionForQuality(EDLSSQualityMode Quality) const
{
	checkf(IsQualityModeSupported(Quality),TEXT("%u is not a valid Quality mode"), Quality);
	return ResolutionSettings[ToNGXQuality(Quality)].OptimalResolutionFraction;
}

float  FDLSSUpscaler::GetOptimalSharpnessForQuality(EDLSSQualityMode Quality) const
{
	checkf(IsQualityModeSupported(Quality), TEXT("%u is not a valid Quality mode"), Quality);
	return ResolutionSettings[ToNGXQuality(Quality)].Sharpness;
}

float FDLSSUpscaler::GetMinResolutionFractionForQuality(EDLSSQualityMode Quality) const
{
	checkf(IsQualityModeSupported(Quality), TEXT("%u is not a valid Quality mode"), Quality);
	return ResolutionSettings[ToNGXQuality(Quality)].MinResolutionFraction;
}

float FDLSSUpscaler::GetMaxResolutionFractionForQuality(EDLSSQualityMode Quality) const
{
	checkf(IsQualityModeSupported(Quality), TEXT("%u is not a valid Quality mode"), Quality);
	return ResolutionSettings[ToNGXQuality(Quality)].MaxResolutionFraction;
}

bool FDLSSUpscaler::IsFixedResolutionFraction(EDLSSQualityMode Quality) const
{
	checkf(IsQualityModeSupported(Quality), TEXT("%u is not a valid Quality mode"), Quality);
	return ResolutionSettings[ToNGXQuality(Quality)].IsFixedResolution();
}

#undef LOCTEXT_NAMESPACE
