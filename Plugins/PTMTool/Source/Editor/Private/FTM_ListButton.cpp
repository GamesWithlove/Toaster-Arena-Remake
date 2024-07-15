/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
///		Copyright 2018 (C) Bruno Xavier B. Leite
//////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "FTM_ListButton.h"
#include "EditorStyleSet.h"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define LOCTEXT_NAMESPACE "Synaptech"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// PTM List Item Widget Constructors:

SFTM_ListButton::SFTM_ListButton(){}
SFTM_ListButton::~SFTM_ListButton(){}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// PTM List Item Widget:

void SFTM_ListButton::Construct(const FArguments &InArgs) {
	Name = InArgs._Name.Get();
	Owner = InArgs._Owner.Get();
	FInfo = InArgs._FInfo.Get();
	PPState = InArgs._PPState.Get();
	//
	OnClicked = InArgs._OnClicked;
	//
	PickedStyle = &FAppStyle::Get().GetWidgetStyle<FButtonStyle>("FlatButton.Info");
	ErrorStyle = &FAppStyle::Get().GetWidgetStyle<FButtonStyle>("FlatButton.Danger");
	SafeStyle = &FAppStyle::Get().GetWidgetStyle<FButtonStyle>("FlatButton.DarkGrey");
	ClashStyle = &FAppStyle::Get().GetWidgetStyle<FButtonStyle>("FlatButton.Warning");
	TransferStyle = &FAppStyle::Get().GetWidgetStyle<FButtonStyle>("FlatButton.Success");
	//
	//
	SAssignNew(FTM_Button,SBorder)
	.VAlign(VAlign_Center).HAlign(HAlign_Fill).Padding(2)
	[
		SNew(STextBlock).Margin(FMargin(2))
		.Justification(ETextJustify::Center)
		.Text(this,&SFTM_ListButton::GetButtonCaption)
	];
	//
	SetButtonStyle();
	//
	//
	if (Owner==EPTM_Owner::Source) {
		ChildSlot.HAlign(HAlign_Fill).VAlign(VAlign_Fill)
		[
			SNew(SHorizontalBox)
			+SHorizontalBox::Slot()
			.VAlign(VAlign_Center).Padding(4,0,0,0)
			[
				FTM_Button.ToSharedRef()
			]
			+SHorizontalBox::Slot()
			.AutoWidth().VAlign(VAlign_Center).Padding(4,0,4,0)
			[
				SNew(SImage)
				.Image(this,&SFTM_ListButton::GetTypeBrush)
				.ColorAndOpacity(this,&SFTM_ListButton::GetTypeColor)
				.ToolTipText(this,&SFTM_ListButton::GetButtonTooltip)
			]
		];
	} else {
		ChildSlot.HAlign(HAlign_Fill).VAlign(VAlign_Fill)
		[
			SNew(SHorizontalBox)
			+SHorizontalBox::Slot()
			.AutoWidth().VAlign(VAlign_Center).Padding(4,0,4,0)
			[
				SNew(SImage)
				.Image(this,&SFTM_ListButton::GetTypeBrush)
				.ColorAndOpacity(this,&SFTM_ListButton::GetTypeColor)
				.ToolTipText(this,&SFTM_ListButton::GetButtonTooltip)
			]
			+SHorizontalBox::Slot()
			.VAlign(VAlign_Center).Padding(0,0,4,0)
			[
				FTM_Button.ToSharedRef()
			]
		];
	}
}

