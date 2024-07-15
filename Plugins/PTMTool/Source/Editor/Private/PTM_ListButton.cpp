/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
///		Copyright 2018 (C) Bruno Xavier B. Leite
//////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "PTM_ListButton.h"
#include "EditorStyleSet.h"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define LOCTEXT_NAMESPACE "Synaptech"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// PTM List Item Widget Constructors:

SPTM_ListButton::SPTM_ListButton(){}
SPTM_ListButton::~SPTM_ListButton(){}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// PTM List Item Widget:

void SPTM_ListButton::Construct(const FArguments &InArgs) {
	Name = InArgs._Name.Get();
	Owner = InArgs._Owner.Get();
	PPInfo = InArgs._PPInfo.Get();
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
	SAssignNew(PTM_Button,SBorder)
	.VAlign(VAlign_Center).HAlign(HAlign_Fill).Padding(2)
	[
		SNew(STextBlock).Margin(FMargin(2))
		.Justification(ETextJustify::Center)
		.Text(this,&SPTM_ListButton::GetButtonCaption)
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
				PTM_Button.ToSharedRef()
			]
			+SHorizontalBox::Slot()
			.AutoWidth().VAlign(VAlign_Center).Padding(4,0,4,0)
			[
				SNew(SHorizontalBox)
				+SHorizontalBox::Slot().AutoWidth()
				[
					SNew(SImage)
					.Image(this,&SPTM_ListButton::GetTypeBrush)
					.ColorAndOpacity(this,&SPTM_ListButton::GetTypeColor)
					.ToolTipText(this,&SPTM_ListButton::GetButtonTooltip)
				]
				+SHorizontalBox::Slot().AutoWidth().Padding(-15,0,0,0)
				[
					SNew(SImage)
					.Image(this,&SPTM_ListButton::GetValueBrush)
					.ToolTipText(this,&SPTM_ListButton::GetButtonTooltip)
					.ColorAndOpacity(this,&SPTM_ListButton::GetValueColor)
					.Visibility(this,&SPTM_ListButton::GetValueBrushVisibility)
				]
			]
		];
	} else {
		ChildSlot.HAlign(HAlign_Fill).VAlign(VAlign_Fill)
		[
			SNew(SHorizontalBox)
			+SHorizontalBox::Slot()
			.AutoWidth().VAlign(VAlign_Center).Padding(4,0,4,0)
			[
				SNew(SHorizontalBox)
				+SHorizontalBox::Slot().AutoWidth()
				[
					SNew(SImage)
					.Image(this,&SPTM_ListButton::GetTypeBrush)
					.ColorAndOpacity(this,&SPTM_ListButton::GetTypeColor)
					.ToolTipText(this,&SPTM_ListButton::GetButtonTooltip)
				]
				+SHorizontalBox::Slot().AutoWidth().Padding(-15,0,0,0)
				[
					SNew(SImage)
					.Image(this,&SPTM_ListButton::GetValueBrush)
					.ToolTipText(this,&SPTM_ListButton::GetButtonTooltip)
					.ColorAndOpacity(this,&SPTM_ListButton::GetValueColor)
					.Visibility(this,&SPTM_ListButton::GetValueBrushVisibility)
				]
			]
			+SHorizontalBox::Slot()
			.VAlign(VAlign_Center).Padding(0,0,4,0)
			[
				PTM_Button.ToSharedRef()
			]
		];
	}
}

