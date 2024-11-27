// Copyright Epic Games, Inc. All Rights Reserved.

#include "SPCGEditorNodeSource.h"

#include "PCGSettings.h"
#include "Compute/IPCGNodeSourceTextProvider.h"
#include "Helpers/PCGHelpers.h"

#include "PCGEditor.h"
#include "PCGHLSLSyntaxHighlighter.h"
#include "SPCGNodeSourceTextBox.h"

#include "Widgets/Input/SButton.h"
#include "Widgets/Layout/SSpacer.h"

#define LOCTEXT_NAMESPACE "SPCGEditorNodeSource"

SPCGEditorNodeSource::SPCGEditorNodeSource()
	: SyntaxHighlighterDeclarations(FPCGHLSLSyntaxHighlighter::Create())
	, SyntaxHighlighterShaderText(FPCGHLSLSyntaxHighlighter::Create())
{
}

void SPCGEditorNodeSource::Construct(const FArguments& InArgs, TSharedPtr<FPCGEditor> InPCGEditor)
{
	SExpandableArea::FArguments ExpandableAreaArgs;
	ExpandableAreaArgs.AreaTitleFont(FAppStyle::GetFontStyle("DetailsView.CategoryFontStyle"));
	
	ChildSlot
	[
		SNew(SSplitter)
		.Orientation(Orient_Vertical)
		.PhysicalSplitterHandleSize(4.0f)
		.HitDetectionSplitterHandleSize(6.0f)
		+SSplitter::Slot()
		.Value(1.0)
		.SizeRule(this, &SPCGEditorNodeSource::GetDeclarationsSectionSizeRule)
		[
			SAssignNew(DeclarationsExpandableArea, SExpandableArea) = ExpandableAreaArgs
			.AreaTitle(LOCTEXT("PCGNodeSource_Declarations_Title", "Declarations (Read-Only)"))
			.InitiallyCollapsed(true)
			.AllowAnimatedTransition(false)
			.BodyContent()
			[
				SAssignNew(DeclarationsTextBox, SPCGNodeSourceTextBox)
				.Text(this, &SPCGEditorNodeSource::GetDeclarationsAsText)
				.IsReadOnly(true)
				.Marshaller(SyntaxHighlighterDeclarations)
			]
		]
		+SSplitter::Slot()
		.Value(1.0)
		.SizeRule(this, &SPCGEditorNodeSource::GetShaderFunctionsSectionSizeRule)
		[
			SAssignNew(ShaderFunctionsExpandableArea, SExpandableArea) = ExpandableAreaArgs
			.AreaTitle(LOCTEXT("PCGNodeSource_ShaderFunctions_Title", "Shader Functions"))
			.InitiallyCollapsed(true)
			.AllowAnimatedTransition(false)
			.BodyContent()
			[
				SAssignNew(ShaderFunctionsTextBox, SPCGNodeSourceTextBox)
				.Text(this, &SPCGEditorNodeSource::GetShaderFunctionsAsText)
				.IsReadOnly(this, &SPCGEditorNodeSource::IsShaderTextReadOnly)
				.Marshaller(SyntaxHighlighterDeclarations)
				.OnTextChanged(this, &SPCGEditorNodeSource::OnShaderFunctionsTextChanged)
				.OnTextCommitted(this, &SPCGEditorNodeSource::OnShaderFunctionsTextCommitted)
				.OnTextChangesApplied(this, &SPCGEditorNodeSource::OnShaderFunctionsTextChangesApplied)
			]
		]
		+SSplitter::Slot()
		.Value(1.0)
		[
			SNew(SVerticalBox)
			+SVerticalBox::Slot()
			.AutoHeight()
			[
				ConstructNonExpandableHeaderWidget(ExpandableAreaArgs.AreaTitle(LOCTEXT("PCGNodeSource_ShaderText_Title", "Shader Source")))
			]
			+SVerticalBox::Slot()
			.FillHeight(1.0f)
			[
				SAssignNew(ShaderTextTextBox, SPCGNodeSourceTextBox)
				.Text(this, &SPCGEditorNodeSource::GetShaderTextAsText)
				.IsReadOnly(this, &SPCGEditorNodeSource::IsShaderTextReadOnly)
				.Marshaller(SyntaxHighlighterShaderText)
				.OnTextChanged(this, &SPCGEditorNodeSource::OnShaderSourceTextChanged)
				.OnTextCommitted(this, &SPCGEditorNodeSource::OnShaderSourceTextCommitted)
				.OnTextChangesApplied(this, &SPCGEditorNodeSource::OnShaderSourceTextChangesApplied)
			]
		]
	];
}

void SPCGEditorNodeSource::SetTextProviderObject(UObject* InProviderObject)
{
	ShaderTextProviderObject = InProviderObject;

	ShaderFunctionsText = GetShaderFunctionsAsText();
	ShaderSourceText = GetShaderTextAsText();

	SyntaxHighlighterShaderText->ClearCompilerMessages();

	Refresh();
}

void SPCGEditorNodeSource::Refresh()
{
	DeclarationsTextBox->Refresh();
	ShaderTextTextBox->Refresh();
}

SSplitter::ESizeRule SPCGEditorNodeSource::GetDeclarationsSectionSizeRule() const
{
	SSplitter::ESizeRule SizeRule = SSplitter::ESizeRule::FractionOfParent;

	if (ensure(DeclarationsExpandableArea.IsValid()))
	{
		SizeRule = DeclarationsExpandableArea->IsExpanded() ? SSplitter::ESizeRule::FractionOfParent : SSplitter::ESizeRule::SizeToContent;
	}

	return SizeRule;
}

