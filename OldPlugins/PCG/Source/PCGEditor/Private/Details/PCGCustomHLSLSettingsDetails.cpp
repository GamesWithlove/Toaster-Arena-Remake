// Copyright Epic Games, Inc. All Rights Reserved.

#include "Details/PCGCustomHLSLSettingsDetails.h"

#include "PCGEditor.h"
#include "PCGEditorGraph.h"

#include "Containers/StringConv.h"
#include "DetailWidgetRow.h"
#include "DetailLayoutBuilder.h"
#include "DetailCategoryBuilder.h"
#include "PropertyHandle.h"
#include "Widgets/Input/SButton.h"

#define LOCTEXT_NAMESPACE "PCGCustomHLSLSettingsDetails"

void FPCGCustomHLSLSettingsDetails::CustomizeDetails(IDetailLayoutBuilder& DetailBuilder)
{
	TArray<TWeakObjectPtr<UObject>> ObjectsBeingCustomized;
	DetailBuilder.GetObjectsBeingCustomized(ObjectsBeingCustomized);

	IDetailCategoryBuilder& SettingsCategory = DetailBuilder.EditCategory(TEXT("Settings"));

	TWeakPtr<FPCGEditor> PCGEditor = GetPCGEditor(ObjectsBeingCustomized);
	
	// Add a "open source editor" button if the source editor tab is not already visible.
	if (PCGEditor.IsValid() && PCGEditor.Pin()->IsNodeSourceEditorTabClosed())
	{
		SettingsCategory.AddCustomRow(FText::GetEmpty()).ValueContent()
			.MaxDesiredWidth(120.f)
			[
				SNew(SHorizontalBox)
				+SHorizontalBox::Slot()
				.AutoWidth()
				.Padding(2.0f, 0.0f)
				.VAlign(VAlign_Fill)
				[
					SNew(SButton)
					.OnClicked_Lambda([PCGEditor]() -> FReply
					{
						if (PCGEditor.IsValid())
						{
							PCGEditor.Pin()->SpawnNodeSourceEditorTab();
						}

						return FReply::Handled();
					})
					.ToolTipText(FText::FromString("Opens Node Source Editor tab."))
					[
						SNew(STextBlock)
						.Font(IDetailLayoutBuilder::GetDetailFont())
						.Text(LOCTEXT("ButtonOpenSourceEditor", "Open Source Editor"))
					]
				]
			];
	}

	// Add default properties in the category in order
	TArray<TSharedRef<IPropertyHandle>> AllProperties;
	SettingsCategory.GetDefaultProperties(AllProperties);

	for (auto& Property : AllProperties)
	{
		SettingsCategory.AddProperty(Property);
	}
}

TWeakPtr<FPCGEditor> FPCGCustomHLSLSettingsDetails::GetPCGEditor(const TArray<TWeakObjectPtr<UObject>>& InObjectsBeingCustomized)
{
	if (InObjectsBeingCustomized.IsEmpty() || !InObjectsBeingCustomized[0].IsValid())
	{
		return nullptr;
	}

	const UPCGSettings* FirstSettings = Cast<UPCGSettings>(InObjectsBeingCustomized[0].Get());
	UPCGNode* Node = Cast<UPCGNode>(FirstSettings ? FirstSettings->GetOuter() : nullptr);
	UPCGGraph* Graph = Cast<UPCGGraph>(Node ? Node->GetOuter() : nullptr);
	const UPCGEditorGraph* EditorGraph = Graph ? FPCGEditor::GetPCGEditorGraph(Graph) : nullptr;

	return EditorGraph ? EditorGraph->GetEditor() : nullptr;
}

#undef LOCTEXT_NAMESPACE
