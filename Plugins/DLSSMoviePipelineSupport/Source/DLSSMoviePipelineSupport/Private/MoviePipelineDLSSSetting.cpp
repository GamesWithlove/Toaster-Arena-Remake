// Copyright Epic Games, Inc. All Rights Reserved.

#include "MoviePipelineDLSSSetting.h"

#include "CustomStaticScreenPercentage.h"
#include "DLSSSettings.h"
#include "DLSSBlueprint/Public/DLSSLibrary.h"
#include "MovieRenderPipelineDataTypes.h"
#include "SceneView.h"

#define LOCTEXT_NAMESPACE "MoviePipelineDLSSSetting"

namespace MRQHelpers
{
	UDLSSMode EMoviePipelineDLSSQualityToUDLSSMode(EMoviePipelineDLSSQuality InDLSSQuality)
	{
		// Offset our quality to be consistent with UDLSSMode enum.
		uint8 OffsetDlssQuality = static_cast<uint8>(InDLSSQuality) + static_cast<uint8>(UDLSSMode::DLAA);
		return static_cast<UDLSSMode>(OffsetDlssQuality);
	}
}

UMoviePipelineDLSSSetting::UMoviePipelineDLSSSetting()
	: DLSSQuality(EMoviePipelineDLSSQuality::EMoviePipelineDLSSQuality_Performance)
{
}

void UMoviePipelineDLSSSetting::SetupViewFamily(FSceneViewFamily& ViewFamily)
{
	if (GCustomStaticScreenPercentage && ViewFamily.ViewMode == EViewModeIndex::VMI_Lit)
	{
		TSharedPtr<FDLSSViewportQualitySetting> DLSSQualitySettingInterface = MakeShared<FDLSSViewportQualitySetting>();
		// Offset our quality to be consistent with UDLSSMode enum.
		DLSSQualitySettingInterface->QualitySetting = UDLSSLibrary::ToDLSSQualityCVarValue(MRQHelpers::EMoviePipelineDLSSQualityToUDLSSMode(DLSSQuality));
		GCustomStaticScreenPercentage->SetupViewFamily(ViewFamily, DLSSQualitySettingInterface);
	}
}

void UMoviePipelineDLSSSetting::GetFormatArguments(FMoviePipelineFormatArgs& InOutFormatArgs) const
{
	Super::GetFormatArguments(InOutFormatArgs);

	bool bIsCurrentModeSupported = UDLSSLibrary::IsDLSSModeSupported(MRQHelpers::EMoviePipelineDLSSQualityToUDLSSMode(DLSSQuality));
	// Only embed meta data if the quality mode is supported.
	if (bIsCurrentModeSupported)
	{
		InOutFormatArgs.FileMetadata.Add(TEXT("unreal/dlssQuality"), StaticEnum<EMoviePipelineDLSSQuality>()->GetDisplayNameTextByIndex((int64)DLSSQuality).ToString());
		InOutFormatArgs.FilenameArguments.Add(TEXT("dlss_quality"), StaticEnum<EMoviePipelineDLSSQuality>()->GetDisplayNameTextByIndex((int64)DLSSQuality).ToString());
	}
	else
	{
		InOutFormatArgs.FileMetadata.Add(TEXT("unreal/dlssQuality"), "Unsupported");
		InOutFormatArgs.FilenameArguments.Add(TEXT("dlss_quality"), "Unsupported");
	}
}

void UMoviePipelineDLSSSetting::ValidateStateImpl()
{
	Super::ValidateStateImpl();

	if (!UDLSSLibrary::IsDLSSSupported())
	{

		ValidationResults.Add(FText::Format(LOCTEXT("DLSS_Unsupported", "DLSS is not supported due to \"{0}\"."), StaticEnum<UDLSSSupport>()->GetDisplayNameTextByValue(int64(UDLSSLibrary::QueryDLSSSupport()))));
		ValidationState = EMoviePipelineValidationState::Warnings;

	}
	else if (!UDLSSLibrary::IsDLSSModeSupported(MRQHelpers::EMoviePipelineDLSSQualityToUDLSSMode(DLSSQuality)))
	{
		ValidationResults.Add(FText::Format(LOCTEXT("DLSS_Mode_Unsupported", "\"{0}\" Mode is not supported. Please try a lower quality setting."), StaticEnum<EMoviePipelineDLSSQuality>()->GetDisplayNameTextByIndex((int64)DLSSQuality)));
		ValidationState = EMoviePipelineValidationState::Warnings;
	}

}