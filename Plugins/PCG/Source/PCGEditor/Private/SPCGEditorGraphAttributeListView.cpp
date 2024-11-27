// Copyright Epic Games, Inc. All Rights Reserved.

#include "SPCGEditorGraphAttributeListView.h"

#include "PCGAssetExporterUtils.h"
#include "PCGComponent.h"
#include "PCGData.h"
#include "PCGDataVisualization.h"
#include "PCGGraph.h"
#include "PCGNode.h"
#include "PCGParamData.h"
#include "PCGPin.h"
#include "PCGSubsystem.h"
#include "Data/PCGSpatialData.h"
#include "Elements/IO/PCGSaveAssetElement.h"
#include "Metadata/PCGAttributePropertySelector.h"
#include "Metadata/Accessors/IPCGAttributeAccessor.h"
#include "Metadata/Accessors/PCGAttributeAccessor.h"
#include "Metadata/Accessors/PCGAttributeAccessorHelpers.h"
#include "Metadata/Accessors/PCGAttributeAccessorKeys.h"
#include "Metadata/Accessors/PCGCustomAccessor.h"

#include "PCGEditor.h"
#include "PCGEditorGraph.h"
#include "PCGEditorGraphNodeBase.h"
#include "PCGEditorStyle.h"

#include "Fonts/FontMeasure.h"
#include "Framework/Commands/GenericCommands.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "HAL/PlatformApplicationMisc.h"
#include "Widgets/Images/SLayeredImage.h"
#include "Widgets/Images/SThrobber.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Input/SComboBox.h"
#include "Widgets/Input/SSearchBox.h"
#include "Widgets/Layout/SScrollBox.h"

#define LOCTEXT_NAMESPACE "SPCGEditorGraphAttributeListView"

namespace PCGEditorGraphAttributeListView
{
	const FText NoPinAvailableText = LOCTEXT("NoPinAvailableText", "No pins");
	const FText CrcLabelFormat = LOCTEXT("InfoTextBlockWithCrcFmt", "{0} | CRC: {1}");
	const FText LastLabelFormat = LOCTEXT("InfoTextBlockWithLastAttributeFmt", "{0} | Last attribute: {1}");
	const FText NoDataAvailableText = LOCTEXT("NoDataAvailableText", "No data available");
	const FText NoNodeInspectedText = LOCTEXT("NoNodeInspectedText", "No node being inspected");
	const FText NoNodeInspectedToolTip = LOCTEXT("NoNodeInspectedToolTip", "Inspect a node using the right click menu");
	const FText TEXT_IndexLabel = LOCTEXT("IndexLabel", "Index");

	bool IsGraphCacheDebuggingEnabled()
	{
		UWorld* World = GEditor ? (GEditor->PlayWorld ? GEditor->PlayWorld.Get() : GEditor->GetEditorWorldContext().World()) : nullptr;
		UPCGSubsystem* Subsystem = UPCGSubsystem::GetInstance(World);
		return Subsystem && Subsystem->IsGraphCacheDebuggingEnabled();
	}

	float CalculateColumnWidth(const FText& InText)
	{
		check(FSlateApplication::Get().GetRenderer());
		const TSharedRef<FSlateFontMeasure> FontMeasure = FSlateApplication::Get().GetRenderer()->GetFontMeasureService();
		const FSlateFontInfo FontInfo = FAppStyle::GetFontStyle(TEXT("NormalText"));

		const float TextWidth = FontMeasure->Measure(InText, FontInfo).X;
		constexpr float ColumnPadding = 22.0f; // TODO: Grab padding from header style
		const float ColumnWidth = TextWidth + ColumnPadding;
		return FMath::Min(ColumnWidth, MaxColumnWidth);
	}
}

bool FPCGListViewUpdater::IsCompleted() const
{
	return UpdateTask.IsCompleted();
}

void FPCGListViewUpdater::Launch()
{
	// Passing a shared pointer to this in order for the task to keep the object alive even if we discard it in the attribute list view
	UpdateTask = UE::Tasks::Launch(UE_SOURCE_LOCATION, [SharedContext = SharedThis(this)]()
	{
		SharedContext->AsyncFilter();
		SharedContext->AsyncSort();
	});
}

void FPCGListViewUpdater::AsyncSort()
{
	if (const FPCGColumnData* Data = ColumnData.Find(SortingColumn))
	{
		if (Data->DataAccessor.IsValid() && Data->DataKeys.IsValid() && Data->DataKeys->GetNum() == ListViewItems.Num())
		{
			//lambda used here to get the index value of an item in the array for sorting
			PCGAttributeAccessorHelpers::SortByAttribute(*Data->DataAccessor, *Data->DataKeys, ListViewItems, !(SortMode & EColumnSortMode::Descending), [this](int Index) { return ListViewItems[Index]->Index; });
		}
	}
}

void FPCGListViewUpdater::AsyncFilter()
{
	TArray<PCGListViewItemPtr> FilteredListViewItems;
	FilteredListViewItems.Reserve(ListViewItems.Num());

	for (const PCGListViewItemPtr& ListViewItem : ListViewItems)
	{
		const FPCGPointFilterExpressionContext PointFilterContext(ListViewItem.Get(), &ColumnData);
		if (TextFilter->TestTextFilter(PointFilterContext))
		{
			FilteredListViewItems.Add(ListViewItem);
		}
	}

	ListViewItems = MoveTemp(FilteredListViewItems);
}

void SPCGListViewItemRow::Construct(const FArguments& InArgs, const TSharedRef<STableViewBase>& InOwnerTableView)
{
	check(InArgs._ListViewItem && InArgs._AttributeListView);
	InternalItem = InArgs._ListViewItem;
	AttributeListView = InArgs._AttributeListView;

	SMultiColumnTableRow<PCGListViewItemPtr>::Construct(
		SMultiColumnTableRow::FArguments()
		.Style(FAppStyle::Get(), "DataTableEditor.CellListViewRow"),
		InOwnerTableView);
}

TSharedRef<SWidget> SPCGListViewItemRow::GenerateWidgetForColumn(const FName& ColumnId)
{
	FText RowText = LOCTEXT("ColumnError", "Unrecognized Column");

	const TSharedPtr<SPCGEditorGraphAttributeListView> SharedAttributeListView = AttributeListView.Pin();
	check(SharedAttributeListView.IsValid());

	if (FPCGColumnData* PCGColumnData = SharedAttributeListView->PCGColumnData.Find(ColumnId))
	{
		if (PCGColumnData->DataAccessor.IsValid() && PCGColumnData->DataKeys.IsValid())
		{
			int32 Index = InternalItem->Index;
			auto Callback = [&PCGColumnData, Index, &RowText] (auto Dummy)
			{
				using ValueType = decltype(Dummy);
				ValueType Value{};
				if (PCGColumnData->DataAccessor->Get<ValueType>(Value, Index, *PCGColumnData->DataKeys))
				{
					if constexpr (PCG::Private::IsOfTypes<ValueType, bool>())
					{
						RowText = FText::FromString(LexToString(Value));
					}
					else if constexpr (PCG::Private::IsOfTypes<ValueType, FString>())
					{
						RowText = FText::FromString(Value);
					}
					else if constexpr (PCG::Private::IsOfTypes<ValueType, FName>())
					{
						RowText = FText::FromName(Value);
					}
					else if constexpr (FTextAsNumberIsValid<ValueType>::value)
					{
						RowText = FText::AsNumber(Value);
					}
					else if constexpr (PCG::Private::IsOfTypes<ValueType, FSoftObjectPath>())
					{
						RowText = FText::FromString(Value.ToString());
					}
					else if constexpr (PCG::Private::IsOfTypes<ValueType, FSoftClassPath>())
					{
						RowText = FText::FromString(Value.ToString());
					}
					else
					{
						ensureMsgf(false, TEXT("Unsupported Data Type"));
						RowText = LOCTEXT("UnsupportedDataTypeError", "Unsupported Data Type");
					}
				}
			};

			PCGMetadataAttribute::CallbackWithRightType(PCGColumnData->DataAccessor->GetUnderlyingType(), Callback);
		}
	}

	return SNew(STextBlock)
		.Text(RowText)
		.OverflowPolicy(ETextOverflowPolicy::Ellipsis)
		.Margin(FMargin(2.0f, 0.0f));
}