SSplitter::ESizeRule SPCGEditorNodeSource::GetShaderFunctionsSectionSizeRule() const
{
	SSplitter::ESizeRule SizeRule = SSplitter::ESizeRule::FractionOfParent;

	if (ensure(ShaderFunctionsExpandableArea.IsValid()))
	{
		SizeRule = ShaderFunctionsExpandableArea->IsExpanded() ? SSplitter::ESizeRule::FractionOfParent : SSplitter::ESizeRule::SizeToContent;
	}

	return SizeRule;
}

IPCGNodeSourceTextProvider* SPCGEditorNodeSource::GetTextProviderInterface() const
{
	return Cast<IPCGNodeSourceTextProvider>(ShaderTextProviderObject);
}

FText SPCGEditorNodeSource::GetDeclarationsAsText() const
{
	if (GetTextProviderInterface())
	{
		return FText::FromString(GetTextProviderInterface()->GetDeclarationsText());
	}

	return FText::GetEmpty();
}

FText SPCGEditorNodeSource::GetShaderFunctionsAsText() const
{
	if (GetTextProviderInterface())
	{
		return FText::FromString(GetTextProviderInterface()->GetShaderFunctionsText());
	}

	return FText::GetEmpty();
}

FText SPCGEditorNodeSource::GetShaderTextAsText() const
{
	if (GetTextProviderInterface())
	{
		return FText::FromString(GetTextProviderInterface()->GetShaderText());
	}

	return FText::GetEmpty();
}

bool SPCGEditorNodeSource::IsShaderTextReadOnly() const
{
	if (IPCGNodeSourceTextProvider* Provider = Cast<IPCGNodeSourceTextProvider>(ShaderTextProviderObject))
	{
		return Provider->IsShaderTextReadOnly();
	}

	return false;
}

void SPCGEditorNodeSource::OnShaderFunctionsTextChanged(const FText& InText)
{
	// Always clear compiler messages when text is edited so that markup doesn't lurk in random places.
	SyntaxHighlighterShaderText->ClearCompilerMessages();

	ShaderFunctionsText = InText;
}

void SPCGEditorNodeSource::OnShaderSourceTextChanged(const FText& InText)
{
	// Always clear compiler messages when text is edited so that markup doesn't lurk in random places.
	SyntaxHighlighterShaderText->ClearCompilerMessages();

	ShaderSourceText = InText;
}

void SPCGEditorNodeSource::OnShaderFunctionsTextCommitted(const FText& InText, ETextCommit::Type InCommitInfo)
{
	ShaderFunctionsText = InText;
	SetShaderFunctionsText();
}

void SPCGEditorNodeSource::OnShaderSourceTextCommitted(const FText& InText, ETextCommit::Type InCommitInfo)
{
	ShaderSourceText = InText;
	SetShaderSourceText();
}

void SPCGEditorNodeSource::OnShaderFunctionsTextChangesApplied() const
{
	SetShaderFunctionsText();
}

void SPCGEditorNodeSource::OnShaderSourceTextChangesApplied() const
{
	SetShaderSourceText();
}

void SPCGEditorNodeSource::SetShaderFunctionsText() const
{
	if (IPCGNodeSourceTextProvider* Provider = GetTextProviderInterface())
	{
		const FString ShaderFunctionsString = ShaderFunctionsText.ToString();

		if (ShaderFunctionsString != Provider->GetShaderFunctionsText())
		{
			Provider->SetShaderFunctionsText(ShaderFunctionsString);
		}
	}
}

void SPCGEditorNodeSource::SetShaderSourceText() const
{
	if (IPCGNodeSourceTextProvider* Provider = GetTextProviderInterface())
	{
		const FString ShaderSourceString = ShaderSourceText.ToString();

		if (ShaderSourceString != Provider->GetShaderText())
		{
			Provider->SetShaderText(ShaderSourceString);
		}
	}
}

void SPCGEditorNodeSource::OnDiagnosticsUpdated(const FPCGCompilerDiagnostics& InDiagnostics) const
{
	SyntaxHighlighterShaderText->SetCompilerMessages(InDiagnostics);
}

TSharedRef<SWidget> SPCGEditorNodeSource::ConstructNonExpandableHeaderWidget(const SExpandableArea::FArguments& InArgs) const
{
	return SNew(SBorder)
		.BorderImage(FStyleDefaults::GetNoBrush())
		.BorderBackgroundColor(FLinearColor::Transparent)
		.Padding(0.0f)
		[
			SNew(SButton)
			.ButtonStyle(FCoreStyle::Get(), "NoBorder")
			.ContentPadding(InArgs._HeaderPadding)
			.ForegroundColor(FSlateColor::UseForeground())
			[
				SNew(SHorizontalBox)
				+SHorizontalBox::Slot()
				.AutoWidth()
				.Padding(InArgs._AreaTitlePadding)
				.VAlign(VAlign_Center)
				[
					SNew(SSpacer)
					.Size(InArgs._Style->CollapsedImage.GetImageSize())
				]
				+SHorizontalBox::Slot()
				.FillWidth(1.0f)
				.VAlign(VAlign_Center)
				[
					SNew(STextBlock)
					.Text(InArgs._AreaTitle)
					.Font(InArgs._AreaTitleFont)
				]
			]
		];
}

#undef LOCTEXT_NAMESPACE
