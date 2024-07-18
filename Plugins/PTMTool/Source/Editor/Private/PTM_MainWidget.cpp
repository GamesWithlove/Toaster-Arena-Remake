/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
///		Copyright 2018 (C) Bruno Xavier B. Leite
//////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "PTM_MainWidget.h"
#include "EditorStyleSet.h"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define LOCTEXT_NAMESPACE "Synaptech"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// PTM Main Widget Constructors:

SPTM_MainWidget::SPTM_MainWidget() {}
SPTM_MainWidget::~SPTM_MainWidget() {
	PTM_SOURCE_ITEMS.Empty();
	PTM_TARGET_ITEMS.Empty();
}

ESPTM_Modifier SPTM_MainWidget::Modifier = ESPTM_Modifier::Normal;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// PTM Main Widget:

void SPTM_MainWidget::Construct(const FArguments &InArgs) {
	SAssignNew(PTM_SOURCE_LIST,SScrollBox).OnUserScrolled(this,&SPTM_MainWidget::OnSourceScrolled);
	SAssignNew(PTM_TARGET_LIST,SScrollBox).OnUserScrolled(this,&SPTM_MainWidget::OnTargetScrolled);
	//
	PTM_SOURCE_Search.Empty();
	PTM_TARGET_Search.Empty();
	//
	RebuildSourceListView();
	RebuildTargetListView();
	//
	TSharedRef<SBox>Panel = SNew(SBox)
	.HAlign(HAlign_Fill).VAlign(VAlign_Fill)
	[
		SNew(SVerticalBox)
		+SVerticalBox::Slot().AutoHeight().Padding(0,2,0,2)
		[
			SNew(SHorizontalBox)
			+SHorizontalBox::Slot()
			[
				SAssignNew(PTM_Button_PICK_SOURCE,SButton)
				.IsEnabled(this,&SPTM_MainWidget::BrowserSelectedSource)
				.OnClicked(this,&SPTM_MainWidget::OnClickedSelectSource)
				.ButtonStyle(FAppStyle::Get(),"FlatButton.Default")
				.ForegroundColor(FSlateColor::UseForeground())
				.VAlign(VAlign_Center).HAlign(HAlign_Fill)
				[
					SNew(STextBlock)
					.Justification(ETextJustify::Center)
					.Font(FAppStyle::GetFontStyle(TEXT("BoldFont")))
					.Text(LOCTEXT("PTM_Button_PICK_SOURCE","SELECTED as SOURCE"))
				]
			]
			+SHorizontalBox::Slot().AutoWidth()
			[
				SAssignNew(PTM_Button_SWAP_PICKS,SButton)
				.OnClicked(this,&SPTM_MainWidget::OnClickedSwapSelection)
				.ButtonStyle(FAppStyle::Get(),"FlatButton.Default")
				.IsEnabled(this,&SPTM_MainWidget::HasSourceAndTarget)
				.ForegroundColor(FSlateColor::UseForeground())
				.VAlign(VAlign_Center).HAlign(HAlign_Fill)
				[
					SNew(SHorizontalBox)
					+SHorizontalBox::Slot().AutoWidth()
					[
						SNew(STextBlock)
						.Text(FText::FromString(FString(TEXT("\xf060"))))
						.Font(FAppStyle::Get().GetFontStyle("FontAwesome.11"))
						.TextStyle(FAppStyle::Get(),"ContentBrowser.TopBar.Font")
						.ToolTipText(LOCTEXT("PTM_Button_SWAP_PICKS_Tooltip","Swap Source to Target."))
					]
					+SHorizontalBox::Slot().AutoWidth()
					[
						SNew(STextBlock)
						.Text(FText::FromString(FString(TEXT("\xf061"))))
						.Font(FAppStyle::Get().GetFontStyle("FontAwesome.11"))
						.TextStyle(FAppStyle::Get(),"ContentBrowser.TopBar.Font")
						.ToolTipText(LOCTEXT("PTM_Button_SWAP_PICKS_Tooltip","Swap Source to Target."))
					]
				]
			]
			+SHorizontalBox::Slot()
			[
				SAssignNew(PTM_Button_PICK_TARGET,SButton)
				.IsEnabled(this,&SPTM_MainWidget::BrowserSelectedTarget)
				.OnClicked(this,&SPTM_MainWidget::OnClickedSelectTarget)
				.ButtonStyle(FAppStyle::Get(),"FlatButton.Default")
				.ForegroundColor(FSlateColor::UseForeground())
				.VAlign(VAlign_Center).HAlign(HAlign_Fill)
				[
					SNew(STextBlock)
					.Justification(ETextJustify::Center)
					.Font(FAppStyle::GetFontStyle(TEXT("BoldFont")))
					.Text(LOCTEXT("PTM_Button_PICK_TARGET","SELECTED as TARGET"))
				]
			]
		]
		+SVerticalBox::Slot()
		.AutoHeight().Padding(0,2,0,2)
		[
			SNew(SHorizontalBox)
			+SHorizontalBox::Slot().Padding(0,2,0,2)
			[
				SNew(STextBlock)
				.Justification(ETextJustify::Center)
				.Text(this,&SPTM_MainWidget::GetSourceName)
				.Font(FAppStyle::GetFontStyle(TEXT("BoldFont")))
			]
			+SHorizontalBox::Slot().Padding(0,2,0,2)
			[
				SNew(STextBlock)
				.Justification(ETextJustify::Center)
				.Text(this,&SPTM_MainWidget::GetTargetName)
				.Font(FAppStyle::GetFontStyle(TEXT("BoldFont")))
			]
		]
		+SVerticalBox::Slot().Padding(0,2,0,2)
		.VAlign(VAlign_Fill).HAlign(HAlign_Fill)
		[
			SNew(SSplitter)
			.Orientation(EOrientation::Orient_Horizontal)
			+SSplitter::Slot().Value(0.5f)
			[
				SNew(SBorder).VAlign(VAlign_Fill).HAlign(HAlign_Fill)
				.BorderImage(FAppStyle::GetBrush("ToolPanel.GroupBorder"))
				[
					SNew(SVerticalBox)
					+SVerticalBox::Slot()
					.AutoHeight().Padding(0,0,0,2)
					.VAlign(VAlign_Top).HAlign(HAlign_Fill)
					[
						SNew(SSearchBox)
						.SelectAllTextWhenFocused(true)
						.OnTextChanged(this,&SPTM_MainWidget::OnSourceSearchChanged)
					]
					+SVerticalBox::Slot().Padding(0,2,0,2)
					.VAlign(VAlign_Fill).HAlign(HAlign_Fill)
					[
						PTM_SOURCE_LIST.ToSharedRef()
					]
				]
			]
			+SSplitter::Slot().Value(0.5f)
			[
				SNew(SBorder).VAlign(VAlign_Fill).HAlign(HAlign_Fill)
				.BorderImage(FAppStyle::GetBrush("ToolPanel.GroupBorder"))
				[
					SNew(SVerticalBox)
					+SVerticalBox::Slot()
					.AutoHeight().Padding(0,0,0,2)
					.VAlign(VAlign_Top).HAlign(HAlign_Fill)
					[
						SNew(SSearchBox)
						.SelectAllTextWhenFocused(true)
						.OnTextChanged(this,&SPTM_MainWidget::OnSourceSearchChanged)
					]
					+SVerticalBox::Slot().Padding(0,2,0,2)
					.VAlign(VAlign_Fill).HAlign(HAlign_Fill)
					[
						PTM_TARGET_LIST.ToSharedRef()
					]
				]
			]
		]
		+SVerticalBox::Slot()
		.AutoHeight().Padding(0,2,0,2)
		[
			SAssignNew(PTM_Button_PICK_ITEM,SButton)
			.OnClicked(this,&SPTM_MainWidget::OnClickedPickSelected)
			.ButtonStyle(FAppStyle::Get(),"FlatButton.Default")
			.IsEnabled(this,&SPTM_MainWidget::HasSourcePick)
			.ForegroundColor(FSlateColor::UseForeground())
			.VAlign(VAlign_Center).HAlign(HAlign_Fill)
			[
				SNew(STextBlock)
				.Justification(ETextJustify::Center)
				.Font(FAppStyle::GetFontStyle(TEXT("BoldFont")))
				.Text(LOCTEXT("PTM_Button_PICK_ITEM","PICK SELECTED"))
			]
		]
		+SVerticalBox::Slot()
		.AutoHeight().Padding(0,2,0,0)
		[
			SNew(SHorizontalBox)
			+SHorizontalBox::Slot()
			[
				SAssignNew(PTM_Button_CLEAR_ALL,SButton)
				.IsEnabled(this,&SPTM_MainWidget::HasSourceOrTargetPick)
				.ButtonStyle(FAppStyle::Get(),"FlatButton.Default")
				.OnClicked(this,&SPTM_MainWidget::OnClickedClearAll)
				.ForegroundColor(FSlateColor::UseForeground())
				.VAlign(VAlign_Center).HAlign(HAlign_Fill)
				[
					SNew(STextBlock)
					.Justification(ETextJustify::Center)
					.Text(LOCTEXT("PTM_Button_CLEAR_ALL","CLEAR ALL"))
					.Font(FAppStyle::GetFontStyle(TEXT("BoldFont")))
				]
			]
			+SHorizontalBox::Slot()
			[
				SAssignNew(PTM_Button_APPLY,SButton)
				.ButtonStyle(FAppStyle::Get(),"FlatButton.Default")
				.OnClicked(this,&SPTM_MainWidget::OnClickedApply)
				.IsEnabled(this,&SPTM_MainWidget::HasTransfers)
				.ForegroundColor(FSlateColor::UseForeground())
				.VAlign(VAlign_Center).HAlign(HAlign_Fill)
				[
					SNew(STextBlock)
					.Justification(ETextJustify::Center)
					.Text(LOCTEXT("PTM_Button_APPLY","APPLY"))
					.Font(FAppStyle::GetFontStyle(TEXT("BoldFont")))
				]
			]
		]
	];
	//
	//
	ChildSlot.HAlign(HAlign_Fill).VAlign(VAlign_Fill)[Panel];
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool SPTM_MainWidget::IsInteractable() const {
	return IsEnabled();
}

bool SPTM_MainWidget::SupportsKeyboardFocus() const {
	return true;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void SPTM_MainWidget::RebuildSourceListView() {
	PTM_SOURCE_LIST->ClearChildren();
	PTM_SOURCE_ITEMS.Empty();
	//
	if (!Source.IsValid()) {return;}
	TArray<FPTM_PropertyInfo>SourceInfo = FPropertyTransferManager::CollectBlueprintPropertyInfo(Source.Get());
	//
	if (Target.IsValid()) {
		TArray<FPTM_PropertyInfo>TargetInfo = FPropertyTransferManager::CollectBlueprintPropertyInfo(Target.Get());
		for (FPTM_PropertyInfo &Item : SourceInfo) {
			for (FPTM_PropertyInfo &Other : TargetInfo) {
				if (Item.Property->GetFName()==Other.Property->GetFName()) {Item.PropertyClash=true;}
				if (Item.PropertyClash) {Other.PropertyClash=true;}
			}
		}
	}
	//
	for (int32 I=0; I<SourceInfo.Num(); I++) {PTM_SOURCE_ITEMS.Add(TSharedPtr<SPTM_ListButton>(nullptr));}
	for (int32 I=0; I<PTM_SOURCE_ITEMS.Num(); I++) {
		ESPTM_State State = ESPTM_State::Normal;
		const FName Name = SourceInfo[I].Property->GetFName();
		if (SourceInfo[I].PropertyClash) {State=ESPTM_State::NormalClash;}
		//
		SAssignNew(PTM_SOURCE_ITEMS[I],SPTM_ListButton)
		.OnClicked(this,&SPTM_MainWidget::OnClickedSourceListItem,Name)
		.Owner(EPTM_Owner::Source)
		.PPInfo(SourceInfo[I])
		.PPState(State)
		.Name(Name);
	}
	//
	for (int32 I=0; I<PTM_SOURCE_ITEMS.Num(); I++) {
		PTM_SOURCE_LIST->AddSlot().VAlign(VAlign_Top).HAlign(HAlign_Fill)
		[
			PTM_SOURCE_ITEMS[I].ToSharedRef()
		];
	}
	//
	PTM_SOURCE_LIST->Invalidate(EInvalidateWidget::Layout);
}

void SPTM_MainWidget::RebuildTargetListView() {
	PTM_TARGET_LIST->ClearChildren();
	PTM_TARGET_ITEMS.Empty();
	//
	if (!Target.IsValid()) {return;}
	TArray<FPTM_PropertyInfo>TargetInfo = FPropertyTransferManager::CollectBlueprintPropertyInfo(Target.Get());
	//
	if (Source.IsValid()) {
		TArray<FPTM_PropertyInfo>SourceInfo = FPropertyTransferManager::CollectBlueprintPropertyInfo(Source.Get());
		for (FPTM_PropertyInfo &Item : TargetInfo) {
			for (FPTM_PropertyInfo &Other : SourceInfo) {
				if (Item.Property->GetFName()==Other.Property->GetFName()) {Item.PropertyClash=true;}
				if (Item.PropertyClash) {Other.PropertyClash=true;}
			}
		}
	}
	//
	for (int32 I=0; I<TargetInfo.Num(); I++) {PTM_TARGET_ITEMS.Add(TSharedPtr<SPTM_ListButton>(nullptr));}
	for (int32 I=0; I<PTM_TARGET_ITEMS.Num(); I++) {
		ESPTM_State State = ESPTM_State::Normal;
		const FName Name = TargetInfo[I].Property->GetFName();
		if (TargetInfo[I].PropertyClash) {State=ESPTM_State::NormalClash;}
		//
		SAssignNew(PTM_TARGET_ITEMS[I],SPTM_ListButton)
		.OnClicked(this,&SPTM_MainWidget::OnClickedTargetListItem,Name)
		.Owner(EPTM_Owner::Target)
		.PPInfo(TargetInfo[I])
		.PPState(State)
		.Name(Name);
	}
	//
	for (int32 I=0; I<PTM_TARGET_ITEMS.Num(); I++) {
		PTM_TARGET_LIST->AddSlot().VAlign(VAlign_Top).HAlign(HAlign_Fill)
		[
			PTM_TARGET_ITEMS[I].ToSharedRef()
		];
	}
	//
	PTM_TARGET_LIST->Invalidate(EInvalidateWidget::Layout);
}

void SPTM_MainWidget::RefreshSourceListView() {
	PTM_SOURCE_LIST->ClearChildren();
	//
	if (PTM_SOURCE_Search.Len()<=2) {
		for (int32 I=0; I<PTM_SOURCE_ITEMS.Num(); I++) {
			const auto INFO = PTM_SOURCE_ITEMS[I]->GetPropertyInfo();
			ESPTM_State State = PTM_SOURCE_ITEMS[I]->GetState();
			const FName Name = PTM_SOURCE_ITEMS[I]->GetName();
			//
			PTM_SOURCE_LIST->AddSlot()
			.VAlign(VAlign_Top).HAlign(HAlign_Fill)
			[
				SAssignNew(PTM_SOURCE_ITEMS[I],SPTM_ListButton)
				.OnClicked(this,&SPTM_MainWidget::OnClickedSourceListItem,Name)
				.Owner(EPTM_Owner::Source)
				.PPState(State)
				.PPInfo(INFO)
				.Name(Name)
			];
		}
	} else {
		for (int32 I=0; I<PTM_SOURCE_ITEMS.Num(); I++) {
			if (!PTM_SOURCE_ITEMS[I]->GetName().ToString().Contains(PTM_SOURCE_Search)) {continue;}
			const auto INFO = PTM_SOURCE_ITEMS[I]->GetPropertyInfo();
			ESPTM_State State = PTM_SOURCE_ITEMS[I]->GetState();
			const FName Name = PTM_SOURCE_ITEMS[I]->GetName();
			//
			PTM_SOURCE_LIST->AddSlot()
			.VAlign(VAlign_Top).HAlign(HAlign_Fill)
			[
				SAssignNew(PTM_SOURCE_ITEMS[I],SPTM_ListButton)
				.OnClicked(this,&SPTM_MainWidget::OnClickedSourceListItem,Name)
				.Owner(EPTM_Owner::Source)
				.PPState(State)
				.PPInfo(INFO)
				.Name(Name)
			];
		}
	}
}

void SPTM_MainWidget::RefreshTargetListView() {
	PTM_TARGET_LIST->ClearChildren();
	//
	if (PTM_TARGET_Search.Len()<=2) {
		for (int32 I=0; I<PTM_TARGET_ITEMS.Num(); I++) {
			const auto INFO = PTM_TARGET_ITEMS[I]->GetPropertyInfo();
			ESPTM_State State = PTM_TARGET_ITEMS[I]->GetState();
			const FName Name = PTM_TARGET_ITEMS[I]->GetName();
			//
			PTM_TARGET_LIST->AddSlot()
			.VAlign(VAlign_Top).HAlign(HAlign_Fill)
			[
				SAssignNew(PTM_TARGET_ITEMS[I],SPTM_ListButton)
				.OnClicked(this,&SPTM_MainWidget::OnClickedTargetListItem,Name)
				.Owner(EPTM_Owner::Target)
				.PPState(State)
				.PPInfo(INFO)
				.Name(Name)
			];
		}
	} else {
		for (int32 I=0; I<PTM_TARGET_ITEMS.Num(); I++) {
			if (!PTM_TARGET_ITEMS[I]->GetName().ToString().Contains(PTM_TARGET_Search)) {continue;}
			const auto INFO = PTM_TARGET_ITEMS[I]->GetPropertyInfo();
			ESPTM_State State = PTM_TARGET_ITEMS[I]->GetState();
			const FName Name = PTM_TARGET_ITEMS[I]->GetName();
			//
			PTM_TARGET_LIST->AddSlot()
			.VAlign(VAlign_Top).HAlign(HAlign_Fill)
			[
				SAssignNew(PTM_TARGET_ITEMS[I],SPTM_ListButton)
				.OnClicked(this,&SPTM_MainWidget::OnClickedTargetListItem,Name)
				.Owner(EPTM_Owner::Target)
				.PPState(State)
				.PPInfo(INFO)
				.Name(Name)
			];
		}
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool SPTM_MainWidget::BrowserSelectedSource() const {
	UObject* Asset = nullptr;
	//
	return (
		FPropertyTransferManager::HasBlueprintSelectedOnBrowser(Asset)
		&& (Asset != nullptr) && (Asset != Source.Get())
	);
}

bool SPTM_MainWidget::BrowserSelectedTarget() const {
	UObject* Asset = nullptr;
	//
	return (
		FPropertyTransferManager::HasBlueprintSelectedOnBrowser(Asset)
		&& (Asset != Target.Get())
	);
}

bool SPTM_MainWidget::HasSource() const {
	return Source.IsValid();
}

bool SPTM_MainWidget::HasTarget() const {
	return Target.IsValid();
}

bool SPTM_MainWidget::HasSourceAndTarget() const {
	return (Source.IsValid() && Target.IsValid());
}

bool SPTM_MainWidget::HasSourceOrTarget() const {
	return (Source.IsValid() || Target.IsValid());
}

bool SPTM_MainWidget::HasSourcePick() const {
	return (FindFirstPickedSource() != INDEX_NONE);
}

bool SPTM_MainWidget::HasTargetPick() const {
	return (FindFirstPickedTarget() != INDEX_NONE);
}

bool SPTM_MainWidget::HasSourceOrTargetPick() const {
	return (HasSourcePick() || HasTargetPick() || HasTransfers());
}

bool SPTM_MainWidget::HasTransfers() const {
	return (FindFirstTransfer() != INDEX_NONE);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

FText SPTM_MainWidget::GetSourceName() const {
	if (!Source.IsValid()) {return FText::FromString(TEXT("..."));}
	//
	FString SN = Source->GetName().Replace(TEXT("Default__"),TEXT("(Blueprint)  "));
	SN.RemoveFromEnd(TEXT("_C"));
	//
	return FText::FromString(*SN);
}

FText SPTM_MainWidget::GetTargetName() const {
	if (TargetBatch.Num()>0) {return FText::FromString(TEXT("* multiple targets *"));}
	if (!Target.IsValid()) {return FText::FromString(TEXT("..."));}
	//
	FString SN = Target->GetName().Replace(TEXT("Default__"),TEXT("(Blueprint)  "));
	SN.RemoveFromEnd(TEXT("_C"));
	//
	return FText::FromString(*SN);
}

int32 SPTM_MainWidget::FindFirstPickedSource() const {
	if (!HasSource()) {return INDEX_NONE;}
	//
	for (int32 I=0; I<PTM_SOURCE_ITEMS.Num(); I++) {
		if (!PTM_SOURCE_ITEMS[I].IsValid()) {continue;}
		if (PTM_SOURCE_ITEMS[I]->GetState()==ESPTM_State::Picked||PTM_SOURCE_ITEMS[I]->GetState()==ESPTM_State::PickedClash) {return I;}
	}
	//
	return INDEX_NONE;
}

int32 SPTM_MainWidget::FindFirstPickedTarget() const {
	if (!HasTarget()) {return INDEX_NONE;}
	//
	for (int32 I=0; I<PTM_TARGET_ITEMS.Num(); I++) {
		if (!PTM_TARGET_ITEMS[I].IsValid()) {continue;}
		if (PTM_TARGET_ITEMS[I]->GetState()==ESPTM_State::Picked||PTM_TARGET_ITEMS[I]->GetState()==ESPTM_State::PickedClash) {return I;}
	}
	//
	return INDEX_NONE;
}

int32 SPTM_MainWidget::FindLastPickedSource() const {
	if (!HasSource()) {return INDEX_NONE;}
	//
	for (int32 I=PTM_SOURCE_ITEMS.Num()-1; I>=0; I--) {
		if (!PTM_SOURCE_ITEMS[I].IsValid()) {continue;}
		if (PTM_SOURCE_ITEMS[I]->GetState()==ESPTM_State::Picked||PTM_SOURCE_ITEMS[I]->GetState()==ESPTM_State::PickedClash) {return I;}
	}
	//
	return INDEX_NONE;
}

int32 SPTM_MainWidget::FindLastPickedTarget() const {
	if (!HasTarget()) {return INDEX_NONE;}
	//
	for (int32 I=PTM_TARGET_ITEMS.Num()-1; I>=0; I--) {
		if (!PTM_TARGET_ITEMS[I].IsValid()) {continue;}
		if (PTM_TARGET_ITEMS[I]->GetState()==ESPTM_State::Picked||PTM_TARGET_ITEMS[I]->GetState()==ESPTM_State::PickedClash) {return I;}
	}
	//
	return INDEX_NONE;
}

int32 SPTM_MainWidget::FindFirstTransfer() const {
	if (!HasTarget()) {return INDEX_NONE;}
	//
	for (int32 I=0; I<PTM_TARGET_ITEMS.Num(); I++) {
		if (!PTM_TARGET_ITEMS[I].IsValid()) {continue;}
		if (PTM_TARGET_ITEMS[I]->GetState()==ESPTM_State::Transfer||PTM_TARGET_ITEMS[I]->GetState()==ESPTM_State::TransferClash) {return I;}
	}
	//
	return INDEX_NONE;
}

TSharedPtr<SPTM_ListButton> SPTM_MainWidget::FindSourceWidget(const FName &Name) {
	if (!HasSource()) {return TSharedPtr<SPTM_ListButton>(nullptr);}
	//
	for (int32 I=0; I<PTM_SOURCE_ITEMS.Num(); I++) {
		if (!PTM_SOURCE_ITEMS[I].IsValid()) {continue;}
		if (PTM_SOURCE_ITEMS[I]->GetName()==Name) {return PTM_SOURCE_ITEMS[I];}
	}
	//
	return TSharedPtr<SPTM_ListButton>(nullptr);
}

TSharedPtr<SPTM_ListButton> SPTM_MainWidget::FindTargetWidget(const FName &Name) {
	if (!HasTarget()) {return TSharedPtr<SPTM_ListButton>(nullptr);}
	//
	for (int32 I=0; I<PTM_TARGET_ITEMS.Num(); I++) {
		if (!PTM_TARGET_ITEMS[I].IsValid()) {continue;}
		if (PTM_TARGET_ITEMS[I]->GetName()==Name) {return PTM_TARGET_ITEMS[I];}
	}
	//
	return TSharedPtr<SPTM_ListButton>(nullptr);
}

TSharedPtr<SPTM_ListButton> SPTM_MainWidget::FindTargetClashWidget(const FName &Name) {
	if (!HasTarget()) {return TSharedPtr<SPTM_ListButton>(nullptr);}
	//
	for (int32 I=0; I<PTM_TARGET_ITEMS.Num(); I++) {
		if (!PTM_TARGET_ITEMS[I].IsValid()) {continue;}
		if ((PTM_TARGET_ITEMS[I]->GetState()!=ESPTM_State::Transfer)&&(PTM_TARGET_ITEMS[I]->GetState()!=ESPTM_State::TransferClash)) {continue;}
		//
		if (PTM_TARGET_ITEMS[I]->GetName()==Name) {return PTM_TARGET_ITEMS[I];}
	}
	//
	return TSharedPtr<SPTM_ListButton>(nullptr);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void SPTM_MainWidget::TransferPickedSourceToTarget(TSharedRef<SPTM_ListButton>Widget) {
	if (!HasTarget()) {return;}
	//
	const ESPTM_State State = Widget->GetState();
	if ((State!=ESPTM_State::Picked)&&(State!=ESPTM_State::PickedClash)) {return;}
	//
	Widget->SetOwner(EPTM_Owner::Target);
	int32 I=PTM_TARGET_ITEMS.Add(Widget);
	//
	switch (State) {
		case ESPTM_State::Picked:
			PTM_TARGET_ITEMS[I]->SetState(ESPTM_State::Transfer); break;
		case ESPTM_State::PickedClash:
			PTM_TARGET_ITEMS[I]->SetState(ESPTM_State::TransferClash); break;
	default: break;}
}

void SPTM_MainWidget::TransferPickedTargetToSource(TSharedRef<SPTM_ListButton>Widget) {
	if (!HasSource()) {return;}
	//
	const ESPTM_State State = Widget->GetState();
	if ((State!=ESPTM_State::Transfer)&&(State!=ESPTM_State::TransferClash)) {return;}
	//
	Widget->SetOwner(EPTM_Owner::Source);
	int32 I=PTM_SOURCE_ITEMS.Add(Widget);
	//
	switch (State) {
		case ESPTM_State::Transfer:
			PTM_SOURCE_ITEMS[I]->SetState(ESPTM_State::Normal); break;
		case ESPTM_State::TransferClash:
			PTM_SOURCE_ITEMS[I]->SetState(ESPTM_State::NormalClash); break;
	default: break;}
}

void SPTM_MainWidget::TransferAllPickedSourcesToTarget() {
	if (!HasTarget()) {return;}
	//
	TArray<TSharedPtr<SPTM_ListButton>>COPY;
	for (auto Widget : PTM_SOURCE_ITEMS) {
		if (!Widget.IsValid()) {continue;}
		TransferPickedSourceToTarget(Widget.ToSharedRef());
	}
	//
	COPY = PTM_SOURCE_ITEMS;
	for (auto Widget : PTM_SOURCE_ITEMS) {
		if (!Widget.IsValid()) {COPY.Remove(Widget);}
		if (Widget->GetOwner()==EPTM_Owner::Target) {COPY.Remove(Widget);}
	} PTM_SOURCE_ITEMS = COPY;
	//
	RefreshTargetListView();
	RefreshSourceListView();
}

void SPTM_MainWidget::TransferAllPickedTargetsToSource() {
	if (!HasTarget()) {return;}
	//
	TArray<TSharedPtr<SPTM_ListButton>>COPY;
	for (auto Widget : PTM_TARGET_ITEMS) {
		if (!Widget.IsValid()) {continue;}
		TransferPickedTargetToSource(Widget.ToSharedRef());
	}
	//
	COPY = PTM_TARGET_ITEMS;
	for (auto Widget : PTM_TARGET_ITEMS) {
		if (!Widget.IsValid()) {COPY.Remove(Widget);}
		if (Widget->GetOwner()==EPTM_Owner::Source) {COPY.Remove(Widget);}
	} PTM_TARGET_ITEMS = COPY;
	//
	RefreshSourceListView();
	RefreshTargetListView();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void SPTM_MainWidget::OnSourceScrolled(float Offset) {}
void SPTM_MainWidget::OnTargetScrolled(float Offset) {}

void SPTM_MainWidget::OnSourceSearchChanged(const FText &Filter) {
	PTM_SOURCE_Search = Filter.ToString();
	//
	RefreshSourceListView();
}

void SPTM_MainWidget::OnTargetSearchChanged(const FText &Filter) {
	PTM_TARGET_Search = Filter.ToString();
	//
	RefreshTargetListView();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

FReply SPTM_MainWidget::OnClickedSelectSource() {
	if (!IsEnabled()) {return FReply::Handled();}
	//
	UObject* OBJ = FPropertyTransferManager::GetSelectedBlueprint();
	if (OBJ==Target.Get()) {Target.Reset();}
	//
	Source = OBJ;
	TargetBatch.Remove(Source);
	//
	RebuildSourceListView();
	RebuildTargetListView();
	//
	return FReply::Handled();
}

FReply SPTM_MainWidget::OnClickedSelectTarget() {
	if (!IsEnabled()) {return FReply::Handled();}
	//
	UObject* OBJ = FPropertyTransferManager::GetSelectedBlueprint();
	TArray<UObject*>AllTargets=FPropertyTransferManager::GetAllSelectedBlueprints(OBJ);
	//
	TargetBatch.Empty();
	if (OBJ==Source.Get()) {Source.Reset();}
	//
	for (UObject *& AT : AllTargets) {
		TargetBatch.Add(TWeakObjectPtr<UObject>(AT));
	}
	//
	Target = OBJ;
	TargetBatch.Remove(Target);
	//
	RebuildSourceListView();
	RebuildTargetListView();
	//
	return FReply::Handled();
}

FReply SPTM_MainWidget::OnClickedSwapSelection() {
	if (!IsEnabled()) {return FReply::Handled();}
	//
	UObject* SwapTarget = Target.Get();
	TargetBatch.Empty();
	//
	Target = Source.Get();
	Source = SwapTarget;
	//
	RebuildSourceListView();
	RebuildTargetListView();
	//
	return FReply::Handled();
}

FReply SPTM_MainWidget::OnClickedSourceListItem(const FName Item) {
	auto Widget = FindSourceWidget(Item);
	//
	if (!IsEnabled()) {return FReply::Handled();}
	if (!Widget.IsValid()) {return FReply::Handled();}
	if (!HasSourceAndTarget()) {return FReply::Handled();}
	//
	if (SPTM_MainWidget::Modifier==ESPTM_Modifier::Normal) {
		const auto State = Widget->GetState();
		switch (State) {
			case ESPTM_State::Normal:
			{
				Widget->SetState(ESPTM_State::Picked);
				return FReply::Handled();
			} break;
			case ESPTM_State::NormalClash:
			{
				Widget->SetState(ESPTM_State::PickedClash);
				return FReply::Handled();
			} break;
		default: break;}
	}
	//
	if (SPTM_MainWidget::Modifier==ESPTM_Modifier::Shift) {
		int32 FI = FindFirstPickedSource();
		int32 ID = PTM_SOURCE_ITEMS.IndexOfByKey(Widget);
		if (FI==INDEX_NONE) {FI=ID;}
		//
		if (ID>=FI) {
			for (int32 X=FI; X<=ID; X++) {
				const auto State = PTM_SOURCE_ITEMS[X]->GetState();
				switch (State) {
					case ESPTM_State::Normal:
						PTM_SOURCE_ITEMS[X]->SetState(ESPTM_State::Picked); break;
					case ESPTM_State::NormalClash:
						PTM_SOURCE_ITEMS[X]->SetState(ESPTM_State::PickedClash); break;
				default: break;}
			}
		} else {
			for (int32 X=ID; X<=FI; X++) {
				const auto State = PTM_SOURCE_ITEMS[X]->GetState();
					switch (State) {
					case ESPTM_State::Normal:
						PTM_SOURCE_ITEMS[X]->SetState(ESPTM_State::Picked); break;
					case ESPTM_State::NormalClash:
						PTM_SOURCE_ITEMS[X]->SetState(ESPTM_State::PickedClash); break;
				default: break;}
			}
		}
		//
		return FReply::Handled();
	}
	//
	if (SPTM_MainWidget::Modifier==ESPTM_Modifier::Ctrl) {
		const auto State = Widget->GetState();
		switch (State) {
			case ESPTM_State::Picked:
			{
				Widget->SetState(ESPTM_State::Normal);
				return FReply::Handled();
			} break;
			case ESPTM_State::PickedClash:
			{
				Widget->SetState(ESPTM_State::NormalClash);
				return FReply::Handled();
			} break;
		default: break;}
	}
	//
	if (SPTM_MainWidget::Modifier==ESPTM_Modifier::Alt) {
		const auto State = Widget->GetState();
		int32 I=PTM_TARGET_ITEMS.Add(Widget);
		Widget->SetOwner(EPTM_Owner::Target);
		//
		switch (State) {
			case ESPTM_State::Normal:
			case ESPTM_State::Picked:
				PTM_TARGET_ITEMS[I]->SetState(ESPTM_State::Transfer); break;
			case ESPTM_State::NormalClash:
			case ESPTM_State::PickedClash:
				PTM_TARGET_ITEMS[I]->SetState(ESPTM_State::TransferClash); break;
		default: break;}
		//
		PTM_SOURCE_ITEMS.Remove(Widget);
		//
		RefreshTargetListView();
		RefreshSourceListView();
		return FReply::Handled();
	}
	//
	return FReply::Handled();
}

FReply SPTM_MainWidget::OnClickedTargetListItem(const FName Item) {
	auto Widget = FindTargetClashWidget(Item);
	//
	if (!IsEnabled()) {return FReply::Handled();}
	if (!Widget.IsValid()) {return FReply::Handled();}
	if (!HasSourceAndTarget()) {return FReply::Handled();}
	//
	if (SPTM_MainWidget::Modifier==ESPTM_Modifier::Alt) {
		const auto State = Widget->GetState();
		int32 I=PTM_SOURCE_ITEMS.Add(Widget);
		Widget->SetOwner(EPTM_Owner::Target);
		//
		switch (State) {
			case ESPTM_State::Transfer:
				PTM_SOURCE_ITEMS[I]->SetState(ESPTM_State::Normal); break;
			case ESPTM_State::TransferClash:
				PTM_SOURCE_ITEMS[I]->SetState(ESPTM_State::NormalClash); break;
		default: break;}
		//
		PTM_TARGET_ITEMS.Remove(Widget);
		//
		RefreshSourceListView();
		RefreshTargetListView();
		return FReply::Handled();
	}
	//
	return FReply::Handled();
}

FReply SPTM_MainWidget::OnClickedPickSelected() {
	if (!IsEnabled()) {return FReply::Handled();}
	TransferAllPickedSourcesToTarget();
	//
	return FReply::Handled();
}

FReply SPTM_MainWidget::OnClickedClearAll() {
	if (!IsEnabled()) {return FReply::Handled();}
	//
	RebuildSourceListView();
	RebuildTargetListView();
	//
	return FReply::Handled();
}

FReply SPTM_MainWidget::OnClickedApply() {
	if (!IsEnabled()) {return FReply::Handled();}
	//
	EAppReturnType::Type Action;
	const auto Title = FText::FromString("Transfer Properties");
	const auto Warning = FText::FromString(TEXT(" Copy picked properties from Source to Target Blueprint(s) ?!"));
	Action = FMessageDialog::Open(EAppMsgType::YesNo,Warning,&Title);
	//
	switch (Action) {
		case EAppReturnType::No: break;
		case EAppReturnType::Yes:
		{
			if (!HasSourceAndTarget()) {return FReply::Handled();}
			//
			FScopedSlowTask PTM_Task(TargetBatch.Num()+1,LOCTEXT("PTM_ApplyTransferProperty","Compile (Blueprint Property Transfer) ..."));
			PTM_Task.MakeDialog();
			//
			TArray<UPackage*>PackagesToSave;
			for (int32 I=0; I<PTM_TARGET_ITEMS.Num(); I++) {
				if (!PTM_TARGET_ITEMS[I].IsValid()) {continue;}
				if (PTM_TARGET_ITEMS[I]->GetState()!=ESPTM_State::Transfer) {continue;}
				if (!PTM_TARGET_ITEMS[I]->GetPropertyInfo().Property.IsValid()) {continue;}
				//
				FPropertyTransferManager::CopyBlueprintProperty(Source.Get(),Target.Get(),PTM_TARGET_ITEMS[I]->GetPropertyInfo().Property->GetFName());
			}
			//
			UBlueprint* Blueprint = FPropertyTransferManager::GetBlueprintFromObject(Target.Get());
			UPackage* Package = Blueprint->GetOutermost();
			//
			if ((Blueprint!=nullptr)&&(Package!=nullptr)) {
				FBlueprintEditorUtils::MarkBlueprintAsStructurallyModified(Blueprint);
				FKismetEditorUtilities::CompileBlueprint(Blueprint);
				PackagesToSave.Add(Package);
			}
			//
			PTM_Task.EnterProgressFrame();
			//
			for (int32 T=0; T<TargetBatch.Num(); T++) {
				if (!TargetBatch[T].IsValid()) {continue;}
				//
				for (int32 I=0; I<PTM_TARGET_ITEMS.Num(); I++) {
					if (!PTM_TARGET_ITEMS[I].IsValid()) {continue;}
					if (PTM_TARGET_ITEMS[I]->GetState()!=ESPTM_State::Transfer) {continue;}
					if (!PTM_TARGET_ITEMS[I]->GetPropertyInfo().Property.IsValid()) {continue;}
					//
					FPropertyTransferManager::CopyBlueprintProperty(Source.Get(),TargetBatch[T].Get(),PTM_TARGET_ITEMS[I]->GetPropertyInfo().Property->GetFName());
				}
				//
				Blueprint = FPropertyTransferManager::GetBlueprintFromObject(TargetBatch[T].Get());
				Package = Blueprint->GetOutermost();
				//
				if ((Blueprint!=nullptr)&&(Package!=nullptr)) {
					FBlueprintEditorUtils::MarkBlueprintAsStructurallyModified(Blueprint);
					FKismetEditorUtilities::CompileBlueprint(Blueprint);
					PackagesToSave.Add(Package);
				}
				//
				PTM_Task.EnterProgressFrame();
			}
			//
			FEditorFileUtils::PromptForCheckoutAndSave(PackagesToSave,true,true);
			RebuildSourceListView();
			RebuildTargetListView();
		}	break;
	default: break;}
	//
	return FReply::Handled();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

FReply SPTM_MainWidget::OnKeyDown(const FGeometry &MyGeometry, const FKeyEvent &InKeyEvent) {
	if (!IsEnabled()) {return FReply::Handled();}
	//
	if (InKeyEvent.GetKey()==EKeys::LeftControl||InKeyEvent.GetKey()==EKeys::RightControl) {SPTM_MainWidget::Modifier=ESPTM_Modifier::Ctrl;}
	if (InKeyEvent.GetKey()==EKeys::LeftShift||InKeyEvent.GetKey()==EKeys::RightShift) {SPTM_MainWidget::Modifier=ESPTM_Modifier::Shift;}
	if (InKeyEvent.GetKey()==EKeys::LeftAlt||InKeyEvent.GetKey()==EKeys::RightAlt) {SPTM_MainWidget::Modifier=ESPTM_Modifier::Alt;}
	//
	return FReply::Handled();
}

FReply SPTM_MainWidget::OnKeyUp(const FGeometry &MyGeometry, const FKeyEvent &InKeyEvent) {
	if (!IsEnabled()) {return FReply::Handled();}
	//
	if (InKeyEvent.GetKey()==EKeys::LeftControl||InKeyEvent.GetKey()==EKeys::RightControl) {SPTM_MainWidget::Modifier=ESPTM_Modifier::Normal;}
	if (InKeyEvent.GetKey()==EKeys::LeftShift||InKeyEvent.GetKey()==EKeys::RightShift) {SPTM_MainWidget::Modifier=ESPTM_Modifier::Normal;}
	if (InKeyEvent.GetKey()==EKeys::LeftAlt||InKeyEvent.GetKey()==EKeys::RightAlt) {SPTM_MainWidget::Modifier=ESPTM_Modifier::Normal;}
	//
	return FReply::Handled();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef LOCTEXT_NAMESPACE

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////