FPCGPointFilterExpressionContext::FPCGPointFilterExpressionContext(const FPCGListViewItem* InRowItem, const TMap<FName, FPCGColumnData>* InPCGColumnData)
	: RowItem(InRowItem)
	, PCGColumnData(InPCGColumnData)
{
	check(InRowItem);
}

bool FPCGPointFilterExpressionContext::TestBasicStringExpression(const FTextFilterString& InValue, const ETextFilterTextComparisonMode InTextComparisonMode) const
{
	// Basic string search is disabled as it would require us to search the entire attribute table at once and it's not very useful.
	return false;
}

bool FPCGPointFilterExpressionContext::TestComplexExpression(const FName& InKey, const FTextFilterString& InValue, const ETextFilterComparisonOperation InComparisonOperation, const ETextFilterTextComparisonMode InTextComparisonMode) const
{
	const int32 Index = RowItem->Index;

	if (PCGEditorGraphAttributeListView::TEXT_IndexLabel.EqualToCaseIgnored(FText::FromName(InKey)))
	{
		const FTextFilterString PointValue(FString::FromInt(Index));
		return TextFilterUtils::TestComplexExpression(PointValue, InValue, InComparisonOperation, InTextComparisonMode);
	}
	else if(const FPCGColumnData* PCGColumnInfo = PCGColumnData->Find(InKey))
	{
		if (PCGColumnInfo->DataAccessor.IsValid() && PCGColumnInfo->DataKeys.IsValid())
		{
			auto Callback = [&PCGColumnInfo, Index, &InValue, &InComparisonOperation, &InTextComparisonMode] (auto Dummy)
			{
				using ValueType = decltype(Dummy);
				ValueType Value{};
				if (PCGColumnInfo->DataAccessor->Get<ValueType>(Value, Index, *PCGColumnInfo->DataKeys))
				{
					FText TextValue;
					bool bInvalid = false;
					if constexpr (PCG::Private::IsOfTypes<ValueType, bool>())
					{
						TextValue = FText::FromString(LexToString(Value));
					}
					else if constexpr (PCG::Private::IsOfTypes<ValueType, FString>())
					{
						TextValue = FText::FromString(Value);
					}
					else if constexpr (PCG::Private::IsOfTypes<ValueType, FName>())
					{
						TextValue = FText::FromName(Value);
					}
					else if constexpr (FTextAsNumberIsValid<ValueType>::value)
					{
						TextValue = FText::AsNumber(Value, &FNumberFormattingOptions::DefaultNoGrouping());
					}
					else
					{
						ensureMsgf(false, TEXT("Unsupported Data Type"));
						bInvalid = true;
					}

					if (!bInvalid)
					{
						const FTextFilterString PointValue(TextValue.ToString());
						return TextFilterUtils::TestComplexExpression(PointValue, InValue, InComparisonOperation, InTextComparisonMode);
					}
				}

				return false;
			};

			return PCGMetadataAttribute::CallbackWithRightType(PCGColumnInfo->DataAccessor->GetUnderlyingType(), Callback);
		}
	}

	return true;
}

SPCGEditorGraphAttributeListView::~SPCGEditorGraphAttributeListView()
{
	if (PCGEditorPtr.IsValid())
	{
		PCGEditorPtr.Pin()->OnInspectedStackChangedDelegate.RemoveAll(this);
	}

	DataPtr.Reset();
}

