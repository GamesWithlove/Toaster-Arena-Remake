/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
///		Copyright 2018 (C) Bruno Xavier B. Leite
//////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "FTM_MainWidget.h"
#include "EditorStyleSet.h"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define LOCTEXT_NAMESPACE "Synaptech"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// FTM Main Widget Constructors:

SFTM_MainWidget::SFTM_MainWidget() {}
SFTM_MainWidget::~SFTM_MainWidget() {
	FTM_SOURCE_ITEMS.Empty();
	FTM_TARGET_ITEMS.Empty();
}

ESFTM_Modifier SFTM_MainWidget::Modifier = ESFTM_Modifier::Normal;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// FTM Main Widget:

void SFTM_MainWidget::Construct(const FArguments &InArgs) {
	SAssignNew(FTM_SOURCE_LIST,SScrollBox).OnUserScrolled(this,&SFTM_MainWidget::OnSourceScrolled);
	SAssignNew(FTM_TARGET_LIST,SScrollBox).OnUserScrolled(this,&SFTM_MainWidget::OnTargetScrolled);
	//
	FTM_SOURCE_Search.Empty();
	FTM_TARGET_Search.Empty();
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
				SAssignNew(FTM_Button_PICK_SOURCE,SButton)
				.IsEnabled(this,&SFTM_MainWidget::BrowserSelectedSource)
				.OnClicked(this,&SFTM_MainWidget::OnClickedSelectSource)
				.ButtonStyle(FAppStyle::Get(),"FlatButton.Default")
				.ForegroundColor(FSlateColor::UseForeground())
				.VAlign(VAlign_Center).HAlign(HAlign_Fill)
				[
					SNew(STextBlock)
					.Justification(ETextJustify::Center)
					.Font(FAppStyle::GetFontStyle(TEXT("BoldFont")))
					.Text(LOCTEXT("FTM_Button_PICK_SOURCE","SELECTED as SOURCE"))
				]
			]
			+SHorizontalBox::Slot().AutoWidth()
			[
				SAssignNew(FTM_Button_SWAP_PICKS,SButton)
				.OnClicked(this,&SFTM_MainWidget::OnClickedSwapSelection)
				.ButtonStyle(FAppStyle::Get(),"FlatButton.Default")
				.IsEnabled(this,&SFTM_MainWidget::HasSourceAndTarget)
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
						.ToolTipText(LOCTEXT("FTM_Button_SWAP_PICKS_Tooltip","Swap Source to Target."))
					]
					+SHorizontalBox::Slot().AutoWidth()
					[
						SNew(STextBlock)
						.Text(FText::FromString(FString(TEXT("\xf061"))))
						.Font(FAppStyle::Get().GetFontStyle("FontAwesome.11"))
						.TextStyle(FAppStyle::Get(),"ContentBrowser.TopBar.Font")
						.ToolTipText(LOCTEXT("FTM_Button_SWAP_PICKS_Tooltip","Swap Source to Target."))
					]
				]
			]
			+SHorizontalBox::Slot()
			[
				SAssignNew(FTM_Button_PICK_TARGET,SButton)
				.IsEnabled(this,&SFTM_MainWidget::BrowserSelectedTarget)
				.OnClicked(this,&SFTM_MainWidget::OnClickedSelectTarget)
				.ButtonStyle(FAppStyle::Get(),"FlatButton.Default")
				.ForegroundColor(FSlateColor::UseForeground())
				.VAlign(VAlign_Center).HAlign(HAlign_Fill)
				[
					SNew(STextBlock)
					.Justification(ETextJustify::Center)
					.Font(FAppStyle::GetFontStyle(TEXT("BoldFont")))
					.Text(LOCTEXT("FTM_Button_PICK_TARGET","SELECTED as TARGET"))
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
				.Text(this,&SFTM_MainWidget::GetSourceName)
				.Font(FAppStyle::GetFontStyle(TEXT("BoldFont")))
			]
			+SHorizontalBox::Slot().Padding(0,2,0,2)
			[
				SNew(STextBlock)
				.Justification(ETextJustify::Center)
				.Text(this,&SFTM_MainWidget::GetTargetName)
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
						.OnTextChanged(this,&SFTM_MainWidget::OnSourceSearchChanged)
					]
					+SVerticalBox::Slot().Padding(0,2,0,2)
					.VAlign(VAlign_Fill).HAlign(HAlign_Fill)
					[
						FTM_SOURCE_LIST.ToSharedRef()
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
						.OnTextChanged(this,&SFTM_MainWidget::OnSourceSearchChanged)
					]
					+SVerticalBox::Slot().Padding(0,2,0,2)
					.VAlign(VAlign_Fill).HAlign(HAlign_Fill)
					[
						FTM_TARGET_LIST.ToSharedRef()
					]
				]
			]
		]
		+SVerticalBox::Slot()
		.AutoHeight().Padding(0,2,0,2)
		[
			SAssignNew(FTM_Button_PICK_ITEM,SButton)
			.OnClicked(this,&SFTM_MainWidget::OnClickedPickSelected)
			.ButtonStyle(FAppStyle::Get(),"FlatButton.Default")
			.IsEnabled(this,&SFTM_MainWidget::HasSourcePick)
			.ForegroundColor(FSlateColor::UseForeground())
			.VAlign(VAlign_Center).HAlign(HAlign_Fill)
			[
				SNew(STextBlock)
				.Justification(ETextJustify::Center)
				.Font(FAppStyle::GetFontStyle(TEXT("BoldFont")))
				.Text(LOCTEXT("FTM_Button_PICK_ITEM","PICK SELECTED"))
			]
		]
		+SVerticalBox::Slot()
		.AutoHeight().Padding(0,2,0,0)
		[
			SNew(SHorizontalBox)
			+SHorizontalBox::Slot()
			[
				SAssignNew(FTM_Button_CLEAR_ALL,SButton)
				.IsEnabled(this,&SFTM_MainWidget::HasSourceOrTargetPick)
				.ButtonStyle(FAppStyle::Get(),"FlatButton.Default")
				.OnClicked(this,&SFTM_MainWidget::OnClickedClearAll)
				.ForegroundColor(FSlateColor::UseForeground())
				.VAlign(VAlign_Center).HAlign(HAlign_Fill)
				[
					SNew(STextBlock)
					.Justification(ETextJustify::Center)
					.Text(LOCTEXT("FTM_Button_CLEAR_ALL","CLEAR ALL"))
					.Font(FAppStyle::GetFontStyle(TEXT("BoldFont")))
				]
			]
			+SHorizontalBox::Slot()
			[
				SAssignNew(FTM_Button_APPLY,SButton)
				.ButtonStyle(FAppStyle::Get(),"FlatButton.Default")
				.OnClicked(this,&SFTM_MainWidget::OnClickedApply)
				.IsEnabled(this,&SFTM_MainWidget::HasTransfers)
				.ForegroundColor(FSlateColor::UseForeground())
				.VAlign(VAlign_Center).HAlign(HAlign_Fill)
				[
					SNew(STextBlock)
					.Justification(ETextJustify::Center)
					.Text(LOCTEXT("FTM_Button_APPLY","APPLY"))
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

bool SFTM_MainWidget::IsInteractable() const {
	return IsEnabled();
}

bool SFTM_MainWidget::SupportsKeyboardFocus() const {
	return true;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void SFTM_MainWidget::RebuildSourceListView() {
	FTM_SOURCE_LIST->ClearChildren();
	FTM_SOURCE_ITEMS.Empty();
	//
	if (!Source.IsValid()) {return;}
	TArray<FFTM_FunctionInfo>SourceInfo = FPropertyTransferManager::CollectBlueprintFunctionInfo(Source.Get());
	//
	if (Target.IsValid()) {
		TArray<FFTM_FunctionInfo>TargetInfo = FPropertyTransferManager::CollectBlueprintFunctionInfo(Target.Get());
		for (FFTM_FunctionInfo &Item : SourceInfo) {
			for (FFTM_FunctionInfo &Other : TargetInfo) {
				if (Item.Graph->GetFName()==Other.Graph->GetFName()) {Item.GraphClash=true;}
				if (Item.GraphClash) {Other.GraphClash=true;}
			}
		}
	}
	//
	for (int32 I=0; I<SourceInfo.Num(); I++) {FTM_SOURCE_ITEMS.Add(TSharedPtr<SFTM_ListButton>(nullptr));}
	for (int32 I=0; I<FTM_SOURCE_ITEMS.Num(); I++) {
		ESFTM_State State = ESFTM_State::Normal;
		const FName Name = SourceInfo[I].Graph->GetFName();
		if (SourceInfo[I].GraphClash) {State=ESFTM_State::NormalClash;}
		//
		SAssignNew(FTM_SOURCE_ITEMS[I],SFTM_ListButton)
		.OnClicked(this,&SFTM_MainWidget::OnClickedSourceListItem,Name)
		.Owner(EPTM_Owner::Source)
		.FInfo(SourceInfo[I])
		.PPState(State)
		.Name(Name);
	}
	//
	for (int32 I=0; I<FTM_SOURCE_ITEMS.Num(); I++) {
		FTM_SOURCE_LIST->AddSlot().VAlign(VAlign_Top).HAlign(HAlign_Fill)
		[
			FTM_SOURCE_ITEMS[I].ToSharedRef()
		];
	}
	//
	FTM_SOURCE_LIST->Invalidate(EInvalidateWidget::Layout);
}

void SFTM_MainWidget::RebuildTargetListView() {
	FTM_TARGET_LIST->ClearChildren();
	FTM_TARGET_ITEMS.Empty();
	//
	if (!Target.IsValid()) {return;}
	TArray<FFTM_FunctionInfo>TargetInfo = FPropertyTransferManager::CollectBlueprintFunctionInfo(Target.Get());
	//
	if (Source.IsValid()) {
		TArray<FFTM_FunctionInfo>SourceInfo = FPropertyTransferManager::CollectBlueprintFunctionInfo(Source.Get());
		for (FFTM_FunctionInfo &Item : TargetInfo) {
			for (FFTM_FunctionInfo &Other : SourceInfo) {
				if (Item.Graph->GetFName()==Other.Graph->GetFName()) {Item.GraphClash=true;}
				if (Item.GraphClash) {Other.GraphClash=true;}
			}
		}
	}
	//
	for (int32 I=0; I<TargetInfo.Num(); I++) {FTM_TARGET_ITEMS.Add(TSharedPtr<SFTM_ListButton>(nullptr));}
	for (int32 I=0; I<FTM_TARGET_ITEMS.Num(); I++) {
		ESFTM_State State = ESFTM_State::Normal;
		const FName Name = TargetInfo[I].Graph->GetFName();
		if (TargetInfo[I].GraphClash) {State=ESFTM_State::NormalClash;}
		//
		SAssignNew(FTM_TARGET_ITEMS[I],SFTM_ListButton)
		.OnClicked(this,&SFTM_MainWidget::OnClickedTargetListItem,Name)
		.Owner(EPTM_Owner::Target)
		.FInfo(TargetInfo[I])
		.PPState(State)
		.Name(Name);
	}
	//
	for (int32 I=0; I<FTM_TARGET_ITEMS.Num(); I++) {
		FTM_TARGET_LIST->AddSlot().VAlign(VAlign_Top).HAlign(HAlign_Fill)
		[
			FTM_TARGET_ITEMS[I].ToSharedRef()
		];
	}
	//
	FTM_TARGET_LIST->Invalidate(EInvalidateWidget::Layout);
}

void SFTM_MainWidget::RefreshSourceListView() {
	FTM_SOURCE_LIST->ClearChildren();
	//
	if (FTM_SOURCE_Search.Len()<=2) {
		for (int32 I=0; I<FTM_SOURCE_ITEMS.Num(); I++) {
			const auto INFO = FTM_SOURCE_ITEMS[I]->GetFunctionInfo();
			ESFTM_State State = FTM_SOURCE_ITEMS[I]->GetState();
			const FName Name = FTM_SOURCE_ITEMS[I]->GetName();
			//
			FTM_SOURCE_LIST->AddSlot()
			.VAlign(VAlign_Top).HAlign(HAlign_Fill)
			[
				SAssignNew(FTM_SOURCE_ITEMS[I],SFTM_ListButton)
				.OnClicked(this,&SFTM_MainWidget::OnClickedSourceListItem,Name)
				.Owner(EPTM_Owner::Source)
				.PPState(State)
				.FInfo(INFO)
				.Name(Name)
			];
		}
	} else {
		for (int32 I=0; I<FTM_SOURCE_ITEMS.Num(); I++) {
			if (!FTM_SOURCE_ITEMS[I]->GetName().ToString().Contains(FTM_SOURCE_Search)) {continue;}
			const auto INFO = FTM_SOURCE_ITEMS[I]->GetFunctionInfo();
			ESFTM_State State = FTM_SOURCE_ITEMS[I]->GetState();
			const FName Name = FTM_SOURCE_ITEMS[I]->GetName();
			//
			FTM_SOURCE_LIST->AddSlot()
			.VAlign(VAlign_Top).HAlign(HAlign_Fill)
			[
				SAssignNew(FTM_SOURCE_ITEMS[I],SFTM_ListButton)
				.OnClicked(this,&SFTM_MainWidget::OnClickedSourceListItem,Name)
				.Owner(EPTM_Owner::Source)
				.PPState(State)
				.FInfo(INFO)
				.Name(Name)
			];
		}
	}
}

void SFTM_MainWidget::RefreshTargetListView() {
	FTM_TARGET_LIST->ClearChildren();
	//
	if (FTM_TARGET_Search.Len()<=2) {
		for (int32 I=0; I<FTM_TARGET_ITEMS.Num(); I++) {
			const auto INFO = FTM_TARGET_ITEMS[I]->GetFunctionInfo();
			ESFTM_State State = FTM_TARGET_ITEMS[I]->GetState();
			const FName Name = FTM_TARGET_ITEMS[I]->GetName();
			//
			FTM_TARGET_LIST->AddSlot()
			.VAlign(VAlign_Top).HAlign(HAlign_Fill)
			[
				SAssignNew(FTM_TARGET_ITEMS[I],SFTM_ListButton)
				.OnClicked(this,&SFTM_MainWidget::OnClickedTargetListItem,Name)
				.Owner(EPTM_Owner::Target)
				.PPState(State)
				.FInfo(INFO)
				.Name(Name)
			];
		}
	} else {
		for (int32 I=0; I<FTM_TARGET_ITEMS.Num(); I++) {
			if (!FTM_TARGET_ITEMS[I]->GetName().ToString().Contains(FTM_TARGET_Search)) {continue;}
			const auto INFO = FTM_TARGET_ITEMS[I]->GetFunctionInfo();
			ESFTM_State State = FTM_TARGET_ITEMS[I]->GetState();
			const FName Name = FTM_TARGET_ITEMS[I]->GetName();
			//
			FTM_TARGET_LIST->AddSlot()
			.VAlign(VAlign_Top).HAlign(HAlign_Fill)
			[
				SAssignNew(FTM_TARGET_ITEMS[I],SFTM_ListButton)
				.OnClicked(this,&SFTM_MainWidget::OnClickedTargetListItem,Name)
				.Owner(EPTM_Owner::Target)
				.PPState(State)
				.FInfo(INFO)
				.Name(Name)
			];
		}
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool SFTM_MainWidget::BrowserSelectedSource() const {
	UObject* Asset = nullptr;
	//
	return (
		FPropertyTransferManager::HasBlueprintSelectedOnBrowser(Asset)
		&& (Asset != nullptr) && (Asset != Source.Get())
	);
}

bool SFTM_MainWidget::BrowserSelectedTarget() const {
	UObject* Asset = nullptr;
	//
	return (
		FPropertyTransferManager::HasBlueprintSelectedOnBrowser(Asset)
		&& (Asset != Target.Get())
	);
}

bool SFTM_MainWidget::HasSource() const {
	return Source.IsValid();
}

bool SFTM_MainWidget::HasTarget() const {
	return Target.IsValid();
}

bool SFTM_MainWidget::HasSourceAndTarget() const {
	return (Source.IsValid() && Target.IsValid());
}

bool SFTM_MainWidget::HasSourceOrTarget() const {
	return (Source.IsValid() || Target.IsValid());
}

bool SFTM_MainWidget::HasSourcePick() const {
	return (FindFirstPickedSource() != INDEX_NONE);
}

bool SFTM_MainWidget::HasTargetPick() const {
	return (FindFirstPickedTarget() != INDEX_NONE);
}

bool SFTM_MainWidget::HasSourceOrTargetPick() const {
	return (HasSourcePick() || HasTargetPick() || HasTransfers());
}

bool SFTM_MainWidget::HasTransfers() const {
	return (FindFirstTransfer() != INDEX_NONE);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

FText SFTM_MainWidget::GetSourceName() const {
	if (!Source.IsValid()) {return FText::FromString(TEXT("..."));}
	//
	FString SN = Source->GetName().Replace(TEXT("Default__"),TEXT("(Blueprint)  "));
	SN.RemoveFromEnd(TEXT("_C"));
	//
	return FText::FromString(*SN);
}

FText SFTM_MainWidget::GetTargetName() const {
	if (TargetBatch.Num()>0) {return FText::FromString(TEXT("* multiple targets *"));}
	if (!Target.IsValid()) {return FText::FromString(TEXT("..."));}
	//
	FString SN = Target->GetName().Replace(TEXT("Default__"),TEXT("(Blueprint)  "));
	SN.RemoveFromEnd(TEXT("_C"));
	//
	return FText::FromString(*SN);
}

int32 SFTM_MainWidget::FindFirstPickedSource() const {
	if (!HasSource()) {return INDEX_NONE;}
	//
	for (int32 I=0; I<FTM_SOURCE_ITEMS.Num(); I++) {
		if (!FTM_SOURCE_ITEMS[I].IsValid()) {continue;}
		if (FTM_SOURCE_ITEMS[I]->GetState()==ESFTM_State::Picked||FTM_SOURCE_ITEMS[I]->GetState()==ESFTM_State::PickedClash) {return I;}
	}
	//
	return INDEX_NONE;
}

int32 SFTM_MainWidget::FindFirstPickedTarget() const {
	if (!HasTarget()) {return INDEX_NONE;}
	//
	for (int32 I=0; I<FTM_TARGET_ITEMS.Num(); I++) {
		if (!FTM_TARGET_ITEMS[I].IsValid()) {continue;}
		if (FTM_TARGET_ITEMS[I]->GetState()==ESFTM_State::Picked||FTM_TARGET_ITEMS[I]->GetState()==ESFTM_State::PickedClash) {return I;}
	}
	//
	return INDEX_NONE;
}

int32 SFTM_MainWidget::FindLastPickedSource() const {
	if (!HasSource()) {return INDEX_NONE;}
	//
	for (int32 I=FTM_SOURCE_ITEMS.Num()-1; I>=0; I--) {
		if (!FTM_SOURCE_ITEMS[I].IsValid()) {continue;}
		if (FTM_SOURCE_ITEMS[I]->GetState()==ESFTM_State::Picked||FTM_SOURCE_ITEMS[I]->GetState()==ESFTM_State::PickedClash) {return I;}
	}
	//
	return INDEX_NONE;
}

int32 SFTM_MainWidget::FindLastPickedTarget() const {
	if (!HasTarget()) {return INDEX_NONE;}
	//
	for (int32 I=FTM_TARGET_ITEMS.Num()-1; I>=0; I--) {
		if (!FTM_TARGET_ITEMS[I].IsValid()) {continue;}
		if (FTM_TARGET_ITEMS[I]->GetState()==ESFTM_State::Picked||FTM_TARGET_ITEMS[I]->GetState()==ESFTM_State::PickedClash) {return I;}
	}
	//
	return INDEX_NONE;
}

int32 SFTM_MainWidget::FindFirstTransfer() const {
	if (!HasTarget()) {return INDEX_NONE;}
	//
	for (int32 I=0; I<FTM_TARGET_ITEMS.Num(); I++) {
		if (!FTM_TARGET_ITEMS[I].IsValid()) {continue;}
		if (FTM_TARGET_ITEMS[I]->GetState()==ESFTM_State::Transfer||FTM_TARGET_ITEMS[I]->GetState()==ESFTM_State::TransferClash) {return I;}
	}
	//
	return INDEX_NONE;
}

TSharedPtr<SFTM_ListButton> SFTM_MainWidget::FindSourceWidget(const FName &Name) {
	if (!HasSource()) {return TSharedPtr<SFTM_ListButton>(nullptr);}
	//
	for (int32 I=0; I<FTM_SOURCE_ITEMS.Num(); I++) {
		if (!FTM_SOURCE_ITEMS[I].IsValid()) {continue;}
		if (FTM_SOURCE_ITEMS[I]->GetName()==Name) {return FTM_SOURCE_ITEMS[I];}
	}
	//
	return TSharedPtr<SFTM_ListButton>(nullptr);
}

TSharedPtr<SFTM_ListButton> SFTM_MainWidget::FindTargetWidget(const FName &Name) {
	if (!HasTarget()) {return TSharedPtr<SFTM_ListButton>(nullptr);}
	//
	for (int32 I=0; I<FTM_TARGET_ITEMS.Num(); I++) {
		if (!FTM_TARGET_ITEMS[I].IsValid()) {continue;}
		if (FTM_TARGET_ITEMS[I]->GetName()==Name) {return FTM_TARGET_ITEMS[I];}
	}
	//
	return TSharedPtr<SFTM_ListButton>(nullptr);
}

TSharedPtr<SFTM_ListButton> SFTM_MainWidget::FindTargetClashWidget(const FName &Name) {
	if (!HasTarget()) {return TSharedPtr<SFTM_ListButton>(nullptr);}
	//
	for (int32 I=0; I<FTM_TARGET_ITEMS.Num(); I++) {
		if (!FTM_TARGET_ITEMS[I].IsValid()) {continue;}
		if ((FTM_TARGET_ITEMS[I]->GetState()!=ESFTM_State::Transfer)&&(FTM_TARGET_ITEMS[I]->GetState()!=ESFTM_State::TransferClash)) {continue;}
		//
		if (FTM_TARGET_ITEMS[I]->GetName()==Name) {return FTM_TARGET_ITEMS[I];}
	}
	//
	return TSharedPtr<SFTM_ListButton>(nullptr);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void SFTM_MainWidget::TransferPickedSourceToTarget(TSharedRef<SFTM_ListButton>Widget) {
	if (!HasTarget()) {return;}
	//
	const ESFTM_State State = Widget->GetState();
	if ((State!=ESFTM_State::Picked)&&(State!=ESFTM_State::PickedClash)) {return;}
	//
	Widget->SetOwner(EPTM_Owner::Target);
	int32 I=FTM_TARGET_ITEMS.Add(Widget);
	//
	switch (State) {
		case ESFTM_State::Picked:
			FTM_TARGET_ITEMS[I]->SetState(ESFTM_State::Transfer); break;
		case ESFTM_State::PickedClash:
			FTM_TARGET_ITEMS[I]->SetState(ESFTM_State::TransferClash); break;
	default: break;}
}

void SFTM_MainWidget::TransferPickedTargetToSource(TSharedRef<SFTM_ListButton>Widget) {
	if (!HasSource()) {return;}
	//
	const ESFTM_State State = Widget->GetState();
	if ((State!=ESFTM_State::Transfer)&&(State!=ESFTM_State::TransferClash)) {return;}
	//
	Widget->SetOwner(EPTM_Owner::Source);
	int32 I=FTM_SOURCE_ITEMS.Add(Widget);
	//
	switch (State) {
		case ESFTM_State::Transfer:
			FTM_SOURCE_ITEMS[I]->SetState(ESFTM_State::Normal); break;
		case ESFTM_State::TransferClash:
			FTM_SOURCE_ITEMS[I]->SetState(ESFTM_State::NormalClash); break;
	default: break;}
}

void SFTM_MainWidget::TransferAllPickedSourcesToTarget() {
	if (!HasTarget()) {return;}
	//
	TArray<TSharedPtr<SFTM_ListButton>>COPY;
	for (auto Widget : FTM_SOURCE_ITEMS) {
		if (!Widget.IsValid()) {continue;}
		TransferPickedSourceToTarget(Widget.ToSharedRef());
	}
	//
	COPY = FTM_SOURCE_ITEMS;
	for (auto Widget : FTM_SOURCE_ITEMS) {
		if (!Widget.IsValid()) {COPY.Remove(Widget);}
		if (Widget->GetOwner()==EPTM_Owner::Target) {COPY.Remove(Widget);}
	} FTM_SOURCE_ITEMS = COPY;
	//
	RefreshTargetListView();
	RefreshSourceListView();
}

void SFTM_MainWidget::TransferAllPickedTargetsToSource() {
	if (!HasTarget()) {return;}
	//
	TArray<TSharedPtr<SFTM_ListButton>>COPY;
	for (auto Widget : FTM_TARGET_ITEMS) {
		if (!Widget.IsValid()) {continue;}
		TransferPickedTargetToSource(Widget.ToSharedRef());
	}
	//
	COPY = FTM_TARGET_ITEMS;
	for (auto Widget : FTM_TARGET_ITEMS) {
		if (!Widget.IsValid()) {COPY.Remove(Widget);}
		if (Widget->GetOwner()==EPTM_Owner::Source) {COPY.Remove(Widget);}
	} FTM_TARGET_ITEMS = COPY;
	//
	RefreshSourceListView();
	RefreshTargetListView();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void SFTM_MainWidget::OnSourceScrolled(float Offset) {}
void SFTM_MainWidget::OnTargetScrolled(float Offset) {}

void SFTM_MainWidget::OnSourceSearchChanged(const FText &Filter) {
	FTM_SOURCE_Search = Filter.ToString();
	//
	RefreshSourceListView();
}

void SFTM_MainWidget::OnTargetSearchChanged(const FText &Filter) {
	FTM_TARGET_Search = Filter.ToString();
	//
	RefreshTargetListView();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

FReply SFTM_MainWidget::OnClickedSelectSource() {
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

FReply SFTM_MainWidget::OnClickedSelectTarget() {
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

FReply SFTM_MainWidget::OnClickedSwapSelection() {
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

FReply SFTM_MainWidget::OnClickedSourceListItem(const FName Item) {
	auto Widget = FindSourceWidget(Item);
	//
	if (!IsEnabled()) {return FReply::Handled();}
	if (!Widget.IsValid()) {return FReply::Handled();}
	if (!HasSourceAndTarget()) {return FReply::Handled();}
	//
	if (SFTM_MainWidget::Modifier==ESFTM_Modifier::Normal) {
		const auto State = Widget->GetState();
		switch (State) {
			case ESFTM_State::Normal:
			{
				Widget->SetState(ESFTM_State::Picked);
				return FReply::Handled();
			} break;
			case ESFTM_State::NormalClash:
			{
				Widget->SetState(ESFTM_State::PickedClash);
				return FReply::Handled();
			} break;
		default: break;}
	}
	//
	if (SFTM_MainWidget::Modifier==ESFTM_Modifier::Shift) {
		int32 FI = FindFirstPickedSource();
		int32 ID = FTM_SOURCE_ITEMS.IndexOfByKey(Widget);
		if (FI==INDEX_NONE) {FI=ID;}
		//
		if (ID>=FI) {
			for (int32 X=FI; X<=ID; X++) {
				const auto State = FTM_SOURCE_ITEMS[X]->GetState();
				switch (State) {
					case ESFTM_State::Normal:
						FTM_SOURCE_ITEMS[X]->SetState(ESFTM_State::Picked); break;
					case ESFTM_State::NormalClash:
						FTM_SOURCE_ITEMS[X]->SetState(ESFTM_State::PickedClash); break;
				default: break;}
			}
		} else {
			for (int32 X=ID; X<=FI; X++) {
				const auto State = FTM_SOURCE_ITEMS[X]->GetState();
					switch (State) {
					case ESFTM_State::Normal:
						FTM_SOURCE_ITEMS[X]->SetState(ESFTM_State::Picked); break;
					case ESFTM_State::NormalClash:
						FTM_SOURCE_ITEMS[X]->SetState(ESFTM_State::PickedClash); break;
				default: break;}
			}
		}
		//
		return FReply::Handled();
	}
	//
	if (SFTM_MainWidget::Modifier==ESFTM_Modifier::Ctrl) {
		const auto State = Widget->GetState();
		switch (State) {
			case ESFTM_State::Picked:
			{
				Widget->SetState(ESFTM_State::Normal);
				return FReply::Handled();
			} break;
			case ESFTM_State::PickedClash:
			{
				Widget->SetState(ESFTM_State::NormalClash);
				return FReply::Handled();
			} break;
		default: break;}
	}
	//
	if (SFTM_MainWidget::Modifier==ESFTM_Modifier::Alt) {
		const auto State = Widget->GetState();
		int32 I=FTM_TARGET_ITEMS.Add(Widget);
		Widget->SetOwner(EPTM_Owner::Target);
		//
		switch (State) {
			case ESFTM_State::Normal:
			case ESFTM_State::Picked:
				FTM_TARGET_ITEMS[I]->SetState(ESFTM_State::Transfer); break;
			case ESFTM_State::NormalClash:
			case ESFTM_State::PickedClash:
				FTM_TARGET_ITEMS[I]->SetState(ESFTM_State::TransferClash); break;
		default: break;}
		//
		FTM_SOURCE_ITEMS.Remove(Widget);
		//
		RefreshTargetListView();
		RefreshSourceListView();
		return FReply::Handled();
	}
	//
	return FReply::Handled();
}

FReply SFTM_MainWidget::OnClickedTargetListItem(const FName Item) {
	auto Widget = FindTargetClashWidget(Item);
	//
	if (!IsEnabled()) {return FReply::Handled();}
	if (!Widget.IsValid()) {return FReply::Handled();}
	if (!HasSourceAndTarget()) {return FReply::Handled();}
	//
	if (SFTM_MainWidget::Modifier==ESFTM_Modifier::Alt) {
		const auto State = Widget->GetState();
		int32 I=FTM_SOURCE_ITEMS.Add(Widget);
		Widget->SetOwner(EPTM_Owner::Target);
		//
		switch (State) {
			case ESFTM_State::Transfer:
				FTM_SOURCE_ITEMS[I]->SetState(ESFTM_State::Normal); break;
			case ESFTM_State::TransferClash:
				FTM_SOURCE_ITEMS[I]->SetState(ESFTM_State::NormalClash); break;
		default: break;}
		//
		FTM_TARGET_ITEMS.Remove(Widget);
		//
		RefreshSourceListView();
		RefreshTargetListView();
		return FReply::Handled();
	}
	//
	return FReply::Handled();
}

FReply SFTM_MainWidget::OnClickedPickSelected() {
	if (!IsEnabled()) {return FReply::Handled();}
	TransferAllPickedSourcesToTarget();
	//
	return FReply::Handled();
}

FReply SFTM_MainWidget::OnClickedClearAll() {
	if (!IsEnabled()) {return FReply::Handled();}
	//
	RebuildSourceListView();
	RebuildTargetListView();
	//
	return FReply::Handled();
}

FReply SFTM_MainWidget::OnClickedApply() {
	if (!IsEnabled()) {return FReply::Handled();}
	//
	EAppReturnType::Type Action;
	const auto Title = FText::FromString("Transfer Functions");
	const auto Warning = FText::FromString(TEXT(" Copy picked functions from Source to Target Blueprint(s) ?!"));
	Action = FMessageDialog::Open(EAppMsgType::YesNo,Warning,&Title);
	//
	switch (Action) {
		case EAppReturnType::No: break;
		case EAppReturnType::Yes:
		{
			if (!HasSourceAndTarget()) {return FReply::Handled();}
			//
			FScopedSlowTask FTM_Task(TargetBatch.Num()+1,LOCTEXT("FTM_ApplyTransferFunction","Compile (Blueprint Function Transfer) ..."));
			FTM_Task.MakeDialog();
			//
			TArray<UPackage*>PackagesToSave;
			for (int32 I=0; I<FTM_TARGET_ITEMS.Num(); I++) {
				if (!FTM_TARGET_ITEMS[I].IsValid()) {continue;}
				if (FTM_TARGET_ITEMS[I]->GetState()!=ESFTM_State::Transfer) {continue;}
				if (!FTM_TARGET_ITEMS[I]->GetFunctionInfo().Graph.IsValid()) {continue;}
				//
				FPropertyTransferManager::CopyBlueprintFunction(Source.Get(),Target.Get(),FTM_TARGET_ITEMS[I]->GetFunctionInfo().Graph->GetFName());
				FPropertyTransferManager::CopyBlueprintMacro(Source.Get(),Target.Get(),FTM_TARGET_ITEMS[I]->GetFunctionInfo().Graph->GetFName());
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
			FTM_Task.EnterProgressFrame();
			//
			for (int32 T=0; T<TargetBatch.Num(); T++) {
				if (!TargetBatch[T].IsValid()) {continue;}
				//
				for (int32 I=0; I<FTM_TARGET_ITEMS.Num(); I++) {
					if (!FTM_TARGET_ITEMS[I].IsValid()) {continue;}
					if (FTM_TARGET_ITEMS[I]->GetState()!=ESFTM_State::Transfer) {continue;}
					if (!FTM_TARGET_ITEMS[I]->GetFunctionInfo().Graph.IsValid()) {continue;}
					//
					FPropertyTransferManager::CopyBlueprintFunction(Source.Get(),TargetBatch[T].Get(),FTM_TARGET_ITEMS[I]->GetFunctionInfo().Graph->GetFName());
					FPropertyTransferManager::CopyBlueprintMacro(Source.Get(),TargetBatch[T].Get(),FTM_TARGET_ITEMS[I]->GetFunctionInfo().Graph->GetFName());
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
				FTM_Task.EnterProgressFrame();
			}
			//
			RebuildSourceListView();
			RebuildTargetListView();
			//
			FEditorFileUtils::PromptForCheckoutAndSave(PackagesToSave,true,true);
		}	break;
	default: break;}
	//
	return FReply::Handled();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

FReply SFTM_MainWidget::OnKeyDown(const FGeometry &MyGeometry, const FKeyEvent &InKeyEvent) {
	if (!IsEnabled()) {return FReply::Handled();}
	//
	if (InKeyEvent.GetKey()==EKeys::LeftControl||InKeyEvent.GetKey()==EKeys::RightControl) {SFTM_MainWidget::Modifier=ESFTM_Modifier::Ctrl;}
	if (InKeyEvent.GetKey()==EKeys::LeftShift||InKeyEvent.GetKey()==EKeys::RightShift) {SFTM_MainWidget::Modifier=ESFTM_Modifier::Shift;}
	if (InKeyEvent.GetKey()==EKeys::LeftAlt||InKeyEvent.GetKey()==EKeys::RightAlt) {SFTM_MainWidget::Modifier=ESFTM_Modifier::Alt;}
	//
	return FReply::Handled();
}

FReply SFTM_MainWidget::OnKeyUp(const FGeometry &MyGeometry, const FKeyEvent &InKeyEvent) {
	if (!IsEnabled()) {return FReply::Handled();}
	//
	if (InKeyEvent.GetKey()==EKeys::LeftControl||InKeyEvent.GetKey()==EKeys::RightControl) {SFTM_MainWidget::Modifier=ESFTM_Modifier::Normal;}
	if (InKeyEvent.GetKey()==EKeys::LeftShift||InKeyEvent.GetKey()==EKeys::RightShift) {SFTM_MainWidget::Modifier=ESFTM_Modifier::Normal;}
	if (InKeyEvent.GetKey()==EKeys::LeftAlt||InKeyEvent.GetKey()==EKeys::RightAlt) {SFTM_MainWidget::Modifier=ESFTM_Modifier::Normal;}
	//
	return FReply::Handled();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef LOCTEXT_NAMESPACE

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////