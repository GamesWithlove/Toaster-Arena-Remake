// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Widgets/SCompoundWidget.h"

#include "Widgets/Layout/SExpandableArea.h"
#include "Widgets/Views/ITableRow.h"
#include "Widgets/Views/SListView.h"
#include "Widgets/Views/STableRow.h"

class FPCGEditor;
class FPCGHLSLSyntaxHighlighter;
class IPCGNodeSourceTextProvider;
class SPCGNodeSourceTextBox;
struct FPCGCompilerDiagnostics;

/** Window for editing node source text. */
class SPCGEditorNodeSource : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SPCGEditorNodeSource) { }
	SLATE_END_ARGS()

	SPCGEditorNodeSource();

	void Construct(const FArguments& InArgs, TSharedPtr<FPCGEditor> InPCGEditor);

	void SetTextProviderObject(UObject* InProviderObject);
	const UObject* GetTextProviderObject() const { return ShaderTextProviderObject.IsValid() ? ShaderTextProviderObject.Get() : nullptr; }

	void OnDiagnosticsUpdated(const FPCGCompilerDiagnostics& InDiagnostics) const;

private:
	void Refresh();

	SSplitter::ESizeRule GetDeclarationsSectionSizeRule() const;
	SSplitter::ESizeRule GetShaderFunctionsSectionSizeRule() const;
	IPCGNodeSourceTextProvider* GetTextProviderInterface() const;

	FText GetDeclarationsAsText() const;
	FText GetShaderFunctionsAsText() const;
	FText GetShaderTextAsText() const;

	bool IsShaderTextReadOnly() const;

	void OnShaderFunctionsTextChanged(const FText& InText);
	void OnShaderSourceTextChanged(const FText& InText);

	void OnShaderFunctionsTextCommitted(const FText& InText, ETextCommit::Type InCommitInfo);
	void OnShaderSourceTextCommitted(const FText& InText, ETextCommit::Type InCommitInfo);

	void OnShaderFunctionsTextChangesApplied() const;
	void OnShaderSourceTextChangesApplied() const;

	void SetShaderFunctionsText() const;
	void SetShaderSourceText() const;

	TSharedRef<SWidget> ConstructNonExpandableHeaderWidget(const SExpandableArea::FArguments& InArgs) const;

	TSharedRef<FPCGHLSLSyntaxHighlighter> SyntaxHighlighterDeclarations;
	TSharedRef<FPCGHLSLSyntaxHighlighter> SyntaxHighlighterShaderText;

	TWeakObjectPtr<UObject> ShaderTextProviderObject;

	TSharedPtr<SExpandableArea> DeclarationsExpandableArea;
	TSharedPtr<SExpandableArea> ShaderFunctionsExpandableArea;

	TSharedPtr<SPCGNodeSourceTextBox> DeclarationsTextBox;
	TSharedPtr<SPCGNodeSourceTextBox> ShaderFunctionsTextBox;
	TSharedPtr<SPCGNodeSourceTextBox> ShaderTextTextBox;

	FText ShaderFunctionsText;
	FText ShaderSourceText;
};