void SPCGEditorGraphAttributeListView::Construct(const FArguments& InArgs, TSharedPtr<FPCGEditor> InPCGEditor)
{
	PCGEditorPtr = InPCGEditor;
	PCGEditorPtr.Pin()->OnInspectedStackChangedDelegate.AddSP(this, &SPCGEditorGraphAttributeListView::OnInspectedStackChanged);

	TextFilter = MakeShareable(new FTextFilterExpressionEvaluator(ETextFilterExpressionEvaluatorMode::Complex));

	ListViewHeader = CreateHeaderRowWidget();

	ListViewCommands = MakeShareable(new FUICommandList);
	ListViewCommands->MapAction(FGenericCommands::Get().Copy,
		FExecuteAction::CreateSP(this, &SPCGEditorGraphAttributeListView::CopySelectionToClipboard),
		FCanExecuteAction::CreateSP(this, &SPCGEditorGraphAttributeListView::CanCopySelectionToClipboard));

	const TSharedRef<SScrollBar> HorizontalScrollBar = SNew(SScrollBar)
		.Orientation(Orient_Horizontal)
		.Thickness(FVector2D(12.0f, 12.0f));

	const TSharedRef<SScrollBar> VerticalScrollBar = SNew(SScrollBar)
		.Orientation(Orient_Vertical)
		.Thickness(FVector2D(12.0f, 12.0f));

	auto VisibilityTest = [this]()
	{
		return (ListViewItems.IsEmpty() && ListViewHeader->GetColumns().IsEmpty()) ? EVisibility::Hidden : EVisibility::Visible;
	};

	SAssignNew(ListView, SListView<PCGListViewItemPtr>)
		.ListItemsSource(&ListViewItems)
		.HeaderRow(ListViewHeader)
		.OnGenerateRow(this, &SPCGEditorGraphAttributeListView::OnGenerateRow)
		.OnMouseButtonDoubleClick(this, &SPCGEditorGraphAttributeListView::OnItemDoubleClicked)
		.OnContextMenuOpening(this, &SPCGEditorGraphAttributeListView::OnItemsContextMenu)
		.AllowOverscroll(EAllowOverscroll::No)
		.ExternalScrollbar(VerticalScrollBar)
		.Visibility_Lambda(VisibilityTest)
		.OnKeyDownHandler(this, &SPCGEditorGraphAttributeListView::OnListViewKeyDown)
		.ConsumeMouseWheel(EConsumeMouseWheel::Always);

	SAssignNew(PinComboBox, SComboBox<TSharedPtr<FPinComboBoxItem>>)
		.OptionsSource(&PinComboBoxItems)
		.OnGenerateWidget(this, &SPCGEditorGraphAttributeListView::OnGeneratePinWidget)
		.OnSelectionChanged(this, &SPCGEditorGraphAttributeListView::OnSelectionChangedPin)
		[
			SNew(STextBlock)
			.Text(this, &SPCGEditorGraphAttributeListView::OnGenerateSelectedPinText)
		];

	SAssignNew(DataComboBox, SComboBox<TSharedPtr<FName>>)
		.OptionsSource(&DataComboBoxItems)
		.OnGenerateWidget(this, &SPCGEditorGraphAttributeListView::OnGenerateDataWidget)
		.OnSelectionChanged(this, &SPCGEditorGraphAttributeListView::OnSelectionChanged)
		[
			SNew(STextBlock)
			.Text(this, &SPCGEditorGraphAttributeListView::OnGenerateSelectedDataText)
		];

	TSharedPtr<SLayeredImage> FilterImage = SNew(SLayeredImage)
		.Image(FAppStyle::Get().GetBrush("Icons.Filter"))
		.ColorAndOpacity(FSlateColor::UseForeground());

	FilterImage->AddLayer(TAttribute<const FSlateBrush*>(this, &SPCGEditorGraphAttributeListView::GetFilterBadgeIcon));

	TSharedPtr<SButton> LockButton = SNew(SButton)
		.ButtonStyle(FAppStyle::Get(), "SimpleButton")
		.OnClicked(this, &SPCGEditorGraphAttributeListView::OnLockClick)
		.ContentPadding(FMargin(4, 2))
		.HAlign(HAlign_Center)
		.VAlign(VAlign_Center)
		.ToolTipText(LOCTEXT("LockSelectionButton_ToolTip", "Locks the current attribute list view to this selection."))
		[
			SNew(SImage)
				.ColorAndOpacity(FSlateColor::UseForeground())
				.Image(this, &SPCGEditorGraphAttributeListView::OnGetLockButtonImageResource)
		];

	TSharedPtr<SButton> FrameDataButton = SNew(SButton)
		.ButtonStyle(FAppStyle::Get(), "SimpleButton")
		.OnClicked(this, &SPCGEditorGraphAttributeListView::OnFocusOnDataClicked)
		.IsEnabled(this, &SPCGEditorGraphAttributeListView::IsFocusOnDataEnabled)
		.ContentPadding(FMargin(4, 2))
		.HAlign(HAlign_Center)
		.VAlign(VAlign_Center)
		.ToolTipText(LOCTEXT("FocusOnDataButton_ToolTip", "Zoom to selected data."))
		[
			SNew(SImage)
				.ColorAndOpacity(FSlateColor::UseForeground())
				.Image(FPCGEditorStyle::Get().GetBrush("PCG.Editor.ZoomToSelection"))
		];
		
	TSharedPtr<SComboButton> FilterButton = SNew(SComboButton)
		.ForegroundColor(FSlateColor::UseStyle())
		.HasDownArrow(false)
		.OnGetMenuContent(this, &SPCGEditorGraphAttributeListView::OnGenerateFilterMenu)
		.ContentPadding(1)
		.ButtonContent()
		[
			FilterImage.ToSharedRef()
		];

	TSharedPtr<SComboButton> AdditionalOperationsButton = SNew(SComboButton)
		.ForegroundColor(FSlateColor::UseStyle())
		.HasDownArrow(false)
		.OnGetMenuContent(this, &SPCGEditorGraphAttributeListView::OnGenerateAdditionalOperationsMenu)
		.ContentPadding(1)
		.ButtonContent()
		[
			SNew(SImage)
			.Image(FAppStyle::GetBrush("EditorViewportToolBar.OptionsDropdown"))
			.ColorAndOpacity(FSlateColor::UseForeground())
		];

	SAssignNew(SearchBoxWidget, SSearchBox)
		.MinDesiredWidth(300.0f)
		.InitialText(ActiveFilterText)
		.OnTextChanged(this, &SPCGEditorGraphAttributeListView::OnFilterTextChanged)
		.OnTextCommitted(this, &SPCGEditorGraphAttributeListView::OnFilterTextCommitted)
		.DelayChangeNotificationsWhileTyping(true)
		.DelayChangeNotificationsWhileTypingSeconds(0.5f);

	this->ChildSlot
	[
		SNew(SVerticalBox)
		+SVerticalBox::Slot()
		.AutoHeight()
		.Padding(1.0f)
		[
			SNew(SHorizontalBox)
			+SHorizontalBox::Slot()
			.AutoWidth()
			.Padding(1.0f, 0.0f)
			[
				LockButton->AsShared()
			]
			+SHorizontalBox::Slot()
			.AutoWidth()
			.Padding(1.0f, 0.0f)
			[
				FrameDataButton->AsShared()
			]
			+SHorizontalBox::Slot()
			.AutoWidth()
			.Padding(1.0f, 0.0f)
			[
				FilterButton->AsShared()
			]
			+SHorizontalBox::Slot()
			.AutoWidth()
			.Padding(1.0f, 0.0f)
			[
				PinComboBox->AsShared()
			]
			+SHorizontalBox::Slot()
			.AutoWidth()
			.Padding(1.0f, 0.0f)
			[
				DataComboBox->AsShared()
			]
			+SHorizontalBox::Slot()
			.AutoWidth()
			.Padding(1.0f, 0.0f)
			[
				SearchBoxWidget->AsShared()
			]
			+SHorizontalBox::Slot()
			.AutoWidth()
			.VAlign(EVerticalAlignment::VAlign_Center)
			.Padding(4.0f, 0.0f)
			[
				SNew(SButton)
				.ButtonStyle(FAppStyle::Get(), "SimpleButton")
				.OnClicked(this, &SPCGEditorGraphAttributeListView::OnNodeNameClicked)
				[
					SAssignNew(NodeNameTextBlock, STextBlock)
					.Text(PCGEditorGraphAttributeListView::NoNodeInspectedText)
					.ToolTipText(PCGEditorGraphAttributeListView::NoNodeInspectedToolTip)
				]
			]
			+SHorizontalBox::Slot()
			.AutoWidth()
			.VAlign(EVerticalAlignment::VAlign_Center)
			.Padding(1.0f, 0.0f)
			[
				AdditionalOperationsButton->AsShared()
			]
			+SHorizontalBox::Slot()
			.FillWidth(1.0f)
			+SHorizontalBox::Slot()
			.AutoWidth()
			.HAlign(EHorizontalAlignment::HAlign_Right)
			.VAlign(EVerticalAlignment::VAlign_Center)
			.Padding(4.0f, 0.0f)
			[
				SAssignNew(InfoTextBlock, STextBlock)
			]
		]
		+SVerticalBox::Slot()
		.FillHeight(1.0f)
		[
			SNew(SHorizontalBox)
			+SHorizontalBox::Slot()
			.FillWidth(1.0f)
			[
				SNew(SOverlay)
				+SOverlay::Slot()
				[
					SNew(SScrollBox)
					.Orientation(Orient_Horizontal)
					.ExternalScrollbar(HorizontalScrollBar)
					+SScrollBox::Slot()
					[
						ListView->AsShared()
					]
				]
				+SOverlay::Slot()
				.HAlign(HAlign_Center)
				.VAlign(VAlign_Center)
				[
					SNew(SCircularThrobber)
					.Radius(12.0f)
					.Visibility_Lambda([this](){return CurrentUpdateTask.IsValid() && !CurrentUpdateTask->IsCompleted() ? EVisibility::Visible : EVisibility::Hidden; })
				]
			]
			+SHorizontalBox::Slot()
			.AutoWidth()
			[
				VerticalScrollBar
			]
		]
		+SVerticalBox::Slot()
		.AutoHeight()
		[
			SNew(SHorizontalBox)
			+SHorizontalBox::Slot()
			[
				HorizontalScrollBar
			]
		]
	];
}