void SFTM_ListButton::Tick(const FGeometry &AllottedGeometry, const double InCurrentTime, const float InDeltaTime) {
	SetButtonStyle();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool SFTM_ListButton::IsInteractable() const {
	return IsEnabled();
}

bool SFTM_ListButton::SupportsKeyboardFocus() const {
	return false;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void SFTM_ListButton::OnMouseLeave(const FPointerEvent &MouseEvent) {
	SWidget::OnMouseLeave(MouseEvent);
}

void SFTM_ListButton::OnMouseEnter(const FGeometry &MyGeometry, const FPointerEvent &MouseEvent) {}

void SFTM_ListButton::OnMouseCaptureLost(const FCaptureLostEvent &CaptureLostEvent) {}

FReply SFTM_ListButton::OnMouseButtonDown(const FGeometry &MyGeometry, const FPointerEvent &MouseEvent) {
	FReply Reply = FReply::Unhandled();
	//
	if (OnClicked.IsBound()) {
		Reply = OnClicked.Execute();
	} else {
		switch (PPState) {
			case ESFTM_State::Normal:
				PPState = ESFTM_State::Picked; break;
			case ESFTM_State::Picked:
				PPState = ESFTM_State::Normal; break;
			case ESFTM_State::NormalClash:
				PPState = ESFTM_State::PickedClash; break;
			case ESFTM_State::PickedClash:
				PPState = ESFTM_State::NormalClash; break;
		default: break;}
	Reply=FReply::Handled();}
	//
	return Reply;
}

FReply SFTM_ListButton::OnMouseButtonUp(const FGeometry &MyGeometry, const FPointerEvent &MouseEvent) {
	return FReply::Handled();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void SFTM_ListButton::SetOwner(const EPTM_Owner InOwner) {
	Owner = InOwner;
}

void SFTM_ListButton::SetState(const ESFTM_State InState) {
	PPState = InState;
}

void SFTM_ListButton::SetFunctionInfo(const FFTM_FunctionInfo InInfo) {
	FInfo = InInfo;
}

void SFTM_ListButton::SetButtonStyle() {
	if (!FTM_Button.IsValid()) {return;}
	//
	switch (PPState) {
		case ESFTM_State::Normal:
			FTM_Button->SetBorderImage(&SafeStyle->Normal); break;
		case ESFTM_State::Picked:
			FTM_Button->SetBorderImage(&PickedStyle->Pressed); break;
		case ESFTM_State::Transfer:
			FTM_Button->SetBorderImage(&TransferStyle->Normal); break;
		case ESFTM_State::NormalClash:
			FTM_Button->SetBorderImage(&ClashStyle->Normal); break;
		case ESFTM_State::PickedClash:
			FTM_Button->SetBorderImage(&ClashStyle->Pressed); break;
		case ESFTM_State::TransferClash:
			FTM_Button->SetBorderImage(&ErrorStyle->Normal); break;
	default: break;}
}

EPTM_Owner SFTM_ListButton::GetOwner() const {
	return Owner;
}

ESFTM_State SFTM_ListButton::GetState() const {
	return PPState;
}

FName SFTM_ListButton::GetName() const {
	return Name;
}

FFTM_FunctionInfo SFTM_ListButton::GetFunctionInfo() const {
	return FInfo;
}

EGraphType SFTM_ListButton::GetFunctionType() const {
	if (!FInfo.Graph.IsValid()) {return EGraphType::GT_MAX;}
	//
	return (FInfo.Graph->GetSchema()->GetGraphType(FInfo.Graph.Get()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

FText SFTM_ListButton::GetButtonCaption() const {
	if (!FInfo.Graph.IsValid()) {return FText::FromString(TEXT("( Unknown Property )"));}
	//
	return FText::FromName(FInfo.Graph->GetFName());
}

FText SFTM_ListButton::GetButtonTooltip() const {
	if (!FInfo.Graph.IsValid()) {return FText::FromString(TEXT("Unknown Type"));}
	//
	if (GetFunctionType()==GT_Function) {return FText::FromString(TEXT("Function Graph"));}
	if (GetFunctionType()==GT_Macro) {return FText::FromString(TEXT("Macro Graph"));}
	//
	return FText::FromString(TEXT("Unknown Type"));
}

const FSlateBrush* SFTM_ListButton::GetTypeBrush() const {
	const FSlateBrush* Brush = FAppStyle::GetBrush(TEXT("Kismet.Status.Unknown.Small"));
	if (!FInfo.Graph.IsValid()) {return Brush;}
	//
	if (GetFunctionType()==GT_Function) {Brush=FAppStyle::GetBrush(TEXT("Kismet.AllClasses.FunctionIcon"));}
	if (GetFunctionType()==GT_Macro) {Brush=FAppStyle::GetBrush(TEXT("GraphEditor.Macro_16x"));}
	//
	return Brush;
}

FSlateColor SFTM_ListButton::GetTypeColor() const {
	FSlateColor Color = FSlateColor(FLinearColor::White);
	//
	return Color;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef LOCTEXT_NAMESPACE

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////