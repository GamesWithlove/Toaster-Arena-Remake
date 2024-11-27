// Copyright Epic Games, Inc. All Rights Reserved.

#include "PCGHLSLSyntaxHighlighter.h"
#include "PCGEditorStyle.h"
#include "Styling/SlateTypes.h"
#include "Framework/Text/IRun.h"
#include "Framework/Text/TextLayout.h"
#include "Framework/Text/SlateTextUnderlineLineHighlighter.h"

TSharedRef<FPCGHLSLSyntaxHighlighter> FPCGHLSLSyntaxHighlighter::Create(const FSyntaxTextStyle& InSyntaxTextStyle)
{
	return MakeShareable(new FPCGHLSLSyntaxHighlighter(CreateTokenizer(), InSyntaxTextStyle));
}

void FPCGHLSLSyntaxHighlighter::SetCompilerMessages(const FPCGCompilerDiagnostics& InCompilerMessages)
{
	CompilerMessages.Reset();

	for (const FPCGCompilerDiagnostic& Message : InCompilerMessages.Diagnostics)
	{
		// Line adjustment required to work correctly in text box.
		CompilerMessages.Add(Message.Line - 1, Message);
	}

	MakeDirty();
}

void FPCGHLSLSyntaxHighlighter::ClearCompilerMessages()
{
	if (!CompilerMessages.IsEmpty())
	{
		CompilerMessages.Reset();
		MakeDirty();
	}
}

FPCGHLSLSyntaxHighlighter::FPCGHLSLSyntaxHighlighter(TSharedPtr<ISyntaxTokenizer> InTokenizer, const FSyntaxTextStyle& InSyntaxTextStyle) :
	FHLSLSyntaxHighlighterMarshaller(MoveTemp(InTokenizer), InSyntaxTextStyle)
{
}

void FPCGHLSLSyntaxHighlighter::ParseTokens(const FString& SourceString, FTextLayout& TargetTextLayout,	TArray<ISyntaxTokenizer::FTokenizedLine> TokenizedLines)
{
	LineHighlightsToAdd.Empty();
	FHLSLSyntaxHighlighterMarshaller::ParseTokens(SourceString, TargetTextLayout, TokenizedLines);

	TargetTextLayout.SetLineHighlights(LineHighlightsToAdd);
}

FTextLayout::FNewLineData FPCGHLSLSyntaxHighlighter::ProcessTokenizedLine(const ISyntaxTokenizer::FTokenizedLine& TokenizedLine, const int32& LineNumber, const FString& SourceString, EParseState& CurrentParseState)
{
	FTextLayout::FNewLineData LineData = FHLSLSyntaxHighlighterMarshaller::ProcessTokenizedLine(TokenizedLine, LineNumber, SourceString, CurrentParseState);

	FTextBlockStyle ErrorTextStyle = SyntaxTextStyle.ErrorTextStyle;
	TSharedPtr<FSlateTextUnderlineLineHighlighter> UnderlineLineHighlighter = FSlateTextUnderlineLineHighlighter::Create(ErrorTextStyle.UnderlineBrush, ErrorTextStyle.Font, ErrorTextStyle.ColorAndOpacity, ErrorTextStyle.ShadowOffset, ErrorTextStyle.ShadowColorAndOpacity);
	
	TArray<const FPCGCompilerDiagnostic*> Diagnostics;
	CompilerMessages.MultiFindPointer(LineNumber, Diagnostics);
		
	for (const FPCGCompilerDiagnostic* Diagnostic : Diagnostics)
	{
		// If no column specified, underline the whole source line.
		const bool bColumnsSpecified = Diagnostic->ColumnStart != -1 && Diagnostic->ColumnEnd != -1;

		// ColumnStart/ColumnEnd are 1-based, closed interval. FTextRange is 0 based, half-closed interval. 
		FTextRange UnderlineRange(Diagnostic->ColumnStart - 1, Diagnostic->ColumnEnd);

		// The highlighting lines have to match the runs and not exceed their bounds, so we chop them up. 
		for (TSharedRef<IRun> Run : LineData.Runs)
		{
			if (!bColumnsSpecified || !Run->GetTextRange().Intersect(UnderlineRange).IsEmpty())
			{
				LineHighlightsToAdd.Add(FTextLineHighlight(
					LineNumber,
					bColumnsSpecified ? UnderlineRange : Run->GetTextRange(),
					FSlateTextUnderlineLineHighlighter::DefaultZIndex,
					UnderlineLineHighlighter.ToSharedRef()));
			}
		}
	}

	return LineData;
}

FPCGHLSLSyntaxHighlighter::FSyntaxTextStyle FPCGHLSLSyntaxHighlighter::GetSyntaxTextStyle()
{
	return FSyntaxTextStyle(
		FAppStyle::Get().GetWidgetStyle<FTextBlockStyle>("SyntaxHighlight.SourceCode.Normal"),
		FAppStyle::Get().GetWidgetStyle<FTextBlockStyle>("SyntaxHighlight.SourceCode.Operator"),
		FAppStyle::Get().GetWidgetStyle<FTextBlockStyle>("SyntaxHighlight.SourceCode.Keyword"),
		FAppStyle::Get().GetWidgetStyle<FTextBlockStyle>("SyntaxHighlight.SourceCode.String"),
		FAppStyle::Get().GetWidgetStyle<FTextBlockStyle>("SyntaxHighlight.SourceCode.Number"),
		FAppStyle::Get().GetWidgetStyle<FTextBlockStyle>("SyntaxHighlight.SourceCode.Comment"),
		FAppStyle::Get().GetWidgetStyle<FTextBlockStyle>("SyntaxHighlight.SourceCode.PreProcessorKeyword"),
		FAppStyle::Get().GetWidgetStyle<FTextBlockStyle>("SyntaxHighlight.SourceCode.Error"));
}