void SPCGEditorGraphAttributeListView::Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime)
{
	SCompoundWidget::Tick(AllottedGeometry, InCurrentTime, InDeltaTime);

	if (bNeedsRefresh)
	{
		bNeedsRefresh = false;

		RefreshPinComboBox();
		RefreshDataComboBox();
		RefreshAttributeList();
	}

	if (CurrentUpdateTask.IsValid() && CurrentUpdateTask->IsCompleted())
	{
		FilteredListViewItems = MoveTemp(CurrentUpdateTask->ListViewItems);
		if (ListView.IsValid())
		{
			ListView->SetItemsSource(&FilteredListViewItems);
			ListView->RequestListRefresh();

			InfoTextBlock->SetText(FText::Format(LOCTEXT("InfoTextBlockFmt", "Showing {0}/{1} entries"), FilteredListViewItems.Num(), ListViewItems.Num()));

			if (PCGEditorGraphAttributeListView::IsGraphCacheDebuggingEnabled())
			{
				// If cache debugging enabled, write CRC to help diagnose missed-dependency issues
				const FPCGDataCollection* InspectionData = GetInspectionData();
				const int32 DataIndex = GetSelectedDataIndex();
				const FPCGCrc Crc = (InspectionData && InspectionData->DataCrcs.IsValidIndex(DataIndex)) ? InspectionData->DataCrcs[DataIndex] : FPCGCrc(0);
				InfoTextBlock->SetText(FText::Format(PCGEditorGraphAttributeListView::CrcLabelFormat, InfoTextBlock->GetText(), Crc.GetValue()));
			}

			if (DataPtr.IsValid() && DataPtr->HasCachedLastSelector())
			{
				const FText LastSelector = DataPtr->GetCachedLastSelector().GetDisplayText();
				InfoTextBlock->SetText(FText::Format(PCGEditorGraphAttributeListView::LastLabelFormat, InfoTextBlock->GetText(), LastSelector));
			}
		}

		CurrentUpdateTask.Reset();
	}
}

TSharedRef<SHeaderRow> SPCGEditorGraphAttributeListView::CreateHeaderRowWidget() const
{
	return SNew(SHeaderRow);
}

TWeakObjectPtr<UPCGComponent> SPCGEditorGraphAttributeListView::GetPCGComponent() const
{
	return PCGEditorPtr.IsValid() ? PCGEditorPtr.Pin()->GetPCGComponentBeingInspected() : nullptr;
}

void SPCGEditorGraphAttributeListView::OnInspectedStackChanged(const FPCGStack& InPCGStack)
{
	RequestRefresh();
}

UPCGEditorGraphNodeBase* SPCGEditorGraphAttributeListView::GetNodeBeingInspected() const
{
	return PCGEditorGraphNode.Get();
}

void SPCGEditorGraphAttributeListView::SetNodeBeingInspected(UPCGEditorGraphNodeBase* InPCGEditorGraphNode)
{
	if (PCGEditorGraphNode == InPCGEditorGraphNode)
	{
		return;
	}

	PCGEditorGraphNode = InPCGEditorGraphNode;

	if (PCGEditorGraphNode.IsValid())
	{
		NodeNameTextBlock->SetText(PCGEditorGraphNode->GetNodeTitle(ENodeTitleType::ListView));
		NodeNameTextBlock->SetToolTipText(PCGEditorGraphNode->GetTooltipText());
	}
	else
	{
		NodeNameTextBlock->SetText(PCGEditorGraphAttributeListView::NoNodeInspectedText);
		NodeNameTextBlock->SetToolTipText(PCGEditorGraphAttributeListView::NoNodeInspectedToolTip);
	}

	// Always unlock when changing the node, to make sure we unlock when removing the inspected node
	bIsLocked = false;

	RequestRefresh();
}

void SPCGEditorGraphAttributeListView::OnGenerateUpdated(UPCGComponent* /*InPCGComponent*/)
{
	RequestRefresh();
}

const FPCGDataCollection* SPCGEditorGraphAttributeListView::GetInspectionData(const TSharedPtr<FPinComboBoxItem>& EditorPin) const
{
	TWeakObjectPtr<UPCGComponent> PCGComponent = GetPCGComponent();
	if (!PCGComponent.IsValid())
	{
		return nullptr;
	}

	const UPCGNode* PCGNode = PCGEditorGraphNode.IsValid() ? PCGEditorGraphNode->GetPCGNode() : nullptr;
	if (!PCGNode)
	{
		return nullptr;
	}

	const UPCGPin* Pin = nullptr;
	if (EditorPin)
	{
		const TArray<TObjectPtr<UPCGPin>>& Pins = EditorPin->bIsOutputPin ? PCGNode->GetOutputPins() : PCGNode->GetInputPins();
		if (Pins.IsValidIndex(EditorPin->PinIndex))
		{
			Pin = Pins[EditorPin->PinIndex];
		}
	}

	if (!Pin)
	{
		return nullptr;
	}

	PCGEditorGraphUtils::GetInspectablePin(PCGNode, Pin, PCGNode, Pin);

	if (!PCGNode || !Pin)
	{
		return nullptr;
	}

	const TSharedPtr<FPCGEditor> PCGEditor = PCGEditorPtr.Pin();
	const FPCGStack* PCGStack = PCGEditor->GetStackBeingInspected();
	if (!PCGStack)
	{
		return nullptr;
	}

	// Create a temporary stack with Node+Pin to query the exact DataCollection we are inspecting
	FPCGStack Stack = *PCGStack;
	TArray<FPCGStackFrame>& StackFrames = Stack.GetStackFramesMutable();
	StackFrames.Reserve(StackFrames.Num() + 2);
	StackFrames.Emplace(PCGNode);
	StackFrames.Emplace(Pin);

	return PCGComponent->GetInspectionData(Stack);
}

const FPCGDataCollection* SPCGEditorGraphAttributeListView::GetInspectionData() const
{
	return GetInspectionData(PinComboBox->GetSelectedItem());
}