void SPTM_ListButton::Tick(const FGeometry &AllottedGeometry, const double InCurrentTime, const float InDeltaTime) {
	SetButtonStyle();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool SPTM_ListButton::IsInteractable() const {
	return IsEnabled();
}

bool SPTM_ListButton::SupportsKeyboardFocus() const {
	return false;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void SPTM_ListButton::OnMouseLeave(const FPointerEvent &MouseEvent) {
	SWidget::OnMouseLeave(MouseEvent);
}

void SPTM_ListButton::OnMouseEnter(const FGeometry &MyGeometry, const FPointerEvent &MouseEvent) {}

void SPTM_ListButton::OnMouseCaptureLost(const FCaptureLostEvent &CaptureLostEvent) {}

FReply SPTM_ListButton::OnMouseButtonDown(const FGeometry &MyGeometry, const FPointerEvent &MouseEvent) {
	FReply Reply = FReply::Unhandled();
	//
	if (OnClicked.IsBound()) {
		Reply = OnClicked.Execute();
	} else {
		switch (PPState) {
			case ESPTM_State::Normal:
				PPState = ESPTM_State::Picked; break;
			case ESPTM_State::Picked:
				PPState = ESPTM_State::Normal; break;
			case ESPTM_State::NormalClash:
				PPState = ESPTM_State::PickedClash; break;
			case ESPTM_State::PickedClash:
				PPState = ESPTM_State::NormalClash; break;
		default: break;}
	Reply=FReply::Handled();}
	//
	return Reply;
}

FReply SPTM_ListButton::OnMouseButtonUp(const FGeometry &MyGeometry, const FPointerEvent &MouseEvent) {
	return FReply::Handled();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void SPTM_ListButton::SetOwner(const EPTM_Owner InOwner) {
	Owner = InOwner;
}

void SPTM_ListButton::SetState(const ESPTM_State InState) {
	PPState = InState;
}

void SPTM_ListButton::SetPropertyInfo(const FPTM_PropertyInfo InInfo) {
	PPInfo = InInfo;
}

void SPTM_ListButton::SetButtonStyle() {
	if (!PTM_Button.IsValid()) {return;}
	//
	switch (PPState) {
		case ESPTM_State::Normal:
			PTM_Button->SetBorderImage(&SafeStyle->Normal); break;
		case ESPTM_State::Picked:
			PTM_Button->SetBorderImage(&PickedStyle->Pressed); break;
		case ESPTM_State::Transfer:
			PTM_Button->SetBorderImage(&TransferStyle->Normal); break;
		case ESPTM_State::NormalClash:
			PTM_Button->SetBorderImage(&ClashStyle->Normal); break;
		case ESPTM_State::PickedClash:
			PTM_Button->SetBorderImage(&ClashStyle->Pressed); break;
		case ESPTM_State::TransferClash:
			PTM_Button->SetBorderImage(&ErrorStyle->Normal); break;
	default: break;}
}

EPTM_Owner SPTM_ListButton::GetOwner() const {
	return Owner;
}

ESPTM_State SPTM_ListButton::GetState() const {
	return PPState;
}

FName SPTM_ListButton::GetName() const {
	return Name;
}

FPTM_PropertyInfo SPTM_ListButton::GetPropertyInfo() const {
	return PPInfo;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

FText SPTM_ListButton::GetButtonCaption() const {
	if (!PPInfo.Property.IsValid()) {return FText::FromString(TEXT("( Unknown Property )"));}
	//
	return FText::FromName(PPInfo.Property->GetFName());
}

FText SPTM_ListButton::GetButtonTooltip() const {
	if (!PPInfo.Property.IsValid()) {return FText::FromString(TEXT("Unknown Type"));}
	//
	if (PPInfo.Property->IsA(FByteProperty::StaticClass())) {return FText::FromString(TEXT("Byte Property"));}
	if (PPInfo.Property->IsA(FNameProperty::StaticClass())) {return FText::FromString(TEXT("Name Property"));}
	if (PPInfo.Property->IsA(FTextProperty::StaticClass())) {return FText::FromString(TEXT("Text Property"));}
	if (PPInfo.Property->IsA(FStrProperty::StaticClass())) {return FText::FromString(TEXT("String Property"));}
	if (PPInfo.Property->IsA(FIntProperty::StaticClass())) {return FText::FromString(TEXT("Integer Property"));}
	if (PPInfo.Property->IsA(FBoolProperty::StaticClass())) {return FText::FromString(TEXT("Boolean Property"));}
	if (PPInfo.Property->IsA(FStructProperty::StaticClass())) {return FText::FromString(TEXT("Struct Property"));}
	if (PPInfo.Property->IsA(FEnumProperty::StaticClass())) {return FText::FromString(TEXT("Enumerator Property"));}
	if (PPInfo.Property->IsA(FFloatProperty::StaticClass())||PPInfo.Property->IsA(FDoubleProperty::StaticClass())) {return FText::FromString(TEXT("Float Property"));}
	//
	if (PPInfo.Property->IsA(FSetProperty::StaticClass())) {return FText::FromString(TEXT("Set Property"));}
	if (PPInfo.Property->IsA(FMapProperty::StaticClass())) {return FText::FromString(TEXT("Map Property"));}
	if (PPInfo.Property->IsA(FArrayProperty::StaticClass())) {return FText::FromString(TEXT("Array Property"));}
	if (PPInfo.Property->IsA(FObjectProperty::StaticClass())) {return FText::FromString(TEXT("Object Reference"));}
	//
	return FText::FromString(TEXT("Unknown Type"));
}

const FSlateBrush* SPTM_ListButton::GetTypeBrush() const {
	const FSlateBrush* Brush = FAppStyle::GetBrush(TEXT("Kismet.VariableList.TypeIcon"));
	if (!PPInfo.Property.IsValid()) {return Brush;}
	//
	if (PPInfo.Property->IsA(FObjectProperty::StaticClass())) {Brush=FAppStyle::GetBrush(TEXT("GraphEditor.SpawnActor_16x"));}
	if (PPInfo.Property->IsA(FSetProperty::StaticClass())) {Brush=FAppStyle::GetBrush(TEXT("Kismet.VariableList.SetTypeIcon"));}
	if (PPInfo.Property->IsA(FMapProperty::StaticClass())) {Brush=FAppStyle::GetBrush(TEXT("Kismet.VariableList.MapKeyTypeIcon"));}
	if (PPInfo.Property->IsA(FArrayProperty::StaticClass())) {Brush=FAppStyle::GetBrush(TEXT("Kismet.VariableList.ArrayTypeIcon"));}
	//
	return Brush;
}

const FSlateBrush* SPTM_ListButton::GetValueBrush() const {
	return FAppStyle::GetBrush(TEXT("Kismet.VariableList.MapValueTypeIcon"));
}

FSlateColor SPTM_ListButton::GetTypeColor() const {
	FSlateColor Color = FSlateColor(FLinearColor::White);
	if (!PPInfo.Property.IsValid()) {return Color;}
	//
	if (PPInfo.Property->IsA(FBoolProperty::StaticClass())) {Color=FSlateColor(FLinearColor(0.7f,0,0)); return Color;}
	if (PPInfo.Property->IsA(FStrProperty::StaticClass())) {Color=FSlateColor(FLinearColor(0.85f,0,0.6f)); return Color;}
	if (PPInfo.Property->IsA(FIntProperty::StaticClass())) {Color=FSlateColor(FLinearColor(0,0.95f,0.5f)); return Color;}
	if (PPInfo.Property->IsA(FEnumProperty::StaticClass())) {Color=FSlateColor(FLinearColor(0,0.5f,0.5f)); return Color;}
	if (PPInfo.Property->IsA(FByteProperty::StaticClass())) {Color=FSlateColor(FLinearColor(0,0.4f,0.25f)); return Color;}
	if (PPInfo.Property->IsA(FNameProperty::StaticClass())) {Color=FSlateColor(FLinearColor(0.55f,0.35f,0.8f)); return Color;}
	if (PPInfo.Property->IsA(FTextProperty::StaticClass())) {Color=FSlateColor(FLinearColor(0.85f,0.4f,0.55f)); return Color;}
	if (PPInfo.Property->IsA(FObjectProperty::StaticClass())) {Color=FSlateColor(FLinearColor(0.45f,0.45f,0.85f)); return Color;}
	if (PPInfo.Property->IsA(FFloatProperty::StaticClass())||PPInfo.Property->IsA(FDoubleProperty::StaticClass())) {Color=FSlateColor(FLinearColor(0,0.8f,0)); return Color;}
	//
	if (PPInfo.Property->IsA(FStructProperty::StaticClass())) {
		FStructProperty* PStruct = CastFieldChecked<FStructProperty>(PPInfo.Property.Get());
		Color = FSlateColor(FLinearColor(0,0,0.8f));
		//
		if (PStruct->Struct==TBaseStructure<FColor>::Get()) {Color=FSlateColor(FLinearColor(0,0.45f,0.95f)); return Color;}
		if (PStruct->Struct==TBaseStructure<FVector>::Get()) {Color=FSlateColor(FLinearColor(0.95f,0.95f,0)); return Color;}
		if (PStruct->Struct==TBaseStructure<FTransform>::Get()) {Color=FSlateColor(FLinearColor(0.95f,0.4f,0)); return Color;}
		if (PStruct->Struct==TBaseStructure<FRotator>::Get()) {Color=FSlateColor(FLinearColor(0.5f,0.25f,0.95f)); return Color;}
		if (PStruct->Struct==TBaseStructure<FVector2D>::Get()) {Color=FSlateColor(FLinearColor(0.5f,0.95f,0.5f)); return Color;}
		if (PStruct->Struct==TBaseStructure<FLinearColor>::Get()) {Color=FSlateColor(FLinearColor(0.1f,0.55f,0.95f)); return Color;}
	return Color;}
	//
	if (PPInfo.Property->IsA(FSetProperty::StaticClass())) {
		FSetProperty* PSet = CastFieldChecked<FSetProperty>(PPInfo.Property.Get());
		if (PSet->ElementProp && PSet->ElementProp->IsA(FBoolProperty::StaticClass())) {Color=FSlateColor(FLinearColor(0.5f,0,0)); return Color;}
		if (PSet->ElementProp && PSet->ElementProp->IsA(FStrProperty::StaticClass())) {Color=FSlateColor(FLinearColor(0.85f,0,0.6f)); return Color;}
		if (PSet->ElementProp && PSet->ElementProp->IsA(FIntProperty::StaticClass())) {Color=FSlateColor(FLinearColor(0,0.95f,0.5f)); return Color;}
		if (PSet->ElementProp && PSet->ElementProp->IsA(FEnumProperty::StaticClass())) {Color=FSlateColor(FLinearColor(0,0.5f,0.5f)); return Color;}
		if (PSet->ElementProp && PSet->ElementProp->IsA(FByteProperty::StaticClass())) {Color=FSlateColor(FLinearColor(0,0.4f,0.25f)); return Color;}
		if (PSet->ElementProp && PSet->ElementProp->IsA(FNameProperty::StaticClass())) {Color=FSlateColor(FLinearColor(0.55f,0.35f,0.8f)); return Color;}
		if (PSet->ElementProp && PSet->ElementProp->IsA(FTextProperty::StaticClass())) {Color=FSlateColor(FLinearColor(0.85f,0.4f,0.55f)); return Color;}
		if (PSet->ElementProp && PSet->ElementProp->IsA(FObjectProperty::StaticClass())) {Color=FSlateColor(FLinearColor(0.1f,0.1f,0.85f)); return Color;}
		if (PSet->ElementProp && (PSet->ElementProp->IsA(FFloatProperty::StaticClass())||PSet->ElementProp->IsA(FDoubleProperty::StaticClass()))) {Color=FSlateColor(FLinearColor(0,0.8f,0)); return Color;}
		//
		if (PSet->ElementProp && PSet->ElementProp->IsA(FStructProperty::StaticClass())) {
			FStructProperty* PStruct = CastFieldChecked<FStructProperty>(PSet->ElementProp);
			Color = FSlateColor(FLinearColor(0,0,0.8f));
			//
			if (PStruct->Struct==TBaseStructure<FColor>::Get()) {Color=FSlateColor(FLinearColor(0,0.45f,0.95f)); return Color;}
			if (PStruct->Struct==TBaseStructure<FVector>::Get()) {Color=FSlateColor(FLinearColor(0.95f,0.95f,0)); return Color;}
			if (PStruct->Struct==TBaseStructure<FTransform>::Get()) {Color=FSlateColor(FLinearColor(0.95f,0.4f,0)); return Color;}
			if (PStruct->Struct==TBaseStructure<FRotator>::Get()) {Color=FSlateColor(FLinearColor(0.5f,0.25f,0.95f)); return Color;}
			if (PStruct->Struct==TBaseStructure<FVector2D>::Get()) {Color=FSlateColor(FLinearColor(0.5f,0.95f,0.5f)); return Color;}
			if (PStruct->Struct==TBaseStructure<FLinearColor>::Get()) {Color=FSlateColor(FLinearColor(0.1f,0.55f,0.95f)); return Color;}
		return Color;}
	}
	//
	if (PPInfo.Property->IsA(FMapProperty::StaticClass())) {
		FMapProperty* PMap = CastFieldChecked<FMapProperty>(PPInfo.Property.Get());
		if (PMap->KeyProp && PMap->KeyProp->IsA(FBoolProperty::StaticClass())) {Color=FSlateColor(FLinearColor(0.5f,0,0)); return Color;}
		if (PMap->KeyProp && PMap->KeyProp->IsA(FStrProperty::StaticClass())) {Color=FSlateColor(FLinearColor(0.85f,0,0.6f)); return Color;}
		if (PMap->KeyProp && PMap->KeyProp->IsA(FIntProperty::StaticClass())) {Color=FSlateColor(FLinearColor(0,0.95f,0.5f)); return Color;}
		if (PMap->KeyProp && PMap->KeyProp->IsA(FEnumProperty::StaticClass())) {Color=FSlateColor(FLinearColor(0,0.5f,0.5f)); return Color;}
		if (PMap->KeyProp && PMap->KeyProp->IsA(FByteProperty::StaticClass())) {Color=FSlateColor(FLinearColor(0,0.4f,0.25f)); return Color;}
		if (PMap->KeyProp && PMap->KeyProp->IsA(FNameProperty::StaticClass())) {Color=FSlateColor(FLinearColor(0.55f,0.35f,0.8f)); return Color;}
		if (PMap->KeyProp && PMap->KeyProp->IsA(FTextProperty::StaticClass())) {Color=FSlateColor(FLinearColor(0.85f,0.4f,0.55f)); return Color;}
		if (PMap->KeyProp && PMap->KeyProp->IsA(FObjectProperty::StaticClass())) {Color=FSlateColor(FLinearColor(0.45f,0.45f,0.85f)); return Color;}
		if (PMap->KeyProp && (PMap->KeyProp->IsA(FFloatProperty::StaticClass())||PMap->KeyProp->IsA(FDoubleProperty::StaticClass()))) {Color=FSlateColor(FLinearColor(0,0.8f,0)); return Color;}
		//
		if (PMap->KeyProp && PMap->KeyProp->IsA(FStructProperty::StaticClass())) {
			FStructProperty* PStruct = CastFieldChecked<FStructProperty>(PMap->KeyProp);
			Color = FSlateColor(FLinearColor(0,0,0.8f));
			//
			if (PStruct->Struct==TBaseStructure<FVector>::Get()) {Color=FSlateColor(FLinearColor(0.95f,0.95f,0)); return Color;}
			if (PStruct->Struct==TBaseStructure<FColor>::Get()) {Color=FSlateColor(FLinearColor(0,0.45f,0.95f)); return Color;}
			if (PStruct->Struct==TBaseStructure<FTransform>::Get()) {Color=FSlateColor(FLinearColor(0.95f,0.4f,0)); return Color;}
			if (PStruct->Struct==TBaseStructure<FRotator>::Get()) {Color=FSlateColor(FLinearColor(0.5f,0.25f,0.95f)); return Color;}
			if (PStruct->Struct==TBaseStructure<FVector2D>::Get()) {Color=FSlateColor(FLinearColor(0.5f,0.95f,0.5f)); return Color;}
			if (PStruct->Struct==TBaseStructure<FLinearColor>::Get()) {Color=FSlateColor(FLinearColor(0.1f,0.55f,0.95f)); return Color;}
		return Color;}
	}
	//
	if (PPInfo.Property->IsA(FArrayProperty::StaticClass())) {
		FArrayProperty* PArray = CastFieldChecked<FArrayProperty>(PPInfo.Property.Get());
		if (PArray->Inner && PArray->Inner->IsA(FBoolProperty::StaticClass())) {Color=FSlateColor(FLinearColor(0.5f,0,0)); return Color;}
		if (PArray->Inner && PArray->Inner->IsA(FStrProperty::StaticClass())) {Color=FSlateColor(FLinearColor(0.85f,0,0.6f)); return Color;}
		if (PArray->Inner && PArray->Inner->IsA(FByteProperty::StaticClass())) {Color=FSlateColor(FLinearColor(0,0.4f,0.25f)); return Color;}
		if (PArray->Inner && PArray->Inner->IsA(FIntProperty::StaticClass())) {Color=FSlateColor(FLinearColor(0,0.95f,0.5f)); return Color;}
		if (PArray->Inner && PArray->Inner->IsA(FEnumProperty::StaticClass())) {Color=FSlateColor(FLinearColor(0,0.5f,0.5f)); return Color;}
		if (PArray->Inner && PArray->Inner->IsA(FNameProperty::StaticClass())) {Color=FSlateColor(FLinearColor(0.55f,0.35f,0.8f)); return Color;}
		if (PArray->Inner && PArray->Inner->IsA(FTextProperty::StaticClass())) {Color=FSlateColor(FLinearColor(0.85f,0.4f,0.55f)); return Color;}
		if (PArray->Inner && PArray->Inner->IsA(FObjectProperty::StaticClass())) {Color=FSlateColor(FLinearColor(0.45f,0.45f,0.85f)); return Color;}
		if (PArray->Inner && (PArray->Inner->IsA(FFloatProperty::StaticClass())||PArray->Inner->IsA(FDoubleProperty::StaticClass()))) {Color=FSlateColor(FLinearColor(0,0.8f,0)); return Color;}
		//
		if (PArray->Inner && PArray->Inner->IsA(FStructProperty::StaticClass())) {
			FStructProperty* PStruct = CastFieldChecked<FStructProperty>(PArray->Inner);
			Color = FSlateColor(FLinearColor(0,0,0.8f));
			//
			if (PStruct->Struct==TBaseStructure<FVector>::Get()) {Color=FSlateColor(FLinearColor(0.95f,0.95f,0)); return Color;}
			if (PStruct->Struct==TBaseStructure<FColor>::Get()) {Color=FSlateColor(FLinearColor(0,0.45f,0.95f)); return Color;}
			if (PStruct->Struct==TBaseStructure<FTransform>::Get()) {Color=FSlateColor(FLinearColor(0.95f,0.4f,0)); return Color;}
			if (PStruct->Struct==TBaseStructure<FRotator>::Get()) {Color=FSlateColor(FLinearColor(0.5f,0.25f,0.95f)); return Color;}
			if (PStruct->Struct==TBaseStructure<FVector2D>::Get()) {Color=FSlateColor(FLinearColor(0.5f,0.95f,0.5f)); return Color;}
			if (PStruct->Struct==TBaseStructure<FLinearColor>::Get()) {Color=FSlateColor(FLinearColor(0.1f,0.55f,0.95f)); return Color;}
		return Color;}
	}
	//
	return Color;
}

FSlateColor SPTM_ListButton::GetValueColor() const {
	FSlateColor Color = FSlateColor(FLinearColor::White);
	if (!PPInfo.Property.IsValid()) {return Color;}
	//
	if (PPInfo.Property->IsA(FMapProperty::StaticClass())) {
		FMapProperty* PMap = CastFieldChecked<FMapProperty>(PPInfo.Property.Get());
		if (PMap->ValueProp && PMap->ValueProp->IsA(FBoolProperty::StaticClass())) {Color=FSlateColor(FLinearColor(0.5f,0,0)); return Color;}
		if (PMap->ValueProp && PMap->ValueProp->IsA(FStrProperty::StaticClass())) {Color=FSlateColor(FLinearColor(0.85f,0,0.6f)); return Color;}
		if (PMap->ValueProp && PMap->ValueProp->IsA(FByteProperty::StaticClass())) {Color=FSlateColor(FLinearColor(0,0.4f,0.25f)); return Color;}
		if (PMap->ValueProp && PMap->ValueProp->IsA(FIntProperty::StaticClass())) {Color=FSlateColor(FLinearColor(0,0.95f,0.5f)); return Color;}
		if (PMap->ValueProp && PMap->ValueProp->IsA(FNameProperty::StaticClass())) {Color=FSlateColor(FLinearColor(0.55f,0.35f,0.8f)); return Color;}
		if (PMap->ValueProp && PMap->ValueProp->IsA(FEnumProperty::StaticClass())) {Color=FSlateColor(FLinearColor(0,0.5f,0.5f)); return Color;}
		if (PMap->ValueProp && PMap->ValueProp->IsA(FTextProperty::StaticClass())) {Color=FSlateColor(FLinearColor(0.85f,0.4f,0.55f)); return Color;}
		if (PMap->ValueProp && PMap->ValueProp->IsA(FObjectProperty::StaticClass())) {Color=FSlateColor(FLinearColor(0.45f,0.45f,0.85f)); return Color;}
		if (PMap->ValueProp && (PMap->ValueProp->IsA(FFloatProperty::StaticClass())||PMap->ValueProp->IsA(FDoubleProperty::StaticClass()))) {Color=FSlateColor(FLinearColor(0,0.8f,0)); return Color;}
		//
		if (PMap->ValueProp && PMap->ValueProp->IsA(FStructProperty::StaticClass())) {
			FStructProperty* PStruct = CastFieldChecked<FStructProperty>(PMap->ValueProp);
			Color = FSlateColor(FLinearColor(0,0,0.8f));
			//
			if (PStruct->Struct==TBaseStructure<FVector>::Get()) {Color=FSlateColor(FLinearColor(0.95f,0.95f,0)); return Color;}
			if (PStruct->Struct==TBaseStructure<FColor>::Get()) {Color=FSlateColor(FLinearColor(0,0.45f,0.95f)); return Color;}
			if (PStruct->Struct==TBaseStructure<FTransform>::Get()) {Color=FSlateColor(FLinearColor(0.95f,0.4f,0)); return Color;}
			if (PStruct->Struct==TBaseStructure<FRotator>::Get()) {Color=FSlateColor(FLinearColor(0.5f,0.25f,0.95f)); return Color;}
			if (PStruct->Struct==TBaseStructure<FVector2D>::Get()) {Color=FSlateColor(FLinearColor(0.5f,0.95f,0.5f)); return Color;}
			if (PStruct->Struct==TBaseStructure<FLinearColor>::Get()) {Color=FSlateColor(FLinearColor(0.1f,0.55f,0.95f)); return Color;}
		return Color;}
	}
	//
	return Color;
}

EVisibility SPTM_ListButton::GetValueBrushVisibility() const {
	if (!PPInfo.Property.IsValid()) {return EVisibility::Collapsed;}
	if (PPInfo.Property->IsA(FMapProperty::StaticClass())) {return EVisibility::Visible;}
	//
	return EVisibility::Collapsed;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef LOCTEXT_NAMESPACE

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////