void SPCGEditorGraphAttributeListView::RefreshAttributeList()
{
	HiddenAttributes = ListViewHeader->GetHiddenColumnIds();

	// Swapping to an empty item list to force a widget clear, otherwise the widgets will try to update during add column and access invalid data
	static const TArray<PCGListViewItemPtr> EmptyList;
	ListView->SetItemsSource(&EmptyList);

	PCGColumnData.Empty();
	ListViewItems.Empty();
	ListViewHeader->ClearColumns();
	InfoTextBlock->SetText(FText::GetEmpty());
	DataPtr.Reset();

	const FPCGDataCollection* InspectionData = GetInspectionData();
	if (!InspectionData)
	{
		return;
	}

	const int32 DataIndex = GetSelectedDataIndex();
	if (!InspectionData->TaggedData.IsValidIndex(DataIndex))
	{
		return;
	}

	const FPCGTaggedData& TaggedData = InspectionData->TaggedData[DataIndex];
	const UPCGData* PCGData = TaggedData.Data;
	const FPCGCrc Crc = InspectionData->DataCrcs.IsValidIndex(DataIndex) ? InspectionData->DataCrcs[DataIndex] : FPCGCrc(0);

	if (!PCGData)
	{
		return;
	}

	const FPCGDataVisualizationRegistry& DataVisRegistry = FPCGModule::GetConstPCGDataVisualizationRegistry();
	const UPCGData* DataToVisualize = PCGData;

	DataPtr = DataToVisualize;

	if (const IPCGDataVisualization* DataVisualization = DataVisRegistry.GetDataVisualization(PCGData->GetClass()))
	{
		const FPCGTableVisualizerInfo TableVisualizerInfo = DataVisualization->GetTableVisualizerInfo(PCGData);
		DataToVisualize = TableVisualizerInfo.Data;

		for (const FPCGTableVisualizerColumnInfo& ColumnInfo : TableVisualizerInfo.ColumnInfos)
		{
			AddColumn(DataToVisualize, ColumnInfo, TableVisualizerInfo.AccessorKeys);
		}

		SortingColumn = TableVisualizerInfo.SortingColumn;
		SortMode = (EColumnSortMode::Type)TableVisualizerInfo.SortingMode;
		FocusOnDataCallback = TableVisualizerInfo.FocusOnDataCallback;

		const uint32 NumEntries = TableVisualizerInfo.AccessorKeys.IsValid() ? TableVisualizerInfo.AccessorKeys->GetNum() : 0;
		ListViewItems.Reserve(NumEntries);

		for (uint32 Index = 0; Index < NumEntries; ++Index)
		{
			PCGListViewItemPtr ListViewItem = MakeShared<FPCGListViewItem>();
			ListViewItem->Index = Index;
			ListViewItems.Add(ListViewItem);
		}
	}
	else // No visualization, just default back the values
	{
		SortingColumn = NAME_None;
		SortMode = EColumnSortMode::Type::Ascending;
		FocusOnDataCallback.Reset();
	}

	ListView->SetItemsSource(&ListViewItems);
	ListView->RequestListRefresh();

	LaunchUpdateTask();
}

void SPCGEditorGraphAttributeListView::RefreshPinComboBox()
{
	PinComboBoxItems.Empty();
	PinComboBox->ClearSelection();
	PinComboBox->RefreshOptions();

	const UPCGNode* PCGNode = PCGEditorGraphNode.IsValid() ? PCGEditorGraphNode->GetPCGNode() : nullptr;
	if (!PCGNode)
	{
		return;
	}

	// Add output and then input pins to list. Optionally output the first connected item - useful for initializing
	// the selected item to the first connected output pin.
	auto PopulatePins = [](
		const TArray<TObjectPtr<UPCGPin>>& InPins,
		const FString& InFormatText,
		TArray<TSharedPtr<FPinComboBoxItem>>& InOutItems,
		int32* OutFirstConnectedItemIndex)
	{
		for (int32 PinIndex = 0; PinIndex < InPins.Num(); ++PinIndex)
		{
			const UPCGPin* PCGPin = InPins[PinIndex];
			const bool bIsOutputPin = PCGPin->IsOutputPin();
			// Pin is included in list if it is connected, or if it is an output pin.
			if (PCGPin->IsConnected() || bIsOutputPin)
			{
				FString ItemName = FString::Format(*InFormatText, { PCGPin->Properties.Label.ToString() });
				InOutItems.Add(MakeShared<FPinComboBoxItem>(FName(ItemName), PinIndex, bIsOutputPin));

				// Look for first connected, null pointer once found so only first is taken.
				if (OutFirstConnectedItemIndex && PCGPin->IsConnected())
				{
					*OutFirstConnectedItemIndex = InOutItems.Num() - 1;
					OutFirstConnectedItemIndex = nullptr;
				}
			}
		}
	};

	// Pick first connected output pin by default if there is one, otherwise default to first output pin.
	int32 FirstConnectedItemIndex = 0;
	PopulatePins(PCGNode->GetOutputPins(), TEXT("Output: {0}"), PinComboBoxItems, &FirstConnectedItemIndex);
	PopulatePins(PCGNode->GetInputPins(), TEXT("Input: {0}"), PinComboBoxItems, nullptr);

	if (PinComboBoxItems.Num() > 0 && ensure(PinComboBoxItems.IsValidIndex(FirstConnectedItemIndex)))
	{
		PinComboBox->SetSelectedItem(PinComboBoxItems[FirstConnectedItemIndex]);
	}
}

void SPCGEditorGraphAttributeListView::RefreshDataComboBox()
{
	DataComboBoxItems.Empty();
	DataComboBox->ClearSelection();
	DataComboBox->RefreshOptions();

	const FPCGDataCollection* InspectionData = GetInspectionData();
	if (!InspectionData)
	{
		return;
	}

	for(int32 TaggedDataIndex = 0; TaggedDataIndex < InspectionData->TaggedData.Num(); ++TaggedDataIndex)
	{
		const FPCGTaggedData& TaggedData = InspectionData->TaggedData[TaggedDataIndex];
		FString ItemName = FString::Format(
			TEXT("[{0}] {1}"),
			{ FText::AsNumber(TaggedDataIndex).ToString(), (TaggedData.Data ? TaggedData.Data->GetClass()->GetDisplayNameText().ToString(): TEXT("No Data")) });

		if (!TaggedData.Tags.IsEmpty())
		{
			ItemName.Append(FString::Format(TEXT(": ({0})"), { FString::Join(TaggedData.Tags, TEXT(", ")) }));
		}

		DataComboBoxItems.Add(MakeShared<FName>(ItemName));
	}

	if (DataComboBoxItems.Num() > 0)
	{
		DataComboBox->SetSelectedItem(DataComboBoxItems[0]);
	}
}

void SPCGEditorGraphAttributeListView::LaunchUpdateTask()
{
	// Discarding any currently running updater, task will still run and keep the old object alive but we wont care about the result.
	// This is done because we cant afford to wait for task completion before starting a new task.
	CurrentUpdateTask.Reset();
	CurrentUpdateTask = MakeShared<FPCGListViewUpdater>(ListViewItems,
		PCGColumnData,
		SortMode,
		SortingColumn,
		TextFilter);
	CurrentUpdateTask->Launch();
}

const FSlateBrush* SPCGEditorGraphAttributeListView::GetFilterBadgeIcon() const
{
	for (const SHeaderRow::FColumn& Column : ListViewHeader->GetColumns())
	{
		if (!Column.bIsVisible)
		{
			return FAppStyle::Get().GetBrush("Icons.BadgeModified");
		}
	}

	return nullptr;
}

TSharedRef<SWidget> SPCGEditorGraphAttributeListView::OnGenerateFilterMenu()
{
	FMenuBuilder MenuBuilder(false, nullptr);

	MenuBuilder.AddMenuEntry(
		LOCTEXT("ToggleAllAttributes", "Toggle All"),
		LOCTEXT("ToggleAllAttributesTooltip", "Toggle visibility for all attributes"),
		FSlateIcon(),
		FUIAction(FExecuteAction::CreateSP(this, &SPCGEditorGraphAttributeListView::ToggleAllAttributes),
			FCanExecuteAction(),
			FGetActionCheckState::CreateSP(this, &SPCGEditorGraphAttributeListView::GetAnyAttributeEnabledState)),
		NAME_None,
		EUserInterfaceActionType::ToggleButton);

	MenuBuilder.AddSeparator();

	const TIndirectArray<SHeaderRow::FColumn>& Columns = ListViewHeader->GetColumns();
	TArray<FName> HiddenColumns = ListViewHeader->GetHiddenColumnIds();

	for (const SHeaderRow::FColumn& Column : Columns)
	{
		MenuBuilder.AddMenuEntry(
			Column.DefaultText,
			Column.DefaultTooltip,
			FSlateIcon(),
			FUIAction(FExecuteAction::CreateSP(this, &SPCGEditorGraphAttributeListView::ToggleAttribute, Column.ColumnId),
				FCanExecuteAction(),
				FIsActionChecked::CreateSP(this, &SPCGEditorGraphAttributeListView::IsAttributeEnabled, Column.ColumnId)),
			NAME_None,
			EUserInterfaceActionType::ToggleButton);
	}

	return MenuBuilder.MakeWidget();
}

TSharedRef<SWidget> SPCGEditorGraphAttributeListView::OnGenerateAdditionalOperationsMenu()
{
	FMenuBuilder MenuBuilder(false, nullptr);

	MenuBuilder.AddMenuEntry(
		LOCTEXT("SaveThisData", "Save this data"),
		LOCTEXT("SaveThisDataTooltip", "Saves this data to a PCG Data Asset."),
		FSlateIcon(FAppStyle::GetAppStyleSetName(), "Icons.Download"),
		FUIAction(FExecuteAction::CreateSP(this, &SPCGEditorGraphAttributeListView::SaveData, true, true),
			FCanExecuteAction::CreateSP(this, &SPCGEditorGraphAttributeListView::CanSaveData, true, true)),
		NAME_None,
		EUserInterfaceActionType::Button);

	MenuBuilder.AddMenuEntry(
		LOCTEXT("SaveThisPinData", "Save pin data"),
		LOCTEXT("SaveThisPinDataTooltip", "Saves all data from the selected pin to a PCG Data Asset."),
		FSlateIcon(FAppStyle::GetAppStyleSetName(), "Icons.Download"),
		FUIAction(FExecuteAction::CreateSP(this, &SPCGEditorGraphAttributeListView::SaveData, true, false),
			FCanExecuteAction::CreateSP(this, &SPCGEditorGraphAttributeListView::CanSaveData, true, false)),
		NAME_None,
		EUserInterfaceActionType::Button);

	MenuBuilder.AddMenuEntry(
		LOCTEXT("SaveAllData", "Save all"),
		LOCTEXT("SaveAllDataTooltip", "Saves all the input or output data to a PCG Data Asset."),
		FSlateIcon(FAppStyle::GetAppStyleSetName(), "Icons.Download"),
		FUIAction(FExecuteAction::CreateSP(this, &SPCGEditorGraphAttributeListView::SaveData, false, false),
			FCanExecuteAction::CreateSP(this, &SPCGEditorGraphAttributeListView::CanSaveData, false, false)),
		NAME_None,
		EUserInterfaceActionType::Button);

	return MenuBuilder.MakeWidget();
}

FPCGDataCollection SPCGEditorGraphAttributeListView::BuildDataCollectionForSave(bool bUsePinComboIndex, bool bUseDataComboIndex) const
{
	// Can't save N'th data on all pins, as it makes no sense
	check(!bUseDataComboIndex || bUsePinComboIndex);

	// Build a data collection from the indices we're given.
	FPCGDataCollection Collection;

	if (!bUsePinComboIndex)
	{
		for (const auto& PinComboBoxItem : PinComboBoxItems)
		{
			const FPCGDataCollection* PinInspectionData = GetInspectionData(PinComboBoxItem);
			if (PinInspectionData)
			{
				Collection.TaggedData.Append(PinInspectionData->TaggedData);
			}
		}
	}
	else
	{
		if (const FPCGDataCollection* PinInspectionData = GetInspectionData())
		{
			if (!bUseDataComboIndex)
			{
				Collection = *PinInspectionData;
			}
			else
			{

				Collection.TaggedData.Add(PinInspectionData->TaggedData[GetSelectedDataIndex()]);
			}
		}
	}

	return Collection;
}

void SPCGEditorGraphAttributeListView::SaveData(bool bUsePinComboIndex, bool bUseDataComboIndex)
{
	FPCGDataCollection Collection = BuildDataCollectionForSave(bUsePinComboIndex, bUseDataComboIndex);

	if (Collection.TaggedData.IsEmpty())
	{
		return;
	}

	UPCGDataCollectionExporter* Exporter = NewObject<UPCGDataCollectionExporter>();
	Exporter->Data = Collection;

	FPCGAssetExporterParameters Parameters;
	UPCGAssetExporterUtils::CreateAsset(Exporter, Parameters);
}

bool SPCGEditorGraphAttributeListView::CanSaveData(bool bUsePinComboIndex, bool bUseDataComboIndex) const
{
	FPCGDataCollection Collection = BuildDataCollectionForSave(bUsePinComboIndex, bUseDataComboIndex);
	return !Collection.TaggedData.IsEmpty();
}

FText SPCGEditorGraphAttributeListView::OnGenerateSelectedPinText() const
{
	if (const TSharedPtr<FPinComboBoxItem> SelectedPin = PinComboBox->GetSelectedItem())
	{
		return FText::FromName(SelectedPin->Name);
	}
	else
	{
		return PCGEditorGraphAttributeListView::NoPinAvailableText;
	}
}

void SPCGEditorGraphAttributeListView::OnSelectionChangedPin(TSharedPtr<FPinComboBoxItem> InItem, ESelectInfo::Type InSelectInfo)
{
	RefreshDataComboBox();

	if (InSelectInfo != ESelectInfo::Direct)
	{
		RefreshAttributeList();
	}
}

TSharedRef<SWidget> SPCGEditorGraphAttributeListView::OnGeneratePinWidget(TSharedPtr<FPinComboBoxItem> InItem) const
{
	return SNew(STextBlock).Text(FText::FromName(InItem.IsValid() ? InItem->Name : NAME_None));
}

TSharedRef<SWidget> SPCGEditorGraphAttributeListView::OnGenerateDataWidget(TSharedPtr<FName> InItem) const
{
	return SNew(STextBlock).Text(FText::FromName(InItem.IsValid() ? *InItem : NAME_None));
}

void SPCGEditorGraphAttributeListView::OnSelectionChanged(TSharedPtr<FName> Item, ESelectInfo::Type SelectInfo)
{
	if (SelectInfo != ESelectInfo::Direct)
	{
		RefreshAttributeList();
	}
}

FText SPCGEditorGraphAttributeListView::OnGenerateSelectedDataText() const
{
	if (const TSharedPtr<FName> SelectedDataName = DataComboBox->GetSelectedItem())
	{
		return FText::FromName(*SelectedDataName);
	}
	else
	{
		return PCGEditorGraphAttributeListView::NoDataAvailableText;
	}
}

int32 SPCGEditorGraphAttributeListView::GetSelectedDataIndex() const
{
	int32 Index = INDEX_NONE;
	if (const TSharedPtr<FName> SelectedItem = DataComboBox->GetSelectedItem())
	{
		DataComboBoxItems.Find(SelectedItem, Index);
	}

	return Index;
}

void SPCGEditorGraphAttributeListView::ToggleAllAttributes()
{
	const TArray<FName> HiddenColumns = ListViewHeader->GetHiddenColumnIds();
	if (HiddenColumns.Num() > 0)
	{
		for (const FName& HiddenColumn : HiddenColumns)
		{
			ListViewHeader->SetShowGeneratedColumn(HiddenColumn, /*InShow=*/true);
		}
	}
	else
	{
		const TIndirectArray<SHeaderRow::FColumn>& Columns = ListViewHeader->GetColumns();
		for (const SHeaderRow::FColumn& Column : Columns)
		{
			ListViewHeader->SetShowGeneratedColumn(Column.ColumnId, /*InShow=*/false);
		}
	}
}

void SPCGEditorGraphAttributeListView::ToggleAttribute(FName InAttributeName)
{
	ListViewHeader->SetShowGeneratedColumn(InAttributeName, !ListViewHeader->IsColumnVisible(InAttributeName));
}

ECheckBoxState SPCGEditorGraphAttributeListView::GetAnyAttributeEnabledState() const
{
	bool bAllEnabled = true;
	bool bAnyEnabled = false;

	for (const SHeaderRow::FColumn& Column : ListViewHeader->GetColumns())
	{
		bAllEnabled &= Column.bIsVisible;
		bAnyEnabled |= Column.bIsVisible;
	}

	if (bAllEnabled)
	{
		return ECheckBoxState::Checked;
	}
	else if (bAnyEnabled)
	{
		return ECheckBoxState::Undetermined;
	}
	else
	{
		return ECheckBoxState::Unchecked;
	}
}

bool SPCGEditorGraphAttributeListView::IsAttributeEnabled(FName InAttributeName) const
{
	return ListViewHeader->IsColumnVisible(InAttributeName);
}

TSharedRef<ITableRow> SPCGEditorGraphAttributeListView::OnGenerateRow(PCGListViewItemPtr Item, const TSharedRef<STableViewBase>& OwnerTable)
{
	return SNew(SPCGListViewItemRow, OwnerTable)
		.AttributeListView(SharedThis(this))
		.ListViewItem(Item);
}

void SPCGEditorGraphAttributeListView::OnItemDoubleClicked(PCGListViewItemPtr Item) const
{
	check(Item);
	if (FocusOnDataCallback && DataPtr.Get())
	{
		FocusOnDataCallback(DataPtr.Get(), { Item->Index });
	}
}

TSharedPtr<SWidget> SPCGEditorGraphAttributeListView::OnItemsContextMenu()
{
	FMenuBuilder MenuBuilder(/*bInShouldCloseWindowAfterMenuSelection=*/true, /*InCommandList=*/nullptr);
	MenuBuilder.AddMenuEntry(
		LOCTEXT("ShowInViewport", "Zoom to selection"),
		LOCTEXT("ShowInViewport_Tooltip", "Frames the viewport so that all selected entries are visible."),
		FSlateIcon(FPCGEditorStyle::Get().GetStyleSetName(), "PCG.Editor.ZoomToSelection"),
		FUIAction(FExecuteAction::CreateSP(this, &SPCGEditorGraphAttributeListView::FocusOnSelection),
			FCanExecuteAction::CreateSP(this, &SPCGEditorGraphAttributeListView::CanFocusOnSelection)),
		NAME_None,
		EUserInterfaceActionType::Button);

	MenuBuilder.AddMenuEntry(
		LOCTEXT("CopyToClipboard", "Copy to clipboard"),
		LOCTEXT("CopyToClipboard_Tooltip", "Copies the contents of the entries to the clipboard."),
		FSlateIcon(FPCGEditorStyle::Get().GetStyleSetName(), "PCG.Editor.CopyToClipboard"),
		FUIAction(FExecuteAction::CreateSP(this, &SPCGEditorGraphAttributeListView::CopySelectionToClipboard),
			FCanExecuteAction::CreateSP(this, &SPCGEditorGraphAttributeListView::CanCopySelectionToClipboard)),
		NAME_None,
		EUserInterfaceActionType::Button);

	return MenuBuilder.MakeWidget();
}

void SPCGEditorGraphAttributeListView::OnColumnSortModeChanged(const EColumnSortPriority::Type InSortPriority, const FName& InColumnId, const EColumnSortMode::Type InNewSortMode)
{
	if (SortingColumn == InColumnId)
	{
		// Cycling
		SortMode = static_cast<EColumnSortMode::Type>((SortMode + 1) % 3);
	}
	else
	{
		SortingColumn = InColumnId;
		SortMode = InNewSortMode;
	}

	LaunchUpdateTask();
}

EColumnSortMode::Type SPCGEditorGraphAttributeListView::GetColumnSortMode(const FName InColumnId) const
{
	if (SortingColumn != InColumnId)
	{
		return EColumnSortMode::None;
	}

	return SortMode;
}

void SPCGEditorGraphAttributeListView::OnFilterTextChanged(const FText& InFilterText)
{
	ActiveFilterText = InFilterText;
	TextFilter->SetFilterText(InFilterText);

	const FText ErrorText = TextFilter->GetFilterErrorText();
	if(ErrorText.IsEmpty())
	{
		LaunchUpdateTask();
	}

	SearchBoxWidget->SetError(ErrorText);
}

void SPCGEditorGraphAttributeListView::OnFilterTextCommitted(const FText& NewText, ETextCommit::Type CommitInfo)
{
	if (CommitInfo == ETextCommit::OnCleared)
	{
		SearchBoxWidget->SetText(FText::GetEmpty());
		OnFilterTextChanged(FText::GetEmpty());
	}
}

FReply SPCGEditorGraphAttributeListView::OnListViewKeyDown(const FGeometry& /*InGeometry*/, const FKeyEvent& InKeyEvent) const
{
	if (ListViewCommands->ProcessCommandBindings(InKeyEvent))
	{
		return FReply::Handled();
	}

	return FReply::Unhandled();
}

void SPCGEditorGraphAttributeListView::AddColumn(const UPCGData* InPCGData, const FPCGTableVisualizerColumnInfo& InColumnInfo, TSharedPtr<const IPCGAttributeAccessorKeys> InAccessorKeys)
{
	FPCGColumnData& ColumnData = PCGColumnData.Add(InColumnInfo.Id);
	ColumnData.DataAccessor = InColumnInfo.Accessor;
	ColumnData.DataKeys = InAccessorKeys;

	SHeaderRow::FColumn::FArguments Arguments;
	Arguments.ColumnId(InColumnInfo.Id);
	Arguments.DefaultLabel(InColumnInfo.Label);
	Arguments.DefaultTooltip(InColumnInfo.Tooltip);
	Arguments.ManualWidth(InColumnInfo.Width < 0.0f ? PCGEditorGraphAttributeListView::CalculateColumnWidth(InColumnInfo.Label) : InColumnInfo.Width);
	Arguments.HAlignHeader(HAlign_Center);
	Arguments.HAlignCell((EHorizontalAlignment)InColumnInfo.CellAlignment);
	Arguments.SortMode(this, &SPCGEditorGraphAttributeListView::GetColumnSortMode, InColumnInfo.Id);
	Arguments.OnSort(this, &SPCGEditorGraphAttributeListView::OnColumnSortModeChanged);
	Arguments.OverflowPolicy(ETextOverflowPolicy::Ellipsis);
	Arguments.HeaderComboVisibility(EHeaderComboVisibility::Never);
	Arguments.MenuContent()
	[
		GenerateColumnMenu(InColumnInfo.Id)
	];

	SHeaderRow::FColumn* NewColumn = new SHeaderRow::FColumn(Arguments);
	NewColumn->bIsVisible = !HiddenAttributes.Contains(InColumnInfo.Id);
	ListViewHeader->AddColumn(*NewColumn);
}

TSharedRef<SWidget> SPCGEditorGraphAttributeListView::GenerateColumnMenu(FName ColumnId)
{
	FMenuBuilder MenuBuilder(/*bShouldCloseAfterMenuSelection=*/true, nullptr);
	MenuBuilder.AddMenuEntry(
		LOCTEXT("CopyAttributeNameToClipboard", "Copy attribute name"),
		LOCTEXT("CopyAttributeNameToClipboardTooltip", "Copies the attribute name to the clipboard."),
		FSlateIcon(),
		FUIAction(FExecuteAction::CreateLambda([ColumnId]()
		{
			FString ColumnIdString = ColumnId.ToString();

			// TODO[UE-221219]: until we support @None as an actual valid token, we need to replace it with None.
			ColumnIdString = ColumnIdString.Replace(TEXT("@None"), TEXT("None"));

			FPlatformApplicationMisc::ClipboardCopy(*ColumnIdString);
		})),
		NAME_None,
		EUserInterfaceActionType::Button);

	return MenuBuilder.MakeWidget();
}

void SPCGEditorGraphAttributeListView::CopySelectionToClipboard() const
{
	constexpr TCHAR Delimiter = TEXT(',');
	constexpr TCHAR LineEnd = TEXT('\n');

	const TArray<FName> HiddenColumnIds = ListViewHeader->GetHiddenColumnIds();

	TArray<TPair<FName, FPCGColumnData>> FilteredPCGColumnData;
	for (const TPair<FName, FPCGColumnData>& Data : PCGColumnData)
	{
		if (!HiddenColumnIds.Contains(Data.Key))
		{
			FilteredPCGColumnData.Add(Data);
		}
	}

	TStringBuilder<2048> CSVExport;

	// Write column header row
	for (int ColumnIndex = 0; ColumnIndex < FilteredPCGColumnData.Num(); ColumnIndex++)
	{
		const TPair<FName, FPCGColumnData>& Data = FilteredPCGColumnData[ColumnIndex];

		if (ColumnIndex > 0)
		{
			CSVExport += Delimiter;
		}
		CSVExport += Data.Key.ToString();
	}

	// Gather selected rows and sort them to match the displayed order instead of selection order
	TArray<PCGListViewItemPtr> SelectedListViewItems = ListView->GetSelectedItems();
	if (const FPCGColumnData* ColumnData = PCGColumnData.Find(SortingColumn))
	{
		if (ColumnData->DataAccessor.IsValid() && ColumnData->DataKeys.IsValid())
		{
			// Lambda used here to get the index value of an item in the array for sorting
			PCGAttributeAccessorHelpers::SortByAttribute(*ColumnData->DataAccessor, *ColumnData->DataKeys, SelectedListViewItems, !(SortMode & EColumnSortMode::Descending), [&SelectedListViewItems](int Index) { return SelectedListViewItems[Index]->Index; });
		}
	}

	// Write each row
	for (const PCGListViewItemPtr&  ListViewItem : SelectedListViewItems)
	{
		CSVExport += LineEnd;

		for (int ColumnIndex = 0; ColumnIndex < FilteredPCGColumnData.Num(); ColumnIndex++)
		{
			if (ColumnIndex > 0)
			{
				CSVExport += Delimiter;
			}

			const TPair<FName, FPCGColumnData>& Data = FilteredPCGColumnData[ColumnIndex];
			const FPCGColumnData& ColumnData = Data.Value;
			if (ColumnData.DataAccessor.IsValid() && ColumnData.DataKeys.IsValid())
			{
				FString RowString;
				if (ColumnData.DataAccessor->Get<FString>(RowString, ListViewItem->Index, *ColumnData.DataKeys, EPCGAttributeAccessorFlags::AllowBroadcast))
				{
					CSVExport += RowString;
				}
			}
		}
	}

	FPlatformApplicationMisc::ClipboardCopy(*CSVExport);
}

bool SPCGEditorGraphAttributeListView::CanCopySelectionToClipboard() const
{
	return ListView->GetNumItemsSelected() > 0;
}

const FSlateBrush* SPCGEditorGraphAttributeListView::OnGetLockButtonImageResource() const
{
	return FAppStyle::GetBrush(bIsLocked ? TEXT("PropertyWindow.Locked") : TEXT("PropertyWindow.Unlocked"));
}

FReply SPCGEditorGraphAttributeListView::OnLockClick()
{
	bIsLocked = !bIsLocked;
	return FReply::Handled();
}

FReply SPCGEditorGraphAttributeListView::OnNodeNameClicked()
{
	if (PCGEditorGraphNode.Get() && PCGEditorPtr.IsValid())
	{
		PCGEditorPtr.Pin()->JumpToNode(PCGEditorGraphNode.Get());
	}

	return FReply::Handled();
}

FReply SPCGEditorGraphAttributeListView::OnFocusOnDataClicked() const
{
	if (IsFocusOnDataEnabled() && DataPtr.Get())
	{
		FocusOnDataCallback(DataPtr.Get(), {});
	}

	return FReply::Handled();
}

bool SPCGEditorGraphAttributeListView::IsFocusOnDataEnabled() const
{
	return (!ListViewItems.IsEmpty() && FocusOnDataCallback);
}

void SPCGEditorGraphAttributeListView::FocusOnSelection() const
{
	if (!IsFocusOnDataEnabled() || !DataPtr.Get())
	{
		return;
	}

	// Note: this implementation assumes it's the same callback for all entries, which is currently true
	const TArray<PCGListViewItemPtr> SelectedItems = ListView->GetSelectedItems();
	TArray<int> Indices;
	Indices.Reserve(SelectedItems.Num());

	for (PCGListViewItemPtr SelectedItem : SelectedItems)
	{
		if (SelectedItem)
		{
			Indices.Add(SelectedItem->Index);
		}
	}

	FocusOnDataCallback(DataPtr.Get(), Indices);
}

bool SPCGEditorGraphAttributeListView::CanFocusOnSelection() const
{
	return ListView->GetNumItemsSelected() > 0;
}

#undef LOCTEXT_NAMESPACE
